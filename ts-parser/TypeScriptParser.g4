/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2014 by Bart Kiers (original author) and Alexandre Vitorelli (contributor -> ported to CSharp)
 * Copyright (c) 2017 by Ivan Kochurkin (Positive Technologies):
    added ECMAScript 6 support, cleared and transformed to the universal grammar.
 * Copyright (c) 2018 by Juan Alvarez (contributor -> ported to Go)
 * Copyright (c) 2019 by Andrii Artiushok (contributor -> added TypeScript support)
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */
parser grammar TypeScriptParser;

options {
	tokenVocab = TypeScriptLexer;
	superClass = TypeScriptParserBase;
}

@parser::preinclude  {
#include <unordered_map>
#include <string>
#include "TypeScriptParserBase.h"
using std::string;
}
@member{ 
std::unordered_map<std::string , std::string > identifierMap_;
 }

initializer
    : '=' expression
    ;

bindingPattern
    : (arrayLiteral | objectLiteral)
    ;

// TypeScript SPart
// A.1 Types

typeParameters
    : '<' typeParameterList? '>'
    ;

typeParameterList
    : typeParameter (',' typeParameter)*
    ;

typeParameter
    : Identifier constraint?
    | typeParameters
    ;

constraint
    : 'extends' type_
    ;

typeArguments
    : '<' typeArgumentList? '>'
    ;

typeArgumentList
    : typeArgument (',' typeArgument)*
    ;

typeArgument
    : type_
    ;

type_
    : unionOrIntersectionOrPrimaryType
    | functionType
    | constructorType
    | typeGeneric
    | StringLiteral
    ;

unionOrIntersectionOrPrimaryType
    : unionOrIntersectionOrPrimaryType '|' unionOrIntersectionOrPrimaryType #Union
    | unionOrIntersectionOrPrimaryType '&' unionOrIntersectionOrPrimaryType #Intersection
    | primaryType #Primary
    ;

primaryType
    : '(' type_ ')'                                 #ParenthesizedPrimType
    | predefinedType                                #PredefinedPrimType
    | typeReference                                 #ReferencePrimType
    | objectType                                    #ObjectPrimType
    | primaryType {notLineTerminator()}? '[' ']'    #ArrayPrimType
    | '[' tupleElementTypes ']'                     #TuplePrimType
    | typeQuery                                     #QueryPrimType
    | This                                          #ThisPrimType
    | typeReference Is primaryType                  #RedefinitionOfType
    ;

predefinedType locals [std::string typeId]
    : Any    {$typeId = "Any"; }
    | Number {$typeId = "Number"; }
    | Boolean {$typeId = "Boolean"; }
    | String {$typeId = "String"; }
    | Symbol {$typeId = "Symbol"; }
    | Void {$typeId = "Void"; }
    ;

typeReference
    : typeName nestedTypeGeneric?
    ;

nestedTypeGeneric
    : typeIncludeGeneric
    | typeGeneric
    ;

// I tried recursive include, but it's not working.
// typeGeneric
//    : '<' typeArgumentList typeGeneric?'>'
//    ;
//
// TODO: Fix recursive
//
typeGeneric
    : '<' typeArgumentList '>'
    ;

typeIncludeGeneric
    :'<' typeArgumentList '<' typeArgumentList ('>' bindingPattern '>' | '>>')
    ;

typeName
    : Identifier
    | namespaceName
    ;

objectType
    : '{' typeBody? '}'
    ;

typeBody
    : typeMemberList (SemiColon | ',')?
    ;

typeMemberList
    : typeMember ((SemiColon | ',') typeMember)*
    ;

typeMember
    : propertySignatur
    | callSignature
    | constructSignature
    | indexSignature
    | methodSignature ('=>' type_)?
    ;

arrayType
    : primaryType {notLineTerminator()}? '[' ']'
    ;

tupleType
    : '[' tupleElementTypes ']'
    ;

tupleElementTypes
    : type_ (',' type_)*
    ;

functionType
    : typeParameters? '(' parameterList? ')' '=>' type_
    ;

constructorType
    : 'new' typeParameters? '(' parameterList? ')' '=>' type_
    ;

typeQuery
    : 'typeof' typeQueryExpression
    ;

typeQueryExpression
    : Identifier
    | (identifierName '.')+ identifierName
    ;

propertySignatur
    : ReadOnly? propertyName '?'? typeAnnotation? ('=>' type_)?
    ;

typeAnnotation
    : ':' type_
    ;

callSignature
    : typeParameters? '(' parameterList? ')' typeAnnotation?
    ;

