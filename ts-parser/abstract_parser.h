#ifndef __ABSTRACT_PARSER_H__
#define __ABSTRACT_PARSER_H__

#include <string>
#include <memory>
#include <iostream>

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

        using Json = nlohmann::json;
        using JsonPtr = std::shared_ptr<nlohmann::json>;
        using namespace antlr4;
        template <class Lexser, class Parser>
        class AbstractParser
        {
        public:
            AbstractParser() {}
            virtual ~AbstractParser() {}
            JsonPtr parse(const std::string &textstream, ParseMode mode = ParseMode::Parse)
            {
                parseMode_ = mode;
                root_.reset(new Json());
                ANTLRInputStream input(textstream);
                Lexser lexer(&input);
                CommonTokenStream tokens(&lexer);
                tokens.fill();
                Parser parser(&tokens);
                jsonify(*parser.program(), *root_);
                return JsonPtr(root_.release());
            }
            /**
             * @brief Wrapper fucntion for convenience
             * @param textstream
             * @return JsonPtr
             */
            JsonPtr parseLoose(const std::string &textstream) { return parse(textstream, ParseMode::ParseLoose); }

        protected:
            bool ignoreError() const { return ParseMode::ParseLoose == parseMode_; }
            virtual void jsonify(tree::ParseTree &tree, Json &rootNode)
            {
                rootNode["program"] = tree.toStringTree();
            };

        private:
            ParseMode parseMode_ = ParseMode::Parse;
            std::unique_ptr<Json> root_ = nullptr;
            std::string serilizedString_;
        };

    } // namespace parser

} // namespace cyclone

#endif // __ABSTRACT_PARSER_H__