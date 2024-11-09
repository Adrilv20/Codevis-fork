
// Generated from /home/georgefkd/Documents/JavaParser.g4 by ANTLR 4.13.2

#include "JavaParserListener.h"
#include "JavaParserVisitor.h"

#include "JavaParser.h"

using namespace antlrcpp;

using namespace antlr4;

namespace {

struct JavaParserStaticData final {
    JavaParserStaticData(std::vector<std::string> ruleNames,
                         std::vector<std::string> literalNames,
                         std::vector<std::string> symbolicNames):
        ruleNames(std::move(ruleNames)),
        literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames)
    {
    }

    JavaParserStaticData(const JavaParserStaticData&) = delete;
    JavaParserStaticData(JavaParserStaticData&&) = delete;
    JavaParserStaticData& operator=(const JavaParserStaticData&) = delete;
    JavaParserStaticData& operator=(JavaParserStaticData&&) = delete;

    std::vector<antlr4::dfa::DFA> decisionToDFA;
    antlr4::atn::PredictionContextCache sharedContextCache;
    const std::vector<std::string> ruleNames;
    const std::vector<std::string> literalNames;
    const std::vector<std::string> symbolicNames;
    const antlr4::dfa::Vocabulary vocabulary;
    antlr4::atn::SerializedATNView serializedATN;
    std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag javaparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
    std::unique_ptr<JavaParserStaticData>
        javaparserParserStaticData = nullptr;

void javaparserParserInitialize()
{
#if ANTLR4_USE_THREAD_LOCAL_CACHE
    if (javaparserParserStaticData != nullptr) {
        return;
    }
#else
    assert(javaparserParserStaticData == nullptr);
#endif
    auto staticData =
        std::make_unique<JavaParserStaticData>(std::vector<std::string>{"compilationUnit",
                                                                        "packageDeclaration",
                                                                        "importDeclaration",
                                                                        "typeDeclaration",
                                                                        "modifier",
                                                                        "classOrInterfaceModifier",
                                                                        "variableModifier",
                                                                        "classDeclaration",
                                                                        "typeParameters",
                                                                        "typeParameter",
                                                                        "typeBound",
                                                                        "enumDeclaration",
                                                                        "enumConstants",
                                                                        "enumConstant",
                                                                        "enumBodyDeclarations",
                                                                        "interfaceDeclaration",
                                                                        "classBody",
                                                                        "interfaceBody",
                                                                        "classBodyDeclaration",
                                                                        "memberDeclaration",
                                                                        "methodDeclaration",
                                                                        "methodBody",
                                                                        "typeTypeOrVoid",
                                                                        "genericMethodDeclaration",
                                                                        "genericConstructorDeclaration",
                                                                        "constructorDeclaration",
                                                                        "compactConstructorDeclaration",
                                                                        "fieldDeclaration",
                                                                        "interfaceBodyDeclaration",
                                                                        "interfaceMemberDeclaration",
                                                                        "constDeclaration",
                                                                        "constantDeclarator",
                                                                        "interfaceMethodDeclaration",
                                                                        "interfaceMethodModifier",
                                                                        "genericInterfaceMethodDeclaration",
                                                                        "interfaceCommonBodyDeclaration",
                                                                        "variableDeclarators",
                                                                        "variableDeclarator",
                                                                        "variableDeclaratorId",
                                                                        "variableInitializer",
                                                                        "arrayInitializer",
                                                                        "classOrInterfaceType",
                                                                        "typeArgument",
                                                                        "qualifiedNameList",
                                                                        "formalParameters",
                                                                        "receiverParameter",
                                                                        "formalParameterList",
                                                                        "formalParameter",
                                                                        "lastFormalParameter",
                                                                        "lambdaLVTIList",
                                                                        "lambdaLVTIParameter",
                                                                        "qualifiedName",
                                                                        "literal",
                                                                        "integerLiteral",
                                                                        "floatLiteral",
                                                                        "altAnnotationQualifiedName",
                                                                        "annotation",
                                                                        "elementValuePairs",
                                                                        "elementValuePair",
                                                                        "elementValue",
                                                                        "elementValueArrayInitializer",
                                                                        "annotationTypeDeclaration",
                                                                        "annotationTypeBody",
                                                                        "annotationTypeElementDeclaration",
                                                                        "annotationTypeElementRest",
                                                                        "annotationMethodOrConstantRest",
                                                                        "annotationMethodRest",
                                                                        "annotationConstantRest",
                                                                        "defaultValue",
                                                                        "moduleDeclaration",
                                                                        "moduleBody",
                                                                        "moduleDirective",
                                                                        "requiresModifier",
                                                                        "recordDeclaration",
                                                                        "recordHeader",
                                                                        "recordComponentList",
                                                                        "recordComponent",
                                                                        "recordBody",
                                                                        "block",
                                                                        "blockStatement",
                                                                        "localVariableDeclaration",
                                                                        "identifier",
                                                                        "typeIdentifier",
                                                                        "localTypeDeclaration",
                                                                        "statement",
                                                                        "catchClause",
                                                                        "catchType",
                                                                        "finallyBlock",
                                                                        "resourceSpecification",
                                                                        "resources",
                                                                        "resource",
                                                                        "switchBlockStatementGroup",
                                                                        "switchLabel",
                                                                        "forControl",
                                                                        "forInit",
                                                                        "enhancedForControl",
                                                                        "parExpression",
                                                                        "expressionList",
                                                                        "methodCall",
                                                                        "expression",
                                                                        "pattern",
                                                                        "lambdaExpression",
                                                                        "lambdaParameters",
                                                                        "lambdaBody",
                                                                        "primary",
                                                                        "switchExpression",
                                                                        "switchLabeledRule",
                                                                        "guardedPattern",
                                                                        "switchRuleOutcome",
                                                                        "classType",
                                                                        "creator",
                                                                        "createdName",
                                                                        "innerCreator",
                                                                        "arrayCreatorRest",
                                                                        "classCreatorRest",
                                                                        "explicitGenericInvocation",
                                                                        "typeArgumentsOrDiamond",
                                                                        "nonWildcardTypeArgumentsOrDiamond",
                                                                        "nonWildcardTypeArguments",
                                                                        "typeList",
                                                                        "typeType",
                                                                        "primitiveType",
                                                                        "typeArguments",
                                                                        "superSuffix",
                                                                        "explicitGenericInvocationSuffix",
                                                                        "arguments"},
                                               std::vector<std::string>{"",
                                                                        "'abstract'",
                                                                        "'assert'",
                                                                        "'boolean'",
                                                                        "'break'",
                                                                        "'byte'",
                                                                        "'case'",
                                                                        "'catch'",
                                                                        "'char'",
                                                                        "'class'",
                                                                        "'const'",
                                                                        "'continue'",
                                                                        "'default'",
                                                                        "'do'",
                                                                        "'double'",
                                                                        "'else'",
                                                                        "'enum'",
                                                                        "'extends'",
                                                                        "'final'",
                                                                        "'finally'",
                                                                        "'float'",
                                                                        "'for'",
                                                                        "'if'",
                                                                        "'goto'",
                                                                        "'implements'",
                                                                        "'import'",
                                                                        "'instanceof'",
                                                                        "'int'",
                                                                        "'interface'",
                                                                        "'long'",
                                                                        "'native'",
                                                                        "'new'",
                                                                        "'package'",
                                                                        "'private'",
                                                                        "'protected'",
                                                                        "'public'",
                                                                        "'return'",
                                                                        "'short'",
                                                                        "'static'",
                                                                        "'strictfp'",
                                                                        "'super'",
                                                                        "'switch'",
                                                                        "'synchronized'",
                                                                        "'this'",
                                                                        "'throw'",
                                                                        "'throws'",
                                                                        "'transient'",
                                                                        "'try'",
                                                                        "'void'",
                                                                        "'volatile'",
                                                                        "'while'",
                                                                        "'module'",
                                                                        "'open'",
                                                                        "'requires'",
                                                                        "'exports'",
                                                                        "'opens'",
                                                                        "'to'",
                                                                        "'uses'",
                                                                        "'provides'",
                                                                        "'with'",
                                                                        "'transitive'",
                                                                        "'var'",
                                                                        "'yield'",
                                                                        "'record'",
                                                                        "'sealed'",
                                                                        "'permits'",
                                                                        "'non-sealed'",
                                                                        "",
                                                                        "",
                                                                        "",
                                                                        "",
                                                                        "",
                                                                        "",
                                                                        "",
                                                                        "",
                                                                        "",
                                                                        "",
                                                                        "'null'",
                                                                        "'('",
                                                                        "')'",
                                                                        "'{'",
                                                                        "'}'",
                                                                        "'['",
                                                                        "']'",
                                                                        "';'",
                                                                        "','",
                                                                        "'.'",
                                                                        "'='",
                                                                        "'>'",
                                                                        "'<'",
                                                                        "'!'",
                                                                        "'~'",
                                                                        "'\\u003F'",
                                                                        "':'",
                                                                        "'=='",
                                                                        "'<='",
                                                                        "'>='",
                                                                        "'!='",
                                                                        "'&&'",
                                                                        "'||'",
                                                                        "'++'",
                                                                        "'--'",
                                                                        "'+'",
                                                                        "'-'",
                                                                        "'*'",
                                                                        "'/'",
                                                                        "'&'",
                                                                        "'|'",
                                                                        "'^'",
                                                                        "'%'",
                                                                        "'+='",
                                                                        "'-='",
                                                                        "'*='",
                                                                        "'/='",
                                                                        "'&='",
                                                                        "'|='",
                                                                        "'^='",
                                                                        "'%='",
                                                                        "'<<='",
                                                                        "'>>='",
                                                                        "'>>>='",
                                                                        "'->'",
                                                                        "'::'",
                                                                        "'@'",
                                                                        "'...'"},
                                               std::vector<std::string>{"",
                                                                        "ABSTRACT",
                                                                        "ASSERT",
                                                                        "BOOLEAN",
                                                                        "BREAK",
                                                                        "BYTE",
                                                                        "CASE",
                                                                        "CATCH",
                                                                        "CHAR",
                                                                        "CLASS",
                                                                        "CONST",
                                                                        "CONTINUE",
                                                                        "DEFAULT",
                                                                        "DO",
                                                                        "DOUBLE",
                                                                        "ELSE",
                                                                        "ENUM",
                                                                        "EXTENDS",
                                                                        "FINAL",
                                                                        "FINALLY",
                                                                        "FLOAT",
                                                                        "FOR",
                                                                        "IF",
                                                                        "GOTO",
                                                                        "IMPLEMENTS",
                                                                        "IMPORT",
                                                                        "INSTANCEOF",
                                                                        "INT",
                                                                        "INTERFACE",
                                                                        "LONG",
                                                                        "NATIVE",
                                                                        "NEW",
                                                                        "PACKAGE",
                                                                        "PRIVATE",
                                                                        "PROTECTED",
                                                                        "PUBLIC",
                                                                        "RETURN",
                                                                        "SHORT",
                                                                        "STATIC",
                                                                        "STRICTFP",
                                                                        "SUPER",
                                                                        "SWITCH",
                                                                        "SYNCHRONIZED",
                                                                        "THIS",
                                                                        "THROW",
                                                                        "THROWS",
                                                                        "TRANSIENT",
                                                                        "TRY",
                                                                        "VOID",
                                                                        "VOLATILE",
                                                                        "WHILE",
                                                                        "MODULE",
                                                                        "OPEN",
                                                                        "REQUIRES",
                                                                        "EXPORTS",
                                                                        "OPENS",
                                                                        "TO",
                                                                        "USES",
                                                                        "PROVIDES",
                                                                        "WITH",
                                                                        "TRANSITIVE",
                                                                        "VAR",
                                                                        "YIELD",
                                                                        "RECORD",
                                                                        "SEALED",
                                                                        "PERMITS",
                                                                        "NON_SEALED",
                                                                        "DECIMAL_LITERAL",
                                                                        "HEX_LITERAL",
                                                                        "OCT_LITERAL",
                                                                        "BINARY_LITERAL",
                                                                        "FLOAT_LITERAL",
                                                                        "HEX_FLOAT_LITERAL",
                                                                        "BOOL_LITERAL",
                                                                        "CHAR_LITERAL",
                                                                        "STRING_LITERAL",
                                                                        "TEXT_BLOCK",
                                                                        "NULL_LITERAL",
                                                                        "LPAREN",
                                                                        "RPAREN",
                                                                        "LBRACE",
                                                                        "RBRACE",
                                                                        "LBRACK",
                                                                        "RBRACK",
                                                                        "SEMI",
                                                                        "COMMA",
                                                                        "DOT",
                                                                        "ASSIGN",
                                                                        "GT",
                                                                        "LT",
                                                                        "BANG",
                                                                        "TILDE",
                                                                        "QUESTION",
                                                                        "COLON",
                                                                        "EQUAL",
                                                                        "LE",
                                                                        "GE",
                                                                        "NOTEQUAL",
                                                                        "AND",
                                                                        "OR",
                                                                        "INC",
                                                                        "DEC",
                                                                        "ADD",
                                                                        "SUB",
                                                                        "MUL",
                                                                        "DIV",
                                                                        "BITAND",
                                                                        "BITOR",
                                                                        "CARET",
                                                                        "MOD",
                                                                        "ADD_ASSIGN",
                                                                        "SUB_ASSIGN",
                                                                        "MUL_ASSIGN",
                                                                        "DIV_ASSIGN",
                                                                        "AND_ASSIGN",
                                                                        "OR_ASSIGN",
                                                                        "XOR_ASSIGN",
                                                                        "MOD_ASSIGN",
                                                                        "LSHIFT_ASSIGN",
                                                                        "RSHIFT_ASSIGN",
                                                                        "URSHIFT_ASSIGN",
                                                                        "ARROW",
                                                                        "COLONCOLON",
                                                                        "AT",
                                                                        "ELLIPSIS",
                                                                        "WS",
                                                                        "COMMENT",
                                                                        "LINE_COMMENT",
                                                                        "IDENTIFIER"});
    static const int32_t serializedATNSegment[] = {
        4,    1,    128,  1755, 2,    0,    7,    0,    2,    1,    7,    1,    2,    2,    7,    2,    2,    3,
        7,    3,    2,    4,    7,    4,    2,    5,    7,    5,    2,    6,    7,    6,    2,    7,    7,    7,
        2,    8,    7,    8,    2,    9,    7,    9,    2,    10,   7,    10,   2,    11,   7,    11,   2,    12,
        7,    12,   2,    13,   7,    13,   2,    14,   7,    14,   2,    15,   7,    15,   2,    16,   7,    16,
        2,    17,   7,    17,   2,    18,   7,    18,   2,    19,   7,    19,   2,    20,   7,    20,   2,    21,
        7,    21,   2,    22,   7,    22,   2,    23,   7,    23,   2,    24,   7,    24,   2,    25,   7,    25,
        2,    26,   7,    26,   2,    27,   7,    27,   2,    28,   7,    28,   2,    29,   7,    29,   2,    30,
        7,    30,   2,    31,   7,    31,   2,    32,   7,    32,   2,    33,   7,    33,   2,    34,   7,    34,
        2,    35,   7,    35,   2,    36,   7,    36,   2,    37,   7,    37,   2,    38,   7,    38,   2,    39,
        7,    39,   2,    40,   7,    40,   2,    41,   7,    41,   2,    42,   7,    42,   2,    43,   7,    43,
        2,    44,   7,    44,   2,    45,   7,    45,   2,    46,   7,    46,   2,    47,   7,    47,   2,    48,
        7,    48,   2,    49,   7,    49,   2,    50,   7,    50,   2,    51,   7,    51,   2,    52,   7,    52,
        2,    53,   7,    53,   2,    54,   7,    54,   2,    55,   7,    55,   2,    56,   7,    56,   2,    57,
        7,    57,   2,    58,   7,    58,   2,    59,   7,    59,   2,    60,   7,    60,   2,    61,   7,    61,
        2,    62,   7,    62,   2,    63,   7,    63,   2,    64,   7,    64,   2,    65,   7,    65,   2,    66,
        7,    66,   2,    67,   7,    67,   2,    68,   7,    68,   2,    69,   7,    69,   2,    70,   7,    70,
        2,    71,   7,    71,   2,    72,   7,    72,   2,    73,   7,    73,   2,    74,   7,    74,   2,    75,
        7,    75,   2,    76,   7,    76,   2,    77,   7,    77,   2,    78,   7,    78,   2,    79,   7,    79,
        2,    80,   7,    80,   2,    81,   7,    81,   2,    82,   7,    82,   2,    83,   7,    83,   2,    84,
        7,    84,   2,    85,   7,    85,   2,    86,   7,    86,   2,    87,   7,    87,   2,    88,   7,    88,
        2,    89,   7,    89,   2,    90,   7,    90,   2,    91,   7,    91,   2,    92,   7,    92,   2,    93,
        7,    93,   2,    94,   7,    94,   2,    95,   7,    95,   2,    96,   7,    96,   2,    97,   7,    97,
        2,    98,   7,    98,   2,    99,   7,    99,   2,    100,  7,    100,  2,    101,  7,    101,  2,    102,
        7,    102,  2,    103,  7,    103,  2,    104,  7,    104,  2,    105,  7,    105,  2,    106,  7,    106,
        2,    107,  7,    107,  2,    108,  7,    108,  2,    109,  7,    109,  2,    110,  7,    110,  2,    111,
        7,    111,  2,    112,  7,    112,  2,    113,  7,    113,  2,    114,  7,    114,  2,    115,  7,    115,
        2,    116,  7,    116,  2,    117,  7,    117,  2,    118,  7,    118,  2,    119,  7,    119,  2,    120,
        7,    120,  2,    121,  7,    121,  2,    122,  7,    122,  2,    123,  7,    123,  2,    124,  7,    124,
        2,    125,  7,    125,  1,    0,    3,    0,    254,  8,    0,    1,    0,    1,    0,    5,    0,    258,
        8,    0,    10,   0,    12,   0,    261,  9,    0,    1,    0,    1,    0,    5,    0,    265,  8,    0,
        10,   0,    12,   0,    268,  9,    0,    1,    0,    1,    0,    1,    0,    3,    0,    273,  8,    0,
        1,    1,    5,    1,    276,  8,    1,    10,   1,    12,   1,    279,  9,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    2,    1,    2,    3,    2,    287,  8,    2,    1,    2,    1,    2,    1,
        2,    3,    2,    292,  8,    2,    1,    2,    1,    2,    1,    3,    5,    3,    297,  8,    3,    10,
        3,    12,   3,    300,  9,    3,    1,    3,    1,    3,    1,    3,    1,    3,    1,    3,    3,    3,
        307,  8,    3,    1,    4,    1,    4,    1,    4,    1,    4,    1,    4,    3,    4,    314,  8,    4,
        1,    5,    1,    5,    1,    5,    1,    5,    1,    5,    1,    5,    1,    5,    1,    5,    1,    5,
        1,    5,    3,    5,    326,  8,    5,    1,    6,    1,    6,    3,    6,    330,  8,    6,    1,    7,
        1,    7,    1,    7,    3,    7,    335,  8,    7,    1,    7,    1,    7,    3,    7,    339,  8,    7,
        1,    7,    1,    7,    3,    7,    343,  8,    7,    1,    7,    1,    7,    3,    7,    347,  8,    7,
        1,    7,    1,    7,    1,    8,    1,    8,    1,    8,    1,    8,    5,    8,    355,  8,    8,    10,
        8,    12,   8,    358,  9,    8,    1,    8,    1,    8,    1,    9,    5,    9,    363,  8,    9,    10,
        9,    12,   9,    366,  9,    9,    1,    9,    1,    9,    1,    9,    5,    9,    371,  8,    9,    10,
        9,    12,   9,    374,  9,    9,    1,    9,    3,    9,    377,  8,    9,    1,    10,   1,    10,   1,
        10,   5,    10,   382,  8,    10,   10,   10,   12,   10,   385,  9,    10,   1,    11,   1,    11,   1,
        11,   1,    11,   3,    11,   391,  8,    11,   1,    11,   1,    11,   3,    11,   395,  8,    11,   1,
        11,   3,    11,   398,  8,    11,   1,    11,   3,    11,   401,  8,    11,   1,    11,   1,    11,   1,
        12,   1,    12,   1,    12,   5,    12,   408,  8,    12,   10,   12,   12,   12,   411,  9,    12,   1,
        13,   5,    13,   414,  8,    13,   10,   13,   12,   13,   417,  9,    13,   1,    13,   1,    13,   3,
        13,   421,  8,    13,   1,    13,   3,    13,   424,  8,    13,   1,    14,   1,    14,   5,    14,   428,
        8,    14,   10,   14,   12,   14,   431,  9,    14,   1,    15,   1,    15,   1,    15,   3,    15,   436,
        8,    15,   1,    15,   1,    15,   3,    15,   440,  8,    15,   1,    15,   1,    15,   3,    15,   444,
        8,    15,   1,    15,   1,    15,   1,    16,   1,    16,   5,    16,   450,  8,    16,   10,   16,   12,
        16,   453,  9,    16,   1,    16,   1,    16,   1,    17,   1,    17,   5,    17,   459,  8,    17,   10,
        17,   12,   17,   462,  9,    17,   1,    17,   1,    17,   1,    18,   1,    18,   3,    18,   468,  8,
        18,   1,    18,   1,    18,   5,    18,   472,  8,    18,   10,   18,   12,   18,   475,  9,    18,   1,
        18,   3,    18,   478,  8,    18,   1,    19,   1,    19,   1,    19,   1,    19,   1,    19,   1,    19,
        1,    19,   1,    19,   1,    19,   1,    19,   3,    19,   490,  8,    19,   1,    20,   1,    20,   1,
        20,   1,    20,   1,    20,   5,    20,   497,  8,    20,   10,   20,   12,   20,   500,  9,    20,   1,
        20,   1,    20,   3,    20,   504,  8,    20,   1,    20,   1,    20,   1,    21,   1,    21,   3,    21,
        510,  8,    21,   1,    22,   1,    22,   3,    22,   514,  8,    22,   1,    23,   1,    23,   1,    23,
        1,    24,   1,    24,   1,    24,   1,    25,   1,    25,   1,    25,   1,    25,   3,    25,   526,  8,
        25,   1,    25,   1,    25,   1,    26,   5,    26,   531,  8,    26,   10,   26,   12,   26,   534,  9,
        26,   1,    26,   1,    26,   1,    26,   1,    27,   1,    27,   1,    27,   1,    27,   1,    28,   5,
        28,   544,  8,    28,   10,   28,   12,   28,   547,  9,    28,   1,    28,   1,    28,   3,    28,   551,
        8,    28,   1,    29,   1,    29,   1,    29,   1,    29,   1,    29,   1,    29,   1,    29,   1,    29,
        3,    29,   561,  8,    29,   1,    30,   1,    30,   1,    30,   1,    30,   5,    30,   567,  8,    30,
        10,   30,   12,   30,   570,  9,    30,   1,    30,   1,    30,   1,    31,   1,    31,   1,    31,   5,
        31,   577,  8,    31,   10,   31,   12,   31,   580,  9,    31,   1,    31,   1,    31,   1,    31,   1,
        32,   5,    32,   586,  8,    32,   10,   32,   12,   32,   589,  9,    32,   1,    32,   1,    32,   1,
        33,   1,    33,   1,    33,   1,    33,   1,    33,   1,    33,   3,    33,   599,  8,    33,   1,    34,
        5,    34,   602,  8,    34,   10,   34,   12,   34,   605,  9,    34,   1,    34,   1,    34,   1,    34,
        1,    35,   5,    35,   611,  8,    35,   10,   35,   12,   35,   614,  9,    35,   1,    35,   1,    35,
        1,    35,   1,    35,   1,    35,   5,    35,   621,  8,    35,   10,   35,   12,   35,   624,  9,    35,
        1,    35,   1,    35,   3,    35,   628,  8,    35,   1,    35,   1,    35,   1,    36,   1,    36,   1,
        36,   5,    36,   635,  8,    36,   10,   36,   12,   36,   638,  9,    36,   1,    37,   1,    37,   1,
        37,   3,    37,   643,  8,    37,   1,    38,   1,    38,   1,    38,   5,    38,   648,  8,    38,   10,
        38,   12,   38,   651,  9,    38,   1,    39,   1,    39,   3,    39,   655,  8,    39,   1,    40,   1,
        40,   1,    40,   1,    40,   5,    40,   661,  8,    40,   10,   40,   12,   40,   664,  9,    40,   1,
        40,   3,    40,   667,  8,    40,   3,    40,   669,  8,    40,   1,    40,   1,    40,   1,    41,   1,
        41,   3,    41,   675,  8,    41,   1,    41,   1,    41,   5,    41,   679,  8,    41,   10,   41,   12,
        41,   682,  9,    41,   1,    41,   1,    41,   3,    41,   686,  8,    41,   1,    42,   1,    42,   5,
        42,   690,  8,    42,   10,   42,   12,   42,   693,  9,    42,   1,    42,   1,    42,   1,    42,   3,
        42,   698,  8,    42,   3,    42,   700,  8,    42,   1,    43,   1,    43,   1,    43,   5,    43,   705,
        8,    43,   10,   43,   12,   43,   708,  9,    43,   1,    44,   1,    44,   3,    44,   712,  8,    44,
        1,    44,   1,    44,   1,    44,   3,    44,   717,  8,    44,   1,    44,   3,    44,   720,  8,    44,
        3,    44,   722,  8,    44,   1,    44,   1,    44,   1,    45,   1,    45,   1,    45,   1,    45,   5,
        45,   730,  8,    45,   10,   45,   12,   45,   733,  9,    45,   1,    45,   1,    45,   1,    46,   1,
        46,   1,    46,   5,    46,   740,  8,    46,   10,   46,   12,   46,   743,  9,    46,   1,    46,   1,
        46,   3,    46,   747,  8,    46,   1,    46,   3,    46,   750,  8,    46,   1,    47,   5,    47,   753,
        8,    47,   10,   47,   12,   47,   756,  9,    47,   1,    47,   1,    47,   1,    47,   1,    48,   5,
        48,   762,  8,    48,   10,   48,   12,   48,   765,  9,    48,   1,    48,   1,    48,   5,    48,   769,
        8,    48,   10,   48,   12,   48,   772,  9,    48,   1,    48,   1,    48,   1,    48,   1,    49,   1,
        49,   1,    49,   5,    49,   780,  8,    49,   10,   49,   12,   49,   783,  9,    49,   1,    50,   5,
        50,   786,  8,    50,   10,   50,   12,   50,   789,  9,    50,   1,    50,   1,    50,   1,    50,   1,
        51,   1,    51,   1,    51,   5,    51,   797,  8,    51,   10,   51,   12,   51,   800,  9,    51,   1,
        52,   1,    52,   1,    52,   1,    52,   1,    52,   1,    52,   1,    52,   3,    52,   809,  8,    52,
        1,    53,   1,    53,   1,    54,   1,    54,   1,    55,   1,    55,   1,    55,   5,    55,   818,  8,
        55,   10,   55,   12,   55,   821,  9,    55,   1,    55,   1,    55,   1,    55,   1,    56,   1,    56,
        1,    56,   3,    56,   829,  8,    56,   1,    56,   1,    56,   1,    56,   3,    56,   834,  8,    56,
        1,    56,   3,    56,   837,  8,    56,   1,    57,   1,    57,   1,    57,   5,    57,   842,  8,    57,
        10,   57,   12,   57,   845,  9,    57,   1,    58,   1,    58,   1,    58,   1,    58,   1,    59,   1,
        59,   1,    59,   3,    59,   854,  8,    59,   1,    60,   1,    60,   1,    60,   1,    60,   5,    60,
        860,  8,    60,   10,   60,   12,   60,   863,  9,    60,   3,    60,   865,  8,    60,   1,    60,   3,
        60,   868,  8,    60,   1,    60,   1,    60,   1,    61,   1,    61,   1,    61,   1,    61,   1,    61,
        1,    62,   1,    62,   5,    62,   879,  8,    62,   10,   62,   12,   62,   882,  9,    62,   1,    62,
        1,    62,   1,    63,   5,    63,   887,  8,    63,   10,   63,   12,   63,   890,  9,    63,   1,    63,
        1,    63,   3,    63,   894,  8,    63,   1,    64,   1,    64,   1,    64,   1,    64,   1,    64,   1,
        64,   3,    64,   902,  8,    64,   1,    64,   1,    64,   3,    64,   906,  8,    64,   1,    64,   1,
        64,   3,    64,   910,  8,    64,   1,    64,   1,    64,   3,    64,   914,  8,    64,   1,    64,   1,
        64,   3,    64,   918,  8,    64,   3,    64,   920,  8,    64,   1,    65,   1,    65,   3,    65,   924,
        8,    65,   1,    66,   1,    66,   1,    66,   1,    66,   3,    66,   930,  8,    66,   1,    67,   1,
        67,   1,    68,   1,    68,   1,    68,   1,    69,   3,    69,   938,  8,    69,   1,    69,   1,    69,
        1,    69,   1,    69,   1,    70,   1,    70,   5,    70,   946,  8,    70,   10,   70,   12,   70,   949,
        9,    70,   1,    70,   1,    70,   1,    71,   1,    71,   5,    71,   955,  8,    71,   10,   71,   12,
        71,   958,  9,    71,   1,    71,   1,    71,   1,    71,   1,    71,   1,    71,   1,    71,   1,    71,
        3,    71,   967,  8,    71,   1,    71,   1,    71,   1,    71,   1,    71,   1,    71,   1,    71,   3,
        71,   975,  8,    71,   1,    71,   1,    71,   1,    71,   1,    71,   1,    71,   1,    71,   1,    71,
        1,    71,   1,    71,   1,    71,   1,    71,   1,    71,   3,    71,   989,  8,    71,   1,    72,   1,
        72,   1,    73,   1,    73,   1,    73,   3,    73,   996,  8,    73,   1,    73,   1,    73,   1,    73,
        3,    73,   1001, 8,    73,   1,    73,   1,    73,   1,    74,   1,    74,   3,    74,   1007, 8,    74,
        1,    74,   1,    74,   1,    75,   1,    75,   1,    75,   5,    75,   1014, 8,    75,   10,   75,   12,
        75,   1017, 9,    75,   1,    76,   1,    76,   1,    76,   1,    77,   1,    77,   1,    77,   5,    77,
        1025, 8,    77,   10,   77,   12,   77,   1028, 9,    77,   1,    77,   1,    77,   1,    78,   1,    78,
        5,    78,   1034, 8,    78,   10,   78,   12,   78,   1037, 9,    78,   1,    78,   1,    78,   1,    79,
        1,    79,   1,    79,   1,    79,   1,    79,   3,    79,   1046, 8,    79,   1,    80,   5,    80,   1049,
        8,    80,   10,   80,   12,   80,   1052, 9,    80,   1,    80,   1,    80,   1,    80,   1,    80,   1,
        80,   1,    80,   1,    80,   1,    80,   3,    80,   1062, 8,    80,   1,    81,   1,    81,   1,    82,
        1,    82,   1,    83,   5,    83,   1069, 8,    83,   10,   83,   12,   83,   1072, 9,    83,   1,    83,
        1,    83,   1,    83,   3,    83,   1077, 8,    83,   1,    84,   1,    84,   1,    84,   1,    84,   1,
        84,   3,    84,   1084, 8,    84,   1,    84,   1,    84,   1,    84,   1,    84,   1,    84,   1,    84,
        1,    84,   3,    84,   1093, 8,    84,   1,    84,   1,    84,   1,    84,   1,    84,   1,    84,   1,
        84,   1,    84,   1,    84,   1,    84,   1,    84,   1,    84,   1,    84,   1,    84,   1,    84,   1,
        84,   1,    84,   1,    84,   1,    84,   1,    84,   4,    84,   1114, 8,    84,   11,   84,   12,   84,
        1115, 1,    84,   3,    84,   1119, 8,    84,   1,    84,   3,    84,   1122, 8,    84,   1,    84,   1,
        84,   1,    84,   1,    84,   5,    84,   1128, 8,    84,   10,   84,   12,   84,   1131, 9,    84,   1,
        84,   3,    84,   1134, 8,    84,   1,    84,   1,    84,   1,    84,   1,    84,   5,    84,   1140, 8,
        84,   10,   84,   12,   84,   1143, 9,    84,   1,    84,   5,    84,   1146, 8,    84,   10,   84,   12,
        84,   1149, 9,    84,   1,    84,   1,    84,   1,    84,   1,    84,   1,    84,   1,    84,   1,    84,
        1,    84,   3,    84,   1159, 8,    84,   1,    84,   1,    84,   1,    84,   1,    84,   1,    84,   1,
        84,   1,    84,   3,    84,   1168, 8,    84,   1,    84,   1,    84,   1,    84,   3,    84,   1173, 8,
        84,   1,    84,   1,    84,   1,    84,   1,    84,   1,    84,   1,    84,   1,    84,   1,    84,   1,
        84,   1,    84,   1,    84,   3,    84,   1186, 8,    84,   1,    84,   1,    84,   1,    84,   1,    84,
        3,    84,   1192, 8,    84,   1,    85,   1,    85,   1,    85,   5,    85,   1197, 8,    85,   10,   85,
        12,   85,   1200, 9,    85,   1,    85,   1,    85,   1,    85,   1,    85,   1,    85,   1,    86,   1,
        86,   1,    86,   5,    86,   1210, 8,    86,   10,   86,   12,   86,   1213, 9,    86,   1,    87,   1,
        87,   1,    87,   1,    88,   1,    88,   1,    88,   3,    88,   1221, 8,    88,   1,    88,   1,    88,
        1,    89,   1,    89,   1,    89,   5,    89,   1228, 8,    89,   10,   89,   12,   89,   1231, 9,    89,
        1,    90,   5,    90,   1234, 8,    90,   10,   90,   12,   90,   1237, 9,    90,   1,    90,   1,    90,
        1,    90,   1,    90,   1,    90,   3,    90,   1244, 8,    90,   1,    90,   1,    90,   1,    90,   1,
        90,   3,    90,   1250, 8,    90,   1,    91,   4,    91,   1253, 8,    91,   11,   91,   12,   91,   1254,
        1,    91,   4,    91,   1258, 8,    91,   11,   91,   12,   91,   1259, 1,    92,   1,    92,   1,    92,
        1,    92,   1,    92,   1,    92,   3,    92,   1268, 8,    92,   1,    92,   1,    92,   1,    92,   3,
        92,   1273, 8,    92,   1,    93,   1,    93,   3,    93,   1277, 8,    93,   1,    93,   1,    93,   3,
        93,   1281, 8,    93,   1,    93,   1,    93,   3,    93,   1285, 8,    93,   3,    93,   1287, 8,    93,
        1,    94,   1,    94,   3,    94,   1291, 8,    94,   1,    95,   5,    95,   1294, 8,    95,   10,   95,
        12,   95,   1297, 9,    95,   1,    95,   1,    95,   3,    95,   1301, 8,    95,   1,    95,   1,    95,
        1,    95,   1,    95,   1,    96,   1,    96,   1,    96,   1,    96,   1,    97,   1,    97,   1,    97,
        5,    97,   1314, 8,    97,   10,   97,   12,   97,   1317, 9,    97,   1,    98,   1,    98,   1,    98,
        3,    98,   1322, 8,    98,   1,    98,   1,    98,   1,    99,   1,    99,   1,    99,   1,    99,   1,
        99,   1,    99,   3,    99,   1332, 8,    99,   1,    99,   1,    99,   3,    99,   1336, 8,    99,   1,
        99,   1,    99,   1,    99,   3,    99,   1341, 8,    99,   1,    99,   1,    99,   1,    99,   1,    99,
        1,    99,   1,    99,   1,    99,   5,    99,   1350, 8,    99,   10,   99,   12,   99,   1353, 9,    99,
        1,    99,   1,    99,   1,    99,   5,    99,   1358, 8,    99,   10,   99,   12,   99,   1361, 9,    99,
        1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   3,    99,   1369, 8,    99,   1,
        99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,
        99,   1,    99,   1,    99,   1,    99,   1,    99,   3,    99,   1385, 8,    99,   1,    99,   1,    99,
        1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,
        1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,
        1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,
        1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,
        1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   3,    99,   1430, 8,    99,   1,    99,   1,
        99,   1,    99,   1,    99,   3,    99,   1436, 8,    99,   1,    99,   1,    99,   1,    99,   3,    99,
        1441, 8,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   1,    99,   3,
        99,   1450, 8,    99,   5,    99,   1452, 8,    99,   10,   99,   12,   99,   1455, 9,    99,   1,    100,
        5,    100,  1458, 8,    100,  10,   100,  12,   100,  1461, 9,    100,  1,    100,  1,    100,  5,    100,
        1465, 8,    100,  10,   100,  12,   100,  1468, 9,    100,  1,    100,  1,    100,  1,    101,  1,    101,
        1,    101,  1,    101,  1,    102,  1,    102,  1,    102,  3,    102,  1479, 8,    102,  1,    102,  1,
        102,  1,    102,  1,    102,  1,    102,  5,    102,  1486, 8,    102,  10,   102,  12,   102,  1489, 9,
        102,  1,    102,  1,    102,  1,    102,  1,    102,  3,    102,  1495, 8,    102,  1,    102,  3,    102,
        1498, 8,    102,  1,    103,  1,    103,  3,    103,  1502, 8,    103,  1,    104,  1,    104,  1,    104,
        1,    104,  1,    104,  1,    104,  1,    104,  1,    104,  1,    104,  1,    104,  1,    104,  1,    104,
        1,    104,  1,    104,  1,    104,  1,    104,  3,    104,  1520, 8,    104,  3,    104,  1522, 8,    104,
        1,    105,  1,    105,  1,    105,  1,    105,  5,    105,  1528, 8,    105,  10,   105,  12,   105,  1531,
        9,    105,  1,    105,  1,    105,  1,    106,  1,    106,  1,    106,  1,    106,  3,    106,  1539, 8,
        106,  1,    106,  1,    106,  1,    106,  1,    106,  1,    106,  3,    106,  1546, 8,    106,  1,    107,
        1,    107,  1,    107,  1,    107,  1,    107,  1,    107,  5,    107,  1554, 8,    107,  10,   107,  12,
        107,  1557, 9,    107,  1,    107,  1,    107,  5,    107,  1561, 8,    107,  10,   107,  12,   107,  1564,
        9,    107,  1,    107,  1,    107,  1,    107,  5,    107,  1569, 8,    107,  10,   107,  12,   107,  1572,
        9,    107,  3,    107,  1574, 8,    107,  1,    107,  1,    107,  1,    107,  5,    107,  1579, 8,    107,
        10,   107,  12,   107,  1582, 9,    107,  1,    108,  1,    108,  5,    108,  1586, 8,    108,  10,   108,
        12,   108,  1589, 9,    108,  3,    108,  1591, 8,    108,  1,    109,  1,    109,  1,    109,  3,    109,
        1596, 8,    109,  1,    109,  5,    109,  1599, 8,    109,  10,   109,  12,   109,  1602, 9,    109,  1,
        109,  1,    109,  3,    109,  1606, 8,    109,  1,    110,  3,    110,  1609, 8,    110,  1,    110,  1,
        110,  1,    110,  1,    110,  1,    110,  1,    110,  3,    110,  1617, 8,    110,  1,    111,  1,    111,
        3,    111,  1621, 8,    111,  1,    111,  1,    111,  1,    111,  3,    111,  1626, 8,    111,  5,    111,
        1628, 8,    111,  10,   111,  12,   111,  1631, 9,    111,  1,    111,  3,    111,  1634, 8,    111,  1,
        112,  1,    112,  3,    112,  1638, 8,    112,  1,    112,  1,    112,  1,    113,  1,    113,  4,    113,
        1644, 8,    113,  11,   113,  12,   113,  1645, 1,    113,  1,    113,  1,    113,  1,    113,  1,    113,
        4,    113,  1653, 8,    113,  11,   113,  12,   113,  1654, 1,    113,  1,    113,  5,    113,  1659, 8,
        113,  10,   113,  12,   113,  1662, 9,    113,  3,    113,  1664, 8,    113,  1,    114,  1,    114,  3,
        114,  1668, 8,    114,  1,    115,  1,    115,  1,    115,  1,    116,  1,    116,  1,    116,  3,    116,
        1676, 8,    116,  1,    117,  1,    117,  1,    117,  3,    117,  1681, 8,    117,  1,    118,  1,    118,
        1,    118,  1,    118,  1,    119,  1,    119,  1,    119,  5,    119,  1690, 8,    119,  10,   119,  12,
        119,  1693, 9,    119,  1,    120,  5,    120,  1696, 8,    120,  10,   120,  12,   120,  1699, 9,    120,
        1,    120,  1,    120,  3,    120,  1703, 8,    120,  1,    120,  5,    120,  1706, 8,    120,  10,   120,
        12,   120,  1709, 9,    120,  1,    120,  1,    120,  5,    120,  1713, 8,    120,  10,   120,  12,   120,
        1716, 9,    120,  1,    121,  1,    121,  1,    122,  1,    122,  1,    122,  1,    122,  5,    122,  1724,
        8,    122,  10,   122,  12,   122,  1727, 9,    122,  1,    122,  1,    122,  1,    123,  1,    123,  1,
        123,  3,    123,  1734, 8,    123,  1,    123,  1,    123,  3,    123,  1738, 8,    123,  3,    123,  1740,
        8,    123,  1,    124,  1,    124,  1,    124,  1,    124,  1,    124,  3,    124,  1747, 8,    124,  1,
        125,  1,    125,  3,    125,  1751, 8,    125,  1,    125,  1,    125,  1,    125,  0,    2,    198,  214,
        126,  0,    2,    4,    6,    8,    10,   12,   14,   16,   18,   20,   22,   24,   26,   28,   30,   32,
        34,   36,   38,   40,   42,   44,   46,   48,   50,   52,   54,   56,   58,   60,   62,   64,   66,   68,
        70,   72,   74,   76,   78,   80,   82,   84,   86,   88,   90,   92,   94,   96,   98,   100,  102,  104,
        106,  108,  110,  112,  114,  116,  118,  120,  122,  124,  126,  128,  130,  132,  134,  136,  138,  140,
        142,  144,  146,  148,  150,  152,  154,  156,  158,  160,  162,  164,  166,  168,  170,  172,  174,  176,
        178,  180,  182,  184,  186,  188,  190,  192,  194,  196,  198,  200,  202,  204,  206,  208,  210,  212,
        214,  216,  218,  220,  222,  224,  226,  228,  230,  232,  234,  236,  238,  240,  242,  244,  246,  248,
        250,  0,    15,   2,    0,    17,   17,   40,   40,   1,    0,    67,   70,   1,    0,    71,   72,   2,
        0,    38,   38,   60,   60,   2,    0,    51,   65,   128,  128,  3,    0,    51,   60,   63,   65,   128,
        128,  2,    0,    90,   91,   100,  103,  2,    0,    104,  105,  109,  109,  1,    0,    102,  103,  2,
        0,    88,   89,   95,   96,   2,    0,    94,   94,   97,   97,   2,    0,    87,   87,   110,  120,  1,
        0,    100,  101,  2,    0,    93,   93,   121,  121,  8,    0,    3,    3,    5,    5,    8,    8,    14,
        14,   20,   20,   27,   27,   29,   29,   37,   37,   1951, 0,    272,  1,    0,    0,    0,    2,    277,
        1,    0,    0,    0,    4,    284,  1,    0,    0,    0,    6,    298,  1,    0,    0,    0,    8,    313,
        1,    0,    0,    0,    10,   325,  1,    0,    0,    0,    12,   329,  1,    0,    0,    0,    14,   331,
        1,    0,    0,    0,    16,   350,  1,    0,    0,    0,    18,   364,  1,    0,    0,    0,    20,   378,
        1,    0,    0,    0,    22,   386,  1,    0,    0,    0,    24,   404,  1,    0,    0,    0,    26,   415,
        1,    0,    0,    0,    28,   425,  1,    0,    0,    0,    30,   432,  1,    0,    0,    0,    32,   447,
        1,    0,    0,    0,    34,   456,  1,    0,    0,    0,    36,   477,  1,    0,    0,    0,    38,   489,
        1,    0,    0,    0,    40,   491,  1,    0,    0,    0,    42,   509,  1,    0,    0,    0,    44,   513,
        1,    0,    0,    0,    46,   515,  1,    0,    0,    0,    48,   518,  1,    0,    0,    0,    50,   521,
        1,    0,    0,    0,    52,   532,  1,    0,    0,    0,    54,   538,  1,    0,    0,    0,    56,   550,
        1,    0,    0,    0,    58,   560,  1,    0,    0,    0,    60,   562,  1,    0,    0,    0,    62,   573,
        1,    0,    0,    0,    64,   587,  1,    0,    0,    0,    66,   598,  1,    0,    0,    0,    68,   603,
        1,    0,    0,    0,    70,   612,  1,    0,    0,    0,    72,   631,  1,    0,    0,    0,    74,   639,
        1,    0,    0,    0,    76,   644,  1,    0,    0,    0,    78,   654,  1,    0,    0,    0,    80,   656,
        1,    0,    0,    0,    82,   680,  1,    0,    0,    0,    84,   699,  1,    0,    0,    0,    86,   701,
        1,    0,    0,    0,    88,   709,  1,    0,    0,    0,    90,   725,  1,    0,    0,    0,    92,   749,
        1,    0,    0,    0,    94,   754,  1,    0,    0,    0,    96,   763,  1,    0,    0,    0,    98,   776,
        1,    0,    0,    0,    100,  787,  1,    0,    0,    0,    102,  793,  1,    0,    0,    0,    104,  808,
        1,    0,    0,    0,    106,  810,  1,    0,    0,    0,    108,  812,  1,    0,    0,    0,    110,  819,
        1,    0,    0,    0,    112,  828,  1,    0,    0,    0,    114,  838,  1,    0,    0,    0,    116,  846,
        1,    0,    0,    0,    118,  853,  1,    0,    0,    0,    120,  855,  1,    0,    0,    0,    122,  871,
        1,    0,    0,    0,    124,  876,  1,    0,    0,    0,    126,  893,  1,    0,    0,    0,    128,  919,
        1,    0,    0,    0,    130,  923,  1,    0,    0,    0,    132,  925,  1,    0,    0,    0,    134,  931,
        1,    0,    0,    0,    136,  933,  1,    0,    0,    0,    138,  937,  1,    0,    0,    0,    140,  943,
        1,    0,    0,    0,    142,  988,  1,    0,    0,    0,    144,  990,  1,    0,    0,    0,    146,  992,
        1,    0,    0,    0,    148,  1004, 1,    0,    0,    0,    150,  1010, 1,    0,    0,    0,    152,  1018,
        1,    0,    0,    0,    154,  1021, 1,    0,    0,    0,    156,  1031, 1,    0,    0,    0,    158,  1045,
        1,    0,    0,    0,    160,  1050, 1,    0,    0,    0,    162,  1063, 1,    0,    0,    0,    164,  1065,
        1,    0,    0,    0,    166,  1070, 1,    0,    0,    0,    168,  1191, 1,    0,    0,    0,    170,  1193,
        1,    0,    0,    0,    172,  1206, 1,    0,    0,    0,    174,  1214, 1,    0,    0,    0,    176,  1217,
        1,    0,    0,    0,    178,  1224, 1,    0,    0,    0,    180,  1249, 1,    0,    0,    0,    182,  1252,
        1,    0,    0,    0,    184,  1272, 1,    0,    0,    0,    186,  1286, 1,    0,    0,    0,    188,  1290,
        1,    0,    0,    0,    190,  1295, 1,    0,    0,    0,    192,  1306, 1,    0,    0,    0,    194,  1310,
        1,    0,    0,    0,    196,  1321, 1,    0,    0,    0,    198,  1368, 1,    0,    0,    0,    200,  1459,
        1,    0,    0,    0,    202,  1471, 1,    0,    0,    0,    204,  1497, 1,    0,    0,    0,    206,  1501,
        1,    0,    0,    0,    208,  1521, 1,    0,    0,    0,    210,  1523, 1,    0,    0,    0,    212,  1545,
        1,    0,    0,    0,    214,  1573, 1,    0,    0,    0,    216,  1590, 1,    0,    0,    0,    218,  1595,
        1,    0,    0,    0,    220,  1616, 1,    0,    0,    0,    222,  1633, 1,    0,    0,    0,    224,  1635,
        1,    0,    0,    0,    226,  1663, 1,    0,    0,    0,    228,  1665, 1,    0,    0,    0,    230,  1669,
        1,    0,    0,    0,    232,  1675, 1,    0,    0,    0,    234,  1680, 1,    0,    0,    0,    236,  1682,
        1,    0,    0,    0,    238,  1686, 1,    0,    0,    0,    240,  1697, 1,    0,    0,    0,    242,  1717,
        1,    0,    0,    0,    244,  1719, 1,    0,    0,    0,    246,  1739, 1,    0,    0,    0,    248,  1746,
        1,    0,    0,    0,    250,  1748, 1,    0,    0,    0,    252,  254,  3,    2,    1,    0,    253,  252,
        1,    0,    0,    0,    253,  254,  1,    0,    0,    0,    254,  259,  1,    0,    0,    0,    255,  258,
        3,    4,    2,    0,    256,  258,  5,    84,   0,    0,    257,  255,  1,    0,    0,    0,    257,  256,
        1,    0,    0,    0,    258,  261,  1,    0,    0,    0,    259,  257,  1,    0,    0,    0,    259,  260,
        1,    0,    0,    0,    260,  266,  1,    0,    0,    0,    261,  259,  1,    0,    0,    0,    262,  265,
        3,    6,    3,    0,    263,  265,  5,    84,   0,    0,    264,  262,  1,    0,    0,    0,    264,  263,
        1,    0,    0,    0,    265,  268,  1,    0,    0,    0,    266,  264,  1,    0,    0,    0,    266,  267,
        1,    0,    0,    0,    267,  273,  1,    0,    0,    0,    268,  266,  1,    0,    0,    0,    269,  270,
        3,    138,  69,   0,    270,  271,  5,    0,    0,    1,    271,  273,  1,    0,    0,    0,    272,  253,
        1,    0,    0,    0,    272,  269,  1,    0,    0,    0,    273,  1,    1,    0,    0,    0,    274,  276,
        3,    112,  56,   0,    275,  274,  1,    0,    0,    0,    276,  279,  1,    0,    0,    0,    277,  275,
        1,    0,    0,    0,    277,  278,  1,    0,    0,    0,    278,  280,  1,    0,    0,    0,    279,  277,
        1,    0,    0,    0,    280,  281,  5,    32,   0,    0,    281,  282,  3,    102,  51,   0,    282,  283,
        5,    84,   0,    0,    283,  3,    1,    0,    0,    0,    284,  286,  5,    25,   0,    0,    285,  287,
        5,    38,   0,    0,    286,  285,  1,    0,    0,    0,    286,  287,  1,    0,    0,    0,    287,  288,
        1,    0,    0,    0,    288,  291,  3,    102,  51,   0,    289,  290,  5,    86,   0,    0,    290,  292,
        5,    104,  0,    0,    291,  289,  1,    0,    0,    0,    291,  292,  1,    0,    0,    0,    292,  293,
        1,    0,    0,    0,    293,  294,  5,    84,   0,    0,    294,  5,    1,    0,    0,    0,    295,  297,
        3,    10,   5,    0,    296,  295,  1,    0,    0,    0,    297,  300,  1,    0,    0,    0,    298,  296,
        1,    0,    0,    0,    298,  299,  1,    0,    0,    0,    299,  306,  1,    0,    0,    0,    300,  298,
        1,    0,    0,    0,    301,  307,  3,    14,   7,    0,    302,  307,  3,    22,   11,   0,    303,  307,
        3,    30,   15,   0,    304,  307,  3,    122,  61,   0,    305,  307,  3,    146,  73,   0,    306,  301,
        1,    0,    0,    0,    306,  302,  1,    0,    0,    0,    306,  303,  1,    0,    0,    0,    306,  304,
        1,    0,    0,    0,    306,  305,  1,    0,    0,    0,    307,  7,    1,    0,    0,    0,    308,  314,
        3,    10,   5,    0,    309,  314,  5,    30,   0,    0,    310,  314,  5,    42,   0,    0,    311,  314,
        5,    46,   0,    0,    312,  314,  5,    49,   0,    0,    313,  308,  1,    0,    0,    0,    313,  309,
        1,    0,    0,    0,    313,  310,  1,    0,    0,    0,    313,  311,  1,    0,    0,    0,    313,  312,
        1,    0,    0,    0,    314,  9,    1,    0,    0,    0,    315,  326,  3,    112,  56,   0,    316,  326,
        5,    35,   0,    0,    317,  326,  5,    34,   0,    0,    318,  326,  5,    33,   0,    0,    319,  326,
        5,    38,   0,    0,    320,  326,  5,    1,    0,    0,    321,  326,  5,    18,   0,    0,    322,  326,
        5,    39,   0,    0,    323,  326,  5,    64,   0,    0,    324,  326,  5,    66,   0,    0,    325,  315,
        1,    0,    0,    0,    325,  316,  1,    0,    0,    0,    325,  317,  1,    0,    0,    0,    325,  318,
        1,    0,    0,    0,    325,  319,  1,    0,    0,    0,    325,  320,  1,    0,    0,    0,    325,  321,
        1,    0,    0,    0,    325,  322,  1,    0,    0,    0,    325,  323,  1,    0,    0,    0,    325,  324,
        1,    0,    0,    0,    326,  11,   1,    0,    0,    0,    327,  330,  5,    18,   0,    0,    328,  330,
        3,    112,  56,   0,    329,  327,  1,    0,    0,    0,    329,  328,  1,    0,    0,    0,    330,  13,
        1,    0,    0,    0,    331,  332,  5,    9,    0,    0,    332,  334,  3,    162,  81,   0,    333,  335,
        3,    16,   8,    0,    334,  333,  1,    0,    0,    0,    334,  335,  1,    0,    0,    0,    335,  338,
        1,    0,    0,    0,    336,  337,  5,    17,   0,    0,    337,  339,  3,    240,  120,  0,    338,  336,
        1,    0,    0,    0,    338,  339,  1,    0,    0,    0,    339,  342,  1,    0,    0,    0,    340,  341,
        5,    24,   0,    0,    341,  343,  3,    238,  119,  0,    342,  340,  1,    0,    0,    0,    342,  343,
        1,    0,    0,    0,    343,  346,  1,    0,    0,    0,    344,  345,  5,    65,   0,    0,    345,  347,
        3,    238,  119,  0,    346,  344,  1,    0,    0,    0,    346,  347,  1,    0,    0,    0,    347,  348,
        1,    0,    0,    0,    348,  349,  3,    32,   16,   0,    349,  15,   1,    0,    0,    0,    350,  351,
        5,    89,   0,    0,    351,  356,  3,    18,   9,    0,    352,  353,  5,    85,   0,    0,    353,  355,
        3,    18,   9,    0,    354,  352,  1,    0,    0,    0,    355,  358,  1,    0,    0,    0,    356,  354,
        1,    0,    0,    0,    356,  357,  1,    0,    0,    0,    357,  359,  1,    0,    0,    0,    358,  356,
        1,    0,    0,    0,    359,  360,  5,    88,   0,    0,    360,  17,   1,    0,    0,    0,    361,  363,
        3,    112,  56,   0,    362,  361,  1,    0,    0,    0,    363,  366,  1,    0,    0,    0,    364,  362,
        1,    0,    0,    0,    364,  365,  1,    0,    0,    0,    365,  367,  1,    0,    0,    0,    366,  364,
        1,    0,    0,    0,    367,  376,  3,    162,  81,   0,    368,  372,  5,    17,   0,    0,    369,  371,
        3,    112,  56,   0,    370,  369,  1,    0,    0,    0,    371,  374,  1,    0,    0,    0,    372,  370,
        1,    0,    0,    0,    372,  373,  1,    0,    0,    0,    373,  375,  1,    0,    0,    0,    374,  372,
        1,    0,    0,    0,    375,  377,  3,    20,   10,   0,    376,  368,  1,    0,    0,    0,    376,  377,
        1,    0,    0,    0,    377,  19,   1,    0,    0,    0,    378,  383,  3,    240,  120,  0,    379,  380,
        5,    106,  0,    0,    380,  382,  3,    240,  120,  0,    381,  379,  1,    0,    0,    0,    382,  385,
        1,    0,    0,    0,    383,  381,  1,    0,    0,    0,    383,  384,  1,    0,    0,    0,    384,  21,
        1,    0,    0,    0,    385,  383,  1,    0,    0,    0,    386,  387,  5,    16,   0,    0,    387,  390,
        3,    162,  81,   0,    388,  389,  5,    24,   0,    0,    389,  391,  3,    238,  119,  0,    390,  388,
        1,    0,    0,    0,    390,  391,  1,    0,    0,    0,    391,  392,  1,    0,    0,    0,    392,  394,
        5,    80,   0,    0,    393,  395,  3,    24,   12,   0,    394,  393,  1,    0,    0,    0,    394,  395,
        1,    0,    0,    0,    395,  397,  1,    0,    0,    0,    396,  398,  5,    85,   0,    0,    397,  396,
        1,    0,    0,    0,    397,  398,  1,    0,    0,    0,    398,  400,  1,    0,    0,    0,    399,  401,
        3,    28,   14,   0,    400,  399,  1,    0,    0,    0,    400,  401,  1,    0,    0,    0,    401,  402,
        1,    0,    0,    0,    402,  403,  5,    81,   0,    0,    403,  23,   1,    0,    0,    0,    404,  409,
        3,    26,   13,   0,    405,  406,  5,    85,   0,    0,    406,  408,  3,    26,   13,   0,    407,  405,
        1,    0,    0,    0,    408,  411,  1,    0,    0,    0,    409,  407,  1,    0,    0,    0,    409,  410,
        1,    0,    0,    0,    410,  25,   1,    0,    0,    0,    411,  409,  1,    0,    0,    0,    412,  414,
        3,    112,  56,   0,    413,  412,  1,    0,    0,    0,    414,  417,  1,    0,    0,    0,    415,  413,
        1,    0,    0,    0,    415,  416,  1,    0,    0,    0,    416,  418,  1,    0,    0,    0,    417,  415,
        1,    0,    0,    0,    418,  420,  3,    162,  81,   0,    419,  421,  3,    250,  125,  0,    420,  419,
        1,    0,    0,    0,    420,  421,  1,    0,    0,    0,    421,  423,  1,    0,    0,    0,    422,  424,
        3,    32,   16,   0,    423,  422,  1,    0,    0,    0,    423,  424,  1,    0,    0,    0,    424,  27,
        1,    0,    0,    0,    425,  429,  5,    84,   0,    0,    426,  428,  3,    36,   18,   0,    427,  426,
        1,    0,    0,    0,    428,  431,  1,    0,    0,    0,    429,  427,  1,    0,    0,    0,    429,  430,
        1,    0,    0,    0,    430,  29,   1,    0,    0,    0,    431,  429,  1,    0,    0,    0,    432,  433,
        5,    28,   0,    0,    433,  435,  3,    162,  81,   0,    434,  436,  3,    16,   8,    0,    435,  434,
        1,    0,    0,    0,    435,  436,  1,    0,    0,    0,    436,  439,  1,    0,    0,    0,    437,  438,
        5,    17,   0,    0,    438,  440,  3,    238,  119,  0,    439,  437,  1,    0,    0,    0,    439,  440,
        1,    0,    0,    0,    440,  443,  1,    0,    0,    0,    441,  442,  5,    65,   0,    0,    442,  444,
        3,    238,  119,  0,    443,  441,  1,    0,    0,    0,    443,  444,  1,    0,    0,    0,    444,  445,
        1,    0,    0,    0,    445,  446,  3,    34,   17,   0,    446,  31,   1,    0,    0,    0,    447,  451,
        5,    80,   0,    0,    448,  450,  3,    36,   18,   0,    449,  448,  1,    0,    0,    0,    450,  453,
        1,    0,    0,    0,    451,  449,  1,    0,    0,    0,    451,  452,  1,    0,    0,    0,    452,  454,
        1,    0,    0,    0,    453,  451,  1,    0,    0,    0,    454,  455,  5,    81,   0,    0,    455,  33,
        1,    0,    0,    0,    456,  460,  5,    80,   0,    0,    457,  459,  3,    56,   28,   0,    458,  457,
        1,    0,    0,    0,    459,  462,  1,    0,    0,    0,    460,  458,  1,    0,    0,    0,    460,  461,
        1,    0,    0,    0,    461,  463,  1,    0,    0,    0,    462,  460,  1,    0,    0,    0,    463,  464,
        5,    81,   0,    0,    464,  35,   1,    0,    0,    0,    465,  478,  5,    84,   0,    0,    466,  468,
        5,    38,   0,    0,    467,  466,  1,    0,    0,    0,    467,  468,  1,    0,    0,    0,    468,  469,
        1,    0,    0,    0,    469,  478,  3,    156,  78,   0,    470,  472,  3,    8,    4,    0,    471,  470,
        1,    0,    0,    0,    472,  475,  1,    0,    0,    0,    473,  471,  1,    0,    0,    0,    473,  474,
        1,    0,    0,    0,    474,  476,  1,    0,    0,    0,    475,  473,  1,    0,    0,    0,    476,  478,
        3,    38,   19,   0,    477,  465,  1,    0,    0,    0,    477,  467,  1,    0,    0,    0,    477,  473,
        1,    0,    0,    0,    478,  37,   1,    0,    0,    0,    479,  490,  3,    146,  73,   0,    480,  490,
        3,    40,   20,   0,    481,  490,  3,    46,   23,   0,    482,  490,  3,    54,   27,   0,    483,  490,
        3,    50,   25,   0,    484,  490,  3,    48,   24,   0,    485,  490,  3,    30,   15,   0,    486,  490,
        3,    122,  61,   0,    487,  490,  3,    14,   7,    0,    488,  490,  3,    22,   11,   0,    489,  479,
        1,    0,    0,    0,    489,  480,  1,    0,    0,    0,    489,  481,  1,    0,    0,    0,    489,  482,
        1,    0,    0,    0,    489,  483,  1,    0,    0,    0,    489,  484,  1,    0,    0,    0,    489,  485,
        1,    0,    0,    0,    489,  486,  1,    0,    0,    0,    489,  487,  1,    0,    0,    0,    489,  488,
        1,    0,    0,    0,    490,  39,   1,    0,    0,    0,    491,  492,  3,    44,   22,   0,    492,  493,
        3,    162,  81,   0,    493,  498,  3,    88,   44,   0,    494,  495,  5,    82,   0,    0,    495,  497,
        5,    83,   0,    0,    496,  494,  1,    0,    0,    0,    497,  500,  1,    0,    0,    0,    498,  496,
        1,    0,    0,    0,    498,  499,  1,    0,    0,    0,    499,  503,  1,    0,    0,    0,    500,  498,
        1,    0,    0,    0,    501,  502,  5,    45,   0,    0,    502,  504,  3,    86,   43,   0,    503,  501,
        1,    0,    0,    0,    503,  504,  1,    0,    0,    0,    504,  505,  1,    0,    0,    0,    505,  506,
        3,    42,   21,   0,    506,  41,   1,    0,    0,    0,    507,  510,  3,    156,  78,   0,    508,  510,
        5,    84,   0,    0,    509,  507,  1,    0,    0,    0,    509,  508,  1,    0,    0,    0,    510,  43,
        1,    0,    0,    0,    511,  514,  3,    240,  120,  0,    512,  514,  5,    48,   0,    0,    513,  511,
        1,    0,    0,    0,    513,  512,  1,    0,    0,    0,    514,  45,   1,    0,    0,    0,    515,  516,
        3,    16,   8,    0,    516,  517,  3,    40,   20,   0,    517,  47,   1,    0,    0,    0,    518,  519,
        3,    16,   8,    0,    519,  520,  3,    50,   25,   0,    520,  49,   1,    0,    0,    0,    521,  522,
        3,    162,  81,   0,    522,  525,  3,    88,   44,   0,    523,  524,  5,    45,   0,    0,    524,  526,
        3,    86,   43,   0,    525,  523,  1,    0,    0,    0,    525,  526,  1,    0,    0,    0,    526,  527,
        1,    0,    0,    0,    527,  528,  3,    156,  78,   0,    528,  51,   1,    0,    0,    0,    529,  531,
        3,    8,    4,    0,    530,  529,  1,    0,    0,    0,    531,  534,  1,    0,    0,    0,    532,  530,
        1,    0,    0,    0,    532,  533,  1,    0,    0,    0,    533,  535,  1,    0,    0,    0,    534,  532,
        1,    0,    0,    0,    535,  536,  3,    162,  81,   0,    536,  537,  3,    156,  78,   0,    537,  53,
        1,    0,    0,    0,    538,  539,  3,    240,  120,  0,    539,  540,  3,    72,   36,   0,    540,  541,
        5,    84,   0,    0,    541,  55,   1,    0,    0,    0,    542,  544,  3,    8,    4,    0,    543,  542,
        1,    0,    0,    0,    544,  547,  1,    0,    0,    0,    545,  543,  1,    0,    0,    0,    545,  546,
        1,    0,    0,    0,    546,  548,  1,    0,    0,    0,    547,  545,  1,    0,    0,    0,    548,  551,
        3,    58,   29,   0,    549,  551,  5,    84,   0,    0,    550,  545,  1,    0,    0,    0,    550,  549,
        1,    0,    0,    0,    551,  57,   1,    0,    0,    0,    552,  561,  3,    146,  73,   0,    553,  561,
        3,    60,   30,   0,    554,  561,  3,    64,   32,   0,    555,  561,  3,    68,   34,   0,    556,  561,
        3,    30,   15,   0,    557,  561,  3,    122,  61,   0,    558,  561,  3,    14,   7,    0,    559,  561,
        3,    22,   11,   0,    560,  552,  1,    0,    0,    0,    560,  553,  1,    0,    0,    0,    560,  554,
        1,    0,    0,    0,    560,  555,  1,    0,    0,    0,    560,  556,  1,    0,    0,    0,    560,  557,
        1,    0,    0,    0,    560,  558,  1,    0,    0,    0,    560,  559,  1,    0,    0,    0,    561,  59,
        1,    0,    0,    0,    562,  563,  3,    240,  120,  0,    563,  568,  3,    62,   31,   0,    564,  565,
        5,    85,   0,    0,    565,  567,  3,    62,   31,   0,    566,  564,  1,    0,    0,    0,    567,  570,
        1,    0,    0,    0,    568,  566,  1,    0,    0,    0,    568,  569,  1,    0,    0,    0,    569,  571,
        1,    0,    0,    0,    570,  568,  1,    0,    0,    0,    571,  572,  5,    84,   0,    0,    572,  61,
        1,    0,    0,    0,    573,  578,  3,    162,  81,   0,    574,  575,  5,    82,   0,    0,    575,  577,
        5,    83,   0,    0,    576,  574,  1,    0,    0,    0,    577,  580,  1,    0,    0,    0,    578,  576,
        1,    0,    0,    0,    578,  579,  1,    0,    0,    0,    579,  581,  1,    0,    0,    0,    580,  578,
        1,    0,    0,    0,    581,  582,  5,    87,   0,    0,    582,  583,  3,    78,   39,   0,    583,  63,
        1,    0,    0,    0,    584,  586,  3,    66,   33,   0,    585,  584,  1,    0,    0,    0,    586,  589,
        1,    0,    0,    0,    587,  585,  1,    0,    0,    0,    587,  588,  1,    0,    0,    0,    588,  590,
        1,    0,    0,    0,    589,  587,  1,    0,    0,    0,    590,  591,  3,    70,   35,   0,    591,  65,
        1,    0,    0,    0,    592,  599,  3,    112,  56,   0,    593,  599,  5,    35,   0,    0,    594,  599,
        5,    1,    0,    0,    595,  599,  5,    12,   0,    0,    596,  599,  5,    38,   0,    0,    597,  599,
        5,    39,   0,    0,    598,  592,  1,    0,    0,    0,    598,  593,  1,    0,    0,    0,    598,  594,
        1,    0,    0,    0,    598,  595,  1,    0,    0,    0,    598,  596,  1,    0,    0,    0,    598,  597,
        1,    0,    0,    0,    599,  67,   1,    0,    0,    0,    600,  602,  3,    66,   33,   0,    601,  600,
        1,    0,    0,    0,    602,  605,  1,    0,    0,    0,    603,  601,  1,    0,    0,    0,    603,  604,
        1,    0,    0,    0,    604,  606,  1,    0,    0,    0,    605,  603,  1,    0,    0,    0,    606,  607,
        3,    16,   8,    0,    607,  608,  3,    70,   35,   0,    608,  69,   1,    0,    0,    0,    609,  611,
        3,    112,  56,   0,    610,  609,  1,    0,    0,    0,    611,  614,  1,    0,    0,    0,    612,  610,
        1,    0,    0,    0,    612,  613,  1,    0,    0,    0,    613,  615,  1,    0,    0,    0,    614,  612,
        1,    0,    0,    0,    615,  616,  3,    44,   22,   0,    616,  617,  3,    162,  81,   0,    617,  622,
        3,    88,   44,   0,    618,  619,  5,    82,   0,    0,    619,  621,  5,    83,   0,    0,    620,  618,
        1,    0,    0,    0,    621,  624,  1,    0,    0,    0,    622,  620,  1,    0,    0,    0,    622,  623,
        1,    0,    0,    0,    623,  627,  1,    0,    0,    0,    624,  622,  1,    0,    0,    0,    625,  626,
        5,    45,   0,    0,    626,  628,  3,    86,   43,   0,    627,  625,  1,    0,    0,    0,    627,  628,
        1,    0,    0,    0,    628,  629,  1,    0,    0,    0,    629,  630,  3,    42,   21,   0,    630,  71,
        1,    0,    0,    0,    631,  636,  3,    74,   37,   0,    632,  633,  5,    85,   0,    0,    633,  635,
        3,    74,   37,   0,    634,  632,  1,    0,    0,    0,    635,  638,  1,    0,    0,    0,    636,  634,
        1,    0,    0,    0,    636,  637,  1,    0,    0,    0,    637,  73,   1,    0,    0,    0,    638,  636,
        1,    0,    0,    0,    639,  642,  3,    76,   38,   0,    640,  641,  5,    87,   0,    0,    641,  643,
        3,    78,   39,   0,    642,  640,  1,    0,    0,    0,    642,  643,  1,    0,    0,    0,    643,  75,
        1,    0,    0,    0,    644,  649,  3,    162,  81,   0,    645,  646,  5,    82,   0,    0,    646,  648,
        5,    83,   0,    0,    647,  645,  1,    0,    0,    0,    648,  651,  1,    0,    0,    0,    649,  647,
        1,    0,    0,    0,    649,  650,  1,    0,    0,    0,    650,  77,   1,    0,    0,    0,    651,  649,
        1,    0,    0,    0,    652,  655,  3,    80,   40,   0,    653,  655,  3,    198,  99,   0,    654,  652,
        1,    0,    0,    0,    654,  653,  1,    0,    0,    0,    655,  79,   1,    0,    0,    0,    656,  668,
        5,    80,   0,    0,    657,  662,  3,    78,   39,   0,    658,  659,  5,    85,   0,    0,    659,  661,
        3,    78,   39,   0,    660,  658,  1,    0,    0,    0,    661,  664,  1,    0,    0,    0,    662,  660,
        1,    0,    0,    0,    662,  663,  1,    0,    0,    0,    663,  666,  1,    0,    0,    0,    664,  662,
        1,    0,    0,    0,    665,  667,  5,    85,   0,    0,    666,  665,  1,    0,    0,    0,    666,  667,
        1,    0,    0,    0,    667,  669,  1,    0,    0,    0,    668,  657,  1,    0,    0,    0,    668,  669,
        1,    0,    0,    0,    669,  670,  1,    0,    0,    0,    670,  671,  5,    81,   0,    0,    671,  81,
        1,    0,    0,    0,    672,  674,  3,    162,  81,   0,    673,  675,  3,    244,  122,  0,    674,  673,
        1,    0,    0,    0,    674,  675,  1,    0,    0,    0,    675,  676,  1,    0,    0,    0,    676,  677,
        5,    86,   0,    0,    677,  679,  1,    0,    0,    0,    678,  672,  1,    0,    0,    0,    679,  682,
        1,    0,    0,    0,    680,  678,  1,    0,    0,    0,    680,  681,  1,    0,    0,    0,    681,  683,
        1,    0,    0,    0,    682,  680,  1,    0,    0,    0,    683,  685,  3,    164,  82,   0,    684,  686,
        3,    244,  122,  0,    685,  684,  1,    0,    0,    0,    685,  686,  1,    0,    0,    0,    686,  83,
        1,    0,    0,    0,    687,  700,  3,    240,  120,  0,    688,  690,  3,    112,  56,   0,    689,  688,
        1,    0,    0,    0,    690,  693,  1,    0,    0,    0,    691,  689,  1,    0,    0,    0,    691,  692,
        1,    0,    0,    0,    692,  694,  1,    0,    0,    0,    693,  691,  1,    0,    0,    0,    694,  697,
        5,    92,   0,    0,    695,  696,  7,    0,    0,    0,    696,  698,  3,    240,  120,  0,    697,  695,
        1,    0,    0,    0,    697,  698,  1,    0,    0,    0,    698,  700,  1,    0,    0,    0,    699,  687,
        1,    0,    0,    0,    699,  691,  1,    0,    0,    0,    700,  85,   1,    0,    0,    0,    701,  706,
        3,    102,  51,   0,    702,  703,  5,    85,   0,    0,    703,  705,  3,    102,  51,   0,    704,  702,
        1,    0,    0,    0,    705,  708,  1,    0,    0,    0,    706,  704,  1,    0,    0,    0,    706,  707,
        1,    0,    0,    0,    707,  87,   1,    0,    0,    0,    708,  706,  1,    0,    0,    0,    709,  721,
        5,    78,   0,    0,    710,  712,  3,    90,   45,   0,    711,  710,  1,    0,    0,    0,    711,  712,
        1,    0,    0,    0,    712,  722,  1,    0,    0,    0,    713,  716,  3,    90,   45,   0,    714,  715,
        5,    85,   0,    0,    715,  717,  3,    92,   46,   0,    716,  714,  1,    0,    0,    0,    716,  717,
        1,    0,    0,    0,    717,  722,  1,    0,    0,    0,    718,  720,  3,    92,   46,   0,    719,  718,
        1,    0,    0,    0,    719,  720,  1,    0,    0,    0,    720,  722,  1,    0,    0,    0,    721,  711,
        1,    0,    0,    0,    721,  713,  1,    0,    0,    0,    721,  719,  1,    0,    0,    0,    722,  723,
        1,    0,    0,    0,    723,  724,  5,    79,   0,    0,    724,  89,   1,    0,    0,    0,    725,  731,
        3,    240,  120,  0,    726,  727,  3,    162,  81,   0,    727,  728,  5,    86,   0,    0,    728,  730,
        1,    0,    0,    0,    729,  726,  1,    0,    0,    0,    730,  733,  1,    0,    0,    0,    731,  729,
        1,    0,    0,    0,    731,  732,  1,    0,    0,    0,    732,  734,  1,    0,    0,    0,    733,  731,
        1,    0,    0,    0,    734,  735,  5,    43,   0,    0,    735,  91,   1,    0,    0,    0,    736,  741,
        3,    94,   47,   0,    737,  738,  5,    85,   0,    0,    738,  740,  3,    94,   47,   0,    739,  737,
        1,    0,    0,    0,    740,  743,  1,    0,    0,    0,    741,  739,  1,    0,    0,    0,    741,  742,
        1,    0,    0,    0,    742,  746,  1,    0,    0,    0,    743,  741,  1,    0,    0,    0,    744,  745,
        5,    85,   0,    0,    745,  747,  3,    96,   48,   0,    746,  744,  1,    0,    0,    0,    746,  747,
        1,    0,    0,    0,    747,  750,  1,    0,    0,    0,    748,  750,  3,    96,   48,   0,    749,  736,
        1,    0,    0,    0,    749,  748,  1,    0,    0,    0,    750,  93,   1,    0,    0,    0,    751,  753,
        3,    12,   6,    0,    752,  751,  1,    0,    0,    0,    753,  756,  1,    0,    0,    0,    754,  752,
        1,    0,    0,    0,    754,  755,  1,    0,    0,    0,    755,  757,  1,    0,    0,    0,    756,  754,
        1,    0,    0,    0,    757,  758,  3,    240,  120,  0,    758,  759,  3,    76,   38,   0,    759,  95,
        1,    0,    0,    0,    760,  762,  3,    12,   6,    0,    761,  760,  1,    0,    0,    0,    762,  765,
        1,    0,    0,    0,    763,  761,  1,    0,    0,    0,    763,  764,  1,    0,    0,    0,    764,  766,
        1,    0,    0,    0,    765,  763,  1,    0,    0,    0,    766,  770,  3,    240,  120,  0,    767,  769,
        3,    112,  56,   0,    768,  767,  1,    0,    0,    0,    769,  772,  1,    0,    0,    0,    770,  768,
        1,    0,    0,    0,    770,  771,  1,    0,    0,    0,    771,  773,  1,    0,    0,    0,    772,  770,
        1,    0,    0,    0,    773,  774,  5,    124,  0,    0,    774,  775,  3,    76,   38,   0,    775,  97,
        1,    0,    0,    0,    776,  781,  3,    100,  50,   0,    777,  778,  5,    85,   0,    0,    778,  780,
        3,    100,  50,   0,    779,  777,  1,    0,    0,    0,    780,  783,  1,    0,    0,    0,    781,  779,
        1,    0,    0,    0,    781,  782,  1,    0,    0,    0,    782,  99,   1,    0,    0,    0,    783,  781,
        1,    0,    0,    0,    784,  786,  3,    12,   6,    0,    785,  784,  1,    0,    0,    0,    786,  789,
        1,    0,    0,    0,    787,  785,  1,    0,    0,    0,    787,  788,  1,    0,    0,    0,    788,  790,
        1,    0,    0,    0,    789,  787,  1,    0,    0,    0,    790,  791,  5,    61,   0,    0,    791,  792,
        3,    162,  81,   0,    792,  101,  1,    0,    0,    0,    793,  798,  3,    162,  81,   0,    794,  795,
        5,    86,   0,    0,    795,  797,  3,    162,  81,   0,    796,  794,  1,    0,    0,    0,    797,  800,
        1,    0,    0,    0,    798,  796,  1,    0,    0,    0,    798,  799,  1,    0,    0,    0,    799,  103,
        1,    0,    0,    0,    800,  798,  1,    0,    0,    0,    801,  809,  3,    106,  53,   0,    802,  809,
        3,    108,  54,   0,    803,  809,  5,    74,   0,    0,    804,  809,  5,    75,   0,    0,    805,  809,
        5,    73,   0,    0,    806,  809,  5,    77,   0,    0,    807,  809,  5,    76,   0,    0,    808,  801,
        1,    0,    0,    0,    808,  802,  1,    0,    0,    0,    808,  803,  1,    0,    0,    0,    808,  804,
        1,    0,    0,    0,    808,  805,  1,    0,    0,    0,    808,  806,  1,    0,    0,    0,    808,  807,
        1,    0,    0,    0,    809,  105,  1,    0,    0,    0,    810,  811,  7,    1,    0,    0,    811,  107,
        1,    0,    0,    0,    812,  813,  7,    2,    0,    0,    813,  109,  1,    0,    0,    0,    814,  815,
        3,    162,  81,   0,    815,  816,  5,    86,   0,    0,    816,  818,  1,    0,    0,    0,    817,  814,
        1,    0,    0,    0,    818,  821,  1,    0,    0,    0,    819,  817,  1,    0,    0,    0,    819,  820,
        1,    0,    0,    0,    820,  822,  1,    0,    0,    0,    821,  819,  1,    0,    0,    0,    822,  823,
        5,    123,  0,    0,    823,  824,  3,    162,  81,   0,    824,  111,  1,    0,    0,    0,    825,  826,
        5,    123,  0,    0,    826,  829,  3,    102,  51,   0,    827,  829,  3,    110,  55,   0,    828,  825,
        1,    0,    0,    0,    828,  827,  1,    0,    0,    0,    829,  836,  1,    0,    0,    0,    830,  833,
        5,    78,   0,    0,    831,  834,  3,    114,  57,   0,    832,  834,  3,    118,  59,   0,    833,  831,
        1,    0,    0,    0,    833,  832,  1,    0,    0,    0,    833,  834,  1,    0,    0,    0,    834,  835,
        1,    0,    0,    0,    835,  837,  5,    79,   0,    0,    836,  830,  1,    0,    0,    0,    836,  837,
        1,    0,    0,    0,    837,  113,  1,    0,    0,    0,    838,  843,  3,    116,  58,   0,    839,  840,
        5,    85,   0,    0,    840,  842,  3,    116,  58,   0,    841,  839,  1,    0,    0,    0,    842,  845,
        1,    0,    0,    0,    843,  841,  1,    0,    0,    0,    843,  844,  1,    0,    0,    0,    844,  115,
        1,    0,    0,    0,    845,  843,  1,    0,    0,    0,    846,  847,  3,    162,  81,   0,    847,  848,
        5,    87,   0,    0,    848,  849,  3,    118,  59,   0,    849,  117,  1,    0,    0,    0,    850,  854,
        3,    198,  99,   0,    851,  854,  3,    112,  56,   0,    852,  854,  3,    120,  60,   0,    853,  850,
        1,    0,    0,    0,    853,  851,  1,    0,    0,    0,    853,  852,  1,    0,    0,    0,    854,  119,
        1,    0,    0,    0,    855,  864,  5,    80,   0,    0,    856,  861,  3,    118,  59,   0,    857,  858,
        5,    85,   0,    0,    858,  860,  3,    118,  59,   0,    859,  857,  1,    0,    0,    0,    860,  863,
        1,    0,    0,    0,    861,  859,  1,    0,    0,    0,    861,  862,  1,    0,    0,    0,    862,  865,
        1,    0,    0,    0,    863,  861,  1,    0,    0,    0,    864,  856,  1,    0,    0,    0,    864,  865,
        1,    0,    0,    0,    865,  867,  1,    0,    0,    0,    866,  868,  5,    85,   0,    0,    867,  866,
        1,    0,    0,    0,    867,  868,  1,    0,    0,    0,    868,  869,  1,    0,    0,    0,    869,  870,
        5,    81,   0,    0,    870,  121,  1,    0,    0,    0,    871,  872,  5,    123,  0,    0,    872,  873,
        5,    28,   0,    0,    873,  874,  3,    162,  81,   0,    874,  875,  3,    124,  62,   0,    875,  123,
        1,    0,    0,    0,    876,  880,  5,    80,   0,    0,    877,  879,  3,    126,  63,   0,    878,  877,
        1,    0,    0,    0,    879,  882,  1,    0,    0,    0,    880,  878,  1,    0,    0,    0,    880,  881,
        1,    0,    0,    0,    881,  883,  1,    0,    0,    0,    882,  880,  1,    0,    0,    0,    883,  884,
        5,    81,   0,    0,    884,  125,  1,    0,    0,    0,    885,  887,  3,    8,    4,    0,    886,  885,
        1,    0,    0,    0,    887,  890,  1,    0,    0,    0,    888,  886,  1,    0,    0,    0,    888,  889,
        1,    0,    0,    0,    889,  891,  1,    0,    0,    0,    890,  888,  1,    0,    0,    0,    891,  894,
        3,    128,  64,   0,    892,  894,  5,    84,   0,    0,    893,  888,  1,    0,    0,    0,    893,  892,
        1,    0,    0,    0,    894,  127,  1,    0,    0,    0,    895,  896,  3,    240,  120,  0,    896,  897,
        3,    130,  65,   0,    897,  898,  5,    84,   0,    0,    898,  920,  1,    0,    0,    0,    899,  901,
        3,    14,   7,    0,    900,  902,  5,    84,   0,    0,    901,  900,  1,    0,    0,    0,    901,  902,
        1,    0,    0,    0,    902,  920,  1,    0,    0,    0,    903,  905,  3,    30,   15,   0,    904,  906,
        5,    84,   0,    0,    905,  904,  1,    0,    0,    0,    905,  906,  1,    0,    0,    0,    906,  920,
        1,    0,    0,    0,    907,  909,  3,    22,   11,   0,    908,  910,  5,    84,   0,    0,    909,  908,
        1,    0,    0,    0,    909,  910,  1,    0,    0,    0,    910,  920,  1,    0,    0,    0,    911,  913,
        3,    122,  61,   0,    912,  914,  5,    84,   0,    0,    913,  912,  1,    0,    0,    0,    913,  914,
        1,    0,    0,    0,    914,  920,  1,    0,    0,    0,    915,  917,  3,    146,  73,   0,    916,  918,
        5,    84,   0,    0,    917,  916,  1,    0,    0,    0,    917,  918,  1,    0,    0,    0,    918,  920,
        1,    0,    0,    0,    919,  895,  1,    0,    0,    0,    919,  899,  1,    0,    0,    0,    919,  903,
        1,    0,    0,    0,    919,  907,  1,    0,    0,    0,    919,  911,  1,    0,    0,    0,    919,  915,
        1,    0,    0,    0,    920,  129,  1,    0,    0,    0,    921,  924,  3,    132,  66,   0,    922,  924,
        3,    134,  67,   0,    923,  921,  1,    0,    0,    0,    923,  922,  1,    0,    0,    0,    924,  131,
        1,    0,    0,    0,    925,  926,  3,    162,  81,   0,    926,  927,  5,    78,   0,    0,    927,  929,
        5,    79,   0,    0,    928,  930,  3,    136,  68,   0,    929,  928,  1,    0,    0,    0,    929,  930,
        1,    0,    0,    0,    930,  133,  1,    0,    0,    0,    931,  932,  3,    72,   36,   0,    932,  135,
        1,    0,    0,    0,    933,  934,  5,    12,   0,    0,    934,  935,  3,    118,  59,   0,    935,  137,
        1,    0,    0,    0,    936,  938,  5,    52,   0,    0,    937,  936,  1,    0,    0,    0,    937,  938,
        1,    0,    0,    0,    938,  939,  1,    0,    0,    0,    939,  940,  5,    51,   0,    0,    940,  941,
        3,    102,  51,   0,    941,  942,  3,    140,  70,   0,    942,  139,  1,    0,    0,    0,    943,  947,
        5,    80,   0,    0,    944,  946,  3,    142,  71,   0,    945,  944,  1,    0,    0,    0,    946,  949,
        1,    0,    0,    0,    947,  945,  1,    0,    0,    0,    947,  948,  1,    0,    0,    0,    948,  950,
        1,    0,    0,    0,    949,  947,  1,    0,    0,    0,    950,  951,  5,    81,   0,    0,    951,  141,
        1,    0,    0,    0,    952,  956,  5,    53,   0,    0,    953,  955,  3,    144,  72,   0,    954,  953,
        1,    0,    0,    0,    955,  958,  1,    0,    0,    0,    956,  954,  1,    0,    0,    0,    956,  957,
        1,    0,    0,    0,    957,  959,  1,    0,    0,    0,    958,  956,  1,    0,    0,    0,    959,  960,
        3,    102,  51,   0,    960,  961,  5,    84,   0,    0,    961,  989,  1,    0,    0,    0,    962,  963,
        5,    54,   0,    0,    963,  966,  3,    102,  51,   0,    964,  965,  5,    56,   0,    0,    965,  967,
        3,    102,  51,   0,    966,  964,  1,    0,    0,    0,    966,  967,  1,    0,    0,    0,    967,  968,
        1,    0,    0,    0,    968,  969,  5,    84,   0,    0,    969,  989,  1,    0,    0,    0,    970,  971,
        5,    55,   0,    0,    971,  974,  3,    102,  51,   0,    972,  973,  5,    56,   0,    0,    973,  975,
        3,    102,  51,   0,    974,  972,  1,    0,    0,    0,    974,  975,  1,    0,    0,    0,    975,  976,
        1,    0,    0,    0,    976,  977,  5,    84,   0,    0,    977,  989,  1,    0,    0,    0,    978,  979,
        5,    57,   0,    0,    979,  980,  3,    102,  51,   0,    980,  981,  5,    84,   0,    0,    981,  989,
        1,    0,    0,    0,    982,  983,  5,    58,   0,    0,    983,  984,  3,    102,  51,   0,    984,  985,
        5,    59,   0,    0,    985,  986,  3,    102,  51,   0,    986,  987,  5,    84,   0,    0,    987,  989,
        1,    0,    0,    0,    988,  952,  1,    0,    0,    0,    988,  962,  1,    0,    0,    0,    988,  970,
        1,    0,    0,    0,    988,  978,  1,    0,    0,    0,    988,  982,  1,    0,    0,    0,    989,  143,
        1,    0,    0,    0,    990,  991,  7,    3,    0,    0,    991,  145,  1,    0,    0,    0,    992,  993,
        5,    63,   0,    0,    993,  995,  3,    162,  81,   0,    994,  996,  3,    16,   8,    0,    995,  994,
        1,    0,    0,    0,    995,  996,  1,    0,    0,    0,    996,  997,  1,    0,    0,    0,    997,  1000,
        3,    148,  74,   0,    998,  999,  5,    24,   0,    0,    999,  1001, 3,    238,  119,  0,    1000, 998,
        1,    0,    0,    0,    1000, 1001, 1,    0,    0,    0,    1001, 1002, 1,    0,    0,    0,    1002, 1003,
        3,    154,  77,   0,    1003, 147,  1,    0,    0,    0,    1004, 1006, 5,    78,   0,    0,    1005, 1007,
        3,    150,  75,   0,    1006, 1005, 1,    0,    0,    0,    1006, 1007, 1,    0,    0,    0,    1007, 1008,
        1,    0,    0,    0,    1008, 1009, 5,    79,   0,    0,    1009, 149,  1,    0,    0,    0,    1010, 1015,
        3,    152,  76,   0,    1011, 1012, 5,    85,   0,    0,    1012, 1014, 3,    152,  76,   0,    1013, 1011,
        1,    0,    0,    0,    1014, 1017, 1,    0,    0,    0,    1015, 1013, 1,    0,    0,    0,    1015, 1016,
        1,    0,    0,    0,    1016, 151,  1,    0,    0,    0,    1017, 1015, 1,    0,    0,    0,    1018, 1019,
        3,    240,  120,  0,    1019, 1020, 3,    162,  81,   0,    1020, 153,  1,    0,    0,    0,    1021, 1026,
        5,    80,   0,    0,    1022, 1025, 3,    36,   18,   0,    1023, 1025, 3,    52,   26,   0,    1024, 1022,
        1,    0,    0,    0,    1024, 1023, 1,    0,    0,    0,    1025, 1028, 1,    0,    0,    0,    1026, 1024,
        1,    0,    0,    0,    1026, 1027, 1,    0,    0,    0,    1027, 1029, 1,    0,    0,    0,    1028, 1026,
        1,    0,    0,    0,    1029, 1030, 5,    81,   0,    0,    1030, 155,  1,    0,    0,    0,    1031, 1035,
        5,    80,   0,    0,    1032, 1034, 3,    158,  79,   0,    1033, 1032, 1,    0,    0,    0,    1034, 1037,
        1,    0,    0,    0,    1035, 1033, 1,    0,    0,    0,    1035, 1036, 1,    0,    0,    0,    1036, 1038,
        1,    0,    0,    0,    1037, 1035, 1,    0,    0,    0,    1038, 1039, 5,    81,   0,    0,    1039, 157,
        1,    0,    0,    0,    1040, 1041, 3,    160,  80,   0,    1041, 1042, 5,    84,   0,    0,    1042, 1046,
        1,    0,    0,    0,    1043, 1046, 3,    166,  83,   0,    1044, 1046, 3,    168,  84,   0,    1045, 1040,
        1,    0,    0,    0,    1045, 1043, 1,    0,    0,    0,    1045, 1044, 1,    0,    0,    0,    1046, 159,
        1,    0,    0,    0,    1047, 1049, 3,    12,   6,    0,    1048, 1047, 1,    0,    0,    0,    1049, 1052,
        1,    0,    0,    0,    1050, 1048, 1,    0,    0,    0,    1050, 1051, 1,    0,    0,    0,    1051, 1061,
        1,    0,    0,    0,    1052, 1050, 1,    0,    0,    0,    1053, 1054, 5,    61,   0,    0,    1054, 1055,
        3,    162,  81,   0,    1055, 1056, 5,    87,   0,    0,    1056, 1057, 3,    198,  99,   0,    1057, 1062,
        1,    0,    0,    0,    1058, 1059, 3,    240,  120,  0,    1059, 1060, 3,    72,   36,   0,    1060, 1062,
        1,    0,    0,    0,    1061, 1053, 1,    0,    0,    0,    1061, 1058, 1,    0,    0,    0,    1062, 161,
        1,    0,    0,    0,    1063, 1064, 7,    4,    0,    0,    1064, 163,  1,    0,    0,    0,    1065, 1066,
        7,    5,    0,    0,    1066, 165,  1,    0,    0,    0,    1067, 1069, 3,    10,   5,    0,    1068, 1067,
        1,    0,    0,    0,    1069, 1072, 1,    0,    0,    0,    1070, 1068, 1,    0,    0,    0,    1070, 1071,
        1,    0,    0,    0,    1071, 1076, 1,    0,    0,    0,    1072, 1070, 1,    0,    0,    0,    1073, 1077,
        3,    14,   7,    0,    1074, 1077, 3,    30,   15,   0,    1075, 1077, 3,    146,  73,   0,    1076, 1073,
        1,    0,    0,    0,    1076, 1074, 1,    0,    0,    0,    1076, 1075, 1,    0,    0,    0,    1077, 167,
        1,    0,    0,    0,    1078, 1192, 3,    156,  78,   0,    1079, 1080, 5,    2,    0,    0,    1080, 1083,
        3,    198,  99,   0,    1081, 1082, 5,    93,   0,    0,    1082, 1084, 3,    198,  99,   0,    1083, 1081,
        1,    0,    0,    0,    1083, 1084, 1,    0,    0,    0,    1084, 1085, 1,    0,    0,    0,    1085, 1086,
        5,    84,   0,    0,    1086, 1192, 1,    0,    0,    0,    1087, 1088, 5,    22,   0,    0,    1088, 1089,
        3,    192,  96,   0,    1089, 1092, 3,    168,  84,   0,    1090, 1091, 5,    15,   0,    0,    1091, 1093,
        3,    168,  84,   0,    1092, 1090, 1,    0,    0,    0,    1092, 1093, 1,    0,    0,    0,    1093, 1192,
        1,    0,    0,    0,    1094, 1095, 5,    21,   0,    0,    1095, 1096, 5,    78,   0,    0,    1096, 1097,
        3,    186,  93,   0,    1097, 1098, 5,    79,   0,    0,    1098, 1099, 3,    168,  84,   0,    1099, 1192,
        1,    0,    0,    0,    1100, 1101, 5,    50,   0,    0,    1101, 1102, 3,    192,  96,   0,    1102, 1103,
        3,    168,  84,   0,    1103, 1192, 1,    0,    0,    0,    1104, 1105, 5,    13,   0,    0,    1105, 1106,
        3,    168,  84,   0,    1106, 1107, 5,    50,   0,    0,    1107, 1108, 3,    192,  96,   0,    1108, 1109,
        5,    84,   0,    0,    1109, 1192, 1,    0,    0,    0,    1110, 1111, 5,    47,   0,    0,    1111, 1121,
        3,    156,  78,   0,    1112, 1114, 3,    170,  85,   0,    1113, 1112, 1,    0,    0,    0,    1114, 1115,
        1,    0,    0,    0,    1115, 1113, 1,    0,    0,    0,    1115, 1116, 1,    0,    0,    0,    1116, 1118,
        1,    0,    0,    0,    1117, 1119, 3,    174,  87,   0,    1118, 1117, 1,    0,    0,    0,    1118, 1119,
        1,    0,    0,    0,    1119, 1122, 1,    0,    0,    0,    1120, 1122, 3,    174,  87,   0,    1121, 1113,
        1,    0,    0,    0,    1121, 1120, 1,    0,    0,    0,    1122, 1192, 1,    0,    0,    0,    1123, 1124,
        5,    47,   0,    0,    1124, 1125, 3,    176,  88,   0,    1125, 1129, 3,    156,  78,   0,    1126, 1128,
        3,    170,  85,   0,    1127, 1126, 1,    0,    0,    0,    1128, 1131, 1,    0,    0,    0,    1129, 1127,
        1,    0,    0,    0,    1129, 1130, 1,    0,    0,    0,    1130, 1133, 1,    0,    0,    0,    1131, 1129,
        1,    0,    0,    0,    1132, 1134, 3,    174,  87,   0,    1133, 1132, 1,    0,    0,    0,    1133, 1134,
        1,    0,    0,    0,    1134, 1192, 1,    0,    0,    0,    1135, 1136, 5,    41,   0,    0,    1136, 1137,
        3,    192,  96,   0,    1137, 1141, 5,    80,   0,    0,    1138, 1140, 3,    182,  91,   0,    1139, 1138,
        1,    0,    0,    0,    1140, 1143, 1,    0,    0,    0,    1141, 1139, 1,    0,    0,    0,    1141, 1142,
        1,    0,    0,    0,    1142, 1147, 1,    0,    0,    0,    1143, 1141, 1,    0,    0,    0,    1144, 1146,
        3,    184,  92,   0,    1145, 1144, 1,    0,    0,    0,    1146, 1149, 1,    0,    0,    0,    1147, 1145,
        1,    0,    0,    0,    1147, 1148, 1,    0,    0,    0,    1148, 1150, 1,    0,    0,    0,    1149, 1147,
        1,    0,    0,    0,    1150, 1151, 5,    81,   0,    0,    1151, 1192, 1,    0,    0,    0,    1152, 1153,
        5,    42,   0,    0,    1153, 1154, 3,    192,  96,   0,    1154, 1155, 3,    156,  78,   0,    1155, 1192,
        1,    0,    0,    0,    1156, 1158, 5,    36,   0,    0,    1157, 1159, 3,    198,  99,   0,    1158, 1157,
        1,    0,    0,    0,    1158, 1159, 1,    0,    0,    0,    1159, 1160, 1,    0,    0,    0,    1160, 1192,
        5,    84,   0,    0,    1161, 1162, 5,    44,   0,    0,    1162, 1163, 3,    198,  99,   0,    1163, 1164,
        5,    84,   0,    0,    1164, 1192, 1,    0,    0,    0,    1165, 1167, 5,    4,    0,    0,    1166, 1168,
        3,    162,  81,   0,    1167, 1166, 1,    0,    0,    0,    1167, 1168, 1,    0,    0,    0,    1168, 1169,
        1,    0,    0,    0,    1169, 1192, 5,    84,   0,    0,    1170, 1172, 5,    11,   0,    0,    1171, 1173,
        3,    162,  81,   0,    1172, 1171, 1,    0,    0,    0,    1172, 1173, 1,    0,    0,    0,    1173, 1174,
        1,    0,    0,    0,    1174, 1192, 5,    84,   0,    0,    1175, 1176, 5,    62,   0,    0,    1176, 1177,
        3,    198,  99,   0,    1177, 1178, 5,    84,   0,    0,    1178, 1192, 1,    0,    0,    0,    1179, 1192,
        5,    84,   0,    0,    1180, 1181, 3,    198,  99,   0,    1181, 1182, 5,    84,   0,    0,    1182, 1192,
        1,    0,    0,    0,    1183, 1185, 3,    210,  105,  0,    1184, 1186, 5,    84,   0,    0,    1185, 1184,
        1,    0,    0,    0,    1185, 1186, 1,    0,    0,    0,    1186, 1192, 1,    0,    0,    0,    1187, 1188,
        3,    162,  81,   0,    1188, 1189, 5,    93,   0,    0,    1189, 1190, 3,    168,  84,   0,    1190, 1192,
        1,    0,    0,    0,    1191, 1078, 1,    0,    0,    0,    1191, 1079, 1,    0,    0,    0,    1191, 1087,
        1,    0,    0,    0,    1191, 1094, 1,    0,    0,    0,    1191, 1100, 1,    0,    0,    0,    1191, 1104,
        1,    0,    0,    0,    1191, 1110, 1,    0,    0,    0,    1191, 1123, 1,    0,    0,    0,    1191, 1135,
        1,    0,    0,    0,    1191, 1152, 1,    0,    0,    0,    1191, 1156, 1,    0,    0,    0,    1191, 1161,
        1,    0,    0,    0,    1191, 1165, 1,    0,    0,    0,    1191, 1170, 1,    0,    0,    0,    1191, 1175,
        1,    0,    0,    0,    1191, 1179, 1,    0,    0,    0,    1191, 1180, 1,    0,    0,    0,    1191, 1183,
        1,    0,    0,    0,    1191, 1187, 1,    0,    0,    0,    1192, 169,  1,    0,    0,    0,    1193, 1194,
        5,    7,    0,    0,    1194, 1198, 5,    78,   0,    0,    1195, 1197, 3,    12,   6,    0,    1196, 1195,
        1,    0,    0,    0,    1197, 1200, 1,    0,    0,    0,    1198, 1196, 1,    0,    0,    0,    1198, 1199,
        1,    0,    0,    0,    1199, 1201, 1,    0,    0,    0,    1200, 1198, 1,    0,    0,    0,    1201, 1202,
        3,    172,  86,   0,    1202, 1203, 3,    162,  81,   0,    1203, 1204, 5,    79,   0,    0,    1204, 1205,
        3,    156,  78,   0,    1205, 171,  1,    0,    0,    0,    1206, 1211, 3,    102,  51,   0,    1207, 1208,
        5,    107,  0,    0,    1208, 1210, 3,    102,  51,   0,    1209, 1207, 1,    0,    0,    0,    1210, 1213,
        1,    0,    0,    0,    1211, 1209, 1,    0,    0,    0,    1211, 1212, 1,    0,    0,    0,    1212, 173,
        1,    0,    0,    0,    1213, 1211, 1,    0,    0,    0,    1214, 1215, 5,    19,   0,    0,    1215, 1216,
        3,    156,  78,   0,    1216, 175,  1,    0,    0,    0,    1217, 1218, 5,    78,   0,    0,    1218, 1220,
        3,    178,  89,   0,    1219, 1221, 5,    84,   0,    0,    1220, 1219, 1,    0,    0,    0,    1220, 1221,
        1,    0,    0,    0,    1221, 1222, 1,    0,    0,    0,    1222, 1223, 5,    79,   0,    0,    1223, 177,
        1,    0,    0,    0,    1224, 1229, 3,    180,  90,   0,    1225, 1226, 5,    84,   0,    0,    1226, 1228,
        3,    180,  90,   0,    1227, 1225, 1,    0,    0,    0,    1228, 1231, 1,    0,    0,    0,    1229, 1227,
        1,    0,    0,    0,    1229, 1230, 1,    0,    0,    0,    1230, 179,  1,    0,    0,    0,    1231, 1229,
        1,    0,    0,    0,    1232, 1234, 3,    12,   6,    0,    1233, 1232, 1,    0,    0,    0,    1234, 1237,
        1,    0,    0,    0,    1235, 1233, 1,    0,    0,    0,    1235, 1236, 1,    0,    0,    0,    1236, 1243,
        1,    0,    0,    0,    1237, 1235, 1,    0,    0,    0,    1238, 1239, 3,    82,   41,   0,    1239, 1240,
        3,    76,   38,   0,    1240, 1244, 1,    0,    0,    0,    1241, 1242, 5,    61,   0,    0,    1242, 1244,
        3,    162,  81,   0,    1243, 1238, 1,    0,    0,    0,    1243, 1241, 1,    0,    0,    0,    1244, 1245,
        1,    0,    0,    0,    1245, 1246, 5,    87,   0,    0,    1246, 1247, 3,    198,  99,   0,    1247, 1250,
        1,    0,    0,    0,    1248, 1250, 3,    102,  51,   0,    1249, 1235, 1,    0,    0,    0,    1249, 1248,
        1,    0,    0,    0,    1250, 181,  1,    0,    0,    0,    1251, 1253, 3,    184,  92,   0,    1252, 1251,
        1,    0,    0,    0,    1253, 1254, 1,    0,    0,    0,    1254, 1252, 1,    0,    0,    0,    1254, 1255,
        1,    0,    0,    0,    1255, 1257, 1,    0,    0,    0,    1256, 1258, 3,    158,  79,   0,    1257, 1256,
        1,    0,    0,    0,    1258, 1259, 1,    0,    0,    0,    1259, 1257, 1,    0,    0,    0,    1259, 1260,
        1,    0,    0,    0,    1260, 183,  1,    0,    0,    0,    1261, 1267, 5,    6,    0,    0,    1262, 1268,
        3,    198,  99,   0,    1263, 1268, 5,    128,  0,    0,    1264, 1265, 3,    240,  120,  0,    1265, 1266,
        3,    162,  81,   0,    1266, 1268, 1,    0,    0,    0,    1267, 1262, 1,    0,    0,    0,    1267, 1263,
        1,    0,    0,    0,    1267, 1264, 1,    0,    0,    0,    1268, 1269, 1,    0,    0,    0,    1269, 1273,
        5,    93,   0,    0,    1270, 1271, 5,    12,   0,    0,    1271, 1273, 5,    93,   0,    0,    1272, 1261,
        1,    0,    0,    0,    1272, 1270, 1,    0,    0,    0,    1273, 185,  1,    0,    0,    0,    1274, 1287,
        3,    190,  95,   0,    1275, 1277, 3,    188,  94,   0,    1276, 1275, 1,    0,    0,    0,    1276, 1277,
        1,    0,    0,    0,    1277, 1278, 1,    0,    0,    0,    1278, 1280, 5,    84,   0,    0,    1279, 1281,
        3,    198,  99,   0,    1280, 1279, 1,    0,    0,    0,    1280, 1281, 1,    0,    0,    0,    1281, 1282,
        1,    0,    0,    0,    1282, 1284, 5,    84,   0,    0,    1283, 1285, 3,    194,  97,   0,    1284, 1283,
        1,    0,    0,    0,    1284, 1285, 1,    0,    0,    0,    1285, 1287, 1,    0,    0,    0,    1286, 1274,
        1,    0,    0,    0,    1286, 1276, 1,    0,    0,    0,    1287, 187,  1,    0,    0,    0,    1288, 1291,
        3,    160,  80,   0,    1289, 1291, 3,    194,  97,   0,    1290, 1288, 1,    0,    0,    0,    1290, 1289,
        1,    0,    0,    0,    1291, 189,  1,    0,    0,    0,    1292, 1294, 3,    12,   6,    0,    1293, 1292,
        1,    0,    0,    0,    1294, 1297, 1,    0,    0,    0,    1295, 1293, 1,    0,    0,    0,    1295, 1296,
        1,    0,    0,    0,    1296, 1300, 1,    0,    0,    0,    1297, 1295, 1,    0,    0,    0,    1298, 1301,
        3,    240,  120,  0,    1299, 1301, 5,    61,   0,    0,    1300, 1298, 1,    0,    0,    0,    1300, 1299,
        1,    0,    0,    0,    1301, 1302, 1,    0,    0,    0,    1302, 1303, 3,    76,   38,   0,    1303, 1304,
        5,    93,   0,    0,    1304, 1305, 3,    198,  99,   0,    1305, 191,  1,    0,    0,    0,    1306, 1307,
        5,    78,   0,    0,    1307, 1308, 3,    198,  99,   0,    1308, 1309, 5,    79,   0,    0,    1309, 193,
        1,    0,    0,    0,    1310, 1315, 3,    198,  99,   0,    1311, 1312, 5,    85,   0,    0,    1312, 1314,
        3,    198,  99,   0,    1313, 1311, 1,    0,    0,    0,    1314, 1317, 1,    0,    0,    0,    1315, 1313,
        1,    0,    0,    0,    1315, 1316, 1,    0,    0,    0,    1316, 195,  1,    0,    0,    0,    1317, 1315,
        1,    0,    0,    0,    1318, 1322, 3,    162,  81,   0,    1319, 1322, 5,    43,   0,    0,    1320, 1322,
        5,    40,   0,    0,    1321, 1318, 1,    0,    0,    0,    1321, 1319, 1,    0,    0,    0,    1321, 1320,
        1,    0,    0,    0,    1322, 1323, 1,    0,    0,    0,    1323, 1324, 3,    250,  125,  0,    1324, 197,
        1,    0,    0,    0,    1325, 1326, 6,    99,   -1,   0,    1326, 1369, 3,    208,  104,  0,    1327, 1369,
        3,    196,  98,   0,    1328, 1329, 3,    240,  120,  0,    1329, 1335, 5,    122,  0,    0,    1330, 1332,
        3,    244,  122,  0,    1331, 1330, 1,    0,    0,    0,    1331, 1332, 1,    0,    0,    0,    1332, 1333,
        1,    0,    0,    0,    1333, 1336, 3,    162,  81,   0,    1334, 1336, 5,    31,   0,    0,    1335, 1331,
        1,    0,    0,    0,    1335, 1334, 1,    0,    0,    0,    1336, 1369, 1,    0,    0,    0,    1337, 1338,
        3,    218,  109,  0,    1338, 1340, 5,    122,  0,    0,    1339, 1341, 3,    244,  122,  0,    1340, 1339,
        1,    0,    0,    0,    1340, 1341, 1,    0,    0,    0,    1341, 1342, 1,    0,    0,    0,    1342, 1343,
        5,    31,   0,    0,    1343, 1369, 1,    0,    0,    0,    1344, 1369, 3,    210,  105,  0,    1345, 1346,
        7,    6,    0,    0,    1346, 1369, 3,    198,  99,   17,   1347, 1351, 5,    78,   0,    0,    1348, 1350,
        3,    112,  56,   0,    1349, 1348, 1,    0,    0,    0,    1350, 1353, 1,    0,    0,    0,    1351, 1349,
        1,    0,    0,    0,    1351, 1352, 1,    0,    0,    0,    1352, 1354, 1,    0,    0,    0,    1353, 1351,
        1,    0,    0,    0,    1354, 1359, 3,    240,  120,  0,    1355, 1356, 5,    106,  0,    0,    1356, 1358,
        3,    240,  120,  0,    1357, 1355, 1,    0,    0,    0,    1358, 1361, 1,    0,    0,    0,    1359, 1357,
        1,    0,    0,    0,    1359, 1360, 1,    0,    0,    0,    1360, 1362, 1,    0,    0,    0,    1361, 1359,
        1,    0,    0,    0,    1362, 1363, 5,    79,   0,    0,    1363, 1364, 3,    198,  99,   16,   1364, 1369,
        1,    0,    0,    0,    1365, 1366, 5,    31,   0,    0,    1366, 1369, 3,    220,  110,  0,    1367, 1369,
        3,    202,  101,  0,    1368, 1325, 1,    0,    0,    0,    1368, 1327, 1,    0,    0,    0,    1368, 1328,
        1,    0,    0,    0,    1368, 1337, 1,    0,    0,    0,    1368, 1344, 1,    0,    0,    0,    1368, 1345,
        1,    0,    0,    0,    1368, 1347, 1,    0,    0,    0,    1368, 1365, 1,    0,    0,    0,    1368, 1367,
        1,    0,    0,    0,    1369, 1453, 1,    0,    0,    0,    1370, 1371, 10,   14,   0,    0,    1371, 1372,
        7,    7,    0,    0,    1372, 1452, 3,    198,  99,   15,   1373, 1374, 10,   13,   0,    0,    1374, 1375,
        7,    8,    0,    0,    1375, 1452, 3,    198,  99,   14,   1376, 1384, 10,   12,   0,    0,    1377, 1378,
        5,    89,   0,    0,    1378, 1385, 5,    89,   0,    0,    1379, 1380, 5,    88,   0,    0,    1380, 1381,
        5,    88,   0,    0,    1381, 1385, 5,    88,   0,    0,    1382, 1383, 5,    88,   0,    0,    1383, 1385,
        5,    88,   0,    0,    1384, 1377, 1,    0,    0,    0,    1384, 1379, 1,    0,    0,    0,    1384, 1382,
        1,    0,    0,    0,    1385, 1386, 1,    0,    0,    0,    1386, 1452, 3,    198,  99,   13,   1387, 1388,
        10,   11,   0,    0,    1388, 1389, 7,    9,    0,    0,    1389, 1452, 3,    198,  99,   12,   1390, 1391,
        10,   9,    0,    0,    1391, 1392, 7,    10,   0,    0,    1392, 1452, 3,    198,  99,   10,   1393, 1394,
        10,   8,    0,    0,    1394, 1395, 5,    106,  0,    0,    1395, 1452, 3,    198,  99,   9,    1396, 1397,
        10,   7,    0,    0,    1397, 1398, 5,    108,  0,    0,    1398, 1452, 3,    198,  99,   8,    1399, 1400,
        10,   6,    0,    0,    1400, 1401, 5,    107,  0,    0,    1401, 1452, 3,    198,  99,   7,    1402, 1403,
        10,   5,    0,    0,    1403, 1404, 5,    98,   0,    0,    1404, 1452, 3,    198,  99,   6,    1405, 1406,
        10,   4,    0,    0,    1406, 1407, 5,    99,   0,    0,    1407, 1452, 3,    198,  99,   5,    1408, 1409,
        10,   3,    0,    0,    1409, 1410, 5,    92,   0,    0,    1410, 1411, 3,    198,  99,   0,    1411, 1412,
        5,    93,   0,    0,    1412, 1413, 3,    198,  99,   3,    1413, 1452, 1,    0,    0,    0,    1414, 1415,
        10,   2,    0,    0,    1415, 1416, 7,    11,   0,    0,    1416, 1452, 3,    198,  99,   2,    1417, 1418,
        10,   25,   0,    0,    1418, 1419, 5,    82,   0,    0,    1419, 1420, 3,    198,  99,   0,    1420, 1421,
        5,    83,   0,    0,    1421, 1452, 1,    0,    0,    0,    1422, 1423, 10,   24,   0,    0,    1423, 1435,
        5,    86,   0,    0,    1424, 1436, 3,    162,  81,   0,    1425, 1436, 3,    196,  98,   0,    1426, 1436,
        5,    43,   0,    0,    1427, 1429, 5,    31,   0,    0,    1428, 1430, 3,    236,  118,  0,    1429, 1428,
        1,    0,    0,    0,    1429, 1430, 1,    0,    0,    0,    1430, 1431, 1,    0,    0,    0,    1431, 1436,
        3,    224,  112,  0,    1432, 1433, 5,    40,   0,    0,    1433, 1436, 3,    246,  123,  0,    1434, 1436,
        3,    230,  115,  0,    1435, 1424, 1,    0,    0,    0,    1435, 1425, 1,    0,    0,    0,    1435, 1426,
        1,    0,    0,    0,    1435, 1427, 1,    0,    0,    0,    1435, 1432, 1,    0,    0,    0,    1435, 1434,
        1,    0,    0,    0,    1436, 1452, 1,    0,    0,    0,    1437, 1438, 10,   22,   0,    0,    1438, 1440,
        5,    122,  0,    0,    1439, 1441, 3,    244,  122,  0,    1440, 1439, 1,    0,    0,    0,    1440, 1441,
        1,    0,    0,    0,    1441, 1442, 1,    0,    0,    0,    1442, 1452, 3,    162,  81,   0,    1443, 1444,
        10,   18,   0,    0,    1444, 1452, 7,    12,   0,    0,    1445, 1446, 10,   10,   0,    0,    1446, 1449,
        5,    26,   0,    0,    1447, 1450, 3,    240,  120,  0,    1448, 1450, 3,    200,  100,  0,    1449, 1447,
        1,    0,    0,    0,    1449, 1448, 1,    0,    0,    0,    1450, 1452, 1,    0,    0,    0,    1451, 1370,
        1,    0,    0,    0,    1451, 1373, 1,    0,    0,    0,    1451, 1376, 1,    0,    0,    0,    1451, 1387,
        1,    0,    0,    0,    1451, 1390, 1,    0,    0,    0,    1451, 1393, 1,    0,    0,    0,    1451, 1396,
        1,    0,    0,    0,    1451, 1399, 1,    0,    0,    0,    1451, 1402, 1,    0,    0,    0,    1451, 1405,
        1,    0,    0,    0,    1451, 1408, 1,    0,    0,    0,    1451, 1414, 1,    0,    0,    0,    1451, 1417,
        1,    0,    0,    0,    1451, 1422, 1,    0,    0,    0,    1451, 1437, 1,    0,    0,    0,    1451, 1443,
        1,    0,    0,    0,    1451, 1445, 1,    0,    0,    0,    1452, 1455, 1,    0,    0,    0,    1453, 1451,
        1,    0,    0,    0,    1453, 1454, 1,    0,    0,    0,    1454, 199,  1,    0,    0,    0,    1455, 1453,
        1,    0,    0,    0,    1456, 1458, 3,    12,   6,    0,    1457, 1456, 1,    0,    0,    0,    1458, 1461,
        1,    0,    0,    0,    1459, 1457, 1,    0,    0,    0,    1459, 1460, 1,    0,    0,    0,    1460, 1462,
        1,    0,    0,    0,    1461, 1459, 1,    0,    0,    0,    1462, 1466, 3,    240,  120,  0,    1463, 1465,
        3,    112,  56,   0,    1464, 1463, 1,    0,    0,    0,    1465, 1468, 1,    0,    0,    0,    1466, 1464,
        1,    0,    0,    0,    1466, 1467, 1,    0,    0,    0,    1467, 1469, 1,    0,    0,    0,    1468, 1466,
        1,    0,    0,    0,    1469, 1470, 3,    162,  81,   0,    1470, 201,  1,    0,    0,    0,    1471, 1472,
        3,    204,  102,  0,    1472, 1473, 5,    121,  0,    0,    1473, 1474, 3,    206,  103,  0,    1474, 203,
        1,    0,    0,    0,    1475, 1498, 3,    162,  81,   0,    1476, 1478, 5,    78,   0,    0,    1477, 1479,
        3,    92,   46,   0,    1478, 1477, 1,    0,    0,    0,    1478, 1479, 1,    0,    0,    0,    1479, 1480,
        1,    0,    0,    0,    1480, 1498, 5,    79,   0,    0,    1481, 1482, 5,    78,   0,    0,    1482, 1487,
        3,    162,  81,   0,    1483, 1484, 5,    85,   0,    0,    1484, 1486, 3,    162,  81,   0,    1485, 1483,
        1,    0,    0,    0,    1486, 1489, 1,    0,    0,    0,    1487, 1485, 1,    0,    0,    0,    1487, 1488,
        1,    0,    0,    0,    1488, 1490, 1,    0,    0,    0,    1489, 1487, 1,    0,    0,    0,    1490, 1491,
        5,    79,   0,    0,    1491, 1498, 1,    0,    0,    0,    1492, 1494, 5,    78,   0,    0,    1493, 1495,
        3,    98,   49,   0,    1494, 1493, 1,    0,    0,    0,    1494, 1495, 1,    0,    0,    0,    1495, 1496,
        1,    0,    0,    0,    1496, 1498, 5,    79,   0,    0,    1497, 1475, 1,    0,    0,    0,    1497, 1476,
        1,    0,    0,    0,    1497, 1481, 1,    0,    0,    0,    1497, 1492, 1,    0,    0,    0,    1498, 205,
        1,    0,    0,    0,    1499, 1502, 3,    198,  99,   0,    1500, 1502, 3,    156,  78,   0,    1501, 1499,
        1,    0,    0,    0,    1501, 1500, 1,    0,    0,    0,    1502, 207,  1,    0,    0,    0,    1503, 1504,
        5,    78,   0,    0,    1504, 1505, 3,    198,  99,   0,    1505, 1506, 5,    79,   0,    0,    1506, 1522,
        1,    0,    0,    0,    1507, 1522, 5,    43,   0,    0,    1508, 1522, 5,    40,   0,    0,    1509, 1522,
        3,    104,  52,   0,    1510, 1522, 3,    162,  81,   0,    1511, 1512, 3,    44,   22,   0,    1512, 1513,
        5,    86,   0,    0,    1513, 1514, 5,    9,    0,    0,    1514, 1522, 1,    0,    0,    0,    1515, 1519,
        3,    236,  118,  0,    1516, 1520, 3,    248,  124,  0,    1517, 1518, 5,    43,   0,    0,    1518, 1520,
        3,    250,  125,  0,    1519, 1516, 1,    0,    0,    0,    1519, 1517, 1,    0,    0,    0,    1520, 1522,
        1,    0,    0,    0,    1521, 1503, 1,    0,    0,    0,    1521, 1507, 1,    0,    0,    0,    1521, 1508,
        1,    0,    0,    0,    1521, 1509, 1,    0,    0,    0,    1521, 1510, 1,    0,    0,    0,    1521, 1511,
        1,    0,    0,    0,    1521, 1515, 1,    0,    0,    0,    1522, 209,  1,    0,    0,    0,    1523, 1524,
        5,    41,   0,    0,    1524, 1525, 3,    192,  96,   0,    1525, 1529, 5,    80,   0,    0,    1526, 1528,
        3,    212,  106,  0,    1527, 1526, 1,    0,    0,    0,    1528, 1531, 1,    0,    0,    0,    1529, 1527,
        1,    0,    0,    0,    1529, 1530, 1,    0,    0,    0,    1530, 1532, 1,    0,    0,    0,    1531, 1529,
        1,    0,    0,    0,    1532, 1533, 5,    81,   0,    0,    1533, 211,  1,    0,    0,    0,    1534, 1538,
        5,    6,    0,    0,    1535, 1539, 3,    194,  97,   0,    1536, 1539, 5,    77,   0,    0,    1537, 1539,
        3,    214,  107,  0,    1538, 1535, 1,    0,    0,    0,    1538, 1536, 1,    0,    0,    0,    1538, 1537,
        1,    0,    0,    0,    1539, 1540, 1,    0,    0,    0,    1540, 1541, 7,    13,   0,    0,    1541, 1546,
        3,    216,  108,  0,    1542, 1543, 5,    12,   0,    0,    1543, 1544, 7,    13,   0,    0,    1544, 1546,
        3,    216,  108,  0,    1545, 1534, 1,    0,    0,    0,    1545, 1542, 1,    0,    0,    0,    1546, 213,
        1,    0,    0,    0,    1547, 1548, 6,    107,  -1,   0,    1548, 1549, 5,    78,   0,    0,    1549, 1550,
        3,    214,  107,  0,    1550, 1551, 5,    79,   0,    0,    1551, 1574, 1,    0,    0,    0,    1552, 1554,
        3,    12,   6,    0,    1553, 1552, 1,    0,    0,    0,    1554, 1557, 1,    0,    0,    0,    1555, 1553,
        1,    0,    0,    0,    1555, 1556, 1,    0,    0,    0,    1556, 1558, 1,    0,    0,    0,    1557, 1555,
        1,    0,    0,    0,    1558, 1562, 3,    240,  120,  0,    1559, 1561, 3,    112,  56,   0,    1560, 1559,
        1,    0,    0,    0,    1561, 1564, 1,    0,    0,    0,    1562, 1560, 1,    0,    0,    0,    1562, 1563,
        1,    0,    0,    0,    1563, 1565, 1,    0,    0,    0,    1564, 1562, 1,    0,    0,    0,    1565, 1570,
        3,    162,  81,   0,    1566, 1567, 5,    98,   0,    0,    1567, 1569, 3,    198,  99,   0,    1568, 1566,
        1,    0,    0,    0,    1569, 1572, 1,    0,    0,    0,    1570, 1568, 1,    0,    0,    0,    1570, 1571,
        1,    0,    0,    0,    1571, 1574, 1,    0,    0,    0,    1572, 1570, 1,    0,    0,    0,    1573, 1547,
        1,    0,    0,    0,    1573, 1555, 1,    0,    0,    0,    1574, 1580, 1,    0,    0,    0,    1575, 1576,
        10,   1,    0,    0,    1576, 1577, 5,    98,   0,    0,    1577, 1579, 3,    198,  99,   0,    1578, 1575,
        1,    0,    0,    0,    1579, 1582, 1,    0,    0,    0,    1580, 1578, 1,    0,    0,    0,    1580, 1581,
        1,    0,    0,    0,    1581, 215,  1,    0,    0,    0,    1582, 1580, 1,    0,    0,    0,    1583, 1591,
        3,    156,  78,   0,    1584, 1586, 3,    158,  79,   0,    1585, 1584, 1,    0,    0,    0,    1586, 1589,
        1,    0,    0,    0,    1587, 1585, 1,    0,    0,    0,    1587, 1588, 1,    0,    0,    0,    1588, 1591,
        1,    0,    0,    0,    1589, 1587, 1,    0,    0,    0,    1590, 1583, 1,    0,    0,    0,    1590, 1587,
        1,    0,    0,    0,    1591, 217,  1,    0,    0,    0,    1592, 1593, 3,    82,   41,   0,    1593, 1594,
        5,    86,   0,    0,    1594, 1596, 1,    0,    0,    0,    1595, 1592, 1,    0,    0,    0,    1595, 1596,
        1,    0,    0,    0,    1596, 1600, 1,    0,    0,    0,    1597, 1599, 3,    112,  56,   0,    1598, 1597,
        1,    0,    0,    0,    1599, 1602, 1,    0,    0,    0,    1600, 1598, 1,    0,    0,    0,    1600, 1601,
        1,    0,    0,    0,    1601, 1603, 1,    0,    0,    0,    1602, 1600, 1,    0,    0,    0,    1603, 1605,
        3,    162,  81,   0,    1604, 1606, 3,    244,  122,  0,    1605, 1604, 1,    0,    0,    0,    1605, 1606,
        1,    0,    0,    0,    1606, 219,  1,    0,    0,    0,    1607, 1609, 3,    236,  118,  0,    1608, 1607,
        1,    0,    0,    0,    1608, 1609, 1,    0,    0,    0,    1609, 1610, 1,    0,    0,    0,    1610, 1611,
        3,    222,  111,  0,    1611, 1612, 3,    228,  114,  0,    1612, 1617, 1,    0,    0,    0,    1613, 1614,
        3,    222,  111,  0,    1614, 1615, 3,    226,  113,  0,    1615, 1617, 1,    0,    0,    0,    1616, 1608,
        1,    0,    0,    0,    1616, 1613, 1,    0,    0,    0,    1617, 221,  1,    0,    0,    0,    1618, 1620,
        3,    162,  81,   0,    1619, 1621, 3,    232,  116,  0,    1620, 1619, 1,    0,    0,    0,    1620, 1621,
        1,    0,    0,    0,    1621, 1629, 1,    0,    0,    0,    1622, 1623, 5,    86,   0,    0,    1623, 1625,
        3,    162,  81,   0,    1624, 1626, 3,    232,  116,  0,    1625, 1624, 1,    0,    0,    0,    1625, 1626,
        1,    0,    0,    0,    1626, 1628, 1,    0,    0,    0,    1627, 1622, 1,    0,    0,    0,    1628, 1631,
        1,    0,    0,    0,    1629, 1627, 1,    0,    0,    0,    1629, 1630, 1,    0,    0,    0,    1630, 1634,
        1,    0,    0,    0,    1631, 1629, 1,    0,    0,    0,    1632, 1634, 3,    242,  121,  0,    1633, 1618,
        1,    0,    0,    0,    1633, 1632, 1,    0,    0,    0,    1634, 223,  1,    0,    0,    0,    1635, 1637,
        3,    162,  81,   0,    1636, 1638, 3,    234,  117,  0,    1637, 1636, 1,    0,    0,    0,    1637, 1638,
        1,    0,    0,    0,    1638, 1639, 1,    0,    0,    0,    1639, 1640, 3,    228,  114,  0,    1640, 225,
        1,    0,    0,    0,    1641, 1642, 5,    82,   0,    0,    1642, 1644, 5,    83,   0,    0,    1643, 1641,
        1,    0,    0,    0,    1644, 1645, 1,    0,    0,    0,    1645, 1643, 1,    0,    0,    0,    1645, 1646,
        1,    0,    0,    0,    1646, 1647, 1,    0,    0,    0,    1647, 1664, 3,    80,   40,   0,    1648, 1649,
        5,    82,   0,    0,    1649, 1650, 3,    198,  99,   0,    1650, 1651, 5,    83,   0,    0,    1651, 1653,
        1,    0,    0,    0,    1652, 1648, 1,    0,    0,    0,    1653, 1654, 1,    0,    0,    0,    1654, 1652,
        1,    0,    0,    0,    1654, 1655, 1,    0,    0,    0,    1655, 1660, 1,    0,    0,    0,    1656, 1657,
        5,    82,   0,    0,    1657, 1659, 5,    83,   0,    0,    1658, 1656, 1,    0,    0,    0,    1659, 1662,
        1,    0,    0,    0,    1660, 1658, 1,    0,    0,    0,    1660, 1661, 1,    0,    0,    0,    1661, 1664,
        1,    0,    0,    0,    1662, 1660, 1,    0,    0,    0,    1663, 1643, 1,    0,    0,    0,    1663, 1652,
        1,    0,    0,    0,    1664, 227,  1,    0,    0,    0,    1665, 1667, 3,    250,  125,  0,    1666, 1668,
        3,    32,   16,   0,    1667, 1666, 1,    0,    0,    0,    1667, 1668, 1,    0,    0,    0,    1668, 229,
        1,    0,    0,    0,    1669, 1670, 3,    236,  118,  0,    1670, 1671, 3,    248,  124,  0,    1671, 231,
        1,    0,    0,    0,    1672, 1673, 5,    89,   0,    0,    1673, 1676, 5,    88,   0,    0,    1674, 1676,
        3,    244,  122,  0,    1675, 1672, 1,    0,    0,    0,    1675, 1674, 1,    0,    0,    0,    1676, 233,
        1,    0,    0,    0,    1677, 1678, 5,    89,   0,    0,    1678, 1681, 5,    88,   0,    0,    1679, 1681,
        3,    236,  118,  0,    1680, 1677, 1,    0,    0,    0,    1680, 1679, 1,    0,    0,    0,    1681, 235,
        1,    0,    0,    0,    1682, 1683, 5,    89,   0,    0,    1683, 1684, 3,    238,  119,  0,    1684, 1685,
        5,    88,   0,    0,    1685, 237,  1,    0,    0,    0,    1686, 1691, 3,    240,  120,  0,    1687, 1688,
        5,    85,   0,    0,    1688, 1690, 3,    240,  120,  0,    1689, 1687, 1,    0,    0,    0,    1690, 1693,
        1,    0,    0,    0,    1691, 1689, 1,    0,    0,    0,    1691, 1692, 1,    0,    0,    0,    1692, 239,
        1,    0,    0,    0,    1693, 1691, 1,    0,    0,    0,    1694, 1696, 3,    112,  56,   0,    1695, 1694,
        1,    0,    0,    0,    1696, 1699, 1,    0,    0,    0,    1697, 1695, 1,    0,    0,    0,    1697, 1698,
        1,    0,    0,    0,    1698, 1702, 1,    0,    0,    0,    1699, 1697, 1,    0,    0,    0,    1700, 1703,
        3,    82,   41,   0,    1701, 1703, 3,    242,  121,  0,    1702, 1700, 1,    0,    0,    0,    1702, 1701,
        1,    0,    0,    0,    1703, 1714, 1,    0,    0,    0,    1704, 1706, 3,    112,  56,   0,    1705, 1704,
        1,    0,    0,    0,    1706, 1709, 1,    0,    0,    0,    1707, 1705, 1,    0,    0,    0,    1707, 1708,
        1,    0,    0,    0,    1708, 1710, 1,    0,    0,    0,    1709, 1707, 1,    0,    0,    0,    1710, 1711,
        5,    82,   0,    0,    1711, 1713, 5,    83,   0,    0,    1712, 1707, 1,    0,    0,    0,    1713, 1716,
        1,    0,    0,    0,    1714, 1712, 1,    0,    0,    0,    1714, 1715, 1,    0,    0,    0,    1715, 241,
        1,    0,    0,    0,    1716, 1714, 1,    0,    0,    0,    1717, 1718, 7,    14,   0,    0,    1718, 243,
        1,    0,    0,    0,    1719, 1720, 5,    89,   0,    0,    1720, 1725, 3,    84,   42,   0,    1721, 1722,
        5,    85,   0,    0,    1722, 1724, 3,    84,   42,   0,    1723, 1721, 1,    0,    0,    0,    1724, 1727,
        1,    0,    0,    0,    1725, 1723, 1,    0,    0,    0,    1725, 1726, 1,    0,    0,    0,    1726, 1728,
        1,    0,    0,    0,    1727, 1725, 1,    0,    0,    0,    1728, 1729, 5,    88,   0,    0,    1729, 245,
        1,    0,    0,    0,    1730, 1740, 3,    250,  125,  0,    1731, 1733, 5,    86,   0,    0,    1732, 1734,
        3,    244,  122,  0,    1733, 1732, 1,    0,    0,    0,    1733, 1734, 1,    0,    0,    0,    1734, 1735,
        1,    0,    0,    0,    1735, 1737, 3,    162,  81,   0,    1736, 1738, 3,    250,  125,  0,    1737, 1736,
        1,    0,    0,    0,    1737, 1738, 1,    0,    0,    0,    1738, 1740, 1,    0,    0,    0,    1739, 1730,
        1,    0,    0,    0,    1739, 1731, 1,    0,    0,    0,    1740, 247,  1,    0,    0,    0,    1741, 1742,
        5,    40,   0,    0,    1742, 1747, 3,    246,  123,  0,    1743, 1744, 3,    162,  81,   0,    1744, 1745,
        3,    250,  125,  0,    1745, 1747, 1,    0,    0,    0,    1746, 1741, 1,    0,    0,    0,    1746, 1743,
        1,    0,    0,    0,    1747, 249,  1,    0,    0,    0,    1748, 1750, 5,    78,   0,    0,    1749, 1751,
        3,    194,  97,   0,    1750, 1749, 1,    0,    0,    0,    1750, 1751, 1,    0,    0,    0,    1751, 1752,
        1,    0,    0,    0,    1752, 1753, 5,    79,   0,    0,    1753, 251,  1,    0,    0,    0,    219,  253,
        257,  259,  264,  266,  272,  277,  286,  291,  298,  306,  313,  325,  329,  334,  338,  342,  346,  356,
        364,  372,  376,  383,  390,  394,  397,  400,  409,  415,  420,  423,  429,  435,  439,  443,  451,  460,
        467,  473,  477,  489,  498,  503,  509,  513,  525,  532,  545,  550,  560,  568,  578,  587,  598,  603,
        612,  622,  627,  636,  642,  649,  654,  662,  666,  668,  674,  680,  685,  691,  697,  699,  706,  711,
        716,  719,  721,  731,  741,  746,  749,  754,  763,  770,  781,  787,  798,  808,  819,  828,  833,  836,
        843,  853,  861,  864,  867,  880,  888,  893,  901,  905,  909,  913,  917,  919,  923,  929,  937,  947,
        956,  966,  974,  988,  995,  1000, 1006, 1015, 1024, 1026, 1035, 1045, 1050, 1061, 1070, 1076, 1083, 1092,
        1115, 1118, 1121, 1129, 1133, 1141, 1147, 1158, 1167, 1172, 1185, 1191, 1198, 1211, 1220, 1229, 1235, 1243,
        1249, 1254, 1259, 1267, 1272, 1276, 1280, 1284, 1286, 1290, 1295, 1300, 1315, 1321, 1331, 1335, 1340, 1351,
        1359, 1368, 1384, 1429, 1435, 1440, 1449, 1451, 1453, 1459, 1466, 1478, 1487, 1494, 1497, 1501, 1519, 1521,
        1529, 1538, 1545, 1555, 1562, 1570, 1573, 1580, 1587, 1590, 1595, 1600, 1605, 1608, 1616, 1620, 1625, 1629,
        1633, 1637, 1645, 1654, 1660, 1663, 1667, 1675, 1680, 1691, 1697, 1702, 1707, 1714, 1725, 1733, 1737, 1739,
        1746, 1750};
    staticData->serializedATN =
        antlr4::atn::SerializedATNView(serializedATNSegment,
                                       sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

    antlr4::atn::ATNDeserializer deserializer;
    staticData->atn = deserializer.deserialize(staticData->serializedATN);

    const size_t count = staticData->atn->getNumberOfDecisions();
    staticData->decisionToDFA.reserve(count);
    for (size_t i = 0; i < count; i++) {
        staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
    }
    javaparserParserStaticData = std::move(staticData);
}

} // namespace

JavaParser::JavaParser(TokenStream *input): JavaParser(input, antlr4::atn::ParserATNSimulatorOptions())
{
}

JavaParser::JavaParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions& options): Parser(input)
{
    JavaParser::initialize();
    _interpreter = new atn::ParserATNSimulator(this,
                                               *javaparserParserStaticData->atn,
                                               javaparserParserStaticData->decisionToDFA,
                                               javaparserParserStaticData->sharedContextCache,
                                               options);
}

JavaParser::~JavaParser()
{
    delete _interpreter;
}

const atn::ATN& JavaParser::getATN() const
{
    return *javaparserParserStaticData->atn;
}

std::string JavaParser::getGrammarFileName() const
{
    return "JavaParser.g4";
}

const std::vector<std::string>& JavaParser::getRuleNames() const
{
    return javaparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& JavaParser::getVocabulary() const
{
    return javaparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView JavaParser::getSerializedATN() const
{
    return javaparserParserStaticData->serializedATN;
}

//----------------- CompilationUnitContext ------------------------------------------------------------------

JavaParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::PackageDeclarationContext *JavaParser::CompilationUnitContext::packageDeclaration()
{
    return getRuleContext<JavaParser::PackageDeclarationContext>(0);
}

std::vector<JavaParser::ImportDeclarationContext *> JavaParser::CompilationUnitContext::importDeclaration()
{
    return getRuleContexts<JavaParser::ImportDeclarationContext>();
}

JavaParser::ImportDeclarationContext *JavaParser::CompilationUnitContext::importDeclaration(size_t i)
{
    return getRuleContext<JavaParser::ImportDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::CompilationUnitContext::SEMI()
{
    return getTokens(JavaParser::SEMI);
}

tree::TerminalNode *JavaParser::CompilationUnitContext::SEMI(size_t i)
{
    return getToken(JavaParser::SEMI, i);
}

std::vector<JavaParser::TypeDeclarationContext *> JavaParser::CompilationUnitContext::typeDeclaration()
{
    return getRuleContexts<JavaParser::TypeDeclarationContext>();
}

JavaParser::TypeDeclarationContext *JavaParser::CompilationUnitContext::typeDeclaration(size_t i)
{
    return getRuleContext<JavaParser::TypeDeclarationContext>(i);
}

JavaParser::ModuleDeclarationContext *JavaParser::CompilationUnitContext::moduleDeclaration()
{
    return getRuleContext<JavaParser::ModuleDeclarationContext>(0);
}

tree::TerminalNode *JavaParser::CompilationUnitContext::EOF()
{
    return getToken(JavaParser::EOF, 0);
}

size_t JavaParser::CompilationUnitContext::getRuleIndex() const
{
    return JavaParser::RuleCompilationUnit;
}

void JavaParser::CompilationUnitContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterCompilationUnit(this);
}

void JavaParser::CompilationUnitContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitCompilationUnit(this);
}

std::any JavaParser::CompilationUnitContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitCompilationUnit(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::CompilationUnitContext *JavaParser::compilationUnit()
{
    CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
    enterRule(_localctx, 0, JavaParser::RuleCompilationUnit);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        setState(272);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(253);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
            case 1: {
                setState(252);
                packageDeclaration();
                break;
            }

            default:
                break;
            }
            setState(259);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                    setState(257);
                    _errHandler->sync(this);
                    switch (_input->LA(1)) {
                    case JavaParser::IMPORT: {
                        setState(255);
                        importDeclaration();
                        break;
                    }

                    case JavaParser::SEMI: {
                        setState(256);
                        match(JavaParser::SEMI);
                        break;
                    }

                    default:
                        throw NoViableAltException(this);
                    }
                }
                setState(261);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
            }
            setState(266);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (((((_la - 1) & ~0x3fULL) == 0) && ((1ULL << (_la - 1)) & -1125457390829311) != 0)
                   || ((((_la - 65) & ~0x3fULL) == 0) && ((1ULL << (_la - 65)) & -8935141660702539773) != 0)) {
                setState(264);
                _errHandler->sync(this);
                switch (_input->LA(1)) {
                case JavaParser::ABSTRACT:
                case JavaParser::CLASS:
                case JavaParser::ENUM:
                case JavaParser::FINAL:
                case JavaParser::INTERFACE:
                case JavaParser::PRIVATE:
                case JavaParser::PROTECTED:
                case JavaParser::PUBLIC:
                case JavaParser::STATIC:
                case JavaParser::STRICTFP:
                case JavaParser::MODULE:
                case JavaParser::OPEN:
                case JavaParser::REQUIRES:
                case JavaParser::EXPORTS:
                case JavaParser::OPENS:
                case JavaParser::TO:
                case JavaParser::USES:
                case JavaParser::PROVIDES:
                case JavaParser::WITH:
                case JavaParser::TRANSITIVE:
                case JavaParser::VAR:
                case JavaParser::YIELD:
                case JavaParser::RECORD:
                case JavaParser::SEALED:
                case JavaParser::PERMITS:
                case JavaParser::NON_SEALED:
                case JavaParser::AT:
                case JavaParser::IDENTIFIER: {
                    setState(262);
                    typeDeclaration();
                    break;
                }

                case JavaParser::SEMI: {
                    setState(263);
                    match(JavaParser::SEMI);
                    break;
                }

                default:
                    throw NoViableAltException(this);
                }
                setState(268);
                _errHandler->sync(this);
                _la = _input->LA(1);
            }
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(269);
            moduleDeclaration();
            setState(270);
            match(JavaParser::EOF);
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- PackageDeclarationContext ------------------------------------------------------------------

JavaParser::PackageDeclarationContext::PackageDeclarationContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::PackageDeclarationContext::PACKAGE()
{
    return getToken(JavaParser::PACKAGE, 0);
}

JavaParser::QualifiedNameContext *JavaParser::PackageDeclarationContext::qualifiedName()
{
    return getRuleContext<JavaParser::QualifiedNameContext>(0);
}

tree::TerminalNode *JavaParser::PackageDeclarationContext::SEMI()
{
    return getToken(JavaParser::SEMI, 0);
}

std::vector<JavaParser::AnnotationContext *> JavaParser::PackageDeclarationContext::annotation()
{
    return getRuleContexts<JavaParser::AnnotationContext>();
}

JavaParser::AnnotationContext *JavaParser::PackageDeclarationContext::annotation(size_t i)
{
    return getRuleContext<JavaParser::AnnotationContext>(i);
}

size_t JavaParser::PackageDeclarationContext::getRuleIndex() const
{
    return JavaParser::RulePackageDeclaration;
}

void JavaParser::PackageDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterPackageDeclaration(this);
}

void JavaParser::PackageDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitPackageDeclaration(this);
}

std::any JavaParser::PackageDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitPackageDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::PackageDeclarationContext *JavaParser::packageDeclaration()
{
    PackageDeclarationContext *_localctx = _tracker.createInstance<PackageDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 2, JavaParser::RulePackageDeclaration);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(277);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (((((_la - 51) & ~0x3fULL) == 0) && ((1ULL << (_la - 51)) & 32767) != 0) || _la == JavaParser::AT

               || _la == JavaParser::IDENTIFIER) {
            setState(274);
            annotation();
            setState(279);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(280);
        match(JavaParser::PACKAGE);
        setState(281);
        qualifiedName();
        setState(282);
        match(JavaParser::SEMI);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ImportDeclarationContext ------------------------------------------------------------------

JavaParser::ImportDeclarationContext::ImportDeclarationContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::ImportDeclarationContext::IMPORT()
{
    return getToken(JavaParser::IMPORT, 0);
}

JavaParser::QualifiedNameContext *JavaParser::ImportDeclarationContext::qualifiedName()
{
    return getRuleContext<JavaParser::QualifiedNameContext>(0);
}

tree::TerminalNode *JavaParser::ImportDeclarationContext::SEMI()
{
    return getToken(JavaParser::SEMI, 0);
}

tree::TerminalNode *JavaParser::ImportDeclarationContext::STATIC()
{
    return getToken(JavaParser::STATIC, 0);
}

tree::TerminalNode *JavaParser::ImportDeclarationContext::DOT()
{
    return getToken(JavaParser::DOT, 0);
}

tree::TerminalNode *JavaParser::ImportDeclarationContext::MUL()
{
    return getToken(JavaParser::MUL, 0);
}

size_t JavaParser::ImportDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleImportDeclaration;
}

void JavaParser::ImportDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterImportDeclaration(this);
}

void JavaParser::ImportDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitImportDeclaration(this);
}

std::any JavaParser::ImportDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitImportDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ImportDeclarationContext *JavaParser::importDeclaration()
{
    ImportDeclarationContext *_localctx = _tracker.createInstance<ImportDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 4, JavaParser::RuleImportDeclaration);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(284);
        match(JavaParser::IMPORT);
        setState(286);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::STATIC) {
            setState(285);
            match(JavaParser::STATIC);
        }
        setState(288);
        qualifiedName();
        setState(291);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::DOT) {
            setState(289);
            match(JavaParser::DOT);
            setState(290);
            match(JavaParser::MUL);
        }
        setState(293);
        match(JavaParser::SEMI);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TypeDeclarationContext ------------------------------------------------------------------

JavaParser::TypeDeclarationContext::TypeDeclarationContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::ClassDeclarationContext *JavaParser::TypeDeclarationContext::classDeclaration()
{
    return getRuleContext<JavaParser::ClassDeclarationContext>(0);
}

JavaParser::EnumDeclarationContext *JavaParser::TypeDeclarationContext::enumDeclaration()
{
    return getRuleContext<JavaParser::EnumDeclarationContext>(0);
}

JavaParser::InterfaceDeclarationContext *JavaParser::TypeDeclarationContext::interfaceDeclaration()
{
    return getRuleContext<JavaParser::InterfaceDeclarationContext>(0);
}

JavaParser::AnnotationTypeDeclarationContext *JavaParser::TypeDeclarationContext::annotationTypeDeclaration()
{
    return getRuleContext<JavaParser::AnnotationTypeDeclarationContext>(0);
}

JavaParser::RecordDeclarationContext *JavaParser::TypeDeclarationContext::recordDeclaration()
{
    return getRuleContext<JavaParser::RecordDeclarationContext>(0);
}

std::vector<JavaParser::ClassOrInterfaceModifierContext *>
JavaParser::TypeDeclarationContext::classOrInterfaceModifier()
{
    return getRuleContexts<JavaParser::ClassOrInterfaceModifierContext>();
}

JavaParser::ClassOrInterfaceModifierContext *JavaParser::TypeDeclarationContext::classOrInterfaceModifier(size_t i)
{
    return getRuleContext<JavaParser::ClassOrInterfaceModifierContext>(i);
}

size_t JavaParser::TypeDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleTypeDeclaration;
}

void JavaParser::TypeDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterTypeDeclaration(this);
}

void JavaParser::TypeDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitTypeDeclaration(this);
}

std::any JavaParser::TypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitTypeDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::TypeDeclarationContext *JavaParser::typeDeclaration()
{
    TypeDeclarationContext *_localctx = _tracker.createInstance<TypeDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 6, JavaParser::RuleTypeDeclaration);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(298);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(295);
                classOrInterfaceModifier();
            }
            setState(300);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
        }
        setState(306);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case JavaParser::CLASS: {
            setState(301);
            classDeclaration();
            break;
        }

        case JavaParser::ENUM: {
            setState(302);
            enumDeclaration();
            break;
        }

        case JavaParser::INTERFACE: {
            setState(303);
            interfaceDeclaration();
            break;
        }

        case JavaParser::AT: {
            setState(304);
            annotationTypeDeclaration();
            break;
        }

        case JavaParser::RECORD: {
            setState(305);
            recordDeclaration();
            break;
        }

        default:
            throw NoViableAltException(this);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ModifierContext ------------------------------------------------------------------

JavaParser::ModifierContext::ModifierContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::ClassOrInterfaceModifierContext *JavaParser::ModifierContext::classOrInterfaceModifier()
{
    return getRuleContext<JavaParser::ClassOrInterfaceModifierContext>(0);
}

tree::TerminalNode *JavaParser::ModifierContext::NATIVE()
{
    return getToken(JavaParser::NATIVE, 0);
}

tree::TerminalNode *JavaParser::ModifierContext::SYNCHRONIZED()
{
    return getToken(JavaParser::SYNCHRONIZED, 0);
}

tree::TerminalNode *JavaParser::ModifierContext::TRANSIENT()
{
    return getToken(JavaParser::TRANSIENT, 0);
}

tree::TerminalNode *JavaParser::ModifierContext::VOLATILE()
{
    return getToken(JavaParser::VOLATILE, 0);
}

size_t JavaParser::ModifierContext::getRuleIndex() const
{
    return JavaParser::RuleModifier;
}

void JavaParser::ModifierContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterModifier(this);
}

void JavaParser::ModifierContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitModifier(this);
}

std::any JavaParser::ModifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitModifier(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ModifierContext *JavaParser::modifier()
{
    ModifierContext *_localctx = _tracker.createInstance<ModifierContext>(_ctx, getState());
    enterRule(_localctx, 8, JavaParser::RuleModifier);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(313);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case JavaParser::ABSTRACT:
        case JavaParser::FINAL:
        case JavaParser::PRIVATE:
        case JavaParser::PROTECTED:
        case JavaParser::PUBLIC:
        case JavaParser::STATIC:
        case JavaParser::STRICTFP:
        case JavaParser::MODULE:
        case JavaParser::OPEN:
        case JavaParser::REQUIRES:
        case JavaParser::EXPORTS:
        case JavaParser::OPENS:
        case JavaParser::TO:
        case JavaParser::USES:
        case JavaParser::PROVIDES:
        case JavaParser::WITH:
        case JavaParser::TRANSITIVE:
        case JavaParser::VAR:
        case JavaParser::YIELD:
        case JavaParser::RECORD:
        case JavaParser::SEALED:
        case JavaParser::PERMITS:
        case JavaParser::NON_SEALED:
        case JavaParser::AT:
        case JavaParser::IDENTIFIER: {
            enterOuterAlt(_localctx, 1);
            setState(308);
            classOrInterfaceModifier();
            break;
        }

        case JavaParser::NATIVE: {
            enterOuterAlt(_localctx, 2);
            setState(309);
            match(JavaParser::NATIVE);
            break;
        }

        case JavaParser::SYNCHRONIZED: {
            enterOuterAlt(_localctx, 3);
            setState(310);
            match(JavaParser::SYNCHRONIZED);
            break;
        }

        case JavaParser::TRANSIENT: {
            enterOuterAlt(_localctx, 4);
            setState(311);
            match(JavaParser::TRANSIENT);
            break;
        }

        case JavaParser::VOLATILE: {
            enterOuterAlt(_localctx, 5);
            setState(312);
            match(JavaParser::VOLATILE);
            break;
        }

        default:
            throw NoViableAltException(this);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ClassOrInterfaceModifierContext ------------------------------------------------------------------

JavaParser::ClassOrInterfaceModifierContext::ClassOrInterfaceModifierContext(ParserRuleContext *parent,
                                                                             size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::AnnotationContext *JavaParser::ClassOrInterfaceModifierContext::annotation()
{
    return getRuleContext<JavaParser::AnnotationContext>(0);
}

tree::TerminalNode *JavaParser::ClassOrInterfaceModifierContext::PUBLIC()
{
    return getToken(JavaParser::PUBLIC, 0);
}

tree::TerminalNode *JavaParser::ClassOrInterfaceModifierContext::PROTECTED()
{
    return getToken(JavaParser::PROTECTED, 0);
}

tree::TerminalNode *JavaParser::ClassOrInterfaceModifierContext::PRIVATE()
{
    return getToken(JavaParser::PRIVATE, 0);
}

tree::TerminalNode *JavaParser::ClassOrInterfaceModifierContext::STATIC()
{
    return getToken(JavaParser::STATIC, 0);
}

tree::TerminalNode *JavaParser::ClassOrInterfaceModifierContext::ABSTRACT()
{
    return getToken(JavaParser::ABSTRACT, 0);
}

tree::TerminalNode *JavaParser::ClassOrInterfaceModifierContext::FINAL()
{
    return getToken(JavaParser::FINAL, 0);
}

tree::TerminalNode *JavaParser::ClassOrInterfaceModifierContext::STRICTFP()
{
    return getToken(JavaParser::STRICTFP, 0);
}

tree::TerminalNode *JavaParser::ClassOrInterfaceModifierContext::SEALED()
{
    return getToken(JavaParser::SEALED, 0);
}

tree::TerminalNode *JavaParser::ClassOrInterfaceModifierContext::NON_SEALED()
{
    return getToken(JavaParser::NON_SEALED, 0);
}

size_t JavaParser::ClassOrInterfaceModifierContext::getRuleIndex() const
{
    return JavaParser::RuleClassOrInterfaceModifier;
}

void JavaParser::ClassOrInterfaceModifierContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterClassOrInterfaceModifier(this);
}

void JavaParser::ClassOrInterfaceModifierContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitClassOrInterfaceModifier(this);
}

std::any JavaParser::ClassOrInterfaceModifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitClassOrInterfaceModifier(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ClassOrInterfaceModifierContext *JavaParser::classOrInterfaceModifier()
{
    ClassOrInterfaceModifierContext *_localctx =
        _tracker.createInstance<ClassOrInterfaceModifierContext>(_ctx, getState());
    enterRule(_localctx, 10, JavaParser::RuleClassOrInterfaceModifier);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(325);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(315);
            annotation();
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(316);
            match(JavaParser::PUBLIC);
            break;
        }

        case 3: {
            enterOuterAlt(_localctx, 3);
            setState(317);
            match(JavaParser::PROTECTED);
            break;
        }

        case 4: {
            enterOuterAlt(_localctx, 4);
            setState(318);
            match(JavaParser::PRIVATE);
            break;
        }

        case 5: {
            enterOuterAlt(_localctx, 5);
            setState(319);
            match(JavaParser::STATIC);
            break;
        }

        case 6: {
            enterOuterAlt(_localctx, 6);
            setState(320);
            match(JavaParser::ABSTRACT);
            break;
        }

        case 7: {
            enterOuterAlt(_localctx, 7);
            setState(321);
            match(JavaParser::FINAL);
            break;
        }

        case 8: {
            enterOuterAlt(_localctx, 8);
            setState(322);
            match(JavaParser::STRICTFP);
            break;
        }

        case 9: {
            enterOuterAlt(_localctx, 9);
            setState(323);
            match(JavaParser::SEALED);
            break;
        }

        case 10: {
            enterOuterAlt(_localctx, 10);
            setState(324);
            match(JavaParser::NON_SEALED);
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- VariableModifierContext ------------------------------------------------------------------

JavaParser::VariableModifierContext::VariableModifierContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::VariableModifierContext::FINAL()
{
    return getToken(JavaParser::FINAL, 0);
}

JavaParser::AnnotationContext *JavaParser::VariableModifierContext::annotation()
{
    return getRuleContext<JavaParser::AnnotationContext>(0);
}

size_t JavaParser::VariableModifierContext::getRuleIndex() const
{
    return JavaParser::RuleVariableModifier;
}

void JavaParser::VariableModifierContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterVariableModifier(this);
}

void JavaParser::VariableModifierContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitVariableModifier(this);
}

std::any JavaParser::VariableModifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitVariableModifier(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::VariableModifierContext *JavaParser::variableModifier()
{
    VariableModifierContext *_localctx = _tracker.createInstance<VariableModifierContext>(_ctx, getState());
    enterRule(_localctx, 12, JavaParser::RuleVariableModifier);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(329);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case JavaParser::FINAL: {
            enterOuterAlt(_localctx, 1);
            setState(327);
            match(JavaParser::FINAL);
            break;
        }

        case JavaParser::MODULE:
        case JavaParser::OPEN:
        case JavaParser::REQUIRES:
        case JavaParser::EXPORTS:
        case JavaParser::OPENS:
        case JavaParser::TO:
        case JavaParser::USES:
        case JavaParser::PROVIDES:
        case JavaParser::WITH:
        case JavaParser::TRANSITIVE:
        case JavaParser::VAR:
        case JavaParser::YIELD:
        case JavaParser::RECORD:
        case JavaParser::SEALED:
        case JavaParser::PERMITS:
        case JavaParser::AT:
        case JavaParser::IDENTIFIER: {
            enterOuterAlt(_localctx, 2);
            setState(328);
            annotation();
            break;
        }

        default:
            throw NoViableAltException(this);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ClassDeclarationContext ------------------------------------------------------------------

JavaParser::ClassDeclarationContext::ClassDeclarationContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::ClassDeclarationContext::CLASS()
{
    return getToken(JavaParser::CLASS, 0);
}

JavaParser::IdentifierContext *JavaParser::ClassDeclarationContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

JavaParser::ClassBodyContext *JavaParser::ClassDeclarationContext::classBody()
{
    return getRuleContext<JavaParser::ClassBodyContext>(0);
}

JavaParser::TypeParametersContext *JavaParser::ClassDeclarationContext::typeParameters()
{
    return getRuleContext<JavaParser::TypeParametersContext>(0);
}

tree::TerminalNode *JavaParser::ClassDeclarationContext::EXTENDS()
{
    return getToken(JavaParser::EXTENDS, 0);
}

JavaParser::TypeTypeContext *JavaParser::ClassDeclarationContext::typeType()
{
    return getRuleContext<JavaParser::TypeTypeContext>(0);
}

tree::TerminalNode *JavaParser::ClassDeclarationContext::IMPLEMENTS()
{
    return getToken(JavaParser::IMPLEMENTS, 0);
}

std::vector<JavaParser::TypeListContext *> JavaParser::ClassDeclarationContext::typeList()
{
    return getRuleContexts<JavaParser::TypeListContext>();
}

JavaParser::TypeListContext *JavaParser::ClassDeclarationContext::typeList(size_t i)
{
    return getRuleContext<JavaParser::TypeListContext>(i);
}

tree::TerminalNode *JavaParser::ClassDeclarationContext::PERMITS()
{
    return getToken(JavaParser::PERMITS, 0);
}

size_t JavaParser::ClassDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleClassDeclaration;
}

void JavaParser::ClassDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterClassDeclaration(this);
}

void JavaParser::ClassDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitClassDeclaration(this);
}

std::any JavaParser::ClassDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitClassDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ClassDeclarationContext *JavaParser::classDeclaration()
{
    ClassDeclarationContext *_localctx = _tracker.createInstance<ClassDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 14, JavaParser::RuleClassDeclaration);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(331);
        match(JavaParser::CLASS);
        setState(332);
        identifier();
        setState(334);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::LT) {
            setState(333);
            typeParameters();
        }
        setState(338);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::EXTENDS) {
            setState(336);
            match(JavaParser::EXTENDS);
            setState(337);
            typeType();
        }
        setState(342);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::IMPLEMENTS) {
            setState(340);
            match(JavaParser::IMPLEMENTS);
            setState(341);
            typeList();
        }
        setState(346);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::PERMITS) {
            setState(344);
            match(JavaParser::PERMITS);
            setState(345);
            typeList();
        }
        setState(348);
        classBody();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TypeParametersContext ------------------------------------------------------------------

JavaParser::TypeParametersContext::TypeParametersContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::TypeParametersContext::LT()
{
    return getToken(JavaParser::LT, 0);
}

std::vector<JavaParser::TypeParameterContext *> JavaParser::TypeParametersContext::typeParameter()
{
    return getRuleContexts<JavaParser::TypeParameterContext>();
}

JavaParser::TypeParameterContext *JavaParser::TypeParametersContext::typeParameter(size_t i)
{
    return getRuleContext<JavaParser::TypeParameterContext>(i);
}

tree::TerminalNode *JavaParser::TypeParametersContext::GT()
{
    return getToken(JavaParser::GT, 0);
}

std::vector<tree::TerminalNode *> JavaParser::TypeParametersContext::COMMA()
{
    return getTokens(JavaParser::COMMA);
}

tree::TerminalNode *JavaParser::TypeParametersContext::COMMA(size_t i)
{
    return getToken(JavaParser::COMMA, i);
}

size_t JavaParser::TypeParametersContext::getRuleIndex() const
{
    return JavaParser::RuleTypeParameters;
}

void JavaParser::TypeParametersContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterTypeParameters(this);
}

void JavaParser::TypeParametersContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitTypeParameters(this);
}

std::any JavaParser::TypeParametersContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitTypeParameters(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::TypeParametersContext *JavaParser::typeParameters()
{
    TypeParametersContext *_localctx = _tracker.createInstance<TypeParametersContext>(_ctx, getState());
    enterRule(_localctx, 16, JavaParser::RuleTypeParameters);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(350);
        match(JavaParser::LT);
        setState(351);
        typeParameter();
        setState(356);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == JavaParser::COMMA) {
            setState(352);
            match(JavaParser::COMMA);
            setState(353);
            typeParameter();
            setState(358);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(359);
        match(JavaParser::GT);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TypeParameterContext ------------------------------------------------------------------

JavaParser::TypeParameterContext::TypeParameterContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::IdentifierContext *JavaParser::TypeParameterContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

std::vector<JavaParser::AnnotationContext *> JavaParser::TypeParameterContext::annotation()
{
    return getRuleContexts<JavaParser::AnnotationContext>();
}

JavaParser::AnnotationContext *JavaParser::TypeParameterContext::annotation(size_t i)
{
    return getRuleContext<JavaParser::AnnotationContext>(i);
}

tree::TerminalNode *JavaParser::TypeParameterContext::EXTENDS()
{
    return getToken(JavaParser::EXTENDS, 0);
}

JavaParser::TypeBoundContext *JavaParser::TypeParameterContext::typeBound()
{
    return getRuleContext<JavaParser::TypeBoundContext>(0);
}

size_t JavaParser::TypeParameterContext::getRuleIndex() const
{
    return JavaParser::RuleTypeParameter;
}

void JavaParser::TypeParameterContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterTypeParameter(this);
}

void JavaParser::TypeParameterContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitTypeParameter(this);
}

std::any JavaParser::TypeParameterContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitTypeParameter(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::TypeParameterContext *JavaParser::typeParameter()
{
    TypeParameterContext *_localctx = _tracker.createInstance<TypeParameterContext>(_ctx, getState());
    enterRule(_localctx, 18, JavaParser::RuleTypeParameter);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(364);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(361);
                annotation();
            }
            setState(366);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
        }
        setState(367);
        identifier();
        setState(376);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::EXTENDS) {
            setState(368);
            match(JavaParser::EXTENDS);
            setState(372);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                    setState(369);
                    annotation();
                }
                setState(374);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
            }
            setState(375);
            typeBound();
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TypeBoundContext ------------------------------------------------------------------

JavaParser::TypeBoundContext::TypeBoundContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

std::vector<JavaParser::TypeTypeContext *> JavaParser::TypeBoundContext::typeType()
{
    return getRuleContexts<JavaParser::TypeTypeContext>();
}

JavaParser::TypeTypeContext *JavaParser::TypeBoundContext::typeType(size_t i)
{
    return getRuleContext<JavaParser::TypeTypeContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::TypeBoundContext::BITAND()
{
    return getTokens(JavaParser::BITAND);
}

tree::TerminalNode *JavaParser::TypeBoundContext::BITAND(size_t i)
{
    return getToken(JavaParser::BITAND, i);
}

size_t JavaParser::TypeBoundContext::getRuleIndex() const
{
    return JavaParser::RuleTypeBound;
}

void JavaParser::TypeBoundContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterTypeBound(this);
}

void JavaParser::TypeBoundContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitTypeBound(this);
}

std::any JavaParser::TypeBoundContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitTypeBound(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::TypeBoundContext *JavaParser::typeBound()
{
    TypeBoundContext *_localctx = _tracker.createInstance<TypeBoundContext>(_ctx, getState());
    enterRule(_localctx, 20, JavaParser::RuleTypeBound);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(378);
        typeType();
        setState(383);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == JavaParser::BITAND) {
            setState(379);
            match(JavaParser::BITAND);
            setState(380);
            typeType();
            setState(385);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- EnumDeclarationContext ------------------------------------------------------------------

JavaParser::EnumDeclarationContext::EnumDeclarationContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::EnumDeclarationContext::ENUM()
{
    return getToken(JavaParser::ENUM, 0);
}

JavaParser::IdentifierContext *JavaParser::EnumDeclarationContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

tree::TerminalNode *JavaParser::EnumDeclarationContext::LBRACE()
{
    return getToken(JavaParser::LBRACE, 0);
}

tree::TerminalNode *JavaParser::EnumDeclarationContext::RBRACE()
{
    return getToken(JavaParser::RBRACE, 0);
}

tree::TerminalNode *JavaParser::EnumDeclarationContext::IMPLEMENTS()
{
    return getToken(JavaParser::IMPLEMENTS, 0);
}

JavaParser::TypeListContext *JavaParser::EnumDeclarationContext::typeList()
{
    return getRuleContext<JavaParser::TypeListContext>(0);
}

JavaParser::EnumConstantsContext *JavaParser::EnumDeclarationContext::enumConstants()
{
    return getRuleContext<JavaParser::EnumConstantsContext>(0);
}

tree::TerminalNode *JavaParser::EnumDeclarationContext::COMMA()
{
    return getToken(JavaParser::COMMA, 0);
}

JavaParser::EnumBodyDeclarationsContext *JavaParser::EnumDeclarationContext::enumBodyDeclarations()
{
    return getRuleContext<JavaParser::EnumBodyDeclarationsContext>(0);
}

size_t JavaParser::EnumDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleEnumDeclaration;
}

void JavaParser::EnumDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterEnumDeclaration(this);
}

void JavaParser::EnumDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitEnumDeclaration(this);
}

std::any JavaParser::EnumDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitEnumDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::EnumDeclarationContext *JavaParser::enumDeclaration()
{
    EnumDeclarationContext *_localctx = _tracker.createInstance<EnumDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 22, JavaParser::RuleEnumDeclaration);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(386);
        match(JavaParser::ENUM);
        setState(387);
        identifier();
        setState(390);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::IMPLEMENTS) {
            setState(388);
            match(JavaParser::IMPLEMENTS);
            setState(389);
            typeList();
        }
        setState(392);
        match(JavaParser::LBRACE);
        setState(394);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 51) & ~0x3fULL) == 0) && ((1ULL << (_la - 51)) & 32767) != 0) || _la == JavaParser::AT

            || _la == JavaParser::IDENTIFIER) {
            setState(393);
            enumConstants();
        }
        setState(397);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::COMMA) {
            setState(396);
            match(JavaParser::COMMA);
        }
        setState(400);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::SEMI) {
            setState(399);
            enumBodyDeclarations();
        }
        setState(402);
        match(JavaParser::RBRACE);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- EnumConstantsContext ------------------------------------------------------------------

JavaParser::EnumConstantsContext::EnumConstantsContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

std::vector<JavaParser::EnumConstantContext *> JavaParser::EnumConstantsContext::enumConstant()
{
    return getRuleContexts<JavaParser::EnumConstantContext>();
}

JavaParser::EnumConstantContext *JavaParser::EnumConstantsContext::enumConstant(size_t i)
{
    return getRuleContext<JavaParser::EnumConstantContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::EnumConstantsContext::COMMA()
{
    return getTokens(JavaParser::COMMA);
}

tree::TerminalNode *JavaParser::EnumConstantsContext::COMMA(size_t i)
{
    return getToken(JavaParser::COMMA, i);
}

size_t JavaParser::EnumConstantsContext::getRuleIndex() const
{
    return JavaParser::RuleEnumConstants;
}

void JavaParser::EnumConstantsContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterEnumConstants(this);
}

void JavaParser::EnumConstantsContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitEnumConstants(this);
}

std::any JavaParser::EnumConstantsContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitEnumConstants(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::EnumConstantsContext *JavaParser::enumConstants()
{
    EnumConstantsContext *_localctx = _tracker.createInstance<EnumConstantsContext>(_ctx, getState());
    enterRule(_localctx, 24, JavaParser::RuleEnumConstants);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(404);
        enumConstant();
        setState(409);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(405);
                match(JavaParser::COMMA);
                setState(406);
                enumConstant();
            }
            setState(411);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- EnumConstantContext ------------------------------------------------------------------

JavaParser::EnumConstantContext::EnumConstantContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::IdentifierContext *JavaParser::EnumConstantContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

std::vector<JavaParser::AnnotationContext *> JavaParser::EnumConstantContext::annotation()
{
    return getRuleContexts<JavaParser::AnnotationContext>();
}

JavaParser::AnnotationContext *JavaParser::EnumConstantContext::annotation(size_t i)
{
    return getRuleContext<JavaParser::AnnotationContext>(i);
}

JavaParser::ArgumentsContext *JavaParser::EnumConstantContext::arguments()
{
    return getRuleContext<JavaParser::ArgumentsContext>(0);
}

JavaParser::ClassBodyContext *JavaParser::EnumConstantContext::classBody()
{
    return getRuleContext<JavaParser::ClassBodyContext>(0);
}

size_t JavaParser::EnumConstantContext::getRuleIndex() const
{
    return JavaParser::RuleEnumConstant;
}

void JavaParser::EnumConstantContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterEnumConstant(this);
}

void JavaParser::EnumConstantContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitEnumConstant(this);
}

std::any JavaParser::EnumConstantContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitEnumConstant(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::EnumConstantContext *JavaParser::enumConstant()
{
    EnumConstantContext *_localctx = _tracker.createInstance<EnumConstantContext>(_ctx, getState());
    enterRule(_localctx, 26, JavaParser::RuleEnumConstant);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(415);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(412);
                annotation();
            }
            setState(417);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
        }
        setState(418);
        identifier();
        setState(420);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::LPAREN) {
            setState(419);
            arguments();
        }
        setState(423);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::LBRACE) {
            setState(422);
            classBody();
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- EnumBodyDeclarationsContext ------------------------------------------------------------------

JavaParser::EnumBodyDeclarationsContext::EnumBodyDeclarationsContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::EnumBodyDeclarationsContext::SEMI()
{
    return getToken(JavaParser::SEMI, 0);
}

std::vector<JavaParser::ClassBodyDeclarationContext *> JavaParser::EnumBodyDeclarationsContext::classBodyDeclaration()
{
    return getRuleContexts<JavaParser::ClassBodyDeclarationContext>();
}

JavaParser::ClassBodyDeclarationContext *JavaParser::EnumBodyDeclarationsContext::classBodyDeclaration(size_t i)
{
    return getRuleContext<JavaParser::ClassBodyDeclarationContext>(i);
}

size_t JavaParser::EnumBodyDeclarationsContext::getRuleIndex() const
{
    return JavaParser::RuleEnumBodyDeclarations;
}

void JavaParser::EnumBodyDeclarationsContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterEnumBodyDeclarations(this);
}

void JavaParser::EnumBodyDeclarationsContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitEnumBodyDeclarations(this);
}

std::any JavaParser::EnumBodyDeclarationsContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitEnumBodyDeclarations(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::EnumBodyDeclarationsContext *JavaParser::enumBodyDeclarations()
{
    EnumBodyDeclarationsContext *_localctx = _tracker.createInstance<EnumBodyDeclarationsContext>(_ctx, getState());
    enterRule(_localctx, 28, JavaParser::RuleEnumBodyDeclarations);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(425);
        match(JavaParser::SEMI);
        setState(429);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (((((_la - 1) & ~0x3fULL) == 0) && ((1ULL << (_la - 1)) & -665791937994347) != 0)
               || ((((_la - 65) & ~0x3fULL) == 0) && ((1ULL << (_la - 65)) & -8935141660685729789) != 0)) {
            setState(426);
            classBodyDeclaration();
            setState(431);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- InterfaceDeclarationContext ------------------------------------------------------------------

JavaParser::InterfaceDeclarationContext::InterfaceDeclarationContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::InterfaceDeclarationContext::INTERFACE()
{
    return getToken(JavaParser::INTERFACE, 0);
}

JavaParser::IdentifierContext *JavaParser::InterfaceDeclarationContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

JavaParser::InterfaceBodyContext *JavaParser::InterfaceDeclarationContext::interfaceBody()
{
    return getRuleContext<JavaParser::InterfaceBodyContext>(0);
}

JavaParser::TypeParametersContext *JavaParser::InterfaceDeclarationContext::typeParameters()
{
    return getRuleContext<JavaParser::TypeParametersContext>(0);
}

tree::TerminalNode *JavaParser::InterfaceDeclarationContext::EXTENDS()
{
    return getToken(JavaParser::EXTENDS, 0);
}

std::vector<JavaParser::TypeListContext *> JavaParser::InterfaceDeclarationContext::typeList()
{
    return getRuleContexts<JavaParser::TypeListContext>();
}

JavaParser::TypeListContext *JavaParser::InterfaceDeclarationContext::typeList(size_t i)
{
    return getRuleContext<JavaParser::TypeListContext>(i);
}

tree::TerminalNode *JavaParser::InterfaceDeclarationContext::PERMITS()
{
    return getToken(JavaParser::PERMITS, 0);
}

size_t JavaParser::InterfaceDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleInterfaceDeclaration;
}

void JavaParser::InterfaceDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterInterfaceDeclaration(this);
}

void JavaParser::InterfaceDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitInterfaceDeclaration(this);
}

std::any JavaParser::InterfaceDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitInterfaceDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::InterfaceDeclarationContext *JavaParser::interfaceDeclaration()
{
    InterfaceDeclarationContext *_localctx = _tracker.createInstance<InterfaceDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 30, JavaParser::RuleInterfaceDeclaration);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(432);
        match(JavaParser::INTERFACE);
        setState(433);
        identifier();
        setState(435);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::LT) {
            setState(434);
            typeParameters();
        }
        setState(439);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::EXTENDS) {
            setState(437);
            match(JavaParser::EXTENDS);
            setState(438);
            typeList();
        }
        setState(443);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::PERMITS) {
            setState(441);
            match(JavaParser::PERMITS);
            setState(442);
            typeList();
        }
        setState(445);
        interfaceBody();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ClassBodyContext ------------------------------------------------------------------

JavaParser::ClassBodyContext::ClassBodyContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::ClassBodyContext::LBRACE()
{
    return getToken(JavaParser::LBRACE, 0);
}

tree::TerminalNode *JavaParser::ClassBodyContext::RBRACE()
{
    return getToken(JavaParser::RBRACE, 0);
}

std::vector<JavaParser::ClassBodyDeclarationContext *> JavaParser::ClassBodyContext::classBodyDeclaration()
{
    return getRuleContexts<JavaParser::ClassBodyDeclarationContext>();
}

JavaParser::ClassBodyDeclarationContext *JavaParser::ClassBodyContext::classBodyDeclaration(size_t i)
{
    return getRuleContext<JavaParser::ClassBodyDeclarationContext>(i);
}

size_t JavaParser::ClassBodyContext::getRuleIndex() const
{
    return JavaParser::RuleClassBody;
}

void JavaParser::ClassBodyContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterClassBody(this);
}

void JavaParser::ClassBodyContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitClassBody(this);
}

std::any JavaParser::ClassBodyContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitClassBody(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ClassBodyContext *JavaParser::classBody()
{
    ClassBodyContext *_localctx = _tracker.createInstance<ClassBodyContext>(_ctx, getState());
    enterRule(_localctx, 32, JavaParser::RuleClassBody);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(447);
        match(JavaParser::LBRACE);
        setState(451);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (((((_la - 1) & ~0x3fULL) == 0) && ((1ULL << (_la - 1)) & -665791937994347) != 0)
               || ((((_la - 65) & ~0x3fULL) == 0) && ((1ULL << (_la - 65)) & -8935141660685729789) != 0)) {
            setState(448);
            classBodyDeclaration();
            setState(453);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(454);
        match(JavaParser::RBRACE);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- InterfaceBodyContext ------------------------------------------------------------------

JavaParser::InterfaceBodyContext::InterfaceBodyContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::InterfaceBodyContext::LBRACE()
{
    return getToken(JavaParser::LBRACE, 0);
}

tree::TerminalNode *JavaParser::InterfaceBodyContext::RBRACE()
{
    return getToken(JavaParser::RBRACE, 0);
}

std::vector<JavaParser::InterfaceBodyDeclarationContext *> JavaParser::InterfaceBodyContext::interfaceBodyDeclaration()
{
    return getRuleContexts<JavaParser::InterfaceBodyDeclarationContext>();
}

JavaParser::InterfaceBodyDeclarationContext *JavaParser::InterfaceBodyContext::interfaceBodyDeclaration(size_t i)
{
    return getRuleContext<JavaParser::InterfaceBodyDeclarationContext>(i);
}

size_t JavaParser::InterfaceBodyContext::getRuleIndex() const
{
    return JavaParser::RuleInterfaceBody;
}

void JavaParser::InterfaceBodyContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterInterfaceBody(this);
}

void JavaParser::InterfaceBodyContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitInterfaceBody(this);
}

std::any JavaParser::InterfaceBodyContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitInterfaceBody(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::InterfaceBodyContext *JavaParser::interfaceBody()
{
    InterfaceBodyContext *_localctx = _tracker.createInstance<InterfaceBodyContext>(_ctx, getState());
    enterRule(_localctx, 34, JavaParser::RuleInterfaceBody);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(456);
        match(JavaParser::LBRACE);
        setState(460);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (((((_la - 1) & ~0x3fULL) == 0) && ((1ULL << (_la - 1)) & -665791937992299) != 0)
               || ((((_la - 65) & ~0x3fULL) == 0) && ((1ULL << (_la - 65)) & -8935141660685762557) != 0)) {
            setState(457);
            interfaceBodyDeclaration();
            setState(462);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(463);
        match(JavaParser::RBRACE);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ClassBodyDeclarationContext ------------------------------------------------------------------

JavaParser::ClassBodyDeclarationContext::ClassBodyDeclarationContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::ClassBodyDeclarationContext::SEMI()
{
    return getToken(JavaParser::SEMI, 0);
}

JavaParser::BlockContext *JavaParser::ClassBodyDeclarationContext::block()
{
    return getRuleContext<JavaParser::BlockContext>(0);
}

tree::TerminalNode *JavaParser::ClassBodyDeclarationContext::STATIC()
{
    return getToken(JavaParser::STATIC, 0);
}

JavaParser::MemberDeclarationContext *JavaParser::ClassBodyDeclarationContext::memberDeclaration()
{
    return getRuleContext<JavaParser::MemberDeclarationContext>(0);
}

std::vector<JavaParser::ModifierContext *> JavaParser::ClassBodyDeclarationContext::modifier()
{
    return getRuleContexts<JavaParser::ModifierContext>();
}

JavaParser::ModifierContext *JavaParser::ClassBodyDeclarationContext::modifier(size_t i)
{
    return getRuleContext<JavaParser::ModifierContext>(i);
}

size_t JavaParser::ClassBodyDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleClassBodyDeclaration;
}

void JavaParser::ClassBodyDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterClassBodyDeclaration(this);
}

void JavaParser::ClassBodyDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitClassBodyDeclaration(this);
}

std::any JavaParser::ClassBodyDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitClassBodyDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ClassBodyDeclarationContext *JavaParser::classBodyDeclaration()
{
    ClassBodyDeclarationContext *_localctx = _tracker.createInstance<ClassBodyDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 36, JavaParser::RuleClassBodyDeclaration);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        setState(477);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(465);
            match(JavaParser::SEMI);
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(467);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == JavaParser::STATIC) {
                setState(466);
                match(JavaParser::STATIC);
            }
            setState(469);
            block();
            break;
        }

        case 3: {
            enterOuterAlt(_localctx, 3);
            setState(473);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                    setState(470);
                    modifier();
                }
                setState(475);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
            }
            setState(476);
            memberDeclaration();
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- MemberDeclarationContext ------------------------------------------------------------------

JavaParser::MemberDeclarationContext::MemberDeclarationContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::RecordDeclarationContext *JavaParser::MemberDeclarationContext::recordDeclaration()
{
    return getRuleContext<JavaParser::RecordDeclarationContext>(0);
}

JavaParser::MethodDeclarationContext *JavaParser::MemberDeclarationContext::methodDeclaration()
{
    return getRuleContext<JavaParser::MethodDeclarationContext>(0);
}

JavaParser::GenericMethodDeclarationContext *JavaParser::MemberDeclarationContext::genericMethodDeclaration()
{
    return getRuleContext<JavaParser::GenericMethodDeclarationContext>(0);
}

JavaParser::FieldDeclarationContext *JavaParser::MemberDeclarationContext::fieldDeclaration()
{
    return getRuleContext<JavaParser::FieldDeclarationContext>(0);
}

JavaParser::ConstructorDeclarationContext *JavaParser::MemberDeclarationContext::constructorDeclaration()
{
    return getRuleContext<JavaParser::ConstructorDeclarationContext>(0);
}

JavaParser::GenericConstructorDeclarationContext *JavaParser::MemberDeclarationContext::genericConstructorDeclaration()
{
    return getRuleContext<JavaParser::GenericConstructorDeclarationContext>(0);
}

JavaParser::InterfaceDeclarationContext *JavaParser::MemberDeclarationContext::interfaceDeclaration()
{
    return getRuleContext<JavaParser::InterfaceDeclarationContext>(0);
}

JavaParser::AnnotationTypeDeclarationContext *JavaParser::MemberDeclarationContext::annotationTypeDeclaration()
{
    return getRuleContext<JavaParser::AnnotationTypeDeclarationContext>(0);
}

JavaParser::ClassDeclarationContext *JavaParser::MemberDeclarationContext::classDeclaration()
{
    return getRuleContext<JavaParser::ClassDeclarationContext>(0);
}

JavaParser::EnumDeclarationContext *JavaParser::MemberDeclarationContext::enumDeclaration()
{
    return getRuleContext<JavaParser::EnumDeclarationContext>(0);
}

size_t JavaParser::MemberDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleMemberDeclaration;
}

void JavaParser::MemberDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterMemberDeclaration(this);
}

void JavaParser::MemberDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitMemberDeclaration(this);
}

std::any JavaParser::MemberDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitMemberDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::MemberDeclarationContext *JavaParser::memberDeclaration()
{
    MemberDeclarationContext *_localctx = _tracker.createInstance<MemberDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 38, JavaParser::RuleMemberDeclaration);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(489);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(479);
            recordDeclaration();
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(480);
            methodDeclaration();
            break;
        }

        case 3: {
            enterOuterAlt(_localctx, 3);
            setState(481);
            genericMethodDeclaration();
            break;
        }

        case 4: {
            enterOuterAlt(_localctx, 4);
            setState(482);
            fieldDeclaration();
            break;
        }

        case 5: {
            enterOuterAlt(_localctx, 5);
            setState(483);
            constructorDeclaration();
            break;
        }

        case 6: {
            enterOuterAlt(_localctx, 6);
            setState(484);
            genericConstructorDeclaration();
            break;
        }

        case 7: {
            enterOuterAlt(_localctx, 7);
            setState(485);
            interfaceDeclaration();
            break;
        }

        case 8: {
            enterOuterAlt(_localctx, 8);
            setState(486);
            annotationTypeDeclaration();
            break;
        }

        case 9: {
            enterOuterAlt(_localctx, 9);
            setState(487);
            classDeclaration();
            break;
        }

        case 10: {
            enterOuterAlt(_localctx, 10);
            setState(488);
            enumDeclaration();
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- MethodDeclarationContext ------------------------------------------------------------------

JavaParser::MethodDeclarationContext::MethodDeclarationContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::TypeTypeOrVoidContext *JavaParser::MethodDeclarationContext::typeTypeOrVoid()
{
    return getRuleContext<JavaParser::TypeTypeOrVoidContext>(0);
}

JavaParser::IdentifierContext *JavaParser::MethodDeclarationContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

JavaParser::FormalParametersContext *JavaParser::MethodDeclarationContext::formalParameters()
{
    return getRuleContext<JavaParser::FormalParametersContext>(0);
}

JavaParser::MethodBodyContext *JavaParser::MethodDeclarationContext::methodBody()
{
    return getRuleContext<JavaParser::MethodBodyContext>(0);
}

std::vector<tree::TerminalNode *> JavaParser::MethodDeclarationContext::LBRACK()
{
    return getTokens(JavaParser::LBRACK);
}

tree::TerminalNode *JavaParser::MethodDeclarationContext::LBRACK(size_t i)
{
    return getToken(JavaParser::LBRACK, i);
}

std::vector<tree::TerminalNode *> JavaParser::MethodDeclarationContext::RBRACK()
{
    return getTokens(JavaParser::RBRACK);
}

tree::TerminalNode *JavaParser::MethodDeclarationContext::RBRACK(size_t i)
{
    return getToken(JavaParser::RBRACK, i);
}

tree::TerminalNode *JavaParser::MethodDeclarationContext::THROWS()
{
    return getToken(JavaParser::THROWS, 0);
}

JavaParser::QualifiedNameListContext *JavaParser::MethodDeclarationContext::qualifiedNameList()
{
    return getRuleContext<JavaParser::QualifiedNameListContext>(0);
}

size_t JavaParser::MethodDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleMethodDeclaration;
}

void JavaParser::MethodDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterMethodDeclaration(this);
}

void JavaParser::MethodDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitMethodDeclaration(this);
}

std::any JavaParser::MethodDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitMethodDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::MethodDeclarationContext *JavaParser::methodDeclaration()
{
    MethodDeclarationContext *_localctx = _tracker.createInstance<MethodDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 40, JavaParser::RuleMethodDeclaration);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(491);
        typeTypeOrVoid();
        setState(492);
        identifier();
        setState(493);
        formalParameters();
        setState(498);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == JavaParser::LBRACK) {
            setState(494);
            match(JavaParser::LBRACK);
            setState(495);
            match(JavaParser::RBRACK);
            setState(500);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(503);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::THROWS) {
            setState(501);
            match(JavaParser::THROWS);
            setState(502);
            qualifiedNameList();
        }
        setState(505);
        methodBody();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- MethodBodyContext ------------------------------------------------------------------

JavaParser::MethodBodyContext::MethodBodyContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::BlockContext *JavaParser::MethodBodyContext::block()
{
    return getRuleContext<JavaParser::BlockContext>(0);
}

tree::TerminalNode *JavaParser::MethodBodyContext::SEMI()
{
    return getToken(JavaParser::SEMI, 0);
}

size_t JavaParser::MethodBodyContext::getRuleIndex() const
{
    return JavaParser::RuleMethodBody;
}

void JavaParser::MethodBodyContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterMethodBody(this);
}

void JavaParser::MethodBodyContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitMethodBody(this);
}

std::any JavaParser::MethodBodyContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitMethodBody(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::MethodBodyContext *JavaParser::methodBody()
{
    MethodBodyContext *_localctx = _tracker.createInstance<MethodBodyContext>(_ctx, getState());
    enterRule(_localctx, 42, JavaParser::RuleMethodBody);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(509);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case JavaParser::LBRACE: {
            enterOuterAlt(_localctx, 1);
            setState(507);
            block();
            break;
        }

        case JavaParser::SEMI: {
            enterOuterAlt(_localctx, 2);
            setState(508);
            match(JavaParser::SEMI);
            break;
        }

        default:
            throw NoViableAltException(this);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TypeTypeOrVoidContext ------------------------------------------------------------------

JavaParser::TypeTypeOrVoidContext::TypeTypeOrVoidContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::TypeTypeContext *JavaParser::TypeTypeOrVoidContext::typeType()
{
    return getRuleContext<JavaParser::TypeTypeContext>(0);
}

tree::TerminalNode *JavaParser::TypeTypeOrVoidContext::VOID()
{
    return getToken(JavaParser::VOID, 0);
}

size_t JavaParser::TypeTypeOrVoidContext::getRuleIndex() const
{
    return JavaParser::RuleTypeTypeOrVoid;
}

void JavaParser::TypeTypeOrVoidContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterTypeTypeOrVoid(this);
}

void JavaParser::TypeTypeOrVoidContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitTypeTypeOrVoid(this);
}

std::any JavaParser::TypeTypeOrVoidContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitTypeTypeOrVoid(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::TypeTypeOrVoidContext *JavaParser::typeTypeOrVoid()
{
    TypeTypeOrVoidContext *_localctx = _tracker.createInstance<TypeTypeOrVoidContext>(_ctx, getState());
    enterRule(_localctx, 44, JavaParser::RuleTypeTypeOrVoid);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(513);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case JavaParser::BOOLEAN:
        case JavaParser::BYTE:
        case JavaParser::CHAR:
        case JavaParser::DOUBLE:
        case JavaParser::FLOAT:
        case JavaParser::INT:
        case JavaParser::LONG:
        case JavaParser::SHORT:
        case JavaParser::MODULE:
        case JavaParser::OPEN:
        case JavaParser::REQUIRES:
        case JavaParser::EXPORTS:
        case JavaParser::OPENS:
        case JavaParser::TO:
        case JavaParser::USES:
        case JavaParser::PROVIDES:
        case JavaParser::WITH:
        case JavaParser::TRANSITIVE:
        case JavaParser::VAR:
        case JavaParser::YIELD:
        case JavaParser::RECORD:
        case JavaParser::SEALED:
        case JavaParser::PERMITS:
        case JavaParser::AT:
        case JavaParser::IDENTIFIER: {
            enterOuterAlt(_localctx, 1);
            setState(511);
            typeType();
            break;
        }

        case JavaParser::VOID: {
            enterOuterAlt(_localctx, 2);
            setState(512);
            match(JavaParser::VOID);
            break;
        }

        default:
            throw NoViableAltException(this);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- GenericMethodDeclarationContext ------------------------------------------------------------------

JavaParser::GenericMethodDeclarationContext::GenericMethodDeclarationContext(ParserRuleContext *parent,
                                                                             size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::TypeParametersContext *JavaParser::GenericMethodDeclarationContext::typeParameters()
{
    return getRuleContext<JavaParser::TypeParametersContext>(0);
}

JavaParser::MethodDeclarationContext *JavaParser::GenericMethodDeclarationContext::methodDeclaration()
{
    return getRuleContext<JavaParser::MethodDeclarationContext>(0);
}

size_t JavaParser::GenericMethodDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleGenericMethodDeclaration;
}

void JavaParser::GenericMethodDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterGenericMethodDeclaration(this);
}

void JavaParser::GenericMethodDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitGenericMethodDeclaration(this);
}

std::any JavaParser::GenericMethodDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitGenericMethodDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::GenericMethodDeclarationContext *JavaParser::genericMethodDeclaration()
{
    GenericMethodDeclarationContext *_localctx =
        _tracker.createInstance<GenericMethodDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 46, JavaParser::RuleGenericMethodDeclaration);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(515);
        typeParameters();
        setState(516);
        methodDeclaration();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- GenericConstructorDeclarationContext
//------------------------------------------------------------------

JavaParser::GenericConstructorDeclarationContext::GenericConstructorDeclarationContext(ParserRuleContext *parent,
                                                                                       size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::TypeParametersContext *JavaParser::GenericConstructorDeclarationContext::typeParameters()
{
    return getRuleContext<JavaParser::TypeParametersContext>(0);
}

JavaParser::ConstructorDeclarationContext *JavaParser::GenericConstructorDeclarationContext::constructorDeclaration()
{
    return getRuleContext<JavaParser::ConstructorDeclarationContext>(0);
}

size_t JavaParser::GenericConstructorDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleGenericConstructorDeclaration;
}

void JavaParser::GenericConstructorDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterGenericConstructorDeclaration(this);
}

void JavaParser::GenericConstructorDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitGenericConstructorDeclaration(this);
}

std::any JavaParser::GenericConstructorDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitGenericConstructorDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::GenericConstructorDeclarationContext *JavaParser::genericConstructorDeclaration()
{
    GenericConstructorDeclarationContext *_localctx =
        _tracker.createInstance<GenericConstructorDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 48, JavaParser::RuleGenericConstructorDeclaration);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(518);
        typeParameters();
        setState(519);
        constructorDeclaration();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ConstructorDeclarationContext ------------------------------------------------------------------

JavaParser::ConstructorDeclarationContext::ConstructorDeclarationContext(ParserRuleContext *parent,
                                                                         size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::IdentifierContext *JavaParser::ConstructorDeclarationContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

JavaParser::FormalParametersContext *JavaParser::ConstructorDeclarationContext::formalParameters()
{
    return getRuleContext<JavaParser::FormalParametersContext>(0);
}

JavaParser::BlockContext *JavaParser::ConstructorDeclarationContext::block()
{
    return getRuleContext<JavaParser::BlockContext>(0);
}

tree::TerminalNode *JavaParser::ConstructorDeclarationContext::THROWS()
{
    return getToken(JavaParser::THROWS, 0);
}

JavaParser::QualifiedNameListContext *JavaParser::ConstructorDeclarationContext::qualifiedNameList()
{
    return getRuleContext<JavaParser::QualifiedNameListContext>(0);
}

size_t JavaParser::ConstructorDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleConstructorDeclaration;
}

void JavaParser::ConstructorDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterConstructorDeclaration(this);
}

void JavaParser::ConstructorDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitConstructorDeclaration(this);
}

std::any JavaParser::ConstructorDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitConstructorDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ConstructorDeclarationContext *JavaParser::constructorDeclaration()
{
    ConstructorDeclarationContext *_localctx = _tracker.createInstance<ConstructorDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 50, JavaParser::RuleConstructorDeclaration);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(521);
        identifier();
        setState(522);
        formalParameters();
        setState(525);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::THROWS) {
            setState(523);
            match(JavaParser::THROWS);
            setState(524);
            qualifiedNameList();
        }
        setState(527);
        antlrcpp::downCast<ConstructorDeclarationContext *>(_localctx)->constructorBody = block();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- CompactConstructorDeclarationContext
//------------------------------------------------------------------

JavaParser::CompactConstructorDeclarationContext::CompactConstructorDeclarationContext(ParserRuleContext *parent,
                                                                                       size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::IdentifierContext *JavaParser::CompactConstructorDeclarationContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

JavaParser::BlockContext *JavaParser::CompactConstructorDeclarationContext::block()
{
    return getRuleContext<JavaParser::BlockContext>(0);
}

std::vector<JavaParser::ModifierContext *> JavaParser::CompactConstructorDeclarationContext::modifier()
{
    return getRuleContexts<JavaParser::ModifierContext>();
}

JavaParser::ModifierContext *JavaParser::CompactConstructorDeclarationContext::modifier(size_t i)
{
    return getRuleContext<JavaParser::ModifierContext>(i);
}

size_t JavaParser::CompactConstructorDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleCompactConstructorDeclaration;
}

void JavaParser::CompactConstructorDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterCompactConstructorDeclaration(this);
}

void JavaParser::CompactConstructorDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitCompactConstructorDeclaration(this);
}

std::any JavaParser::CompactConstructorDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitCompactConstructorDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::CompactConstructorDeclarationContext *JavaParser::compactConstructorDeclaration()
{
    CompactConstructorDeclarationContext *_localctx =
        _tracker.createInstance<CompactConstructorDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 52, JavaParser::RuleCompactConstructorDeclaration);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(532);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(529);
                modifier();
            }
            setState(534);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
        }
        setState(535);
        identifier();
        setState(536);
        antlrcpp::downCast<CompactConstructorDeclarationContext *>(_localctx)->constructorBody = block();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- FieldDeclarationContext ------------------------------------------------------------------

JavaParser::FieldDeclarationContext::FieldDeclarationContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::TypeTypeContext *JavaParser::FieldDeclarationContext::typeType()
{
    return getRuleContext<JavaParser::TypeTypeContext>(0);
}

JavaParser::VariableDeclaratorsContext *JavaParser::FieldDeclarationContext::variableDeclarators()
{
    return getRuleContext<JavaParser::VariableDeclaratorsContext>(0);
}

tree::TerminalNode *JavaParser::FieldDeclarationContext::SEMI()
{
    return getToken(JavaParser::SEMI, 0);
}

size_t JavaParser::FieldDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleFieldDeclaration;
}

void JavaParser::FieldDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterFieldDeclaration(this);
}

void JavaParser::FieldDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitFieldDeclaration(this);
}

std::any JavaParser::FieldDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitFieldDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::FieldDeclarationContext *JavaParser::fieldDeclaration()
{
    FieldDeclarationContext *_localctx = _tracker.createInstance<FieldDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 54, JavaParser::RuleFieldDeclaration);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(538);
        typeType();
        setState(539);
        variableDeclarators();
        setState(540);
        match(JavaParser::SEMI);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- InterfaceBodyDeclarationContext ------------------------------------------------------------------

JavaParser::InterfaceBodyDeclarationContext::InterfaceBodyDeclarationContext(ParserRuleContext *parent,
                                                                             size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::InterfaceMemberDeclarationContext *JavaParser::InterfaceBodyDeclarationContext::interfaceMemberDeclaration()
{
    return getRuleContext<JavaParser::InterfaceMemberDeclarationContext>(0);
}

std::vector<JavaParser::ModifierContext *> JavaParser::InterfaceBodyDeclarationContext::modifier()
{
    return getRuleContexts<JavaParser::ModifierContext>();
}

JavaParser::ModifierContext *JavaParser::InterfaceBodyDeclarationContext::modifier(size_t i)
{
    return getRuleContext<JavaParser::ModifierContext>(i);
}

tree::TerminalNode *JavaParser::InterfaceBodyDeclarationContext::SEMI()
{
    return getToken(JavaParser::SEMI, 0);
}

size_t JavaParser::InterfaceBodyDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleInterfaceBodyDeclaration;
}

void JavaParser::InterfaceBodyDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterInterfaceBodyDeclaration(this);
}

void JavaParser::InterfaceBodyDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitInterfaceBodyDeclaration(this);
}

std::any JavaParser::InterfaceBodyDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitInterfaceBodyDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::InterfaceBodyDeclarationContext *JavaParser::interfaceBodyDeclaration()
{
    InterfaceBodyDeclarationContext *_localctx =
        _tracker.createInstance<InterfaceBodyDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 56, JavaParser::RuleInterfaceBodyDeclaration);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        setState(550);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case JavaParser::ABSTRACT:
        case JavaParser::BOOLEAN:
        case JavaParser::BYTE:
        case JavaParser::CHAR:
        case JavaParser::CLASS:
        case JavaParser::DEFAULT:
        case JavaParser::DOUBLE:
        case JavaParser::ENUM:
        case JavaParser::FINAL:
        case JavaParser::FLOAT:
        case JavaParser::INT:
        case JavaParser::INTERFACE:
        case JavaParser::LONG:
        case JavaParser::NATIVE:
        case JavaParser::PRIVATE:
        case JavaParser::PROTECTED:
        case JavaParser::PUBLIC:
        case JavaParser::SHORT:
        case JavaParser::STATIC:
        case JavaParser::STRICTFP:
        case JavaParser::SYNCHRONIZED:
        case JavaParser::TRANSIENT:
        case JavaParser::VOID:
        case JavaParser::VOLATILE:
        case JavaParser::MODULE:
        case JavaParser::OPEN:
        case JavaParser::REQUIRES:
        case JavaParser::EXPORTS:
        case JavaParser::OPENS:
        case JavaParser::TO:
        case JavaParser::USES:
        case JavaParser::PROVIDES:
        case JavaParser::WITH:
        case JavaParser::TRANSITIVE:
        case JavaParser::VAR:
        case JavaParser::YIELD:
        case JavaParser::RECORD:
        case JavaParser::SEALED:
        case JavaParser::PERMITS:
        case JavaParser::NON_SEALED:
        case JavaParser::LT:
        case JavaParser::AT:
        case JavaParser::IDENTIFIER: {
            enterOuterAlt(_localctx, 1);
            setState(545);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                    setState(542);
                    modifier();
                }
                setState(547);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
            }
            setState(548);
            interfaceMemberDeclaration();
            break;
        }

        case JavaParser::SEMI: {
            enterOuterAlt(_localctx, 2);
            setState(549);
            match(JavaParser::SEMI);
            break;
        }

        default:
            throw NoViableAltException(this);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- InterfaceMemberDeclarationContext ------------------------------------------------------------------

JavaParser::InterfaceMemberDeclarationContext::InterfaceMemberDeclarationContext(ParserRuleContext *parent,
                                                                                 size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::RecordDeclarationContext *JavaParser::InterfaceMemberDeclarationContext::recordDeclaration()
{
    return getRuleContext<JavaParser::RecordDeclarationContext>(0);
}

JavaParser::ConstDeclarationContext *JavaParser::InterfaceMemberDeclarationContext::constDeclaration()
{
    return getRuleContext<JavaParser::ConstDeclarationContext>(0);
}

JavaParser::InterfaceMethodDeclarationContext *
JavaParser::InterfaceMemberDeclarationContext::interfaceMethodDeclaration()
{
    return getRuleContext<JavaParser::InterfaceMethodDeclarationContext>(0);
}

JavaParser::GenericInterfaceMethodDeclarationContext *
JavaParser::InterfaceMemberDeclarationContext::genericInterfaceMethodDeclaration()
{
    return getRuleContext<JavaParser::GenericInterfaceMethodDeclarationContext>(0);
}

JavaParser::InterfaceDeclarationContext *JavaParser::InterfaceMemberDeclarationContext::interfaceDeclaration()
{
    return getRuleContext<JavaParser::InterfaceDeclarationContext>(0);
}

JavaParser::AnnotationTypeDeclarationContext *JavaParser::InterfaceMemberDeclarationContext::annotationTypeDeclaration()
{
    return getRuleContext<JavaParser::AnnotationTypeDeclarationContext>(0);
}

JavaParser::ClassDeclarationContext *JavaParser::InterfaceMemberDeclarationContext::classDeclaration()
{
    return getRuleContext<JavaParser::ClassDeclarationContext>(0);
}

JavaParser::EnumDeclarationContext *JavaParser::InterfaceMemberDeclarationContext::enumDeclaration()
{
    return getRuleContext<JavaParser::EnumDeclarationContext>(0);
}

size_t JavaParser::InterfaceMemberDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleInterfaceMemberDeclaration;
}

void JavaParser::InterfaceMemberDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterInterfaceMemberDeclaration(this);
}

void JavaParser::InterfaceMemberDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitInterfaceMemberDeclaration(this);
}

std::any JavaParser::InterfaceMemberDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitInterfaceMemberDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::InterfaceMemberDeclarationContext *JavaParser::interfaceMemberDeclaration()
{
    InterfaceMemberDeclarationContext *_localctx =
        _tracker.createInstance<InterfaceMemberDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 58, JavaParser::RuleInterfaceMemberDeclaration);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(560);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(552);
            recordDeclaration();
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(553);
            constDeclaration();
            break;
        }

        case 3: {
            enterOuterAlt(_localctx, 3);
            setState(554);
            interfaceMethodDeclaration();
            break;
        }

        case 4: {
            enterOuterAlt(_localctx, 4);
            setState(555);
            genericInterfaceMethodDeclaration();
            break;
        }

        case 5: {
            enterOuterAlt(_localctx, 5);
            setState(556);
            interfaceDeclaration();
            break;
        }

        case 6: {
            enterOuterAlt(_localctx, 6);
            setState(557);
            annotationTypeDeclaration();
            break;
        }

        case 7: {
            enterOuterAlt(_localctx, 7);
            setState(558);
            classDeclaration();
            break;
        }

        case 8: {
            enterOuterAlt(_localctx, 8);
            setState(559);
            enumDeclaration();
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ConstDeclarationContext ------------------------------------------------------------------

JavaParser::ConstDeclarationContext::ConstDeclarationContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::TypeTypeContext *JavaParser::ConstDeclarationContext::typeType()
{
    return getRuleContext<JavaParser::TypeTypeContext>(0);
}

std::vector<JavaParser::ConstantDeclaratorContext *> JavaParser::ConstDeclarationContext::constantDeclarator()
{
    return getRuleContexts<JavaParser::ConstantDeclaratorContext>();
}

JavaParser::ConstantDeclaratorContext *JavaParser::ConstDeclarationContext::constantDeclarator(size_t i)
{
    return getRuleContext<JavaParser::ConstantDeclaratorContext>(i);
}

tree::TerminalNode *JavaParser::ConstDeclarationContext::SEMI()
{
    return getToken(JavaParser::SEMI, 0);
}

std::vector<tree::TerminalNode *> JavaParser::ConstDeclarationContext::COMMA()
{
    return getTokens(JavaParser::COMMA);
}

tree::TerminalNode *JavaParser::ConstDeclarationContext::COMMA(size_t i)
{
    return getToken(JavaParser::COMMA, i);
}

size_t JavaParser::ConstDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleConstDeclaration;
}

void JavaParser::ConstDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterConstDeclaration(this);
}

void JavaParser::ConstDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitConstDeclaration(this);
}

std::any JavaParser::ConstDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitConstDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ConstDeclarationContext *JavaParser::constDeclaration()
{
    ConstDeclarationContext *_localctx = _tracker.createInstance<ConstDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 60, JavaParser::RuleConstDeclaration);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(562);
        typeType();
        setState(563);
        constantDeclarator();
        setState(568);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == JavaParser::COMMA) {
            setState(564);
            match(JavaParser::COMMA);
            setState(565);
            constantDeclarator();
            setState(570);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(571);
        match(JavaParser::SEMI);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ConstantDeclaratorContext ------------------------------------------------------------------

JavaParser::ConstantDeclaratorContext::ConstantDeclaratorContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::IdentifierContext *JavaParser::ConstantDeclaratorContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

tree::TerminalNode *JavaParser::ConstantDeclaratorContext::ASSIGN()
{
    return getToken(JavaParser::ASSIGN, 0);
}

JavaParser::VariableInitializerContext *JavaParser::ConstantDeclaratorContext::variableInitializer()
{
    return getRuleContext<JavaParser::VariableInitializerContext>(0);
}

std::vector<tree::TerminalNode *> JavaParser::ConstantDeclaratorContext::LBRACK()
{
    return getTokens(JavaParser::LBRACK);
}

tree::TerminalNode *JavaParser::ConstantDeclaratorContext::LBRACK(size_t i)
{
    return getToken(JavaParser::LBRACK, i);
}

std::vector<tree::TerminalNode *> JavaParser::ConstantDeclaratorContext::RBRACK()
{
    return getTokens(JavaParser::RBRACK);
}

tree::TerminalNode *JavaParser::ConstantDeclaratorContext::RBRACK(size_t i)
{
    return getToken(JavaParser::RBRACK, i);
}

size_t JavaParser::ConstantDeclaratorContext::getRuleIndex() const
{
    return JavaParser::RuleConstantDeclarator;
}

void JavaParser::ConstantDeclaratorContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterConstantDeclarator(this);
}

void JavaParser::ConstantDeclaratorContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitConstantDeclarator(this);
}

std::any JavaParser::ConstantDeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitConstantDeclarator(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ConstantDeclaratorContext *JavaParser::constantDeclarator()
{
    ConstantDeclaratorContext *_localctx = _tracker.createInstance<ConstantDeclaratorContext>(_ctx, getState());
    enterRule(_localctx, 62, JavaParser::RuleConstantDeclarator);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(573);
        identifier();
        setState(578);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == JavaParser::LBRACK) {
            setState(574);
            match(JavaParser::LBRACK);
            setState(575);
            match(JavaParser::RBRACK);
            setState(580);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(581);
        match(JavaParser::ASSIGN);
        setState(582);
        variableInitializer();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- InterfaceMethodDeclarationContext ------------------------------------------------------------------

JavaParser::InterfaceMethodDeclarationContext::InterfaceMethodDeclarationContext(ParserRuleContext *parent,
                                                                                 size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::InterfaceCommonBodyDeclarationContext *
JavaParser::InterfaceMethodDeclarationContext::interfaceCommonBodyDeclaration()
{
    return getRuleContext<JavaParser::InterfaceCommonBodyDeclarationContext>(0);
}

std::vector<JavaParser::InterfaceMethodModifierContext *>
JavaParser::InterfaceMethodDeclarationContext::interfaceMethodModifier()
{
    return getRuleContexts<JavaParser::InterfaceMethodModifierContext>();
}

JavaParser::InterfaceMethodModifierContext *
JavaParser::InterfaceMethodDeclarationContext::interfaceMethodModifier(size_t i)
{
    return getRuleContext<JavaParser::InterfaceMethodModifierContext>(i);
}

size_t JavaParser::InterfaceMethodDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleInterfaceMethodDeclaration;
}

void JavaParser::InterfaceMethodDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterInterfaceMethodDeclaration(this);
}

void JavaParser::InterfaceMethodDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitInterfaceMethodDeclaration(this);
}

std::any JavaParser::InterfaceMethodDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitInterfaceMethodDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::InterfaceMethodDeclarationContext *JavaParser::interfaceMethodDeclaration()
{
    InterfaceMethodDeclarationContext *_localctx =
        _tracker.createInstance<InterfaceMethodDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 64, JavaParser::RuleInterfaceMethodDeclaration);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(587);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(584);
                interfaceMethodModifier();
            }
            setState(589);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
        }
        setState(590);
        interfaceCommonBodyDeclaration();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- InterfaceMethodModifierContext ------------------------------------------------------------------

JavaParser::InterfaceMethodModifierContext::InterfaceMethodModifierContext(ParserRuleContext *parent,
                                                                           size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::AnnotationContext *JavaParser::InterfaceMethodModifierContext::annotation()
{
    return getRuleContext<JavaParser::AnnotationContext>(0);
}

tree::TerminalNode *JavaParser::InterfaceMethodModifierContext::PUBLIC()
{
    return getToken(JavaParser::PUBLIC, 0);
}

tree::TerminalNode *JavaParser::InterfaceMethodModifierContext::ABSTRACT()
{
    return getToken(JavaParser::ABSTRACT, 0);
}

tree::TerminalNode *JavaParser::InterfaceMethodModifierContext::DEFAULT()
{
    return getToken(JavaParser::DEFAULT, 0);
}

tree::TerminalNode *JavaParser::InterfaceMethodModifierContext::STATIC()
{
    return getToken(JavaParser::STATIC, 0);
}

tree::TerminalNode *JavaParser::InterfaceMethodModifierContext::STRICTFP()
{
    return getToken(JavaParser::STRICTFP, 0);
}

size_t JavaParser::InterfaceMethodModifierContext::getRuleIndex() const
{
    return JavaParser::RuleInterfaceMethodModifier;
}

void JavaParser::InterfaceMethodModifierContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterInterfaceMethodModifier(this);
}

void JavaParser::InterfaceMethodModifierContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitInterfaceMethodModifier(this);
}

std::any JavaParser::InterfaceMethodModifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitInterfaceMethodModifier(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::InterfaceMethodModifierContext *JavaParser::interfaceMethodModifier()
{
    InterfaceMethodModifierContext *_localctx =
        _tracker.createInstance<InterfaceMethodModifierContext>(_ctx, getState());
    enterRule(_localctx, 66, JavaParser::RuleInterfaceMethodModifier);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(598);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case JavaParser::MODULE:
        case JavaParser::OPEN:
        case JavaParser::REQUIRES:
        case JavaParser::EXPORTS:
        case JavaParser::OPENS:
        case JavaParser::TO:
        case JavaParser::USES:
        case JavaParser::PROVIDES:
        case JavaParser::WITH:
        case JavaParser::TRANSITIVE:
        case JavaParser::VAR:
        case JavaParser::YIELD:
        case JavaParser::RECORD:
        case JavaParser::SEALED:
        case JavaParser::PERMITS:
        case JavaParser::AT:
        case JavaParser::IDENTIFIER: {
            enterOuterAlt(_localctx, 1);
            setState(592);
            annotation();
            break;
        }

        case JavaParser::PUBLIC: {
            enterOuterAlt(_localctx, 2);
            setState(593);
            match(JavaParser::PUBLIC);
            break;
        }

        case JavaParser::ABSTRACT: {
            enterOuterAlt(_localctx, 3);
            setState(594);
            match(JavaParser::ABSTRACT);
            break;
        }

        case JavaParser::DEFAULT: {
            enterOuterAlt(_localctx, 4);
            setState(595);
            match(JavaParser::DEFAULT);
            break;
        }

        case JavaParser::STATIC: {
            enterOuterAlt(_localctx, 5);
            setState(596);
            match(JavaParser::STATIC);
            break;
        }

        case JavaParser::STRICTFP: {
            enterOuterAlt(_localctx, 6);
            setState(597);
            match(JavaParser::STRICTFP);
            break;
        }

        default:
            throw NoViableAltException(this);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- GenericInterfaceMethodDeclarationContext
//------------------------------------------------------------------

JavaParser::GenericInterfaceMethodDeclarationContext::GenericInterfaceMethodDeclarationContext(
    ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::TypeParametersContext *JavaParser::GenericInterfaceMethodDeclarationContext::typeParameters()
{
    return getRuleContext<JavaParser::TypeParametersContext>(0);
}

JavaParser::InterfaceCommonBodyDeclarationContext *
JavaParser::GenericInterfaceMethodDeclarationContext::interfaceCommonBodyDeclaration()
{
    return getRuleContext<JavaParser::InterfaceCommonBodyDeclarationContext>(0);
}

std::vector<JavaParser::InterfaceMethodModifierContext *>
JavaParser::GenericInterfaceMethodDeclarationContext::interfaceMethodModifier()
{
    return getRuleContexts<JavaParser::InterfaceMethodModifierContext>();
}

JavaParser::InterfaceMethodModifierContext *
JavaParser::GenericInterfaceMethodDeclarationContext::interfaceMethodModifier(size_t i)
{
    return getRuleContext<JavaParser::InterfaceMethodModifierContext>(i);
}

size_t JavaParser::GenericInterfaceMethodDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleGenericInterfaceMethodDeclaration;
}

void JavaParser::GenericInterfaceMethodDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterGenericInterfaceMethodDeclaration(this);
}

void JavaParser::GenericInterfaceMethodDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitGenericInterfaceMethodDeclaration(this);
}

std::any JavaParser::GenericInterfaceMethodDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitGenericInterfaceMethodDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::GenericInterfaceMethodDeclarationContext *JavaParser::genericInterfaceMethodDeclaration()
{
    GenericInterfaceMethodDeclarationContext *_localctx =
        _tracker.createInstance<GenericInterfaceMethodDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 68, JavaParser::RuleGenericInterfaceMethodDeclaration);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(603);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (((((_la - 1) & ~0x3fULL) == 0) && ((1ULL << (_la - 1)) & -1125470410110975) != 0)
               || ((((_la - 65) & ~0x3fULL) == 0) && ((1ULL << (_la - 65)) & -8935141660703064063) != 0)) {
            setState(600);
            interfaceMethodModifier();
            setState(605);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(606);
        typeParameters();
        setState(607);
        interfaceCommonBodyDeclaration();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- InterfaceCommonBodyDeclarationContext
//------------------------------------------------------------------

JavaParser::InterfaceCommonBodyDeclarationContext::InterfaceCommonBodyDeclarationContext(ParserRuleContext *parent,
                                                                                         size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::TypeTypeOrVoidContext *JavaParser::InterfaceCommonBodyDeclarationContext::typeTypeOrVoid()
{
    return getRuleContext<JavaParser::TypeTypeOrVoidContext>(0);
}

JavaParser::IdentifierContext *JavaParser::InterfaceCommonBodyDeclarationContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

JavaParser::FormalParametersContext *JavaParser::InterfaceCommonBodyDeclarationContext::formalParameters()
{
    return getRuleContext<JavaParser::FormalParametersContext>(0);
}

JavaParser::MethodBodyContext *JavaParser::InterfaceCommonBodyDeclarationContext::methodBody()
{
    return getRuleContext<JavaParser::MethodBodyContext>(0);
}

std::vector<JavaParser::AnnotationContext *> JavaParser::InterfaceCommonBodyDeclarationContext::annotation()
{
    return getRuleContexts<JavaParser::AnnotationContext>();
}

JavaParser::AnnotationContext *JavaParser::InterfaceCommonBodyDeclarationContext::annotation(size_t i)
{
    return getRuleContext<JavaParser::AnnotationContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::InterfaceCommonBodyDeclarationContext::LBRACK()
{
    return getTokens(JavaParser::LBRACK);
}

tree::TerminalNode *JavaParser::InterfaceCommonBodyDeclarationContext::LBRACK(size_t i)
{
    return getToken(JavaParser::LBRACK, i);
}

std::vector<tree::TerminalNode *> JavaParser::InterfaceCommonBodyDeclarationContext::RBRACK()
{
    return getTokens(JavaParser::RBRACK);
}

tree::TerminalNode *JavaParser::InterfaceCommonBodyDeclarationContext::RBRACK(size_t i)
{
    return getToken(JavaParser::RBRACK, i);
}

tree::TerminalNode *JavaParser::InterfaceCommonBodyDeclarationContext::THROWS()
{
    return getToken(JavaParser::THROWS, 0);
}

JavaParser::QualifiedNameListContext *JavaParser::InterfaceCommonBodyDeclarationContext::qualifiedNameList()
{
    return getRuleContext<JavaParser::QualifiedNameListContext>(0);
}

size_t JavaParser::InterfaceCommonBodyDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleInterfaceCommonBodyDeclaration;
}

void JavaParser::InterfaceCommonBodyDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterInterfaceCommonBodyDeclaration(this);
}

void JavaParser::InterfaceCommonBodyDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitInterfaceCommonBodyDeclaration(this);
}

std::any JavaParser::InterfaceCommonBodyDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitInterfaceCommonBodyDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::InterfaceCommonBodyDeclarationContext *JavaParser::interfaceCommonBodyDeclaration()
{
    InterfaceCommonBodyDeclarationContext *_localctx =
        _tracker.createInstance<InterfaceCommonBodyDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 70, JavaParser::RuleInterfaceCommonBodyDeclaration);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(612);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(609);
                annotation();
            }
            setState(614);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
        }
        setState(615);
        typeTypeOrVoid();
        setState(616);
        identifier();
        setState(617);
        formalParameters();
        setState(622);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == JavaParser::LBRACK) {
            setState(618);
            match(JavaParser::LBRACK);
            setState(619);
            match(JavaParser::RBRACK);
            setState(624);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(627);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::THROWS) {
            setState(625);
            match(JavaParser::THROWS);
            setState(626);
            qualifiedNameList();
        }
        setState(629);
        methodBody();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- VariableDeclaratorsContext ------------------------------------------------------------------

JavaParser::VariableDeclaratorsContext::VariableDeclaratorsContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

std::vector<JavaParser::VariableDeclaratorContext *> JavaParser::VariableDeclaratorsContext::variableDeclarator()
{
    return getRuleContexts<JavaParser::VariableDeclaratorContext>();
}

JavaParser::VariableDeclaratorContext *JavaParser::VariableDeclaratorsContext::variableDeclarator(size_t i)
{
    return getRuleContext<JavaParser::VariableDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::VariableDeclaratorsContext::COMMA()
{
    return getTokens(JavaParser::COMMA);
}

tree::TerminalNode *JavaParser::VariableDeclaratorsContext::COMMA(size_t i)
{
    return getToken(JavaParser::COMMA, i);
}

size_t JavaParser::VariableDeclaratorsContext::getRuleIndex() const
{
    return JavaParser::RuleVariableDeclarators;
}

void JavaParser::VariableDeclaratorsContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterVariableDeclarators(this);
}

void JavaParser::VariableDeclaratorsContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitVariableDeclarators(this);
}

std::any JavaParser::VariableDeclaratorsContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitVariableDeclarators(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::VariableDeclaratorsContext *JavaParser::variableDeclarators()
{
    VariableDeclaratorsContext *_localctx = _tracker.createInstance<VariableDeclaratorsContext>(_ctx, getState());
    enterRule(_localctx, 72, JavaParser::RuleVariableDeclarators);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(631);
        variableDeclarator();
        setState(636);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == JavaParser::COMMA) {
            setState(632);
            match(JavaParser::COMMA);
            setState(633);
            variableDeclarator();
            setState(638);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- VariableDeclaratorContext ------------------------------------------------------------------

JavaParser::VariableDeclaratorContext::VariableDeclaratorContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::VariableDeclaratorIdContext *JavaParser::VariableDeclaratorContext::variableDeclaratorId()
{
    return getRuleContext<JavaParser::VariableDeclaratorIdContext>(0);
}

tree::TerminalNode *JavaParser::VariableDeclaratorContext::ASSIGN()
{
    return getToken(JavaParser::ASSIGN, 0);
}

JavaParser::VariableInitializerContext *JavaParser::VariableDeclaratorContext::variableInitializer()
{
    return getRuleContext<JavaParser::VariableInitializerContext>(0);
}

size_t JavaParser::VariableDeclaratorContext::getRuleIndex() const
{
    return JavaParser::RuleVariableDeclarator;
}

void JavaParser::VariableDeclaratorContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterVariableDeclarator(this);
}

void JavaParser::VariableDeclaratorContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitVariableDeclarator(this);
}

std::any JavaParser::VariableDeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitVariableDeclarator(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::VariableDeclaratorContext *JavaParser::variableDeclarator()
{
    VariableDeclaratorContext *_localctx = _tracker.createInstance<VariableDeclaratorContext>(_ctx, getState());
    enterRule(_localctx, 74, JavaParser::RuleVariableDeclarator);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(639);
        variableDeclaratorId();
        setState(642);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::ASSIGN) {
            setState(640);
            match(JavaParser::ASSIGN);
            setState(641);
            variableInitializer();
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- VariableDeclaratorIdContext ------------------------------------------------------------------

JavaParser::VariableDeclaratorIdContext::VariableDeclaratorIdContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::IdentifierContext *JavaParser::VariableDeclaratorIdContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

std::vector<tree::TerminalNode *> JavaParser::VariableDeclaratorIdContext::LBRACK()
{
    return getTokens(JavaParser::LBRACK);
}

tree::TerminalNode *JavaParser::VariableDeclaratorIdContext::LBRACK(size_t i)
{
    return getToken(JavaParser::LBRACK, i);
}

std::vector<tree::TerminalNode *> JavaParser::VariableDeclaratorIdContext::RBRACK()
{
    return getTokens(JavaParser::RBRACK);
}

tree::TerminalNode *JavaParser::VariableDeclaratorIdContext::RBRACK(size_t i)
{
    return getToken(JavaParser::RBRACK, i);
}

size_t JavaParser::VariableDeclaratorIdContext::getRuleIndex() const
{
    return JavaParser::RuleVariableDeclaratorId;
}

void JavaParser::VariableDeclaratorIdContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterVariableDeclaratorId(this);
}

void JavaParser::VariableDeclaratorIdContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitVariableDeclaratorId(this);
}

std::any JavaParser::VariableDeclaratorIdContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitVariableDeclaratorId(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::VariableDeclaratorIdContext *JavaParser::variableDeclaratorId()
{
    VariableDeclaratorIdContext *_localctx = _tracker.createInstance<VariableDeclaratorIdContext>(_ctx, getState());
    enterRule(_localctx, 76, JavaParser::RuleVariableDeclaratorId);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(644);
        identifier();
        setState(649);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == JavaParser::LBRACK) {
            setState(645);
            match(JavaParser::LBRACK);
            setState(646);
            match(JavaParser::RBRACK);
            setState(651);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- VariableInitializerContext ------------------------------------------------------------------

JavaParser::VariableInitializerContext::VariableInitializerContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::ArrayInitializerContext *JavaParser::VariableInitializerContext::arrayInitializer()
{
    return getRuleContext<JavaParser::ArrayInitializerContext>(0);
}

JavaParser::ExpressionContext *JavaParser::VariableInitializerContext::expression()
{
    return getRuleContext<JavaParser::ExpressionContext>(0);
}

size_t JavaParser::VariableInitializerContext::getRuleIndex() const
{
    return JavaParser::RuleVariableInitializer;
}

void JavaParser::VariableInitializerContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterVariableInitializer(this);
}

void JavaParser::VariableInitializerContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitVariableInitializer(this);
}

std::any JavaParser::VariableInitializerContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitVariableInitializer(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::VariableInitializerContext *JavaParser::variableInitializer()
{
    VariableInitializerContext *_localctx = _tracker.createInstance<VariableInitializerContext>(_ctx, getState());
    enterRule(_localctx, 78, JavaParser::RuleVariableInitializer);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(654);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case JavaParser::LBRACE: {
            enterOuterAlt(_localctx, 1);
            setState(652);
            arrayInitializer();
            break;
        }

        case JavaParser::BOOLEAN:
        case JavaParser::BYTE:
        case JavaParser::CHAR:
        case JavaParser::DOUBLE:
        case JavaParser::FLOAT:
        case JavaParser::INT:
        case JavaParser::LONG:
        case JavaParser::NEW:
        case JavaParser::SHORT:
        case JavaParser::SUPER:
        case JavaParser::SWITCH:
        case JavaParser::THIS:
        case JavaParser::VOID:
        case JavaParser::MODULE:
        case JavaParser::OPEN:
        case JavaParser::REQUIRES:
        case JavaParser::EXPORTS:
        case JavaParser::OPENS:
        case JavaParser::TO:
        case JavaParser::USES:
        case JavaParser::PROVIDES:
        case JavaParser::WITH:
        case JavaParser::TRANSITIVE:
        case JavaParser::VAR:
        case JavaParser::YIELD:
        case JavaParser::RECORD:
        case JavaParser::SEALED:
        case JavaParser::PERMITS:
        case JavaParser::DECIMAL_LITERAL:
        case JavaParser::HEX_LITERAL:
        case JavaParser::OCT_LITERAL:
        case JavaParser::BINARY_LITERAL:
        case JavaParser::FLOAT_LITERAL:
        case JavaParser::HEX_FLOAT_LITERAL:
        case JavaParser::BOOL_LITERAL:
        case JavaParser::CHAR_LITERAL:
        case JavaParser::STRING_LITERAL:
        case JavaParser::TEXT_BLOCK:
        case JavaParser::NULL_LITERAL:
        case JavaParser::LPAREN:
        case JavaParser::LT:
        case JavaParser::BANG:
        case JavaParser::TILDE:
        case JavaParser::INC:
        case JavaParser::DEC:
        case JavaParser::ADD:
        case JavaParser::SUB:
        case JavaParser::AT:
        case JavaParser::IDENTIFIER: {
            enterOuterAlt(_localctx, 2);
            setState(653);
            expression(0);
            break;
        }

        default:
            throw NoViableAltException(this);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ArrayInitializerContext ------------------------------------------------------------------

JavaParser::ArrayInitializerContext::ArrayInitializerContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::ArrayInitializerContext::LBRACE()
{
    return getToken(JavaParser::LBRACE, 0);
}

tree::TerminalNode *JavaParser::ArrayInitializerContext::RBRACE()
{
    return getToken(JavaParser::RBRACE, 0);
}

std::vector<JavaParser::VariableInitializerContext *> JavaParser::ArrayInitializerContext::variableInitializer()
{
    return getRuleContexts<JavaParser::VariableInitializerContext>();
}

JavaParser::VariableInitializerContext *JavaParser::ArrayInitializerContext::variableInitializer(size_t i)
{
    return getRuleContext<JavaParser::VariableInitializerContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::ArrayInitializerContext::COMMA()
{
    return getTokens(JavaParser::COMMA);
}

tree::TerminalNode *JavaParser::ArrayInitializerContext::COMMA(size_t i)
{
    return getToken(JavaParser::COMMA, i);
}

size_t JavaParser::ArrayInitializerContext::getRuleIndex() const
{
    return JavaParser::RuleArrayInitializer;
}

void JavaParser::ArrayInitializerContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterArrayInitializer(this);
}

void JavaParser::ArrayInitializerContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitArrayInitializer(this);
}

std::any JavaParser::ArrayInitializerContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitArrayInitializer(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ArrayInitializerContext *JavaParser::arrayInitializer()
{
    ArrayInitializerContext *_localctx = _tracker.createInstance<ArrayInitializerContext>(_ctx, getState());
    enterRule(_localctx, 80, JavaParser::RuleArrayInitializer);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(656);
        match(JavaParser::LBRACE);
        setState(668);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 3) & ~0x3fULL) == 0) && ((1ULL << (_la - 3)) & 9223127275610966053) != 0)
            || ((((_la - 67) & ~0x3fULL) == 0) && ((1ULL << (_la - 67)) & 2377900732130013183) != 0)) {
            setState(657);
            variableInitializer();
            setState(662);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                    setState(658);
                    match(JavaParser::COMMA);
                    setState(659);
                    variableInitializer();
                }
                setState(664);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
            }
            setState(666);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == JavaParser::COMMA) {
                setState(665);
                match(JavaParser::COMMA);
            }
        }
        setState(670);
        match(JavaParser::RBRACE);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ClassOrInterfaceTypeContext ------------------------------------------------------------------

JavaParser::ClassOrInterfaceTypeContext::ClassOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::TypeIdentifierContext *JavaParser::ClassOrInterfaceTypeContext::typeIdentifier()
{
    return getRuleContext<JavaParser::TypeIdentifierContext>(0);
}

std::vector<JavaParser::IdentifierContext *> JavaParser::ClassOrInterfaceTypeContext::identifier()
{
    return getRuleContexts<JavaParser::IdentifierContext>();
}

JavaParser::IdentifierContext *JavaParser::ClassOrInterfaceTypeContext::identifier(size_t i)
{
    return getRuleContext<JavaParser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::ClassOrInterfaceTypeContext::DOT()
{
    return getTokens(JavaParser::DOT);
}

tree::TerminalNode *JavaParser::ClassOrInterfaceTypeContext::DOT(size_t i)
{
    return getToken(JavaParser::DOT, i);
}

std::vector<JavaParser::TypeArgumentsContext *> JavaParser::ClassOrInterfaceTypeContext::typeArguments()
{
    return getRuleContexts<JavaParser::TypeArgumentsContext>();
}

JavaParser::TypeArgumentsContext *JavaParser::ClassOrInterfaceTypeContext::typeArguments(size_t i)
{
    return getRuleContext<JavaParser::TypeArgumentsContext>(i);
}

size_t JavaParser::ClassOrInterfaceTypeContext::getRuleIndex() const
{
    return JavaParser::RuleClassOrInterfaceType;
}

void JavaParser::ClassOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterClassOrInterfaceType(this);
}

void JavaParser::ClassOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitClassOrInterfaceType(this);
}

std::any JavaParser::ClassOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitClassOrInterfaceType(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ClassOrInterfaceTypeContext *JavaParser::classOrInterfaceType()
{
    ClassOrInterfaceTypeContext *_localctx = _tracker.createInstance<ClassOrInterfaceTypeContext>(_ctx, getState());
    enterRule(_localctx, 82, JavaParser::RuleClassOrInterfaceType);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(680);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(672);
                identifier();
                setState(674);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == JavaParser::LT) {
                    setState(673);
                    typeArguments();
                }
                setState(676);
                match(JavaParser::DOT);
            }
            setState(682);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
        }
        setState(683);
        typeIdentifier();
        setState(685);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
        case 1: {
            setState(684);
            typeArguments();
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TypeArgumentContext ------------------------------------------------------------------

JavaParser::TypeArgumentContext::TypeArgumentContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::TypeTypeContext *JavaParser::TypeArgumentContext::typeType()
{
    return getRuleContext<JavaParser::TypeTypeContext>(0);
}

tree::TerminalNode *JavaParser::TypeArgumentContext::QUESTION()
{
    return getToken(JavaParser::QUESTION, 0);
}

std::vector<JavaParser::AnnotationContext *> JavaParser::TypeArgumentContext::annotation()
{
    return getRuleContexts<JavaParser::AnnotationContext>();
}

JavaParser::AnnotationContext *JavaParser::TypeArgumentContext::annotation(size_t i)
{
    return getRuleContext<JavaParser::AnnotationContext>(i);
}

tree::TerminalNode *JavaParser::TypeArgumentContext::EXTENDS()
{
    return getToken(JavaParser::EXTENDS, 0);
}

tree::TerminalNode *JavaParser::TypeArgumentContext::SUPER()
{
    return getToken(JavaParser::SUPER, 0);
}

size_t JavaParser::TypeArgumentContext::getRuleIndex() const
{
    return JavaParser::RuleTypeArgument;
}

void JavaParser::TypeArgumentContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterTypeArgument(this);
}

void JavaParser::TypeArgumentContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitTypeArgument(this);
}

std::any JavaParser::TypeArgumentContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitTypeArgument(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::TypeArgumentContext *JavaParser::typeArgument()
{
    TypeArgumentContext *_localctx = _tracker.createInstance<TypeArgumentContext>(_ctx, getState());
    enterRule(_localctx, 84, JavaParser::RuleTypeArgument);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(699);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(687);
            typeType();
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(691);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (((((_la - 51) & ~0x3fULL) == 0) && ((1ULL << (_la - 51)) & 32767) != 0) || _la == JavaParser::AT

                   || _la == JavaParser::IDENTIFIER) {
                setState(688);
                annotation();
                setState(693);
                _errHandler->sync(this);
                _la = _input->LA(1);
            }
            setState(694);
            match(JavaParser::QUESTION);
            setState(697);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == JavaParser::EXTENDS

                || _la == JavaParser::SUPER) {
                setState(695);
                _la = _input->LA(1);
                if (!(_la == JavaParser::EXTENDS

                      || _la == JavaParser::SUPER)) {
                    _errHandler->recoverInline(this);
                } else {
                    _errHandler->reportMatch(this);
                    consume();
                }
                setState(696);
                typeType();
            }
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- QualifiedNameListContext ------------------------------------------------------------------

JavaParser::QualifiedNameListContext::QualifiedNameListContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

std::vector<JavaParser::QualifiedNameContext *> JavaParser::QualifiedNameListContext::qualifiedName()
{
    return getRuleContexts<JavaParser::QualifiedNameContext>();
}

JavaParser::QualifiedNameContext *JavaParser::QualifiedNameListContext::qualifiedName(size_t i)
{
    return getRuleContext<JavaParser::QualifiedNameContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::QualifiedNameListContext::COMMA()
{
    return getTokens(JavaParser::COMMA);
}

tree::TerminalNode *JavaParser::QualifiedNameListContext::COMMA(size_t i)
{
    return getToken(JavaParser::COMMA, i);
}

size_t JavaParser::QualifiedNameListContext::getRuleIndex() const
{
    return JavaParser::RuleQualifiedNameList;
}

void JavaParser::QualifiedNameListContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterQualifiedNameList(this);
}

void JavaParser::QualifiedNameListContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitQualifiedNameList(this);
}

std::any JavaParser::QualifiedNameListContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitQualifiedNameList(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::QualifiedNameListContext *JavaParser::qualifiedNameList()
{
    QualifiedNameListContext *_localctx = _tracker.createInstance<QualifiedNameListContext>(_ctx, getState());
    enterRule(_localctx, 86, JavaParser::RuleQualifiedNameList);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(701);
        qualifiedName();
        setState(706);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == JavaParser::COMMA) {
            setState(702);
            match(JavaParser::COMMA);
            setState(703);
            qualifiedName();
            setState(708);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- FormalParametersContext ------------------------------------------------------------------

JavaParser::FormalParametersContext::FormalParametersContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::FormalParametersContext::LPAREN()
{
    return getToken(JavaParser::LPAREN, 0);
}

tree::TerminalNode *JavaParser::FormalParametersContext::RPAREN()
{
    return getToken(JavaParser::RPAREN, 0);
}

JavaParser::ReceiverParameterContext *JavaParser::FormalParametersContext::receiverParameter()
{
    return getRuleContext<JavaParser::ReceiverParameterContext>(0);
}

tree::TerminalNode *JavaParser::FormalParametersContext::COMMA()
{
    return getToken(JavaParser::COMMA, 0);
}

JavaParser::FormalParameterListContext *JavaParser::FormalParametersContext::formalParameterList()
{
    return getRuleContext<JavaParser::FormalParameterListContext>(0);
}

size_t JavaParser::FormalParametersContext::getRuleIndex() const
{
    return JavaParser::RuleFormalParameters;
}

void JavaParser::FormalParametersContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterFormalParameters(this);
}

void JavaParser::FormalParametersContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitFormalParameters(this);
}

std::any JavaParser::FormalParametersContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitFormalParameters(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::FormalParametersContext *JavaParser::formalParameters()
{
    FormalParametersContext *_localctx = _tracker.createInstance<FormalParametersContext>(_ctx, getState());
    enterRule(_localctx, 88, JavaParser::RuleFormalParameters);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(709);
        match(JavaParser::LPAREN);
        setState(721);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
        case 1: {
            setState(711);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (((((_la - 3) & ~0x3fULL) == 0) && ((1ULL << (_la - 3)) & 9223090579141953573) != 0)
                || _la == JavaParser::AT

                || _la == JavaParser::IDENTIFIER) {
                setState(710);
                receiverParameter();
            }
            break;
        }

        case 2: {
            setState(713);
            receiverParameter();
            setState(716);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == JavaParser::COMMA) {
                setState(714);
                match(JavaParser::COMMA);
                setState(715);
                formalParameterList();
            }
            break;
        }

        case 3: {
            setState(719);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (((((_la - 3) & ~0x3fULL) == 0) && ((1ULL << (_la - 3)) & 9223090579141986341) != 0)
                || _la == JavaParser::AT

                || _la == JavaParser::IDENTIFIER) {
                setState(718);
                formalParameterList();
            }
            break;
        }

        default:
            break;
        }
        setState(723);
        match(JavaParser::RPAREN);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ReceiverParameterContext ------------------------------------------------------------------

JavaParser::ReceiverParameterContext::ReceiverParameterContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::TypeTypeContext *JavaParser::ReceiverParameterContext::typeType()
{
    return getRuleContext<JavaParser::TypeTypeContext>(0);
}

tree::TerminalNode *JavaParser::ReceiverParameterContext::THIS()
{
    return getToken(JavaParser::THIS, 0);
}

std::vector<JavaParser::IdentifierContext *> JavaParser::ReceiverParameterContext::identifier()
{
    return getRuleContexts<JavaParser::IdentifierContext>();
}

JavaParser::IdentifierContext *JavaParser::ReceiverParameterContext::identifier(size_t i)
{
    return getRuleContext<JavaParser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::ReceiverParameterContext::DOT()
{
    return getTokens(JavaParser::DOT);
}

tree::TerminalNode *JavaParser::ReceiverParameterContext::DOT(size_t i)
{
    return getToken(JavaParser::DOT, i);
}

size_t JavaParser::ReceiverParameterContext::getRuleIndex() const
{
    return JavaParser::RuleReceiverParameter;
}

void JavaParser::ReceiverParameterContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterReceiverParameter(this);
}

void JavaParser::ReceiverParameterContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitReceiverParameter(this);
}

std::any JavaParser::ReceiverParameterContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitReceiverParameter(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ReceiverParameterContext *JavaParser::receiverParameter()
{
    ReceiverParameterContext *_localctx = _tracker.createInstance<ReceiverParameterContext>(_ctx, getState());
    enterRule(_localctx, 90, JavaParser::RuleReceiverParameter);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(725);
        typeType();
        setState(731);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (((((_la - 51) & ~0x3fULL) == 0) && ((1ULL << (_la - 51)) & 32767) != 0)
               || _la == JavaParser::IDENTIFIER) {
            setState(726);
            identifier();
            setState(727);
            match(JavaParser::DOT);
            setState(733);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(734);
        match(JavaParser::THIS);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- FormalParameterListContext ------------------------------------------------------------------

JavaParser::FormalParameterListContext::FormalParameterListContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

std::vector<JavaParser::FormalParameterContext *> JavaParser::FormalParameterListContext::formalParameter()
{
    return getRuleContexts<JavaParser::FormalParameterContext>();
}

JavaParser::FormalParameterContext *JavaParser::FormalParameterListContext::formalParameter(size_t i)
{
    return getRuleContext<JavaParser::FormalParameterContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::FormalParameterListContext::COMMA()
{
    return getTokens(JavaParser::COMMA);
}

tree::TerminalNode *JavaParser::FormalParameterListContext::COMMA(size_t i)
{
    return getToken(JavaParser::COMMA, i);
}

JavaParser::LastFormalParameterContext *JavaParser::FormalParameterListContext::lastFormalParameter()
{
    return getRuleContext<JavaParser::LastFormalParameterContext>(0);
}

size_t JavaParser::FormalParameterListContext::getRuleIndex() const
{
    return JavaParser::RuleFormalParameterList;
}

void JavaParser::FormalParameterListContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterFormalParameterList(this);
}

void JavaParser::FormalParameterListContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitFormalParameterList(this);
}

std::any JavaParser::FormalParameterListContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitFormalParameterList(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::FormalParameterListContext *JavaParser::formalParameterList()
{
    FormalParameterListContext *_localctx = _tracker.createInstance<FormalParameterListContext>(_ctx, getState());
    enterRule(_localctx, 92, JavaParser::RuleFormalParameterList);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        setState(749);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(736);
            formalParameter();
            setState(741);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                    setState(737);
                    match(JavaParser::COMMA);
                    setState(738);
                    formalParameter();
                }
                setState(743);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx);
            }
            setState(746);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == JavaParser::COMMA) {
                setState(744);
                match(JavaParser::COMMA);
                setState(745);
                lastFormalParameter();
            }
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(748);
            lastFormalParameter();
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- FormalParameterContext ------------------------------------------------------------------

JavaParser::FormalParameterContext::FormalParameterContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::TypeTypeContext *JavaParser::FormalParameterContext::typeType()
{
    return getRuleContext<JavaParser::TypeTypeContext>(0);
}

JavaParser::VariableDeclaratorIdContext *JavaParser::FormalParameterContext::variableDeclaratorId()
{
    return getRuleContext<JavaParser::VariableDeclaratorIdContext>(0);
}

std::vector<JavaParser::VariableModifierContext *> JavaParser::FormalParameterContext::variableModifier()
{
    return getRuleContexts<JavaParser::VariableModifierContext>();
}

JavaParser::VariableModifierContext *JavaParser::FormalParameterContext::variableModifier(size_t i)
{
    return getRuleContext<JavaParser::VariableModifierContext>(i);
}

size_t JavaParser::FormalParameterContext::getRuleIndex() const
{
    return JavaParser::RuleFormalParameter;
}

void JavaParser::FormalParameterContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterFormalParameter(this);
}

void JavaParser::FormalParameterContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitFormalParameter(this);
}

std::any JavaParser::FormalParameterContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitFormalParameter(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::FormalParameterContext *JavaParser::formalParameter()
{
    FormalParameterContext *_localctx = _tracker.createInstance<FormalParameterContext>(_ctx, getState());
    enterRule(_localctx, 94, JavaParser::RuleFormalParameter);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(754);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(751);
                variableModifier();
            }
            setState(756);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx);
        }
        setState(757);
        typeType();
        setState(758);
        variableDeclaratorId();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- LastFormalParameterContext ------------------------------------------------------------------

JavaParser::LastFormalParameterContext::LastFormalParameterContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::TypeTypeContext *JavaParser::LastFormalParameterContext::typeType()
{
    return getRuleContext<JavaParser::TypeTypeContext>(0);
}

tree::TerminalNode *JavaParser::LastFormalParameterContext::ELLIPSIS()
{
    return getToken(JavaParser::ELLIPSIS, 0);
}

JavaParser::VariableDeclaratorIdContext *JavaParser::LastFormalParameterContext::variableDeclaratorId()
{
    return getRuleContext<JavaParser::VariableDeclaratorIdContext>(0);
}

std::vector<JavaParser::VariableModifierContext *> JavaParser::LastFormalParameterContext::variableModifier()
{
    return getRuleContexts<JavaParser::VariableModifierContext>();
}

JavaParser::VariableModifierContext *JavaParser::LastFormalParameterContext::variableModifier(size_t i)
{
    return getRuleContext<JavaParser::VariableModifierContext>(i);
}

std::vector<JavaParser::AnnotationContext *> JavaParser::LastFormalParameterContext::annotation()
{
    return getRuleContexts<JavaParser::AnnotationContext>();
}

JavaParser::AnnotationContext *JavaParser::LastFormalParameterContext::annotation(size_t i)
{
    return getRuleContext<JavaParser::AnnotationContext>(i);
}

size_t JavaParser::LastFormalParameterContext::getRuleIndex() const
{
    return JavaParser::RuleLastFormalParameter;
}

void JavaParser::LastFormalParameterContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterLastFormalParameter(this);
}

void JavaParser::LastFormalParameterContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitLastFormalParameter(this);
}

std::any JavaParser::LastFormalParameterContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitLastFormalParameter(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::LastFormalParameterContext *JavaParser::lastFormalParameter()
{
    LastFormalParameterContext *_localctx = _tracker.createInstance<LastFormalParameterContext>(_ctx, getState());
    enterRule(_localctx, 96, JavaParser::RuleLastFormalParameter);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(763);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(760);
                variableModifier();
            }
            setState(765);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
        }
        setState(766);
        typeType();
        setState(770);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (((((_la - 51) & ~0x3fULL) == 0) && ((1ULL << (_la - 51)) & 32767) != 0) || _la == JavaParser::AT

               || _la == JavaParser::IDENTIFIER) {
            setState(767);
            annotation();
            setState(772);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(773);
        match(JavaParser::ELLIPSIS);
        setState(774);
        variableDeclaratorId();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- LambdaLVTIListContext ------------------------------------------------------------------

JavaParser::LambdaLVTIListContext::LambdaLVTIListContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

std::vector<JavaParser::LambdaLVTIParameterContext *> JavaParser::LambdaLVTIListContext::lambdaLVTIParameter()
{
    return getRuleContexts<JavaParser::LambdaLVTIParameterContext>();
}

JavaParser::LambdaLVTIParameterContext *JavaParser::LambdaLVTIListContext::lambdaLVTIParameter(size_t i)
{
    return getRuleContext<JavaParser::LambdaLVTIParameterContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::LambdaLVTIListContext::COMMA()
{
    return getTokens(JavaParser::COMMA);
}

tree::TerminalNode *JavaParser::LambdaLVTIListContext::COMMA(size_t i)
{
    return getToken(JavaParser::COMMA, i);
}

size_t JavaParser::LambdaLVTIListContext::getRuleIndex() const
{
    return JavaParser::RuleLambdaLVTIList;
}

void JavaParser::LambdaLVTIListContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterLambdaLVTIList(this);
}

void JavaParser::LambdaLVTIListContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitLambdaLVTIList(this);
}

std::any JavaParser::LambdaLVTIListContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitLambdaLVTIList(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::LambdaLVTIListContext *JavaParser::lambdaLVTIList()
{
    LambdaLVTIListContext *_localctx = _tracker.createInstance<LambdaLVTIListContext>(_ctx, getState());
    enterRule(_localctx, 98, JavaParser::RuleLambdaLVTIList);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(776);
        lambdaLVTIParameter();
        setState(781);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == JavaParser::COMMA) {
            setState(777);
            match(JavaParser::COMMA);
            setState(778);
            lambdaLVTIParameter();
            setState(783);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- LambdaLVTIParameterContext ------------------------------------------------------------------

JavaParser::LambdaLVTIParameterContext::LambdaLVTIParameterContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::LambdaLVTIParameterContext::VAR()
{
    return getToken(JavaParser::VAR, 0);
}

JavaParser::IdentifierContext *JavaParser::LambdaLVTIParameterContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

std::vector<JavaParser::VariableModifierContext *> JavaParser::LambdaLVTIParameterContext::variableModifier()
{
    return getRuleContexts<JavaParser::VariableModifierContext>();
}

JavaParser::VariableModifierContext *JavaParser::LambdaLVTIParameterContext::variableModifier(size_t i)
{
    return getRuleContext<JavaParser::VariableModifierContext>(i);
}

size_t JavaParser::LambdaLVTIParameterContext::getRuleIndex() const
{
    return JavaParser::RuleLambdaLVTIParameter;
}

void JavaParser::LambdaLVTIParameterContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterLambdaLVTIParameter(this);
}

void JavaParser::LambdaLVTIParameterContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitLambdaLVTIParameter(this);
}

std::any JavaParser::LambdaLVTIParameterContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitLambdaLVTIParameter(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::LambdaLVTIParameterContext *JavaParser::lambdaLVTIParameter()
{
    LambdaLVTIParameterContext *_localctx = _tracker.createInstance<LambdaLVTIParameterContext>(_ctx, getState());
    enterRule(_localctx, 100, JavaParser::RuleLambdaLVTIParameter);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(787);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(784);
                variableModifier();
            }
            setState(789);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx);
        }
        setState(790);
        match(JavaParser::VAR);
        setState(791);
        identifier();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- QualifiedNameContext ------------------------------------------------------------------

JavaParser::QualifiedNameContext::QualifiedNameContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

std::vector<JavaParser::IdentifierContext *> JavaParser::QualifiedNameContext::identifier()
{
    return getRuleContexts<JavaParser::IdentifierContext>();
}

JavaParser::IdentifierContext *JavaParser::QualifiedNameContext::identifier(size_t i)
{
    return getRuleContext<JavaParser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::QualifiedNameContext::DOT()
{
    return getTokens(JavaParser::DOT);
}

tree::TerminalNode *JavaParser::QualifiedNameContext::DOT(size_t i)
{
    return getToken(JavaParser::DOT, i);
}

size_t JavaParser::QualifiedNameContext::getRuleIndex() const
{
    return JavaParser::RuleQualifiedName;
}

void JavaParser::QualifiedNameContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterQualifiedName(this);
}

void JavaParser::QualifiedNameContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitQualifiedName(this);
}

std::any JavaParser::QualifiedNameContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitQualifiedName(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::QualifiedNameContext *JavaParser::qualifiedName()
{
    QualifiedNameContext *_localctx = _tracker.createInstance<QualifiedNameContext>(_ctx, getState());
    enterRule(_localctx, 102, JavaParser::RuleQualifiedName);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(793);
        identifier();
        setState(798);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(794);
                match(JavaParser::DOT);
                setState(795);
                identifier();
            }
            setState(800);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

JavaParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::IntegerLiteralContext *JavaParser::LiteralContext::integerLiteral()
{
    return getRuleContext<JavaParser::IntegerLiteralContext>(0);
}

JavaParser::FloatLiteralContext *JavaParser::LiteralContext::floatLiteral()
{
    return getRuleContext<JavaParser::FloatLiteralContext>(0);
}

tree::TerminalNode *JavaParser::LiteralContext::CHAR_LITERAL()
{
    return getToken(JavaParser::CHAR_LITERAL, 0);
}

tree::TerminalNode *JavaParser::LiteralContext::STRING_LITERAL()
{
    return getToken(JavaParser::STRING_LITERAL, 0);
}

tree::TerminalNode *JavaParser::LiteralContext::BOOL_LITERAL()
{
    return getToken(JavaParser::BOOL_LITERAL, 0);
}

tree::TerminalNode *JavaParser::LiteralContext::NULL_LITERAL()
{
    return getToken(JavaParser::NULL_LITERAL, 0);
}

tree::TerminalNode *JavaParser::LiteralContext::TEXT_BLOCK()
{
    return getToken(JavaParser::TEXT_BLOCK, 0);
}

size_t JavaParser::LiteralContext::getRuleIndex() const
{
    return JavaParser::RuleLiteral;
}

void JavaParser::LiteralContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterLiteral(this);
}

void JavaParser::LiteralContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitLiteral(this);
}

std::any JavaParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitLiteral(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::LiteralContext *JavaParser::literal()
{
    LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
    enterRule(_localctx, 104, JavaParser::RuleLiteral);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(808);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case JavaParser::DECIMAL_LITERAL:
        case JavaParser::HEX_LITERAL:
        case JavaParser::OCT_LITERAL:
        case JavaParser::BINARY_LITERAL: {
            enterOuterAlt(_localctx, 1);
            setState(801);
            integerLiteral();
            break;
        }

        case JavaParser::FLOAT_LITERAL:
        case JavaParser::HEX_FLOAT_LITERAL: {
            enterOuterAlt(_localctx, 2);
            setState(802);
            floatLiteral();
            break;
        }

        case JavaParser::CHAR_LITERAL: {
            enterOuterAlt(_localctx, 3);
            setState(803);
            match(JavaParser::CHAR_LITERAL);
            break;
        }

        case JavaParser::STRING_LITERAL: {
            enterOuterAlt(_localctx, 4);
            setState(804);
            match(JavaParser::STRING_LITERAL);
            break;
        }

        case JavaParser::BOOL_LITERAL: {
            enterOuterAlt(_localctx, 5);
            setState(805);
            match(JavaParser::BOOL_LITERAL);
            break;
        }

        case JavaParser::NULL_LITERAL: {
            enterOuterAlt(_localctx, 6);
            setState(806);
            match(JavaParser::NULL_LITERAL);
            break;
        }

        case JavaParser::TEXT_BLOCK: {
            enterOuterAlt(_localctx, 7);
            setState(807);
            match(JavaParser::TEXT_BLOCK);
            break;
        }

        default:
            throw NoViableAltException(this);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- IntegerLiteralContext ------------------------------------------------------------------

JavaParser::IntegerLiteralContext::IntegerLiteralContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::IntegerLiteralContext::DECIMAL_LITERAL()
{
    return getToken(JavaParser::DECIMAL_LITERAL, 0);
}

tree::TerminalNode *JavaParser::IntegerLiteralContext::HEX_LITERAL()
{
    return getToken(JavaParser::HEX_LITERAL, 0);
}

tree::TerminalNode *JavaParser::IntegerLiteralContext::OCT_LITERAL()
{
    return getToken(JavaParser::OCT_LITERAL, 0);
}

tree::TerminalNode *JavaParser::IntegerLiteralContext::BINARY_LITERAL()
{
    return getToken(JavaParser::BINARY_LITERAL, 0);
}

size_t JavaParser::IntegerLiteralContext::getRuleIndex() const
{
    return JavaParser::RuleIntegerLiteral;
}

void JavaParser::IntegerLiteralContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterIntegerLiteral(this);
}

void JavaParser::IntegerLiteralContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitIntegerLiteral(this);
}

std::any JavaParser::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitIntegerLiteral(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::IntegerLiteralContext *JavaParser::integerLiteral()
{
    IntegerLiteralContext *_localctx = _tracker.createInstance<IntegerLiteralContext>(_ctx, getState());
    enterRule(_localctx, 106, JavaParser::RuleIntegerLiteral);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(810);
        _la = _input->LA(1);
        if (!(((((_la - 67) & ~0x3fULL) == 0) && ((1ULL << (_la - 67)) & 15) != 0))) {
            _errHandler->recoverInline(this);
        } else {
            _errHandler->reportMatch(this);
            consume();
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- FloatLiteralContext ------------------------------------------------------------------

JavaParser::FloatLiteralContext::FloatLiteralContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::FloatLiteralContext::FLOAT_LITERAL()
{
    return getToken(JavaParser::FLOAT_LITERAL, 0);
}

tree::TerminalNode *JavaParser::FloatLiteralContext::HEX_FLOAT_LITERAL()
{
    return getToken(JavaParser::HEX_FLOAT_LITERAL, 0);
}

size_t JavaParser::FloatLiteralContext::getRuleIndex() const
{
    return JavaParser::RuleFloatLiteral;
}

void JavaParser::FloatLiteralContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterFloatLiteral(this);
}

void JavaParser::FloatLiteralContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitFloatLiteral(this);
}

std::any JavaParser::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitFloatLiteral(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::FloatLiteralContext *JavaParser::floatLiteral()
{
    FloatLiteralContext *_localctx = _tracker.createInstance<FloatLiteralContext>(_ctx, getState());
    enterRule(_localctx, 108, JavaParser::RuleFloatLiteral);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(812);
        _la = _input->LA(1);
        if (!(_la == JavaParser::FLOAT_LITERAL

              || _la == JavaParser::HEX_FLOAT_LITERAL)) {
            _errHandler->recoverInline(this);
        } else {
            _errHandler->reportMatch(this);
            consume();
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AltAnnotationQualifiedNameContext ------------------------------------------------------------------

JavaParser::AltAnnotationQualifiedNameContext::AltAnnotationQualifiedNameContext(ParserRuleContext *parent,
                                                                                 size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::AltAnnotationQualifiedNameContext::AT()
{
    return getToken(JavaParser::AT, 0);
}

std::vector<JavaParser::IdentifierContext *> JavaParser::AltAnnotationQualifiedNameContext::identifier()
{
    return getRuleContexts<JavaParser::IdentifierContext>();
}

JavaParser::IdentifierContext *JavaParser::AltAnnotationQualifiedNameContext::identifier(size_t i)
{
    return getRuleContext<JavaParser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::AltAnnotationQualifiedNameContext::DOT()
{
    return getTokens(JavaParser::DOT);
}

tree::TerminalNode *JavaParser::AltAnnotationQualifiedNameContext::DOT(size_t i)
{
    return getToken(JavaParser::DOT, i);
}

size_t JavaParser::AltAnnotationQualifiedNameContext::getRuleIndex() const
{
    return JavaParser::RuleAltAnnotationQualifiedName;
}

void JavaParser::AltAnnotationQualifiedNameContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterAltAnnotationQualifiedName(this);
}

void JavaParser::AltAnnotationQualifiedNameContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitAltAnnotationQualifiedName(this);
}

std::any JavaParser::AltAnnotationQualifiedNameContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitAltAnnotationQualifiedName(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::AltAnnotationQualifiedNameContext *JavaParser::altAnnotationQualifiedName()
{
    AltAnnotationQualifiedNameContext *_localctx =
        _tracker.createInstance<AltAnnotationQualifiedNameContext>(_ctx, getState());
    enterRule(_localctx, 110, JavaParser::RuleAltAnnotationQualifiedName);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(819);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (((((_la - 51) & ~0x3fULL) == 0) && ((1ULL << (_la - 51)) & 32767) != 0)
               || _la == JavaParser::IDENTIFIER) {
            setState(814);
            identifier();
            setState(815);
            match(JavaParser::DOT);
            setState(821);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(822);
        match(JavaParser::AT);
        setState(823);
        identifier();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AnnotationContext ------------------------------------------------------------------

JavaParser::AnnotationContext::AnnotationContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::AnnotationContext::AT()
{
    return getToken(JavaParser::AT, 0);
}

JavaParser::QualifiedNameContext *JavaParser::AnnotationContext::qualifiedName()
{
    return getRuleContext<JavaParser::QualifiedNameContext>(0);
}

JavaParser::AltAnnotationQualifiedNameContext *JavaParser::AnnotationContext::altAnnotationQualifiedName()
{
    return getRuleContext<JavaParser::AltAnnotationQualifiedNameContext>(0);
}

tree::TerminalNode *JavaParser::AnnotationContext::LPAREN()
{
    return getToken(JavaParser::LPAREN, 0);
}

tree::TerminalNode *JavaParser::AnnotationContext::RPAREN()
{
    return getToken(JavaParser::RPAREN, 0);
}

JavaParser::ElementValuePairsContext *JavaParser::AnnotationContext::elementValuePairs()
{
    return getRuleContext<JavaParser::ElementValuePairsContext>(0);
}

JavaParser::ElementValueContext *JavaParser::AnnotationContext::elementValue()
{
    return getRuleContext<JavaParser::ElementValueContext>(0);
}

size_t JavaParser::AnnotationContext::getRuleIndex() const
{
    return JavaParser::RuleAnnotation;
}

void JavaParser::AnnotationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterAnnotation(this);
}

void JavaParser::AnnotationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitAnnotation(this);
}

std::any JavaParser::AnnotationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitAnnotation(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::AnnotationContext *JavaParser::annotation()
{
    AnnotationContext *_localctx = _tracker.createInstance<AnnotationContext>(_ctx, getState());
    enterRule(_localctx, 112, JavaParser::RuleAnnotation);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(828);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx)) {
        case 1: {
            setState(825);
            match(JavaParser::AT);
            setState(826);
            qualifiedName();
            break;
        }

        case 2: {
            setState(827);
            altAnnotationQualifiedName();
            break;
        }

        default:
            break;
        }
        setState(836);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::LPAREN) {
            setState(830);
            match(JavaParser::LPAREN);
            setState(833);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
            case 1: {
                setState(831);
                elementValuePairs();
                break;
            }

            case 2: {
                setState(832);
                elementValue();
                break;
            }

            default:
                break;
            }
            setState(835);
            match(JavaParser::RPAREN);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ElementValuePairsContext ------------------------------------------------------------------

JavaParser::ElementValuePairsContext::ElementValuePairsContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

std::vector<JavaParser::ElementValuePairContext *> JavaParser::ElementValuePairsContext::elementValuePair()
{
    return getRuleContexts<JavaParser::ElementValuePairContext>();
}

JavaParser::ElementValuePairContext *JavaParser::ElementValuePairsContext::elementValuePair(size_t i)
{
    return getRuleContext<JavaParser::ElementValuePairContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::ElementValuePairsContext::COMMA()
{
    return getTokens(JavaParser::COMMA);
}

tree::TerminalNode *JavaParser::ElementValuePairsContext::COMMA(size_t i)
{
    return getToken(JavaParser::COMMA, i);
}

size_t JavaParser::ElementValuePairsContext::getRuleIndex() const
{
    return JavaParser::RuleElementValuePairs;
}

void JavaParser::ElementValuePairsContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterElementValuePairs(this);
}

void JavaParser::ElementValuePairsContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitElementValuePairs(this);
}

std::any JavaParser::ElementValuePairsContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitElementValuePairs(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ElementValuePairsContext *JavaParser::elementValuePairs()
{
    ElementValuePairsContext *_localctx = _tracker.createInstance<ElementValuePairsContext>(_ctx, getState());
    enterRule(_localctx, 114, JavaParser::RuleElementValuePairs);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(838);
        elementValuePair();
        setState(843);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == JavaParser::COMMA) {
            setState(839);
            match(JavaParser::COMMA);
            setState(840);
            elementValuePair();
            setState(845);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ElementValuePairContext ------------------------------------------------------------------

JavaParser::ElementValuePairContext::ElementValuePairContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::IdentifierContext *JavaParser::ElementValuePairContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

tree::TerminalNode *JavaParser::ElementValuePairContext::ASSIGN()
{
    return getToken(JavaParser::ASSIGN, 0);
}

JavaParser::ElementValueContext *JavaParser::ElementValuePairContext::elementValue()
{
    return getRuleContext<JavaParser::ElementValueContext>(0);
}

size_t JavaParser::ElementValuePairContext::getRuleIndex() const
{
    return JavaParser::RuleElementValuePair;
}

void JavaParser::ElementValuePairContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterElementValuePair(this);
}

void JavaParser::ElementValuePairContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitElementValuePair(this);
}

std::any JavaParser::ElementValuePairContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitElementValuePair(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ElementValuePairContext *JavaParser::elementValuePair()
{
    ElementValuePairContext *_localctx = _tracker.createInstance<ElementValuePairContext>(_ctx, getState());
    enterRule(_localctx, 116, JavaParser::RuleElementValuePair);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(846);
        identifier();
        setState(847);
        match(JavaParser::ASSIGN);
        setState(848);
        elementValue();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ElementValueContext ------------------------------------------------------------------

JavaParser::ElementValueContext::ElementValueContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::ExpressionContext *JavaParser::ElementValueContext::expression()
{
    return getRuleContext<JavaParser::ExpressionContext>(0);
}

JavaParser::AnnotationContext *JavaParser::ElementValueContext::annotation()
{
    return getRuleContext<JavaParser::AnnotationContext>(0);
}

JavaParser::ElementValueArrayInitializerContext *JavaParser::ElementValueContext::elementValueArrayInitializer()
{
    return getRuleContext<JavaParser::ElementValueArrayInitializerContext>(0);
}

size_t JavaParser::ElementValueContext::getRuleIndex() const
{
    return JavaParser::RuleElementValue;
}

void JavaParser::ElementValueContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterElementValue(this);
}

void JavaParser::ElementValueContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitElementValue(this);
}

std::any JavaParser::ElementValueContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitElementValue(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ElementValueContext *JavaParser::elementValue()
{
    ElementValueContext *_localctx = _tracker.createInstance<ElementValueContext>(_ctx, getState());
    enterRule(_localctx, 118, JavaParser::RuleElementValue);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(853);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(850);
            expression(0);
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(851);
            annotation();
            break;
        }

        case 3: {
            enterOuterAlt(_localctx, 3);
            setState(852);
            elementValueArrayInitializer();
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ElementValueArrayInitializerContext
//------------------------------------------------------------------

JavaParser::ElementValueArrayInitializerContext::ElementValueArrayInitializerContext(ParserRuleContext *parent,
                                                                                     size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::ElementValueArrayInitializerContext::LBRACE()
{
    return getToken(JavaParser::LBRACE, 0);
}

tree::TerminalNode *JavaParser::ElementValueArrayInitializerContext::RBRACE()
{
    return getToken(JavaParser::RBRACE, 0);
}

std::vector<JavaParser::ElementValueContext *> JavaParser::ElementValueArrayInitializerContext::elementValue()
{
    return getRuleContexts<JavaParser::ElementValueContext>();
}

JavaParser::ElementValueContext *JavaParser::ElementValueArrayInitializerContext::elementValue(size_t i)
{
    return getRuleContext<JavaParser::ElementValueContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::ElementValueArrayInitializerContext::COMMA()
{
    return getTokens(JavaParser::COMMA);
}

tree::TerminalNode *JavaParser::ElementValueArrayInitializerContext::COMMA(size_t i)
{
    return getToken(JavaParser::COMMA, i);
}

size_t JavaParser::ElementValueArrayInitializerContext::getRuleIndex() const
{
    return JavaParser::RuleElementValueArrayInitializer;
}

void JavaParser::ElementValueArrayInitializerContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterElementValueArrayInitializer(this);
}

void JavaParser::ElementValueArrayInitializerContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitElementValueArrayInitializer(this);
}

std::any JavaParser::ElementValueArrayInitializerContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitElementValueArrayInitializer(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ElementValueArrayInitializerContext *JavaParser::elementValueArrayInitializer()
{
    ElementValueArrayInitializerContext *_localctx =
        _tracker.createInstance<ElementValueArrayInitializerContext>(_ctx, getState());
    enterRule(_localctx, 120, JavaParser::RuleElementValueArrayInitializer);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(855);
        match(JavaParser::LBRACE);
        setState(864);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 3) & ~0x3fULL) == 0) && ((1ULL << (_la - 3)) & 9223127275610966053) != 0)
            || ((((_la - 67) & ~0x3fULL) == 0) && ((1ULL << (_la - 67)) & 2377900732130013183) != 0)) {
            setState(856);
            elementValue();
            setState(861);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                    setState(857);
                    match(JavaParser::COMMA);
                    setState(858);
                    elementValue();
                }
                setState(863);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx);
            }
        }
        setState(867);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::COMMA) {
            setState(866);
            match(JavaParser::COMMA);
        }
        setState(869);
        match(JavaParser::RBRACE);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AnnotationTypeDeclarationContext ------------------------------------------------------------------

JavaParser::AnnotationTypeDeclarationContext::AnnotationTypeDeclarationContext(ParserRuleContext *parent,
                                                                               size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::AnnotationTypeDeclarationContext::AT()
{
    return getToken(JavaParser::AT, 0);
}

tree::TerminalNode *JavaParser::AnnotationTypeDeclarationContext::INTERFACE()
{
    return getToken(JavaParser::INTERFACE, 0);
}

JavaParser::IdentifierContext *JavaParser::AnnotationTypeDeclarationContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

JavaParser::AnnotationTypeBodyContext *JavaParser::AnnotationTypeDeclarationContext::annotationTypeBody()
{
    return getRuleContext<JavaParser::AnnotationTypeBodyContext>(0);
}

size_t JavaParser::AnnotationTypeDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleAnnotationTypeDeclaration;
}

void JavaParser::AnnotationTypeDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterAnnotationTypeDeclaration(this);
}

void JavaParser::AnnotationTypeDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitAnnotationTypeDeclaration(this);
}

std::any JavaParser::AnnotationTypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitAnnotationTypeDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::AnnotationTypeDeclarationContext *JavaParser::annotationTypeDeclaration()
{
    AnnotationTypeDeclarationContext *_localctx =
        _tracker.createInstance<AnnotationTypeDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 122, JavaParser::RuleAnnotationTypeDeclaration);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(871);
        match(JavaParser::AT);
        setState(872);
        match(JavaParser::INTERFACE);
        setState(873);
        identifier();
        setState(874);
        annotationTypeBody();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AnnotationTypeBodyContext ------------------------------------------------------------------

JavaParser::AnnotationTypeBodyContext::AnnotationTypeBodyContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::AnnotationTypeBodyContext::LBRACE()
{
    return getToken(JavaParser::LBRACE, 0);
}

tree::TerminalNode *JavaParser::AnnotationTypeBodyContext::RBRACE()
{
    return getToken(JavaParser::RBRACE, 0);
}

std::vector<JavaParser::AnnotationTypeElementDeclarationContext *>
JavaParser::AnnotationTypeBodyContext::annotationTypeElementDeclaration()
{
    return getRuleContexts<JavaParser::AnnotationTypeElementDeclarationContext>();
}

JavaParser::AnnotationTypeElementDeclarationContext *
JavaParser::AnnotationTypeBodyContext::annotationTypeElementDeclaration(size_t i)
{
    return getRuleContext<JavaParser::AnnotationTypeElementDeclarationContext>(i);
}

size_t JavaParser::AnnotationTypeBodyContext::getRuleIndex() const
{
    return JavaParser::RuleAnnotationTypeBody;
}

void JavaParser::AnnotationTypeBodyContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterAnnotationTypeBody(this);
}

void JavaParser::AnnotationTypeBodyContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitAnnotationTypeBody(this);
}

std::any JavaParser::AnnotationTypeBodyContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitAnnotationTypeBody(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::AnnotationTypeBodyContext *JavaParser::annotationTypeBody()
{
    AnnotationTypeBodyContext *_localctx = _tracker.createInstance<AnnotationTypeBodyContext>(_ctx, getState());
    enterRule(_localctx, 124, JavaParser::RuleAnnotationTypeBody);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(876);
        match(JavaParser::LBRACE);
        setState(880);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (((((_la - 1) & ~0x3fULL) == 0) && ((1ULL << (_la - 1)) & -806529426349675) != 0)
               || ((((_la - 65) & ~0x3fULL) == 0) && ((1ULL << (_la - 65)) & -8935141660702539773) != 0)) {
            setState(877);
            annotationTypeElementDeclaration();
            setState(882);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(883);
        match(JavaParser::RBRACE);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AnnotationTypeElementDeclarationContext
//------------------------------------------------------------------

JavaParser::AnnotationTypeElementDeclarationContext::AnnotationTypeElementDeclarationContext(ParserRuleContext *parent,
                                                                                             size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::AnnotationTypeElementRestContext *
JavaParser::AnnotationTypeElementDeclarationContext::annotationTypeElementRest()
{
    return getRuleContext<JavaParser::AnnotationTypeElementRestContext>(0);
}

std::vector<JavaParser::ModifierContext *> JavaParser::AnnotationTypeElementDeclarationContext::modifier()
{
    return getRuleContexts<JavaParser::ModifierContext>();
}

JavaParser::ModifierContext *JavaParser::AnnotationTypeElementDeclarationContext::modifier(size_t i)
{
    return getRuleContext<JavaParser::ModifierContext>(i);
}

tree::TerminalNode *JavaParser::AnnotationTypeElementDeclarationContext::SEMI()
{
    return getToken(JavaParser::SEMI, 0);
}

size_t JavaParser::AnnotationTypeElementDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleAnnotationTypeElementDeclaration;
}

void JavaParser::AnnotationTypeElementDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterAnnotationTypeElementDeclaration(this);
}

void JavaParser::AnnotationTypeElementDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitAnnotationTypeElementDeclaration(this);
}

std::any JavaParser::AnnotationTypeElementDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitAnnotationTypeElementDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::AnnotationTypeElementDeclarationContext *JavaParser::annotationTypeElementDeclaration()
{
    AnnotationTypeElementDeclarationContext *_localctx =
        _tracker.createInstance<AnnotationTypeElementDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 126, JavaParser::RuleAnnotationTypeElementDeclaration);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        setState(893);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case JavaParser::ABSTRACT:
        case JavaParser::BOOLEAN:
        case JavaParser::BYTE:
        case JavaParser::CHAR:
        case JavaParser::CLASS:
        case JavaParser::DOUBLE:
        case JavaParser::ENUM:
        case JavaParser::FINAL:
        case JavaParser::FLOAT:
        case JavaParser::INT:
        case JavaParser::INTERFACE:
        case JavaParser::LONG:
        case JavaParser::NATIVE:
        case JavaParser::PRIVATE:
        case JavaParser::PROTECTED:
        case JavaParser::PUBLIC:
        case JavaParser::SHORT:
        case JavaParser::STATIC:
        case JavaParser::STRICTFP:
        case JavaParser::SYNCHRONIZED:
        case JavaParser::TRANSIENT:
        case JavaParser::VOLATILE:
        case JavaParser::MODULE:
        case JavaParser::OPEN:
        case JavaParser::REQUIRES:
        case JavaParser::EXPORTS:
        case JavaParser::OPENS:
        case JavaParser::TO:
        case JavaParser::USES:
        case JavaParser::PROVIDES:
        case JavaParser::WITH:
        case JavaParser::TRANSITIVE:
        case JavaParser::VAR:
        case JavaParser::YIELD:
        case JavaParser::RECORD:
        case JavaParser::SEALED:
        case JavaParser::PERMITS:
        case JavaParser::NON_SEALED:
        case JavaParser::AT:
        case JavaParser::IDENTIFIER: {
            enterOuterAlt(_localctx, 1);
            setState(888);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                    setState(885);
                    modifier();
                }
                setState(890);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx);
            }
            setState(891);
            annotationTypeElementRest();
            break;
        }

        case JavaParser::SEMI: {
            enterOuterAlt(_localctx, 2);
            setState(892);
            match(JavaParser::SEMI);
            break;
        }

        default:
            throw NoViableAltException(this);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AnnotationTypeElementRestContext ------------------------------------------------------------------

JavaParser::AnnotationTypeElementRestContext::AnnotationTypeElementRestContext(ParserRuleContext *parent,
                                                                               size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::TypeTypeContext *JavaParser::AnnotationTypeElementRestContext::typeType()
{
    return getRuleContext<JavaParser::TypeTypeContext>(0);
}

JavaParser::AnnotationMethodOrConstantRestContext *
JavaParser::AnnotationTypeElementRestContext::annotationMethodOrConstantRest()
{
    return getRuleContext<JavaParser::AnnotationMethodOrConstantRestContext>(0);
}

tree::TerminalNode *JavaParser::AnnotationTypeElementRestContext::SEMI()
{
    return getToken(JavaParser::SEMI, 0);
}

JavaParser::ClassDeclarationContext *JavaParser::AnnotationTypeElementRestContext::classDeclaration()
{
    return getRuleContext<JavaParser::ClassDeclarationContext>(0);
}

JavaParser::InterfaceDeclarationContext *JavaParser::AnnotationTypeElementRestContext::interfaceDeclaration()
{
    return getRuleContext<JavaParser::InterfaceDeclarationContext>(0);
}

JavaParser::EnumDeclarationContext *JavaParser::AnnotationTypeElementRestContext::enumDeclaration()
{
    return getRuleContext<JavaParser::EnumDeclarationContext>(0);
}

JavaParser::AnnotationTypeDeclarationContext *JavaParser::AnnotationTypeElementRestContext::annotationTypeDeclaration()
{
    return getRuleContext<JavaParser::AnnotationTypeDeclarationContext>(0);
}

JavaParser::RecordDeclarationContext *JavaParser::AnnotationTypeElementRestContext::recordDeclaration()
{
    return getRuleContext<JavaParser::RecordDeclarationContext>(0);
}

size_t JavaParser::AnnotationTypeElementRestContext::getRuleIndex() const
{
    return JavaParser::RuleAnnotationTypeElementRest;
}

void JavaParser::AnnotationTypeElementRestContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterAnnotationTypeElementRest(this);
}

void JavaParser::AnnotationTypeElementRestContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitAnnotationTypeElementRest(this);
}

std::any JavaParser::AnnotationTypeElementRestContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitAnnotationTypeElementRest(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::AnnotationTypeElementRestContext *JavaParser::annotationTypeElementRest()
{
    AnnotationTypeElementRestContext *_localctx =
        _tracker.createInstance<AnnotationTypeElementRestContext>(_ctx, getState());
    enterRule(_localctx, 128, JavaParser::RuleAnnotationTypeElementRest);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(919);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(895);
            typeType();
            setState(896);
            annotationMethodOrConstantRest();
            setState(897);
            match(JavaParser::SEMI);
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(899);
            classDeclaration();
            setState(901);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx)) {
            case 1: {
                setState(900);
                match(JavaParser::SEMI);
                break;
            }

            default:
                break;
            }
            break;
        }

        case 3: {
            enterOuterAlt(_localctx, 3);
            setState(903);
            interfaceDeclaration();
            setState(905);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx)) {
            case 1: {
                setState(904);
                match(JavaParser::SEMI);
                break;
            }

            default:
                break;
            }
            break;
        }

        case 4: {
            enterOuterAlt(_localctx, 4);
            setState(907);
            enumDeclaration();
            setState(909);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx)) {
            case 1: {
                setState(908);
                match(JavaParser::SEMI);
                break;
            }

            default:
                break;
            }
            break;
        }

        case 5: {
            enterOuterAlt(_localctx, 5);
            setState(911);
            annotationTypeDeclaration();
            setState(913);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
            case 1: {
                setState(912);
                match(JavaParser::SEMI);
                break;
            }

            default:
                break;
            }
            break;
        }

        case 6: {
            enterOuterAlt(_localctx, 6);
            setState(915);
            recordDeclaration();
            setState(917);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 103, _ctx)) {
            case 1: {
                setState(916);
                match(JavaParser::SEMI);
                break;
            }

            default:
                break;
            }
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AnnotationMethodOrConstantRestContext
//------------------------------------------------------------------

JavaParser::AnnotationMethodOrConstantRestContext::AnnotationMethodOrConstantRestContext(ParserRuleContext *parent,
                                                                                         size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::AnnotationMethodRestContext *JavaParser::AnnotationMethodOrConstantRestContext::annotationMethodRest()
{
    return getRuleContext<JavaParser::AnnotationMethodRestContext>(0);
}

JavaParser::AnnotationConstantRestContext *JavaParser::AnnotationMethodOrConstantRestContext::annotationConstantRest()
{
    return getRuleContext<JavaParser::AnnotationConstantRestContext>(0);
}

size_t JavaParser::AnnotationMethodOrConstantRestContext::getRuleIndex() const
{
    return JavaParser::RuleAnnotationMethodOrConstantRest;
}

void JavaParser::AnnotationMethodOrConstantRestContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterAnnotationMethodOrConstantRest(this);
}

void JavaParser::AnnotationMethodOrConstantRestContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitAnnotationMethodOrConstantRest(this);
}

std::any JavaParser::AnnotationMethodOrConstantRestContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitAnnotationMethodOrConstantRest(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::AnnotationMethodOrConstantRestContext *JavaParser::annotationMethodOrConstantRest()
{
    AnnotationMethodOrConstantRestContext *_localctx =
        _tracker.createInstance<AnnotationMethodOrConstantRestContext>(_ctx, getState());
    enterRule(_localctx, 130, JavaParser::RuleAnnotationMethodOrConstantRest);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(923);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(921);
            annotationMethodRest();
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(922);
            annotationConstantRest();
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AnnotationMethodRestContext ------------------------------------------------------------------

JavaParser::AnnotationMethodRestContext::AnnotationMethodRestContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::IdentifierContext *JavaParser::AnnotationMethodRestContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

tree::TerminalNode *JavaParser::AnnotationMethodRestContext::LPAREN()
{
    return getToken(JavaParser::LPAREN, 0);
}

tree::TerminalNode *JavaParser::AnnotationMethodRestContext::RPAREN()
{
    return getToken(JavaParser::RPAREN, 0);
}

JavaParser::DefaultValueContext *JavaParser::AnnotationMethodRestContext::defaultValue()
{
    return getRuleContext<JavaParser::DefaultValueContext>(0);
}

size_t JavaParser::AnnotationMethodRestContext::getRuleIndex() const
{
    return JavaParser::RuleAnnotationMethodRest;
}

void JavaParser::AnnotationMethodRestContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterAnnotationMethodRest(this);
}

void JavaParser::AnnotationMethodRestContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitAnnotationMethodRest(this);
}

std::any JavaParser::AnnotationMethodRestContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitAnnotationMethodRest(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::AnnotationMethodRestContext *JavaParser::annotationMethodRest()
{
    AnnotationMethodRestContext *_localctx = _tracker.createInstance<AnnotationMethodRestContext>(_ctx, getState());
    enterRule(_localctx, 132, JavaParser::RuleAnnotationMethodRest);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(925);
        identifier();
        setState(926);
        match(JavaParser::LPAREN);
        setState(927);
        match(JavaParser::RPAREN);
        setState(929);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::DEFAULT) {
            setState(928);
            defaultValue();
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- AnnotationConstantRestContext ------------------------------------------------------------------

JavaParser::AnnotationConstantRestContext::AnnotationConstantRestContext(ParserRuleContext *parent,
                                                                         size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::VariableDeclaratorsContext *JavaParser::AnnotationConstantRestContext::variableDeclarators()
{
    return getRuleContext<JavaParser::VariableDeclaratorsContext>(0);
}

size_t JavaParser::AnnotationConstantRestContext::getRuleIndex() const
{
    return JavaParser::RuleAnnotationConstantRest;
}

void JavaParser::AnnotationConstantRestContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterAnnotationConstantRest(this);
}

void JavaParser::AnnotationConstantRestContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitAnnotationConstantRest(this);
}

std::any JavaParser::AnnotationConstantRestContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitAnnotationConstantRest(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::AnnotationConstantRestContext *JavaParser::annotationConstantRest()
{
    AnnotationConstantRestContext *_localctx = _tracker.createInstance<AnnotationConstantRestContext>(_ctx, getState());
    enterRule(_localctx, 134, JavaParser::RuleAnnotationConstantRest);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(931);
        variableDeclarators();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- DefaultValueContext ------------------------------------------------------------------

JavaParser::DefaultValueContext::DefaultValueContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::DefaultValueContext::DEFAULT()
{
    return getToken(JavaParser::DEFAULT, 0);
}

JavaParser::ElementValueContext *JavaParser::DefaultValueContext::elementValue()
{
    return getRuleContext<JavaParser::ElementValueContext>(0);
}

size_t JavaParser::DefaultValueContext::getRuleIndex() const
{
    return JavaParser::RuleDefaultValue;
}

void JavaParser::DefaultValueContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterDefaultValue(this);
}

void JavaParser::DefaultValueContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitDefaultValue(this);
}

std::any JavaParser::DefaultValueContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitDefaultValue(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::DefaultValueContext *JavaParser::defaultValue()
{
    DefaultValueContext *_localctx = _tracker.createInstance<DefaultValueContext>(_ctx, getState());
    enterRule(_localctx, 136, JavaParser::RuleDefaultValue);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(933);
        match(JavaParser::DEFAULT);
        setState(934);
        elementValue();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ModuleDeclarationContext ------------------------------------------------------------------

JavaParser::ModuleDeclarationContext::ModuleDeclarationContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::ModuleDeclarationContext::MODULE()
{
    return getToken(JavaParser::MODULE, 0);
}

JavaParser::QualifiedNameContext *JavaParser::ModuleDeclarationContext::qualifiedName()
{
    return getRuleContext<JavaParser::QualifiedNameContext>(0);
}

JavaParser::ModuleBodyContext *JavaParser::ModuleDeclarationContext::moduleBody()
{
    return getRuleContext<JavaParser::ModuleBodyContext>(0);
}

tree::TerminalNode *JavaParser::ModuleDeclarationContext::OPEN()
{
    return getToken(JavaParser::OPEN, 0);
}

size_t JavaParser::ModuleDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleModuleDeclaration;
}

void JavaParser::ModuleDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterModuleDeclaration(this);
}

void JavaParser::ModuleDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitModuleDeclaration(this);
}

std::any JavaParser::ModuleDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitModuleDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ModuleDeclarationContext *JavaParser::moduleDeclaration()
{
    ModuleDeclarationContext *_localctx = _tracker.createInstance<ModuleDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 138, JavaParser::RuleModuleDeclaration);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(937);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::OPEN) {
            setState(936);
            match(JavaParser::OPEN);
        }
        setState(939);
        match(JavaParser::MODULE);
        setState(940);
        qualifiedName();
        setState(941);
        moduleBody();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ModuleBodyContext ------------------------------------------------------------------

JavaParser::ModuleBodyContext::ModuleBodyContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::ModuleBodyContext::LBRACE()
{
    return getToken(JavaParser::LBRACE, 0);
}

tree::TerminalNode *JavaParser::ModuleBodyContext::RBRACE()
{
    return getToken(JavaParser::RBRACE, 0);
}

std::vector<JavaParser::ModuleDirectiveContext *> JavaParser::ModuleBodyContext::moduleDirective()
{
    return getRuleContexts<JavaParser::ModuleDirectiveContext>();
}

JavaParser::ModuleDirectiveContext *JavaParser::ModuleBodyContext::moduleDirective(size_t i)
{
    return getRuleContext<JavaParser::ModuleDirectiveContext>(i);
}

size_t JavaParser::ModuleBodyContext::getRuleIndex() const
{
    return JavaParser::RuleModuleBody;
}

void JavaParser::ModuleBodyContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterModuleBody(this);
}

void JavaParser::ModuleBodyContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitModuleBody(this);
}

std::any JavaParser::ModuleBodyContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitModuleBody(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ModuleBodyContext *JavaParser::moduleBody()
{
    ModuleBodyContext *_localctx = _tracker.createInstance<ModuleBodyContext>(_ctx, getState());
    enterRule(_localctx, 140, JavaParser::RuleModuleBody);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(943);
        match(JavaParser::LBRACE);
        setState(947);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & 495395959010754560) != 0)) {
            setState(944);
            moduleDirective();
            setState(949);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(950);
        match(JavaParser::RBRACE);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ModuleDirectiveContext ------------------------------------------------------------------

JavaParser::ModuleDirectiveContext::ModuleDirectiveContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::ModuleDirectiveContext::REQUIRES()
{
    return getToken(JavaParser::REQUIRES, 0);
}

std::vector<JavaParser::QualifiedNameContext *> JavaParser::ModuleDirectiveContext::qualifiedName()
{
    return getRuleContexts<JavaParser::QualifiedNameContext>();
}

JavaParser::QualifiedNameContext *JavaParser::ModuleDirectiveContext::qualifiedName(size_t i)
{
    return getRuleContext<JavaParser::QualifiedNameContext>(i);
}

tree::TerminalNode *JavaParser::ModuleDirectiveContext::SEMI()
{
    return getToken(JavaParser::SEMI, 0);
}

std::vector<JavaParser::RequiresModifierContext *> JavaParser::ModuleDirectiveContext::requiresModifier()
{
    return getRuleContexts<JavaParser::RequiresModifierContext>();
}

JavaParser::RequiresModifierContext *JavaParser::ModuleDirectiveContext::requiresModifier(size_t i)
{
    return getRuleContext<JavaParser::RequiresModifierContext>(i);
}

tree::TerminalNode *JavaParser::ModuleDirectiveContext::EXPORTS()
{
    return getToken(JavaParser::EXPORTS, 0);
}

tree::TerminalNode *JavaParser::ModuleDirectiveContext::TO()
{
    return getToken(JavaParser::TO, 0);
}

tree::TerminalNode *JavaParser::ModuleDirectiveContext::OPENS()
{
    return getToken(JavaParser::OPENS, 0);
}

tree::TerminalNode *JavaParser::ModuleDirectiveContext::USES()
{
    return getToken(JavaParser::USES, 0);
}

tree::TerminalNode *JavaParser::ModuleDirectiveContext::PROVIDES()
{
    return getToken(JavaParser::PROVIDES, 0);
}

tree::TerminalNode *JavaParser::ModuleDirectiveContext::WITH()
{
    return getToken(JavaParser::WITH, 0);
}

size_t JavaParser::ModuleDirectiveContext::getRuleIndex() const
{
    return JavaParser::RuleModuleDirective;
}

void JavaParser::ModuleDirectiveContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterModuleDirective(this);
}

void JavaParser::ModuleDirectiveContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitModuleDirective(this);
}

std::any JavaParser::ModuleDirectiveContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitModuleDirective(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ModuleDirectiveContext *JavaParser::moduleDirective()
{
    ModuleDirectiveContext *_localctx = _tracker.createInstance<ModuleDirectiveContext>(_ctx, getState());
    enterRule(_localctx, 142, JavaParser::RuleModuleDirective);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        setState(988);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case JavaParser::REQUIRES: {
            enterOuterAlt(_localctx, 1);
            setState(952);
            match(JavaParser::REQUIRES);
            setState(956);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 109, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                    setState(953);
                    requiresModifier();
                }
                setState(958);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 109, _ctx);
            }
            setState(959);
            qualifiedName();
            setState(960);
            match(JavaParser::SEMI);
            break;
        }

        case JavaParser::EXPORTS: {
            enterOuterAlt(_localctx, 2);
            setState(962);
            match(JavaParser::EXPORTS);
            setState(963);
            qualifiedName();
            setState(966);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == JavaParser::TO) {
                setState(964);
                match(JavaParser::TO);
                setState(965);
                qualifiedName();
            }
            setState(968);
            match(JavaParser::SEMI);
            break;
        }

        case JavaParser::OPENS: {
            enterOuterAlt(_localctx, 3);
            setState(970);
            match(JavaParser::OPENS);
            setState(971);
            qualifiedName();
            setState(974);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == JavaParser::TO) {
                setState(972);
                match(JavaParser::TO);
                setState(973);
                qualifiedName();
            }
            setState(976);
            match(JavaParser::SEMI);
            break;
        }

        case JavaParser::USES: {
            enterOuterAlt(_localctx, 4);
            setState(978);
            match(JavaParser::USES);
            setState(979);
            qualifiedName();
            setState(980);
            match(JavaParser::SEMI);
            break;
        }

        case JavaParser::PROVIDES: {
            enterOuterAlt(_localctx, 5);
            setState(982);
            match(JavaParser::PROVIDES);
            setState(983);
            qualifiedName();
            setState(984);
            match(JavaParser::WITH);
            setState(985);
            qualifiedName();
            setState(986);
            match(JavaParser::SEMI);
            break;
        }

        default:
            throw NoViableAltException(this);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- RequiresModifierContext ------------------------------------------------------------------

JavaParser::RequiresModifierContext::RequiresModifierContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::RequiresModifierContext::TRANSITIVE()
{
    return getToken(JavaParser::TRANSITIVE, 0);
}

tree::TerminalNode *JavaParser::RequiresModifierContext::STATIC()
{
    return getToken(JavaParser::STATIC, 0);
}

size_t JavaParser::RequiresModifierContext::getRuleIndex() const
{
    return JavaParser::RuleRequiresModifier;
}

void JavaParser::RequiresModifierContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterRequiresModifier(this);
}

void JavaParser::RequiresModifierContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitRequiresModifier(this);
}

std::any JavaParser::RequiresModifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitRequiresModifier(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::RequiresModifierContext *JavaParser::requiresModifier()
{
    RequiresModifierContext *_localctx = _tracker.createInstance<RequiresModifierContext>(_ctx, getState());
    enterRule(_localctx, 144, JavaParser::RuleRequiresModifier);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(990);
        _la = _input->LA(1);
        if (!(_la == JavaParser::STATIC

              || _la == JavaParser::TRANSITIVE)) {
            _errHandler->recoverInline(this);
        } else {
            _errHandler->reportMatch(this);
            consume();
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- RecordDeclarationContext ------------------------------------------------------------------

JavaParser::RecordDeclarationContext::RecordDeclarationContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::RecordDeclarationContext::RECORD()
{
    return getToken(JavaParser::RECORD, 0);
}

JavaParser::IdentifierContext *JavaParser::RecordDeclarationContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

JavaParser::RecordHeaderContext *JavaParser::RecordDeclarationContext::recordHeader()
{
    return getRuleContext<JavaParser::RecordHeaderContext>(0);
}

JavaParser::RecordBodyContext *JavaParser::RecordDeclarationContext::recordBody()
{
    return getRuleContext<JavaParser::RecordBodyContext>(0);
}

JavaParser::TypeParametersContext *JavaParser::RecordDeclarationContext::typeParameters()
{
    return getRuleContext<JavaParser::TypeParametersContext>(0);
}

tree::TerminalNode *JavaParser::RecordDeclarationContext::IMPLEMENTS()
{
    return getToken(JavaParser::IMPLEMENTS, 0);
}

JavaParser::TypeListContext *JavaParser::RecordDeclarationContext::typeList()
{
    return getRuleContext<JavaParser::TypeListContext>(0);
}

size_t JavaParser::RecordDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleRecordDeclaration;
}

void JavaParser::RecordDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterRecordDeclaration(this);
}

void JavaParser::RecordDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitRecordDeclaration(this);
}

std::any JavaParser::RecordDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitRecordDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::RecordDeclarationContext *JavaParser::recordDeclaration()
{
    RecordDeclarationContext *_localctx = _tracker.createInstance<RecordDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 146, JavaParser::RuleRecordDeclaration);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(992);
        match(JavaParser::RECORD);
        setState(993);
        identifier();
        setState(995);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::LT) {
            setState(994);
            typeParameters();
        }
        setState(997);
        recordHeader();
        setState(1000);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::IMPLEMENTS) {
            setState(998);
            match(JavaParser::IMPLEMENTS);
            setState(999);
            typeList();
        }
        setState(1002);
        recordBody();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- RecordHeaderContext ------------------------------------------------------------------

JavaParser::RecordHeaderContext::RecordHeaderContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::RecordHeaderContext::LPAREN()
{
    return getToken(JavaParser::LPAREN, 0);
}

tree::TerminalNode *JavaParser::RecordHeaderContext::RPAREN()
{
    return getToken(JavaParser::RPAREN, 0);
}

JavaParser::RecordComponentListContext *JavaParser::RecordHeaderContext::recordComponentList()
{
    return getRuleContext<JavaParser::RecordComponentListContext>(0);
}

size_t JavaParser::RecordHeaderContext::getRuleIndex() const
{
    return JavaParser::RuleRecordHeader;
}

void JavaParser::RecordHeaderContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterRecordHeader(this);
}

void JavaParser::RecordHeaderContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitRecordHeader(this);
}

std::any JavaParser::RecordHeaderContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitRecordHeader(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::RecordHeaderContext *JavaParser::recordHeader()
{
    RecordHeaderContext *_localctx = _tracker.createInstance<RecordHeaderContext>(_ctx, getState());
    enterRule(_localctx, 148, JavaParser::RuleRecordHeader);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1004);
        match(JavaParser::LPAREN);
        setState(1006);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 3) & ~0x3fULL) == 0) && ((1ULL << (_la - 3)) & 9223090579141953573) != 0) || _la == JavaParser::AT

            || _la == JavaParser::IDENTIFIER) {
            setState(1005);
            recordComponentList();
        }
        setState(1008);
        match(JavaParser::RPAREN);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- RecordComponentListContext ------------------------------------------------------------------

JavaParser::RecordComponentListContext::RecordComponentListContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

std::vector<JavaParser::RecordComponentContext *> JavaParser::RecordComponentListContext::recordComponent()
{
    return getRuleContexts<JavaParser::RecordComponentContext>();
}

JavaParser::RecordComponentContext *JavaParser::RecordComponentListContext::recordComponent(size_t i)
{
    return getRuleContext<JavaParser::RecordComponentContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::RecordComponentListContext::COMMA()
{
    return getTokens(JavaParser::COMMA);
}

tree::TerminalNode *JavaParser::RecordComponentListContext::COMMA(size_t i)
{
    return getToken(JavaParser::COMMA, i);
}

size_t JavaParser::RecordComponentListContext::getRuleIndex() const
{
    return JavaParser::RuleRecordComponentList;
}

void JavaParser::RecordComponentListContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterRecordComponentList(this);
}

void JavaParser::RecordComponentListContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitRecordComponentList(this);
}

std::any JavaParser::RecordComponentListContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitRecordComponentList(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::RecordComponentListContext *JavaParser::recordComponentList()
{
    RecordComponentListContext *_localctx = _tracker.createInstance<RecordComponentListContext>(_ctx, getState());
    enterRule(_localctx, 150, JavaParser::RuleRecordComponentList);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1010);
        recordComponent();
        setState(1015);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == JavaParser::COMMA) {
            setState(1011);
            match(JavaParser::COMMA);
            setState(1012);
            recordComponent();
            setState(1017);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- RecordComponentContext ------------------------------------------------------------------

JavaParser::RecordComponentContext::RecordComponentContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::TypeTypeContext *JavaParser::RecordComponentContext::typeType()
{
    return getRuleContext<JavaParser::TypeTypeContext>(0);
}

JavaParser::IdentifierContext *JavaParser::RecordComponentContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

size_t JavaParser::RecordComponentContext::getRuleIndex() const
{
    return JavaParser::RuleRecordComponent;
}

void JavaParser::RecordComponentContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterRecordComponent(this);
}

void JavaParser::RecordComponentContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitRecordComponent(this);
}

std::any JavaParser::RecordComponentContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitRecordComponent(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::RecordComponentContext *JavaParser::recordComponent()
{
    RecordComponentContext *_localctx = _tracker.createInstance<RecordComponentContext>(_ctx, getState());
    enterRule(_localctx, 152, JavaParser::RuleRecordComponent);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1018);
        typeType();
        setState(1019);
        identifier();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- RecordBodyContext ------------------------------------------------------------------

JavaParser::RecordBodyContext::RecordBodyContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::RecordBodyContext::LBRACE()
{
    return getToken(JavaParser::LBRACE, 0);
}

tree::TerminalNode *JavaParser::RecordBodyContext::RBRACE()
{
    return getToken(JavaParser::RBRACE, 0);
}

std::vector<JavaParser::ClassBodyDeclarationContext *> JavaParser::RecordBodyContext::classBodyDeclaration()
{
    return getRuleContexts<JavaParser::ClassBodyDeclarationContext>();
}

JavaParser::ClassBodyDeclarationContext *JavaParser::RecordBodyContext::classBodyDeclaration(size_t i)
{
    return getRuleContext<JavaParser::ClassBodyDeclarationContext>(i);
}

std::vector<JavaParser::CompactConstructorDeclarationContext *>
JavaParser::RecordBodyContext::compactConstructorDeclaration()
{
    return getRuleContexts<JavaParser::CompactConstructorDeclarationContext>();
}

JavaParser::CompactConstructorDeclarationContext *JavaParser::RecordBodyContext::compactConstructorDeclaration(size_t i)
{
    return getRuleContext<JavaParser::CompactConstructorDeclarationContext>(i);
}

size_t JavaParser::RecordBodyContext::getRuleIndex() const
{
    return JavaParser::RuleRecordBody;
}

void JavaParser::RecordBodyContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterRecordBody(this);
}

void JavaParser::RecordBodyContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitRecordBody(this);
}

std::any JavaParser::RecordBodyContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitRecordBody(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::RecordBodyContext *JavaParser::recordBody()
{
    RecordBodyContext *_localctx = _tracker.createInstance<RecordBodyContext>(_ctx, getState());
    enterRule(_localctx, 154, JavaParser::RuleRecordBody);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1021);
        match(JavaParser::LBRACE);
        setState(1026);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (((((_la - 1) & ~0x3fULL) == 0) && ((1ULL << (_la - 1)) & -665791937994347) != 0)
               || ((((_la - 65) & ~0x3fULL) == 0) && ((1ULL << (_la - 65)) & -8935141660685729789) != 0)) {
            setState(1024);
            _errHandler->sync(this);
            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx)) {
            case 1: {
                setState(1022);
                classBodyDeclaration();
                break;
            }

            case 2: {
                setState(1023);
                compactConstructorDeclaration();
                break;
            }

            default:
                break;
            }
            setState(1028);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(1029);
        match(JavaParser::RBRACE);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

JavaParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::BlockContext::LBRACE()
{
    return getToken(JavaParser::LBRACE, 0);
}

tree::TerminalNode *JavaParser::BlockContext::RBRACE()
{
    return getToken(JavaParser::RBRACE, 0);
}

std::vector<JavaParser::BlockStatementContext *> JavaParser::BlockContext::blockStatement()
{
    return getRuleContexts<JavaParser::BlockStatementContext>();
}

JavaParser::BlockStatementContext *JavaParser::BlockContext::blockStatement(size_t i)
{
    return getRuleContext<JavaParser::BlockStatementContext>(i);
}

size_t JavaParser::BlockContext::getRuleIndex() const
{
    return JavaParser::RuleBlock;
}

void JavaParser::BlockContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterBlock(this);
}

void JavaParser::BlockContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitBlock(this);
}

std::any JavaParser::BlockContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitBlock(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::BlockContext *JavaParser::block()
{
    BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
    enterRule(_localctx, 156, JavaParser::RuleBlock);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1031);
        match(JavaParser::LBRACE);
        setState(1035);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (((((_la - 1) & ~0x3fULL) == 0) && ((1ULL << (_la - 1)) & -334254282492513) != 0)
               || ((((_la - 65) & ~0x3fULL) == 0) && ((1ULL << (_la - 65)) & -8935141145188974593) != 0)) {
            setState(1032);
            blockStatement();
            setState(1037);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(1038);
        match(JavaParser::RBRACE);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- BlockStatementContext ------------------------------------------------------------------

JavaParser::BlockStatementContext::BlockStatementContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::LocalVariableDeclarationContext *JavaParser::BlockStatementContext::localVariableDeclaration()
{
    return getRuleContext<JavaParser::LocalVariableDeclarationContext>(0);
}

tree::TerminalNode *JavaParser::BlockStatementContext::SEMI()
{
    return getToken(JavaParser::SEMI, 0);
}

JavaParser::LocalTypeDeclarationContext *JavaParser::BlockStatementContext::localTypeDeclaration()
{
    return getRuleContext<JavaParser::LocalTypeDeclarationContext>(0);
}

JavaParser::StatementContext *JavaParser::BlockStatementContext::statement()
{
    return getRuleContext<JavaParser::StatementContext>(0);
}

size_t JavaParser::BlockStatementContext::getRuleIndex() const
{
    return JavaParser::RuleBlockStatement;
}

void JavaParser::BlockStatementContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterBlockStatement(this);
}

void JavaParser::BlockStatementContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitBlockStatement(this);
}

std::any JavaParser::BlockStatementContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitBlockStatement(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::BlockStatementContext *JavaParser::blockStatement()
{
    BlockStatementContext *_localctx = _tracker.createInstance<BlockStatementContext>(_ctx, getState());
    enterRule(_localctx, 158, JavaParser::RuleBlockStatement);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(1045);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(1040);
            localVariableDeclaration();
            setState(1041);
            match(JavaParser::SEMI);
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(1043);
            localTypeDeclaration();
            break;
        }

        case 3: {
            enterOuterAlt(_localctx, 3);
            setState(1044);
            statement();
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- LocalVariableDeclarationContext ------------------------------------------------------------------

JavaParser::LocalVariableDeclarationContext::LocalVariableDeclarationContext(ParserRuleContext *parent,
                                                                             size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::LocalVariableDeclarationContext::VAR()
{
    return getToken(JavaParser::VAR, 0);
}

JavaParser::IdentifierContext *JavaParser::LocalVariableDeclarationContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

tree::TerminalNode *JavaParser::LocalVariableDeclarationContext::ASSIGN()
{
    return getToken(JavaParser::ASSIGN, 0);
}

JavaParser::ExpressionContext *JavaParser::LocalVariableDeclarationContext::expression()
{
    return getRuleContext<JavaParser::ExpressionContext>(0);
}

JavaParser::TypeTypeContext *JavaParser::LocalVariableDeclarationContext::typeType()
{
    return getRuleContext<JavaParser::TypeTypeContext>(0);
}

JavaParser::VariableDeclaratorsContext *JavaParser::LocalVariableDeclarationContext::variableDeclarators()
{
    return getRuleContext<JavaParser::VariableDeclaratorsContext>(0);
}

std::vector<JavaParser::VariableModifierContext *> JavaParser::LocalVariableDeclarationContext::variableModifier()
{
    return getRuleContexts<JavaParser::VariableModifierContext>();
}

JavaParser::VariableModifierContext *JavaParser::LocalVariableDeclarationContext::variableModifier(size_t i)
{
    return getRuleContext<JavaParser::VariableModifierContext>(i);
}

size_t JavaParser::LocalVariableDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleLocalVariableDeclaration;
}

void JavaParser::LocalVariableDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterLocalVariableDeclaration(this);
}

void JavaParser::LocalVariableDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitLocalVariableDeclaration(this);
}

std::any JavaParser::LocalVariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitLocalVariableDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::LocalVariableDeclarationContext *JavaParser::localVariableDeclaration()
{
    LocalVariableDeclarationContext *_localctx =
        _tracker.createInstance<LocalVariableDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 160, JavaParser::RuleLocalVariableDeclaration);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1050);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 121, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(1047);
                variableModifier();
            }
            setState(1052);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 121, _ctx);
        }
        setState(1061);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, _ctx)) {
        case 1: {
            setState(1053);
            match(JavaParser::VAR);
            setState(1054);
            identifier();
            setState(1055);
            match(JavaParser::ASSIGN);
            setState(1056);
            expression(0);
            break;
        }

        case 2: {
            setState(1058);
            typeType();
            setState(1059);
            variableDeclarators();
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

JavaParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::IdentifierContext::IDENTIFIER()
{
    return getToken(JavaParser::IDENTIFIER, 0);
}

tree::TerminalNode *JavaParser::IdentifierContext::MODULE()
{
    return getToken(JavaParser::MODULE, 0);
}

tree::TerminalNode *JavaParser::IdentifierContext::OPEN()
{
    return getToken(JavaParser::OPEN, 0);
}

tree::TerminalNode *JavaParser::IdentifierContext::REQUIRES()
{
    return getToken(JavaParser::REQUIRES, 0);
}

tree::TerminalNode *JavaParser::IdentifierContext::EXPORTS()
{
    return getToken(JavaParser::EXPORTS, 0);
}

tree::TerminalNode *JavaParser::IdentifierContext::OPENS()
{
    return getToken(JavaParser::OPENS, 0);
}

tree::TerminalNode *JavaParser::IdentifierContext::TO()
{
    return getToken(JavaParser::TO, 0);
}

tree::TerminalNode *JavaParser::IdentifierContext::USES()
{
    return getToken(JavaParser::USES, 0);
}

tree::TerminalNode *JavaParser::IdentifierContext::PROVIDES()
{
    return getToken(JavaParser::PROVIDES, 0);
}

tree::TerminalNode *JavaParser::IdentifierContext::WITH()
{
    return getToken(JavaParser::WITH, 0);
}

tree::TerminalNode *JavaParser::IdentifierContext::TRANSITIVE()
{
    return getToken(JavaParser::TRANSITIVE, 0);
}

tree::TerminalNode *JavaParser::IdentifierContext::YIELD()
{
    return getToken(JavaParser::YIELD, 0);
}

tree::TerminalNode *JavaParser::IdentifierContext::SEALED()
{
    return getToken(JavaParser::SEALED, 0);
}

tree::TerminalNode *JavaParser::IdentifierContext::PERMITS()
{
    return getToken(JavaParser::PERMITS, 0);
}

tree::TerminalNode *JavaParser::IdentifierContext::RECORD()
{
    return getToken(JavaParser::RECORD, 0);
}

tree::TerminalNode *JavaParser::IdentifierContext::VAR()
{
    return getToken(JavaParser::VAR, 0);
}

size_t JavaParser::IdentifierContext::getRuleIndex() const
{
    return JavaParser::RuleIdentifier;
}

void JavaParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterIdentifier(this);
}

void JavaParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitIdentifier(this);
}

std::any JavaParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitIdentifier(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::IdentifierContext *JavaParser::identifier()
{
    IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
    enterRule(_localctx, 162, JavaParser::RuleIdentifier);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1063);
        _la = _input->LA(1);
        if (!(((((_la - 51) & ~0x3fULL) == 0) && ((1ULL << (_la - 51)) & 32767) != 0)
              || _la == JavaParser::IDENTIFIER)) {
            _errHandler->recoverInline(this);
        } else {
            _errHandler->reportMatch(this);
            consume();
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TypeIdentifierContext ------------------------------------------------------------------

JavaParser::TypeIdentifierContext::TypeIdentifierContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::TypeIdentifierContext::IDENTIFIER()
{
    return getToken(JavaParser::IDENTIFIER, 0);
}

tree::TerminalNode *JavaParser::TypeIdentifierContext::MODULE()
{
    return getToken(JavaParser::MODULE, 0);
}

tree::TerminalNode *JavaParser::TypeIdentifierContext::OPEN()
{
    return getToken(JavaParser::OPEN, 0);
}

tree::TerminalNode *JavaParser::TypeIdentifierContext::REQUIRES()
{
    return getToken(JavaParser::REQUIRES, 0);
}

tree::TerminalNode *JavaParser::TypeIdentifierContext::EXPORTS()
{
    return getToken(JavaParser::EXPORTS, 0);
}

tree::TerminalNode *JavaParser::TypeIdentifierContext::OPENS()
{
    return getToken(JavaParser::OPENS, 0);
}

tree::TerminalNode *JavaParser::TypeIdentifierContext::TO()
{
    return getToken(JavaParser::TO, 0);
}

tree::TerminalNode *JavaParser::TypeIdentifierContext::USES()
{
    return getToken(JavaParser::USES, 0);
}

tree::TerminalNode *JavaParser::TypeIdentifierContext::PROVIDES()
{
    return getToken(JavaParser::PROVIDES, 0);
}

tree::TerminalNode *JavaParser::TypeIdentifierContext::WITH()
{
    return getToken(JavaParser::WITH, 0);
}

tree::TerminalNode *JavaParser::TypeIdentifierContext::TRANSITIVE()
{
    return getToken(JavaParser::TRANSITIVE, 0);
}

tree::TerminalNode *JavaParser::TypeIdentifierContext::SEALED()
{
    return getToken(JavaParser::SEALED, 0);
}

tree::TerminalNode *JavaParser::TypeIdentifierContext::PERMITS()
{
    return getToken(JavaParser::PERMITS, 0);
}

tree::TerminalNode *JavaParser::TypeIdentifierContext::RECORD()
{
    return getToken(JavaParser::RECORD, 0);
}

size_t JavaParser::TypeIdentifierContext::getRuleIndex() const
{
    return JavaParser::RuleTypeIdentifier;
}

void JavaParser::TypeIdentifierContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterTypeIdentifier(this);
}

void JavaParser::TypeIdentifierContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitTypeIdentifier(this);
}

std::any JavaParser::TypeIdentifierContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitTypeIdentifier(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::TypeIdentifierContext *JavaParser::typeIdentifier()
{
    TypeIdentifierContext *_localctx = _tracker.createInstance<TypeIdentifierContext>(_ctx, getState());
    enterRule(_localctx, 164, JavaParser::RuleTypeIdentifier);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1065);
        _la = _input->LA(1);
        if (!(((((_la - 51) & ~0x3fULL) == 0) && ((1ULL << (_la - 51)) & 29695) != 0)
              || _la == JavaParser::IDENTIFIER)) {
            _errHandler->recoverInline(this);
        } else {
            _errHandler->reportMatch(this);
            consume();
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- LocalTypeDeclarationContext ------------------------------------------------------------------

JavaParser::LocalTypeDeclarationContext::LocalTypeDeclarationContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::ClassDeclarationContext *JavaParser::LocalTypeDeclarationContext::classDeclaration()
{
    return getRuleContext<JavaParser::ClassDeclarationContext>(0);
}

JavaParser::InterfaceDeclarationContext *JavaParser::LocalTypeDeclarationContext::interfaceDeclaration()
{
    return getRuleContext<JavaParser::InterfaceDeclarationContext>(0);
}

JavaParser::RecordDeclarationContext *JavaParser::LocalTypeDeclarationContext::recordDeclaration()
{
    return getRuleContext<JavaParser::RecordDeclarationContext>(0);
}

std::vector<JavaParser::ClassOrInterfaceModifierContext *>
JavaParser::LocalTypeDeclarationContext::classOrInterfaceModifier()
{
    return getRuleContexts<JavaParser::ClassOrInterfaceModifierContext>();
}

JavaParser::ClassOrInterfaceModifierContext *JavaParser::LocalTypeDeclarationContext::classOrInterfaceModifier(size_t i)
{
    return getRuleContext<JavaParser::ClassOrInterfaceModifierContext>(i);
}

size_t JavaParser::LocalTypeDeclarationContext::getRuleIndex() const
{
    return JavaParser::RuleLocalTypeDeclaration;
}

void JavaParser::LocalTypeDeclarationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterLocalTypeDeclaration(this);
}

void JavaParser::LocalTypeDeclarationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitLocalTypeDeclaration(this);
}

std::any JavaParser::LocalTypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitLocalTypeDeclaration(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::LocalTypeDeclarationContext *JavaParser::localTypeDeclaration()
{
    LocalTypeDeclarationContext *_localctx = _tracker.createInstance<LocalTypeDeclarationContext>(_ctx, getState());
    enterRule(_localctx, 166, JavaParser::RuleLocalTypeDeclaration);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1070);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 123, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(1067);
                classOrInterfaceModifier();
            }
            setState(1072);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 123, _ctx);
        }
        setState(1076);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case JavaParser::CLASS: {
            setState(1073);
            classDeclaration();
            break;
        }

        case JavaParser::INTERFACE: {
            setState(1074);
            interfaceDeclaration();
            break;
        }

        case JavaParser::RECORD: {
            setState(1075);
            recordDeclaration();
            break;
        }

        default:
            throw NoViableAltException(this);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

JavaParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::BlockContext *JavaParser::StatementContext::block()
{
    return getRuleContext<JavaParser::BlockContext>(0);
}

tree::TerminalNode *JavaParser::StatementContext::ASSERT()
{
    return getToken(JavaParser::ASSERT, 0);
}

std::vector<JavaParser::ExpressionContext *> JavaParser::StatementContext::expression()
{
    return getRuleContexts<JavaParser::ExpressionContext>();
}

JavaParser::ExpressionContext *JavaParser::StatementContext::expression(size_t i)
{
    return getRuleContext<JavaParser::ExpressionContext>(i);
}

tree::TerminalNode *JavaParser::StatementContext::SEMI()
{
    return getToken(JavaParser::SEMI, 0);
}

tree::TerminalNode *JavaParser::StatementContext::COLON()
{
    return getToken(JavaParser::COLON, 0);
}

tree::TerminalNode *JavaParser::StatementContext::IF()
{
    return getToken(JavaParser::IF, 0);
}

JavaParser::ParExpressionContext *JavaParser::StatementContext::parExpression()
{
    return getRuleContext<JavaParser::ParExpressionContext>(0);
}

std::vector<JavaParser::StatementContext *> JavaParser::StatementContext::statement()
{
    return getRuleContexts<JavaParser::StatementContext>();
}

JavaParser::StatementContext *JavaParser::StatementContext::statement(size_t i)
{
    return getRuleContext<JavaParser::StatementContext>(i);
}

tree::TerminalNode *JavaParser::StatementContext::ELSE()
{
    return getToken(JavaParser::ELSE, 0);
}

tree::TerminalNode *JavaParser::StatementContext::FOR()
{
    return getToken(JavaParser::FOR, 0);
}

tree::TerminalNode *JavaParser::StatementContext::LPAREN()
{
    return getToken(JavaParser::LPAREN, 0);
}

JavaParser::ForControlContext *JavaParser::StatementContext::forControl()
{
    return getRuleContext<JavaParser::ForControlContext>(0);
}

tree::TerminalNode *JavaParser::StatementContext::RPAREN()
{
    return getToken(JavaParser::RPAREN, 0);
}

tree::TerminalNode *JavaParser::StatementContext::WHILE()
{
    return getToken(JavaParser::WHILE, 0);
}

tree::TerminalNode *JavaParser::StatementContext::DO()
{
    return getToken(JavaParser::DO, 0);
}

tree::TerminalNode *JavaParser::StatementContext::TRY()
{
    return getToken(JavaParser::TRY, 0);
}

JavaParser::FinallyBlockContext *JavaParser::StatementContext::finallyBlock()
{
    return getRuleContext<JavaParser::FinallyBlockContext>(0);
}

std::vector<JavaParser::CatchClauseContext *> JavaParser::StatementContext::catchClause()
{
    return getRuleContexts<JavaParser::CatchClauseContext>();
}

JavaParser::CatchClauseContext *JavaParser::StatementContext::catchClause(size_t i)
{
    return getRuleContext<JavaParser::CatchClauseContext>(i);
}

JavaParser::ResourceSpecificationContext *JavaParser::StatementContext::resourceSpecification()
{
    return getRuleContext<JavaParser::ResourceSpecificationContext>(0);
}

tree::TerminalNode *JavaParser::StatementContext::SWITCH()
{
    return getToken(JavaParser::SWITCH, 0);
}

tree::TerminalNode *JavaParser::StatementContext::LBRACE()
{
    return getToken(JavaParser::LBRACE, 0);
}

tree::TerminalNode *JavaParser::StatementContext::RBRACE()
{
    return getToken(JavaParser::RBRACE, 0);
}

std::vector<JavaParser::SwitchBlockStatementGroupContext *> JavaParser::StatementContext::switchBlockStatementGroup()
{
    return getRuleContexts<JavaParser::SwitchBlockStatementGroupContext>();
}

JavaParser::SwitchBlockStatementGroupContext *JavaParser::StatementContext::switchBlockStatementGroup(size_t i)
{
    return getRuleContext<JavaParser::SwitchBlockStatementGroupContext>(i);
}

std::vector<JavaParser::SwitchLabelContext *> JavaParser::StatementContext::switchLabel()
{
    return getRuleContexts<JavaParser::SwitchLabelContext>();
}

JavaParser::SwitchLabelContext *JavaParser::StatementContext::switchLabel(size_t i)
{
    return getRuleContext<JavaParser::SwitchLabelContext>(i);
}

tree::TerminalNode *JavaParser::StatementContext::SYNCHRONIZED()
{
    return getToken(JavaParser::SYNCHRONIZED, 0);
}

tree::TerminalNode *JavaParser::StatementContext::RETURN()
{
    return getToken(JavaParser::RETURN, 0);
}

tree::TerminalNode *JavaParser::StatementContext::THROW()
{
    return getToken(JavaParser::THROW, 0);
}

tree::TerminalNode *JavaParser::StatementContext::BREAK()
{
    return getToken(JavaParser::BREAK, 0);
}

JavaParser::IdentifierContext *JavaParser::StatementContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

tree::TerminalNode *JavaParser::StatementContext::CONTINUE()
{
    return getToken(JavaParser::CONTINUE, 0);
}

tree::TerminalNode *JavaParser::StatementContext::YIELD()
{
    return getToken(JavaParser::YIELD, 0);
}

JavaParser::SwitchExpressionContext *JavaParser::StatementContext::switchExpression()
{
    return getRuleContext<JavaParser::SwitchExpressionContext>(0);
}

size_t JavaParser::StatementContext::getRuleIndex() const
{
    return JavaParser::RuleStatement;
}

void JavaParser::StatementContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterStatement(this);
}

void JavaParser::StatementContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitStatement(this);
}

std::any JavaParser::StatementContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitStatement(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::StatementContext *JavaParser::statement()
{
    StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
    enterRule(_localctx, 168, JavaParser::RuleStatement);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        setState(1191);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 138, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(1078);
            antlrcpp::downCast<StatementContext *>(_localctx)->blockLabel = block();
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(1079);
            match(JavaParser::ASSERT);
            setState(1080);
            expression(0);
            setState(1083);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == JavaParser::COLON) {
                setState(1081);
                match(JavaParser::COLON);
                setState(1082);
                expression(0);
            }
            setState(1085);
            match(JavaParser::SEMI);
            break;
        }

        case 3: {
            enterOuterAlt(_localctx, 3);
            setState(1087);
            match(JavaParser::IF);
            setState(1088);
            parExpression();
            setState(1089);
            statement();
            setState(1092);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 126, _ctx)) {
            case 1: {
                setState(1090);
                match(JavaParser::ELSE);
                setState(1091);
                statement();
                break;
            }

            default:
                break;
            }
            break;
        }

        case 4: {
            enterOuterAlt(_localctx, 4);
            setState(1094);
            match(JavaParser::FOR);
            setState(1095);
            match(JavaParser::LPAREN);
            setState(1096);
            forControl();
            setState(1097);
            match(JavaParser::RPAREN);
            setState(1098);
            statement();
            break;
        }

        case 5: {
            enterOuterAlt(_localctx, 5);
            setState(1100);
            match(JavaParser::WHILE);
            setState(1101);
            parExpression();
            setState(1102);
            statement();
            break;
        }

        case 6: {
            enterOuterAlt(_localctx, 6);
            setState(1104);
            match(JavaParser::DO);
            setState(1105);
            statement();
            setState(1106);
            match(JavaParser::WHILE);
            setState(1107);
            parExpression();
            setState(1108);
            match(JavaParser::SEMI);
            break;
        }

        case 7: {
            enterOuterAlt(_localctx, 7);
            setState(1110);
            match(JavaParser::TRY);
            setState(1111);
            block();
            setState(1121);
            _errHandler->sync(this);
            switch (_input->LA(1)) {
            case JavaParser::CATCH: {
                setState(1113);
                _errHandler->sync(this);
                _la = _input->LA(1);
                do {
                    setState(1112);
                    catchClause();
                    setState(1115);
                    _errHandler->sync(this);
                    _la = _input->LA(1);
                } while (_la == JavaParser::CATCH);
                setState(1118);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == JavaParser::FINALLY) {
                    setState(1117);
                    finallyBlock();
                }
                break;
            }

            case JavaParser::FINALLY: {
                setState(1120);
                finallyBlock();
                break;
            }

            default:
                throw NoViableAltException(this);
            }
            break;
        }

        case 8: {
            enterOuterAlt(_localctx, 8);
            setState(1123);
            match(JavaParser::TRY);
            setState(1124);
            resourceSpecification();
            setState(1125);
            block();
            setState(1129);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == JavaParser::CATCH) {
                setState(1126);
                catchClause();
                setState(1131);
                _errHandler->sync(this);
                _la = _input->LA(1);
            }
            setState(1133);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == JavaParser::FINALLY) {
                setState(1132);
                finallyBlock();
            }
            break;
        }

        case 9: {
            enterOuterAlt(_localctx, 9);
            setState(1135);
            match(JavaParser::SWITCH);
            setState(1136);
            parExpression();
            setState(1137);
            match(JavaParser::LBRACE);
            setState(1141);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 132, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                    setState(1138);
                    switchBlockStatementGroup();
                }
                setState(1143);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 132, _ctx);
            }
            setState(1147);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == JavaParser::CASE

                   || _la == JavaParser::DEFAULT) {
                setState(1144);
                switchLabel();
                setState(1149);
                _errHandler->sync(this);
                _la = _input->LA(1);
            }
            setState(1150);
            match(JavaParser::RBRACE);
            break;
        }

        case 10: {
            enterOuterAlt(_localctx, 10);
            setState(1152);
            match(JavaParser::SYNCHRONIZED);
            setState(1153);
            parExpression();
            setState(1154);
            block();
            break;
        }

        case 11: {
            enterOuterAlt(_localctx, 11);
            setState(1156);
            match(JavaParser::RETURN);
            setState(1158);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (((((_la - 3) & ~0x3fULL) == 0) && ((1ULL << (_la - 3)) & 9223127275610966053) != 0)
                || ((((_la - 67) & ~0x3fULL) == 0) && ((1ULL << (_la - 67)) & 2377900732130004991) != 0)) {
                setState(1157);
                expression(0);
            }
            setState(1160);
            match(JavaParser::SEMI);
            break;
        }

        case 12: {
            enterOuterAlt(_localctx, 12);
            setState(1161);
            match(JavaParser::THROW);
            setState(1162);
            expression(0);
            setState(1163);
            match(JavaParser::SEMI);
            break;
        }

        case 13: {
            enterOuterAlt(_localctx, 13);
            setState(1165);
            match(JavaParser::BREAK);
            setState(1167);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (((((_la - 51) & ~0x3fULL) == 0) && ((1ULL << (_la - 51)) & 32767) != 0)
                || _la == JavaParser::IDENTIFIER) {
                setState(1166);
                identifier();
            }
            setState(1169);
            match(JavaParser::SEMI);
            break;
        }

        case 14: {
            enterOuterAlt(_localctx, 14);
            setState(1170);
            match(JavaParser::CONTINUE);
            setState(1172);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (((((_la - 51) & ~0x3fULL) == 0) && ((1ULL << (_la - 51)) & 32767) != 0)
                || _la == JavaParser::IDENTIFIER) {
                setState(1171);
                identifier();
            }
            setState(1174);
            match(JavaParser::SEMI);
            break;
        }

        case 15: {
            enterOuterAlt(_localctx, 15);
            setState(1175);
            match(JavaParser::YIELD);
            setState(1176);
            expression(0);
            setState(1177);
            match(JavaParser::SEMI);
            break;
        }

        case 16: {
            enterOuterAlt(_localctx, 16);
            setState(1179);
            match(JavaParser::SEMI);
            break;
        }

        case 17: {
            enterOuterAlt(_localctx, 17);
            setState(1180);
            antlrcpp::downCast<StatementContext *>(_localctx)->statementExpression = expression(0);
            setState(1181);
            match(JavaParser::SEMI);
            break;
        }

        case 18: {
            enterOuterAlt(_localctx, 18);
            setState(1183);
            switchExpression();
            setState(1185);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 137, _ctx)) {
            case 1: {
                setState(1184);
                match(JavaParser::SEMI);
                break;
            }

            default:
                break;
            }
            break;
        }

        case 19: {
            enterOuterAlt(_localctx, 19);
            setState(1187);
            antlrcpp::downCast<StatementContext *>(_localctx)->identifierLabel = identifier();
            setState(1188);
            match(JavaParser::COLON);
            setState(1189);
            statement();
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- CatchClauseContext ------------------------------------------------------------------

JavaParser::CatchClauseContext::CatchClauseContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::CatchClauseContext::CATCH()
{
    return getToken(JavaParser::CATCH, 0);
}

tree::TerminalNode *JavaParser::CatchClauseContext::LPAREN()
{
    return getToken(JavaParser::LPAREN, 0);
}

JavaParser::CatchTypeContext *JavaParser::CatchClauseContext::catchType()
{
    return getRuleContext<JavaParser::CatchTypeContext>(0);
}

JavaParser::IdentifierContext *JavaParser::CatchClauseContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

tree::TerminalNode *JavaParser::CatchClauseContext::RPAREN()
{
    return getToken(JavaParser::RPAREN, 0);
}

JavaParser::BlockContext *JavaParser::CatchClauseContext::block()
{
    return getRuleContext<JavaParser::BlockContext>(0);
}

std::vector<JavaParser::VariableModifierContext *> JavaParser::CatchClauseContext::variableModifier()
{
    return getRuleContexts<JavaParser::VariableModifierContext>();
}

JavaParser::VariableModifierContext *JavaParser::CatchClauseContext::variableModifier(size_t i)
{
    return getRuleContext<JavaParser::VariableModifierContext>(i);
}

size_t JavaParser::CatchClauseContext::getRuleIndex() const
{
    return JavaParser::RuleCatchClause;
}

void JavaParser::CatchClauseContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterCatchClause(this);
}

void JavaParser::CatchClauseContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitCatchClause(this);
}

std::any JavaParser::CatchClauseContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitCatchClause(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::CatchClauseContext *JavaParser::catchClause()
{
    CatchClauseContext *_localctx = _tracker.createInstance<CatchClauseContext>(_ctx, getState());
    enterRule(_localctx, 170, JavaParser::RuleCatchClause);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1193);
        match(JavaParser::CATCH);
        setState(1194);
        match(JavaParser::LPAREN);
        setState(1198);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 139, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(1195);
                variableModifier();
            }
            setState(1200);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 139, _ctx);
        }
        setState(1201);
        catchType();
        setState(1202);
        identifier();
        setState(1203);
        match(JavaParser::RPAREN);
        setState(1204);
        block();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- CatchTypeContext ------------------------------------------------------------------

JavaParser::CatchTypeContext::CatchTypeContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

std::vector<JavaParser::QualifiedNameContext *> JavaParser::CatchTypeContext::qualifiedName()
{
    return getRuleContexts<JavaParser::QualifiedNameContext>();
}

JavaParser::QualifiedNameContext *JavaParser::CatchTypeContext::qualifiedName(size_t i)
{
    return getRuleContext<JavaParser::QualifiedNameContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::CatchTypeContext::BITOR()
{
    return getTokens(JavaParser::BITOR);
}

tree::TerminalNode *JavaParser::CatchTypeContext::BITOR(size_t i)
{
    return getToken(JavaParser::BITOR, i);
}

size_t JavaParser::CatchTypeContext::getRuleIndex() const
{
    return JavaParser::RuleCatchType;
}

void JavaParser::CatchTypeContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterCatchType(this);
}

void JavaParser::CatchTypeContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitCatchType(this);
}

std::any JavaParser::CatchTypeContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitCatchType(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::CatchTypeContext *JavaParser::catchType()
{
    CatchTypeContext *_localctx = _tracker.createInstance<CatchTypeContext>(_ctx, getState());
    enterRule(_localctx, 172, JavaParser::RuleCatchType);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1206);
        qualifiedName();
        setState(1211);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == JavaParser::BITOR) {
            setState(1207);
            match(JavaParser::BITOR);
            setState(1208);
            qualifiedName();
            setState(1213);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- FinallyBlockContext ------------------------------------------------------------------

JavaParser::FinallyBlockContext::FinallyBlockContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::FinallyBlockContext::FINALLY()
{
    return getToken(JavaParser::FINALLY, 0);
}

JavaParser::BlockContext *JavaParser::FinallyBlockContext::block()
{
    return getRuleContext<JavaParser::BlockContext>(0);
}

size_t JavaParser::FinallyBlockContext::getRuleIndex() const
{
    return JavaParser::RuleFinallyBlock;
}

void JavaParser::FinallyBlockContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterFinallyBlock(this);
}

void JavaParser::FinallyBlockContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitFinallyBlock(this);
}

std::any JavaParser::FinallyBlockContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitFinallyBlock(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::FinallyBlockContext *JavaParser::finallyBlock()
{
    FinallyBlockContext *_localctx = _tracker.createInstance<FinallyBlockContext>(_ctx, getState());
    enterRule(_localctx, 174, JavaParser::RuleFinallyBlock);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1214);
        match(JavaParser::FINALLY);
        setState(1215);
        block();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ResourceSpecificationContext ------------------------------------------------------------------

JavaParser::ResourceSpecificationContext::ResourceSpecificationContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::ResourceSpecificationContext::LPAREN()
{
    return getToken(JavaParser::LPAREN, 0);
}

JavaParser::ResourcesContext *JavaParser::ResourceSpecificationContext::resources()
{
    return getRuleContext<JavaParser::ResourcesContext>(0);
}

tree::TerminalNode *JavaParser::ResourceSpecificationContext::RPAREN()
{
    return getToken(JavaParser::RPAREN, 0);
}

tree::TerminalNode *JavaParser::ResourceSpecificationContext::SEMI()
{
    return getToken(JavaParser::SEMI, 0);
}

size_t JavaParser::ResourceSpecificationContext::getRuleIndex() const
{
    return JavaParser::RuleResourceSpecification;
}

void JavaParser::ResourceSpecificationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterResourceSpecification(this);
}

void JavaParser::ResourceSpecificationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitResourceSpecification(this);
}

std::any JavaParser::ResourceSpecificationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitResourceSpecification(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ResourceSpecificationContext *JavaParser::resourceSpecification()
{
    ResourceSpecificationContext *_localctx = _tracker.createInstance<ResourceSpecificationContext>(_ctx, getState());
    enterRule(_localctx, 176, JavaParser::RuleResourceSpecification);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1217);
        match(JavaParser::LPAREN);
        setState(1218);
        resources();
        setState(1220);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::SEMI) {
            setState(1219);
            match(JavaParser::SEMI);
        }
        setState(1222);
        match(JavaParser::RPAREN);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ResourcesContext ------------------------------------------------------------------

JavaParser::ResourcesContext::ResourcesContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

std::vector<JavaParser::ResourceContext *> JavaParser::ResourcesContext::resource()
{
    return getRuleContexts<JavaParser::ResourceContext>();
}

JavaParser::ResourceContext *JavaParser::ResourcesContext::resource(size_t i)
{
    return getRuleContext<JavaParser::ResourceContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::ResourcesContext::SEMI()
{
    return getTokens(JavaParser::SEMI);
}

tree::TerminalNode *JavaParser::ResourcesContext::SEMI(size_t i)
{
    return getToken(JavaParser::SEMI, i);
}

size_t JavaParser::ResourcesContext::getRuleIndex() const
{
    return JavaParser::RuleResources;
}

void JavaParser::ResourcesContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterResources(this);
}

void JavaParser::ResourcesContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitResources(this);
}

std::any JavaParser::ResourcesContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitResources(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ResourcesContext *JavaParser::resources()
{
    ResourcesContext *_localctx = _tracker.createInstance<ResourcesContext>(_ctx, getState());
    enterRule(_localctx, 178, JavaParser::RuleResources);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1224);
        resource();
        setState(1229);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 142, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(1225);
                match(JavaParser::SEMI);
                setState(1226);
                resource();
            }
            setState(1231);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 142, _ctx);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ResourceContext ------------------------------------------------------------------

JavaParser::ResourceContext::ResourceContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::ResourceContext::ASSIGN()
{
    return getToken(JavaParser::ASSIGN, 0);
}

JavaParser::ExpressionContext *JavaParser::ResourceContext::expression()
{
    return getRuleContext<JavaParser::ExpressionContext>(0);
}

JavaParser::ClassOrInterfaceTypeContext *JavaParser::ResourceContext::classOrInterfaceType()
{
    return getRuleContext<JavaParser::ClassOrInterfaceTypeContext>(0);
}

JavaParser::VariableDeclaratorIdContext *JavaParser::ResourceContext::variableDeclaratorId()
{
    return getRuleContext<JavaParser::VariableDeclaratorIdContext>(0);
}

tree::TerminalNode *JavaParser::ResourceContext::VAR()
{
    return getToken(JavaParser::VAR, 0);
}

JavaParser::IdentifierContext *JavaParser::ResourceContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

std::vector<JavaParser::VariableModifierContext *> JavaParser::ResourceContext::variableModifier()
{
    return getRuleContexts<JavaParser::VariableModifierContext>();
}

JavaParser::VariableModifierContext *JavaParser::ResourceContext::variableModifier(size_t i)
{
    return getRuleContext<JavaParser::VariableModifierContext>(i);
}

JavaParser::QualifiedNameContext *JavaParser::ResourceContext::qualifiedName()
{
    return getRuleContext<JavaParser::QualifiedNameContext>(0);
}

size_t JavaParser::ResourceContext::getRuleIndex() const
{
    return JavaParser::RuleResource;
}

void JavaParser::ResourceContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterResource(this);
}

void JavaParser::ResourceContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitResource(this);
}

std::any JavaParser::ResourceContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitResource(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ResourceContext *JavaParser::resource()
{
    ResourceContext *_localctx = _tracker.createInstance<ResourceContext>(_ctx, getState());
    enterRule(_localctx, 180, JavaParser::RuleResource);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        setState(1249);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 145, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(1235);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 143, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                    setState(1232);
                    variableModifier();
                }
                setState(1237);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 143, _ctx);
            }
            setState(1243);
            _errHandler->sync(this);
            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 144, _ctx)) {
            case 1: {
                setState(1238);
                classOrInterfaceType();
                setState(1239);
                variableDeclaratorId();
                break;
            }

            case 2: {
                setState(1241);
                match(JavaParser::VAR);
                setState(1242);
                identifier();
                break;
            }

            default:
                break;
            }
            setState(1245);
            match(JavaParser::ASSIGN);
            setState(1246);
            expression(0);
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(1248);
            qualifiedName();
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- SwitchBlockStatementGroupContext ------------------------------------------------------------------

JavaParser::SwitchBlockStatementGroupContext::SwitchBlockStatementGroupContext(ParserRuleContext *parent,
                                                                               size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

std::vector<JavaParser::SwitchLabelContext *> JavaParser::SwitchBlockStatementGroupContext::switchLabel()
{
    return getRuleContexts<JavaParser::SwitchLabelContext>();
}

JavaParser::SwitchLabelContext *JavaParser::SwitchBlockStatementGroupContext::switchLabel(size_t i)
{
    return getRuleContext<JavaParser::SwitchLabelContext>(i);
}

std::vector<JavaParser::BlockStatementContext *> JavaParser::SwitchBlockStatementGroupContext::blockStatement()
{
    return getRuleContexts<JavaParser::BlockStatementContext>();
}

JavaParser::BlockStatementContext *JavaParser::SwitchBlockStatementGroupContext::blockStatement(size_t i)
{
    return getRuleContext<JavaParser::BlockStatementContext>(i);
}

size_t JavaParser::SwitchBlockStatementGroupContext::getRuleIndex() const
{
    return JavaParser::RuleSwitchBlockStatementGroup;
}

void JavaParser::SwitchBlockStatementGroupContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterSwitchBlockStatementGroup(this);
}

void JavaParser::SwitchBlockStatementGroupContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitSwitchBlockStatementGroup(this);
}

std::any JavaParser::SwitchBlockStatementGroupContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitSwitchBlockStatementGroup(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::SwitchBlockStatementGroupContext *JavaParser::switchBlockStatementGroup()
{
    SwitchBlockStatementGroupContext *_localctx =
        _tracker.createInstance<SwitchBlockStatementGroupContext>(_ctx, getState());
    enterRule(_localctx, 182, JavaParser::RuleSwitchBlockStatementGroup);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1252);
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
            setState(1251);
            switchLabel();
            setState(1254);
            _errHandler->sync(this);
            _la = _input->LA(1);
        } while (_la == JavaParser::CASE

                 || _la == JavaParser::DEFAULT);
        setState(1257);
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
            setState(1256);
            blockStatement();
            setState(1259);
            _errHandler->sync(this);
            _la = _input->LA(1);
        } while (((((_la - 1) & ~0x3fULL) == 0) && ((1ULL << (_la - 1)) & -334254282492513) != 0)
                 || ((((_la - 65) & ~0x3fULL) == 0) && ((1ULL << (_la - 65)) & -8935141145188974593) != 0));

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- SwitchLabelContext ------------------------------------------------------------------

JavaParser::SwitchLabelContext::SwitchLabelContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::SwitchLabelContext::CASE()
{
    return getToken(JavaParser::CASE, 0);
}

tree::TerminalNode *JavaParser::SwitchLabelContext::COLON()
{
    return getToken(JavaParser::COLON, 0);
}

JavaParser::TypeTypeContext *JavaParser::SwitchLabelContext::typeType()
{
    return getRuleContext<JavaParser::TypeTypeContext>(0);
}

JavaParser::ExpressionContext *JavaParser::SwitchLabelContext::expression()
{
    return getRuleContext<JavaParser::ExpressionContext>(0);
}

tree::TerminalNode *JavaParser::SwitchLabelContext::IDENTIFIER()
{
    return getToken(JavaParser::IDENTIFIER, 0);
}

JavaParser::IdentifierContext *JavaParser::SwitchLabelContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

tree::TerminalNode *JavaParser::SwitchLabelContext::DEFAULT()
{
    return getToken(JavaParser::DEFAULT, 0);
}

size_t JavaParser::SwitchLabelContext::getRuleIndex() const
{
    return JavaParser::RuleSwitchLabel;
}

void JavaParser::SwitchLabelContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterSwitchLabel(this);
}

void JavaParser::SwitchLabelContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitSwitchLabel(this);
}

std::any JavaParser::SwitchLabelContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitSwitchLabel(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::SwitchLabelContext *JavaParser::switchLabel()
{
    SwitchLabelContext *_localctx = _tracker.createInstance<SwitchLabelContext>(_ctx, getState());
    enterRule(_localctx, 184, JavaParser::RuleSwitchLabel);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(1272);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case JavaParser::CASE: {
            enterOuterAlt(_localctx, 1);
            setState(1261);
            match(JavaParser::CASE);
            setState(1267);
            _errHandler->sync(this);
            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 148, _ctx)) {
            case 1: {
                setState(1262);
                antlrcpp::downCast<SwitchLabelContext *>(_localctx)->constantExpression = expression(0);
                break;
            }

            case 2: {
                setState(1263);
                antlrcpp::downCast<SwitchLabelContext *>(_localctx)->enumConstantName = match(JavaParser::IDENTIFIER);
                break;
            }

            case 3: {
                setState(1264);
                typeType();
                setState(1265);
                antlrcpp::downCast<SwitchLabelContext *>(_localctx)->varName = identifier();
                break;
            }

            default:
                break;
            }
            setState(1269);
            match(JavaParser::COLON);
            break;
        }

        case JavaParser::DEFAULT: {
            enterOuterAlt(_localctx, 2);
            setState(1270);
            match(JavaParser::DEFAULT);
            setState(1271);
            match(JavaParser::COLON);
            break;
        }

        default:
            throw NoViableAltException(this);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ForControlContext ------------------------------------------------------------------

JavaParser::ForControlContext::ForControlContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::EnhancedForControlContext *JavaParser::ForControlContext::enhancedForControl()
{
    return getRuleContext<JavaParser::EnhancedForControlContext>(0);
}

std::vector<tree::TerminalNode *> JavaParser::ForControlContext::SEMI()
{
    return getTokens(JavaParser::SEMI);
}

tree::TerminalNode *JavaParser::ForControlContext::SEMI(size_t i)
{
    return getToken(JavaParser::SEMI, i);
}

JavaParser::ForInitContext *JavaParser::ForControlContext::forInit()
{
    return getRuleContext<JavaParser::ForInitContext>(0);
}

JavaParser::ExpressionContext *JavaParser::ForControlContext::expression()
{
    return getRuleContext<JavaParser::ExpressionContext>(0);
}

JavaParser::ExpressionListContext *JavaParser::ForControlContext::expressionList()
{
    return getRuleContext<JavaParser::ExpressionListContext>(0);
}

size_t JavaParser::ForControlContext::getRuleIndex() const
{
    return JavaParser::RuleForControl;
}

void JavaParser::ForControlContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterForControl(this);
}

void JavaParser::ForControlContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitForControl(this);
}

std::any JavaParser::ForControlContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitForControl(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ForControlContext *JavaParser::forControl()
{
    ForControlContext *_localctx = _tracker.createInstance<ForControlContext>(_ctx, getState());
    enterRule(_localctx, 186, JavaParser::RuleForControl);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(1286);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(1274);
            enhancedForControl();
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(1276);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (((((_la - 3) & ~0x3fULL) == 0) && ((1ULL << (_la - 3)) & 9223127275610998821) != 0)
                || ((((_la - 67) & ~0x3fULL) == 0) && ((1ULL << (_la - 67)) & 2377900732130004991) != 0)) {
                setState(1275);
                forInit();
            }
            setState(1278);
            match(JavaParser::SEMI);
            setState(1280);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (((((_la - 3) & ~0x3fULL) == 0) && ((1ULL << (_la - 3)) & 9223127275610966053) != 0)
                || ((((_la - 67) & ~0x3fULL) == 0) && ((1ULL << (_la - 67)) & 2377900732130004991) != 0)) {
                setState(1279);
                expression(0);
            }
            setState(1282);
            match(JavaParser::SEMI);
            setState(1284);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (((((_la - 3) & ~0x3fULL) == 0) && ((1ULL << (_la - 3)) & 9223127275610966053) != 0)
                || ((((_la - 67) & ~0x3fULL) == 0) && ((1ULL << (_la - 67)) & 2377900732130004991) != 0)) {
                setState(1283);
                antlrcpp::downCast<ForControlContext *>(_localctx)->forUpdate = expressionList();
            }
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ForInitContext ------------------------------------------------------------------

JavaParser::ForInitContext::ForInitContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::LocalVariableDeclarationContext *JavaParser::ForInitContext::localVariableDeclaration()
{
    return getRuleContext<JavaParser::LocalVariableDeclarationContext>(0);
}

JavaParser::ExpressionListContext *JavaParser::ForInitContext::expressionList()
{
    return getRuleContext<JavaParser::ExpressionListContext>(0);
}

size_t JavaParser::ForInitContext::getRuleIndex() const
{
    return JavaParser::RuleForInit;
}

void JavaParser::ForInitContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterForInit(this);
}

void JavaParser::ForInitContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitForInit(this);
}

std::any JavaParser::ForInitContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitForInit(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ForInitContext *JavaParser::forInit()
{
    ForInitContext *_localctx = _tracker.createInstance<ForInitContext>(_ctx, getState());
    enterRule(_localctx, 188, JavaParser::RuleForInit);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(1290);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 154, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(1288);
            localVariableDeclaration();
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(1289);
            expressionList();
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- EnhancedForControlContext ------------------------------------------------------------------

JavaParser::EnhancedForControlContext::EnhancedForControlContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::VariableDeclaratorIdContext *JavaParser::EnhancedForControlContext::variableDeclaratorId()
{
    return getRuleContext<JavaParser::VariableDeclaratorIdContext>(0);
}

tree::TerminalNode *JavaParser::EnhancedForControlContext::COLON()
{
    return getToken(JavaParser::COLON, 0);
}

JavaParser::ExpressionContext *JavaParser::EnhancedForControlContext::expression()
{
    return getRuleContext<JavaParser::ExpressionContext>(0);
}

JavaParser::TypeTypeContext *JavaParser::EnhancedForControlContext::typeType()
{
    return getRuleContext<JavaParser::TypeTypeContext>(0);
}

tree::TerminalNode *JavaParser::EnhancedForControlContext::VAR()
{
    return getToken(JavaParser::VAR, 0);
}

std::vector<JavaParser::VariableModifierContext *> JavaParser::EnhancedForControlContext::variableModifier()
{
    return getRuleContexts<JavaParser::VariableModifierContext>();
}

JavaParser::VariableModifierContext *JavaParser::EnhancedForControlContext::variableModifier(size_t i)
{
    return getRuleContext<JavaParser::VariableModifierContext>(i);
}

size_t JavaParser::EnhancedForControlContext::getRuleIndex() const
{
    return JavaParser::RuleEnhancedForControl;
}

void JavaParser::EnhancedForControlContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterEnhancedForControl(this);
}

void JavaParser::EnhancedForControlContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitEnhancedForControl(this);
}

std::any JavaParser::EnhancedForControlContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitEnhancedForControl(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::EnhancedForControlContext *JavaParser::enhancedForControl()
{
    EnhancedForControlContext *_localctx = _tracker.createInstance<EnhancedForControlContext>(_ctx, getState());
    enterRule(_localctx, 190, JavaParser::RuleEnhancedForControl);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1295);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 155, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(1292);
                variableModifier();
            }
            setState(1297);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 155, _ctx);
        }
        setState(1300);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 156, _ctx)) {
        case 1: {
            setState(1298);
            typeType();
            break;
        }

        case 2: {
            setState(1299);
            match(JavaParser::VAR);
            break;
        }

        default:
            break;
        }
        setState(1302);
        variableDeclaratorId();
        setState(1303);
        match(JavaParser::COLON);
        setState(1304);
        expression(0);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ParExpressionContext ------------------------------------------------------------------

JavaParser::ParExpressionContext::ParExpressionContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::ParExpressionContext::LPAREN()
{
    return getToken(JavaParser::LPAREN, 0);
}

JavaParser::ExpressionContext *JavaParser::ParExpressionContext::expression()
{
    return getRuleContext<JavaParser::ExpressionContext>(0);
}

tree::TerminalNode *JavaParser::ParExpressionContext::RPAREN()
{
    return getToken(JavaParser::RPAREN, 0);
}

size_t JavaParser::ParExpressionContext::getRuleIndex() const
{
    return JavaParser::RuleParExpression;
}

void JavaParser::ParExpressionContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterParExpression(this);
}

void JavaParser::ParExpressionContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitParExpression(this);
}

std::any JavaParser::ParExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitParExpression(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ParExpressionContext *JavaParser::parExpression()
{
    ParExpressionContext *_localctx = _tracker.createInstance<ParExpressionContext>(_ctx, getState());
    enterRule(_localctx, 192, JavaParser::RuleParExpression);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1306);
        match(JavaParser::LPAREN);
        setState(1307);
        expression(0);
        setState(1308);
        match(JavaParser::RPAREN);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ExpressionListContext ------------------------------------------------------------------

JavaParser::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

std::vector<JavaParser::ExpressionContext *> JavaParser::ExpressionListContext::expression()
{
    return getRuleContexts<JavaParser::ExpressionContext>();
}

JavaParser::ExpressionContext *JavaParser::ExpressionListContext::expression(size_t i)
{
    return getRuleContext<JavaParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::ExpressionListContext::COMMA()
{
    return getTokens(JavaParser::COMMA);
}

tree::TerminalNode *JavaParser::ExpressionListContext::COMMA(size_t i)
{
    return getToken(JavaParser::COMMA, i);
}

size_t JavaParser::ExpressionListContext::getRuleIndex() const
{
    return JavaParser::RuleExpressionList;
}

void JavaParser::ExpressionListContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterExpressionList(this);
}

void JavaParser::ExpressionListContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitExpressionList(this);
}

std::any JavaParser::ExpressionListContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitExpressionList(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ExpressionListContext *JavaParser::expressionList()
{
    ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
    enterRule(_localctx, 194, JavaParser::RuleExpressionList);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1310);
        expression(0);
        setState(1315);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == JavaParser::COMMA) {
            setState(1311);
            match(JavaParser::COMMA);
            setState(1312);
            expression(0);
            setState(1317);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- MethodCallContext ------------------------------------------------------------------

JavaParser::MethodCallContext::MethodCallContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::ArgumentsContext *JavaParser::MethodCallContext::arguments()
{
    return getRuleContext<JavaParser::ArgumentsContext>(0);
}

JavaParser::IdentifierContext *JavaParser::MethodCallContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

tree::TerminalNode *JavaParser::MethodCallContext::THIS()
{
    return getToken(JavaParser::THIS, 0);
}

tree::TerminalNode *JavaParser::MethodCallContext::SUPER()
{
    return getToken(JavaParser::SUPER, 0);
}

size_t JavaParser::MethodCallContext::getRuleIndex() const
{
    return JavaParser::RuleMethodCall;
}

void JavaParser::MethodCallContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterMethodCall(this);
}

void JavaParser::MethodCallContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitMethodCall(this);
}

std::any JavaParser::MethodCallContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitMethodCall(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::MethodCallContext *JavaParser::methodCall()
{
    MethodCallContext *_localctx = _tracker.createInstance<MethodCallContext>(_ctx, getState());
    enterRule(_localctx, 196, JavaParser::RuleMethodCall);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1321);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case JavaParser::MODULE:
        case JavaParser::OPEN:
        case JavaParser::REQUIRES:
        case JavaParser::EXPORTS:
        case JavaParser::OPENS:
        case JavaParser::TO:
        case JavaParser::USES:
        case JavaParser::PROVIDES:
        case JavaParser::WITH:
        case JavaParser::TRANSITIVE:
        case JavaParser::VAR:
        case JavaParser::YIELD:
        case JavaParser::RECORD:
        case JavaParser::SEALED:
        case JavaParser::PERMITS:
        case JavaParser::IDENTIFIER: {
            setState(1318);
            identifier();
            break;
        }

        case JavaParser::THIS: {
            setState(1319);
            match(JavaParser::THIS);
            break;
        }

        case JavaParser::SUPER: {
            setState(1320);
            match(JavaParser::SUPER);
            break;
        }

        default:
            throw NoViableAltException(this);
        }
        setState(1323);
        arguments();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

JavaParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::PrimaryContext *JavaParser::ExpressionContext::primary()
{
    return getRuleContext<JavaParser::PrimaryContext>(0);
}

JavaParser::MethodCallContext *JavaParser::ExpressionContext::methodCall()
{
    return getRuleContext<JavaParser::MethodCallContext>(0);
}

std::vector<JavaParser::TypeTypeContext *> JavaParser::ExpressionContext::typeType()
{
    return getRuleContexts<JavaParser::TypeTypeContext>();
}

JavaParser::TypeTypeContext *JavaParser::ExpressionContext::typeType(size_t i)
{
    return getRuleContext<JavaParser::TypeTypeContext>(i);
}

tree::TerminalNode *JavaParser::ExpressionContext::COLONCOLON()
{
    return getToken(JavaParser::COLONCOLON, 0);
}

JavaParser::IdentifierContext *JavaParser::ExpressionContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

tree::TerminalNode *JavaParser::ExpressionContext::NEW()
{
    return getToken(JavaParser::NEW, 0);
}

JavaParser::TypeArgumentsContext *JavaParser::ExpressionContext::typeArguments()
{
    return getRuleContext<JavaParser::TypeArgumentsContext>(0);
}

JavaParser::ClassTypeContext *JavaParser::ExpressionContext::classType()
{
    return getRuleContext<JavaParser::ClassTypeContext>(0);
}

JavaParser::SwitchExpressionContext *JavaParser::ExpressionContext::switchExpression()
{
    return getRuleContext<JavaParser::SwitchExpressionContext>(0);
}

std::vector<JavaParser::ExpressionContext *> JavaParser::ExpressionContext::expression()
{
    return getRuleContexts<JavaParser::ExpressionContext>();
}

JavaParser::ExpressionContext *JavaParser::ExpressionContext::expression(size_t i)
{
    return getRuleContext<JavaParser::ExpressionContext>(i);
}

tree::TerminalNode *JavaParser::ExpressionContext::ADD()
{
    return getToken(JavaParser::ADD, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::SUB()
{
    return getToken(JavaParser::SUB, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::INC()
{
    return getToken(JavaParser::INC, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::DEC()
{
    return getToken(JavaParser::DEC, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::TILDE()
{
    return getToken(JavaParser::TILDE, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::BANG()
{
    return getToken(JavaParser::BANG, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::LPAREN()
{
    return getToken(JavaParser::LPAREN, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::RPAREN()
{
    return getToken(JavaParser::RPAREN, 0);
}

std::vector<JavaParser::AnnotationContext *> JavaParser::ExpressionContext::annotation()
{
    return getRuleContexts<JavaParser::AnnotationContext>();
}

JavaParser::AnnotationContext *JavaParser::ExpressionContext::annotation(size_t i)
{
    return getRuleContext<JavaParser::AnnotationContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::ExpressionContext::BITAND()
{
    return getTokens(JavaParser::BITAND);
}

tree::TerminalNode *JavaParser::ExpressionContext::BITAND(size_t i)
{
    return getToken(JavaParser::BITAND, i);
}

JavaParser::CreatorContext *JavaParser::ExpressionContext::creator()
{
    return getRuleContext<JavaParser::CreatorContext>(0);
}

JavaParser::LambdaExpressionContext *JavaParser::ExpressionContext::lambdaExpression()
{
    return getRuleContext<JavaParser::LambdaExpressionContext>(0);
}

tree::TerminalNode *JavaParser::ExpressionContext::MUL()
{
    return getToken(JavaParser::MUL, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::DIV()
{
    return getToken(JavaParser::DIV, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::MOD()
{
    return getToken(JavaParser::MOD, 0);
}

std::vector<tree::TerminalNode *> JavaParser::ExpressionContext::LT()
{
    return getTokens(JavaParser::LT);
}

tree::TerminalNode *JavaParser::ExpressionContext::LT(size_t i)
{
    return getToken(JavaParser::LT, i);
}

std::vector<tree::TerminalNode *> JavaParser::ExpressionContext::GT()
{
    return getTokens(JavaParser::GT);
}

tree::TerminalNode *JavaParser::ExpressionContext::GT(size_t i)
{
    return getToken(JavaParser::GT, i);
}

tree::TerminalNode *JavaParser::ExpressionContext::LE()
{
    return getToken(JavaParser::LE, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::GE()
{
    return getToken(JavaParser::GE, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::EQUAL()
{
    return getToken(JavaParser::EQUAL, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::NOTEQUAL()
{
    return getToken(JavaParser::NOTEQUAL, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::CARET()
{
    return getToken(JavaParser::CARET, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::BITOR()
{
    return getToken(JavaParser::BITOR, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::AND()
{
    return getToken(JavaParser::AND, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::OR()
{
    return getToken(JavaParser::OR, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::COLON()
{
    return getToken(JavaParser::COLON, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::QUESTION()
{
    return getToken(JavaParser::QUESTION, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::ASSIGN()
{
    return getToken(JavaParser::ASSIGN, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::ADD_ASSIGN()
{
    return getToken(JavaParser::ADD_ASSIGN, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::SUB_ASSIGN()
{
    return getToken(JavaParser::SUB_ASSIGN, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::MUL_ASSIGN()
{
    return getToken(JavaParser::MUL_ASSIGN, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::DIV_ASSIGN()
{
    return getToken(JavaParser::DIV_ASSIGN, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::AND_ASSIGN()
{
    return getToken(JavaParser::AND_ASSIGN, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::OR_ASSIGN()
{
    return getToken(JavaParser::OR_ASSIGN, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::XOR_ASSIGN()
{
    return getToken(JavaParser::XOR_ASSIGN, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::RSHIFT_ASSIGN()
{
    return getToken(JavaParser::RSHIFT_ASSIGN, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::URSHIFT_ASSIGN()
{
    return getToken(JavaParser::URSHIFT_ASSIGN, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::LSHIFT_ASSIGN()
{
    return getToken(JavaParser::LSHIFT_ASSIGN, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::MOD_ASSIGN()
{
    return getToken(JavaParser::MOD_ASSIGN, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::LBRACK()
{
    return getToken(JavaParser::LBRACK, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::RBRACK()
{
    return getToken(JavaParser::RBRACK, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::DOT()
{
    return getToken(JavaParser::DOT, 0);
}

tree::TerminalNode *JavaParser::ExpressionContext::THIS()
{
    return getToken(JavaParser::THIS, 0);
}

JavaParser::InnerCreatorContext *JavaParser::ExpressionContext::innerCreator()
{
    return getRuleContext<JavaParser::InnerCreatorContext>(0);
}

tree::TerminalNode *JavaParser::ExpressionContext::SUPER()
{
    return getToken(JavaParser::SUPER, 0);
}

JavaParser::SuperSuffixContext *JavaParser::ExpressionContext::superSuffix()
{
    return getRuleContext<JavaParser::SuperSuffixContext>(0);
}

JavaParser::ExplicitGenericInvocationContext *JavaParser::ExpressionContext::explicitGenericInvocation()
{
    return getRuleContext<JavaParser::ExplicitGenericInvocationContext>(0);
}

JavaParser::NonWildcardTypeArgumentsContext *JavaParser::ExpressionContext::nonWildcardTypeArguments()
{
    return getRuleContext<JavaParser::NonWildcardTypeArgumentsContext>(0);
}

tree::TerminalNode *JavaParser::ExpressionContext::INSTANCEOF()
{
    return getToken(JavaParser::INSTANCEOF, 0);
}

JavaParser::PatternContext *JavaParser::ExpressionContext::pattern()
{
    return getRuleContext<JavaParser::PatternContext>(0);
}

size_t JavaParser::ExpressionContext::getRuleIndex() const
{
    return JavaParser::RuleExpression;
}

void JavaParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterExpression(this);
}

void JavaParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitExpression(this);
}

std::any JavaParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitExpression(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ExpressionContext *JavaParser::expression()
{
    return expression(0);
}

JavaParser::ExpressionContext *JavaParser::expression(int precedence)
{
    ParserRuleContext *parentContext = _ctx;
    size_t parentState = getState();
    JavaParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
    JavaParser::ExpressionContext *previousContext = _localctx;
    (void) previousContext; // Silence compiler, in case the context is not used by generated code.
    size_t startState = 198;
    enterRecursionRule(_localctx, 198, JavaParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        unrollRecursionContexts(parentContext);
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1368);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 164, _ctx)) {
        case 1: {
            setState(1326);
            primary();
            break;
        }

        case 2: {
            setState(1327);
            methodCall();
            break;
        }

        case 3: {
            setState(1328);
            typeType();
            setState(1329);
            match(JavaParser::COLONCOLON);
            setState(1335);
            _errHandler->sync(this);
            switch (_input->LA(1)) {
            case JavaParser::MODULE:
            case JavaParser::OPEN:
            case JavaParser::REQUIRES:
            case JavaParser::EXPORTS:
            case JavaParser::OPENS:
            case JavaParser::TO:
            case JavaParser::USES:
            case JavaParser::PROVIDES:
            case JavaParser::WITH:
            case JavaParser::TRANSITIVE:
            case JavaParser::VAR:
            case JavaParser::YIELD:
            case JavaParser::RECORD:
            case JavaParser::SEALED:
            case JavaParser::PERMITS:
            case JavaParser::LT:
            case JavaParser::IDENTIFIER: {
                setState(1331);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == JavaParser::LT) {
                    setState(1330);
                    typeArguments();
                }
                setState(1333);
                identifier();
                break;
            }

            case JavaParser::NEW: {
                setState(1334);
                match(JavaParser::NEW);
                break;
            }

            default:
                throw NoViableAltException(this);
            }
            break;
        }

        case 4: {
            setState(1337);
            classType();
            setState(1338);
            match(JavaParser::COLONCOLON);
            setState(1340);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == JavaParser::LT) {
                setState(1339);
                typeArguments();
            }
            setState(1342);
            match(JavaParser::NEW);
            break;
        }

        case 5: {
            setState(1344);
            switchExpression();
            break;
        }

        case 6: {
            setState(1345);
            antlrcpp::downCast<ExpressionContext *>(_localctx)->prefix = _input->LT(1);
            _la = _input->LA(1);
            if (!(((((_la - 90) & ~0x3fULL) == 0) && ((1ULL << (_la - 90)) & 15363) != 0))) {
                antlrcpp::downCast<ExpressionContext *>(_localctx)->prefix = _errHandler->recoverInline(this);
            } else {
                _errHandler->reportMatch(this);
                consume();
            }
            setState(1346);
            expression(17);
            break;
        }

        case 7: {
            setState(1347);
            match(JavaParser::LPAREN);
            setState(1351);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                    setState(1348);
                    annotation();
                }
                setState(1353);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx);
            }
            setState(1354);
            typeType();
            setState(1359);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == JavaParser::BITAND) {
                setState(1355);
                match(JavaParser::BITAND);
                setState(1356);
                typeType();
                setState(1361);
                _errHandler->sync(this);
                _la = _input->LA(1);
            }
            setState(1362);
            match(JavaParser::RPAREN);
            setState(1363);
            expression(16);
            break;
        }

        case 8: {
            setState(1365);
            match(JavaParser::NEW);
            setState(1366);
            creator();
            break;
        }

        case 9: {
            setState(1367);
            lambdaExpression();
            break;
        }

        default:
            break;
        }
        _ctx->stop = _input->LT(-1);
        setState(1453);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 171, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                if (!_parseListeners.empty())
                    triggerExitRuleEvent();
                previousContext = _localctx;
                setState(1451);
                _errHandler->sync(this);
                switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 170, _ctx)) {
                case 1: {
                    _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
                    pushNewRecursionContext(_localctx, startState, RuleExpression);
                    setState(1370);

                    if (!(precpred(_ctx, 14)))
                        throw FailedPredicateException(this, "precpred(_ctx, 14)");
                    setState(1371);
                    antlrcpp::downCast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
                    _la = _input->LA(1);
                    if (!(((((_la - 104) & ~0x3fULL) == 0) && ((1ULL << (_la - 104)) & 35) != 0))) {
                        antlrcpp::downCast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
                    } else {
                        _errHandler->reportMatch(this);
                        consume();
                    }
                    setState(1372);
                    expression(15);
                    break;
                }

                case 2: {
                    _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
                    pushNewRecursionContext(_localctx, startState, RuleExpression);
                    setState(1373);

                    if (!(precpred(_ctx, 13)))
                        throw FailedPredicateException(this, "precpred(_ctx, 13)");
                    setState(1374);
                    antlrcpp::downCast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
                    _la = _input->LA(1);
                    if (!(_la == JavaParser::ADD

                          || _la == JavaParser::SUB)) {
                        antlrcpp::downCast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
                    } else {
                        _errHandler->reportMatch(this);
                        consume();
                    }
                    setState(1375);
                    expression(14);
                    break;
                }

                case 3: {
                    _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
                    pushNewRecursionContext(_localctx, startState, RuleExpression);
                    setState(1376);

                    if (!(precpred(_ctx, 12)))
                        throw FailedPredicateException(this, "precpred(_ctx, 12)");
                    setState(1384);
                    _errHandler->sync(this);
                    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 165, _ctx)) {
                    case 1: {
                        setState(1377);
                        match(JavaParser::LT);
                        setState(1378);
                        match(JavaParser::LT);
                        break;
                    }

                    case 2: {
                        setState(1379);
                        match(JavaParser::GT);
                        setState(1380);
                        match(JavaParser::GT);
                        setState(1381);
                        match(JavaParser::GT);
                        break;
                    }

                    case 3: {
                        setState(1382);
                        match(JavaParser::GT);
                        setState(1383);
                        match(JavaParser::GT);
                        break;
                    }

                    default:
                        break;
                    }
                    setState(1386);
                    expression(13);
                    break;
                }

                case 4: {
                    _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
                    pushNewRecursionContext(_localctx, startState, RuleExpression);
                    setState(1387);

                    if (!(precpred(_ctx, 11)))
                        throw FailedPredicateException(this, "precpred(_ctx, 11)");
                    setState(1388);
                    antlrcpp::downCast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
                    _la = _input->LA(1);
                    if (!(((((_la - 88) & ~0x3fULL) == 0) && ((1ULL << (_la - 88)) & 387) != 0))) {
                        antlrcpp::downCast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
                    } else {
                        _errHandler->reportMatch(this);
                        consume();
                    }
                    setState(1389);
                    expression(12);
                    break;
                }

                case 5: {
                    _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
                    pushNewRecursionContext(_localctx, startState, RuleExpression);
                    setState(1390);

                    if (!(precpred(_ctx, 9)))
                        throw FailedPredicateException(this, "precpred(_ctx, 9)");
                    setState(1391);
                    antlrcpp::downCast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
                    _la = _input->LA(1);
                    if (!(_la == JavaParser::EQUAL

                          || _la == JavaParser::NOTEQUAL)) {
                        antlrcpp::downCast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
                    } else {
                        _errHandler->reportMatch(this);
                        consume();
                    }
                    setState(1392);
                    expression(10);
                    break;
                }

                case 6: {
                    _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
                    pushNewRecursionContext(_localctx, startState, RuleExpression);
                    setState(1393);

                    if (!(precpred(_ctx, 8)))
                        throw FailedPredicateException(this, "precpred(_ctx, 8)");
                    setState(1394);
                    antlrcpp::downCast<ExpressionContext *>(_localctx)->bop = match(JavaParser::BITAND);
                    setState(1395);
                    expression(9);
                    break;
                }

                case 7: {
                    _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
                    pushNewRecursionContext(_localctx, startState, RuleExpression);
                    setState(1396);

                    if (!(precpred(_ctx, 7)))
                        throw FailedPredicateException(this, "precpred(_ctx, 7)");
                    setState(1397);
                    antlrcpp::downCast<ExpressionContext *>(_localctx)->bop = match(JavaParser::CARET);
                    setState(1398);
                    expression(8);
                    break;
                }

                case 8: {
                    _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
                    pushNewRecursionContext(_localctx, startState, RuleExpression);
                    setState(1399);

                    if (!(precpred(_ctx, 6)))
                        throw FailedPredicateException(this, "precpred(_ctx, 6)");
                    setState(1400);
                    antlrcpp::downCast<ExpressionContext *>(_localctx)->bop = match(JavaParser::BITOR);
                    setState(1401);
                    expression(7);
                    break;
                }

                case 9: {
                    _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
                    pushNewRecursionContext(_localctx, startState, RuleExpression);
                    setState(1402);

                    if (!(precpred(_ctx, 5)))
                        throw FailedPredicateException(this, "precpred(_ctx, 5)");
                    setState(1403);
                    antlrcpp::downCast<ExpressionContext *>(_localctx)->bop = match(JavaParser::AND);
                    setState(1404);
                    expression(6);
                    break;
                }

                case 10: {
                    _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
                    pushNewRecursionContext(_localctx, startState, RuleExpression);
                    setState(1405);

                    if (!(precpred(_ctx, 4)))
                        throw FailedPredicateException(this, "precpred(_ctx, 4)");
                    setState(1406);
                    antlrcpp::downCast<ExpressionContext *>(_localctx)->bop = match(JavaParser::OR);
                    setState(1407);
                    expression(5);
                    break;
                }

                case 11: {
                    _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
                    pushNewRecursionContext(_localctx, startState, RuleExpression);
                    setState(1408);

                    if (!(precpred(_ctx, 3)))
                        throw FailedPredicateException(this, "precpred(_ctx, 3)");
                    setState(1409);
                    antlrcpp::downCast<ExpressionContext *>(_localctx)->bop = match(JavaParser::QUESTION);
                    setState(1410);
                    expression(0);
                    setState(1411);
                    match(JavaParser::COLON);
                    setState(1412);
                    expression(3);
                    break;
                }

                case 12: {
                    _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
                    pushNewRecursionContext(_localctx, startState, RuleExpression);
                    setState(1414);

                    if (!(precpred(_ctx, 2)))
                        throw FailedPredicateException(this, "precpred(_ctx, 2)");
                    setState(1415);
                    antlrcpp::downCast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
                    _la = _input->LA(1);
                    if (!(((((_la - 87) & ~0x3fULL) == 0) && ((1ULL << (_la - 87)) & 17171480577) != 0))) {
                        antlrcpp::downCast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
                    } else {
                        _errHandler->reportMatch(this);
                        consume();
                    }
                    setState(1416);
                    expression(2);
                    break;
                }

                case 13: {
                    _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
                    pushNewRecursionContext(_localctx, startState, RuleExpression);
                    setState(1417);

                    if (!(precpred(_ctx, 25)))
                        throw FailedPredicateException(this, "precpred(_ctx, 25)");
                    setState(1418);
                    match(JavaParser::LBRACK);
                    setState(1419);
                    expression(0);
                    setState(1420);
                    match(JavaParser::RBRACK);
                    break;
                }

                case 14: {
                    _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
                    pushNewRecursionContext(_localctx, startState, RuleExpression);
                    setState(1422);

                    if (!(precpred(_ctx, 24)))
                        throw FailedPredicateException(this, "precpred(_ctx, 24)");
                    setState(1423);
                    antlrcpp::downCast<ExpressionContext *>(_localctx)->bop = match(JavaParser::DOT);
                    setState(1435);
                    _errHandler->sync(this);
                    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 167, _ctx)) {
                    case 1: {
                        setState(1424);
                        identifier();
                        break;
                    }

                    case 2: {
                        setState(1425);
                        methodCall();
                        break;
                    }

                    case 3: {
                        setState(1426);
                        match(JavaParser::THIS);
                        break;
                    }

                    case 4: {
                        setState(1427);
                        match(JavaParser::NEW);
                        setState(1429);
                        _errHandler->sync(this);

                        _la = _input->LA(1);
                        if (_la == JavaParser::LT) {
                            setState(1428);
                            nonWildcardTypeArguments();
                        }
                        setState(1431);
                        innerCreator();
                        break;
                    }

                    case 5: {
                        setState(1432);
                        match(JavaParser::SUPER);
                        setState(1433);
                        superSuffix();
                        break;
                    }

                    case 6: {
                        setState(1434);
                        explicitGenericInvocation();
                        break;
                    }

                    default:
                        break;
                    }
                    break;
                }

                case 15: {
                    _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
                    pushNewRecursionContext(_localctx, startState, RuleExpression);
                    setState(1437);

                    if (!(precpred(_ctx, 22)))
                        throw FailedPredicateException(this, "precpred(_ctx, 22)");
                    setState(1438);
                    match(JavaParser::COLONCOLON);
                    setState(1440);
                    _errHandler->sync(this);

                    _la = _input->LA(1);
                    if (_la == JavaParser::LT) {
                        setState(1439);
                        typeArguments();
                    }
                    setState(1442);
                    identifier();
                    break;
                }

                case 16: {
                    _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
                    pushNewRecursionContext(_localctx, startState, RuleExpression);
                    setState(1443);

                    if (!(precpred(_ctx, 18)))
                        throw FailedPredicateException(this, "precpred(_ctx, 18)");
                    setState(1444);
                    antlrcpp::downCast<ExpressionContext *>(_localctx)->postfix = _input->LT(1);
                    _la = _input->LA(1);
                    if (!(_la == JavaParser::INC

                          || _la == JavaParser::DEC)) {
                        antlrcpp::downCast<ExpressionContext *>(_localctx)->postfix = _errHandler->recoverInline(this);
                    } else {
                        _errHandler->reportMatch(this);
                        consume();
                    }
                    break;
                }

                case 17: {
                    _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
                    pushNewRecursionContext(_localctx, startState, RuleExpression);
                    setState(1445);

                    if (!(precpred(_ctx, 10)))
                        throw FailedPredicateException(this, "precpred(_ctx, 10)");
                    setState(1446);
                    antlrcpp::downCast<ExpressionContext *>(_localctx)->bop = match(JavaParser::INSTANCEOF);
                    setState(1449);
                    _errHandler->sync(this);
                    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 169, _ctx)) {
                    case 1: {
                        setState(1447);
                        typeType();
                        break;
                    }

                    case 2: {
                        setState(1448);
                        pattern();
                        break;
                    }

                    default:
                        break;
                    }
                    break;
                }

                default:
                    break;
                }
            }
            setState(1455);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 171, _ctx);
        }
    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }
    return _localctx;
}

//----------------- PatternContext ------------------------------------------------------------------

JavaParser::PatternContext::PatternContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::TypeTypeContext *JavaParser::PatternContext::typeType()
{
    return getRuleContext<JavaParser::TypeTypeContext>(0);
}

JavaParser::IdentifierContext *JavaParser::PatternContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

std::vector<JavaParser::VariableModifierContext *> JavaParser::PatternContext::variableModifier()
{
    return getRuleContexts<JavaParser::VariableModifierContext>();
}

JavaParser::VariableModifierContext *JavaParser::PatternContext::variableModifier(size_t i)
{
    return getRuleContext<JavaParser::VariableModifierContext>(i);
}

std::vector<JavaParser::AnnotationContext *> JavaParser::PatternContext::annotation()
{
    return getRuleContexts<JavaParser::AnnotationContext>();
}

JavaParser::AnnotationContext *JavaParser::PatternContext::annotation(size_t i)
{
    return getRuleContext<JavaParser::AnnotationContext>(i);
}

size_t JavaParser::PatternContext::getRuleIndex() const
{
    return JavaParser::RulePattern;
}

void JavaParser::PatternContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterPattern(this);
}

void JavaParser::PatternContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitPattern(this);
}

std::any JavaParser::PatternContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitPattern(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::PatternContext *JavaParser::pattern()
{
    PatternContext *_localctx = _tracker.createInstance<PatternContext>(_ctx, getState());
    enterRule(_localctx, 200, JavaParser::RulePattern);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1459);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 172, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(1456);
                variableModifier();
            }
            setState(1461);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 172, _ctx);
        }
        setState(1462);
        typeType();
        setState(1466);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 173, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(1463);
                annotation();
            }
            setState(1468);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 173, _ctx);
        }
        setState(1469);
        identifier();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- LambdaExpressionContext ------------------------------------------------------------------

JavaParser::LambdaExpressionContext::LambdaExpressionContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::LambdaParametersContext *JavaParser::LambdaExpressionContext::lambdaParameters()
{
    return getRuleContext<JavaParser::LambdaParametersContext>(0);
}

tree::TerminalNode *JavaParser::LambdaExpressionContext::ARROW()
{
    return getToken(JavaParser::ARROW, 0);
}

JavaParser::LambdaBodyContext *JavaParser::LambdaExpressionContext::lambdaBody()
{
    return getRuleContext<JavaParser::LambdaBodyContext>(0);
}

size_t JavaParser::LambdaExpressionContext::getRuleIndex() const
{
    return JavaParser::RuleLambdaExpression;
}

void JavaParser::LambdaExpressionContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterLambdaExpression(this);
}

void JavaParser::LambdaExpressionContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitLambdaExpression(this);
}

std::any JavaParser::LambdaExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitLambdaExpression(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::LambdaExpressionContext *JavaParser::lambdaExpression()
{
    LambdaExpressionContext *_localctx = _tracker.createInstance<LambdaExpressionContext>(_ctx, getState());
    enterRule(_localctx, 202, JavaParser::RuleLambdaExpression);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1471);
        lambdaParameters();
        setState(1472);
        match(JavaParser::ARROW);
        setState(1473);
        lambdaBody();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- LambdaParametersContext ------------------------------------------------------------------

JavaParser::LambdaParametersContext::LambdaParametersContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

std::vector<JavaParser::IdentifierContext *> JavaParser::LambdaParametersContext::identifier()
{
    return getRuleContexts<JavaParser::IdentifierContext>();
}

JavaParser::IdentifierContext *JavaParser::LambdaParametersContext::identifier(size_t i)
{
    return getRuleContext<JavaParser::IdentifierContext>(i);
}

tree::TerminalNode *JavaParser::LambdaParametersContext::LPAREN()
{
    return getToken(JavaParser::LPAREN, 0);
}

tree::TerminalNode *JavaParser::LambdaParametersContext::RPAREN()
{
    return getToken(JavaParser::RPAREN, 0);
}

JavaParser::FormalParameterListContext *JavaParser::LambdaParametersContext::formalParameterList()
{
    return getRuleContext<JavaParser::FormalParameterListContext>(0);
}

std::vector<tree::TerminalNode *> JavaParser::LambdaParametersContext::COMMA()
{
    return getTokens(JavaParser::COMMA);
}

tree::TerminalNode *JavaParser::LambdaParametersContext::COMMA(size_t i)
{
    return getToken(JavaParser::COMMA, i);
}

JavaParser::LambdaLVTIListContext *JavaParser::LambdaParametersContext::lambdaLVTIList()
{
    return getRuleContext<JavaParser::LambdaLVTIListContext>(0);
}

size_t JavaParser::LambdaParametersContext::getRuleIndex() const
{
    return JavaParser::RuleLambdaParameters;
}

void JavaParser::LambdaParametersContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterLambdaParameters(this);
}

void JavaParser::LambdaParametersContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitLambdaParameters(this);
}

std::any JavaParser::LambdaParametersContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitLambdaParameters(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::LambdaParametersContext *JavaParser::lambdaParameters()
{
    LambdaParametersContext *_localctx = _tracker.createInstance<LambdaParametersContext>(_ctx, getState());
    enterRule(_localctx, 204, JavaParser::RuleLambdaParameters);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(1497);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 177, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(1475);
            identifier();
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(1476);
            match(JavaParser::LPAREN);
            setState(1478);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (((((_la - 3) & ~0x3fULL) == 0) && ((1ULL << (_la - 3)) & 9223090579141986341) != 0)
                || _la == JavaParser::AT

                || _la == JavaParser::IDENTIFIER) {
                setState(1477);
                formalParameterList();
            }
            setState(1480);
            match(JavaParser::RPAREN);
            break;
        }

        case 3: {
            enterOuterAlt(_localctx, 3);
            setState(1481);
            match(JavaParser::LPAREN);
            setState(1482);
            identifier();
            setState(1487);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == JavaParser::COMMA) {
                setState(1483);
                match(JavaParser::COMMA);
                setState(1484);
                identifier();
                setState(1489);
                _errHandler->sync(this);
                _la = _input->LA(1);
            }
            setState(1490);
            match(JavaParser::RPAREN);
            break;
        }

        case 4: {
            enterOuterAlt(_localctx, 4);
            setState(1492);
            match(JavaParser::LPAREN);
            setState(1494);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (((((_la - 18) & ~0x3fULL) == 0) && ((1ULL << (_la - 18)) & 281466386776065) != 0)
                || _la == JavaParser::AT

                || _la == JavaParser::IDENTIFIER) {
                setState(1493);
                lambdaLVTIList();
            }
            setState(1496);
            match(JavaParser::RPAREN);
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- LambdaBodyContext ------------------------------------------------------------------

JavaParser::LambdaBodyContext::LambdaBodyContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::ExpressionContext *JavaParser::LambdaBodyContext::expression()
{
    return getRuleContext<JavaParser::ExpressionContext>(0);
}

JavaParser::BlockContext *JavaParser::LambdaBodyContext::block()
{
    return getRuleContext<JavaParser::BlockContext>(0);
}

size_t JavaParser::LambdaBodyContext::getRuleIndex() const
{
    return JavaParser::RuleLambdaBody;
}

void JavaParser::LambdaBodyContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterLambdaBody(this);
}

void JavaParser::LambdaBodyContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitLambdaBody(this);
}

std::any JavaParser::LambdaBodyContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitLambdaBody(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::LambdaBodyContext *JavaParser::lambdaBody()
{
    LambdaBodyContext *_localctx = _tracker.createInstance<LambdaBodyContext>(_ctx, getState());
    enterRule(_localctx, 206, JavaParser::RuleLambdaBody);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(1501);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case JavaParser::BOOLEAN:
        case JavaParser::BYTE:
        case JavaParser::CHAR:
        case JavaParser::DOUBLE:
        case JavaParser::FLOAT:
        case JavaParser::INT:
        case JavaParser::LONG:
        case JavaParser::NEW:
        case JavaParser::SHORT:
        case JavaParser::SUPER:
        case JavaParser::SWITCH:
        case JavaParser::THIS:
        case JavaParser::VOID:
        case JavaParser::MODULE:
        case JavaParser::OPEN:
        case JavaParser::REQUIRES:
        case JavaParser::EXPORTS:
        case JavaParser::OPENS:
        case JavaParser::TO:
        case JavaParser::USES:
        case JavaParser::PROVIDES:
        case JavaParser::WITH:
        case JavaParser::TRANSITIVE:
        case JavaParser::VAR:
        case JavaParser::YIELD:
        case JavaParser::RECORD:
        case JavaParser::SEALED:
        case JavaParser::PERMITS:
        case JavaParser::DECIMAL_LITERAL:
        case JavaParser::HEX_LITERAL:
        case JavaParser::OCT_LITERAL:
        case JavaParser::BINARY_LITERAL:
        case JavaParser::FLOAT_LITERAL:
        case JavaParser::HEX_FLOAT_LITERAL:
        case JavaParser::BOOL_LITERAL:
        case JavaParser::CHAR_LITERAL:
        case JavaParser::STRING_LITERAL:
        case JavaParser::TEXT_BLOCK:
        case JavaParser::NULL_LITERAL:
        case JavaParser::LPAREN:
        case JavaParser::LT:
        case JavaParser::BANG:
        case JavaParser::TILDE:
        case JavaParser::INC:
        case JavaParser::DEC:
        case JavaParser::ADD:
        case JavaParser::SUB:
        case JavaParser::AT:
        case JavaParser::IDENTIFIER: {
            enterOuterAlt(_localctx, 1);
            setState(1499);
            expression(0);
            break;
        }

        case JavaParser::LBRACE: {
            enterOuterAlt(_localctx, 2);
            setState(1500);
            block();
            break;
        }

        default:
            throw NoViableAltException(this);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

JavaParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::PrimaryContext::LPAREN()
{
    return getToken(JavaParser::LPAREN, 0);
}

JavaParser::ExpressionContext *JavaParser::PrimaryContext::expression()
{
    return getRuleContext<JavaParser::ExpressionContext>(0);
}

tree::TerminalNode *JavaParser::PrimaryContext::RPAREN()
{
    return getToken(JavaParser::RPAREN, 0);
}

tree::TerminalNode *JavaParser::PrimaryContext::THIS()
{
    return getToken(JavaParser::THIS, 0);
}

tree::TerminalNode *JavaParser::PrimaryContext::SUPER()
{
    return getToken(JavaParser::SUPER, 0);
}

JavaParser::LiteralContext *JavaParser::PrimaryContext::literal()
{
    return getRuleContext<JavaParser::LiteralContext>(0);
}

JavaParser::IdentifierContext *JavaParser::PrimaryContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

JavaParser::TypeTypeOrVoidContext *JavaParser::PrimaryContext::typeTypeOrVoid()
{
    return getRuleContext<JavaParser::TypeTypeOrVoidContext>(0);
}

tree::TerminalNode *JavaParser::PrimaryContext::DOT()
{
    return getToken(JavaParser::DOT, 0);
}

tree::TerminalNode *JavaParser::PrimaryContext::CLASS()
{
    return getToken(JavaParser::CLASS, 0);
}

JavaParser::NonWildcardTypeArgumentsContext *JavaParser::PrimaryContext::nonWildcardTypeArguments()
{
    return getRuleContext<JavaParser::NonWildcardTypeArgumentsContext>(0);
}

JavaParser::ExplicitGenericInvocationSuffixContext *JavaParser::PrimaryContext::explicitGenericInvocationSuffix()
{
    return getRuleContext<JavaParser::ExplicitGenericInvocationSuffixContext>(0);
}

JavaParser::ArgumentsContext *JavaParser::PrimaryContext::arguments()
{
    return getRuleContext<JavaParser::ArgumentsContext>(0);
}

size_t JavaParser::PrimaryContext::getRuleIndex() const
{
    return JavaParser::RulePrimary;
}

void JavaParser::PrimaryContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterPrimary(this);
}

void JavaParser::PrimaryContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitPrimary(this);
}

std::any JavaParser::PrimaryContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitPrimary(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::PrimaryContext *JavaParser::primary()
{
    PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
    enterRule(_localctx, 208, JavaParser::RulePrimary);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(1521);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 180, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(1503);
            match(JavaParser::LPAREN);
            setState(1504);
            expression(0);
            setState(1505);
            match(JavaParser::RPAREN);
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(1507);
            match(JavaParser::THIS);
            break;
        }

        case 3: {
            enterOuterAlt(_localctx, 3);
            setState(1508);
            match(JavaParser::SUPER);
            break;
        }

        case 4: {
            enterOuterAlt(_localctx, 4);
            setState(1509);
            literal();
            break;
        }

        case 5: {
            enterOuterAlt(_localctx, 5);
            setState(1510);
            identifier();
            break;
        }

        case 6: {
            enterOuterAlt(_localctx, 6);
            setState(1511);
            typeTypeOrVoid();
            setState(1512);
            match(JavaParser::DOT);
            setState(1513);
            match(JavaParser::CLASS);
            break;
        }

        case 7: {
            enterOuterAlt(_localctx, 7);
            setState(1515);
            nonWildcardTypeArguments();
            setState(1519);
            _errHandler->sync(this);
            switch (_input->LA(1)) {
            case JavaParser::SUPER:
            case JavaParser::MODULE:
            case JavaParser::OPEN:
            case JavaParser::REQUIRES:
            case JavaParser::EXPORTS:
            case JavaParser::OPENS:
            case JavaParser::TO:
            case JavaParser::USES:
            case JavaParser::PROVIDES:
            case JavaParser::WITH:
            case JavaParser::TRANSITIVE:
            case JavaParser::VAR:
            case JavaParser::YIELD:
            case JavaParser::RECORD:
            case JavaParser::SEALED:
            case JavaParser::PERMITS:
            case JavaParser::IDENTIFIER: {
                setState(1516);
                explicitGenericInvocationSuffix();
                break;
            }

            case JavaParser::THIS: {
                setState(1517);
                match(JavaParser::THIS);
                setState(1518);
                arguments();
                break;
            }

            default:
                throw NoViableAltException(this);
            }
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- SwitchExpressionContext ------------------------------------------------------------------

JavaParser::SwitchExpressionContext::SwitchExpressionContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::SwitchExpressionContext::SWITCH()
{
    return getToken(JavaParser::SWITCH, 0);
}

JavaParser::ParExpressionContext *JavaParser::SwitchExpressionContext::parExpression()
{
    return getRuleContext<JavaParser::ParExpressionContext>(0);
}

tree::TerminalNode *JavaParser::SwitchExpressionContext::LBRACE()
{
    return getToken(JavaParser::LBRACE, 0);
}

tree::TerminalNode *JavaParser::SwitchExpressionContext::RBRACE()
{
    return getToken(JavaParser::RBRACE, 0);
}

std::vector<JavaParser::SwitchLabeledRuleContext *> JavaParser::SwitchExpressionContext::switchLabeledRule()
{
    return getRuleContexts<JavaParser::SwitchLabeledRuleContext>();
}

JavaParser::SwitchLabeledRuleContext *JavaParser::SwitchExpressionContext::switchLabeledRule(size_t i)
{
    return getRuleContext<JavaParser::SwitchLabeledRuleContext>(i);
}

size_t JavaParser::SwitchExpressionContext::getRuleIndex() const
{
    return JavaParser::RuleSwitchExpression;
}

void JavaParser::SwitchExpressionContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterSwitchExpression(this);
}

void JavaParser::SwitchExpressionContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitSwitchExpression(this);
}

std::any JavaParser::SwitchExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitSwitchExpression(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::SwitchExpressionContext *JavaParser::switchExpression()
{
    SwitchExpressionContext *_localctx = _tracker.createInstance<SwitchExpressionContext>(_ctx, getState());
    enterRule(_localctx, 210, JavaParser::RuleSwitchExpression);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1523);
        match(JavaParser::SWITCH);
        setState(1524);
        parExpression();
        setState(1525);
        match(JavaParser::LBRACE);
        setState(1529);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == JavaParser::CASE

               || _la == JavaParser::DEFAULT) {
            setState(1526);
            switchLabeledRule();
            setState(1531);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(1532);
        match(JavaParser::RBRACE);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- SwitchLabeledRuleContext ------------------------------------------------------------------

JavaParser::SwitchLabeledRuleContext::SwitchLabeledRuleContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::SwitchLabeledRuleContext::CASE()
{
    return getToken(JavaParser::CASE, 0);
}

JavaParser::SwitchRuleOutcomeContext *JavaParser::SwitchLabeledRuleContext::switchRuleOutcome()
{
    return getRuleContext<JavaParser::SwitchRuleOutcomeContext>(0);
}

tree::TerminalNode *JavaParser::SwitchLabeledRuleContext::ARROW()
{
    return getToken(JavaParser::ARROW, 0);
}

tree::TerminalNode *JavaParser::SwitchLabeledRuleContext::COLON()
{
    return getToken(JavaParser::COLON, 0);
}

JavaParser::ExpressionListContext *JavaParser::SwitchLabeledRuleContext::expressionList()
{
    return getRuleContext<JavaParser::ExpressionListContext>(0);
}

tree::TerminalNode *JavaParser::SwitchLabeledRuleContext::NULL_LITERAL()
{
    return getToken(JavaParser::NULL_LITERAL, 0);
}

JavaParser::GuardedPatternContext *JavaParser::SwitchLabeledRuleContext::guardedPattern()
{
    return getRuleContext<JavaParser::GuardedPatternContext>(0);
}

tree::TerminalNode *JavaParser::SwitchLabeledRuleContext::DEFAULT()
{
    return getToken(JavaParser::DEFAULT, 0);
}

size_t JavaParser::SwitchLabeledRuleContext::getRuleIndex() const
{
    return JavaParser::RuleSwitchLabeledRule;
}

void JavaParser::SwitchLabeledRuleContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterSwitchLabeledRule(this);
}

void JavaParser::SwitchLabeledRuleContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitSwitchLabeledRule(this);
}

std::any JavaParser::SwitchLabeledRuleContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitSwitchLabeledRule(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::SwitchLabeledRuleContext *JavaParser::switchLabeledRule()
{
    SwitchLabeledRuleContext *_localctx = _tracker.createInstance<SwitchLabeledRuleContext>(_ctx, getState());
    enterRule(_localctx, 212, JavaParser::RuleSwitchLabeledRule);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(1545);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case JavaParser::CASE: {
            enterOuterAlt(_localctx, 1);
            setState(1534);
            match(JavaParser::CASE);
            setState(1538);
            _errHandler->sync(this);
            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 182, _ctx)) {
            case 1: {
                setState(1535);
                expressionList();
                break;
            }

            case 2: {
                setState(1536);
                match(JavaParser::NULL_LITERAL);
                break;
            }

            case 3: {
                setState(1537);
                guardedPattern(0);
                break;
            }

            default:
                break;
            }
            setState(1540);
            _la = _input->LA(1);
            if (!(_la == JavaParser::COLON

                  || _la == JavaParser::ARROW)) {
                _errHandler->recoverInline(this);
            } else {
                _errHandler->reportMatch(this);
                consume();
            }
            setState(1541);
            switchRuleOutcome();
            break;
        }

        case JavaParser::DEFAULT: {
            enterOuterAlt(_localctx, 2);
            setState(1542);
            match(JavaParser::DEFAULT);
            setState(1543);
            _la = _input->LA(1);
            if (!(_la == JavaParser::COLON

                  || _la == JavaParser::ARROW)) {
                _errHandler->recoverInline(this);
            } else {
                _errHandler->reportMatch(this);
                consume();
            }
            setState(1544);
            switchRuleOutcome();
            break;
        }

        default:
            throw NoViableAltException(this);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- GuardedPatternContext ------------------------------------------------------------------

JavaParser::GuardedPatternContext::GuardedPatternContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::GuardedPatternContext::LPAREN()
{
    return getToken(JavaParser::LPAREN, 0);
}

JavaParser::GuardedPatternContext *JavaParser::GuardedPatternContext::guardedPattern()
{
    return getRuleContext<JavaParser::GuardedPatternContext>(0);
}

tree::TerminalNode *JavaParser::GuardedPatternContext::RPAREN()
{
    return getToken(JavaParser::RPAREN, 0);
}

JavaParser::TypeTypeContext *JavaParser::GuardedPatternContext::typeType()
{
    return getRuleContext<JavaParser::TypeTypeContext>(0);
}

JavaParser::IdentifierContext *JavaParser::GuardedPatternContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

std::vector<JavaParser::VariableModifierContext *> JavaParser::GuardedPatternContext::variableModifier()
{
    return getRuleContexts<JavaParser::VariableModifierContext>();
}

JavaParser::VariableModifierContext *JavaParser::GuardedPatternContext::variableModifier(size_t i)
{
    return getRuleContext<JavaParser::VariableModifierContext>(i);
}

std::vector<JavaParser::AnnotationContext *> JavaParser::GuardedPatternContext::annotation()
{
    return getRuleContexts<JavaParser::AnnotationContext>();
}

JavaParser::AnnotationContext *JavaParser::GuardedPatternContext::annotation(size_t i)
{
    return getRuleContext<JavaParser::AnnotationContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::GuardedPatternContext::AND()
{
    return getTokens(JavaParser::AND);
}

tree::TerminalNode *JavaParser::GuardedPatternContext::AND(size_t i)
{
    return getToken(JavaParser::AND, i);
}

std::vector<JavaParser::ExpressionContext *> JavaParser::GuardedPatternContext::expression()
{
    return getRuleContexts<JavaParser::ExpressionContext>();
}

JavaParser::ExpressionContext *JavaParser::GuardedPatternContext::expression(size_t i)
{
    return getRuleContext<JavaParser::ExpressionContext>(i);
}

size_t JavaParser::GuardedPatternContext::getRuleIndex() const
{
    return JavaParser::RuleGuardedPattern;
}

void JavaParser::GuardedPatternContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterGuardedPattern(this);
}

void JavaParser::GuardedPatternContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitGuardedPattern(this);
}

std::any JavaParser::GuardedPatternContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitGuardedPattern(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::GuardedPatternContext *JavaParser::guardedPattern()
{
    return guardedPattern(0);
}

JavaParser::GuardedPatternContext *JavaParser::guardedPattern(int precedence)
{
    ParserRuleContext *parentContext = _ctx;
    size_t parentState = getState();
    JavaParser::GuardedPatternContext *_localctx = _tracker.createInstance<GuardedPatternContext>(_ctx, parentState);
    JavaParser::GuardedPatternContext *previousContext = _localctx;
    (void) previousContext; // Silence compiler, in case the context is not used by generated code.
    size_t startState = 214;
    enterRecursionRule(_localctx, 214, JavaParser::RuleGuardedPattern, precedence);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        unrollRecursionContexts(parentContext);
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1573);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case JavaParser::LPAREN: {
            setState(1548);
            match(JavaParser::LPAREN);
            setState(1549);
            guardedPattern(0);
            setState(1550);
            match(JavaParser::RPAREN);
            break;
        }

        case JavaParser::BOOLEAN:
        case JavaParser::BYTE:
        case JavaParser::CHAR:
        case JavaParser::DOUBLE:
        case JavaParser::FINAL:
        case JavaParser::FLOAT:
        case JavaParser::INT:
        case JavaParser::LONG:
        case JavaParser::SHORT:
        case JavaParser::MODULE:
        case JavaParser::OPEN:
        case JavaParser::REQUIRES:
        case JavaParser::EXPORTS:
        case JavaParser::OPENS:
        case JavaParser::TO:
        case JavaParser::USES:
        case JavaParser::PROVIDES:
        case JavaParser::WITH:
        case JavaParser::TRANSITIVE:
        case JavaParser::VAR:
        case JavaParser::YIELD:
        case JavaParser::RECORD:
        case JavaParser::SEALED:
        case JavaParser::PERMITS:
        case JavaParser::AT:
        case JavaParser::IDENTIFIER: {
            setState(1555);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 184, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                    setState(1552);
                    variableModifier();
                }
                setState(1557);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 184, _ctx);
            }
            setState(1558);
            typeType();
            setState(1562);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 185, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                    setState(1559);
                    annotation();
                }
                setState(1564);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 185, _ctx);
            }
            setState(1565);
            identifier();
            setState(1570);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 186, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                    setState(1566);
                    match(JavaParser::AND);
                    setState(1567);
                    expression(0);
                }
                setState(1572);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 186, _ctx);
            }
            break;
        }

        default:
            throw NoViableAltException(this);
        }
        _ctx->stop = _input->LT(-1);
        setState(1580);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 188, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                if (!_parseListeners.empty())
                    triggerExitRuleEvent();
                previousContext = _localctx;
                _localctx = _tracker.createInstance<GuardedPatternContext>(parentContext, parentState);
                pushNewRecursionContext(_localctx, startState, RuleGuardedPattern);
                setState(1575);

                if (!(precpred(_ctx, 1)))
                    throw FailedPredicateException(this, "precpred(_ctx, 1)");
                setState(1576);
                match(JavaParser::AND);
                setState(1577);
                expression(0);
            }
            setState(1582);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 188, _ctx);
        }
    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }
    return _localctx;
}

//----------------- SwitchRuleOutcomeContext ------------------------------------------------------------------

JavaParser::SwitchRuleOutcomeContext::SwitchRuleOutcomeContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::BlockContext *JavaParser::SwitchRuleOutcomeContext::block()
{
    return getRuleContext<JavaParser::BlockContext>(0);
}

std::vector<JavaParser::BlockStatementContext *> JavaParser::SwitchRuleOutcomeContext::blockStatement()
{
    return getRuleContexts<JavaParser::BlockStatementContext>();
}

JavaParser::BlockStatementContext *JavaParser::SwitchRuleOutcomeContext::blockStatement(size_t i)
{
    return getRuleContext<JavaParser::BlockStatementContext>(i);
}

size_t JavaParser::SwitchRuleOutcomeContext::getRuleIndex() const
{
    return JavaParser::RuleSwitchRuleOutcome;
}

void JavaParser::SwitchRuleOutcomeContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterSwitchRuleOutcome(this);
}

void JavaParser::SwitchRuleOutcomeContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitSwitchRuleOutcome(this);
}

std::any JavaParser::SwitchRuleOutcomeContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitSwitchRuleOutcome(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::SwitchRuleOutcomeContext *JavaParser::switchRuleOutcome()
{
    SwitchRuleOutcomeContext *_localctx = _tracker.createInstance<SwitchRuleOutcomeContext>(_ctx, getState());
    enterRule(_localctx, 216, JavaParser::RuleSwitchRuleOutcome);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(1590);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 190, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(1583);
            block();
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(1587);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (((((_la - 1) & ~0x3fULL) == 0) && ((1ULL << (_la - 1)) & -334254282492513) != 0)
                   || ((((_la - 65) & ~0x3fULL) == 0) && ((1ULL << (_la - 65)) & -8935141145188974593) != 0)) {
                setState(1584);
                blockStatement();
                setState(1589);
                _errHandler->sync(this);
                _la = _input->LA(1);
            }
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ClassTypeContext ------------------------------------------------------------------

JavaParser::ClassTypeContext::ClassTypeContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::IdentifierContext *JavaParser::ClassTypeContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

JavaParser::ClassOrInterfaceTypeContext *JavaParser::ClassTypeContext::classOrInterfaceType()
{
    return getRuleContext<JavaParser::ClassOrInterfaceTypeContext>(0);
}

tree::TerminalNode *JavaParser::ClassTypeContext::DOT()
{
    return getToken(JavaParser::DOT, 0);
}

std::vector<JavaParser::AnnotationContext *> JavaParser::ClassTypeContext::annotation()
{
    return getRuleContexts<JavaParser::AnnotationContext>();
}

JavaParser::AnnotationContext *JavaParser::ClassTypeContext::annotation(size_t i)
{
    return getRuleContext<JavaParser::AnnotationContext>(i);
}

JavaParser::TypeArgumentsContext *JavaParser::ClassTypeContext::typeArguments()
{
    return getRuleContext<JavaParser::TypeArgumentsContext>(0);
}

size_t JavaParser::ClassTypeContext::getRuleIndex() const
{
    return JavaParser::RuleClassType;
}

void JavaParser::ClassTypeContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterClassType(this);
}

void JavaParser::ClassTypeContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitClassType(this);
}

std::any JavaParser::ClassTypeContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitClassType(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ClassTypeContext *JavaParser::classType()
{
    ClassTypeContext *_localctx = _tracker.createInstance<ClassTypeContext>(_ctx, getState());
    enterRule(_localctx, 218, JavaParser::RuleClassType);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1595);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 191, _ctx)) {
        case 1: {
            setState(1592);
            classOrInterfaceType();
            setState(1593);
            match(JavaParser::DOT);
            break;
        }

        default:
            break;
        }
        setState(1600);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 192, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(1597);
                annotation();
            }
            setState(1602);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 192, _ctx);
        }
        setState(1603);
        identifier();
        setState(1605);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::LT) {
            setState(1604);
            typeArguments();
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- CreatorContext ------------------------------------------------------------------

JavaParser::CreatorContext::CreatorContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::CreatedNameContext *JavaParser::CreatorContext::createdName()
{
    return getRuleContext<JavaParser::CreatedNameContext>(0);
}

JavaParser::ClassCreatorRestContext *JavaParser::CreatorContext::classCreatorRest()
{
    return getRuleContext<JavaParser::ClassCreatorRestContext>(0);
}

JavaParser::NonWildcardTypeArgumentsContext *JavaParser::CreatorContext::nonWildcardTypeArguments()
{
    return getRuleContext<JavaParser::NonWildcardTypeArgumentsContext>(0);
}

JavaParser::ArrayCreatorRestContext *JavaParser::CreatorContext::arrayCreatorRest()
{
    return getRuleContext<JavaParser::ArrayCreatorRestContext>(0);
}

size_t JavaParser::CreatorContext::getRuleIndex() const
{
    return JavaParser::RuleCreator;
}

void JavaParser::CreatorContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterCreator(this);
}

void JavaParser::CreatorContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitCreator(this);
}

std::any JavaParser::CreatorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitCreator(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::CreatorContext *JavaParser::creator()
{
    CreatorContext *_localctx = _tracker.createInstance<CreatorContext>(_ctx, getState());
    enterRule(_localctx, 220, JavaParser::RuleCreator);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(1616);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(1608);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == JavaParser::LT) {
                setState(1607);
                nonWildcardTypeArguments();
            }
            setState(1610);
            createdName();
            setState(1611);
            classCreatorRest();
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(1613);
            createdName();
            setState(1614);
            arrayCreatorRest();
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- CreatedNameContext ------------------------------------------------------------------

JavaParser::CreatedNameContext::CreatedNameContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

std::vector<JavaParser::IdentifierContext *> JavaParser::CreatedNameContext::identifier()
{
    return getRuleContexts<JavaParser::IdentifierContext>();
}

JavaParser::IdentifierContext *JavaParser::CreatedNameContext::identifier(size_t i)
{
    return getRuleContext<JavaParser::IdentifierContext>(i);
}

std::vector<JavaParser::TypeArgumentsOrDiamondContext *> JavaParser::CreatedNameContext::typeArgumentsOrDiamond()
{
    return getRuleContexts<JavaParser::TypeArgumentsOrDiamondContext>();
}

JavaParser::TypeArgumentsOrDiamondContext *JavaParser::CreatedNameContext::typeArgumentsOrDiamond(size_t i)
{
    return getRuleContext<JavaParser::TypeArgumentsOrDiamondContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::CreatedNameContext::DOT()
{
    return getTokens(JavaParser::DOT);
}

tree::TerminalNode *JavaParser::CreatedNameContext::DOT(size_t i)
{
    return getToken(JavaParser::DOT, i);
}

JavaParser::PrimitiveTypeContext *JavaParser::CreatedNameContext::primitiveType()
{
    return getRuleContext<JavaParser::PrimitiveTypeContext>(0);
}

size_t JavaParser::CreatedNameContext::getRuleIndex() const
{
    return JavaParser::RuleCreatedName;
}

void JavaParser::CreatedNameContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterCreatedName(this);
}

void JavaParser::CreatedNameContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitCreatedName(this);
}

std::any JavaParser::CreatedNameContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitCreatedName(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::CreatedNameContext *JavaParser::createdName()
{
    CreatedNameContext *_localctx = _tracker.createInstance<CreatedNameContext>(_ctx, getState());
    enterRule(_localctx, 222, JavaParser::RuleCreatedName);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(1633);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case JavaParser::MODULE:
        case JavaParser::OPEN:
        case JavaParser::REQUIRES:
        case JavaParser::EXPORTS:
        case JavaParser::OPENS:
        case JavaParser::TO:
        case JavaParser::USES:
        case JavaParser::PROVIDES:
        case JavaParser::WITH:
        case JavaParser::TRANSITIVE:
        case JavaParser::VAR:
        case JavaParser::YIELD:
        case JavaParser::RECORD:
        case JavaParser::SEALED:
        case JavaParser::PERMITS:
        case JavaParser::IDENTIFIER: {
            enterOuterAlt(_localctx, 1);
            setState(1618);
            identifier();
            setState(1620);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == JavaParser::LT) {
                setState(1619);
                typeArgumentsOrDiamond();
            }
            setState(1629);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == JavaParser::DOT) {
                setState(1622);
                match(JavaParser::DOT);
                setState(1623);
                identifier();
                setState(1625);
                _errHandler->sync(this);

                _la = _input->LA(1);
                if (_la == JavaParser::LT) {
                    setState(1624);
                    typeArgumentsOrDiamond();
                }
                setState(1631);
                _errHandler->sync(this);
                _la = _input->LA(1);
            }
            break;
        }

        case JavaParser::BOOLEAN:
        case JavaParser::BYTE:
        case JavaParser::CHAR:
        case JavaParser::DOUBLE:
        case JavaParser::FLOAT:
        case JavaParser::INT:
        case JavaParser::LONG:
        case JavaParser::SHORT: {
            enterOuterAlt(_localctx, 2);
            setState(1632);
            primitiveType();
            break;
        }

        default:
            throw NoViableAltException(this);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- InnerCreatorContext ------------------------------------------------------------------

JavaParser::InnerCreatorContext::InnerCreatorContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::IdentifierContext *JavaParser::InnerCreatorContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

JavaParser::ClassCreatorRestContext *JavaParser::InnerCreatorContext::classCreatorRest()
{
    return getRuleContext<JavaParser::ClassCreatorRestContext>(0);
}

JavaParser::NonWildcardTypeArgumentsOrDiamondContext *
JavaParser::InnerCreatorContext::nonWildcardTypeArgumentsOrDiamond()
{
    return getRuleContext<JavaParser::NonWildcardTypeArgumentsOrDiamondContext>(0);
}

size_t JavaParser::InnerCreatorContext::getRuleIndex() const
{
    return JavaParser::RuleInnerCreator;
}

void JavaParser::InnerCreatorContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterInnerCreator(this);
}

void JavaParser::InnerCreatorContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitInnerCreator(this);
}

std::any JavaParser::InnerCreatorContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitInnerCreator(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::InnerCreatorContext *JavaParser::innerCreator()
{
    InnerCreatorContext *_localctx = _tracker.createInstance<InnerCreatorContext>(_ctx, getState());
    enterRule(_localctx, 224, JavaParser::RuleInnerCreator);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1635);
        identifier();
        setState(1637);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaParser::LT) {
            setState(1636);
            nonWildcardTypeArgumentsOrDiamond();
        }
        setState(1639);
        classCreatorRest();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ArrayCreatorRestContext ------------------------------------------------------------------

JavaParser::ArrayCreatorRestContext::ArrayCreatorRestContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::ArrayInitializerContext *JavaParser::ArrayCreatorRestContext::arrayInitializer()
{
    return getRuleContext<JavaParser::ArrayInitializerContext>(0);
}

std::vector<tree::TerminalNode *> JavaParser::ArrayCreatorRestContext::LBRACK()
{
    return getTokens(JavaParser::LBRACK);
}

tree::TerminalNode *JavaParser::ArrayCreatorRestContext::LBRACK(size_t i)
{
    return getToken(JavaParser::LBRACK, i);
}

std::vector<tree::TerminalNode *> JavaParser::ArrayCreatorRestContext::RBRACK()
{
    return getTokens(JavaParser::RBRACK);
}

tree::TerminalNode *JavaParser::ArrayCreatorRestContext::RBRACK(size_t i)
{
    return getToken(JavaParser::RBRACK, i);
}

std::vector<JavaParser::ExpressionContext *> JavaParser::ArrayCreatorRestContext::expression()
{
    return getRuleContexts<JavaParser::ExpressionContext>();
}

JavaParser::ExpressionContext *JavaParser::ArrayCreatorRestContext::expression(size_t i)
{
    return getRuleContext<JavaParser::ExpressionContext>(i);
}

size_t JavaParser::ArrayCreatorRestContext::getRuleIndex() const
{
    return JavaParser::RuleArrayCreatorRest;
}

void JavaParser::ArrayCreatorRestContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterArrayCreatorRest(this);
}

void JavaParser::ArrayCreatorRestContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitArrayCreatorRest(this);
}

std::any JavaParser::ArrayCreatorRestContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitArrayCreatorRest(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ArrayCreatorRestContext *JavaParser::arrayCreatorRest()
{
    ArrayCreatorRestContext *_localctx = _tracker.createInstance<ArrayCreatorRestContext>(_ctx, getState());
    enterRule(_localctx, 226, JavaParser::RuleArrayCreatorRest);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        setState(1663);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 204, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(1643);
            _errHandler->sync(this);
            _la = _input->LA(1);
            do {
                setState(1641);
                match(JavaParser::LBRACK);
                setState(1642);
                match(JavaParser::RBRACK);
                setState(1645);
                _errHandler->sync(this);
                _la = _input->LA(1);
            } while (_la == JavaParser::LBRACK);
            setState(1647);
            arrayInitializer();
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(1652);
            _errHandler->sync(this);
            alt = 1;
            do {
                switch (alt) {
                case 1: {
                    setState(1648);
                    match(JavaParser::LBRACK);
                    setState(1649);
                    expression(0);
                    setState(1650);
                    match(JavaParser::RBRACK);
                    break;
                }

                default:
                    throw NoViableAltException(this);
                }
                setState(1654);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 202, _ctx);
            } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
            setState(1660);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 203, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
                if (alt == 1) {
                    setState(1656);
                    match(JavaParser::LBRACK);
                    setState(1657);
                    match(JavaParser::RBRACK);
                }
                setState(1662);
                _errHandler->sync(this);
                alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 203, _ctx);
            }
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ClassCreatorRestContext ------------------------------------------------------------------

JavaParser::ClassCreatorRestContext::ClassCreatorRestContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::ArgumentsContext *JavaParser::ClassCreatorRestContext::arguments()
{
    return getRuleContext<JavaParser::ArgumentsContext>(0);
}

JavaParser::ClassBodyContext *JavaParser::ClassCreatorRestContext::classBody()
{
    return getRuleContext<JavaParser::ClassBodyContext>(0);
}

size_t JavaParser::ClassCreatorRestContext::getRuleIndex() const
{
    return JavaParser::RuleClassCreatorRest;
}

void JavaParser::ClassCreatorRestContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterClassCreatorRest(this);
}

void JavaParser::ClassCreatorRestContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitClassCreatorRest(this);
}

std::any JavaParser::ClassCreatorRestContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitClassCreatorRest(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ClassCreatorRestContext *JavaParser::classCreatorRest()
{
    ClassCreatorRestContext *_localctx = _tracker.createInstance<ClassCreatorRestContext>(_ctx, getState());
    enterRule(_localctx, 228, JavaParser::RuleClassCreatorRest);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1665);
        arguments();
        setState(1667);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 205, _ctx)) {
        case 1: {
            setState(1666);
            classBody();
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ExplicitGenericInvocationContext ------------------------------------------------------------------

JavaParser::ExplicitGenericInvocationContext::ExplicitGenericInvocationContext(ParserRuleContext *parent,
                                                                               size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::NonWildcardTypeArgumentsContext *JavaParser::ExplicitGenericInvocationContext::nonWildcardTypeArguments()
{
    return getRuleContext<JavaParser::NonWildcardTypeArgumentsContext>(0);
}

JavaParser::ExplicitGenericInvocationSuffixContext *
JavaParser::ExplicitGenericInvocationContext::explicitGenericInvocationSuffix()
{
    return getRuleContext<JavaParser::ExplicitGenericInvocationSuffixContext>(0);
}

size_t JavaParser::ExplicitGenericInvocationContext::getRuleIndex() const
{
    return JavaParser::RuleExplicitGenericInvocation;
}

void JavaParser::ExplicitGenericInvocationContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterExplicitGenericInvocation(this);
}

void JavaParser::ExplicitGenericInvocationContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitExplicitGenericInvocation(this);
}

std::any JavaParser::ExplicitGenericInvocationContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitExplicitGenericInvocation(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ExplicitGenericInvocationContext *JavaParser::explicitGenericInvocation()
{
    ExplicitGenericInvocationContext *_localctx =
        _tracker.createInstance<ExplicitGenericInvocationContext>(_ctx, getState());
    enterRule(_localctx, 230, JavaParser::RuleExplicitGenericInvocation);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1669);
        nonWildcardTypeArguments();
        setState(1670);
        explicitGenericInvocationSuffix();

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TypeArgumentsOrDiamondContext ------------------------------------------------------------------

JavaParser::TypeArgumentsOrDiamondContext::TypeArgumentsOrDiamondContext(ParserRuleContext *parent,
                                                                         size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::TypeArgumentsOrDiamondContext::LT()
{
    return getToken(JavaParser::LT, 0);
}

tree::TerminalNode *JavaParser::TypeArgumentsOrDiamondContext::GT()
{
    return getToken(JavaParser::GT, 0);
}

JavaParser::TypeArgumentsContext *JavaParser::TypeArgumentsOrDiamondContext::typeArguments()
{
    return getRuleContext<JavaParser::TypeArgumentsContext>(0);
}

size_t JavaParser::TypeArgumentsOrDiamondContext::getRuleIndex() const
{
    return JavaParser::RuleTypeArgumentsOrDiamond;
}

void JavaParser::TypeArgumentsOrDiamondContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterTypeArgumentsOrDiamond(this);
}

void JavaParser::TypeArgumentsOrDiamondContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitTypeArgumentsOrDiamond(this);
}

std::any JavaParser::TypeArgumentsOrDiamondContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitTypeArgumentsOrDiamond(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::TypeArgumentsOrDiamondContext *JavaParser::typeArgumentsOrDiamond()
{
    TypeArgumentsOrDiamondContext *_localctx = _tracker.createInstance<TypeArgumentsOrDiamondContext>(_ctx, getState());
    enterRule(_localctx, 232, JavaParser::RuleTypeArgumentsOrDiamond);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(1675);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 206, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(1672);
            match(JavaParser::LT);
            setState(1673);
            match(JavaParser::GT);
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(1674);
            typeArguments();
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- NonWildcardTypeArgumentsOrDiamondContext
//------------------------------------------------------------------

JavaParser::NonWildcardTypeArgumentsOrDiamondContext::NonWildcardTypeArgumentsOrDiamondContext(
    ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::NonWildcardTypeArgumentsOrDiamondContext::LT()
{
    return getToken(JavaParser::LT, 0);
}

tree::TerminalNode *JavaParser::NonWildcardTypeArgumentsOrDiamondContext::GT()
{
    return getToken(JavaParser::GT, 0);
}

JavaParser::NonWildcardTypeArgumentsContext *
JavaParser::NonWildcardTypeArgumentsOrDiamondContext::nonWildcardTypeArguments()
{
    return getRuleContext<JavaParser::NonWildcardTypeArgumentsContext>(0);
}

size_t JavaParser::NonWildcardTypeArgumentsOrDiamondContext::getRuleIndex() const
{
    return JavaParser::RuleNonWildcardTypeArgumentsOrDiamond;
}

void JavaParser::NonWildcardTypeArgumentsOrDiamondContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterNonWildcardTypeArgumentsOrDiamond(this);
}

void JavaParser::NonWildcardTypeArgumentsOrDiamondContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitNonWildcardTypeArgumentsOrDiamond(this);
}

std::any JavaParser::NonWildcardTypeArgumentsOrDiamondContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitNonWildcardTypeArgumentsOrDiamond(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::NonWildcardTypeArgumentsOrDiamondContext *JavaParser::nonWildcardTypeArgumentsOrDiamond()
{
    NonWildcardTypeArgumentsOrDiamondContext *_localctx =
        _tracker.createInstance<NonWildcardTypeArgumentsOrDiamondContext>(_ctx, getState());
    enterRule(_localctx, 234, JavaParser::RuleNonWildcardTypeArgumentsOrDiamond);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(1680);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 207, _ctx)) {
        case 1: {
            enterOuterAlt(_localctx, 1);
            setState(1677);
            match(JavaParser::LT);
            setState(1678);
            match(JavaParser::GT);
            break;
        }

        case 2: {
            enterOuterAlt(_localctx, 2);
            setState(1679);
            nonWildcardTypeArguments();
            break;
        }

        default:
            break;
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- NonWildcardTypeArgumentsContext ------------------------------------------------------------------

JavaParser::NonWildcardTypeArgumentsContext::NonWildcardTypeArgumentsContext(ParserRuleContext *parent,
                                                                             size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::NonWildcardTypeArgumentsContext::LT()
{
    return getToken(JavaParser::LT, 0);
}

JavaParser::TypeListContext *JavaParser::NonWildcardTypeArgumentsContext::typeList()
{
    return getRuleContext<JavaParser::TypeListContext>(0);
}

tree::TerminalNode *JavaParser::NonWildcardTypeArgumentsContext::GT()
{
    return getToken(JavaParser::GT, 0);
}

size_t JavaParser::NonWildcardTypeArgumentsContext::getRuleIndex() const
{
    return JavaParser::RuleNonWildcardTypeArguments;
}

void JavaParser::NonWildcardTypeArgumentsContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterNonWildcardTypeArguments(this);
}

void JavaParser::NonWildcardTypeArgumentsContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitNonWildcardTypeArguments(this);
}

std::any JavaParser::NonWildcardTypeArgumentsContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitNonWildcardTypeArguments(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::NonWildcardTypeArgumentsContext *JavaParser::nonWildcardTypeArguments()
{
    NonWildcardTypeArgumentsContext *_localctx =
        _tracker.createInstance<NonWildcardTypeArgumentsContext>(_ctx, getState());
    enterRule(_localctx, 236, JavaParser::RuleNonWildcardTypeArguments);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1682);
        match(JavaParser::LT);
        setState(1683);
        typeList();
        setState(1684);
        match(JavaParser::GT);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TypeListContext ------------------------------------------------------------------

JavaParser::TypeListContext::TypeListContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

std::vector<JavaParser::TypeTypeContext *> JavaParser::TypeListContext::typeType()
{
    return getRuleContexts<JavaParser::TypeTypeContext>();
}

JavaParser::TypeTypeContext *JavaParser::TypeListContext::typeType(size_t i)
{
    return getRuleContext<JavaParser::TypeTypeContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::TypeListContext::COMMA()
{
    return getTokens(JavaParser::COMMA);
}

tree::TerminalNode *JavaParser::TypeListContext::COMMA(size_t i)
{
    return getToken(JavaParser::COMMA, i);
}

size_t JavaParser::TypeListContext::getRuleIndex() const
{
    return JavaParser::RuleTypeList;
}

void JavaParser::TypeListContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterTypeList(this);
}

void JavaParser::TypeListContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitTypeList(this);
}

std::any JavaParser::TypeListContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitTypeList(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::TypeListContext *JavaParser::typeList()
{
    TypeListContext *_localctx = _tracker.createInstance<TypeListContext>(_ctx, getState());
    enterRule(_localctx, 238, JavaParser::RuleTypeList);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1686);
        typeType();
        setState(1691);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == JavaParser::COMMA) {
            setState(1687);
            match(JavaParser::COMMA);
            setState(1688);
            typeType();
            setState(1693);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TypeTypeContext ------------------------------------------------------------------

JavaParser::TypeTypeContext::TypeTypeContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::ClassOrInterfaceTypeContext *JavaParser::TypeTypeContext::classOrInterfaceType()
{
    return getRuleContext<JavaParser::ClassOrInterfaceTypeContext>(0);
}

JavaParser::PrimitiveTypeContext *JavaParser::TypeTypeContext::primitiveType()
{
    return getRuleContext<JavaParser::PrimitiveTypeContext>(0);
}

std::vector<JavaParser::AnnotationContext *> JavaParser::TypeTypeContext::annotation()
{
    return getRuleContexts<JavaParser::AnnotationContext>();
}

JavaParser::AnnotationContext *JavaParser::TypeTypeContext::annotation(size_t i)
{
    return getRuleContext<JavaParser::AnnotationContext>(i);
}

std::vector<tree::TerminalNode *> JavaParser::TypeTypeContext::LBRACK()
{
    return getTokens(JavaParser::LBRACK);
}

tree::TerminalNode *JavaParser::TypeTypeContext::LBRACK(size_t i)
{
    return getToken(JavaParser::LBRACK, i);
}

std::vector<tree::TerminalNode *> JavaParser::TypeTypeContext::RBRACK()
{
    return getTokens(JavaParser::RBRACK);
}

tree::TerminalNode *JavaParser::TypeTypeContext::RBRACK(size_t i)
{
    return getToken(JavaParser::RBRACK, i);
}

size_t JavaParser::TypeTypeContext::getRuleIndex() const
{
    return JavaParser::RuleTypeType;
}

void JavaParser::TypeTypeContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterTypeType(this);
}

void JavaParser::TypeTypeContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitTypeType(this);
}

std::any JavaParser::TypeTypeContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitTypeType(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::TypeTypeContext *JavaParser::typeType()
{
    TypeTypeContext *_localctx = _tracker.createInstance<TypeTypeContext>(_ctx, getState());
    enterRule(_localctx, 240, JavaParser::RuleTypeType);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(1697);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 209, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(1694);
                annotation();
            }
            setState(1699);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 209, _ctx);
        }
        setState(1702);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case JavaParser::MODULE:
        case JavaParser::OPEN:
        case JavaParser::REQUIRES:
        case JavaParser::EXPORTS:
        case JavaParser::OPENS:
        case JavaParser::TO:
        case JavaParser::USES:
        case JavaParser::PROVIDES:
        case JavaParser::WITH:
        case JavaParser::TRANSITIVE:
        case JavaParser::VAR:
        case JavaParser::YIELD:
        case JavaParser::RECORD:
        case JavaParser::SEALED:
        case JavaParser::PERMITS:
        case JavaParser::IDENTIFIER: {
            setState(1700);
            classOrInterfaceType();
            break;
        }

        case JavaParser::BOOLEAN:
        case JavaParser::BYTE:
        case JavaParser::CHAR:
        case JavaParser::DOUBLE:
        case JavaParser::FLOAT:
        case JavaParser::INT:
        case JavaParser::LONG:
        case JavaParser::SHORT: {
            setState(1701);
            primitiveType();
            break;
        }

        default:
            throw NoViableAltException(this);
        }
        setState(1714);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 212, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
                setState(1707);
                _errHandler->sync(this);
                _la = _input->LA(1);
                while (((((_la - 51) & ~0x3fULL) == 0) && ((1ULL << (_la - 51)) & 32767) != 0) || _la == JavaParser::AT

                       || _la == JavaParser::IDENTIFIER) {
                    setState(1704);
                    annotation();
                    setState(1709);
                    _errHandler->sync(this);
                    _la = _input->LA(1);
                }
                setState(1710);
                match(JavaParser::LBRACK);
                setState(1711);
                match(JavaParser::RBRACK);
            }
            setState(1716);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 212, _ctx);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- PrimitiveTypeContext ------------------------------------------------------------------

JavaParser::PrimitiveTypeContext::PrimitiveTypeContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::PrimitiveTypeContext::BOOLEAN()
{
    return getToken(JavaParser::BOOLEAN, 0);
}

tree::TerminalNode *JavaParser::PrimitiveTypeContext::CHAR()
{
    return getToken(JavaParser::CHAR, 0);
}

tree::TerminalNode *JavaParser::PrimitiveTypeContext::BYTE()
{
    return getToken(JavaParser::BYTE, 0);
}

tree::TerminalNode *JavaParser::PrimitiveTypeContext::SHORT()
{
    return getToken(JavaParser::SHORT, 0);
}

tree::TerminalNode *JavaParser::PrimitiveTypeContext::INT()
{
    return getToken(JavaParser::INT, 0);
}

tree::TerminalNode *JavaParser::PrimitiveTypeContext::LONG()
{
    return getToken(JavaParser::LONG, 0);
}

tree::TerminalNode *JavaParser::PrimitiveTypeContext::FLOAT()
{
    return getToken(JavaParser::FLOAT, 0);
}

tree::TerminalNode *JavaParser::PrimitiveTypeContext::DOUBLE()
{
    return getToken(JavaParser::DOUBLE, 0);
}

size_t JavaParser::PrimitiveTypeContext::getRuleIndex() const
{
    return JavaParser::RulePrimitiveType;
}

void JavaParser::PrimitiveTypeContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterPrimitiveType(this);
}

void JavaParser::PrimitiveTypeContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitPrimitiveType(this);
}

std::any JavaParser::PrimitiveTypeContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitPrimitiveType(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::PrimitiveTypeContext *JavaParser::primitiveType()
{
    PrimitiveTypeContext *_localctx = _tracker.createInstance<PrimitiveTypeContext>(_ctx, getState());
    enterRule(_localctx, 242, JavaParser::RulePrimitiveType);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1717);
        _la = _input->LA(1);
        if (!((((_la & ~0x3fULL) == 0) && ((1ULL << _la) & 138111107368) != 0))) {
            _errHandler->recoverInline(this);
        } else {
            _errHandler->reportMatch(this);
            consume();
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- TypeArgumentsContext ------------------------------------------------------------------

JavaParser::TypeArgumentsContext::TypeArgumentsContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::TypeArgumentsContext::LT()
{
    return getToken(JavaParser::LT, 0);
}

std::vector<JavaParser::TypeArgumentContext *> JavaParser::TypeArgumentsContext::typeArgument()
{
    return getRuleContexts<JavaParser::TypeArgumentContext>();
}

JavaParser::TypeArgumentContext *JavaParser::TypeArgumentsContext::typeArgument(size_t i)
{
    return getRuleContext<JavaParser::TypeArgumentContext>(i);
}

tree::TerminalNode *JavaParser::TypeArgumentsContext::GT()
{
    return getToken(JavaParser::GT, 0);
}

std::vector<tree::TerminalNode *> JavaParser::TypeArgumentsContext::COMMA()
{
    return getTokens(JavaParser::COMMA);
}

tree::TerminalNode *JavaParser::TypeArgumentsContext::COMMA(size_t i)
{
    return getToken(JavaParser::COMMA, i);
}

size_t JavaParser::TypeArgumentsContext::getRuleIndex() const
{
    return JavaParser::RuleTypeArguments;
}

void JavaParser::TypeArgumentsContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterTypeArguments(this);
}

void JavaParser::TypeArgumentsContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitTypeArguments(this);
}

std::any JavaParser::TypeArgumentsContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitTypeArguments(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::TypeArgumentsContext *JavaParser::typeArguments()
{
    TypeArgumentsContext *_localctx = _tracker.createInstance<TypeArgumentsContext>(_ctx, getState());
    enterRule(_localctx, 244, JavaParser::RuleTypeArguments);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1719);
        match(JavaParser::LT);
        setState(1720);
        typeArgument();
        setState(1725);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == JavaParser::COMMA) {
            setState(1721);
            match(JavaParser::COMMA);
            setState(1722);
            typeArgument();
            setState(1727);
            _errHandler->sync(this);
            _la = _input->LA(1);
        }
        setState(1728);
        match(JavaParser::GT);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- SuperSuffixContext ------------------------------------------------------------------

JavaParser::SuperSuffixContext::SuperSuffixContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

JavaParser::ArgumentsContext *JavaParser::SuperSuffixContext::arguments()
{
    return getRuleContext<JavaParser::ArgumentsContext>(0);
}

tree::TerminalNode *JavaParser::SuperSuffixContext::DOT()
{
    return getToken(JavaParser::DOT, 0);
}

JavaParser::IdentifierContext *JavaParser::SuperSuffixContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

JavaParser::TypeArgumentsContext *JavaParser::SuperSuffixContext::typeArguments()
{
    return getRuleContext<JavaParser::TypeArgumentsContext>(0);
}

size_t JavaParser::SuperSuffixContext::getRuleIndex() const
{
    return JavaParser::RuleSuperSuffix;
}

void JavaParser::SuperSuffixContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterSuperSuffix(this);
}

void JavaParser::SuperSuffixContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitSuperSuffix(this);
}

std::any JavaParser::SuperSuffixContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitSuperSuffix(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::SuperSuffixContext *JavaParser::superSuffix()
{
    SuperSuffixContext *_localctx = _tracker.createInstance<SuperSuffixContext>(_ctx, getState());
    enterRule(_localctx, 246, JavaParser::RuleSuperSuffix);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(1739);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case JavaParser::LPAREN: {
            enterOuterAlt(_localctx, 1);
            setState(1730);
            arguments();
            break;
        }

        case JavaParser::DOT: {
            enterOuterAlt(_localctx, 2);
            setState(1731);
            match(JavaParser::DOT);
            setState(1733);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == JavaParser::LT) {
                setState(1732);
                typeArguments();
            }
            setState(1735);
            identifier();
            setState(1737);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 215, _ctx)) {
            case 1: {
                setState(1736);
                arguments();
                break;
            }

            default:
                break;
            }
            break;
        }

        default:
            throw NoViableAltException(this);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ExplicitGenericInvocationSuffixContext
//------------------------------------------------------------------

JavaParser::ExplicitGenericInvocationSuffixContext::ExplicitGenericInvocationSuffixContext(ParserRuleContext *parent,
                                                                                           size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::ExplicitGenericInvocationSuffixContext::SUPER()
{
    return getToken(JavaParser::SUPER, 0);
}

JavaParser::SuperSuffixContext *JavaParser::ExplicitGenericInvocationSuffixContext::superSuffix()
{
    return getRuleContext<JavaParser::SuperSuffixContext>(0);
}

JavaParser::IdentifierContext *JavaParser::ExplicitGenericInvocationSuffixContext::identifier()
{
    return getRuleContext<JavaParser::IdentifierContext>(0);
}

JavaParser::ArgumentsContext *JavaParser::ExplicitGenericInvocationSuffixContext::arguments()
{
    return getRuleContext<JavaParser::ArgumentsContext>(0);
}

size_t JavaParser::ExplicitGenericInvocationSuffixContext::getRuleIndex() const
{
    return JavaParser::RuleExplicitGenericInvocationSuffix;
}

void JavaParser::ExplicitGenericInvocationSuffixContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterExplicitGenericInvocationSuffix(this);
}

void JavaParser::ExplicitGenericInvocationSuffixContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitExplicitGenericInvocationSuffix(this);
}

std::any JavaParser::ExplicitGenericInvocationSuffixContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitExplicitGenericInvocationSuffix(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ExplicitGenericInvocationSuffixContext *JavaParser::explicitGenericInvocationSuffix()
{
    ExplicitGenericInvocationSuffixContext *_localctx =
        _tracker.createInstance<ExplicitGenericInvocationSuffixContext>(_ctx, getState());
    enterRule(_localctx, 248, JavaParser::RuleExplicitGenericInvocationSuffix);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        setState(1746);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
        case JavaParser::SUPER: {
            enterOuterAlt(_localctx, 1);
            setState(1741);
            match(JavaParser::SUPER);
            setState(1742);
            superSuffix();
            break;
        }

        case JavaParser::MODULE:
        case JavaParser::OPEN:
        case JavaParser::REQUIRES:
        case JavaParser::EXPORTS:
        case JavaParser::OPENS:
        case JavaParser::TO:
        case JavaParser::USES:
        case JavaParser::PROVIDES:
        case JavaParser::WITH:
        case JavaParser::TRANSITIVE:
        case JavaParser::VAR:
        case JavaParser::YIELD:
        case JavaParser::RECORD:
        case JavaParser::SEALED:
        case JavaParser::PERMITS:
        case JavaParser::IDENTIFIER: {
            enterOuterAlt(_localctx, 2);
            setState(1743);
            identifier();
            setState(1744);
            arguments();
            break;
        }

        default:
            throw NoViableAltException(this);
        }

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- ArgumentsContext ------------------------------------------------------------------

JavaParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState):
    ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode *JavaParser::ArgumentsContext::LPAREN()
{
    return getToken(JavaParser::LPAREN, 0);
}

tree::TerminalNode *JavaParser::ArgumentsContext::RPAREN()
{
    return getToken(JavaParser::RPAREN, 0);
}

JavaParser::ExpressionListContext *JavaParser::ArgumentsContext::expressionList()
{
    return getRuleContext<JavaParser::ExpressionListContext>(0);
}

size_t JavaParser::ArgumentsContext::getRuleIndex() const
{
    return JavaParser::RuleArguments;
}

void JavaParser::ArgumentsContext::enterRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->enterArguments(this);
}

void JavaParser::ArgumentsContext::exitRule(tree::ParseTreeListener *listener)
{
    auto parserListener = dynamic_cast<JavaParserListener *>(listener);
    if (parserListener != nullptr)
        parserListener->exitArguments(this);
}

std::any JavaParser::ArgumentsContext::accept(tree::ParseTreeVisitor *visitor)
{
    if (auto parserVisitor = dynamic_cast<JavaParserVisitor *>(visitor))
        return parserVisitor->visitArguments(this);
    else
        return visitor->visitChildren(this);
}

JavaParser::ArgumentsContext *JavaParser::arguments()
{
    ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
    enterRule(_localctx, 250, JavaParser::RuleArguments);
    size_t _la = 0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit = finally([=] {
#endif
        exitRule();
    });
    try {
        enterOuterAlt(_localctx, 1);
        setState(1748);
        match(JavaParser::LPAREN);
        setState(1750);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 3) & ~0x3fULL) == 0) && ((1ULL << (_la - 3)) & 9223127275610966053) != 0)
            || ((((_la - 67) & ~0x3fULL) == 0) && ((1ULL << (_la - 67)) & 2377900732130004991) != 0)) {
            setState(1749);
            expressionList();
        }
        setState(1752);
        match(JavaParser::RPAREN);

    } catch (RecognitionException& e) {
        _errHandler->reportError(this, e);
        _localctx->exception = std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

bool JavaParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex)
{
    switch (ruleIndex) {
    case 99:
        return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);
    case 107:
        return guardedPatternSempred(antlrcpp::downCast<GuardedPatternContext *>(context), predicateIndex);

    default:
        break;
    }
    return true;
}

bool JavaParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex)
{
    switch (predicateIndex) {
    case 0:
        return precpred(_ctx, 14);
    case 1:
        return precpred(_ctx, 13);
    case 2:
        return precpred(_ctx, 12);
    case 3:
        return precpred(_ctx, 11);
    case 4:
        return precpred(_ctx, 9);
    case 5:
        return precpred(_ctx, 8);
    case 6:
        return precpred(_ctx, 7);
    case 7:
        return precpred(_ctx, 6);
    case 8:
        return precpred(_ctx, 5);
    case 9:
        return precpred(_ctx, 4);
    case 10:
        return precpred(_ctx, 3);
    case 11:
        return precpred(_ctx, 2);
    case 12:
        return precpred(_ctx, 25);
    case 13:
        return precpred(_ctx, 24);
    case 14:
        return precpred(_ctx, 22);
    case 15:
        return precpred(_ctx, 18);
    case 16:
        return precpred(_ctx, 10);

    default:
        break;
    }
    return true;
}

bool JavaParser::guardedPatternSempred(GuardedPatternContext *_localctx, size_t predicateIndex)
{
    switch (predicateIndex) {
    case 17:
        return precpred(_ctx, 1);

    default:
        break;
    }
    return true;
}

void JavaParser::initialize()
{
#if ANTLR4_USE_THREAD_LOCAL_CACHE
    javaparserParserInitialize();
#else
    ::antlr4::internal::call_once(javaparserParserOnceFlag, javaparserParserInitialize);
#endif
}
