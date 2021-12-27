/*
 * AMF Syntax definition for ANTLR.
 *
 */
grammar amf;

options {
    language = Cpp;
}

amf_group[amf::AmfGroup& amfGroup] locals [int jsonScope = 2] 
    : statements=amf_statements (GROUPSEP WS? LINE_COMMENT? EOL? | EOF)
    {
        amfGroup.SetStatements(std::move($statements.stmts));
    }
    ;

amf_statements returns [amf::AmfStatements stmts]
    : ( WS? ( stmt=amf_statement { stmts.emplace_back(std::move($stmt.value)); } WS? EOL) )*
    ;


amf_statement returns [amf::AmfStatementPtr value]
    : (
        {$amf_group::jsonScope == 1}? jsonparent_statement
        | {$amf_group::jsonScope == 2}? jsonvalue_statement
       )
    {
        value = std::move(context.expression(0).value);
    }
    ;


jsonparent_statement returns [amf::AmfStatementPtr value] locals [int lineno=0]
    :
    (T_JSONPAR      { $lineno = $T_JSONPAR.line;} )  WS (arg=integer_const)
    {
        value = std::make_shared<amf::JSONParentStatement>($lineno, nullptr);
    }
    ;

jsonvalue_statement returns [amf::AmfStatementPtr value] locals [int lineno=0]
    : ( T_JSONVALUE { $lineno = $T_JSONVALUE.line; } ) WS (arg=integer_const) (WS fmt=integer_const)?
    {
        value = std::make_shared<amf::JSONValueStatement>($lineno, std::move(arg), std::move(fmt));
    }
    ;

integer_const returns [amf::AmfArgPtr value]
    : p='%' (
        (signed_int)
        {
            long num = std::stol($signed_int.text);
            value = std::make_shared<amf::AmfArg>(ARG_TYPE::ARG_INTEGER, num);
        }
        | signed_float
        {
            value = std::make_shared<amf::AmfArg>(ARG_TYPE::ARG_INTEGER, std::stof($signed_float.text));
        }
        )
    ;


signed_int
    : MINUS? INT;

signed_float
    : MINUS? FLOAT;

    T_JSONPAR       : 'JSONPAR' | 'JSONPARENT';
    T_JSONVALUE     : 'JSONVAL' | 'JSONVALUE';


    /* Special tokens */
    GROUPSEP        : '%%';

    MINUS           : '-';

INT : DIGIT+;

FLOAT
    : DIGIT+ '.' DIGIT* EXPONENT?
    | '.' DIGIT+ EXPONENT?
    | DIGIT+ EXPONENT
    ;

ID  : ('A'..'Z'|'_') ('A'..'Z'|'0'..'9'|'_')*
    ;

COMMENT
    : ('/*' .*? '*/') -> channel(HIDDEN)
    ;

LINE_COMMENT
    : ('//' ~('\n'|'\r')* '\r'?) -> channel(HIDDEN)
    ;

EOL : ('\r'? '\n');


QOUTED_STRING
    : '"$' ( ESC_SEQ | ~('\\'|'"') )* '"'
    ;

SIMPLE_STRING
    : '$' ~(' '|'\t'|'\r'|'\n')*
    ;

WS  : (' '|'\t')+;


fragment
DIGIT
    : '0'..'9'
    ;

fragment
EXPONENT
    : 'E' ('+'|'-')? ('0'..'9')+
    ;

fragment
ESC_SEQ
    : '\\' (
        'R'
        |'N'
        |'T'
        |'"'
        |'\''
        |'\\'
    )
    ;