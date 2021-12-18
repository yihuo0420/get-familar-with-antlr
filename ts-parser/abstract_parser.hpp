#ifndef ABSTRACT_PARSER_H
#define ABSTRACT_PARSER_H
#pragma once

#include "ast_to_json.hpp"

namespace cyclone::parser
{

	enum class ParseMode
	{
		Parse,
		ParseLoose,
	};
	using namespace antlr4;
	template <class Lexser, class Parser>
	class AbstractParser
	{
	public:
		AbstractParser() {}
		virtual ~AbstractParser() {}
		auto parse(const std::string &textstream, ParseMode mode = ParseMode::Parse)
		{
			parseMode_ = mode;
			ANTLRInputStream input(textstream);
			Lexser lexer(&input);
			CommonTokenStream tokens(&lexer);
			tokens.fill();
			Parser parser(&tokens);
			AstToJson visitor;
			return std::make_shared<Json>(visitor.visit(parser.program()));
		}
		/**
		 * @brief Wrapper fucntion for convenience
		 * @param textstream
		 * @return JsonPtr
		 */
		auto parseLoose(const std::string &textstream) { return parse(textstream, ParseMode::ParseLoose); }

	protected:
		auto ignoreError() const { return ParseMode::ParseLoose == parseMode_; }

	private:
		ParseMode parseMode_ = ParseMode::Parse;
	};

} // namespace cyclone::parser
#endif