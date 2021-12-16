#include "ast_to_Json.hpp"
#include "antlr4-runtime.h"

#include <tuple>
#include <vector>

using antlr4::ParserRuleContext;
using antlr4::tree::TerminalNode;

namespace cyclone
{
    namespace parser
    {
        using JsonVector = std::vector<Json>;

        struct SubTreeRoot
        {
            /**
             * @brief For subtree root , it is rule name  , while token type for terminal node
             * @note Any subtree root in antlr4 is a rule
             *
             */
            std::string type;
            ssize_t start;
            ssize_t end;
        };

        struct Terminal : SubTreeRoot
        {
            /**
             * @brief The input token literal value
             *
             */
            std::string literal;
        };

        static const auto findPosition = [](ParserRuleContext *node)
        {
            const auto start = node->start ? node->start->getStartIndex() : 0;
            const auto end = node->stop ? node->stop->getStopIndex() : node->start ? node->start->getStopIndex()
                                                                                   : 0;
            return std::make_tuple(start, end);
        };

        NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(SubTreeRoot, type, start, end)
        NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Terminal, type, start, end, literal)

        Json AstToJson::visit(ParseTree *tree)
        {
            if (auto errorNode = dynamic_cast<ErrorNode *>(tree))
                return visitErrorNode(errorNode);
            if (auto terminalNode = dynamic_cast<TerminalNode *>(tree))
                return visitTerminal(terminalNode);

            if (auto ruleNode = dynamic_cast<ParserRuleContext *>(tree))
            {
                const auto positionRange = findPosition(ruleNode);
                SubTreeRoot subTreeRoot{"Rule#" + std::to_string(ruleNode->getRuleIndex()),
                                        std::get<0>(positionRange), std::get<1>(positionRange)};
                auto jsonifySubTreeRoot = Json(subTreeRoot);
                JsonVector jsonifyChildren;
                for (const auto &child : tree->children)
                    jsonifyChildren.push_back(visit(child));
                jsonifySubTreeRoot["ToBeDisguished"] = jsonifyChildren;
                return jsonifySubTreeRoot;
            }
            return Json();
        }

        Json AstToJson::visitChildren(ParseTree *tree)
        {
            return Json();
        }

        Json AstToJson::visitTerminal(TerminalNode *node)
        {
            if (auto token = node->getSymbol())
            {
                Terminal jsonifyTerminal = {"TokenType#" + std::to_string(token->getType()),
                                            token->getStartIndex(),
                                            token->getStopIndex(),
                                            token->getText()};
                return Json(jsonifyTerminal);
            }

            return Json();
        }

        Json AstToJson::visitErrorNode(ErrorNode *node)
        {
            return Json();
        }
    }
}