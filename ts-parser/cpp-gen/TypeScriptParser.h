
// Generated from TypeScriptParser.g4 by ANTLR 4.8

#pragma once


#include <unordered_map>
#include <string>
#include "TypeScriptParserBase.h"
using std::string;


#include "antlr4-runtime.h"


namespace cyclone {


class  TypeScriptParser : public TypeScriptParserBase {
public:
  enum {
    MultiLineComment = 1, SingleLineComment = 2, RegularExpressionLiteral = 3, 
    OpenBracket = 4, CloseBracket = 5, OpenParen = 6, CloseParen = 7, OpenBrace = 8, 
    TemplateCloseBrace = 9, CloseBrace = 10, SemiColon = 11, Comma = 12, 
    Assign = 13, QuestionMark = 14, Colon = 15, Ellipsis = 16, Dot = 17, 
    PlusPlus = 18, MinusMinus = 19, Plus = 20, Minus = 21, BitNot = 22, 
    Not = 23, Multiply = 24, Divide = 25, Modulus = 26, RightShiftArithmetic = 27, 
    LeftShiftArithmetic = 28, RightShiftLogical = 29, LessThan = 30, MoreThan = 31, 
    LessThanEquals = 32, GreaterThanEquals = 33, Equals_ = 34, NotEquals = 35, 
    IdentityEquals = 36, IdentityNotEquals = 37, BitAnd = 38, BitXOr = 39, 
    BitOr = 40, And = 41, Or = 42, MultiplyAssign = 43, DivideAssign = 44, 
    ModulusAssign = 45, PlusAssign = 46, MinusAssign = 47, LeftShiftArithmeticAssign = 48, 
    RightShiftArithmeticAssign = 49, RightShiftLogicalAssign = 50, BitAndAssign = 51, 
    BitXorAssign = 52, BitOrAssign = 53, ARROW = 54, NullLiteral = 55, BooleanLiteral = 56, 
    DecimalLiteral = 57, HexIntegerLiteral = 58, OctalIntegerLiteral = 59, 
    OctalIntegerLiteral2 = 60, BinaryIntegerLiteral = 61, Break = 62, Do = 63, 
    Instanceof = 64, Typeof = 65, Case = 66, Else = 67, New = 68, Var = 69, 
    Catch = 70, Finally = 71, Return = 72, Void = 73, Continue = 74, For = 75, 
    Switch = 76, While = 77, Debugger = 78, Function_ = 79, This = 80, With = 81, 
    Default = 82, If = 83, Throw = 84, Delete = 85, In = 86, Try = 87, As = 88, 
    From = 89, ReadOnly = 90, Async = 91, Class = 92, Enum = 93, Extends = 94, 
    Super = 95, Const = 96, Export = 97, Import = 98, Implements = 99, Let = 100, 
    Private = 101, Public = 102, Interface = 103, Package = 104, Protected = 105, 
    Static = 106, Yield = 107, Any = 108, Number = 109, Boolean = 110, String = 111, 
    Symbol = 112, TypeAlias = 113, Get = 114, Set = 115, Constructor = 116, 
    Namespace = 117, Require = 118, Module = 119, Declare = 120, Abstract = 121, 
    Is = 122, At = 123, Identifier = 124, StringLiteral = 125, BackTick = 126, 
    WhiteSpaces = 127, LineTerminator = 128, HtmlComment = 129, CDataComment = 130, 
    UnexpectedCharacter = 131, TemplateStringStartExpression = 132, TemplateStringAtom = 133
  };

  enum {
    RuleInitializer = 0, RuleBindingPattern = 1, RuleTypeParameters = 2, 
    RuleTypeParameterList = 3, RuleTypeParameter = 4, RuleConstraint = 5, 
    RuleTypeArguments = 6, RuleTypeArgumentList = 7, RuleTypeArgument = 8, 
    RuleType_ = 9, RuleUnionOrIntersectionOrPrimaryType = 10, RulePrimaryType = 11, 
    RulePredefinedType = 12, RuleTypeReference = 13, RuleNestedTypeGeneric = 14, 
    RuleTypeGeneric = 15, RuleTypeIncludeGeneric = 16, RuleTypeName = 17, 
    RuleObjectType = 18, RuleTypeBody = 19, RuleTypeMemberList = 20, RuleTypeMember = 21, 
    RuleArrayType = 22, RuleTupleType = 23, RuleTupleElementTypes = 24, 
    RuleFunctionType = 25, RuleConstructorType = 26, RuleTypeQuery = 27, 
    RuleTypeQueryExpression = 28, RulePropertySignatur = 29, RuleTypeAnnotation = 30, 
    RuleCallSignature = 31, RuleParameterList = 32, RuleRequiredParameterList = 33, 
    RuleParameter = 34, RuleOptionalParameter = 35, RuleRestParameter = 36, 
    RuleRequiredParameter = 37, RuleAccessibilityModifier = 38, RuleIdentifierOrPattern = 39, 
    RuleConstructSignature = 40, RuleIndexSignature = 41, RuleMethodSignature = 42, 
    RuleTypeAliasDeclaration = 43, RuleConstructorDeclaration = 44, RuleInterfaceDeclaration = 45, 
    RuleInterfaceExtendsClause = 46, RuleClassOrInterfaceTypeList = 47, 
    RuleEnumDeclaration = 48, RuleEnumBody = 49, RuleEnumMemberList = 50, 
    RuleEnumMember = 51, RuleNamespaceDeclaration = 52, RuleNamespaceName = 53, 
    RuleImportAliasDeclaration = 54, RuleDecoratorList = 55, RuleDecorator = 56, 
    RuleDecoratorMemberExpression = 57, RuleDecoratorCallExpression = 58, 
    RuleProgram = 59, RuleSourceElement = 60, RuleStatement = 61, RuleBlock = 62, 
    RuleStatementList = 63, RuleAbstractDeclaration = 64, RuleImportStatement = 65, 
    RuleFromBlock = 66, RuleMultipleImportStatement = 67, RuleExportStatement = 68, 
    RuleVariableDeclaration = 69, RuleVariableStatement = 70, RuleVariableDeclarationList = 71, 
    RuleVariableDeclaratePattern = 72, RuleVariableAnnotation = 73, RuleVariableDeclarator = 74, 
    RuleEmptyStatement = 75, RuleExpressionStatement = 76, RuleIfStatement = 77, 
    RuleIterationStatement = 78, RuleVarModifier = 79, RuleContinueStatement = 80, 
    RuleBreakStatement = 81, RuleReturnStatement = 82, RuleYieldStatement = 83, 
    RuleWithStatement = 84, RuleSwitchStatement = 85, RuleCaseBlock = 86, 
    RuleCaseClauses = 87, RuleCaseClause = 88, RuleDefaultClause = 89, RuleLabelledStatement = 90, 
    RuleThrowStatement = 91, RuleTryStatement = 92, RuleCatchProduction = 93, 
    RuleFinallyProduction = 94, RuleDebuggerStatement = 95, RuleFunctionDeclaration = 96, 
    RuleClassDeclaration = 97, RuleClassHeritage = 98, RuleClassTail = 99, 
    RuleClassExtendsClause = 100, RuleImplementsClause = 101, RuleClassElement = 102, 
    RulePropertyMemberDeclaration = 103, RulePropertyMemberBase = 104, RuleIndexMemberDeclaration = 105, 
    RuleGeneratorMethod = 106, RuleGeneratorFunctionDeclaration = 107, RuleGeneratorBlock = 108, 
    RuleGeneratorDefinition = 109, RuleIteratorBlock = 110, RuleIteratorDefinition = 111, 
    RuleFormalParameterList = 112, RuleFormalParameterArg = 113, RuleLastFormalParameterArg = 114, 
    RuleFunctionBody = 115, RuleSourceElements = 116, RuleArrayLiteral = 117, 
    RuleElementList = 118, RuleArrayElement = 119, RuleObjectLiteral = 120, 
    RulePropertyAssignment = 121, RuleGetAccessor = 122, RuleSetAccessor = 123, 
    RulePropertyName = 124, RuleArguments = 125, RuleArgumentList = 126, 
    RuleArgument = 127, RuleExpressionSequence = 128, RuleFunctionExpressionDeclaration = 129, 
    RuleExpression = 130, RuleAsExpression = 131, RuleArrowFunctionDeclaration = 132, 
    RuleArrowFunctionParameters = 133, RuleArrowFunctionBody = 134, RuleAssignmentOperator = 135, 
    RuleLiteral = 136, RuleTemplateStringLiteral = 137, RuleTemplateStringAtom = 138, 
    RuleNumericLiteral = 139, RuleIdentifierName = 140, RuleIdentifierOrKeyWord = 141, 
    RuleReservedWord = 142, RuleKeyword = 143, RuleGetter = 144, RuleSetter = 145, 
    RuleEos = 146
  };

