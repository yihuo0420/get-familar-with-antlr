#ifndef __ABSTRACT_PARSER_H__
#define __ABSTRACT_PARSER_H__

#include <string>
#include <memory>

#include "json.hpp"
#include "antlr4-runtime.h"

namespace cyclone
{
    namespace parser
    {

        enum class ParseMode
        {
            Parse,
            ParseLoose,
        };

        using Node = nlohmann::json;
        using NodePtr = std::shared_ptr<nlohmann::json>;
        using namespace antlr4;
        template <class Lexser, class Parser>
        class AbstractParser
        {
        public:
            AbstractParser() {}
            virtual ~AbstractParser() {}
            NodePtr parse(const std::string &textstream, ParseMode mode = ParseMode::Parse)
            {
                parseMode_ = mode;
                root_.reset(new Node());
                ANTLRInputStream input(textstream);
                Lexser lexer(&input);
                CommonTokenStream tokens(&lexer);
                tokens.fill();
                Parser parser(&tokens);
                buildParseTree(parser.program()->toStringTree(true), *root_);
                return NodePtr(root_.release());
            }
            /**
             * @brief Wrapper fucntion for convenience
             * @param textstream
             * @return NodePtr
             */
            NodePtr parseLoose(const std::string &textstream) { return parse(textstream, ParseMode::ParseLoose); }

        protected:
            bool ignoreError() const { return ParseMode::ParseLoose == parseMode_; }
            virtual void buildParseTree(const std::string &textstream, Node &rootNode) { rootNode["program"] = textstream; };

        private:
            ParseMode parseMode_ = ParseMode::Parse;
            std::unique_ptr<Node> root_ = nullptr;
            std::string serilizedString_;
        };

    } // namespace parser

} // namespace cyclone

#endif // __ABSTRACT_PARSER_H__