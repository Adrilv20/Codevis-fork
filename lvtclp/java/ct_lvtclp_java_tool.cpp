#include "ct_lvtclp_java_tool.h"
#include <QFile>
#include <QFileInfo>
#include <QThread>
#include <QXmlStreamReader>
#include <algorithm>
#include <execution>
#include <iostream>
#include <java/JavaParserBaseVisitor.h>
#include <qelapsedtimer.h>

namespace {

}

namespace Codethink::lvtclp_java {

JavaTool::JavaTool(std::filesystem::path projectRoot): projectRootInput(projectRoot)
{
    std::cout << "\nCreating java parser" << "\n";
    auto shouldParse = this->isJavaProject();
    if (shouldParse) {
        std::cout << "Provided path IS a java project\n";
        this->parseProjectIn(projectRootInput);
    }
}

void JavaTool::parseProjectIn(const std::filesystem::path& root)
{
    std::cout << "Parsing project in " << root << "\n";
    auto modules = this->detectModulesIn(root);
    if (modules.empty()) {
        // parseCode
        this->parseCodeInModule(root);
        return;
    } else {
        // parseModules
        for (auto module : modules) {
            // todo remove this: only for my case
            if (module.contains("samples"))
                continue;
            this->parseProjectIn(root / module.toStdString());
        }
    }
}

std::filesystem::path JavaTool::findCodeDirIn(const std::filesystem::path& root)
{
    std::array<std::string, 3> defaultDirs{"src/main/java", "src/main/kotlin", "src/main/scala"};
    for (auto dir : defaultDirs) {
        if (std::filesystem::is_directory(root / dir)) {
            return root / dir;
        }
    }
    assert(false);
}

void JavaTool::parseCodeInModule(const std::filesystem::path& root)
{
    std::vector<std::filesystem::path> filesToParse;
    std::cout << "======Parsing java files in path: " << root << "=================\n";
    // todo, pick that up from the maven <sourceDirectory> tag
    auto source = this->findCodeDirIn(root);
    for (auto dir_entry : std::filesystem::recursive_directory_iterator(source)) {
        // todo, add support for other file types
        if (!dir_entry.is_regular_file() || dir_entry.path().extension().empty()) {
            continue;
        }
        if (dir_entry.path().extension() == ".java") {
            filesToParse.push_back(dir_entry.path());
        } else {
            std::cout << "Non java file found, ignored." << "\n";
            continue;
        }
    }

    std::for_each(filesToParse.begin(), filesToParse.end(), [this](auto javaFile) {
        this->parseJavaFile(javaFile);
    });
}

void JavaTool::parseJavaProject()
{
    if (buildSystemOfProject == MAVEN) {
        for (auto it = mavenModulesPerProfile.begin(); it != mavenModulesPerProfile.end(); it++) {
            std::string_view currentProfile = it->first;
            for (auto module : it->second) {
                parseModule(projectRootInput / module);
            }
        }
    }
}

void JavaTool::parseModule(const std::filesystem::path& moduleRoot)
{
    assert(std::filesystem::is_directory(moduleRoot));
    std::cout << "Parsing module in dir: " << moduleRoot << "\n";
}

std::vector<QString> JavaTool::detectModulesIn(const std::filesystem::path& root)
{
    std::vector<QString> modules;
    if (buildSystemOfProject == MAVEN) {
        // read the pom.xml using QXmlStreamReader
        QFile pomXmlFile(root / "pom.xml");
        if (!pomXmlFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            std::cout << "Could not open pom.xml file, exiting\n";
            std::cout << "Hybrid projects are not yet supported";
            return {};
        }
        QXmlStreamReader xml(&pomXmlFile);
        QString currentProfile = "";
        while (!xml.atEnd()) {
            auto xmlToken = xml.readNext();
            if (xmlToken == QXmlStreamReader::StartElement) {
                // qDebug() << "Name: " << xml.name();
                if (xml.name().compare("sourceDirectory") == 0) {
                    sourceDirectory = xml.readElementText();
                }

                if (xml.name().compare("profile") == 0) {
                    while (!(xml.tokenType() == QXmlStreamReader::EndElement && xml.name().compare("id"))) {
                        xml.readNext();
                        if (xml.name().compare("id") == 0) {
                            currentProfile = xml.readElementText();
                        }
                    }
                    // not sure about that continue here
                    continue;
                }

                if (xml.name().compare("modules") == 0) {
                    while (!(xml.tokenType() == QXmlStreamReader::EndElement && xml.name().compare("modules") == 0)) {
                        xml.readNext();
                        auto tagName = xml.name();
                        if (tagName.compare("module") == 0) {
                            auto moduleName = xml.readElementText();
                            modules.push_back(moduleName);
                            // qDebug() << "Module: " << moduleName << " \n";
                            if (mavenModulesPerProfile.contains(currentProfile.toStdString())) {
                                // just add profile to the vector
                                mavenModulesPerProfile.at(currentProfile.toStdString())
                                    .push_back(std::move(moduleName.toStdString()));
                            } else {
                                std::vector<std::string> profileModules;
                                profileModules.push_back(moduleName.toStdString());
                                mavenModulesPerProfile[currentProfile.toStdString()] = std::move(profileModules);
                            }
                        }
                    }
                    // not sure about that continue here
                    continue;
                }
            }
        }
        // for(auto it = mavenModulesPerProfile.begin(); it != mavenModulesPerProfile.end(); ++it){
        //     std::cout << "Modules for Profile: " << it->first << "\n";
        //     for(auto val : it->second){
        //         std::cout << val << "\n";
        //     }
        // }

        // std::cout << "Created map of profiles: \n" << this->modulesPerProfile << "\n";
        return modules;
    }
    std::cout << "Gradle projects not yet supported";
    return {};

    // i need to know the type of the project so i can look into its pom.xml/build.gradle file
    // and determine where the java files at, <build> <sourceDirectory></></>
    // quarkus is a maven project
    // i might need an id to determine the correct profile(as in the openapi-generator repo makes it evident
    // that guessing is not possible(unless there is no profiles, as is the case in apache spark
    // i get the <profile> with the correct id and then get the <modules><module> values

    // for gradle, i get the settings.gradle file (kafka is a big good gradle project,also spring boot)
    // and in there i look for an include command and the strings it contains
    // but they are in the form of top-level:lower:sublevel
}

bool JavaTool::shouldParseFile(const std::filesystem::path& file)
{
    // todo fix this
    auto fileStr = QString(file.filename().c_str());
    bool isJavaFile = fileStr.endsWith(".java");
    return isJavaFile;
}

void JavaTool::parseJavaFile(const std::filesystem::path& javaFile)
{
    std::cout << "Parsing file: " << javaFile << "\n";
    JavaParserHelper::parseJavaFile(javaFile, this->memDb());
}

} // namespace Codethink::lvtclp_java

bool Codethink::lvtclp_java::JavaTool::isJavaProject()
{
    std::cout << "Checking if the given directory is a java project" << "\n";
    std::cout << "Checking at the project root for the files: pom.xml,settings.gradle\n";
    QElapsedTimer timer;
    timer.start();
    for (auto& dir_entry : std::filesystem::directory_iterator(projectRootInput)) {
        if (dir_entry.is_regular_file()) {
            if (dir_entry.path().filename() == "pom.xml") {
                buildSystemOfProject = MAVEN;
                buildFile = dir_entry.path();
                std::cout << "Maven Build-file found in " << timer.elapsed() << "ms ." << "\n";
                return true;
            }
            if (dir_entry.path().filename() == "settings.gradle") {
                buildSystemOfProject = GRADLE;
                buildFile = dir_entry.path();
                std::cout << "Gradle Build-file found in " << timer.elapsed() << "ms ." << "\n";
                return true;
            }
        }
    }

    return false;
} // namespace Codethink::lvtclp_java
