#include <iostream>
#include <vector>

#include "antlr4-runtime.h"
#include "../cpp-gen/TypeScriptLexer.h"
#include "../cpp-gen/TypeScriptParser.h"
#include "../abstract_parser.hpp"

using cyclone::TypeScriptLexer;
using cyclone::TypeScriptParser;
using cyclone::parser::AbstractParser;

int main(int, const char **)
{
    AbstractParser<TypeScriptLexer, TypeScriptParser> parser;
    parser.parse("a['name']");
    
    return 0;
}