parameterList
    : restParameter
    | parameter (',' parameter)* (',' restParameter)?
    ;

requiredParameterList
    : requiredParameter (',' requiredParameter)*
    ;

parameter
    : requiredParameter
    | optionalParameter
    ;

optionalParameter
    : decoratorList? ( accessibilityModifier? identifierOrPattern ('?' typeAnnotation? | typeAnnotation? initializer))
    ;

restParameter
    : '...' expression typeAnnotation?
    ;

requiredParameter
    : decoratorList? accessibilityModifier? identifierOrPattern typeAnnotation?
    ;

accessibilityModifier
    : Public
    | Private
    | Protected
    ;

identifierOrPattern
    : identifierName
    | bindingPattern
    ;

constructSignature
    : 'new' typeParameters? '(' parameterList? ')' typeAnnotation?
    ;

indexSignature
    : '[' Identifier ':' (Number|String) ']' typeAnnotation
    ;

methodSignature
    : propertyName '?'? callSignature
    ;

typeAliasDeclaration
    : 'type' Identifier typeParameters? '=' type_ SemiColon
    ;

constructorDeclaration
    : accessibilityModifier? Constructor '(' formalParameterList? ')' ( ('{' functionBody '}') | SemiColon)?
    ;

// A.5 Interface

interfaceDeclaration
    : Export? Declare? Interface Identifier typeParameters? interfaceExtendsClause? objectType SemiColon?
    ;

interfaceExtendsClause
    : Extends classOrInterfaceTypeList
    ;

classOrInterfaceTypeList
    : typeReference (',' typeReference)*
    ;

// A.7 Interface

enumDeclaration
    : Const? Enum Identifier '{' enumBody? '}'
    ;

enumBody
    : enumMemberList ','?
    ;

enumMemberList
    : enumMember (',' enumMember)*
    ;

enumMember
    : propertyName ('=' expression)?
    ;

// A.8 Namespaces

namespaceDeclaration
    : Namespace namespaceName '{' statementList? '}'
    ;

namespaceName
    : Identifier ('.'+ Identifier)*
    ;

importAliasDeclaration
    : Identifier '=' namespaceName SemiColon
    ;

// Ext.2 Additions to 1.8: Decorators

decoratorList
    : decorator+ ;

decorator
    : '@' (decoratorMemberExpression | decoratorCallExpression)
    ;

decoratorMemberExpression
    : Identifier
    | decoratorMemberExpression '.' identifierName
    | '(' expression ')'
    ;

decoratorCallExpression
    : decoratorMemberExpression arguments;

// ECMAPart
program locals [std::string type , int sourceType ]
    : body = sourceElements? EOF { $type = "Program"; $sourceType = 0;   std::cout<< $type;   } //TODO distinguish sourecetype
    ;

sourceElement
    : Export? statement
    ;

statement
    : block
    | importStatement
    | exportStatement
    | emptyStatement
    | abstractDeclaration //ADDED
    | decoratorList
    | classDeclaration
    | interfaceDeclaration //ADDED
    | namespaceDeclaration //ADDED
    | ifStatement
    | iterationStatement
    | continueStatement
    | breakStatement
    | returnStatement
    | yieldStatement
    | withStatement
    | labelledStatement
    | switchStatement
    | throwStatement
    | tryStatement
    | debuggerStatement
    | functionDeclaration
    | arrowFunctionDeclaration
    | generatorFunctionDeclaration
    | variableStatement
    | typeAliasDeclaration //ADDED
    | enumDeclaration      //ADDED
    | expressionStatement
    | Export statement
    ;

block
    : '{' statementList? '}'
    ;

statementList
    : statement+
    ;

abstractDeclaration
    : Abstract (Identifier callSignature | variableStatement) eos
    ;

importStatement
    : Import (fromBlock | importAliasDeclaration)
    ;

fromBlock
    : (Multiply | multipleImportStatement) (As identifierName)? From StringLiteral eos
    ;

multipleImportStatement
    : (identifierName ',')? '{' identifierName (',' identifierName)* '}'
    ;

exportStatement
    : Export Default? (fromBlock | statement)
    ;


//NOTE @Add variableDeclaration for compatibility with estree
variableDeclaration :
    kind = varModifier declarations = variableDeclarationList;


variableStatement
    :variableDeclaration
    | bindingPattern typeAnnotation? initializer SemiColon?
    | accessibilityModifier? varModifier? ReadOnly? variableDeclarationList SemiColon?
    | Declare varModifier? variableDeclarationList SemiColon?
    ;

