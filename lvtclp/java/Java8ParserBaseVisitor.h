
// Generated from /home/georgefkd/Documents/Java8Parser.g4 by ANTLR 4.13.2

#pragma once

#include "Java8ParserVisitor.h"
#include "antlr4-runtime.h"

/**
 * This class provides an empty implementation of Java8ParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class Java8ParserBaseVisitor : public Java8ParserVisitor {
  public:
    virtual std::any visitLiteral(Java8Parser::LiteralContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPrimitiveType(Java8Parser::PrimitiveTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitNumericType(Java8Parser::NumericTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitIntegralType(Java8Parser::IntegralTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitFloatingPointType(Java8Parser::FloatingPointTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitReferenceType(Java8Parser::ReferenceTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassOrInterfaceType(Java8Parser::ClassOrInterfaceTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassType(Java8Parser::ClassTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any
    visitClassType_lf_classOrInterfaceType(Java8Parser::ClassType_lf_classOrInterfaceTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any
    visitClassType_lfno_classOrInterfaceType(Java8Parser::ClassType_lfno_classOrInterfaceTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInterfaceType(Java8Parser::InterfaceTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any
    visitInterfaceType_lf_classOrInterfaceType(Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInterfaceType_lfno_classOrInterfaceType(
        Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeVariable(Java8Parser::TypeVariableContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitArrayType(Java8Parser::ArrayTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitDims(Java8Parser::DimsContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeParameter(Java8Parser::TypeParameterContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeParameterModifier(Java8Parser::TypeParameterModifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeBound(Java8Parser::TypeBoundContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAdditionalBound(Java8Parser::AdditionalBoundContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeArguments(Java8Parser::TypeArgumentsContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeArgumentList(Java8Parser::TypeArgumentListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeArgument(Java8Parser::TypeArgumentContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitWildcard(Java8Parser::WildcardContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitWildcardBounds(Java8Parser::WildcardBoundsContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPackageName(Java8Parser::PackageNameContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeName(Java8Parser::TypeNameContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPackageOrTypeName(Java8Parser::PackageOrTypeNameContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitExpressionName(Java8Parser::ExpressionNameContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMethodName(Java8Parser::MethodNameContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAmbiguousName(Java8Parser::AmbiguousNameContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitCompilationUnit(Java8Parser::CompilationUnitContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPackageDeclaration(Java8Parser::PackageDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPackageModifier(Java8Parser::PackageModifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitImportDeclaration(Java8Parser::ImportDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSingleTypeImportDeclaration(Java8Parser::SingleTypeImportDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeImportOnDemandDeclaration(Java8Parser::TypeImportOnDemandDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSingleStaticImportDeclaration(Java8Parser::SingleStaticImportDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any
    visitStaticImportOnDemandDeclaration(Java8Parser::StaticImportOnDemandDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeDeclaration(Java8Parser::TypeDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassDeclaration(Java8Parser::ClassDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitNormalClassDeclaration(Java8Parser::NormalClassDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassModifier(Java8Parser::ClassModifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeParameters(Java8Parser::TypeParametersContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeParameterList(Java8Parser::TypeParameterListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSuperclass(Java8Parser::SuperclassContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSuperinterfaces(Java8Parser::SuperinterfacesContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInterfaceTypeList(Java8Parser::InterfaceTypeListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassBody(Java8Parser::ClassBodyContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassBodyDeclaration(Java8Parser::ClassBodyDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassMemberDeclaration(Java8Parser::ClassMemberDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitFieldDeclaration(Java8Parser::FieldDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitFieldModifier(Java8Parser::FieldModifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitVariableDeclaratorList(Java8Parser::VariableDeclaratorListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitVariableDeclarator(Java8Parser::VariableDeclaratorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitVariableDeclaratorId(Java8Parser::VariableDeclaratorIdContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitVariableInitializer(Java8Parser::VariableInitializerContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitUnannType(Java8Parser::UnannTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitUnannPrimitiveType(Java8Parser::UnannPrimitiveTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitUnannReferenceType(Java8Parser::UnannReferenceTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitUnannClassOrInterfaceType(Java8Parser::UnannClassOrInterfaceTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitUnannClassType(Java8Parser::UnannClassTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitUnannClassType_lf_unannClassOrInterfaceType(
        Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitUnannClassType_lfno_unannClassOrInterfaceType(
        Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitUnannInterfaceType(Java8Parser::UnannInterfaceTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitUnannInterfaceType_lf_unannClassOrInterfaceType(
        Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitUnannInterfaceType_lfno_unannClassOrInterfaceType(
        Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitUnannTypeVariable(Java8Parser::UnannTypeVariableContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitUnannArrayType(Java8Parser::UnannArrayTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMethodDeclaration(Java8Parser::MethodDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMethodModifier(Java8Parser::MethodModifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMethodHeader(Java8Parser::MethodHeaderContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitResult(Java8Parser::ResultContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMethodDeclarator(Java8Parser::MethodDeclaratorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitFormalParameterList(Java8Parser::FormalParameterListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitFormalParameters(Java8Parser::FormalParametersContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitFormalParameter(Java8Parser::FormalParameterContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitVariableModifier(Java8Parser::VariableModifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLastFormalParameter(Java8Parser::LastFormalParameterContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitReceiverParameter(Java8Parser::ReceiverParameterContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitThrows_(Java8Parser::Throws_Context *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitExceptionTypeList(Java8Parser::ExceptionTypeListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitExceptionType(Java8Parser::ExceptionTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMethodBody(Java8Parser::MethodBodyContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInstanceInitializer(Java8Parser::InstanceInitializerContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitStaticInitializer(Java8Parser::StaticInitializerContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitConstructorDeclaration(Java8Parser::ConstructorDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitConstructorModifier(Java8Parser::ConstructorModifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitConstructorDeclarator(Java8Parser::ConstructorDeclaratorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSimpleTypeName(Java8Parser::SimpleTypeNameContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitConstructorBody(Java8Parser::ConstructorBodyContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitExplicitConstructorInvocation(Java8Parser::ExplicitConstructorInvocationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnumDeclaration(Java8Parser::EnumDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnumBody(Java8Parser::EnumBodyContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnumConstantList(Java8Parser::EnumConstantListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnumConstant(Java8Parser::EnumConstantContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnumConstantModifier(Java8Parser::EnumConstantModifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnumBodyDeclarations(Java8Parser::EnumBodyDeclarationsContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInterfaceDeclaration(Java8Parser::InterfaceDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitNormalInterfaceDeclaration(Java8Parser::NormalInterfaceDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInterfaceModifier(Java8Parser::InterfaceModifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitExtendsInterfaces(Java8Parser::ExtendsInterfacesContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInterfaceBody(Java8Parser::InterfaceBodyContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInterfaceMemberDeclaration(Java8Parser::InterfaceMemberDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitConstantDeclaration(Java8Parser::ConstantDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitConstantModifier(Java8Parser::ConstantModifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInterfaceMethodDeclaration(Java8Parser::InterfaceMethodDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInterfaceMethodModifier(Java8Parser::InterfaceMethodModifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAnnotationTypeDeclaration(Java8Parser::AnnotationTypeDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAnnotationTypeBody(Java8Parser::AnnotationTypeBodyContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any
    visitAnnotationTypeMemberDeclaration(Java8Parser::AnnotationTypeMemberDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any
    visitAnnotationTypeElementDeclaration(Java8Parser::AnnotationTypeElementDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAnnotationTypeElementModifier(Java8Parser::AnnotationTypeElementModifierContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitDefaultValue(Java8Parser::DefaultValueContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAnnotation(Java8Parser::AnnotationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitNormalAnnotation(Java8Parser::NormalAnnotationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitElementValuePairList(Java8Parser::ElementValuePairListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitElementValuePair(Java8Parser::ElementValuePairContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitElementValue(Java8Parser::ElementValueContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitElementValueArrayInitializer(Java8Parser::ElementValueArrayInitializerContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitElementValueList(Java8Parser::ElementValueListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMarkerAnnotation(Java8Parser::MarkerAnnotationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSingleElementAnnotation(Java8Parser::SingleElementAnnotationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitArrayInitializer(Java8Parser::ArrayInitializerContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitVariableInitializerList(Java8Parser::VariableInitializerListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitBlock(Java8Parser::BlockContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitBlockStatements(Java8Parser::BlockStatementsContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitBlockStatement(Java8Parser::BlockStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any
    visitLocalVariableDeclarationStatement(Java8Parser::LocalVariableDeclarationStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLocalVariableDeclaration(Java8Parser::LocalVariableDeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitStatement(Java8Parser::StatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitStatementNoShortIf(Java8Parser::StatementNoShortIfContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any
    visitStatementWithoutTrailingSubstatement(Java8Parser::StatementWithoutTrailingSubstatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEmptyStatement_(Java8Parser::EmptyStatement_Context *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLabeledStatement(Java8Parser::LabeledStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLabeledStatementNoShortIf(Java8Parser::LabeledStatementNoShortIfContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitExpressionStatement(Java8Parser::ExpressionStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitStatementExpression(Java8Parser::StatementExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitIfThenStatement(Java8Parser::IfThenStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitIfThenElseStatement(Java8Parser::IfThenElseStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitIfThenElseStatementNoShortIf(Java8Parser::IfThenElseStatementNoShortIfContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAssertStatement(Java8Parser::AssertStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSwitchStatement(Java8Parser::SwitchStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSwitchBlock(Java8Parser::SwitchBlockContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSwitchBlockStatementGroup(Java8Parser::SwitchBlockStatementGroupContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSwitchLabels(Java8Parser::SwitchLabelsContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSwitchLabel(Java8Parser::SwitchLabelContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnumConstantName(Java8Parser::EnumConstantNameContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitWhileStatement(Java8Parser::WhileStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitWhileStatementNoShortIf(Java8Parser::WhileStatementNoShortIfContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitDoStatement(Java8Parser::DoStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitForStatement(Java8Parser::ForStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitForStatementNoShortIf(Java8Parser::ForStatementNoShortIfContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitBasicForStatement(Java8Parser::BasicForStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitBasicForStatementNoShortIf(Java8Parser::BasicForStatementNoShortIfContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitForInit(Java8Parser::ForInitContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitForUpdate(Java8Parser::ForUpdateContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitStatementExpressionList(Java8Parser::StatementExpressionListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnhancedForStatement(Java8Parser::EnhancedForStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEnhancedForStatementNoShortIf(Java8Parser::EnhancedForStatementNoShortIfContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitBreakStatement(Java8Parser::BreakStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitContinueStatement(Java8Parser::ContinueStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitReturnStatement(Java8Parser::ReturnStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitThrowStatement(Java8Parser::ThrowStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitSynchronizedStatement(Java8Parser::SynchronizedStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTryStatement(Java8Parser::TryStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitCatches(Java8Parser::CatchesContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitCatchClause(Java8Parser::CatchClauseContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitCatchFormalParameter(Java8Parser::CatchFormalParameterContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitCatchType(Java8Parser::CatchTypeContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitFinally_(Java8Parser::Finally_Context *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTryWithResourcesStatement(Java8Parser::TryWithResourcesStatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitResourceSpecification(Java8Parser::ResourceSpecificationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitResourceList(Java8Parser::ResourceListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitResource(Java8Parser::ResourceContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPrimary(Java8Parser::PrimaryContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPrimaryNoNewArray(Java8Parser::PrimaryNoNewArrayContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any
    visitPrimaryNoNewArray_lf_arrayAccess(Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any
    visitPrimaryNoNewArray_lfno_arrayAccess(Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPrimaryNoNewArray_lf_primary(Java8Parser::PrimaryNoNewArray_lf_primaryContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary(
        Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary(
        Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any
    visitPrimaryNoNewArray_lfno_primary(Java8Parser::PrimaryNoNewArray_lfno_primaryContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary(
        Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary(
        Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any
    visitClassInstanceCreationExpression(Java8Parser::ClassInstanceCreationExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassInstanceCreationExpression_lf_primary(
        Java8Parser::ClassInstanceCreationExpression_lf_primaryContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitClassInstanceCreationExpression_lfno_primary(
        Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitTypeArgumentsOrDiamond(Java8Parser::TypeArgumentsOrDiamondContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitFieldAccess(Java8Parser::FieldAccessContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitFieldAccess_lf_primary(Java8Parser::FieldAccess_lf_primaryContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitFieldAccess_lfno_primary(Java8Parser::FieldAccess_lfno_primaryContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitArrayAccess(Java8Parser::ArrayAccessContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitArrayAccess_lf_primary(Java8Parser::ArrayAccess_lf_primaryContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitArrayAccess_lfno_primary(Java8Parser::ArrayAccess_lfno_primaryContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMethodInvocation(Java8Parser::MethodInvocationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMethodInvocation_lf_primary(Java8Parser::MethodInvocation_lf_primaryContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMethodInvocation_lfno_primary(Java8Parser::MethodInvocation_lfno_primaryContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitArgumentList(Java8Parser::ArgumentListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMethodReference(Java8Parser::MethodReferenceContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMethodReference_lf_primary(Java8Parser::MethodReference_lf_primaryContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMethodReference_lfno_primary(Java8Parser::MethodReference_lfno_primaryContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitArrayCreationExpression(Java8Parser::ArrayCreationExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitDimExprs(Java8Parser::DimExprsContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitDimExpr(Java8Parser::DimExprContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitConstantExpression(Java8Parser::ConstantExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitExpression(Java8Parser::ExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLambdaExpression(Java8Parser::LambdaExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLambdaParameters(Java8Parser::LambdaParametersContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInferredFormalParameterList(Java8Parser::InferredFormalParameterListContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLambdaBody(Java8Parser::LambdaBodyContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAssignmentExpression(Java8Parser::AssignmentExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAssignment(Java8Parser::AssignmentContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitLeftHandSide(Java8Parser::LeftHandSideContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAssignmentOperator(Java8Parser::AssignmentOperatorContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitConditionalExpression(Java8Parser::ConditionalExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitConditionalOrExpression(Java8Parser::ConditionalOrExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitConditionalAndExpression(Java8Parser::ConditionalAndExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitInclusiveOrExpression(Java8Parser::InclusiveOrExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitExclusiveOrExpression(Java8Parser::ExclusiveOrExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAndExpression(Java8Parser::AndExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitEqualityExpression(Java8Parser::EqualityExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitRelationalExpression(Java8Parser::RelationalExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitShiftExpression(Java8Parser::ShiftExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitAdditiveExpression(Java8Parser::AdditiveExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitMultiplicativeExpression(Java8Parser::MultiplicativeExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitUnaryExpression(Java8Parser::UnaryExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPreIncrementExpression(Java8Parser::PreIncrementExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPreDecrementExpression(Java8Parser::PreDecrementExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitUnaryExpressionNotPlusMinus(Java8Parser::UnaryExpressionNotPlusMinusContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPostfixExpression(Java8Parser::PostfixExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPostIncrementExpression(Java8Parser::PostIncrementExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPostIncrementExpression_lf_postfixExpression(
        Java8Parser::PostIncrementExpression_lf_postfixExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPostDecrementExpression(Java8Parser::PostDecrementExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitPostDecrementExpression_lf_postfixExpression(
        Java8Parser::PostDecrementExpression_lf_postfixExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual std::any visitCastExpression(Java8Parser::CastExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }
};
