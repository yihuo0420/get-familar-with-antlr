#include "common_def.hpp"

namespace cyclone::parser
{

    std::string CommonDef::ruleName(int idx)
    {
        return idx < ruleNames_.size() ? ruleNames_.at(idx) : "";
    }

    std::string CommonDef::tokenType(int idx)
    {
        return idx < tokenTypes_.size() ? tokenTypes_.at(idx) : "";
    }
    /**
     * @brief The index  of tokenType generasted by antlr4 starts from 1
     *
     */
    static const auto InitialTokenTypePlaceHolder = "<INVALID>";
    const StringList CommonDef::ruleNames_ = {"Initializer", "BindingPattern ", "TypeParameters ", "TypeParameterList ", "TypeParameter ", "Constraint ", "TypeArguments ", "TypeArgumentList ", "TypeArgument ", "Type_ ", "UnionOrIntersectionOrPrimaryType ", "PrimaryType ", "PredefinedType ", "TypeReference ", "NestedTypeGeneric ", "TypeGeneric ", "TypeIncludeGeneric ", "TypeName ", "ObjectType ", "TypeBody ", "TypeMemberList ", "TypeMember ", "ArrayType ", "TupleType ", "TupleElementTypes ", "FunctionType ", "ConstructorType ", "TypeQuery ", "TypeQueryExpression ", "PropertySignatur ", "TypeAnnotation ", "CallSignature ", "ParameterList ", "RequiredParameterList ", "Parameter ", "OptionalParameter ", "RestParameter ", "RequiredParameter ", "AccessibilityModifier ", "IdentifierOrPattern ", "ConstructSignature ", "IndexSignature ", "MethodSignature ", "TypeAliasDeclaration ", "ConstructorDeclaration ", "InterfaceDeclaration ", "InterfaceExtendsClause ", "ClassOrInterfaceTypeList ", "EnumDeclaration ", "EnumBody ", "EnumMemberList ", "EnumMember ", "NamespaceDeclaration ", "NamespaceName ", "ImportAliasDeclaration ", "DecoratorList ", "Decorator ", "DecoratorMemberExpression ", "DecoratorCallExpression ", "Program ", "SourceElement ", "Statement ", "Block ", "StatementList ", "AbstractDeclaration ", "ImportStatement ", "FromBlock ", "MultipleImportStatement ", "ExportStatement ", "VariableStatement ", "VariableDeclarationList ", "VariableDeclaration ", "EmptyStatement ", "ExpressionStatement ", "IfStatement ", "IterationStatement ", "VarModifier ", "ContinueStatement ", "BreakStatement ", "ReturnStatement ", "YieldStatement ", "WithStatement ", "SwitchStatement ", "CaseBlock ", "CaseClauses ", "CaseClause ", "DefaultClause ", "LabelledStatement ", "ThrowStatement ", "TryStatement ", "CatchProduction ", "FinallyProduction ", "DebuggerStatement ", "FunctionDeclaration ", "ClassDeclaration ", "ClassHeritage ", "ClassTail ", "ClassExtendsClause ", "ImplementsClause ", "ClassElement ", "PropertyMemberDeclaration ", "PropertyMemberBase ", "IndexMemberDeclaration ", "GeneratorMethod ", "GeneratorFunctionDeclaration ", "GeneratorBlock ", "GeneratorDefinition ", "IteratorBlock ", "IteratorDefinition ", "FormalParameterList ", "FormalParameterArg ", "LastFormalParameterArg ", "FunctionBody ", "SourceElements ", "ArrayLiteral ", "ElementList ", "ArrayElement ", "ObjectLiteral ", "PropertyAssignment ", "GetAccessor ", "SetAccessor ", "PropertyName ", "Arguments ", "ArgumentList ", "Argument ", "ExpressionSequence ", "FunctionExpressionDeclaration ", "SingleExpression ", "AsExpression ", "ArrowFunctionDeclaration ", "ArrowFunctionParameters ", "ArrowFunctionBody ", "AssignmentOperator ", "Literal ", "TemplateStringLiteral ", "TemplateStringAtom ", "NumericLiteral ", "IdentifierName ", "IdentifierOrKeyWord ", "ReservedWord ", "Keyword ", "Getter ", "Setter ", "Eos"};
    const StringList CommonDef::tokenTypes_ = {InitialTokenTypePlaceHolder, "MultiLineComment", "SingleLineComment", "RegularExpressionLiteral", "OpenBracket", "CloseBracket", "OpenParen", "CloseParen", "OpenBrace", "TemplateCloseBrace", "CloseBrace", "SemiColon", "Comma", "Assign", "QuestionMark", "Colon", "Ellipsis", "Dot", "PlusPlus", "MinusMinus", "Plus", "Minus", "BitNot", "Not", "Multiply", "Divide", "Modulus", "RightShiftArithmetic", "LeftShiftArithmetic", "RightShiftLogical", "LessThan", "MoreThan", "LessThanEquals", "GreaterThanEquals", "Equals_", "NotEquals", "IdentityEquals", "IdentityNotEquals", "BitAnd", "BitXOr", "BitOr", "And", "Or", "MultiplyAssign", "DivideAssign", "ModulusAssign", "PlusAssign", "MinusAssign", "LeftShiftArithmeticAssign", "RightShiftArithmeticAssign", "RightShiftLogicalAssign", "BitAndAssign", "BitXorAssign", "BitOrAssign", "ARROW", "NullLiteral", "BooleanLiteral", "DecimalLiteral", "HexIntegerLiteral", "OctalIntegerLiteral", "OctalIntegerLiteral2", "BinaryIntegerLiteral", "Break", "Do", "Instanceof", "Typeof", "Case", "Else", "New", "Var", "Catch", "Finally", "Return", "Void", "Continue", "For", "Switch", "While", "Debugger", "Function_", "This", "With", "Default", "If", "Throw", "Delete", "In", "Try", "As", "From", "ReadOnly", "Async", "Class", "Enum", "Extends", "Super", "Const", "Export", "Import", "Implements", "Let", "Private", "Public", "Interface", "Package", "Protected", "Static", "Yield", "Any", "Number", "Boolean", "String", "Symbol", "TypeAlias", "Get", "Set", "Constructor", "Namespace", "Require", "Module", "Declare", "Abstract", "Is", "At", "Identifier", "StringLiteral", "BackTick", "WhiteSpaces", "LineTerminator", "HtmlComment", "CDataComment", "UnexpectedCharacter", "TemplateStringStartExpression", "TemplateStringAtom"};

}