variableDeclarationList
    : variableDeclarator (',' variableDeclarator)*
    ;
//NOTE  @Add variableDeclaratePattern for compatibility with estree
variableDeclaratePattern :
    identifierOrKeyWord 
    | arrayLiteral
    | objectLiteral;

//NOTE  @Add variableAnnotation for compatibility with estree
variableAnnotation :  typeAnnotation? expression? ;

//NOTE @Rename variableDeclaration to variableDeclarator for compatibility with estree
variableDeclarator locals[string type  ]  
    : id = variableDeclaratePattern  annotation =  variableAnnotation ('='   init=  typeParameters? expression)? // ECMAScript 6: Array & Object Matching
    {
        $type = "VariableDeclarator";
    }
    ;

emptyStatement
    : SemiColon
    ;

expressionStatement
    : {this->notOpenBraceAndNotFunction()}? expressionSequence SemiColon?
    ;

ifStatement
    : If '(' test = expressionSequence ')'  consequent = statement (Else alternate=  statement)?
    ;


iterationStatement
    : Do statement While '(' expressionSequence ')' eos                                                         # DoStatement
    | While '(' expressionSequence ')' statement                                                                # WhileStatement
    | For '(' expressionSequence? SemiColon expressionSequence? SemiColon expressionSequence? ')' statement     # ForStatement
    | For '(' varModifier variableDeclarationList SemiColon expressionSequence? SemiColon expressionSequence? ')'
          statement                                                                                             # ForVarStatement
    | For '(' expression (In | Identifier{this->p("of")}?) expressionSequence ')' statement                # ForInStatement
    | For '(' varModifier variableDeclarator (In | Identifier{this->p("of")}?) expressionSequence ')' statement # ForVarInStatement
    ;

varModifier
    : Var
    | Let
    | Const
    ;

continueStatement
    : Continue ({this->notLineTerminator()}? Identifier)? eos
    ;

breakStatement
    : Break ({this->notLineTerminator()}? Identifier)? eos
    ;

returnStatement
    : Return ({this->notLineTerminator()}? expressionSequence)? eos
    ;

yieldStatement
    : Yield ({this->notLineTerminator()}? expressionSequence)? eos
    ;

withStatement
    : With '(' expressionSequence ')' statement
    ;

switchStatement
    : Switch '(' expressionSequence ')' caseBlock
    ;

caseBlock
    : '{' caseClauses? (defaultClause caseClauses?)? '}'
    ;

caseClauses
    : caseClause+
    ;

caseClause
    : Case expressionSequence ':' statementList?
    ;

defaultClause
    : Default ':' statementList?
    ;

labelledStatement
    : Identifier ':' statement
    ;

throwStatement
    : Throw {this->notLineTerminator()}? expressionSequence eos
    ;

tryStatement
    : Try block (catchProduction finallyProduction? | finallyProduction)
    ;

catchProduction
    : Catch '(' Identifier ')' block
    ;

finallyProduction
    : Finally block
    ;

debuggerStatement
    : Debugger eos
    ;

functionDeclaration locals[string type]
    : Function_  id= Identifier  body= callSignature ( ('{' functionBody '}') | SemiColon) {$type = "FunctionDeclaration";  }
    ;

//Ovveride ECMA
classDeclaration
    : Abstract? Class Identifier typeParameters? classHeritage classTail
    ;

classHeritage
    : classExtendsClause? implementsClause?
    ;

classTail
    :  '{' classElement* '}'
    ;

classExtendsClause
    : Extends typeReference
    ;

implementsClause
    : Implements classOrInterfaceTypeList
    ;

// Classes modified
classElement
    : constructorDeclaration
    | decoratorList? propertyMemberDeclaration
    | indexMemberDeclaration
    | statement
    ;

propertyMemberDeclaration
    : propertyMemberBase propertyName '?'? typeAnnotation? initializer? SemiColon                   # PropertyDeclarationExpression
    | propertyMemberBase propertyName callSignature ( ('{' functionBody '}') | SemiColon)           # MethodDeclarationExpression
    | propertyMemberBase (getAccessor | setAccessor)                                                # GetterSetterDeclarationExpression
    | abstractDeclaration                                                                           # AbstractMemberDeclaration
    ;

propertyMemberBase
    : Async? accessibilityModifier? Static? ReadOnly?
    ;

indexMemberDeclaration
    : indexSignature SemiColon
    ;

generatorMethod
    : '*'?  Identifier '(' formalParameterList? ')' '{' functionBody '}'
    ;

