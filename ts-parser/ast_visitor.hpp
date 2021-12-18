#ifndef AST_VISITOR_H
#define AST_VISITOR_H
#pragma once

namespace antlr4
{
	namespace tree
	{
		class ParseTree;
		class TerminalNode;
		class ErrorNode;
	}
}

using antlr4::tree::ErrorNode;
using antlr4::tree::ParseTree;
using antlr4::tree::TerminalNode;

namespace cyclone
{
	namespace parser
	{
		template <typename T>
		class AstVisitor
		{
		public:
			virtual ~AstVisitor() = default;
			virtual T visit(ParseTree *tree) = 0;
			virtual T visitChildren(ParseTree *tree) = 0;
			virtual T visitTerminal(TerminalNode *node) = 0;
			virtual T visitErrorNode(ErrorNode *node) = 0;
		};

	} // namespace parser

} // namespace cyclone::parser
#endif