  TypeScriptParser(antlr4::TokenStream *input);
  ~TypeScriptParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class InitializerContext;
  class BindingPatternContext;
  class TypeParametersContext;
  class TypeParameterListContext;
  class TypeParameterContext;
  class ConstraintContext;
  class TypeArgumentsContext;
  class TypeArgumentListContext;
  class TypeArgumentContext;
  class Type_Context;
  class UnionOrIntersectionOrPrimaryTypeContext;
  class PrimaryTypeContext;
  class PredefinedTypeContext;
  class TypeReferenceContext;
  class NestedTypeGenericContext;
  class TypeGenericContext;
  class TypeIncludeGenericContext;
  class TypeNameContext;
  class ObjectTypeContext;
  class TypeBodyContext;
  class TypeMemberListContext;
  class TypeMemberContext;
  class ArrayTypeContext;
  class TupleTypeContext;
  class TupleElementTypesContext;
  class FunctionTypeContext;
  class ConstructorTypeContext;
  class TypeQueryContext;
  class TypeQueryExpressionContext;
  class PropertySignaturContext;
  class TypeAnnotationContext;
  class CallSignatureContext;
  class ParameterListContext;
  class RequiredParameterListContext;
  class ParameterContext;
  class OptionalParameterContext;
  class RestParameterContext;
  class RequiredParameterContext;
  class AccessibilityModifierContext;
  class IdentifierOrPatternContext;
  class ConstructSignatureContext;
  class IndexSignatureContext;
  class MethodSignatureContext;
  class TypeAliasDeclarationContext;
  class ConstructorDeclarationContext;
  class InterfaceDeclarationContext;
  class InterfaceExtendsClauseContext;
  class ClassOrInterfaceTypeListContext;
  class EnumDeclarationContext;
  class EnumBodyContext;
  class EnumMemberListContext;
  class EnumMemberContext;
  class NamespaceDeclarationContext;
  class NamespaceNameContext;
  class ImportAliasDeclarationContext;
  class DecoratorListContext;
  class DecoratorContext;
  class DecoratorMemberExpressionContext;
  class DecoratorCallExpressionContext;
  class ProgramContext;
  class SourceElementContext;
  class StatementContext;
  class BlockContext;
  class StatementListContext;
  class AbstractDeclarationContext;
  class ImportStatementContext;
  class FromBlockContext;
  class MultipleImportStatementContext;
  class ExportStatementContext;
  class VariableDeclarationContext;
  class VariableStatementContext;
  class VariableDeclarationListContext;
  class VariableDeclaratePatternContext;
  class VariableAnnotationContext;
  class VariableDeclaratorContext;
  class EmptyStatementContext;
  class ExpressionStatementContext;
  class IfStatementContext;
  class IterationStatementContext;
  class VarModifierContext;
  class ContinueStatementContext;
  class BreakStatementContext;
  class ReturnStatementContext;
  class YieldStatementContext;
  class WithStatementContext;
  class SwitchStatementContext;
  class CaseBlockContext;
  class CaseClausesContext;
  class CaseClauseContext;
  class DefaultClauseContext;
  class LabelledStatementContext;
  class ThrowStatementContext;
  class TryStatementContext;
  class CatchProductionContext;
  class FinallyProductionContext;
  class DebuggerStatementContext;
  class FunctionDeclarationContext;
  class ClassDeclarationContext;
  class ClassHeritageContext;
  class ClassTailContext;
  class ClassExtendsClauseContext;
  class ImplementsClauseContext;
  class ClassElementContext;
  class PropertyMemberDeclarationContext;
  class PropertyMemberBaseContext;
  class IndexMemberDeclarationContext;
  class GeneratorMethodContext;
  class GeneratorFunctionDeclarationContext;
  class GeneratorBlockContext;
  class GeneratorDefinitionContext;
  class IteratorBlockContext;
  class IteratorDefinitionContext;
  class FormalParameterListContext;
  class FormalParameterArgContext;
  class LastFormalParameterArgContext;
  class FunctionBodyContext;
  class SourceElementsContext;
  class ArrayLiteralContext;
  class ElementListContext;
  class ArrayElementContext;
  class ObjectLiteralContext;
  class PropertyAssignmentContext;
  class GetAccessorContext;
  class SetAccessorContext;
  class PropertyNameContext;
  class ArgumentsContext;
  class ArgumentListContext;
  class ArgumentContext;
  class ExpressionSequenceContext;
  class FunctionExpressionDeclarationContext;
  class ExpressionContext;
  class AsExpressionContext;
  class ArrowFunctionDeclarationContext;
  class ArrowFunctionParametersContext;
  class ArrowFunctionBodyContext;
  class AssignmentOperatorContext;
  class LiteralContext;
  class TemplateStringLiteralContext;
  class TemplateStringAtomContext;
  class NumericLiteralContext;
  class IdentifierNameContext;
  class IdentifierOrKeyWordContext;
  class ReservedWordContext;
  class KeywordContext;
  class GetterContext;
  class SetterContext;
  class EosContext; 

  class  InitializerContext : public antlr4::ParserRuleContext {
  public:
    InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assign();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerContext* initializer();

  class  BindingPatternContext : public antlr4::ParserRuleContext {
  public:
    BindingPatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArrayLiteralContext *arrayLiteral();
    ObjectLiteralContext *objectLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BindingPatternContext* bindingPattern();

  class  TypeParametersContext : public antlr4::ParserRuleContext {
  public:
    TypeParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LessThan();
    antlr4::tree::TerminalNode *MoreThan();
    TypeParameterListContext *typeParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeParametersContext* typeParameters();

  class  TypeParameterListContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeParameterContext *> typeParameter();
    TypeParameterContext* typeParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeParameterListContext* typeParameterList();

  class  TypeParameterContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    ConstraintContext *constraint();
    TypeParametersContext *typeParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeParameterContext* typeParameter();

  class  ConstraintContext : public antlr4::ParserRuleContext {
  public:
    ConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extends();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstraintContext* constraint();

  class  TypeArgumentsContext : public antlr4::ParserRuleContext {
  public:
    TypeArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LessThan();
    antlr4::tree::TerminalNode *MoreThan();
    TypeArgumentListContext *typeArgumentList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeArgumentsContext* typeArguments();

  class  TypeArgumentListContext : public antlr4::ParserRuleContext {
  public:
    TypeArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeArgumentContext *> typeArgument();
    TypeArgumentContext* typeArgument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeArgumentListContext* typeArgumentList();

  class  TypeArgumentContext : public antlr4::ParserRuleContext {
  public:
    TypeArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeArgumentContext* typeArgument();

  class  Type_Context : public antlr4::ParserRuleContext {
  public:
    Type_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnionOrIntersectionOrPrimaryTypeContext *unionOrIntersectionOrPrimaryType();
    FunctionTypeContext *functionType();
    ConstructorTypeContext *constructorType();
    TypeGenericContext *typeGeneric();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_Context* type_();