generatorFunctionDeclaration
    : Function_ '*' Identifier? '(' formalParameterList? ')' '{' functionBody '}'
    ;

generatorBlock
    : '{' generatorDefinition (',' generatorDefinition)* ','? '}'
    ;

generatorDefinition
    : '*' iteratorDefinition
    ;

iteratorBlock
    : '{' iteratorDefinition (',' iteratorDefinition)* ','? '}'
    ;

iteratorDefinition
    : '[' expression ']' '(' formalParameterList? ')' '{' functionBody '}'
    ;

formalParameterList
    : formalParameterArg (',' formalParameterArg)* (',' lastFormalParameterArg)?
    | lastFormalParameterArg
    | arrayLiteral                              // ECMAScript 6: Parameter Context Matching
    | objectLiteral (':' formalParameterList)?  // ECMAScript 6: Parameter Context Matching
    ;

formalParameterArg
    : decorator? accessibilityModifier? identifierOrKeyWord '?'? typeAnnotation? ('=' expression)?      // ECMAScript 6: Initialization
    ;

lastFormalParameterArg                        // ECMAScript 6: Rest Parameter
    : Ellipsis Identifier
    ;

functionBody
    : sourceElements?
    ;

sourceElements
    : sourceElement+
    ;

arrayLiteral
    : ('[' elementList? ']')
    ;

elementList
    : arrayElement (','+ arrayElement)*
    ;

arrayElement                      // ECMAScript 6: Spread Operator
    : Ellipsis? (expression | Identifier) ','?
    ;

objectLiteral
    : '{' (propertyAssignment (',' propertyAssignment)* ','?)? '}'
    ;

// MODIFIED
propertyAssignment
    : propertyName (':' |'=') expression                # PropertyExpressionAssignment
    | '[' expression ']' ':' expression           # ComputedPropertyExpressionAssignment
    | getAccessor                                             # PropertyGetter
    | setAccessor                                             # PropertySetter
    | generatorMethod                                         # MethodProperty
    | identifierOrKeyWord                                     # PropertyShorthand
    | restParameter                                           # RestParameterInObject
    ;

getAccessor
    : getter '(' ')' typeAnnotation? '{' functionBody '}'
    ;

setAccessor
    : setter '(' ( Identifier | bindingPattern) typeAnnotation? ')' '{' functionBody '}'
    ;

propertyName
    : identifierName
    | StringLiteral
    | numericLiteral
    ;

arguments
    : '(' (argumentList ','?)? ')'
    ;

argumentList
    : argument (',' argument)*
    ;

argument                      // ECMAScript 6: Spread Operator
    : Ellipsis? (expression | Identifier)
    ;

expressionSequence
    : expression (',' expression)*
    ;
/**
*NOTE It is null when a function declaration is a part of the `export default function` statement
*So the id is optional
*/
functionExpressionDeclaration locals[string type]    //FunctionDeclaration
    :  Function_  id= Identifier? '(' formalParameterList? ')' typeAnnotation? '{' functionBody '}' { $type = "FunctionDeclaration"; }
    ;

