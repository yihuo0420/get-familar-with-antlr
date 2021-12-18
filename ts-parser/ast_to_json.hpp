#ifndef AST_TO_JSON_H
#define AST_TO_JSON_H
#pragma once

#include <memory>

#include "json.hpp"
#include "ast_visitor.hpp"

namespace cyclone::parser
{
	using Json = nlohmann::json;
	using JsonPtr = std::shared_ptr<nlohmann::json>;
	class AstToJson : public AstVisitor<Json>
	{
	public:
		~AstToJson() = default;
		Json visit(ParseTree *tree);
		Json visitChildren(ParseTree *tree);
		Json visitTerminal(TerminalNode *node);
		Json visitErrorNode(ErrorNode *node);

	private:
	};

} // namespace cyclone::parser

#endif