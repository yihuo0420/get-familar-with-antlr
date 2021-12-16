#include <iostream>
#include <vector>

#include "antlr4-runtime.h"
#include "../gen-cpp-typescript/TypeScriptLexer.h"
#include "../gen-cpp-typescript/TypeScriptParser.h"
#include "../abstract_parser.hpp"

using cyclone::TypeScriptLexer;
using cyclone::TypeScriptParser;
using cyclone::parser::AbstractParser;

int main(int, const char **)
{
    AbstractParser<TypeScriptLexer, TypeScriptParser> parser;
    std::cout << *parser.parse("let name : string ; name = 'alex'");
    return 0;
}
