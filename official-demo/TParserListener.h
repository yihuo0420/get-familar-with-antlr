/* parser/listener/visitor header section */

// Generated from TParser.g4 by ANTLR 4.9

#pragma once

/* listener preinclude section */

#include "antlr4-runtime.h"
#include "TParser.h"

/* listener postinclude section */

namespace antlrcpptest {

/**
 * This interface defines an abstract listener for a parse tree produced by TParser.
 */
class  TParserListener : public antlr4::tree::ParseTreeListener {
public:
/* listener public declarations/members section */

  virtual void enterMain(TParser::MainContext *ctx) = 0;
  virtual void exitMain(TParser::MainContext *ctx) = 0;

  virtual void enterDivide(TParser::DivideContext *ctx) = 0;
  virtual void exitDivide(TParser::DivideContext *ctx) = 0;

  virtual void enterAnd_(TParser::And_Context *ctx) = 0;
  virtual void exitAnd_(TParser::And_Context *ctx) = 0;

  virtual void enterConquer(TParser::ConquerContext *ctx) = 0;
  virtual void exitConquer(TParser::ConquerContext *ctx) = 0;

  virtual void enterUnused(TParser::UnusedContext *ctx) = 0;
  virtual void exitUnused(TParser::UnusedContext *ctx) = 0;

  virtual void enterUnused2(TParser::Unused2Context *ctx) = 0;
  virtual void exitUnused2(TParser::Unused2Context *ctx) = 0;

  virtual void enterStat(TParser::StatContext *ctx) = 0;
  virtual void exitStat(TParser::StatContext *ctx) = 0;

  virtual void enterCC(TParser::CCContext *ctx) = 0;
  virtual void exitCC(TParser::CCContext *ctx) = 0;

  virtual void enterBBB(TParser::BBBContext *ctx) = 0;
  virtual void exitBBB(TParser::BBBContext *ctx) = 0;

  virtual void enterFGF(TParser::FGFContext *ctx) = 0;
  virtual void exitFGF(TParser::FGFContext *ctx) = 0;

  virtual void enterEWF(TParser::EWFContext *ctx) = 0;
  virtual void exitEWF(TParser::EWFContext *ctx) = 0;

  virtual void enterGGG(TParser::GGGContext *ctx) = 0;
  virtual void exitGGG(TParser::GGGContext *ctx) = 0;

  virtual void enterEEF(TParser::EEFContext *ctx) = 0;
  virtual void exitEEF(TParser::EEFContext *ctx) = 0;

  virtual void enterFDF(TParser::FDFContext *ctx) = 0;
  virtual void exitFDF(TParser::FDFContext *ctx) = 0;

  virtual void enterGGGGGGG(TParser::GGGGGGGContext *ctx) = 0;
  virtual void exitGGGGGGG(TParser::GGGGGGGContext *ctx) = 0;

  virtual void enterEDDD(TParser::EDDDContext *ctx) = 0;
  virtual void exitEDDD(TParser::EDDDContext *ctx) = 0;

  virtual void enterReturn(TParser::ReturnContext *ctx) = 0;
  virtual void exitReturn(TParser::ReturnContext *ctx) = 0;

  virtual void enterContinue(TParser::ContinueContext *ctx) = 0;
  virtual void exitContinue(TParser::ContinueContext *ctx) = 0;

  virtual void enterId(TParser::IdContext *ctx) = 0;
  virtual void exitId(TParser::IdContext *ctx) = 0;

  virtual void enterArray(TParser::ArrayContext *ctx) = 0;
  virtual void exitArray(TParser::ArrayContext *ctx) = 0;

  virtual void enterIdarray(TParser::IdarrayContext *ctx) = 0;
  virtual void exitIdarray(TParser::IdarrayContext *ctx) = 0;

  virtual void enterAny(TParser::AnyContext *ctx) = 0;
  virtual void exitAny(TParser::AnyContext *ctx) = 0;


private:  
/* listener private declarations/members section */
};

}  // namespace antlrcpptest
