
// Generated from /home/georgefkd/Documents/Java8Parser.g4 by ANTLR 4.13.2

#pragma once

#include "Java8Parser.h"
#include "antlr4-runtime.h"

/**
 * This class defines an abstract visitor for a parse tree
 * produced by Java8Parser.
 */
class Java8ParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
  public:
    /**
     * Visit parse trees produced by Java8Parser.
     */
    virtual std::any visitLiteral(Java8Parser::LiteralContext *context) = 0;

    virtual std::any visitPrimitiveType(Java8Parser::PrimitiveTypeContext *context) = 0;

    virtual std::any visitNumericType(Java8Parser::NumericTypeContext *context) = 0;

    virtual std::any visitIntegralType(Java8Parser::IntegralTypeContext *context) = 0;

    virtual std::any visitFloatingPointType(Java8Parser::FloatingPointTypeContext *context) = 0;

    virtual std::any visitReferenceType(Java8Parser::ReferenceTypeContext *context) = 0;

    virtual std::any visitClassOrInterfaceType(Java8Parser::ClassOrInterfaceTypeContext *context) = 0;

    virtual std::any visitClassType(Java8Parser::ClassTypeContext *context) = 0;

    virtual std::any
    visitClassType_lf_classOrInterfaceType(Java8Parser::ClassType_lf_classOrInterfaceTypeContext *context) = 0;

    virtual std::any
    visitClassType_lfno_classOrInterfaceType(Java8Parser::ClassType_lfno_classOrInterfaceTypeContext *context) = 0;

    virtual std::any visitInterfaceType(Java8Parser::InterfaceTypeContext *context) = 0;

    virtual std::any
    visitInterfaceType_lf_classOrInterfaceType(Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext *context) = 0;

    virtual std::any visitInterfaceType_lfno_classOrInterfaceType(
        Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext *context) = 0;

    virtual std::any visitTypeVariable(Java8Parser::TypeVariableContext *context) = 0;

    virtual std::any visitArrayType(Java8Parser::ArrayTypeContext *context) = 0;

    virtual std::any visitDims(Java8Parser::DimsContext *context) = 0;

    virtual std::any visitTypeParameter(Java8Parser::TypeParameterContext *context) = 0;

    virtual std::any visitTypeParameterModifier(Java8Parser::TypeParameterModifierContext *context) = 0;

    virtual std::any visitTypeBound(Java8Parser::TypeBoundContext *context) = 0;

    virtual std::any visitAdditionalBound(Java8Parser::AdditionalBoundContext *context) = 0;

    virtual std::any visitTypeArguments(Java8Parser::TypeArgumentsContext *context) = 0;

    virtual std::any visitTypeArgumentList(Java8Parser::TypeArgumentListContext *context) = 0;

    virtual std::any visitTypeArgument(Java8Parser::TypeArgumentContext *context) = 0;

    virtual std::any visitWildcard(Java8Parser::WildcardContext *context) = 0;

    virtual std::any visitWildcardBounds(Java8Parser::WildcardBoundsContext *context) = 0;

    virtual std::any visitPackageName(Java8Parser::PackageNameContext *context) = 0;

    virtual std::any visitTypeName(Java8Parser::TypeNameContext *context) = 0;

    virtual std::any visitPackageOrTypeName(Java8Parser::PackageOrTypeNameContext *context) = 0;

    virtual std::any visitExpressionName(Java8Parser::ExpressionNameContext *context) = 0;

    virtual std::any visitMethodName(Java8Parser::MethodNameContext *context) = 0;

    virtual std::any visitAmbiguousName(Java8Parser::AmbiguousNameContext *context) = 0;

    virtual std::any visitCompilationUnit(Java8Parser::CompilationUnitContext *context) = 0;

    virtual std::any visitPackageDeclaration(Java8Parser::PackageDeclarationContext *context) = 0;

    virtual std::any visitPackageModifier(Java8Parser::PackageModifierContext *context) = 0;

    virtual std::any visitImportDeclaration(Java8Parser::ImportDeclarationContext *context) = 0;

    virtual std::any visitSingleTypeImportDeclaration(Java8Parser::SingleTypeImportDeclarationContext *context) = 0;

    virtual std::any visitTypeImportOnDemandDeclaration(Java8Parser::TypeImportOnDemandDeclarationContext *context) = 0;

    virtual std::any visitSingleStaticImportDeclaration(Java8Parser::SingleStaticImportDeclarationContext *context) = 0;

    virtual std::any
    visitStaticImportOnDemandDeclaration(Java8Parser::StaticImportOnDemandDeclarationContext *context) = 0;

    virtual std::any visitTypeDeclaration(Java8Parser::TypeDeclarationContext *context) = 0;

    virtual std::any visitClassDeclaration(Java8Parser::ClassDeclarationContext *context) = 0;

    virtual std::any visitNormalClassDeclaration(Java8Parser::NormalClassDeclarationContext *context) = 0;

    virtual std::any visitClassModifier(Java8Parser::ClassModifierContext *context) = 0;

    virtual std::any visitTypeParameters(Java8Parser::TypeParametersContext *context) = 0;

    virtual std::any visitTypeParameterList(Java8Parser::TypeParameterListContext *context) = 0;

    virtual std::any visitSuperclass(Java8Parser::SuperclassContext *context) = 0;

    virtual std::any visitSuperinterfaces(Java8Parser::SuperinterfacesContext *context) = 0;

    virtual std::any visitInterfaceTypeList(Java8Parser::InterfaceTypeListContext *context) = 0;

    virtual std::any visitClassBody(Java8Parser::ClassBodyContext *context) = 0;

    virtual std::any visitClassBodyDeclaration(Java8Parser::ClassBodyDeclarationContext *context) = 0;

    virtual std::any visitClassMemberDeclaration(Java8Parser::ClassMemberDeclarationContext *context) = 0;

    virtual std::any visitFieldDeclaration(Java8Parser::FieldDeclarationContext *context) = 0;

    virtual std::any visitFieldModifier(Java8Parser::FieldModifierContext *context) = 0;

    virtual std::any visitVariableDeclaratorList(Java8Parser::VariableDeclaratorListContext *context) = 0;

    virtual std::any visitVariableDeclarator(Java8Parser::VariableDeclaratorContext *context) = 0;

    virtual std::any visitVariableDeclaratorId(Java8Parser::VariableDeclaratorIdContext *context) = 0;

    virtual std::any visitVariableInitializer(Java8Parser::VariableInitializerContext *context) = 0;

    virtual std::any visitUnannType(Java8Parser::UnannTypeContext *context) = 0;

    virtual std::any visitUnannPrimitiveType(Java8Parser::UnannPrimitiveTypeContext *context) = 0;

    virtual std::any visitUnannReferenceType(Java8Parser::UnannReferenceTypeContext *context) = 0;

    virtual std::any visitUnannClassOrInterfaceType(Java8Parser::UnannClassOrInterfaceTypeContext *context) = 0;

    virtual std::any visitUnannClassType(Java8Parser::UnannClassTypeContext *context) = 0;

    virtual std::any visitUnannClassType_lf_unannClassOrInterfaceType(
        Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext *context) = 0;

    virtual std::any visitUnannClassType_lfno_unannClassOrInterfaceType(
        Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext *context) = 0;

    virtual std::any visitUnannInterfaceType(Java8Parser::UnannInterfaceTypeContext *context) = 0;

    virtual std::any visitUnannInterfaceType_lf_unannClassOrInterfaceType(
        Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext *context) = 0;

    virtual std::any visitUnannInterfaceType_lfno_unannClassOrInterfaceType(
        Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext *context) = 0;

    virtual std::any visitUnannTypeVariable(Java8Parser::UnannTypeVariableContext *context) = 0;

    virtual std::any visitUnannArrayType(Java8Parser::UnannArrayTypeContext *context) = 0;

    virtual std::any visitMethodDeclaration(Java8Parser::MethodDeclarationContext *context) = 0;

    virtual std::any visitMethodModifier(Java8Parser::MethodModifierContext *context) = 0;

    virtual std::any visitMethodHeader(Java8Parser::MethodHeaderContext *context) = 0;

    virtual std::any visitResult(Java8Parser::ResultContext *context) = 0;

    virtual std::any visitMethodDeclarator(Java8Parser::MethodDeclaratorContext *context) = 0;

    virtual std::any visitFormalParameterList(Java8Parser::FormalParameterListContext *context) = 0;

    virtual std::any visitFormalParameters(Java8Parser::FormalParametersContext *context) = 0;

    virtual std::any visitFormalParameter(Java8Parser::FormalParameterContext *context) = 0;

    virtual std::any visitVariableModifier(Java8Parser::VariableModifierContext *context) = 0;

    virtual std::any visitLastFormalParameter(Java8Parser::LastFormalParameterContext *context) = 0;

    virtual std::any visitReceiverParameter(Java8Parser::ReceiverParameterContext *context) = 0;

    virtual std::any visitThrows_(Java8Parser::Throws_Context *context) = 0;

    virtual std::any visitExceptionTypeList(Java8Parser::ExceptionTypeListContext *context) = 0;

    virtual std::any visitExceptionType(Java8Parser::ExceptionTypeContext *context) = 0;

    virtual std::any visitMethodBody(Java8Parser::MethodBodyContext *context) = 0;

    virtual std::any visitInstanceInitializer(Java8Parser::InstanceInitializerContext *context) = 0;

    virtual std::any visitStaticInitializer(Java8Parser::StaticInitializerContext *context) = 0;

    virtual std::any visitConstructorDeclaration(Java8Parser::ConstructorDeclarationContext *context) = 0;

    virtual std::any visitConstructorModifier(Java8Parser::ConstructorModifierContext *context) = 0;

    virtual std::any visitConstructorDeclarator(Java8Parser::ConstructorDeclaratorContext *context) = 0;

    virtual std::any visitSimpleTypeName(Java8Parser::SimpleTypeNameContext *context) = 0;

    virtual std::any visitConstructorBody(Java8Parser::ConstructorBodyContext *context) = 0;

    virtual std::any visitExplicitConstructorInvocation(Java8Parser::ExplicitConstructorInvocationContext *context) = 0;

    virtual std::any visitEnumDeclaration(Java8Parser::EnumDeclarationContext *context) = 0;

    virtual std::any visitEnumBody(Java8Parser::EnumBodyContext *context) = 0;

    virtual std::any visitEnumConstantList(Java8Parser::EnumConstantListContext *context) = 0;

    virtual std::any visitEnumConstant(Java8Parser::EnumConstantContext *context) = 0;

    virtual std::any visitEnumConstantModifier(Java8Parser::EnumConstantModifierContext *context) = 0;

    virtual std::any visitEnumBodyDeclarations(Java8Parser::EnumBodyDeclarationsContext *context) = 0;

    virtual std::any visitInterfaceDeclaration(Java8Parser::InterfaceDeclarationContext *context) = 0;

    virtual std::any visitNormalInterfaceDeclaration(Java8Parser::NormalInterfaceDeclarationContext *context) = 0;

    virtual std::any visitInterfaceModifier(Java8Parser::InterfaceModifierContext *context) = 0;

    virtual std::any visitExtendsInterfaces(Java8Parser::ExtendsInterfacesContext *context) = 0;

    virtual std::any visitInterfaceBody(Java8Parser::InterfaceBodyContext *context) = 0;

    virtual std::any visitInterfaceMemberDeclaration(Java8Parser::InterfaceMemberDeclarationContext *context) = 0;

    virtual std::any visitConstantDeclaration(Java8Parser::ConstantDeclarationContext *context) = 0;

    virtual std::any visitConstantModifier(Java8Parser::ConstantModifierContext *context) = 0;

    virtual std::any visitInterfaceMethodDeclaration(Java8Parser::InterfaceMethodDeclarationContext *context) = 0;

    virtual std::any visitInterfaceMethodModifier(Java8Parser::InterfaceMethodModifierContext *context) = 0;

    virtual std::any visitAnnotationTypeDeclaration(Java8Parser::AnnotationTypeDeclarationContext *context) = 0;

    virtual std::any visitAnnotationTypeBody(Java8Parser::AnnotationTypeBodyContext *context) = 0;

    virtual std::any
    visitAnnotationTypeMemberDeclaration(Java8Parser::AnnotationTypeMemberDeclarationContext *context) = 0;

    virtual std::any
    visitAnnotationTypeElementDeclaration(Java8Parser::AnnotationTypeElementDeclarationContext *context) = 0;

    virtual std::any visitAnnotationTypeElementModifier(Java8Parser::AnnotationTypeElementModifierContext *context) = 0;

    virtual std::any visitDefaultValue(Java8Parser::DefaultValueContext *context) = 0;

    virtual std::any visitAnnotation(Java8Parser::AnnotationContext *context) = 0;

    virtual std::any visitNormalAnnotation(Java8Parser::NormalAnnotationContext *context) = 0;

    virtual std::any visitElementValuePairList(Java8Parser::ElementValuePairListContext *context) = 0;

    virtual std::any visitElementValuePair(Java8Parser::ElementValuePairContext *context) = 0;

    virtual std::any visitElementValue(Java8Parser::ElementValueContext *context) = 0;

    virtual std::any visitElementValueArrayInitializer(Java8Parser::ElementValueArrayInitializerContext *context) = 0;

    virtual std::any visitElementValueList(Java8Parser::ElementValueListContext *context) = 0;

    virtual std::any visitMarkerAnnotation(Java8Parser::MarkerAnnotationContext *context) = 0;

    virtual std::any visitSingleElementAnnotation(Java8Parser::SingleElementAnnotationContext *context) = 0;

    virtual std::any visitArrayInitializer(Java8Parser::ArrayInitializerContext *context) = 0;

    virtual std::any visitVariableInitializerList(Java8Parser::VariableInitializerListContext *context) = 0;

    virtual std::any visitBlock(Java8Parser::BlockContext *context) = 0;

    virtual std::any visitBlockStatements(Java8Parser::BlockStatementsContext *context) = 0;

    virtual std::any visitBlockStatement(Java8Parser::BlockStatementContext *context) = 0;

    virtual std::any
    visitLocalVariableDeclarationStatement(Java8Parser::LocalVariableDeclarationStatementContext *context) = 0;

    virtual std::any visitLocalVariableDeclaration(Java8Parser::LocalVariableDeclarationContext *context) = 0;

    virtual std::any visitStatement(Java8Parser::StatementContext *context) = 0;

    virtual std::any visitStatementNoShortIf(Java8Parser::StatementNoShortIfContext *context) = 0;

    virtual std::any
    visitStatementWithoutTrailingSubstatement(Java8Parser::StatementWithoutTrailingSubstatementContext *context) = 0;

    virtual std::any visitEmptyStatement_(Java8Parser::EmptyStatement_Context *context) = 0;

    virtual std::any visitLabeledStatement(Java8Parser::LabeledStatementContext *context) = 0;

    virtual std::any visitLabeledStatementNoShortIf(Java8Parser::LabeledStatementNoShortIfContext *context) = 0;

    virtual std::any visitExpressionStatement(Java8Parser::ExpressionStatementContext *context) = 0;

    virtual std::any visitStatementExpression(Java8Parser::StatementExpressionContext *context) = 0;

    virtual std::any visitIfThenStatement(Java8Parser::IfThenStatementContext *context) = 0;

    virtual std::any visitIfThenElseStatement(Java8Parser::IfThenElseStatementContext *context) = 0;

    virtual std::any visitIfThenElseStatementNoShortIf(Java8Parser::IfThenElseStatementNoShortIfContext *context) = 0;

    virtual std::any visitAssertStatement(Java8Parser::AssertStatementContext *context) = 0;

    virtual std::any visitSwitchStatement(Java8Parser::SwitchStatementContext *context) = 0;

    virtual std::any visitSwitchBlock(Java8Parser::SwitchBlockContext *context) = 0;

    virtual std::any visitSwitchBlockStatementGroup(Java8Parser::SwitchBlockStatementGroupContext *context) = 0;

    virtual std::any visitSwitchLabels(Java8Parser::SwitchLabelsContext *context) = 0;

    virtual std::any visitSwitchLabel(Java8Parser::SwitchLabelContext *context) = 0;

    virtual std::any visitEnumConstantName(Java8Parser::EnumConstantNameContext *context) = 0;

    virtual std::any visitWhileStatement(Java8Parser::WhileStatementContext *context) = 0;

    virtual std::any visitWhileStatementNoShortIf(Java8Parser::WhileStatementNoShortIfContext *context) = 0;

    virtual std::any visitDoStatement(Java8Parser::DoStatementContext *context) = 0;

    virtual std::any visitForStatement(Java8Parser::ForStatementContext *context) = 0;

    virtual std::any visitForStatementNoShortIf(Java8Parser::ForStatementNoShortIfContext *context) = 0;

    virtual std::any visitBasicForStatement(Java8Parser::BasicForStatementContext *context) = 0;

    virtual std::any visitBasicForStatementNoShortIf(Java8Parser::BasicForStatementNoShortIfContext *context) = 0;

    virtual std::any visitForInit(Java8Parser::ForInitContext *context) = 0;

    virtual std::any visitForUpdate(Java8Parser::ForUpdateContext *context) = 0;

    virtual std::any visitStatementExpressionList(Java8Parser::StatementExpressionListContext *context) = 0;

    virtual std::any visitEnhancedForStatement(Java8Parser::EnhancedForStatementContext *context) = 0;

    virtual std::any visitEnhancedForStatementNoShortIf(Java8Parser::EnhancedForStatementNoShortIfContext *context) = 0;

    virtual std::any visitBreakStatement(Java8Parser::BreakStatementContext *context) = 0;

    virtual std::any visitContinueStatement(Java8Parser::ContinueStatementContext *context) = 0;

    virtual std::any visitReturnStatement(Java8Parser::ReturnStatementContext *context) = 0;

    virtual std::any visitThrowStatement(Java8Parser::ThrowStatementContext *context) = 0;

    virtual std::any visitSynchronizedStatement(Java8Parser::SynchronizedStatementContext *context) = 0;

    virtual std::any visitTryStatement(Java8Parser::TryStatementContext *context) = 0;

    virtual std::any visitCatches(Java8Parser::CatchesContext *context) = 0;

    virtual std::any visitCatchClause(Java8Parser::CatchClauseContext *context) = 0;

    virtual std::any visitCatchFormalParameter(Java8Parser::CatchFormalParameterContext *context) = 0;

    virtual std::any visitCatchType(Java8Parser::CatchTypeContext *context) = 0;

    virtual std::any visitFinally_(Java8Parser::Finally_Context *context) = 0;

    virtual std::any visitTryWithResourcesStatement(Java8Parser::TryWithResourcesStatementContext *context) = 0;

    virtual std::any visitResourceSpecification(Java8Parser::ResourceSpecificationContext *context) = 0;

    virtual std::any visitResourceList(Java8Parser::ResourceListContext *context) = 0;

    virtual std::any visitResource(Java8Parser::ResourceContext *context) = 0;

    virtual std::any visitPrimary(Java8Parser::PrimaryContext *context) = 0;

    virtual std::any visitPrimaryNoNewArray(Java8Parser::PrimaryNoNewArrayContext *context) = 0;

    virtual std::any
    visitPrimaryNoNewArray_lf_arrayAccess(Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext *context) = 0;

    virtual std::any
    visitPrimaryNoNewArray_lfno_arrayAccess(Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext *context) = 0;

    virtual std::any visitPrimaryNoNewArray_lf_primary(Java8Parser::PrimaryNoNewArray_lf_primaryContext *context) = 0;

    virtual std::any visitPrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary(
        Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext *context) = 0;

    virtual std::any visitPrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary(
        Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext *context) = 0;

    virtual std::any
    visitPrimaryNoNewArray_lfno_primary(Java8Parser::PrimaryNoNewArray_lfno_primaryContext *context) = 0;

    virtual std::any visitPrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary(
        Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext *context) = 0;

    virtual std::any visitPrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary(
        Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext *context) = 0;

    virtual std::any
    visitClassInstanceCreationExpression(Java8Parser::ClassInstanceCreationExpressionContext *context) = 0;

    virtual std::any visitClassInstanceCreationExpression_lf_primary(
        Java8Parser::ClassInstanceCreationExpression_lf_primaryContext *context) = 0;

    virtual std::any visitClassInstanceCreationExpression_lfno_primary(
        Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext *context) = 0;

    virtual std::any visitTypeArgumentsOrDiamond(Java8Parser::TypeArgumentsOrDiamondContext *context) = 0;

    virtual std::any visitFieldAccess(Java8Parser::FieldAccessContext *context) = 0;

    virtual std::any visitFieldAccess_lf_primary(Java8Parser::FieldAccess_lf_primaryContext *context) = 0;

    virtual std::any visitFieldAccess_lfno_primary(Java8Parser::FieldAccess_lfno_primaryContext *context) = 0;

    virtual std::any visitArrayAccess(Java8Parser::ArrayAccessContext *context) = 0;

    virtual std::any visitArrayAccess_lf_primary(Java8Parser::ArrayAccess_lf_primaryContext *context) = 0;

    virtual std::any visitArrayAccess_lfno_primary(Java8Parser::ArrayAccess_lfno_primaryContext *context) = 0;

    virtual std::any visitMethodInvocation(Java8Parser::MethodInvocationContext *context) = 0;

    virtual std::any visitMethodInvocation_lf_primary(Java8Parser::MethodInvocation_lf_primaryContext *context) = 0;

    virtual std::any visitMethodInvocation_lfno_primary(Java8Parser::MethodInvocation_lfno_primaryContext *context) = 0;

    virtual std::any visitArgumentList(Java8Parser::ArgumentListContext *context) = 0;

    virtual std::any visitMethodReference(Java8Parser::MethodReferenceContext *context) = 0;

    virtual std::any visitMethodReference_lf_primary(Java8Parser::MethodReference_lf_primaryContext *context) = 0;

    virtual std::any visitMethodReference_lfno_primary(Java8Parser::MethodReference_lfno_primaryContext *context) = 0;

    virtual std::any visitArrayCreationExpression(Java8Parser::ArrayCreationExpressionContext *context) = 0;

    virtual std::any visitDimExprs(Java8Parser::DimExprsContext *context) = 0;

    virtual std::any visitDimExpr(Java8Parser::DimExprContext *context) = 0;

    virtual std::any visitConstantExpression(Java8Parser::ConstantExpressionContext *context) = 0;

    virtual std::any visitExpression(Java8Parser::ExpressionContext *context) = 0;

    virtual std::any visitLambdaExpression(Java8Parser::LambdaExpressionContext *context) = 0;

    virtual std::any visitLambdaParameters(Java8Parser::LambdaParametersContext *context) = 0;

    virtual std::any visitInferredFormalParameterList(Java8Parser::InferredFormalParameterListContext *context) = 0;

    virtual std::any visitLambdaBody(Java8Parser::LambdaBodyContext *context) = 0;

    virtual std::any visitAssignmentExpression(Java8Parser::AssignmentExpressionContext *context) = 0;

    virtual std::any visitAssignment(Java8Parser::AssignmentContext *context) = 0;

    virtual std::any visitLeftHandSide(Java8Parser::LeftHandSideContext *context) = 0;

    virtual std::any visitAssignmentOperator(Java8Parser::AssignmentOperatorContext *context) = 0;

    virtual std::any visitConditionalExpression(Java8Parser::ConditionalExpressionContext *context) = 0;

    virtual std::any visitConditionalOrExpression(Java8Parser::ConditionalOrExpressionContext *context) = 0;

    virtual std::any visitConditionalAndExpression(Java8Parser::ConditionalAndExpressionContext *context) = 0;

    virtual std::any visitInclusiveOrExpression(Java8Parser::InclusiveOrExpressionContext *context) = 0;

    virtual std::any visitExclusiveOrExpression(Java8Parser::ExclusiveOrExpressionContext *context) = 0;

    virtual std::any visitAndExpression(Java8Parser::AndExpressionContext *context) = 0;

    virtual std::any visitEqualityExpression(Java8Parser::EqualityExpressionContext *context) = 0;

    virtual std::any visitRelationalExpression(Java8Parser::RelationalExpressionContext *context) = 0;

    virtual std::any visitShiftExpression(Java8Parser::ShiftExpressionContext *context) = 0;

    virtual std::any visitAdditiveExpression(Java8Parser::AdditiveExpressionContext *context) = 0;

    virtual std::any visitMultiplicativeExpression(Java8Parser::MultiplicativeExpressionContext *context) = 0;

    virtual std::any visitUnaryExpression(Java8Parser::UnaryExpressionContext *context) = 0;

    virtual std::any visitPreIncrementExpression(Java8Parser::PreIncrementExpressionContext *context) = 0;

    virtual std::any visitPreDecrementExpression(Java8Parser::PreDecrementExpressionContext *context) = 0;

    virtual std::any visitUnaryExpressionNotPlusMinus(Java8Parser::UnaryExpressionNotPlusMinusContext *context) = 0;

    virtual std::any visitPostfixExpression(Java8Parser::PostfixExpressionContext *context) = 0;

    virtual std::any visitPostIncrementExpression(Java8Parser::PostIncrementExpressionContext *context) = 0;

    virtual std::any visitPostIncrementExpression_lf_postfixExpression(
        Java8Parser::PostIncrementExpression_lf_postfixExpressionContext *context) = 0;

    virtual std::any visitPostDecrementExpression(Java8Parser::PostDecrementExpressionContext *context) = 0;

    virtual std::any visitPostDecrementExpression_lf_postfixExpression(
        Java8Parser::PostDecrementExpression_lf_postfixExpressionContext *context) = 0;

    virtual std::any visitCastExpression(Java8Parser::CastExpressionContext *context) = 0;
};
