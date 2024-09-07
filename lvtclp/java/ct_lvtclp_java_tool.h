#ifndef CT_LVTCLP_JAVA_TOOL_H
#define CT_LVTCLP_JAVA_TOOL_H
// #include "lvtclp_java_export.h"
#include <QObject>
#include <filesystem>
#include <lvtclp_export.h>
#include <optional>
#include <vector>

#include "antlr4-runtime.h"
#include "java/Java8Lexer.h"
#include "java/Java8Parser.h"
#include "java/Java8ParserBaseVisitor.h"
#include <unordered_map>

namespace Codethink::lvtclp_java {

class LVTCLP_EXPORT Tool : QObject {
    Q_OBJECT
  public:
    Tool(std::filesystem::path projectRoot);
    // a profile might be needed or let that be an internal detail
    std::vector<QString> getProjectModules();

  private:
    // i hope there is not a both case
    // i have not planned for a project that has both but it can be added.
    enum JVM_BUILD_SYSTEM { MAVEN, GRADLE, NOT_JAVA };
    JVM_BUILD_SYSTEM buildSystemOfProject;
    std::filesystem::path buildFile;
    std::vector<QString> modules;
    /* From https://docs.gradle.org/current/userguide/migrating_from_maven.html:
Which brings us to Maven profiles.
These are a way to enable and disable different configurations based on environment,
target platform, or any other similar factor.
Logically, they are nothing more than limited if statements.
And since Gradle has much more powerful ways to declare conditions,
it does not need to have formal support for profiles (except in the POMs of dependencies).
You can easily get the same behavior by combining conditions with secondary build scripts, as you’ll see.
    */
    // TLDR:this is maven specific, in gradle there are no profiles
    std::unordered_map<std::string, std::vector<std::string>> mavenModulesPerProfile = {};

    // Java8Lexer lexer;
    // Java8Parser parser;
    // Java8ParserBaseVisitor customVisitor;
    std::filesystem::path projectRootInput;
    // also detects the build system and stores the buildFile for later usage;
    bool isJavaProject();
    // different in maven and gradle
    // if there are no maven profiles it is just a get("") -> all modules
    // true if empty->leaf module(has code), or a module that contains other modules
    std::vector<QString> detectModulesIn(const std::filesystem::path root);
    std::optional<QString> sourceDirectory = {};
    void parseModule(const std::filesystem::path& moduleRoot);
    void parseJavaProject();
    void parseProjectIn(const std::filesystem::path& root);
    void parseCodeInModule(const std::filesystem::path& root);
    bool shouldParseFile(const std::filesystem::path& file);
    void parseJavaFile(const std::filesystem::path& javaFile);
    // can i return a const &?
    std::filesystem::path findCodeDirIn(const std::filesystem::path& root);
};

} // namespace Codethink::lvtclp_java

#endif // CT_LVTCLP_JAVA_TOOL_H
