#Run with source ./gen.sh
antlr4 -Dlanguage=Cpp TypeScriptLexer.g4 TypeScriptParser.g4 -visitor -o cpp-gen/ -package cyclone

