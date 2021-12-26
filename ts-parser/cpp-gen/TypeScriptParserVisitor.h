
// Generated from TypeScriptParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "TypeScriptParser.h"


namespace cyclone {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by TypeScriptParser.
 */
class  TypeScriptParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by TypeScriptParser.
   */
    virtual antlrcpp::Any visitInitializer(TypeScriptParser::InitializerContext *context) = 0;

    virtual antlrcpp::Any visitBindingPattern(TypeScriptParser::BindingPatternContext *context) = 0;

    virtual antlrcpp::Any visitTypeParameters(TypeScriptParser::TypeParametersContext *context) = 0;

    virtual antlrcpp::Any visitTypeParameterList(TypeScriptParser::TypeParameterListContext *context) = 0;

    virtual antlrcpp::Any visitTypeParameter(TypeScriptParser::TypeParameterContext *context) = 0;

    virtual antlrcpp::Any visitConstraint(TypeScriptParser::ConstraintContext *context) = 0;

    virtual antlrcpp::Any visitTypeArguments(TypeScriptParser::TypeArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitTypeArgumentList(TypeScriptParser::TypeArgumentListContext *context) = 0;

    virtual antlrcpp::Any visitTypeArgument(TypeScriptParser::TypeArgumentContext *context) = 0;

    virtual antlrcpp::Any visitType_(TypeScriptParser::Type_Context *context) = 0;

    virtual antlrcpp::Any visitIntersection(TypeScriptParser::IntersectionContext *context) = 0;

    virtual antlrcpp::Any visitPrimary(TypeScriptParser::PrimaryContext *context) = 0;

    virtual antlrcpp::Any visitUnion(TypeScriptParser::UnionContext *context) = 0;

    virtual antlrcpp::Any visitRedefinitionOfType(TypeScriptParser::RedefinitionOfTypeContext *context) = 0;

    virtual antlrcpp::Any visitPredefinedPrimType(TypeScriptParser::PredefinedPrimTypeContext *context) = 0;

    virtual antlrcpp::Any visitArrayPrimType(TypeScriptParser::ArrayPrimTypeContext *context) = 0;

    virtual antlrcpp::Any visitParenthesizedPrimType(TypeScriptParser::ParenthesizedPrimTypeContext *context) = 0;

    virtual antlrcpp::Any visitThisPrimType(TypeScriptParser::ThisPrimTypeContext *context) = 0;

    virtual antlrcpp::Any visitTuplePrimType(TypeScriptParser::TuplePrimTypeContext *context) = 0;

    virtual antlrcpp::Any visitObjectPrimType(TypeScriptParser::ObjectPrimTypeContext *context) = 0;

    virtual antlrcpp::Any visitReferencePrimType(TypeScriptParser::ReferencePrimTypeContext *context) = 0;

    virtual antlrcpp::Any visitQueryPrimType(TypeScriptParser::QueryPrimTypeContext *context) = 0;

    virtual antlrcpp::Any visitPredefinedType(TypeScriptParser::PredefinedTypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeReference(TypeScriptParser::TypeReferenceContext *context) = 0;

    virtual antlrcpp::Any visitNestedTypeGeneric(TypeScriptParser::NestedTypeGenericContext *context) = 0;

    virtual antlrcpp::Any visitTypeGeneric(TypeScriptParser::TypeGenericContext *context) = 0;

    virtual antlrcpp::Any visitTypeIncludeGeneric(TypeScriptParser::TypeIncludeGenericContext *context) = 0;

    virtual antlrcpp::Any visitTypeName(TypeScriptParser::TypeNameContext *context) = 0;

    virtual antlrcpp::Any visitObjectType(TypeScriptParser::ObjectTypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeBody(TypeScriptParser::TypeBodyContext *context) = 0;

    virtual antlrcpp::Any visitTypeMemberList(TypeScriptParser::TypeMemberListContext *context) = 0;

    virtual antlrcpp::Any visitTypeMember(TypeScriptParser::TypeMemberContext *context) = 0;

    virtual antlrcpp::Any visitArrayType(TypeScriptParser::ArrayTypeContext *context) = 0;

    virtual antlrcpp::Any visitTupleType(TypeScriptParser::TupleTypeContext *context) = 0;

    virtual antlrcpp::Any visitTupleElementTypes(TypeScriptParser::TupleElementTypesContext *context) = 0;

    virtual antlrcpp::Any visitFunctionType(TypeScriptParser::FunctionTypeContext *context) = 0;

    virtual antlrcpp::Any visitConstructorType(TypeScriptParser::ConstructorTypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeQuery(TypeScriptParser::TypeQueryContext *context) = 0;

    virtual antlrcpp::Any visitTypeQueryExpression(TypeScriptParser::TypeQueryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPropertySignatur(TypeScriptParser::PropertySignaturContext *context) = 0;

    virtual antlrcpp::Any visitTypeAnnotation(TypeScriptParser::TypeAnnotationContext *context) = 0;

    virtual antlrcpp::Any visitCallSignature(TypeScriptParser::CallSignatureContext *context) = 0;

    virtual antlrcpp::Any visitParameterList(TypeScriptParser::ParameterListContext *context) = 0;

    virtual antlrcpp::Any visitRequiredParameterList(TypeScriptParser::RequiredParameterListContext *context) = 0;

    virtual antlrcpp::Any visitParameter(TypeScriptParser::ParameterContext *context) = 0;

    virtual antlrcpp::Any visitOptionalParameter(TypeScriptParser::OptionalParameterContext *context) = 0;

    virtual antlrcpp::Any visitRestParameter(TypeScriptParser::RestParameterContext *context) = 0;

    virtual antlrcpp::Any visitRequiredParameter(TypeScriptParser::RequiredParameterContext *context) = 0;

    virtual antlrcpp::Any visitAccessibilityModifier(TypeScriptParser::AccessibilityModifierContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierOrPattern(TypeScriptParser::IdentifierOrPatternContext *context) = 0;

    virtual antlrcpp::Any visitConstructSignature(TypeScriptParser::ConstructSignatureContext *context) = 0;

    virtual antlrcpp::Any visitIndexSignature(TypeScriptParser::IndexSignatureContext *context) = 0;

    virtual antlrcpp::Any visitMethodSignature(TypeScriptParser::MethodSignatureContext *context) = 0;

    virtual antlrcpp::Any visitTypeAliasDeclaration(TypeScriptParser::TypeAliasDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitConstructorDeclaration(TypeScriptParser::ConstructorDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceDeclaration(TypeScriptParser::InterfaceDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceExtendsClause(TypeScriptParser::InterfaceExtendsClauseContext *context) = 0;

    virtual antlrcpp::Any visitClassOrInterfaceTypeList(TypeScriptParser::ClassOrInterfaceTypeListContext *context) = 0;

    virtual antlrcpp::Any visitEnumDeclaration(TypeScriptParser::EnumDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitEnumBody(TypeScriptParser::EnumBodyContext *context) = 0;

    virtual antlrcpp::Any visitEnumMemberList(TypeScriptParser::EnumMemberListContext *context) = 0;

    virtual antlrcpp::Any visitEnumMember(TypeScriptParser::EnumMemberContext *context) = 0;

    virtual antlrcpp::Any visitNamespaceDeclaration(TypeScriptParser::NamespaceDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitNamespaceName(TypeScriptParser::NamespaceNameContext *context) = 0;

    virtual antlrcpp::Any visitImportAliasDeclaration(TypeScriptParser::ImportAliasDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitDecoratorList(TypeScriptParser::DecoratorListContext *context) = 0;

    virtual antlrcpp::Any visitDecorator(TypeScriptParser::DecoratorContext *context) = 0;

    virtual antlrcpp::Any visitDecoratorMemberExpression(TypeScriptParser::DecoratorMemberExpressionContext *context) = 0;

    virtual antlrcpp::Any visitDecoratorCallExpression(TypeScriptParser::DecoratorCallExpressionContext *context) = 0;

    virtual antlrcpp::Any visitProgram(TypeScriptParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitSourceElement(TypeScriptParser::SourceElementContext *context) = 0;

    virtual antlrcpp::Any visitStatement(TypeScriptParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitBlock(TypeScriptParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitStatementList(TypeScriptParser::StatementListContext *context) = 0;

    virtual antlrcpp::Any visitAbstractDeclaration(TypeScriptParser::AbstractDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitImportStatement(TypeScriptParser::ImportStatementContext *context) = 0;

    virtual antlrcpp::Any visitFromBlock(TypeScriptParser::FromBlockContext *context) = 0;

    virtual antlrcpp::Any visitMultipleImportStatement(TypeScriptParser::MultipleImportStatementContext *context) = 0;

    virtual antlrcpp::Any visitExportStatement(TypeScriptParser::ExportStatementContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaration(TypeScriptParser::VariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitVariableStatement(TypeScriptParser::VariableStatementContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclarationList(TypeScriptParser::VariableDeclarationListContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaratePattern(TypeScriptParser::VariableDeclaratePatternContext *context) = 0;

    virtual antlrcpp::Any visitVariableAnnotation(TypeScriptParser::VariableAnnotationContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclarator(TypeScriptParser::VariableDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitEmptyStatement(TypeScriptParser::EmptyStatementContext *context) = 0;

    virtual antlrcpp::Any visitExpressionStatement(TypeScriptParser::ExpressionStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(TypeScriptParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitDoStatement(TypeScriptParser::DoStatementContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(TypeScriptParser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitForStatement(TypeScriptParser::ForStatementContext *context) = 0;

    virtual antlrcpp::Any visitForVarStatement(TypeScriptParser::ForVarStatementContext *context) = 0;

    virtual antlrcpp::Any visitForInStatement(TypeScriptParser::ForInStatementContext *context) = 0;

    virtual antlrcpp::Any visitForVarInStatement(TypeScriptParser::ForVarInStatementContext *context) = 0;

    virtual antlrcpp::Any visitVarModifier(TypeScriptParser::VarModifierContext *context) = 0;

    virtual antlrcpp::Any visitContinueStatement(TypeScriptParser::ContinueStatementContext *context) = 0;

    virtual antlrcpp::Any visitBreakStatement(TypeScriptParser::BreakStatementContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(TypeScriptParser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitYieldStatement(TypeScriptParser::YieldStatementContext *context) = 0;

    virtual antlrcpp::Any visitWithStatement(TypeScriptParser::WithStatementContext *context) = 0;

    virtual antlrcpp::Any visitSwitchStatement(TypeScriptParser::SwitchStatementContext *context) = 0;

    virtual antlrcpp::Any visitCaseBlock(TypeScriptParser::CaseBlockContext *context) = 0;

    virtual antlrcpp::Any visitCaseClauses(TypeScriptParser::CaseClausesContext *context) = 0;

    virtual antlrcpp::Any visitCaseClause(TypeScriptParser::CaseClauseContext *context) = 0;

    virtual antlrcpp::Any visitDefaultClause(TypeScriptParser::DefaultClauseContext *context) = 0;

    virtual antlrcpp::Any visitLabelledStatement(TypeScriptParser::LabelledStatementContext *context) = 0;

    virtual antlrcpp::Any visitThrowStatement(TypeScriptParser::ThrowStatementContext *context) = 0;

    virtual antlrcpp::Any visitTryStatement(TypeScriptParser::TryStatementContext *context) = 0;

    virtual antlrcpp::Any visitCatchProduction(TypeScriptParser::CatchProductionContext *context) = 0;

    virtual antlrcpp::Any visitFinallyProduction(TypeScriptParser::FinallyProductionContext *context) = 0;

    virtual antlrcpp::Any visitDebuggerStatement(TypeScriptParser::DebuggerStatementContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(TypeScriptParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitClassDeclaration(TypeScriptParser::ClassDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitClassHeritage(TypeScriptParser::ClassHeritageContext *context) = 0;

    virtual antlrcpp::Any visitClassTail(TypeScriptParser::ClassTailContext *context) = 0;

    virtual antlrcpp::Any visitClassExtendsClause(TypeScriptParser::ClassExtendsClauseContext *context) = 0;

    virtual antlrcpp::Any visitImplementsClause(TypeScriptParser::ImplementsClauseContext *context) = 0;

    virtual antlrcpp::Any visitClassElement(TypeScriptParser::ClassElementContext *context) = 0;

    virtual antlrcpp::Any visitPropertyDeclarationExpression(TypeScriptParser::PropertyDeclarationExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMethodDeclarationExpression(TypeScriptParser::MethodDeclarationExpressionContext *context) = 0;

    virtual antlrcpp::Any visitGetterSetterDeclarationExpression(TypeScriptParser::GetterSetterDeclarationExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAbstractMemberDeclaration(TypeScriptParser::AbstractMemberDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitPropertyMemberBase(TypeScriptParser::PropertyMemberBaseContext *context) = 0;

    virtual antlrcpp::Any visitIndexMemberDeclaration(TypeScriptParser::IndexMemberDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitGeneratorMethod(TypeScriptParser::GeneratorMethodContext *context) = 0;

    virtual antlrcpp::Any visitGeneratorFunctionDeclaration(TypeScriptParser::GeneratorFunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitGeneratorBlock(TypeScriptParser::GeneratorBlockContext *context) = 0;

    virtual antlrcpp::Any visitGeneratorDefinition(TypeScriptParser::GeneratorDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitIteratorBlock(TypeScriptParser::IteratorBlockContext *context) = 0;

    virtual antlrcpp::Any visitIteratorDefinition(TypeScriptParser::IteratorDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFormalParameterList(TypeScriptParser::FormalParameterListContext *context) = 0;

    virtual antlrcpp::Any visitFormalParameterArg(TypeScriptParser::FormalParameterArgContext *context) = 0;

    virtual antlrcpp::Any visitLastFormalParameterArg(TypeScriptParser::LastFormalParameterArgContext *context) = 0;

    virtual antlrcpp::Any visitFunctionBody(TypeScriptParser::FunctionBodyContext *context) = 0;

    virtual antlrcpp::Any visitSourceElements(TypeScriptParser::SourceElementsContext *context) = 0;

    virtual antlrcpp::Any visitArrayLiteral(TypeScriptParser::ArrayLiteralContext *context) = 0;

    virtual antlrcpp::Any visitElementList(TypeScriptParser::ElementListContext *context) = 0;

    virtual antlrcpp::Any visitArrayElement(TypeScriptParser::ArrayElementContext *context) = 0;

    virtual antlrcpp::Any visitObjectLiteral(TypeScriptParser::ObjectLiteralContext *context) = 0;

    virtual antlrcpp::Any visitPropertyExpressionAssignment(TypeScriptParser::PropertyExpressionAssignmentContext *context) = 0;

    virtual antlrcpp::Any visitComputedPropertyExpressionAssignment(TypeScriptParser::ComputedPropertyExpressionAssignmentContext *context) = 0;

    virtual antlrcpp::Any visitPropertyGetter(TypeScriptParser::PropertyGetterContext *context) = 0;

    virtual antlrcpp::Any visitPropertySetter(TypeScriptParser::PropertySetterContext *context) = 0;

    virtual antlrcpp::Any visitMethodProperty(TypeScriptParser::MethodPropertyContext *context) = 0;

    virtual antlrcpp::Any visitPropertyShorthand(TypeScriptParser::PropertyShorthandContext *context) = 0;

    virtual antlrcpp::Any visitRestParameterInObject(TypeScriptParser::RestParameterInObjectContext *context) = 0;

    virtual antlrcpp::Any visitGetAccessor(TypeScriptParser::GetAccessorContext *context) = 0;

    virtual antlrcpp::Any visitSetAccessor(TypeScriptParser::SetAccessorContext *context) = 0;

    virtual antlrcpp::Any visitPropertyName(TypeScriptParser::PropertyNameContext *context) = 0;

    virtual antlrcpp::Any visitArguments(TypeScriptParser::ArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitArgumentList(TypeScriptParser::ArgumentListContext *context) = 0;

    virtual antlrcpp::Any visitArgument(TypeScriptParser::ArgumentContext *context) = 0;

    virtual antlrcpp::Any visitExpressionSequence(TypeScriptParser::ExpressionSequenceContext *context) = 0;

    virtual antlrcpp::Any visitFunctionExpressionDeclaration(TypeScriptParser::FunctionExpressionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTemplateStringExpression(TypeScriptParser::TemplateStringExpressionContext *context) = 0;

    virtual antlrcpp::Any visitTernaryExpression(TypeScriptParser::TernaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalAndExpression(TypeScriptParser::LogicalAndExpressionContext *context) = 0;

    virtual antlrcpp::Any visitGeneratorsExpression(TypeScriptParser::GeneratorsExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPreIncrementExpression(TypeScriptParser::PreIncrementExpressionContext *context) = 0;

    virtual antlrcpp::Any visitObjectLiteralExpression(TypeScriptParser::ObjectLiteralExpressionContext *context) = 0;

    virtual antlrcpp::Any visitInExpression(TypeScriptParser::InExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalOrExpression(TypeScriptParser::LogicalOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitGenericTypes(TypeScriptParser::GenericTypesContext *context) = 0;

    virtual antlrcpp::Any visitNotExpression(TypeScriptParser::NotExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPreDecreaseExpression(TypeScriptParser::PreDecreaseExpressionContext *context) = 0;

    virtual antlrcpp::Any visitArgumentsExpression(TypeScriptParser::ArgumentsExpressionContext *context) = 0;

    virtual antlrcpp::Any visitThisExpression(TypeScriptParser::ThisExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionExpression(TypeScriptParser::FunctionExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryMinusExpression(TypeScriptParser::UnaryMinusExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentExpression(TypeScriptParser::AssignmentExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPostDecreaseExpression(TypeScriptParser::PostDecreaseExpressionContext *context) = 0;

    virtual antlrcpp::Any visitTypeofExpression(TypeScriptParser::TypeofExpressionContext *context) = 0;

    virtual antlrcpp::Any visitInstanceofExpression(TypeScriptParser::InstanceofExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryPlusExpression(TypeScriptParser::UnaryPlusExpressionContext *context) = 0;

    virtual antlrcpp::Any visitDeleteExpression(TypeScriptParser::DeleteExpressionContext *context) = 0;

    virtual antlrcpp::Any visitGeneratorsFunctionExpression(TypeScriptParser::GeneratorsFunctionExpressionContext *context) = 0;

    virtual antlrcpp::Any visitArrowFunctionExpression(TypeScriptParser::ArrowFunctionExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIteratorsExpression(TypeScriptParser::IteratorsExpressionContext *context) = 0;

    virtual antlrcpp::Any visitEqualityExpression(TypeScriptParser::EqualityExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBitXOrExpression(TypeScriptParser::BitXOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCastAsExpression(TypeScriptParser::CastAsExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSuperExpression(TypeScriptParser::SuperExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeExpression(TypeScriptParser::MultiplicativeExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBitShiftExpression(TypeScriptParser::BitShiftExpressionContext *context) = 0;

    virtual antlrcpp::Any visitParenthesizedExpression(TypeScriptParser::ParenthesizedExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAdditiveExpression(TypeScriptParser::AdditiveExpressionContext *context) = 0;

    virtual antlrcpp::Any visitRelationalExpression(TypeScriptParser::RelationalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPostIncrementExpression(TypeScriptParser::PostIncrementExpressionContext *context) = 0;

    virtual antlrcpp::Any visitYieldExpression(TypeScriptParser::YieldExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBitNotExpression(TypeScriptParser::BitNotExpressionContext *context) = 0;

    virtual antlrcpp::Any visitNewExpression(TypeScriptParser::NewExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLiteralExpression(TypeScriptParser::LiteralExpressionContext *context) = 0;

    virtual antlrcpp::Any visitArrayLiteralExpression(TypeScriptParser::ArrayLiteralExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMemberDotExpression(TypeScriptParser::MemberDotExpressionContext *context) = 0;

    virtual antlrcpp::Any visitClassExpression(TypeScriptParser::ClassExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMemberIndexExpression(TypeScriptParser::MemberIndexExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierExpression(TypeScriptParser::IdentifierExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBitAndExpression(TypeScriptParser::BitAndExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBitOrExpression(TypeScriptParser::BitOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentOperatorExpression(TypeScriptParser::AssignmentOperatorExpressionContext *context) = 0;

    virtual antlrcpp::Any visitVoidExpression(TypeScriptParser::VoidExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAsExpression(TypeScriptParser::AsExpressionContext *context) = 0;

    virtual antlrcpp::Any visitArrowFunctionDeclaration(TypeScriptParser::ArrowFunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitArrowFunctionParameters(TypeScriptParser::ArrowFunctionParametersContext *context) = 0;

    virtual antlrcpp::Any visitArrowFunctionBody(TypeScriptParser::ArrowFunctionBodyContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentOperator(TypeScriptParser::AssignmentOperatorContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(TypeScriptParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitTemplateStringLiteral(TypeScriptParser::TemplateStringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitTemplateStringAtom(TypeScriptParser::TemplateStringAtomContext *context) = 0;

    virtual antlrcpp::Any visitNumericLiteral(TypeScriptParser::NumericLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierName(TypeScriptParser::IdentifierNameContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierOrKeyWord(TypeScriptParser::IdentifierOrKeyWordContext *context) = 0;

    virtual antlrcpp::Any visitReservedWord(TypeScriptParser::ReservedWordContext *context) = 0;

    virtual antlrcpp::Any visitKeyword(TypeScriptParser::KeywordContext *context) = 0;

    virtual antlrcpp::Any visitGetter(TypeScriptParser::GetterContext *context) = 0;

    virtual antlrcpp::Any visitSetter(TypeScriptParser::SetterContext *context) = 0;

    virtual antlrcpp::Any visitEos(TypeScriptParser::EosContext *context) = 0;


};

}  // namespace cyclone
