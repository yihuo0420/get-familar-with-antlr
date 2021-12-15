/* parser/listener/visitor header section */

// Generated from TParser.g4 by ANTLR 4.9

#pragma once

/* base listener preinclude section */

#include "antlr4-runtime.h"
#include "TParserListener.h"

/* base listener postinclude section */

namespace antlrcpptest
{

  /**
   * This class provides an empty implementation of TParserListener,
   * which can be extended to create a listener which only needs to handle a subset
   * of the available methods.
   */

  static const auto AstPrinter = [=](antlr4::ParserRuleContext &ctx)
  {
    std::cout << " start : " << ctx.start->getStartIndex() << std::endl;
    if (ctx.stop)
      std::cout << " end : " << ctx.stop->getStopIndex() << std::endl;
  };

  class TParserBaseListener : public TParserListener
  {
  public:
    /* base listener public declarations/members section */

    virtual void enterMain(TParser::MainContext *ctx) override
    {
      AstPrinter(*ctx);
    }
    virtual void exitMain(TParser::MainContext *ctx) override
    {
      AstPrinter(*ctx);
    }

    virtual void enterDivide(TParser::DivideContext *ctx) override
    {
      AstPrinter(*ctx);
    }
    virtual void exitDivide(TParser::DivideContext *ctx) override
    {
      AstPrinter(*ctx);
    }

    virtual void enterAnd_(TParser::And_Context *ctx) override { AstPrinter(*ctx); }
    virtual void exitAnd_(TParser::And_Context *ctx) override { AstPrinter(*ctx); }

    virtual void enterConquer(TParser::ConquerContext *ctx) override { AstPrinter(*ctx); }
    virtual void exitConquer(TParser::ConquerContext *ctx) override { AstPrinter(*ctx); }

    virtual void enterUnused(TParser::UnusedContext *ctx) override { AstPrinter(*ctx); }
    virtual void exitUnused(TParser::UnusedContext *ctx) override { AstPrinter(*ctx); }

    virtual void enterUnused2(TParser::Unused2Context *ctx) override { AstPrinter(*ctx); }
    virtual void exitUnused2(TParser::Unused2Context *ctx) override { AstPrinter(*ctx); }

    virtual void enterStat(TParser::StatContext *ctx) override { AstPrinter(*ctx); }
    virtual void exitStat(TParser::StatContext *ctx) override { AstPrinter(*ctx); }

    virtual void enterExpr(TParser::ExprContext *ctx) override { AstPrinter(*ctx); }
    virtual void exitExpr(TParser::ExprContext *ctx) override { AstPrinter(*ctx); }

    virtual void enterReturn(TParser::ReturnContext *ctx) override { AstPrinter(*ctx); }
    virtual void exitReturn(TParser::ReturnContext *ctx) override { AstPrinter(*ctx); }

    virtual void enterContinue(TParser::ContinueContext *ctx) override { AstPrinter(*ctx); }
    virtual void exitContinue(TParser::ContinueContext *ctx) override { AstPrinter(*ctx); }

    virtual void enterId(TParser::IdContext *ctx) override { AstPrinter(*ctx); }
    virtual void exitId(TParser::IdContext *ctx) override { AstPrinter(*ctx); }

    virtual void enterArray(TParser::ArrayContext *ctx) override { AstPrinter(*ctx); }
    virtual void exitArray(TParser::ArrayContext *ctx) override { AstPrinter(*ctx); }

    virtual void enterIdarray(TParser::IdarrayContext *ctx) override { AstPrinter(*ctx); }
    virtual void exitIdarray(TParser::IdarrayContext *ctx) override { AstPrinter(*ctx); }

    virtual void enterAny(TParser::AnyContext *ctx) override { AstPrinter(*ctx); }
    virtual void exitAny(TParser::AnyContext *ctx) override { AstPrinter(*ctx); }

    virtual void enterEveryRule(antlr4::ParserRuleContext *ctx) override { AstPrinter(*ctx); }
    virtual void exitEveryRule(antlr4::ParserRuleContext *ctx) override { AstPrinter(*ctx); }
    virtual void visitTerminal(antlr4::tree::TerminalNode *node) override {}
    virtual void visitErrorNode(antlr4::tree::ErrorNode *node) override {}

  private:
    /* base listener private declarations/members section */
  };

} // namespace antlrcpptest
