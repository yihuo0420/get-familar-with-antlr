/* parser/listener/visitor header section */
#include <any>


// Generated from TParser.g4 by ANTLR 4.8

#pragma once

/* visitor preinclude section */

#include "antlr4-runtime.h"
#include "TParser.h"

/* visitor postinclude section */

namespace antlrcpptest {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by TParser.
 */
class  TParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:
  /* visitor public declarations/members section */

  /**
   * Visit parse trees produced by TParser.
   */
    virtual antlrcpp::Any visitMain(TParser::MainContext *context) = 0;

    virtual antlrcpp::Any visitDivide(TParser::DivideContext *context) = 0;

    virtual antlrcpp::Any visitAnd_(TParser::And_Context *context) = 0;

    virtual antlrcpp::Any visitConquer(TParser::ConquerContext *context) = 0;

    virtual antlrcpp::Any visitUnused(TParser::UnusedContext *context) = 0;

    virtual antlrcpp::Any visitUnused2(TParser::Unused2Context *context) = 0;

    virtual antlrcpp::Any visitStat(TParser::StatContext *context) = 0;

    virtual antlrcpp::Any visitQuestionExpression(TParser::QuestionExpressionContext *context) = 0;

    virtual antlrcpp::Any visitStringLiteralExpression(TParser::StringLiteralExpressionContext *context) = 0;

    virtual antlrcpp::Any visitStarExpression(TParser::StarExpressionContext *context) = 0;

    virtual antlrcpp::Any visitEquealExpressoin(TParser::EquealExpressoinContext *context) = 0;

    virtual antlrcpp::Any visitFlowControlExpression(TParser::FlowControlExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIntLteralExpressoin(TParser::IntLteralExpressoinContext *context) = 0;

    virtual antlrcpp::Any visitPLusExpression(TParser::PLusExpressionContext *context) = 0;

    virtual antlrcpp::Any visitParExpression(TParser::ParExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierExpression(TParser::IdentifierExpressionContext *context) = 0;

    virtual antlrcpp::Any visitReturn(TParser::ReturnContext *context) = 0;

    virtual antlrcpp::Any visitContinue(TParser::ContinueContext *context) = 0;

    virtual antlrcpp::Any visitId(TParser::IdContext *context) = 0;

    virtual antlrcpp::Any visitArray(TParser::ArrayContext *context) = 0;

    virtual antlrcpp::Any visitIdarray(TParser::IdarrayContext *context) = 0;

    virtual antlrcpp::Any visitAny(TParser::AnyContext *context) = 0;


private:  
/* visitor private declarations/members section */
};

}  // namespace antlrcpptest
