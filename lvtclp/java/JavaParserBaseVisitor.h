
// Generated from /home/georgefkd/Documents/JavaParser.g4 by ANTLR 4.13.2

#pragma once

#include "JavaParserVisitor.h"
#include "antlr4-runtime.h"
#include "ct_lvtmdb_objectstore.h"
#include "ct_lvtmdb_packageobject.h"
#include <filesystem>

#include <QString>
#include <optional>

/**
 * This class provides an empty implementation of JavaParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class JavaParserBaseVisitor : public JavaParserVisitor {
  private:
    std::filesystem::path moduleRoot;
    std::shared_ptr<Codethink::lvtmdb::ObjectStore> db;
    std::filesystem::path currentFile;
    std::tuple<std::string, std::string> getChildAndParentNameFromQualifiedName(const std::string& qualifiedName)
    {
        // e.g. package org.openapitools.codegen.auth; -> (org.openapitools.codegen,auth)
        QStringList package = QString(qualifiedName.c_str()).split(".");
        auto childName = package.at(package.length() - 1).toStdString();
        package.removeLast();
        return {childName, package.join(".").toStdString()};
    }

  public:
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

    std::optional<JavaParseResult> getResult();
    void setCurrentModuleRoot(std::filesystem::path moduleRoot)
    {
        this->moduleRoot = moduleRoot;
    }
    void setObjectDb(std::shared_ptr<Codethink::lvtmdb::ObjectStore> db)
    {
        this->db = db;
    }
    void setJavaFile(std::filesystem::path javaFile)
    {
        this->currentFile = javaFile;
    }
    std::any visitCompilationUnit(JavaParser::CompilationUnitContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any visitPackageDeclaration(JavaParser::PackageDeclarationContext *ctx) override
    {
        std::cout << "Package: " << ctx->qualifiedName()->getText() << "\n";

        auto [child, parent] = getChildAndParentNameFromQualifiedName(ctx->qualifiedName()->getText());
        auto *parentPkg = this->db->withRWLock([&] {
            return this->db->getOrAddPackage(
                /*qualifiedName=*/parent,
                /*name=*/parent,
                /*diskPath=*/this->currentFile,
                /*parent=*/nullptr,
                /*repository=*/nullptr);
        });
        auto *newPkg = this->db->withRWLock([&] {
            return this->db->getOrAddPackage(
                /*qualifiedName=*/child,
                /*name=*/child,
                /*diskPath=*/this->currentFile,
                /*parent=*/parentPkg,
                /*repository=*/nullptr);
        });
        parentPkg->withRWLock([parentPkg, newPkg] {
            parentPkg->addChild(newPkg);
        });

        // this->db->getOrAddPackage();
        // this->db->getOrAddPackage(ctx->qualifiedName()->getText(),nonQualifiedName,this->currentFile,nullptr,nullptr);
        std::cout << "Parent: " << child << "\n";
        std::cout << "Package: " << parent << "\n";
        return visitChildren(ctx);
    }

    virtual std::any visitImportDeclaration(JavaParser::ImportDeclarationContext *ctx) override
    {
        if (ctx->qualifiedName()->getText().starts_with("java"))
            return visitChildren(ctx);

        auto [child, parent] = getChildAndParentNameFromQualifiedName(ctx->qualifiedName()->getText());
        std::cout << "Import Parent: " << child << "\n";
        std::cout << "Import Package: " << parent << "\n";
        return visitChildren(ctx);
    }

    virtual std::any visitTypeDeclaration(JavaParser::TypeDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitModifier(JavaParser::ModifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassOrInterfaceModifier(JavaParser::ClassOrInterfaceModifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitVariableModifier(JavaParser::VariableModifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassDeclaration(JavaParser::ClassDeclarationContext *ctx) override
    {
        std::cout << "Class: " << ctx->identifier()->getText() << "\n";
        if (ctx->EXTENDS() != nullptr) {
            std::cout << "Superclass: " << ctx->typeType()->getText() << "\n";
        }
        if (ctx->IMPLEMENTS() != nullptr) {
            for (auto interface : ctx->typeList()) {
                std::cout << "Interface: " << interface->getText() << "\n";
            }
        }
        // either in permits or implemenents
        if (ctx->typeParameters()) {
            for (auto typeParam : ctx->typeParameters()->typeParameter()) {
                std::cout << "generic param: " << typeParam->getText() << "\n";
            }
        }

        // for(auto generic: ctx->typeParameters()->typeParameter()){
        //     std::cout << "generic param: " << generic->identifier()->getText();
        // }
        return visitChildren(ctx);
    }

    virtual std::any visitMethodCall(JavaParser::MethodCallContext *ctx) override
    {
        // needed in case of an empty class
        // need to parseExpression
        if (ctx->identifier()) {
            std::cout << "Method call: " << ctx->identifier()->getText() << "\n";
            // if(ctx->)
        }
        return visitChildren(ctx);
    }

    virtual std::any visitMethodDeclaration(JavaParser::MethodDeclarationContext *ctx) override
    {
        // if(ctx->)
        std::cout << "Method name: " << ctx->identifier()->getText() << "\n";
        // for(auto m : ctx->methodBody()->block()->blockStatement()){
        //   m->statement()->
        // }
        return visitChildren(ctx);
    }

    virtual std::any visitMethodBody(JavaParser::MethodBodyContext *ctx) override
    {
        // for(auto stmt : ctx->block()->blockStatement()){
        //     // std::cout << "Statement: " << stmt-> << "\n";
        // }
        return visitChildren(ctx);
    }

    virtual std::any visitExpression(JavaParser::ExpressionContext *ctx) override
    {
        if (ctx->THIS()) {
            return visitChildren(ctx);
        }
        if (ctx->SUPER()) {
            return visitChildren(ctx);
        }
        // if(ctx->typeType()){

        // }

        // if(ctx->methodCall()){
        //     std::cout << "Method "
        //     return visitChildren(ctx);
        // }

        // todo
        return visitChildren(ctx);
    }

    virtual std::any visitFieldDeclaration(JavaParser::FieldDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassBody(JavaParser::ClassBodyContext *ctx) override
    {
        /*
  classBodyDeclaration
      : ';'
      | STATIC? block
      | modifier* memberDeclaration
      ;

   memberDeclaration
       : recordDeclaration //Java17
       | methodDeclaration
       | genericMethodDeclaration
       | fieldDeclaration
       | constructorDeclaration
       | genericConstructorDeclaration
       | interfaceDeclaration
       | annotationTypeDeclaration
       | classDeclaration
       | enumDeclaration
       ;
         */

        if (ctx->classBodyDeclaration().empty())
            return visitChildren(ctx);
        for (auto cDecl : ctx->classBodyDeclaration()) {
            // skip the static {} blocks for now
            if (!cDecl)
                continue;
            std::cout << cDecl->getText() << "\n\n";
            if (cDecl->STATIC())
                continue;
            if (cDecl->SEMI())
                continue;
            // skipping classDecl
            if (cDecl->memberDeclaration()->classDeclaration()) {
                std::cout << "Inner class: " << cDecl->memberDeclaration()->classDeclaration()->identifier()->getText()
                          << "\n";
                continue;
            }

            if (cDecl->memberDeclaration()->constructorDeclaration()) {
                continue;
            }

            if (cDecl->memberDeclaration()->interfaceDeclaration()) {
                continue;
            }

            if (cDecl->memberDeclaration()->enumDeclaration()) {
                continue;
            }

            if (cDecl->memberDeclaration()->genericMethodDeclaration()) {
                continue;
            }
            if (cDecl->memberDeclaration()->annotationTypeDeclaration()) {
                continue;
            }

            if (!cDecl->memberDeclaration()->fieldDeclaration())
                continue;

            if (cDecl->memberDeclaration()->fieldDeclaration()) {
                if (cDecl->memberDeclaration()->fieldDeclaration()->typeType()->primitiveType())
                    continue;
                std::cout << "Field Type "
                          << cDecl->memberDeclaration()
                                 ->fieldDeclaration()
                                 ->typeType()
                                 ->classOrInterfaceType()
                                 ->typeIdentifier()
                                 ->getText()
                          << "\n";

                std::cout << "Field name: ";
                for (auto v :
                     cDecl->memberDeclaration()->fieldDeclaration()->variableDeclarators()->variableDeclarator()) {
                    std::cout << v->variableDeclaratorId()->identifier()->getText() << " ";
                }
                std::cout << "\n";
                std::cout << "Modifier: ";
                for (auto mod : cDecl->modifier()) {
                    std::cout << mod->classOrInterfaceModifier()->getText() << " ";
                }
                std::cout << "\n";
            }
        }

        return visitChildren(ctx);
    }

    virtual std::any visitClassBodyDeclaration(JavaParser::ClassBodyDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeParameters(JavaParser::TypeParametersContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeParameter(JavaParser::TypeParameterContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeBound(JavaParser::TypeBoundContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnumDeclaration(JavaParser::EnumDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnumConstants(JavaParser::EnumConstantsContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnumConstant(JavaParser::EnumConstantContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnumBodyDeclarations(JavaParser::EnumBodyDeclarationsContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInterfaceDeclaration(JavaParser::InterfaceDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInterfaceBody(JavaParser::InterfaceBodyContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMemberDeclaration(JavaParser::MemberDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeTypeOrVoid(JavaParser::TypeTypeOrVoidContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitGenericMethodDeclaration(JavaParser::GenericMethodDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitGenericConstructorDeclaration(JavaParser::GenericConstructorDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitConstructorDeclaration(JavaParser::ConstructorDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitCompactConstructorDeclaration(JavaParser::CompactConstructorDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInterfaceBodyDeclaration(JavaParser::InterfaceBodyDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInterfaceMemberDeclaration(JavaParser::InterfaceMemberDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitConstDeclaration(JavaParser::ConstDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitConstantDeclarator(JavaParser::ConstantDeclaratorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInterfaceMethodDeclaration(JavaParser::InterfaceMethodDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInterfaceMethodModifier(JavaParser::InterfaceMethodModifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any
    visitGenericInterfaceMethodDeclaration(JavaParser::GenericInterfaceMethodDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any
    visitInterfaceCommonBodyDeclaration(JavaParser::InterfaceCommonBodyDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitVariableDeclarators(JavaParser::VariableDeclaratorsContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitVariableDeclarator(JavaParser::VariableDeclaratorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitVariableDeclaratorId(JavaParser::VariableDeclaratorIdContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitVariableInitializer(JavaParser::VariableInitializerContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitArrayInitializer(JavaParser::ArrayInitializerContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassOrInterfaceType(JavaParser::ClassOrInterfaceTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeArgument(JavaParser::TypeArgumentContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitQualifiedNameList(JavaParser::QualifiedNameListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitFormalParameters(JavaParser::FormalParametersContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitReceiverParameter(JavaParser::ReceiverParameterContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitFormalParameterList(JavaParser::FormalParameterListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitFormalParameter(JavaParser::FormalParameterContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLastFormalParameter(JavaParser::LastFormalParameterContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLambdaLVTIList(JavaParser::LambdaLVTIListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLambdaLVTIParameter(JavaParser::LambdaLVTIParameterContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitQualifiedName(JavaParser::QualifiedNameContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLiteral(JavaParser::LiteralContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitIntegerLiteral(JavaParser::IntegerLiteralContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitFloatLiteral(JavaParser::FloatLiteralContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAltAnnotationQualifiedName(JavaParser::AltAnnotationQualifiedNameContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAnnotation(JavaParser::AnnotationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitElementValuePairs(JavaParser::ElementValuePairsContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitElementValuePair(JavaParser::ElementValuePairContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitElementValue(JavaParser::ElementValueContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitElementValueArrayInitializer(JavaParser::ElementValueArrayInitializerContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAnnotationTypeDeclaration(JavaParser::AnnotationTypeDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAnnotationTypeBody(JavaParser::AnnotationTypeBodyContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any
    visitAnnotationTypeElementDeclaration(JavaParser::AnnotationTypeElementDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAnnotationTypeElementRest(JavaParser::AnnotationTypeElementRestContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any
    visitAnnotationMethodOrConstantRest(JavaParser::AnnotationMethodOrConstantRestContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAnnotationMethodRest(JavaParser::AnnotationMethodRestContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAnnotationConstantRest(JavaParser::AnnotationConstantRestContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitDefaultValue(JavaParser::DefaultValueContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitModuleDeclaration(JavaParser::ModuleDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitModuleBody(JavaParser::ModuleBodyContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitModuleDirective(JavaParser::ModuleDirectiveContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitRequiresModifier(JavaParser::RequiresModifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitRecordDeclaration(JavaParser::RecordDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitRecordHeader(JavaParser::RecordHeaderContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitRecordComponentList(JavaParser::RecordComponentListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitRecordComponent(JavaParser::RecordComponentContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitRecordBody(JavaParser::RecordBodyContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitBlock(JavaParser::BlockContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitBlockStatement(JavaParser::BlockStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLocalVariableDeclaration(JavaParser::LocalVariableDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitIdentifier(JavaParser::IdentifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeIdentifier(JavaParser::TypeIdentifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLocalTypeDeclaration(JavaParser::LocalTypeDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitStatement(JavaParser::StatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitCatchClause(JavaParser::CatchClauseContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitCatchType(JavaParser::CatchTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitFinallyBlock(JavaParser::FinallyBlockContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitResourceSpecification(JavaParser::ResourceSpecificationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitResources(JavaParser::ResourcesContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitResource(JavaParser::ResourceContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSwitchBlockStatementGroup(JavaParser::SwitchBlockStatementGroupContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSwitchLabel(JavaParser::SwitchLabelContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitForControl(JavaParser::ForControlContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitForInit(JavaParser::ForInitContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnhancedForControl(JavaParser::EnhancedForControlContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitParExpression(JavaParser::ParExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitExpressionList(JavaParser::ExpressionListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPattern(JavaParser::PatternContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLambdaExpression(JavaParser::LambdaExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLambdaParameters(JavaParser::LambdaParametersContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLambdaBody(JavaParser::LambdaBodyContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPrimary(JavaParser::PrimaryContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSwitchExpression(JavaParser::SwitchExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSwitchLabeledRule(JavaParser::SwitchLabeledRuleContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitGuardedPattern(JavaParser::GuardedPatternContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSwitchRuleOutcome(JavaParser::SwitchRuleOutcomeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassType(JavaParser::ClassTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitCreator(JavaParser::CreatorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitCreatedName(JavaParser::CreatedNameContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInnerCreator(JavaParser::InnerCreatorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitArrayCreatorRest(JavaParser::ArrayCreatorRestContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassCreatorRest(JavaParser::ClassCreatorRestContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitExplicitGenericInvocation(JavaParser::ExplicitGenericInvocationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeArgumentsOrDiamond(JavaParser::TypeArgumentsOrDiamondContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any
    visitNonWildcardTypeArgumentsOrDiamond(JavaParser::NonWildcardTypeArgumentsOrDiamondContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitNonWildcardTypeArguments(JavaParser::NonWildcardTypeArgumentsContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeList(JavaParser::TypeListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeType(JavaParser::TypeTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPrimitiveType(JavaParser::PrimitiveTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeArguments(JavaParser::TypeArgumentsContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSuperSuffix(JavaParser::SuperSuffixContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any
    visitExplicitGenericInvocationSuffix(JavaParser::ExplicitGenericInvocationSuffixContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitArguments(JavaParser::ArgumentsContext *ctx) override
    {
        return visitChildren(ctx);
    }
};
