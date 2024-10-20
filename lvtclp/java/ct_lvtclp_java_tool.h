#ifndef CT_LVTCLP_JAVA_TOOL_H
#define CT_LVTCLP_JAVA_TOOL_H
// #include "lvtclp_java_export.h"
#include "ct_lvtclp_testutil.h"
#include "lvtclp_export.h"
#include <QObject>
#include <ct_lvtmdb_objectstore.h>
#include <filesystem>
#include <lvtclp_export.h>
#include <optional>
#include <vector>

#include "JavaParserVisitor.h"
#include "antlr4-runtime.h"
#include "java/JavaLexer.h"
#include "java/JavaParser.h"
#include "java/JavaParserBaseVisitor.h"
#include <unordered_map>

#include <QElapsedTimer>
namespace Codethink::lvtclp_java {

class LVTCLP_EXPORT JavaParserHelper : QObject {
    Q_OBJECT
  public:
    static auto parseJavaFile(std::filesystem::path javaFile)
    {
        assert(javaFile.extension() == ".java");
        std::cout << "Parsing file: " << javaFile << "\n";
        using namespace antlr4;
        std::ifstream stream;
        stream.open(javaFile);
        using ReturnType = decltype(std::declval<JavaParserBaseVisitor>().getResult());
        if (!stream.is_open()) {
            std::cerr << "Error opening file: " << javaFile << "\n";
            return ReturnType{};
        }
        QElapsedTimer timer;
        timer.start();
        ANTLRInputStream input(stream);
        JavaLexer lexer(&input);
        CommonTokenStream tokens(&lexer);
        JavaParser parser(&tokens);
        tree::ParseTree *tree = parser.compilationUnit();
        JavaParserBaseVisitor visitor;
        visitor.visit(tree);
        std::cout << "Parsing time: " << timer.elapsed() << "ms .\n";
        return ReturnType{visitor.getResult()};
    }
    struct JField {
        std::string type;
    };
    struct JMethodDeclaration { };
    struct JClassDeclaration { };
    struct JImport { };

    struct JavaParseResult {
        // qualified name
        std::string package;
        // qualified name
        std::vector<JImport> imports;
        std::vector<JClassDeclaration> classes;
        // dependencies is the final result
        std::vector<std::string> dependencies;
        std::vector<JField> fields;
        std::vector<JMethodDeclaration> methodDeclarations;
        // There is also this in ct_lvtclp_testutil.h which is a good info. Codethink::lvtclp::ModelUtil::
    };
};

class LVTCLP_EXPORT JavaTool : QObject {
    Q_OBJECT
  public:
    JavaTool(std::filesystem::path projectRoot);
    // a profile might be needed or let that be an internal detail
    std::vector<QString> getProjectModules();
    lvtmdb::ObjectStore& getObjectStore();
    void setSharedMemDb(std::shared_ptr<lvtmdb::ObjectStore> const& sharedMemDb)
    {
        this->sharedMemDb = sharedMemDb;
    };

  private:
    std::shared_ptr<lvtmdb::ObjectStore> sharedMemDb = nullptr;
    lvtmdb::ObjectStore localMemDb;
    // i hope there is not a both case
    // i have not planned for a project that has both but it can be added.
    struct ParseStatistics {
        unsigned long totalFilesParsed;
        unsigned long totalTimeParsed;
    };
    ParseStatistics stats{0, 0};
    enum JVM_BUILD_SYSTEM { MAVEN, GRADLE, NOT_JAVA };
    unsigned int parseTime = 0;
    JVM_BUILD_SYSTEM buildSystemOfProject;
    std::filesystem::path buildFile;
    std::vector<QString> modules;
    [[nodiscard]] lvtmdb::ObjectStore& memDb()
    {
        return sharedMemDb ? *sharedMemDb : localMemDb;
    }
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
    // empty if leaf module(has code), or a module that contains other modules
    std::vector<QString> detectModulesIn(const std::filesystem::path root);
    std::optional<QString> sourceDirectory = {};
    void parseModule(const std::filesystem::path& moduleRoot);
    // void parseJavaProject();
    void parseProjectIn(const std::filesystem::path& root);
    void parseCodeInModule(const std::filesystem::path& root);
    bool shouldParseFile(const std::filesystem::path& file);
    void parseJavaFile(const std::filesystem::path& javaFile);
    // can i return a const &?
    std::filesystem::path findCodeDirIn(const std::filesystem::path& root);
};

} // namespace Codethink::lvtclp_java

#endif // CT_LVTCLP_JAVA_TOOL_H
