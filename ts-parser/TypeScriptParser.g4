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

//NOTE : Refer to the parser result of https://astexplorer.net  @typescript-eslint/parser for more detailed example

typeArguments locals [ String type = "TSTypeParameterInstantiation" ]
    : '<' params =  typeArgumentList? '>'
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

//NOTE : try to annotate the node with ANTLR grammar for easier to switch to annother target language
predefinedType locals [String type]
    : Any    {$type= "Any"; }
    | Number {$type= "Number"; }
    | Boolean {$type= "Boolean"; }
    | String {$type= "String"; }
    | Symbol {$type= "Symbol"; }
    | Void {$type= "Void"; }
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
    : typeParameters? '(' params = parameterList? ')' retType =  typeAnnotation?
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
    : decoratorMemberExpression callExpressoinArguments;

// ECMAPart
program locals [String type , int sourceType ]
    : body = sourceElements? EOF { $type = "Program"; $sourceType = 0; { System.out.println("Enterring the program " +  $type); }   } //TODO distinguish sourecetype
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
    | expressionStatement
    | variableStatement
    | typeAliasDeclaration //ADDED
    | enumDeclaration      //ADDED
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
variableDeclaration locals [ String type = "VariableDeclaration"] :
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
//NOTE  @Add variableDeclarateIdPattern for compatibility with estree
variableDeclarateIdPattern :
    identifierOrKeyWord
    | arrayLiteral
    | objectLiteral;

//NOTE @Add variableAnnotation element for compatibility with estree
//NOTE @Take ":" as common requirement in variableAnnotation
variableAnnotation : ':' ( type_ | expression) ;

//NOTE @Add variableInitPattern for compatibility with estree
variableInitPattern : typeParameters? expression;

//NOTE @Rename variableDeclaration to variableDeclarator for compatibility with estree
variableDeclarator locals[String type  ]
    : id = variableDeclarateIdPattern  annotation =  variableAnnotation? ('='   init=  variableInitPattern)? // ECMAScript 6: Array & Object Matching
    {
        $type= "VariableDeclarator";
    }
    ;

emptyStatement
    : SemiColon
    ;

expressionStatement
    : {this.notOpenBraceAndNotFunction()}? expressionSequence SemiColon?
    ;

ifStatement
    : If '(' test = expressionSequence ')'  consequent = statement (Else alternate=  statement)?
    ;


iterationStatement locals [String type ]
    : Do statement While '(' expressionSequence ')' eos                                                         # DoStatement
    | While '(' expressionSequence ')' statement                                                                # WhileStatement
    | For '(' expressionSequence? SemiColon expressionSequence? SemiColon expressionSequence? ')' statement     # ForStatement
    | For '(' varModifier variableDeclarationList SemiColon expressionSequence? SemiColon expressionSequence? ')'
          statement                                                                                             # ForVarStatement
    | For '(' expression (In | Identifier{this.p("of")}?) expressionSequence ')' statement                # ForInStatement
    | For '(' varModifier variableDeclarator (In | Identifier{this.p("of")}?) expressionSequence ')' statement # ForVarInStatement
    ;

varModifier
    : Var
    | Let
    | Const
    ;

continueStatement locals[String type = "ContinueStatement" ]
    : Continue ({this.notLineTerminator()}? Identifier)? eos
    ;

breakStatement locals[String type = "BreakStatement"]
    : Break ({this.notLineTerminator()}? Identifier)? eos
    ;

returnStatement locals[String type = "ReturnStatement"]
    : Return ({this.notLineTerminator()}? expressionSequence)? eos
    ;

yieldStatement
    : Yield ({this.notLineTerminator()}? expressionSequence)? eos
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
    : Throw {this.notLineTerminator()}? expressionSequence eos
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

//TODO Shall identifier be optional followwing estree spec?
functionDeclaration locals[String type]
    : Function_  id= Identifier  signature =  callSignature ( ('{' body=  functionBody '}') | SemiColon) {$type= "FunctionDeclaration";  }
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

//NOTE use isStatic to avoid conflict with keywords
propertyMemberDeclaration locals[ String type , String key , boolean computed , boolean isStatic   ]
    : propertyMemberBase propertyName '?'? typeAnnotation? (value = expression)? SemiColon
    {
        $type = "PropertyDefinition";
    }            # PropertyDefinition
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

//NOTE extre ( ) seems useless
//NOTE type annotation is repeated here
arrayLiteral locals[String type]
    : ('[' elements = elementList? ']')
    {
        $type = "ArrayExpression";
    }
    ;

elementList
    : arrayElement (','+ arrayElement)*
    ;

//NOTE @Remove identifier following estree
//NOTE IdentifierName has been an alternative in expression
arrayElement                      // ECMAScript 6: Spread Operator
    : Ellipsis? expression ','?
    ;