  class  UnionOrIntersectionOrPrimaryTypeContext : public antlr4::ParserRuleContext {
  public:
    UnionOrIntersectionOrPrimaryTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    UnionOrIntersectionOrPrimaryTypeContext() = default;
    void copyFrom(UnionOrIntersectionOrPrimaryTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IntersectionContext : public UnionOrIntersectionOrPrimaryTypeContext {
  public:
    IntersectionContext(UnionOrIntersectionOrPrimaryTypeContext *ctx);

    std::vector<UnionOrIntersectionOrPrimaryTypeContext *> unionOrIntersectionOrPrimaryType();
    UnionOrIntersectionOrPrimaryTypeContext* unionOrIntersectionOrPrimaryType(size_t i);
    antlr4::tree::TerminalNode *BitAnd();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrimaryContext : public UnionOrIntersectionOrPrimaryTypeContext {
  public:
    PrimaryContext(UnionOrIntersectionOrPrimaryTypeContext *ctx);

    PrimaryTypeContext *primaryType();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnionContext : public UnionOrIntersectionOrPrimaryTypeContext {
  public:
    UnionContext(UnionOrIntersectionOrPrimaryTypeContext *ctx);

    std::vector<UnionOrIntersectionOrPrimaryTypeContext *> unionOrIntersectionOrPrimaryType();
    UnionOrIntersectionOrPrimaryTypeContext* unionOrIntersectionOrPrimaryType(size_t i);
    antlr4::tree::TerminalNode *BitOr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  UnionOrIntersectionOrPrimaryTypeContext* unionOrIntersectionOrPrimaryType();
  UnionOrIntersectionOrPrimaryTypeContext* unionOrIntersectionOrPrimaryType(int precedence);
  class  PrimaryTypeContext : public antlr4::ParserRuleContext {
  public:
    PrimaryTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PrimaryTypeContext() = default;
    void copyFrom(PrimaryTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  RedefinitionOfTypeContext : public PrimaryTypeContext {
  public:
    RedefinitionOfTypeContext(PrimaryTypeContext *ctx);

    TypeReferenceContext *typeReference();
    antlr4::tree::TerminalNode *Is();
    PrimaryTypeContext *primaryType();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PredefinedPrimTypeContext : public PrimaryTypeContext {
  public:
    PredefinedPrimTypeContext(PrimaryTypeContext *ctx);

    PredefinedTypeContext *predefinedType();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrayPrimTypeContext : public PrimaryTypeContext {
  public:
    ArrayPrimTypeContext(PrimaryTypeContext *ctx);

    PrimaryTypeContext *primaryType();
    antlr4::tree::TerminalNode *OpenBracket();
    antlr4::tree::TerminalNode *CloseBracket();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenthesizedPrimTypeContext : public PrimaryTypeContext {
  public:
    ParenthesizedPrimTypeContext(PrimaryTypeContext *ctx);

    antlr4::tree::TerminalNode *OpenParen();
    Type_Context *type_();
    antlr4::tree::TerminalNode *CloseParen();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ThisPrimTypeContext : public PrimaryTypeContext {
  public:
    ThisPrimTypeContext(PrimaryTypeContext *ctx);

    antlr4::tree::TerminalNode *This();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TuplePrimTypeContext : public PrimaryTypeContext {
  public:
    TuplePrimTypeContext(PrimaryTypeContext *ctx);

    antlr4::tree::TerminalNode *OpenBracket();
    TupleElementTypesContext *tupleElementTypes();
    antlr4::tree::TerminalNode *CloseBracket();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ObjectPrimTypeContext : public PrimaryTypeContext {
  public:
    ObjectPrimTypeContext(PrimaryTypeContext *ctx);

    ObjectTypeContext *objectType();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ReferencePrimTypeContext : public PrimaryTypeContext {
  public:
    ReferencePrimTypeContext(PrimaryTypeContext *ctx);

    TypeReferenceContext *typeReference();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  QueryPrimTypeContext : public PrimaryTypeContext {
  public:
    QueryPrimTypeContext(PrimaryTypeContext *ctx);

    TypeQueryContext *typeQuery();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PrimaryTypeContext* primaryType();
  PrimaryTypeContext* primaryType(int precedence);
  class  PredefinedTypeContext : public antlr4::ParserRuleContext {
  public:
    std::string typeId;
    PredefinedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Any();
    antlr4::tree::TerminalNode *Number();
    antlr4::tree::TerminalNode *Boolean();
    antlr4::tree::TerminalNode *String();
    antlr4::tree::TerminalNode *Symbol();
    antlr4::tree::TerminalNode *Void();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PredefinedTypeContext* predefinedType();

  class  TypeReferenceContext : public antlr4::ParserRuleContext {
  public:
    TypeReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    NestedTypeGenericContext *nestedTypeGeneric();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeReferenceContext* typeReference();

  class  NestedTypeGenericContext : public antlr4::ParserRuleContext {
  public:
    NestedTypeGenericContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIncludeGenericContext *typeIncludeGeneric();
    TypeGenericContext *typeGeneric();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NestedTypeGenericContext* nestedTypeGeneric();

  class  TypeGenericContext : public antlr4::ParserRuleContext {
  public:
    TypeGenericContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LessThan();
    TypeArgumentListContext *typeArgumentList();
    antlr4::tree::TerminalNode *MoreThan();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeGenericContext* typeGeneric();

  class  TypeIncludeGenericContext : public antlr4::ParserRuleContext {
  public:
    TypeIncludeGenericContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LessThan();
    antlr4::tree::TerminalNode* LessThan(size_t i);
    std::vector<TypeArgumentListContext *> typeArgumentList();
    TypeArgumentListContext* typeArgumentList(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MoreThan();
    antlr4::tree::TerminalNode* MoreThan(size_t i);
    BindingPatternContext *bindingPattern();
    antlr4::tree::TerminalNode *RightShiftArithmetic();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIncludeGenericContext* typeIncludeGeneric();

  class  TypeNameContext : public antlr4::ParserRuleContext {
  public:
    TypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    NamespaceNameContext *namespaceName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeNameContext* typeName();

  class  ObjectTypeContext : public antlr4::ParserRuleContext {
  public:
    ObjectTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBrace();
    antlr4::tree::TerminalNode *CloseBrace();
    TypeBodyContext *typeBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectTypeContext* objectType();

  class  TypeBodyContext : public antlr4::ParserRuleContext {
  public:
    TypeBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeMemberListContext *typeMemberList();
    antlr4::tree::TerminalNode *SemiColon();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeBodyContext* typeBody();

  class  TypeMemberListContext : public antlr4::ParserRuleContext {
  public:
    TypeMemberListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeMemberContext *> typeMember();
    TypeMemberContext* typeMember(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SemiColon();
    antlr4::tree::TerminalNode* SemiColon(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeMemberListContext* typeMemberList();

  class  TypeMemberContext : public antlr4::ParserRuleContext {
  public:
    TypeMemberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PropertySignaturContext *propertySignatur();
    CallSignatureContext *callSignature();
    ConstructSignatureContext *constructSignature();
    IndexSignatureContext *indexSignature();
    MethodSignatureContext *methodSignature();
    antlr4::tree::TerminalNode *ARROW();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeMemberContext* typeMember();

  class  ArrayTypeContext : public antlr4::ParserRuleContext {
  public:
    ArrayTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryTypeContext *primaryType();
    antlr4::tree::TerminalNode *OpenBracket();
    antlr4::tree::TerminalNode *CloseBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayTypeContext* arrayType();

  class  TupleTypeContext : public antlr4::ParserRuleContext {
  public:
    TupleTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBracket();
    TupleElementTypesContext *tupleElementTypes();
    antlr4::tree::TerminalNode *CloseBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TupleTypeContext* tupleType();

  class  TupleElementTypesContext : public antlr4::ParserRuleContext {
  public:
    TupleElementTypesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Type_Context *> type_();
    Type_Context* type_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TupleElementTypesContext* tupleElementTypes();

  class  FunctionTypeContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    antlr4::tree::TerminalNode *ARROW();
    Type_Context *type_();
    TypeParametersContext *typeParameters();
    ParameterListContext *parameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionTypeContext* functionType();

  class  ConstructorTypeContext : public antlr4::ParserRuleContext {
  public:
    ConstructorTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    antlr4::tree::TerminalNode *ARROW();
    Type_Context *type_();
    TypeParametersContext *typeParameters();
    ParameterListContext *parameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstructorTypeContext* constructorType();

  class  TypeQueryContext : public antlr4::ParserRuleContext {
  public:
    TypeQueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Typeof();
    TypeQueryExpressionContext *typeQueryExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeQueryContext* typeQuery();

  class  TypeQueryExpressionContext : public antlr4::ParserRuleContext {
  public:
    TypeQueryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    std::vector<IdentifierNameContext *> identifierName();
    IdentifierNameContext* identifierName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Dot();
    antlr4::tree::TerminalNode* Dot(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeQueryExpressionContext* typeQueryExpression();

  class  PropertySignaturContext : public antlr4::ParserRuleContext {
  public:
    PropertySignaturContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PropertyNameContext *propertyName();
    antlr4::tree::TerminalNode *ReadOnly();
    antlr4::tree::TerminalNode *QuestionMark();
    TypeAnnotationContext *typeAnnotation();
    antlr4::tree::TerminalNode *ARROW();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PropertySignaturContext* propertySignatur();

  class  TypeAnnotationContext : public antlr4::ParserRuleContext {
  public:
    TypeAnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    Type_Context *type_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeAnnotationContext* typeAnnotation();

  class  CallSignatureContext : public antlr4::ParserRuleContext {
  public:
    CallSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    TypeParametersContext *typeParameters();
    ParameterListContext *parameterList();
    TypeAnnotationContext *typeAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallSignatureContext* callSignature();

  class  ParameterListContext : public antlr4::ParserRuleContext {
  public:
    ParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RestParameterContext *restParameter();
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterListContext* parameterList();

  class  RequiredParameterListContext : public antlr4::ParserRuleContext {
  public:
    RequiredParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RequiredParameterContext *> requiredParameter();
    RequiredParameterContext* requiredParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RequiredParameterListContext* requiredParameterList();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RequiredParameterContext *requiredParameter();
    OptionalParameterContext *optionalParameter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  OptionalParameterContext : public antlr4::ParserRuleContext {
  public:
    OptionalParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierOrPatternContext *identifierOrPattern();
    DecoratorListContext *decoratorList();
    antlr4::tree::TerminalNode *QuestionMark();
    InitializerContext *initializer();
    AccessibilityModifierContext *accessibilityModifier();
    TypeAnnotationContext *typeAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionalParameterContext* optionalParameter();

  class  RestParameterContext : public antlr4::ParserRuleContext {
  public:
    RestParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ellipsis();
    ExpressionContext *expression();
    TypeAnnotationContext *typeAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RestParameterContext* restParameter();

  class  RequiredParameterContext : public antlr4::ParserRuleContext {
  public:
    RequiredParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierOrPatternContext *identifierOrPattern();
    DecoratorListContext *decoratorList();
    AccessibilityModifierContext *accessibilityModifier();
    TypeAnnotationContext *typeAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RequiredParameterContext* requiredParameter();

  class  AccessibilityModifierContext : public antlr4::ParserRuleContext {
  public:
    AccessibilityModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Public();
    antlr4::tree::TerminalNode *Private();
    antlr4::tree::TerminalNode *Protected();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccessibilityModifierContext* accessibilityModifier();

  class  IdentifierOrPatternContext : public antlr4::ParserRuleContext {
  public:
    IdentifierOrPatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierNameContext *identifierName();
    BindingPatternContext *bindingPattern();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierOrPatternContext* identifierOrPattern();

  class  ConstructSignatureContext : public antlr4::ParserRuleContext {
  public:
    ConstructSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    TypeParametersContext *typeParameters();
    ParameterListContext *parameterList();
    TypeAnnotationContext *typeAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstructSignatureContext* constructSignature();

  class  IndexSignatureContext : public antlr4::ParserRuleContext {
  public:
    IndexSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBracket();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *CloseBracket();
    TypeAnnotationContext *typeAnnotation();
    antlr4::tree::TerminalNode *Number();
    antlr4::tree::TerminalNode *String();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexSignatureContext* indexSignature();

  class  MethodSignatureContext : public antlr4::ParserRuleContext {
  public:
    MethodSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PropertyNameContext *propertyName();
    CallSignatureContext *callSignature();
    antlr4::tree::TerminalNode *QuestionMark();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodSignatureContext* methodSignature();

  class  TypeAliasDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TypeAliasDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TypeAlias();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    Type_Context *type_();
    antlr4::tree::TerminalNode *SemiColon();
    TypeParametersContext *typeParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeAliasDeclarationContext* typeAliasDeclaration();

  class  ConstructorDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ConstructorDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Constructor();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    AccessibilityModifierContext *accessibilityModifier();
    FormalParameterListContext *formalParameterList();
    antlr4::tree::TerminalNode *SemiColon();
    antlr4::tree::TerminalNode *OpenBrace();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *CloseBrace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstructorDeclarationContext* constructorDeclaration();

  class  InterfaceDeclarationContext : public antlr4::ParserRuleContext {
  public:
    InterfaceDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Interface();
    antlr4::tree::TerminalNode *Identifier();
    ObjectTypeContext *objectType();
    antlr4::tree::TerminalNode *Export();
    antlr4::tree::TerminalNode *Declare();
    TypeParametersContext *typeParameters();
    InterfaceExtendsClauseContext *interfaceExtendsClause();
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceDeclarationContext* interfaceDeclaration();

  class  InterfaceExtendsClauseContext : public antlr4::ParserRuleContext {
  public:
    InterfaceExtendsClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extends();
    ClassOrInterfaceTypeListContext *classOrInterfaceTypeList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceExtendsClauseContext* interfaceExtendsClause();

  class  ClassOrInterfaceTypeListContext : public antlr4::ParserRuleContext {
  public:
    ClassOrInterfaceTypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeReferenceContext *> typeReference();
    TypeReferenceContext* typeReference(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassOrInterfaceTypeListContext* classOrInterfaceTypeList();

  class  EnumDeclarationContext : public antlr4::ParserRuleContext {
  public:
    EnumDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Enum();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *OpenBrace();
    antlr4::tree::TerminalNode *CloseBrace();
    antlr4::tree::TerminalNode *Const();
    EnumBodyContext *enumBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumDeclarationContext* enumDeclaration();

  class  EnumBodyContext : public antlr4::ParserRuleContext {
  public:
    EnumBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumMemberListContext *enumMemberList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumBodyContext* enumBody();

  class  EnumMemberListContext : public antlr4::ParserRuleContext {
  public:
    EnumMemberListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EnumMemberContext *> enumMember();
    EnumMemberContext* enumMember(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumMemberListContext* enumMemberList();

  class  EnumMemberContext : public antlr4::ParserRuleContext {
  public:
    EnumMemberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PropertyNameContext *propertyName();
    antlr4::tree::TerminalNode *Assign();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumMemberContext* enumMember();

  class  NamespaceDeclarationContext : public antlr4::ParserRuleContext {
  public:
    NamespaceDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    NamespaceNameContext *namespaceName();
    antlr4::tree::TerminalNode *OpenBrace();
    antlr4::tree::TerminalNode *CloseBrace();
    StatementListContext *statementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespaceDeclarationContext* namespaceDeclaration();

  class  NamespaceNameContext : public antlr4::ParserRuleContext {
  public:
    NamespaceNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Dot();
    antlr4::tree::TerminalNode* Dot(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespaceNameContext* namespaceName();

  class  ImportAliasDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ImportAliasDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    NamespaceNameContext *namespaceName();
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportAliasDeclarationContext* importAliasDeclaration();

  class  DecoratorListContext : public antlr4::ParserRuleContext {
  public:
    DecoratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DecoratorContext *> decorator();
    DecoratorContext* decorator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecoratorListContext* decoratorList();

  class  DecoratorContext : public antlr4::ParserRuleContext {
  public:
    DecoratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *At();
    DecoratorMemberExpressionContext *decoratorMemberExpression();
    DecoratorCallExpressionContext *decoratorCallExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecoratorContext* decorator();

  class  DecoratorMemberExpressionContext : public antlr4::ParserRuleContext {
  public:
    DecoratorMemberExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *OpenParen();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CloseParen();
    DecoratorMemberExpressionContext *decoratorMemberExpression();
    antlr4::tree::TerminalNode *Dot();
    IdentifierNameContext *identifierName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecoratorMemberExpressionContext* decoratorMemberExpression();
  DecoratorMemberExpressionContext* decoratorMemberExpression(int precedence);
  class  DecoratorCallExpressionContext : public antlr4::ParserRuleContext {
  public:
    DecoratorCallExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecoratorMemberExpressionContext *decoratorMemberExpression();
    ArgumentsContext *arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecoratorCallExpressionContext* decoratorCallExpression();

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    std::string type;
    int sourceType;
    TypeScriptParser::SourceElementsContext *body = nullptr;;
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    SourceElementsContext *sourceElements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  SourceElementContext : public antlr4::ParserRuleContext {
  public:
    SourceElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *Export();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SourceElementContext* sourceElement();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    ImportStatementContext *importStatement();
    ExportStatementContext *exportStatement();
    EmptyStatementContext *emptyStatement();
    AbstractDeclarationContext *abstractDeclaration();
    DecoratorListContext *decoratorList();
    ClassDeclarationContext *classDeclaration();
    InterfaceDeclarationContext *interfaceDeclaration();
    NamespaceDeclarationContext *namespaceDeclaration();
    IfStatementContext *ifStatement();
    IterationStatementContext *iterationStatement();
    ContinueStatementContext *continueStatement();
    BreakStatementContext *breakStatement();
    ReturnStatementContext *returnStatement();
    YieldStatementContext *yieldStatement();
    WithStatementContext *withStatement();
    LabelledStatementContext *labelledStatement();
    SwitchStatementContext *switchStatement();
    ThrowStatementContext *throwStatement();
    TryStatementContext *tryStatement();
    DebuggerStatementContext *debuggerStatement();
    FunctionDeclarationContext *functionDeclaration();
    ArrowFunctionDeclarationContext *arrowFunctionDeclaration();
    GeneratorFunctionDeclarationContext *generatorFunctionDeclaration();
    VariableStatementContext *variableStatement();
    TypeAliasDeclarationContext *typeAliasDeclaration();
    EnumDeclarationContext *enumDeclaration();
    ExpressionStatementContext *expressionStatement();
    antlr4::tree::TerminalNode *Export();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBrace();
    antlr4::tree::TerminalNode *CloseBrace();
    StatementListContext *statementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  StatementListContext : public antlr4::ParserRuleContext {
  public:
    StatementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementListContext* statementList();

  class  AbstractDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AbstractDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Abstract();
    EosContext *eos();
    antlr4::tree::TerminalNode *Identifier();
    CallSignatureContext *callSignature();
    VariableStatementContext *variableStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AbstractDeclarationContext* abstractDeclaration();

  class  ImportStatementContext : public antlr4::ParserRuleContext {
  public:
    ImportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Import();
    FromBlockContext *fromBlock();
    ImportAliasDeclarationContext *importAliasDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportStatementContext* importStatement();

  class  FromBlockContext : public antlr4::ParserRuleContext {
  public:
    FromBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *From();
    antlr4::tree::TerminalNode *StringLiteral();
    EosContext *eos();
    antlr4::tree::TerminalNode *Multiply();
    MultipleImportStatementContext *multipleImportStatement();
    antlr4::tree::TerminalNode *As();
    IdentifierNameContext *identifierName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FromBlockContext* fromBlock();

  class  MultipleImportStatementContext : public antlr4::ParserRuleContext {
  public:
    MultipleImportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBrace();
    std::vector<IdentifierNameContext *> identifierName();
    IdentifierNameContext* identifierName(size_t i);
    antlr4::tree::TerminalNode *CloseBrace();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultipleImportStatementContext* multipleImportStatement();

  class  ExportStatementContext : public antlr4::ParserRuleContext {
  public:
    ExportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Export();
    FromBlockContext *fromBlock();
    StatementContext *statement();
    antlr4::tree::TerminalNode *Default();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExportStatementContext* exportStatement();

  class  VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TypeScriptParser::VarModifierContext *kind = nullptr;;
    TypeScriptParser::VariableDeclarationListContext *declarations = nullptr;;
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarModifierContext *varModifier();
    VariableDeclarationListContext *variableDeclarationList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclarationContext* variableDeclaration();

  class  VariableStatementContext : public antlr4::ParserRuleContext {
  public:
    VariableStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclarationContext *variableDeclaration();
    BindingPatternContext *bindingPattern();
    InitializerContext *initializer();
    TypeAnnotationContext *typeAnnotation();
    antlr4::tree::TerminalNode *SemiColon();
    VariableDeclarationListContext *variableDeclarationList();
    AccessibilityModifierContext *accessibilityModifier();
    VarModifierContext *varModifier();
    antlr4::tree::TerminalNode *ReadOnly();
    antlr4::tree::TerminalNode *Declare();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableStatementContext* variableStatement();

  class  VariableDeclarationListContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableDeclaratorContext *> variableDeclarator();
    VariableDeclaratorContext* variableDeclarator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclarationListContext* variableDeclarationList();

  class  VariableDeclaratePatternContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclaratePatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierOrKeyWordContext *identifierOrKeyWord();
    ArrayLiteralContext *arrayLiteral();
    ObjectLiteralContext *objectLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclaratePatternContext* variableDeclaratePattern();

  class  VariableAnnotationContext : public antlr4::ParserRuleContext {
  public:
    VariableAnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeAnnotationContext *typeAnnotation();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableAnnotationContext* variableAnnotation();

  class  VariableDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    string type;
    TypeScriptParser::VariableDeclaratePatternContext *id = nullptr;;
    TypeScriptParser::VariableAnnotationContext *annotation = nullptr;;
    TypeScriptParser::TypeParametersContext *init = nullptr;;
    VariableDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclaratePatternContext *variableDeclaratePattern();
    VariableAnnotationContext *variableAnnotation();
    antlr4::tree::TerminalNode *Assign();
    ExpressionContext *expression();
    TypeParametersContext *typeParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclaratorContext* variableDeclarator();

  class  EmptyStatementContext : public antlr4::ParserRuleContext {
  public:
    EmptyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EmptyStatementContext* emptyStatement();

  class  ExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionSequenceContext *expressionSequence();
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionStatementContext* expressionStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    TypeScriptParser::ExpressionSequenceContext *test = nullptr;;
    TypeScriptParser::StatementContext *consequent = nullptr;;
    TypeScriptParser::StatementContext *alternate = nullptr;;
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    ExpressionSequenceContext *expressionSequence();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *Else();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  IterationStatementContext : public antlr4::ParserRuleContext {
  public:
    IterationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IterationStatementContext() = default;
    void copyFrom(IterationStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DoStatementContext : public IterationStatementContext {
  public:
    DoStatementContext(IterationStatementContext *ctx);

    antlr4::tree::TerminalNode *Do();
    StatementContext *statement();
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *OpenParen();
    ExpressionSequenceContext *expressionSequence();
    antlr4::tree::TerminalNode *CloseParen();
    EosContext *eos();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ForVarStatementContext : public IterationStatementContext {
  public:
    ForVarStatementContext(IterationStatementContext *ctx);

    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *OpenParen();
    VarModifierContext *varModifier();
    VariableDeclarationListContext *variableDeclarationList();
    std::vector<antlr4::tree::TerminalNode *> SemiColon();
    antlr4::tree::TerminalNode* SemiColon(size_t i);
    antlr4::tree::TerminalNode *CloseParen();
    StatementContext *statement();
    std::vector<ExpressionSequenceContext *> expressionSequence();
    ExpressionSequenceContext* expressionSequence(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ForVarInStatementContext : public IterationStatementContext {
  public:
    ForVarInStatementContext(IterationStatementContext *ctx);

    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *OpenParen();
    VarModifierContext *varModifier();
    VariableDeclaratorContext *variableDeclarator();
    ExpressionSequenceContext *expressionSequence();
    antlr4::tree::TerminalNode *CloseParen();
    StatementContext *statement();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WhileStatementContext : public IterationStatementContext {
  public:
    WhileStatementContext(IterationStatementContext *ctx);

    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *OpenParen();
    ExpressionSequenceContext *expressionSequence();
    antlr4::tree::TerminalNode *CloseParen();
    StatementContext *statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ForStatementContext : public IterationStatementContext {
  public:
    ForStatementContext(IterationStatementContext *ctx);

    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *OpenParen();
    std::vector<antlr4::tree::TerminalNode *> SemiColon();
    antlr4::tree::TerminalNode* SemiColon(size_t i);
    antlr4::tree::TerminalNode *CloseParen();
    StatementContext *statement();
    std::vector<ExpressionSequenceContext *> expressionSequence();
    ExpressionSequenceContext* expressionSequence(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ForInStatementContext : public IterationStatementContext {
  public:
    ForInStatementContext(IterationStatementContext *ctx);

    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *OpenParen();
    ExpressionContext *expression();
    ExpressionSequenceContext *expressionSequence();
    antlr4::tree::TerminalNode *CloseParen();
    StatementContext *statement();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  IterationStatementContext* iterationStatement();

  class  VarModifierContext : public antlr4::ParserRuleContext {
  public:
    VarModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Var();
    antlr4::tree::TerminalNode *Let();
    antlr4::tree::TerminalNode *Const();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarModifierContext* varModifier();

  class  ContinueStatementContext : public antlr4::ParserRuleContext {
  public:
    ContinueStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Continue();
    EosContext *eos();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContinueStatementContext* continueStatement();

  class  BreakStatementContext : public antlr4::ParserRuleContext {
  public:
    BreakStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Break();
    EosContext *eos();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BreakStatementContext* breakStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Return();
    EosContext *eos();
    ExpressionSequenceContext *expressionSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  YieldStatementContext : public antlr4::ParserRuleContext {
  public:
    YieldStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Yield();
    EosContext *eos();
    ExpressionSequenceContext *expressionSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  YieldStatementContext* yieldStatement();

  class  WithStatementContext : public antlr4::ParserRuleContext {
  public:
    WithStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *With();
    antlr4::tree::TerminalNode *OpenParen();
    ExpressionSequenceContext *expressionSequence();
    antlr4::tree::TerminalNode *CloseParen();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WithStatementContext* withStatement();

  class  SwitchStatementContext : public antlr4::ParserRuleContext {
  public:
    SwitchStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Switch();
    antlr4::tree::TerminalNode *OpenParen();
    ExpressionSequenceContext *expressionSequence();
    antlr4::tree::TerminalNode *CloseParen();
    CaseBlockContext *caseBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchStatementContext* switchStatement();

  class  CaseBlockContext : public antlr4::ParserRuleContext {
  public:
    CaseBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBrace();
    antlr4::tree::TerminalNode *CloseBrace();
    std::vector<CaseClausesContext *> caseClauses();
    CaseClausesContext* caseClauses(size_t i);
    DefaultClauseContext *defaultClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseBlockContext* caseBlock();

  class  CaseClausesContext : public antlr4::ParserRuleContext {
  public:
    CaseClausesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CaseClauseContext *> caseClause();
    CaseClauseContext* caseClause(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseClausesContext* caseClauses();

  class  CaseClauseContext : public antlr4::ParserRuleContext {
  public:
    CaseClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Case();
    ExpressionSequenceContext *expressionSequence();
    antlr4::tree::TerminalNode *Colon();
    StatementListContext *statementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseClauseContext* caseClause();

  class  DefaultClauseContext : public antlr4::ParserRuleContext {
  public:
    DefaultClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Default();
    antlr4::tree::TerminalNode *Colon();
    StatementListContext *statementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultClauseContext* defaultClause();

  class  LabelledStatementContext : public antlr4::ParserRuleContext {
  public:
    LabelledStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelledStatementContext* labelledStatement();

  class  ThrowStatementContext : public antlr4::ParserRuleContext {
  public:
    ThrowStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Throw();
    ExpressionSequenceContext *expressionSequence();
    EosContext *eos();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThrowStatementContext* throwStatement();

  class  TryStatementContext : public antlr4::ParserRuleContext {
  public:
    TryStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Try();
    BlockContext *block();
    CatchProductionContext *catchProduction();
    FinallyProductionContext *finallyProduction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TryStatementContext* tryStatement();

  class  CatchProductionContext : public antlr4::ParserRuleContext {
  public:
    CatchProductionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Catch();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *CloseParen();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CatchProductionContext* catchProduction();

  class  FinallyProductionContext : public antlr4::ParserRuleContext {
  public:
    FinallyProductionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Finally();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FinallyProductionContext* finallyProduction();

  class  DebuggerStatementContext : public antlr4::ParserRuleContext {
  public:
    DebuggerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Debugger();
    EosContext *eos();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DebuggerStatementContext* debuggerStatement();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    string type;
    antlr4::Token *id = nullptr;;
    TypeScriptParser::CallSignatureContext *body = nullptr;;
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Function_();
    antlr4::tree::TerminalNode *Identifier();
    CallSignatureContext *callSignature();
    antlr4::tree::TerminalNode *SemiColon();
    antlr4::tree::TerminalNode *OpenBrace();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *CloseBrace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  ClassDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ClassDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Identifier();
    ClassHeritageContext *classHeritage();
    ClassTailContext *classTail();
    antlr4::tree::TerminalNode *Abstract();
    TypeParametersContext *typeParameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassDeclarationContext* classDeclaration();

  class  ClassHeritageContext : public antlr4::ParserRuleContext {
  public:
    ClassHeritageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassExtendsClauseContext *classExtendsClause();
    ImplementsClauseContext *implementsClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassHeritageContext* classHeritage();

  class  ClassTailContext : public antlr4::ParserRuleContext {
  public:
    ClassTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBrace();
    antlr4::tree::TerminalNode *CloseBrace();
    std::vector<ClassElementContext *> classElement();
    ClassElementContext* classElement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassTailContext* classTail();

  class  ClassExtendsClauseContext : public antlr4::ParserRuleContext {
  public:
    ClassExtendsClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extends();
    TypeReferenceContext *typeReference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassExtendsClauseContext* classExtendsClause();

  class  ImplementsClauseContext : public antlr4::ParserRuleContext {
  public:
    ImplementsClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Implements();
    ClassOrInterfaceTypeListContext *classOrInterfaceTypeList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImplementsClauseContext* implementsClause();

  class  ClassElementContext : public antlr4::ParserRuleContext {
  public:
    ClassElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstructorDeclarationContext *constructorDeclaration();
    PropertyMemberDeclarationContext *propertyMemberDeclaration();
    DecoratorListContext *decoratorList();
    IndexMemberDeclarationContext *indexMemberDeclaration();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassElementContext* classElement();

  class  PropertyMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    PropertyMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PropertyMemberDeclarationContext() = default;
    void copyFrom(PropertyMemberDeclarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PropertyDeclarationExpressionContext : public PropertyMemberDeclarationContext {
  public:
    PropertyDeclarationExpressionContext(PropertyMemberDeclarationContext *ctx);

    PropertyMemberBaseContext *propertyMemberBase();
    PropertyNameContext *propertyName();
    antlr4::tree::TerminalNode *SemiColon();
    antlr4::tree::TerminalNode *QuestionMark();
    TypeAnnotationContext *typeAnnotation();
    InitializerContext *initializer();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MethodDeclarationExpressionContext : public PropertyMemberDeclarationContext {
  public:
    MethodDeclarationExpressionContext(PropertyMemberDeclarationContext *ctx);

    PropertyMemberBaseContext *propertyMemberBase();
    PropertyNameContext *propertyName();
    CallSignatureContext *callSignature();
    antlr4::tree::TerminalNode *SemiColon();
    antlr4::tree::TerminalNode *OpenBrace();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *CloseBrace();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GetterSetterDeclarationExpressionContext : public PropertyMemberDeclarationContext {
  public:
    GetterSetterDeclarationExpressionContext(PropertyMemberDeclarationContext *ctx);

    PropertyMemberBaseContext *propertyMemberBase();
    GetAccessorContext *getAccessor();
    SetAccessorContext *setAccessor();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AbstractMemberDeclarationContext : public PropertyMemberDeclarationContext {
  public:
    AbstractMemberDeclarationContext(PropertyMemberDeclarationContext *ctx);

    AbstractDeclarationContext *abstractDeclaration();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PropertyMemberDeclarationContext* propertyMemberDeclaration();

  class  PropertyMemberBaseContext : public antlr4::ParserRuleContext {
  public:
    PropertyMemberBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Async();
    AccessibilityModifierContext *accessibilityModifier();
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *ReadOnly();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PropertyMemberBaseContext* propertyMemberBase();

  class  IndexMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    IndexMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndexSignatureContext *indexSignature();
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexMemberDeclarationContext* indexMemberDeclaration();

  class  GeneratorMethodContext : public antlr4::ParserRuleContext {
  public:
    GeneratorMethodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    antlr4::tree::TerminalNode *OpenBrace();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *CloseBrace();
    antlr4::tree::TerminalNode *Multiply();
    FormalParameterListContext *formalParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GeneratorMethodContext* generatorMethod();

  class  GeneratorFunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    GeneratorFunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Function_();
    antlr4::tree::TerminalNode *Multiply();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    antlr4::tree::TerminalNode *OpenBrace();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *CloseBrace();
    antlr4::tree::TerminalNode *Identifier();
    FormalParameterListContext *formalParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GeneratorFunctionDeclarationContext* generatorFunctionDeclaration();

  class  GeneratorBlockContext : public antlr4::ParserRuleContext {
  public:
    GeneratorBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBrace();
    std::vector<GeneratorDefinitionContext *> generatorDefinition();
    GeneratorDefinitionContext* generatorDefinition(size_t i);
    antlr4::tree::TerminalNode *CloseBrace();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GeneratorBlockContext* generatorBlock();

  class  GeneratorDefinitionContext : public antlr4::ParserRuleContext {
  public:
    GeneratorDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Multiply();
    IteratorDefinitionContext *iteratorDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GeneratorDefinitionContext* generatorDefinition();

  class  IteratorBlockContext : public antlr4::ParserRuleContext {
  public:
    IteratorBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBrace();
    std::vector<IteratorDefinitionContext *> iteratorDefinition();
    IteratorDefinitionContext* iteratorDefinition(size_t i);
    antlr4::tree::TerminalNode *CloseBrace();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IteratorBlockContext* iteratorBlock();

  class  IteratorDefinitionContext : public antlr4::ParserRuleContext {
  public:
    IteratorDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBracket();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CloseBracket();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    antlr4::tree::TerminalNode *OpenBrace();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *CloseBrace();
    FormalParameterListContext *formalParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IteratorDefinitionContext* iteratorDefinition();

  class  FormalParameterListContext : public antlr4::ParserRuleContext {
  public:
    FormalParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FormalParameterArgContext *> formalParameterArg();
    FormalParameterArgContext* formalParameterArg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    LastFormalParameterArgContext *lastFormalParameterArg();
    ArrayLiteralContext *arrayLiteral();
    ObjectLiteralContext *objectLiteral();
    antlr4::tree::TerminalNode *Colon();
    FormalParameterListContext *formalParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FormalParameterListContext* formalParameterList();

  class  FormalParameterArgContext : public antlr4::ParserRuleContext {
  public:
    FormalParameterArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierOrKeyWordContext *identifierOrKeyWord();
    DecoratorContext *decorator();
    AccessibilityModifierContext *accessibilityModifier();
    antlr4::tree::TerminalNode *QuestionMark();
    TypeAnnotationContext *typeAnnotation();
    antlr4::tree::TerminalNode *Assign();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FormalParameterArgContext* formalParameterArg();

  class  LastFormalParameterArgContext : public antlr4::ParserRuleContext {
  public:
    LastFormalParameterArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LastFormalParameterArgContext* lastFormalParameterArg();

  class  FunctionBodyContext : public antlr4::ParserRuleContext {
  public:
    FunctionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SourceElementsContext *sourceElements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionBodyContext* functionBody();

  class  SourceElementsContext : public antlr4::ParserRuleContext {
  public:
    SourceElementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SourceElementContext *> sourceElement();
    SourceElementContext* sourceElement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SourceElementsContext* sourceElements();

  class  ArrayLiteralContext : public antlr4::ParserRuleContext {
  public:
    ArrayLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBracket();
    antlr4::tree::TerminalNode *CloseBracket();
    ElementListContext *elementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayLiteralContext* arrayLiteral();

  class  ElementListContext : public antlr4::ParserRuleContext {
  public:
    ElementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArrayElementContext *> arrayElement();
    ArrayElementContext* arrayElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElementListContext* elementList();

  class  ArrayElementContext : public antlr4::ParserRuleContext {
  public:
    ArrayElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayElementContext* arrayElement();

  class  ObjectLiteralContext : public antlr4::ParserRuleContext {
  public:
    ObjectLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBrace();
    antlr4::tree::TerminalNode *CloseBrace();
    std::vector<PropertyAssignmentContext *> propertyAssignment();
    PropertyAssignmentContext* propertyAssignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectLiteralContext* objectLiteral();

  class  PropertyAssignmentContext : public antlr4::ParserRuleContext {
  public:
    PropertyAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PropertyAssignmentContext() = default;
    void copyFrom(PropertyAssignmentContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PropertyExpressionAssignmentContext : public PropertyAssignmentContext {
  public:
    PropertyExpressionAssignmentContext(PropertyAssignmentContext *ctx);

    PropertyNameContext *propertyName();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Assign();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ComputedPropertyExpressionAssignmentContext : public PropertyAssignmentContext {
  public:
    ComputedPropertyExpressionAssignmentContext(PropertyAssignmentContext *ctx);

    antlr4::tree::TerminalNode *OpenBracket();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *CloseBracket();
    antlr4::tree::TerminalNode *Colon();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PropertyShorthandContext : public PropertyAssignmentContext {
  public:
    PropertyShorthandContext(PropertyAssignmentContext *ctx);

    IdentifierOrKeyWordContext *identifierOrKeyWord();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PropertySetterContext : public PropertyAssignmentContext {
  public:
    PropertySetterContext(PropertyAssignmentContext *ctx);

    SetAccessorContext *setAccessor();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PropertyGetterContext : public PropertyAssignmentContext {
  public:
    PropertyGetterContext(PropertyAssignmentContext *ctx);

    GetAccessorContext *getAccessor();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RestParameterInObjectContext : public PropertyAssignmentContext {
  public:
    RestParameterInObjectContext(PropertyAssignmentContext *ctx);

    RestParameterContext *restParameter();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MethodPropertyContext : public PropertyAssignmentContext {
  public:
    MethodPropertyContext(PropertyAssignmentContext *ctx);

    GeneratorMethodContext *generatorMethod();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PropertyAssignmentContext* propertyAssignment();

  class  GetAccessorContext : public antlr4::ParserRuleContext {
  public:
    GetAccessorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GetterContext *getter();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    antlr4::tree::TerminalNode *OpenBrace();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *CloseBrace();
    TypeAnnotationContext *typeAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetAccessorContext* getAccessor();

  class  SetAccessorContext : public antlr4::ParserRuleContext {
  public:
    SetAccessorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SetterContext *setter();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    antlr4::tree::TerminalNode *OpenBrace();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *CloseBrace();
    antlr4::tree::TerminalNode *Identifier();
    BindingPatternContext *bindingPattern();
    TypeAnnotationContext *typeAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetAccessorContext* setAccessor();

  class  PropertyNameContext : public antlr4::ParserRuleContext {
  public:
    PropertyNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierNameContext *identifierName();
    antlr4::tree::TerminalNode *StringLiteral();
    NumericLiteralContext *numericLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PropertyNameContext* propertyName();

  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    ArgumentListContext *argumentList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentsContext* arguments();

  class  ArgumentListContext : public antlr4::ParserRuleContext {
  public:
    ArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentListContext* argumentList();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Ellipsis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentContext* argument();

  class  ExpressionSequenceContext : public antlr4::ParserRuleContext {
  public:
    ExpressionSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionSequenceContext* expressionSequence();

  class  FunctionExpressionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    string type;
    antlr4::Token *id = nullptr;;
    FunctionExpressionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Function_();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    antlr4::tree::TerminalNode *OpenBrace();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *CloseBrace();
    FormalParameterListContext *formalParameterList();
    TypeAnnotationContext *typeAnnotation();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionExpressionDeclarationContext* functionExpressionDeclaration();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TemplateStringExpressionContext : public ExpressionContext {
  public:
    TemplateStringExpressionContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    TemplateStringLiteralContext *templateStringLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TernaryExpressionContext : public ExpressionContext {
  public:
    TernaryExpressionContext(ExpressionContext *ctx);

    TypeScriptParser::ExpressionContext *condition = nullptr;
    TypeScriptParser::ExpressionContext *lhs = nullptr;
    TypeScriptParser::ExpressionContext *rhs = nullptr;
    antlr4::tree::TerminalNode *QuestionMark();
    antlr4::tree::TerminalNode *Colon();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalAndExpressionContext : public ExpressionContext {
  public:
    LogicalAndExpressionContext(ExpressionContext *ctx);

    TypeScriptParser::ExpressionContext *lhs = nullptr;
    TypeScriptParser::ExpressionContext *rhs = nullptr;
    antlr4::tree::TerminalNode *And();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GeneratorsExpressionContext : public ExpressionContext {
  public:
    GeneratorsExpressionContext(ExpressionContext *ctx);

    GeneratorBlockContext *generatorBlock();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreIncrementExpressionContext : public ExpressionContext {
  public:
    PreIncrementExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *PlusPlus();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ObjectLiteralExpressionContext : public ExpressionContext {
  public:
    ObjectLiteralExpressionContext(ExpressionContext *ctx);

    ObjectLiteralContext *objectLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InExpressionContext : public ExpressionContext {
  public:
    InExpressionContext(ExpressionContext *ctx);

    TypeScriptParser::ExpressionContext *lhs = nullptr;
    TypeScriptParser::ExpressionContext *rhs = nullptr;
    antlr4::tree::TerminalNode *In();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalOrExpressionContext : public ExpressionContext {
  public:
    LogicalOrExpressionContext(ExpressionContext *ctx);

    TypeScriptParser::ExpressionContext *lhs = nullptr;
    TypeScriptParser::ExpressionContext *rhs = nullptr;
    antlr4::tree::TerminalNode *Or();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GenericTypesContext : public ExpressionContext {
  public:
    GenericTypesContext(ExpressionContext *ctx);

    TypeArgumentsContext *typeArguments();
    ExpressionSequenceContext *expressionSequence();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotExpressionContext : public ExpressionContext {
  public:
    NotExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Not();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreDecreaseExpressionContext : public ExpressionContext {
  public:
    PreDecreaseExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *MinusMinus();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArgumentsExpressionContext : public ExpressionContext {
  public:
    ArgumentsExpressionContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    ArgumentsContext *arguments();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ThisExpressionContext : public ExpressionContext {
  public:
    ThisExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *This();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionExpressionContext : public ExpressionContext {
  public:
    FunctionExpressionContext(ExpressionContext *ctx);

    FunctionExpressionDeclarationContext *functionExpressionDeclaration();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryMinusExpressionContext : public ExpressionContext {
  public:
    UnaryMinusExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Minus();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignmentExpressionContext : public ExpressionContext {
  public:
    AssignmentExpressionContext(ExpressionContext *ctx);

    TypeScriptParser::ExpressionContext *lhs = nullptr;
    TypeScriptParser::ExpressionContext *rhs = nullptr;
    antlr4::tree::TerminalNode *Assign();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PostDecreaseExpressionContext : public ExpressionContext {
  public:
    PostDecreaseExpressionContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *MinusMinus();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeofExpressionContext : public ExpressionContext {
  public:
    TypeofExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Typeof();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InstanceofExpressionContext : public ExpressionContext {
  public:
    InstanceofExpressionContext(ExpressionContext *ctx);

    TypeScriptParser::ExpressionContext *lhs = nullptr;
    TypeScriptParser::ExpressionContext *rhs = nullptr;
    antlr4::tree::TerminalNode *Instanceof();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryPlusExpressionContext : public ExpressionContext {
  public:
    UnaryPlusExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Plus();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeleteExpressionContext : public ExpressionContext {
  public:
    DeleteExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Delete();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GeneratorsFunctionExpressionContext : public ExpressionContext {
  public:
    GeneratorsFunctionExpressionContext(ExpressionContext *ctx);

    GeneratorFunctionDeclarationContext *generatorFunctionDeclaration();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrowFunctionExpressionContext : public ExpressionContext {
  public:
    ArrowFunctionExpressionContext(ExpressionContext *ctx);

    ArrowFunctionDeclarationContext *arrowFunctionDeclaration();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IteratorsExpressionContext : public ExpressionContext {
  public:
    IteratorsExpressionContext(ExpressionContext *ctx);

    IteratorBlockContext *iteratorBlock();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqualityExpressionContext : public ExpressionContext {
  public:
    EqualityExpressionContext(ExpressionContext *ctx);

    TypeScriptParser::ExpressionContext *lhs = nullptr;
    TypeScriptParser::ExpressionContext *rhs = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Equals_();
    antlr4::tree::TerminalNode *NotEquals();
    antlr4::tree::TerminalNode *IdentityEquals();
    antlr4::tree::TerminalNode *IdentityNotEquals();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitXOrExpressionContext : public ExpressionContext {
  public:
    BitXOrExpressionContext(ExpressionContext *ctx);

    TypeScriptParser::ExpressionContext *lhs = nullptr;
    TypeScriptParser::ExpressionContext *rhs = nullptr;
    antlr4::tree::TerminalNode *BitXOr();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CastAsExpressionContext : public ExpressionContext {
  public:
    CastAsExpressionContext(ExpressionContext *ctx);

    TypeScriptParser::ExpressionContext *originalType = nullptr;
    TypeScriptParser::AsExpressionContext *aliasType = nullptr;
    antlr4::tree::TerminalNode *As();
    ExpressionContext *expression();
    AsExpressionContext *asExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SuperExpressionContext : public ExpressionContext {
  public:
    SuperExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Super();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultiplicativeExpressionContext : public ExpressionContext {
  public:
    MultiplicativeExpressionContext(ExpressionContext *ctx);

    TypeScriptParser::ExpressionContext *lhs = nullptr;
    TypeScriptParser::ExpressionContext *rhs = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Multiply();
    antlr4::tree::TerminalNode *Divide();
    antlr4::tree::TerminalNode *Modulus();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitShiftExpressionContext : public ExpressionContext {
  public:
    BitShiftExpressionContext(ExpressionContext *ctx);

    TypeScriptParser::ExpressionContext *lhs = nullptr;
    TypeScriptParser::ExpressionContext *rhs = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *LeftShiftArithmetic();
    antlr4::tree::TerminalNode *RightShiftArithmetic();
    antlr4::tree::TerminalNode *RightShiftLogical();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenthesizedExpressionContext : public ExpressionContext {
  public:
    ParenthesizedExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *OpenParen();
    ExpressionSequenceContext *expressionSequence();
    antlr4::tree::TerminalNode *CloseParen();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AdditiveExpressionContext : public ExpressionContext {
  public:
    AdditiveExpressionContext(ExpressionContext *ctx);

    TypeScriptParser::ExpressionContext *lhs = nullptr;
    TypeScriptParser::ExpressionContext *rhs = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RelationalExpressionContext : public ExpressionContext {
  public:
    RelationalExpressionContext(ExpressionContext *ctx);

    TypeScriptParser::ExpressionContext *lhs = nullptr;
    TypeScriptParser::ExpressionContext *rhs = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *LessThan();
    antlr4::tree::TerminalNode *MoreThan();
    antlr4::tree::TerminalNode *LessThanEquals();
    antlr4::tree::TerminalNode *GreaterThanEquals();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PostIncrementExpressionContext : public ExpressionContext {
  public:
    PostIncrementExpressionContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *PlusPlus();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  YieldExpressionContext : public ExpressionContext {
  public:
    YieldExpressionContext(ExpressionContext *ctx);

    YieldStatementContext *yieldStatement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitNotExpressionContext : public ExpressionContext {
  public:
    BitNotExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *BitNot();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NewExpressionContext : public ExpressionContext {
  public:
    NewExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *New();
    ExpressionContext *expression();
    ArgumentsContext *arguments();
    TypeArgumentsContext *typeArguments();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LiteralExpressionContext : public ExpressionContext {
  public:
    LiteralExpressionContext(ExpressionContext *ctx);

    TypeScriptParser::LiteralContext *value = nullptr;
    LiteralContext *literal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrayLiteralExpressionContext : public ExpressionContext {
  public:
    ArrayLiteralExpressionContext(ExpressionContext *ctx);

    ArrayLiteralContext *arrayLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MemberDotExpressionContext : public ExpressionContext {
  public:
    MemberDotExpressionContext(ExpressionContext *ctx);

    TypeScriptParser::ExpressionContext *object = nullptr;
    TypeScriptParser::IdentifierNameContext *property = nullptr;
    antlr4::tree::TerminalNode *Dot();
    ExpressionContext *expression();
    IdentifierNameContext *identifierName();
    NestedTypeGenericContext *nestedTypeGeneric();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ClassExpressionContext : public ExpressionContext {
  public:
    ClassExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Class();
    ClassTailContext *classTail();
    antlr4::tree::TerminalNode *Identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MemberIndexExpressionContext : public ExpressionContext {
  public:
    MemberIndexExpressionContext(ExpressionContext *ctx);

    TypeScriptParser::ExpressionContext *object = nullptr;
    TypeScriptParser::ExpressionSequenceContext *property = nullptr;
    antlr4::tree::TerminalNode *OpenBracket();
    antlr4::tree::TerminalNode *CloseBracket();
    ExpressionContext *expression();
    ExpressionSequenceContext *expressionSequence();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IdentifierExpressionContext : public ExpressionContext {
  public:
    IdentifierExpressionContext(ExpressionContext *ctx);

    IdentifierNameContext *identifierName();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitAndExpressionContext : public ExpressionContext {
  public:
    BitAndExpressionContext(ExpressionContext *ctx);

    TypeScriptParser::ExpressionContext *lhs = nullptr;
    TypeScriptParser::ExpressionContext *rhs = nullptr;
    antlr4::tree::TerminalNode *BitAnd();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitOrExpressionContext : public ExpressionContext {
  public:
    BitOrExpressionContext(ExpressionContext *ctx);

    TypeScriptParser::ExpressionContext *lhs = nullptr;
    TypeScriptParser::ExpressionContext *rhs = nullptr;
    antlr4::tree::TerminalNode *BitOr();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignmentOperatorExpressionContext : public ExpressionContext {
  public:
    AssignmentOperatorExpressionContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    AssignmentOperatorContext *assignmentOperator();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VoidExpressionContext : public ExpressionContext {
  public:
    VoidExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Void();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  AsExpressionContext : public antlr4::ParserRuleContext {
  public:
    AsExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PredefinedTypeContext *predefinedType();
    antlr4::tree::TerminalNode *OpenBracket();
    antlr4::tree::TerminalNode *CloseBracket();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AsExpressionContext* asExpression();

  class  ArrowFunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ArrowFunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArrowFunctionParametersContext *arrowFunctionParameters();
    antlr4::tree::TerminalNode *ARROW();
    ArrowFunctionBodyContext *arrowFunctionBody();
    antlr4::tree::TerminalNode *Async();
    TypeAnnotationContext *typeAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrowFunctionDeclarationContext* arrowFunctionDeclaration();

  class  ArrowFunctionParametersContext : public antlr4::ParserRuleContext {
  public:
    ArrowFunctionParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *OpenParen();
    antlr4::tree::TerminalNode *CloseParen();
    FormalParameterListContext *formalParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrowFunctionParametersContext* arrowFunctionParameters();

  class  ArrowFunctionBodyContext : public antlr4::ParserRuleContext {
  public:
    ArrowFunctionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *OpenBrace();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *CloseBrace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrowFunctionBodyContext* arrowFunctionBody();

  class  AssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MultiplyAssign();
    antlr4::tree::TerminalNode *DivideAssign();
    antlr4::tree::TerminalNode *ModulusAssign();
    antlr4::tree::TerminalNode *PlusAssign();
    antlr4::tree::TerminalNode *MinusAssign();
    antlr4::tree::TerminalNode *LeftShiftArithmeticAssign();
    antlr4::tree::TerminalNode *RightShiftArithmeticAssign();
    antlr4::tree::TerminalNode *RightShiftLogicalAssign();
    antlr4::tree::TerminalNode *BitAndAssign();
    antlr4::tree::TerminalNode *BitXorAssign();
    antlr4::tree::TerminalNode *BitOrAssign();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentOperatorContext* assignmentOperator();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NullLiteral();
    antlr4::tree::TerminalNode *BooleanLiteral();
    antlr4::tree::TerminalNode *StringLiteral();
    TemplateStringLiteralContext *templateStringLiteral();
    antlr4::tree::TerminalNode *RegularExpressionLiteral();
    NumericLiteralContext *numericLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  TemplateStringLiteralContext : public antlr4::ParserRuleContext {
  public:
    TemplateStringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> BackTick();
    antlr4::tree::TerminalNode* BackTick(size_t i);
    std::vector<TemplateStringAtomContext *> templateStringAtom();
    TemplateStringAtomContext* templateStringAtom(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateStringLiteralContext* templateStringLiteral();

  class  TemplateStringAtomContext : public antlr4::ParserRuleContext {
  public:
    TemplateStringAtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TemplateStringAtom();
    antlr4::tree::TerminalNode *TemplateStringStartExpression();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *TemplateCloseBrace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateStringAtomContext* templateStringAtom();

  class  NumericLiteralContext : public antlr4::ParserRuleContext {
  public:
    NumericLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DecimalLiteral();
    antlr4::tree::TerminalNode *HexIntegerLiteral();
    antlr4::tree::TerminalNode *OctalIntegerLiteral();
    antlr4::tree::TerminalNode *OctalIntegerLiteral2();
    antlr4::tree::TerminalNode *BinaryIntegerLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumericLiteralContext* numericLiteral();

  class  IdentifierNameContext : public antlr4::ParserRuleContext {
  public:
    IdentifierNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    ReservedWordContext *reservedWord();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierNameContext* identifierName();

  class  IdentifierOrKeyWordContext : public antlr4::ParserRuleContext {
  public:
    IdentifierOrKeyWordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *TypeAlias();
    antlr4::tree::TerminalNode *Require();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierOrKeyWordContext* identifierOrKeyWord();

  class  ReservedWordContext : public antlr4::ParserRuleContext {
  public:
    ReservedWordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeywordContext *keyword();
    antlr4::tree::TerminalNode *NullLiteral();
    antlr4::tree::TerminalNode *BooleanLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReservedWordContext* reservedWord();

  class  KeywordContext : public antlr4::ParserRuleContext {
  public:
    KeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *Do();
    antlr4::tree::TerminalNode *Instanceof();
    antlr4::tree::TerminalNode *Typeof();
    antlr4::tree::TerminalNode *Case();
    antlr4::tree::TerminalNode *Else();
    antlr4::tree::TerminalNode *New();
    antlr4::tree::TerminalNode *Var();
    antlr4::tree::TerminalNode *Catch();
    antlr4::tree::TerminalNode *Finally();
    antlr4::tree::TerminalNode *Return();
    antlr4::tree::TerminalNode *Void();
    antlr4::tree::TerminalNode *Continue();
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *Switch();
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *Debugger();
    antlr4::tree::TerminalNode *Function_();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *With();
    antlr4::tree::TerminalNode *Default();
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *Throw();
    antlr4::tree::TerminalNode *Delete();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Try();
    antlr4::tree::TerminalNode *ReadOnly();
    antlr4::tree::TerminalNode *Async();
    antlr4::tree::TerminalNode *From();
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Enum();
    antlr4::tree::TerminalNode *Extends();
    antlr4::tree::TerminalNode *Super();
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Export();
    antlr4::tree::TerminalNode *Import();
    antlr4::tree::TerminalNode *Implements();
    antlr4::tree::TerminalNode *Let();
    antlr4::tree::TerminalNode *Private();
    antlr4::tree::TerminalNode *Public();
    antlr4::tree::TerminalNode *Interface();
    antlr4::tree::TerminalNode *Package();
    antlr4::tree::TerminalNode *Protected();
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Yield();
    antlr4::tree::TerminalNode *Get();
    antlr4::tree::TerminalNode *Set();
    antlr4::tree::TerminalNode *Require();
    antlr4::tree::TerminalNode *TypeAlias();
    antlr4::tree::TerminalNode *String();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeywordContext* keyword();

  class  GetterContext : public antlr4::ParserRuleContext {
  public:
    GetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Get();
    PropertyNameContext *propertyName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetterContext* getter();

  class  SetterContext : public antlr4::ParserRuleContext {
  public:
    SetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Set();
    PropertyNameContext *propertyName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetterContext* setter();

  class  EosContext : public antlr4::ParserRuleContext {
  public:
    EosContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SemiColon();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EosContext* eos();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool unionOrIntersectionOrPrimaryTypeSempred(UnionOrIntersectionOrPrimaryTypeContext *_localctx, size_t predicateIndex);
  bool primaryTypeSempred(PrimaryTypeContext *_localctx, size_t predicateIndex);
  bool arrayTypeSempred(ArrayTypeContext *_localctx, size_t predicateIndex);
  bool decoratorMemberExpressionSempred(DecoratorMemberExpressionContext *_localctx, size_t predicateIndex);
  bool expressionStatementSempred(ExpressionStatementContext *_localctx, size_t predicateIndex);
  bool iterationStatementSempred(IterationStatementContext *_localctx, size_t predicateIndex);
  bool continueStatementSempred(ContinueStatementContext *_localctx, size_t predicateIndex);
  bool breakStatementSempred(BreakStatementContext *_localctx, size_t predicateIndex);
  bool returnStatementSempred(ReturnStatementContext *_localctx, size_t predicateIndex);
  bool yieldStatementSempred(YieldStatementContext *_localctx, size_t predicateIndex);
  bool throwStatementSempred(ThrowStatementContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool eosSempred(EosContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace cyclone
