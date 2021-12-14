#include <iostream>
#include <vector>

#include "antlr4-runtime.h"
#include "../gen-cpp-typescript/TypeScriptLexer.h"
#include "../gen-cpp-typescript/TypeScriptParser.h"
#include "../abstract_parser.h"

using cyclone::TypeScriptLexer;
using cyclone::TypeScriptParser;
using cyclone::parser::AbstractParser;

int main(int, const char**)
{
    AbstractParser<TypeScriptLexer, TypeScriptParser> parser;
    std::cout << *parser.parse("for(let a = 0 ; a < 10 ; a ++)  console.log('The count is ',a) ;");
    return 0;
}
