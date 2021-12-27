/* parser/listener/visitor header section */

// Generated from TParser.g4 by ANTLR 4.9

#pragma once

/* base visitor preinclude section */

#include "antlr4-runtime.h"
#include "TParserVisitor.h"

/* base visitor postinclude section */

namespace antlrcpptest {

/**
 * This class provides an empty implementation of TParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  TParserBaseVisitor : public TParserVisitor {
public:
/* base visitor public declarations/members section */

  virtual antlrcpp::Any visitMain(TParser::MainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDivide(TParser::DivideContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnd_(TParser::And_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConquer(TParser::ConquerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnused(TParser::UnusedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnused2(TParser::Unused2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStat(TParser::StatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCC(TParser::CCContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBBB(TParser::BBBContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFGF(TParser::FGFContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEWF(TParser::EWFContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGGG(TParser::GGGContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEEF(TParser::EEFContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFDF(TParser::FDFContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGGGGGGG(TParser::GGGGGGGContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEDDD(TParser::EDDDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn(TParser::ReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinue(TParser::ContinueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId(TParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArray(TParser::ArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdarray(TParser::IdarrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAny(TParser::AnyContext *ctx) override {
    return visitChildren(ctx);
  }


private:  
/* base visitor private declarations/members section */
};

}  // namespace antlrcpptest