objectLiteral locals[String type]
    : '{' (propertyAssignment (',' propertyAssignment)* ','?)? '}'
    {
        $type = "ObjectExpression";
    }
    ;

//TODO  propertyMemberDeclaration vs propertyAssignment ,which is the Property Node in estree
//NOTE  kind: "init" | "get" | "set"
// MODIFIED
propertyAssignment locals[String type = "Property" , boolean method ,boolean shorthand ,boolean computed , String kind ]
    : propertyName (':' |'=') expression
    {
        $method = false;
        $shorthand = false;
        $computed = false;
        $kind = "init";
    }                # PropertyExpressionAssignment
    | '[' expression ']' ':' expression
    {
        $method = false;
        $shorthand = false;
        $computed = true;
        $kind = "init";
    }          # ComputedPropertyExpressionAssignment
    | getAccessor
    {
        $method = true;
        $shorthand = false;
        $computed = false;
        $kind = "get";

    }                                            # PropertyGetter
    | setAccessor
    {
        $method = true;
        $shorthand = false;
        $computed = false;
        $kind = "set";

    }                                          # PropertySetter
    | generatorMethod
    {
        $method = false;
        $shorthand = false;
        $computed = true;
        $kind = "init";

    }                                         # MethodProperty
    | identifierOrKeyWord
    {   //TODO Need verify
        $method = false;
        $shorthand = true;
        $computed = false;
        $kind = "init";

    }                                     # PropertyShorthand
    | restParameter
    {   //TODO Need verify
        $method = false;
        $shorthand = false;
        $computed = true;
        $kind = "init";

    }                                        # RestParameterInObject
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

//NOTE @Rename , rename arguments to callExpressoinArguments
callExpressoinArguments
    : '(' (argumentList ','?)? ')'
    ;

argumentList
    : singleArgument (',' singleArgument)*
    ;

//NOTE @Rename , rename argument to singleArgument
singleArgument                      // ECMAScript 6: Spread Operator
    : Ellipsis? (expression | Identifier)
    ;

expressionSequence
    : expression (',' expression)*
    ;
/**
*NOTE It is null when a function declaration is a part of the `export default function` statement
*So the id is optional
*/
functionExpressionDeclaration locals[String type]    //FunctionDeclaration
    :  Function_  id= Identifier? '(' formalParameterList? ')' typeAnnotation? '{' functionBody '}'
    {
         $type= "FunctionDeclaration";
    }
    ;

//NOTE @Add updateOperator for compatibility with estree
updateOperator returns  [boolean prefix] :'++' | '--' ;

////NOTE @Add unaryOperator for compatibility with estree
unaryOperator :
    '-' | '+' | '!' | '~' | 'typeof' | 'void' | 'delete';