expression
    : functionExpressionDeclaration                                          # FunctionExpression
    | arrowFunctionDeclaration                                               # ArrowFunctionExpression   // ECMAScript 6
    | Class Identifier? classTail                                            # ClassExpression
    | object= expression '[' property= expressionSequence ']'                     { std::cout<< "Calling MemberIndexExpression\n" << $object.text <<std::endl; }        # MemberIndexExpression
    | object = expression '.' property= identifierName nestedTypeGeneric?   { std::cout<< "Calling MemberDotExpression\n" << $object.text <<std::endl; }                # MemberDotExpression 
    // Split to try `new Date()` first, then `new Date`.
    | New expression typeArguments? arguments                          # NewExpression
    | New expression typeArguments?                                    # NewExpression
    | expression arguments                                             # ArgumentsExpression
    | expression {this->notLineTerminator()}? '++'                      # PostIncrementExpression
    | expression {this->notLineTerminator()}? '--'                      # PostDecreaseExpression
    | Delete expression                                                # DeleteExpression
    | Void expression                                                  # VoidExpression
    | Typeof expression                                                # TypeofExpression
    | '++' expression                                                  # PreIncrementExpression
    | '--' expression                                                  # PreDecreaseExpression
    | '+' expression                                                   # UnaryPlusExpression
    | '-' expression                                                   # UnaryMinusExpression
    | '~' expression                                                   # BitNotExpression
    | '!' expression                                                   # NotExpression
    |lhs = expression ('*' | '/' | '%') rhs= expression                    # MultiplicativeExpression
    |lhs = expression ('+' | '-') rhs= expression                          # AdditiveExpression
    |lhs = expression ('<<' | '>>' | '>>>')rhs=  expression                # BitShiftExpression
    |lhs = expression ('<' | '>' | '<=' | '>=') rhs= expression            # RelationalExpression
    |lhs = expression Instanceof rhs= expression                           # InstanceofExpression
    | lhs =expression In rhs=  expression                                   # InExpression
    |lhs = expression ('==' | '!=' | '===' | '!==') rhs= expression        # EqualityExpression
    |lhs = expression '&'rhs=  expression                                  # BitAndExpression
    |lhs = expression '^' rhs= expression                                  # BitXOrExpression
    |lhs = expression '|' rhs= expression                                  # BitOrExpression
    |lhs = expression '&&'rhs=  expression                                 # LogicalAndExpression
    |lhs = expression '||' rhs= expression                                 # LogicalOrExpression
    |condition = expression '?' lhs = expression ':'  rhs= expression             # TernaryExpression
    |lhs = expression '=' rhs= expression                                  # AssignmentExpression
    | expression assignmentOperator expression                   # AssignmentOperatorExpression
    | expression templateStringLiteral                                 # TemplateStringExpression  // ECMAScript 6
    | iteratorBlock                                                          # IteratorsExpression // ECMAScript 6
    | generatorBlock                                                         # GeneratorsExpression // ECMAScript 6
    | generatorFunctionDeclaration                                           # GeneratorsFunctionExpression // ECMAScript 6
    | yieldStatement                                                         # YieldExpression // ECMAScript 6
    | This                                                                   # ThisExpression
    | identifierName expression?                                       # IdentifierExpression
    | Super                                                                  # SuperExpression
    | value = literal { std::cout<< $value.text; }                                                               # LiteralExpression
    | arrayLiteral                                                           # ArrayLiteralExpression
    | objectLiteral                                                          # ObjectLiteralExpression
    | '(' expressionSequence ')'                                             # ParenthesizedExpression
    | typeArguments expressionSequence?                                      # GenericTypes
    | originalType=  expression As aliasType= asExpression                                       # CastAsExpression
    ;

asExpression
    : predefinedType ('[' ']')?
    | expression
    ;

arrowFunctionDeclaration
    : Async? arrowFunctionParameters typeAnnotation? '=>' arrowFunctionBody
    ;

arrowFunctionParameters
    : Identifier
    | '(' formalParameterList? ')'
    ;

arrowFunctionBody
    : expression
    | '{' functionBody '}'
    ;

assignmentOperator
    : '*='
    | '/='
    | '%='
    | '+='
    | '-='
    | '<<='
    | '>>='
    | '>>>='
    | '&='
    | '^='
    | '|='
    ;

literal
    : NullLiteral
    | BooleanLiteral
    | StringLiteral
    | templateStringLiteral
    | RegularExpressionLiteral
    | numericLiteral
    ;

templateStringLiteral
    : BackTick templateStringAtom* BackTick
    ;

templateStringAtom
    : TemplateStringAtom
    | TemplateStringStartExpression expression TemplateCloseBrace
    ;

numericLiteral
    : DecimalLiteral
    | HexIntegerLiteral
    | OctalIntegerLiteral
    | OctalIntegerLiteral2
    | BinaryIntegerLiteral
    ;

identifierName
    : Identifier
    | reservedWord
    ;

identifierOrKeyWord
    : Identifier
    | TypeAlias
    | Require
    ;

reservedWord
    : keyword
    | NullLiteral
    | BooleanLiteral
    ;

keyword
    : Break
    | Do
    | Instanceof
    | Typeof
    | Case
    | Else
    | New
    | Var
    | Catch
    | Finally
    | Return
    | Void
    | Continue
    | For
    | Switch
    | While
    | Debugger
    | Function_
    | This
    | With
    | Default
    | If
    | Throw
    | Delete
    | In
    | Try
    | ReadOnly
    | Async
    | From
    | Class
    | Enum
    | Extends
    | Super
    | Const
    | Export
    | Import
    | Implements
    | Let
    | Private
    | Public
    | Interface
    | Package
    | Protected
    | Static
    | Yield
    | Get
    | Set
    | Require
    | TypeAlias
    | String
    ;

getter
    : Get propertyName
    ;

setter
    : Set propertyName
    ;

eos
    : SemiColon
    | EOF
    | {this->lineTerminatorAhead()}?
    | {this->closeBrace()}?
    ;