expression locals[String type = "expressoin"]
    : functionExpressionDeclaration
    {
        $type = "FunctionExpression";
    }                                   # FunctionExpression
    | arrowFunctionDeclaration                                               # ArrowFunctionExpression   // ECMAScript 6
    | Class Identifier? classTail                                            # ClassExpression
    //NOTE make object optional in memberpression following estree
    | object= expression property = memberExpressionPattern //REVIEW  Add proper debug method
        {
            $type = "MemberExpression";
            System.out.println("Calling MemberExpression ,type is " + $type);
            System.out.println("Calling MemberExpression ,optional is " + $memberExpressionPattern.optional);
            System.out.println("Calling MemberExpression ,computed is " + $memberExpressionPattern.computed);
        }
        #MemberExpression
    // Split to try `new Date()` first, then `new Date`.
    //TODO What is the typeArguments used here , does it mean generic type ??
    | New  callee = expression   typeParameters  typeArguments? arguments = callExpressoinArguments
    {
        $type = "NewExpression";
    }                     # NewExpression
    | New  callee =  expression typeArguments?
    {
        $type = "NewExpression";
    }                             # NewExpression
    | callee = expression arguments = callExpressoinArguments
    {   //TODO Add optional property
        $type = "CallExpression";
    }                          # CallExpression
    |  operator = updateOperator argument = expression
    {
        $type = "UpdateExpression";
        // $updateOperator::prefix = true;
    }      # UpdateExpression
    |  argument = expression {this.notLineTerminator()}? operator = updateOperator
    {
        $type = "UpdateExpression";
        // $updateOperator::prefix = false;
    }           # UpdateExpression
    | Delete expression
    {
        $type = "FunctionExpression";
    }             # DeleteExpression
    | Void expression
    {
        $type = "FunctionExpression";
    }              # VoidExpression
    | Typeof expression
    {
        $type = "FunctionExpression";
    }       # TypeofExpression
    | '+' expression
    {
        $type = "FunctionExpression";
    }          # UnaryPlusExpression
    | '-' expression
    {
        $type = "FunctionExpression";
    }      # UnaryMinusExpression
    | '~' expression
    {
        $type = "FunctionExpression";
    }   # BitNotExpression
    | '!' expression
    {
        $type = "FunctionExpression";
    }  # NotExpression
    |lhs = expression ('*' | '/' | '%') rhs= expression
    {
        $type = "FunctionExpression";
    }         # MultiplicativeExpression
    |lhs = expression ('+' | '-') rhs= expression
    {
        $type = "FunctionExpression";
    }     # AdditiveExpression
    |lhs = expression ('<<' | '>>' | '>>>')rhs=  expression
    {
        $type = "FunctionExpression";
    }    # BitShiftExpression
    |lhs = expression ('<' | '>' | '<=' | '>=') rhs= expression
    {
        $type = "FunctionExpression";
    }  # RelationalExpression
    |lhs = expression Instanceof rhs= expression
    {
        $type = "FunctionExpression";
    }    # InstanceofExpression
    |lhs =expression In rhs=  expression
    {
        $type = "FunctionExpression";
    } # InExpression
    |lhs = expression ('==' | '!=' | '===' | '!==') rhs= expression
    {
        $type = "FunctionExpression";
    }   # EqualityExpression
    |lhs = expression '&'rhs=  expression
    {
        $type = "FunctionExpression";
    } # BitAndExpression
    |lhs = expression '^' rhs= expression
    {
        $type = "FunctionExpression";
    }   # BitXOrExpression
    |lhs = expression '|' rhs= expression
    {
        $type = "FunctionExpression";
    } # BitOrExpression
    |lhs = expression '&&'rhs=  expression
    {
        $type = "FunctionExpression";
    }  # LogicalAndExpression
    |lhs = expression '||' rhs= expression
    {
        $type = "FunctionExpression";
    }  # LogicalOrExpression
    |condition = expression '?' lhs = expression ':'  rhs= expression
    {
        $type = "FunctionExpression";
    }  # TernaryExpression
    |lhs = expression '=' rhs= expression
    {
        $type = "FunctionExpression";
    }  # AssignmentExpression
    | expression assignmentOperator expression
    {
        $type = "FunctionExpression";
    } # AssignmentOperatorExpression
    | expression templateStringLiteral
    {
        $type = "FunctionExpression";
    }  # TemplateStringExpression  // ECMAScript 6
    | iteratorBlock
    {
        $type = "FunctionExpression";
    }   # IteratorsExpression // ECMAScript 6
    | generatorBlock
    {
        $type = "FunctionExpression";
    } # GeneratorsExpression // ECMAScript 6
    | generatorFunctionDeclaration
    {
        $type = "FunctionExpression";
    }  # GeneratorsFunctionExpression // ECMAScript 6
    | yieldStatement
    {
        $type = "FunctionExpression";
    }    # YieldExpression // ECMAScript 6
    | This
        {
            $type = "ThisExpression";
        }                                                                           # ThisExpression
    | identifierName
        {
            $type = "Identifier";
        }                                     # IdentifierExpression
    | Super
    {
        $type = "FunctionExpression";
    } # SuperExpression
    | value = literal
    {
        $type = "Literal";
    }  # ArrayExpression
    | arrayLiteral
    {
        $type = "ArrayExpression";
    }
    {
        $type = "FunctionExpression";
    } # ArrayExpression
    | properties = objectLiteral
    {
        $type = "ObjectExpression";
    }                                                          # ObjectExpression
    | '(' expressionSequence ')'
    {
        $type = "FunctionExpression";
    } # ParenthesizedExpression
    | typeArguments expressionSequence?
    {
        $type = "FunctionExpression";
    }  # GenericTypes
    | originalType=  expression As aliasType= asExpression
    {
        $type = "FunctionExpression";
    }                                     # CastAsExpression
    ;

//TODO Rewrite with semmantic prediaction in Expression
memberExpressionPattern returns [boolean computed , boolean optional ] :
    '[' expression (',' expression)* ']' { $computed = false; $optional = false; }
    | '?'  '.' identifierName nestedTypeGeneric?    { $computed = true; $optional = true;}
    |  '.' identifierName nestedTypeGeneric?    { $computed = true; $optional = false; }
    ; //NOTE : Only dot support optional '?' operator


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

//TODO change raw to optional
//NOTE value: string | boolean | number | null;
//NOTE export type Literal = SimpleLiteral | RegExpLiteral | BigIntLiteral;
literal locals [ String type  = "Literal", String raw ,int value ]
    : NullLiteral { $value = 0;}
    | BooleanLiteral { $value = 1;}
    | StringLiteral { $value = 2;}
    | templateStringLiteral { $value = 3;}
    | RegularExpressionLiteral { $value = 4;}
    | numericLiteral { $value = 5;}
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
    | {this.lineTerminatorAhead()}?
    | {this.closeBrace()}?
    ;