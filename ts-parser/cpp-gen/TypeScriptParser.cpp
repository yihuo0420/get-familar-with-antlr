
// Generated from TypeScriptParser.g4 by ANTLR 4.9


#include "TypeScriptParserListener.h"
#include "TypeScriptParserVisitor.h"

#include "TypeScriptParser.h"


using namespace antlrcpp;
using namespace cyclone;
using namespace antlr4;

TypeScriptParser::TypeScriptParser(TokenStream *input) : TypeScriptParserBase(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

TypeScriptParser::~TypeScriptParser() {
  delete _interpreter;
}

std::string TypeScriptParser::getGrammarFileName() const {
  return "TypeScriptParser.g4";
}

const std::vector<std::string>& TypeScriptParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& TypeScriptParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- InitializerContext ------------------------------------------------------------------

TypeScriptParser::InitializerContext::InitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::InitializerContext::Assign() {
  return getToken(TypeScriptParser::Assign, 0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::InitializerContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}


size_t TypeScriptParser::InitializerContext::getRuleIndex() const {
  return TypeScriptParser::RuleInitializer;
}

void TypeScriptParser::InitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer(this);
}

void TypeScriptParser::InitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer(this);
}


antlrcpp::Any TypeScriptParser::InitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitInitializer(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::InitializerContext* TypeScriptParser::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 0, TypeScriptParser::RuleInitializer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
    match(TypeScriptParser::Assign);
    setState(303);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BindingPatternContext ------------------------------------------------------------------

TypeScriptParser::BindingPatternContext::BindingPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::ArrayLiteralContext* TypeScriptParser::BindingPatternContext::arrayLiteral() {
  return getRuleContext<TypeScriptParser::ArrayLiteralContext>(0);
}

TypeScriptParser::ObjectLiteralContext* TypeScriptParser::BindingPatternContext::objectLiteral() {
  return getRuleContext<TypeScriptParser::ObjectLiteralContext>(0);
}


size_t TypeScriptParser::BindingPatternContext::getRuleIndex() const {
  return TypeScriptParser::RuleBindingPattern;
}

void TypeScriptParser::BindingPatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBindingPattern(this);
}

void TypeScriptParser::BindingPatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBindingPattern(this);
}


antlrcpp::Any TypeScriptParser::BindingPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitBindingPattern(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::BindingPatternContext* TypeScriptParser::bindingPattern() {
  BindingPatternContext *_localctx = _tracker.createInstance<BindingPatternContext>(_ctx, getState());
  enterRule(_localctx, 2, TypeScriptParser::RuleBindingPattern);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(307);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypeScriptParser::OpenBracket: {
        setState(305);
        arrayLiteral();
        break;
      }

      case TypeScriptParser::OpenBrace: {
        setState(306);
        objectLiteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParametersContext ------------------------------------------------------------------

TypeScriptParser::TypeParametersContext::TypeParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::TypeParametersContext::LessThan() {
  return getToken(TypeScriptParser::LessThan, 0);
}

tree::TerminalNode* TypeScriptParser::TypeParametersContext::MoreThan() {
  return getToken(TypeScriptParser::MoreThan, 0);
}

TypeScriptParser::TypeParameterListContext* TypeScriptParser::TypeParametersContext::typeParameterList() {
  return getRuleContext<TypeScriptParser::TypeParameterListContext>(0);
}


size_t TypeScriptParser::TypeParametersContext::getRuleIndex() const {
  return TypeScriptParser::RuleTypeParameters;
}

void TypeScriptParser::TypeParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameters(this);
}

void TypeScriptParser::TypeParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameters(this);
}


antlrcpp::Any TypeScriptParser::TypeParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTypeParameters(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TypeParametersContext* TypeScriptParser::typeParameters() {
  TypeParametersContext *_localctx = _tracker.createInstance<TypeParametersContext>(_ctx, getState());
  enterRule(_localctx, 4, TypeScriptParser::RuleTypeParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    match(TypeScriptParser::LessThan);
    setState(311);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::LessThan || _la == TypeScriptParser::Identifier) {
      setState(310);
      typeParameterList();
    }
    setState(313);
    match(TypeScriptParser::MoreThan);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterListContext ------------------------------------------------------------------

TypeScriptParser::TypeParameterListContext::TypeParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypeScriptParser::TypeParameterContext *> TypeScriptParser::TypeParameterListContext::typeParameter() {
  return getRuleContexts<TypeScriptParser::TypeParameterContext>();
}

TypeScriptParser::TypeParameterContext* TypeScriptParser::TypeParameterListContext::typeParameter(size_t i) {
  return getRuleContext<TypeScriptParser::TypeParameterContext>(i);
}

std::vector<tree::TerminalNode *> TypeScriptParser::TypeParameterListContext::Comma() {
  return getTokens(TypeScriptParser::Comma);
}

tree::TerminalNode* TypeScriptParser::TypeParameterListContext::Comma(size_t i) {
  return getToken(TypeScriptParser::Comma, i);
}


size_t TypeScriptParser::TypeParameterListContext::getRuleIndex() const {
  return TypeScriptParser::RuleTypeParameterList;
}

void TypeScriptParser::TypeParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameterList(this);
}

void TypeScriptParser::TypeParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameterList(this);
}


antlrcpp::Any TypeScriptParser::TypeParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTypeParameterList(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TypeParameterListContext* TypeScriptParser::typeParameterList() {
  TypeParameterListContext *_localctx = _tracker.createInstance<TypeParameterListContext>(_ctx, getState());
  enterRule(_localctx, 6, TypeScriptParser::RuleTypeParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(315);
    typeParameter();
    setState(320);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypeScriptParser::Comma) {
      setState(316);
      match(TypeScriptParser::Comma);
      setState(317);
      typeParameter();
      setState(322);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterContext ------------------------------------------------------------------

TypeScriptParser::TypeParameterContext::TypeParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::TypeParameterContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

TypeScriptParser::ConstraintContext* TypeScriptParser::TypeParameterContext::constraint() {
  return getRuleContext<TypeScriptParser::ConstraintContext>(0);
}

TypeScriptParser::TypeParametersContext* TypeScriptParser::TypeParameterContext::typeParameters() {
  return getRuleContext<TypeScriptParser::TypeParametersContext>(0);
}


size_t TypeScriptParser::TypeParameterContext::getRuleIndex() const {
  return TypeScriptParser::RuleTypeParameter;
}

void TypeScriptParser::TypeParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameter(this);
}

void TypeScriptParser::TypeParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameter(this);
}


antlrcpp::Any TypeScriptParser::TypeParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTypeParameter(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TypeParameterContext* TypeScriptParser::typeParameter() {
  TypeParameterContext *_localctx = _tracker.createInstance<TypeParameterContext>(_ctx, getState());
  enterRule(_localctx, 8, TypeScriptParser::RuleTypeParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(328);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypeScriptParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(323);
        match(TypeScriptParser::Identifier);
        setState(325);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypeScriptParser::Extends) {
          setState(324);
          constraint();
        }
        break;
      }

      case TypeScriptParser::LessThan: {
        enterOuterAlt(_localctx, 2);
        setState(327);
        typeParameters();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstraintContext ------------------------------------------------------------------

TypeScriptParser::ConstraintContext::ConstraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::ConstraintContext::Extends() {
  return getToken(TypeScriptParser::Extends, 0);
}

TypeScriptParser::Type_Context* TypeScriptParser::ConstraintContext::type_() {
  return getRuleContext<TypeScriptParser::Type_Context>(0);
}


size_t TypeScriptParser::ConstraintContext::getRuleIndex() const {
  return TypeScriptParser::RuleConstraint;
}

void TypeScriptParser::ConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstraint(this);
}

void TypeScriptParser::ConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstraint(this);
}


antlrcpp::Any TypeScriptParser::ConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitConstraint(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ConstraintContext* TypeScriptParser::constraint() {
  ConstraintContext *_localctx = _tracker.createInstance<ConstraintContext>(_ctx, getState());
  enterRule(_localctx, 10, TypeScriptParser::RuleConstraint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(330);
    match(TypeScriptParser::Extends);
    setState(331);
    type_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentsContext ------------------------------------------------------------------

TypeScriptParser::TypeArgumentsContext::TypeArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::TypeArgumentsContext::LessThan() {
  return getToken(TypeScriptParser::LessThan, 0);
}

tree::TerminalNode* TypeScriptParser::TypeArgumentsContext::MoreThan() {
  return getToken(TypeScriptParser::MoreThan, 0);
}

TypeScriptParser::TypeArgumentListContext* TypeScriptParser::TypeArgumentsContext::typeArgumentList() {
  return getRuleContext<TypeScriptParser::TypeArgumentListContext>(0);
}


size_t TypeScriptParser::TypeArgumentsContext::getRuleIndex() const {
  return TypeScriptParser::RuleTypeArguments;
}

void TypeScriptParser::TypeArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeArguments(this);
}

void TypeScriptParser::TypeArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeArguments(this);
}


antlrcpp::Any TypeScriptParser::TypeArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTypeArguments(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TypeArgumentsContext* TypeScriptParser::typeArguments() {
  TypeArgumentsContext *_localctx = _tracker.createInstance<TypeArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 12, TypeScriptParser::RuleTypeArguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(333);
    match(TypeScriptParser::LessThan);
    setState(335);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypeScriptParser::OpenBracket)
      | (1ULL << TypeScriptParser::OpenParen)
      | (1ULL << TypeScriptParser::OpenBrace)
      | (1ULL << TypeScriptParser::LessThan))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (TypeScriptParser::Typeof - 65))
      | (1ULL << (TypeScriptParser::New - 65))
      | (1ULL << (TypeScriptParser::Void - 65))
      | (1ULL << (TypeScriptParser::This - 65))
      | (1ULL << (TypeScriptParser::Any - 65))
      | (1ULL << (TypeScriptParser::Number - 65))
      | (1ULL << (TypeScriptParser::Boolean - 65))
      | (1ULL << (TypeScriptParser::String - 65))
      | (1ULL << (TypeScriptParser::Symbol - 65))
      | (1ULL << (TypeScriptParser::Identifier - 65))
      | (1ULL << (TypeScriptParser::StringLiteral - 65)))) != 0)) {
      setState(334);
      dynamic_cast<TypeArgumentsContext *>(_localctx)->params = typeArgumentList();
    }
    setState(337);
    match(TypeScriptParser::MoreThan);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentListContext ------------------------------------------------------------------

TypeScriptParser::TypeArgumentListContext::TypeArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypeScriptParser::TypeArgumentContext *> TypeScriptParser::TypeArgumentListContext::typeArgument() {
  return getRuleContexts<TypeScriptParser::TypeArgumentContext>();
}

TypeScriptParser::TypeArgumentContext* TypeScriptParser::TypeArgumentListContext::typeArgument(size_t i) {
  return getRuleContext<TypeScriptParser::TypeArgumentContext>(i);
}

std::vector<tree::TerminalNode *> TypeScriptParser::TypeArgumentListContext::Comma() {
  return getTokens(TypeScriptParser::Comma);
}

tree::TerminalNode* TypeScriptParser::TypeArgumentListContext::Comma(size_t i) {
  return getToken(TypeScriptParser::Comma, i);
}


size_t TypeScriptParser::TypeArgumentListContext::getRuleIndex() const {
  return TypeScriptParser::RuleTypeArgumentList;
}

void TypeScriptParser::TypeArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeArgumentList(this);
}

void TypeScriptParser::TypeArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeArgumentList(this);
}


antlrcpp::Any TypeScriptParser::TypeArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTypeArgumentList(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TypeArgumentListContext* TypeScriptParser::typeArgumentList() {
  TypeArgumentListContext *_localctx = _tracker.createInstance<TypeArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 14, TypeScriptParser::RuleTypeArgumentList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339);
    typeArgument();
    setState(344);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypeScriptParser::Comma) {
      setState(340);
      match(TypeScriptParser::Comma);
      setState(341);
      typeArgument();
      setState(346);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentContext ------------------------------------------------------------------

TypeScriptParser::TypeArgumentContext::TypeArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::Type_Context* TypeScriptParser::TypeArgumentContext::type_() {
  return getRuleContext<TypeScriptParser::Type_Context>(0);
}


size_t TypeScriptParser::TypeArgumentContext::getRuleIndex() const {
  return TypeScriptParser::RuleTypeArgument;
}

void TypeScriptParser::TypeArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeArgument(this);
}

void TypeScriptParser::TypeArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeArgument(this);
}


antlrcpp::Any TypeScriptParser::TypeArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTypeArgument(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TypeArgumentContext* TypeScriptParser::typeArgument() {
  TypeArgumentContext *_localctx = _tracker.createInstance<TypeArgumentContext>(_ctx, getState());
  enterRule(_localctx, 16, TypeScriptParser::RuleTypeArgument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347);
    type_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_Context ------------------------------------------------------------------

TypeScriptParser::Type_Context::Type_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::UnionOrIntersectionOrPrimaryTypeContext* TypeScriptParser::Type_Context::unionOrIntersectionOrPrimaryType() {
  return getRuleContext<TypeScriptParser::UnionOrIntersectionOrPrimaryTypeContext>(0);
}

TypeScriptParser::FunctionTypeContext* TypeScriptParser::Type_Context::functionType() {
  return getRuleContext<TypeScriptParser::FunctionTypeContext>(0);
}

TypeScriptParser::ConstructorTypeContext* TypeScriptParser::Type_Context::constructorType() {
  return getRuleContext<TypeScriptParser::ConstructorTypeContext>(0);
}

TypeScriptParser::TypeGenericContext* TypeScriptParser::Type_Context::typeGeneric() {
  return getRuleContext<TypeScriptParser::TypeGenericContext>(0);
}

tree::TerminalNode* TypeScriptParser::Type_Context::StringLiteral() {
  return getToken(TypeScriptParser::StringLiteral, 0);
}


size_t TypeScriptParser::Type_Context::getRuleIndex() const {
  return TypeScriptParser::RuleType_;
}

void TypeScriptParser::Type_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_(this);
}

void TypeScriptParser::Type_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_(this);
}


antlrcpp::Any TypeScriptParser::Type_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitType_(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::Type_Context* TypeScriptParser::type_() {
  Type_Context *_localctx = _tracker.createInstance<Type_Context>(_ctx, getState());
  enterRule(_localctx, 18, TypeScriptParser::RuleType_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(354);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(349);
      unionOrIntersectionOrPrimaryType(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(350);
      functionType();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(351);
      constructorType();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(352);
      typeGeneric();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(353);
      match(TypeScriptParser::StringLiteral);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnionOrIntersectionOrPrimaryTypeContext ------------------------------------------------------------------

TypeScriptParser::UnionOrIntersectionOrPrimaryTypeContext::UnionOrIntersectionOrPrimaryTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TypeScriptParser::UnionOrIntersectionOrPrimaryTypeContext::getRuleIndex() const {
  return TypeScriptParser::RuleUnionOrIntersectionOrPrimaryType;
}

void TypeScriptParser::UnionOrIntersectionOrPrimaryTypeContext::copyFrom(UnionOrIntersectionOrPrimaryTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IntersectionContext ------------------------------------------------------------------

std::vector<TypeScriptParser::UnionOrIntersectionOrPrimaryTypeContext *> TypeScriptParser::IntersectionContext::unionOrIntersectionOrPrimaryType() {
  return getRuleContexts<TypeScriptParser::UnionOrIntersectionOrPrimaryTypeContext>();
}

TypeScriptParser::UnionOrIntersectionOrPrimaryTypeContext* TypeScriptParser::IntersectionContext::unionOrIntersectionOrPrimaryType(size_t i) {
  return getRuleContext<TypeScriptParser::UnionOrIntersectionOrPrimaryTypeContext>(i);
}

tree::TerminalNode* TypeScriptParser::IntersectionContext::BitAnd() {
  return getToken(TypeScriptParser::BitAnd, 0);
}

TypeScriptParser::IntersectionContext::IntersectionContext(UnionOrIntersectionOrPrimaryTypeContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::IntersectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntersection(this);
}
void TypeScriptParser::IntersectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntersection(this);
}

antlrcpp::Any TypeScriptParser::IntersectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitIntersection(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrimaryContext ------------------------------------------------------------------

TypeScriptParser::PrimaryTypeContext* TypeScriptParser::PrimaryContext::primaryType() {
  return getRuleContext<TypeScriptParser::PrimaryTypeContext>(0);
}

TypeScriptParser::PrimaryContext::PrimaryContext(UnionOrIntersectionOrPrimaryTypeContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::PrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary(this);
}
void TypeScriptParser::PrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary(this);
}

antlrcpp::Any TypeScriptParser::PrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitPrimary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnionContext ------------------------------------------------------------------

std::vector<TypeScriptParser::UnionOrIntersectionOrPrimaryTypeContext *> TypeScriptParser::UnionContext::unionOrIntersectionOrPrimaryType() {
  return getRuleContexts<TypeScriptParser::UnionOrIntersectionOrPrimaryTypeContext>();
}

TypeScriptParser::UnionOrIntersectionOrPrimaryTypeContext* TypeScriptParser::UnionContext::unionOrIntersectionOrPrimaryType(size_t i) {
  return getRuleContext<TypeScriptParser::UnionOrIntersectionOrPrimaryTypeContext>(i);
}

tree::TerminalNode* TypeScriptParser::UnionContext::BitOr() {
  return getToken(TypeScriptParser::BitOr, 0);
}

TypeScriptParser::UnionContext::UnionContext(UnionOrIntersectionOrPrimaryTypeContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::UnionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnion(this);
}
void TypeScriptParser::UnionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnion(this);
}

antlrcpp::Any TypeScriptParser::UnionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitUnion(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::UnionOrIntersectionOrPrimaryTypeContext* TypeScriptParser::unionOrIntersectionOrPrimaryType() {
   return unionOrIntersectionOrPrimaryType(0);
}

TypeScriptParser::UnionOrIntersectionOrPrimaryTypeContext* TypeScriptParser::unionOrIntersectionOrPrimaryType(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  TypeScriptParser::UnionOrIntersectionOrPrimaryTypeContext *_localctx = _tracker.createInstance<UnionOrIntersectionOrPrimaryTypeContext>(_ctx, parentState);
  TypeScriptParser::UnionOrIntersectionOrPrimaryTypeContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, TypeScriptParser::RuleUnionOrIntersectionOrPrimaryType, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<PrimaryContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(357);
    primaryType(0);
    _ctx->stop = _input->LT(-1);
    setState(367);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(365);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<UnionContext>(_tracker.createInstance<UnionOrIntersectionOrPrimaryTypeContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleUnionOrIntersectionOrPrimaryType);
          setState(359);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(360);
          match(TypeScriptParser::BitOr);
          setState(361);
          unionOrIntersectionOrPrimaryType(4);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<IntersectionContext>(_tracker.createInstance<UnionOrIntersectionOrPrimaryTypeContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleUnionOrIntersectionOrPrimaryType);
          setState(362);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(363);
          match(TypeScriptParser::BitAnd);
          setState(364);
          unionOrIntersectionOrPrimaryType(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(369);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrimaryTypeContext ------------------------------------------------------------------

TypeScriptParser::PrimaryTypeContext::PrimaryTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TypeScriptParser::PrimaryTypeContext::getRuleIndex() const {
  return TypeScriptParser::RulePrimaryType;
}

void TypeScriptParser::PrimaryTypeContext::copyFrom(PrimaryTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- RedefinitionOfTypeContext ------------------------------------------------------------------

TypeScriptParser::TypeReferenceContext* TypeScriptParser::RedefinitionOfTypeContext::typeReference() {
  return getRuleContext<TypeScriptParser::TypeReferenceContext>(0);
}

tree::TerminalNode* TypeScriptParser::RedefinitionOfTypeContext::Is() {
  return getToken(TypeScriptParser::Is, 0);
}

TypeScriptParser::PrimaryTypeContext* TypeScriptParser::RedefinitionOfTypeContext::primaryType() {
  return getRuleContext<TypeScriptParser::PrimaryTypeContext>(0);
}

TypeScriptParser::RedefinitionOfTypeContext::RedefinitionOfTypeContext(PrimaryTypeContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::RedefinitionOfTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRedefinitionOfType(this);
}
void TypeScriptParser::RedefinitionOfTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRedefinitionOfType(this);
}

antlrcpp::Any TypeScriptParser::RedefinitionOfTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitRedefinitionOfType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PredefinedPrimTypeContext ------------------------------------------------------------------

TypeScriptParser::PredefinedTypeContext* TypeScriptParser::PredefinedPrimTypeContext::predefinedType() {
  return getRuleContext<TypeScriptParser::PredefinedTypeContext>(0);
}

TypeScriptParser::PredefinedPrimTypeContext::PredefinedPrimTypeContext(PrimaryTypeContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::PredefinedPrimTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredefinedPrimType(this);
}
void TypeScriptParser::PredefinedPrimTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredefinedPrimType(this);
}

antlrcpp::Any TypeScriptParser::PredefinedPrimTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitPredefinedPrimType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayPrimTypeContext ------------------------------------------------------------------

TypeScriptParser::PrimaryTypeContext* TypeScriptParser::ArrayPrimTypeContext::primaryType() {
  return getRuleContext<TypeScriptParser::PrimaryTypeContext>(0);
}

tree::TerminalNode* TypeScriptParser::ArrayPrimTypeContext::OpenBracket() {
  return getToken(TypeScriptParser::OpenBracket, 0);
}

tree::TerminalNode* TypeScriptParser::ArrayPrimTypeContext::CloseBracket() {
  return getToken(TypeScriptParser::CloseBracket, 0);
}

TypeScriptParser::ArrayPrimTypeContext::ArrayPrimTypeContext(PrimaryTypeContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::ArrayPrimTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayPrimType(this);
}
void TypeScriptParser::ArrayPrimTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayPrimType(this);
}

antlrcpp::Any TypeScriptParser::ArrayPrimTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitArrayPrimType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesizedPrimTypeContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::ParenthesizedPrimTypeContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

TypeScriptParser::Type_Context* TypeScriptParser::ParenthesizedPrimTypeContext::type_() {
  return getRuleContext<TypeScriptParser::Type_Context>(0);
}

tree::TerminalNode* TypeScriptParser::ParenthesizedPrimTypeContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

TypeScriptParser::ParenthesizedPrimTypeContext::ParenthesizedPrimTypeContext(PrimaryTypeContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::ParenthesizedPrimTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesizedPrimType(this);
}
void TypeScriptParser::ParenthesizedPrimTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesizedPrimType(this);
}

antlrcpp::Any TypeScriptParser::ParenthesizedPrimTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitParenthesizedPrimType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ThisPrimTypeContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::ThisPrimTypeContext::This() {
  return getToken(TypeScriptParser::This, 0);
}

TypeScriptParser::ThisPrimTypeContext::ThisPrimTypeContext(PrimaryTypeContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::ThisPrimTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThisPrimType(this);
}
void TypeScriptParser::ThisPrimTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThisPrimType(this);
}

antlrcpp::Any TypeScriptParser::ThisPrimTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitThisPrimType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TuplePrimTypeContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::TuplePrimTypeContext::OpenBracket() {
  return getToken(TypeScriptParser::OpenBracket, 0);
}

TypeScriptParser::TupleElementTypesContext* TypeScriptParser::TuplePrimTypeContext::tupleElementTypes() {
  return getRuleContext<TypeScriptParser::TupleElementTypesContext>(0);
}

tree::TerminalNode* TypeScriptParser::TuplePrimTypeContext::CloseBracket() {
  return getToken(TypeScriptParser::CloseBracket, 0);
}

TypeScriptParser::TuplePrimTypeContext::TuplePrimTypeContext(PrimaryTypeContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::TuplePrimTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTuplePrimType(this);
}
void TypeScriptParser::TuplePrimTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTuplePrimType(this);
}

antlrcpp::Any TypeScriptParser::TuplePrimTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTuplePrimType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ObjectPrimTypeContext ------------------------------------------------------------------

TypeScriptParser::ObjectTypeContext* TypeScriptParser::ObjectPrimTypeContext::objectType() {
  return getRuleContext<TypeScriptParser::ObjectTypeContext>(0);
}

TypeScriptParser::ObjectPrimTypeContext::ObjectPrimTypeContext(PrimaryTypeContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::ObjectPrimTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectPrimType(this);
}
void TypeScriptParser::ObjectPrimTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectPrimType(this);
}

antlrcpp::Any TypeScriptParser::ObjectPrimTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitObjectPrimType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReferencePrimTypeContext ------------------------------------------------------------------

TypeScriptParser::TypeReferenceContext* TypeScriptParser::ReferencePrimTypeContext::typeReference() {
  return getRuleContext<TypeScriptParser::TypeReferenceContext>(0);
}

TypeScriptParser::ReferencePrimTypeContext::ReferencePrimTypeContext(PrimaryTypeContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::ReferencePrimTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReferencePrimType(this);
}
void TypeScriptParser::ReferencePrimTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReferencePrimType(this);
}

antlrcpp::Any TypeScriptParser::ReferencePrimTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitReferencePrimType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- QueryPrimTypeContext ------------------------------------------------------------------

TypeScriptParser::TypeQueryContext* TypeScriptParser::QueryPrimTypeContext::typeQuery() {
  return getRuleContext<TypeScriptParser::TypeQueryContext>(0);
}

TypeScriptParser::QueryPrimTypeContext::QueryPrimTypeContext(PrimaryTypeContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::QueryPrimTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQueryPrimType(this);
}
void TypeScriptParser::QueryPrimTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQueryPrimType(this);
}

antlrcpp::Any TypeScriptParser::QueryPrimTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitQueryPrimType(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::PrimaryTypeContext* TypeScriptParser::primaryType() {
   return primaryType(0);
}

TypeScriptParser::PrimaryTypeContext* TypeScriptParser::primaryType(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  TypeScriptParser::PrimaryTypeContext *_localctx = _tracker.createInstance<PrimaryTypeContext>(_ctx, parentState);
  TypeScriptParser::PrimaryTypeContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, TypeScriptParser::RulePrimaryType, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(388);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenthesizedPrimTypeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(371);
      match(TypeScriptParser::OpenParen);
      setState(372);
      type_();
      setState(373);
      match(TypeScriptParser::CloseParen);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PredefinedPrimTypeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(375);
      predefinedType();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ReferencePrimTypeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(376);
      typeReference();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ObjectPrimTypeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(377);
      objectType();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<TuplePrimTypeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(378);
      match(TypeScriptParser::OpenBracket);
      setState(379);
      tupleElementTypes();
      setState(380);
      match(TypeScriptParser::CloseBracket);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<QueryPrimTypeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(382);
      typeQuery();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ThisPrimTypeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(383);
      match(TypeScriptParser::This);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<RedefinitionOfTypeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(384);
      typeReference();
      setState(385);
      match(TypeScriptParser::Is);
      setState(386);
      primaryType(1);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(396);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<ArrayPrimTypeContext>(_tracker.createInstance<PrimaryTypeContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RulePrimaryType);
        setState(390);

        if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
        setState(391);

        if (!(notLineTerminator())) throw FailedPredicateException(this, "notLineTerminator()");
        setState(392);
        match(TypeScriptParser::OpenBracket);
        setState(393);
        match(TypeScriptParser::CloseBracket); 
      }
      setState(398);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PredefinedTypeContext ------------------------------------------------------------------

TypeScriptParser::PredefinedTypeContext::PredefinedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::PredefinedTypeContext::Any() {
  return getToken(TypeScriptParser::Any, 0);
}

tree::TerminalNode* TypeScriptParser::PredefinedTypeContext::Number() {
  return getToken(TypeScriptParser::Number, 0);
}

tree::TerminalNode* TypeScriptParser::PredefinedTypeContext::Boolean() {
  return getToken(TypeScriptParser::Boolean, 0);
}

tree::TerminalNode* TypeScriptParser::PredefinedTypeContext::String() {
  return getToken(TypeScriptParser::String, 0);
}

tree::TerminalNode* TypeScriptParser::PredefinedTypeContext::Symbol() {
  return getToken(TypeScriptParser::Symbol, 0);
}

tree::TerminalNode* TypeScriptParser::PredefinedTypeContext::Void() {
  return getToken(TypeScriptParser::Void, 0);
}


size_t TypeScriptParser::PredefinedTypeContext::getRuleIndex() const {
  return TypeScriptParser::RulePredefinedType;
}

void TypeScriptParser::PredefinedTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredefinedType(this);
}

void TypeScriptParser::PredefinedTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredefinedType(this);
}


antlrcpp::Any TypeScriptParser::PredefinedTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitPredefinedType(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::PredefinedTypeContext* TypeScriptParser::predefinedType() {
  PredefinedTypeContext *_localctx = _tracker.createInstance<PredefinedTypeContext>(_ctx, getState());
  enterRule(_localctx, 24, TypeScriptParser::RulePredefinedType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(411);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypeScriptParser::Any: {
        enterOuterAlt(_localctx, 1);
        setState(399);
        match(TypeScriptParser::Any);
        dynamic_cast<PredefinedTypeContext *>(_localctx)->type =  "Any"; 
        break;
      }

      case TypeScriptParser::Number: {
        enterOuterAlt(_localctx, 2);
        setState(401);
        match(TypeScriptParser::Number);
        dynamic_cast<PredefinedTypeContext *>(_localctx)->type =  "Number"; 
        break;
      }

      case TypeScriptParser::Boolean: {
        enterOuterAlt(_localctx, 3);
        setState(403);
        match(TypeScriptParser::Boolean);
        dynamic_cast<PredefinedTypeContext *>(_localctx)->type =  "Boolean"; 
        break;
      }

      case TypeScriptParser::String: {
        enterOuterAlt(_localctx, 4);
        setState(405);
        match(TypeScriptParser::String);
        dynamic_cast<PredefinedTypeContext *>(_localctx)->type =  "String"; 
        break;
      }

      case TypeScriptParser::Symbol: {
        enterOuterAlt(_localctx, 5);
        setState(407);
        match(TypeScriptParser::Symbol);
        dynamic_cast<PredefinedTypeContext *>(_localctx)->type =  "Symbol"; 
        break;
      }

      case TypeScriptParser::Void: {
        enterOuterAlt(_localctx, 6);
        setState(409);
        match(TypeScriptParser::Void);
        dynamic_cast<PredefinedTypeContext *>(_localctx)->type =  "Void"; 
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeReferenceContext ------------------------------------------------------------------

TypeScriptParser::TypeReferenceContext::TypeReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::TypeNameContext* TypeScriptParser::TypeReferenceContext::typeName() {
  return getRuleContext<TypeScriptParser::TypeNameContext>(0);
}

TypeScriptParser::NestedTypeGenericContext* TypeScriptParser::TypeReferenceContext::nestedTypeGeneric() {
  return getRuleContext<TypeScriptParser::NestedTypeGenericContext>(0);
}


size_t TypeScriptParser::TypeReferenceContext::getRuleIndex() const {
  return TypeScriptParser::RuleTypeReference;
}

void TypeScriptParser::TypeReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeReference(this);
}

void TypeScriptParser::TypeReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeReference(this);
}


antlrcpp::Any TypeScriptParser::TypeReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTypeReference(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TypeReferenceContext* TypeScriptParser::typeReference() {
  TypeReferenceContext *_localctx = _tracker.createInstance<TypeReferenceContext>(_ctx, getState());
  enterRule(_localctx, 26, TypeScriptParser::RuleTypeReference);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(413);
    typeName();
    setState(415);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(414);
      nestedTypeGeneric();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NestedTypeGenericContext ------------------------------------------------------------------

TypeScriptParser::NestedTypeGenericContext::NestedTypeGenericContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::TypeIncludeGenericContext* TypeScriptParser::NestedTypeGenericContext::typeIncludeGeneric() {
  return getRuleContext<TypeScriptParser::TypeIncludeGenericContext>(0);
}

TypeScriptParser::TypeGenericContext* TypeScriptParser::NestedTypeGenericContext::typeGeneric() {
  return getRuleContext<TypeScriptParser::TypeGenericContext>(0);
}


size_t TypeScriptParser::NestedTypeGenericContext::getRuleIndex() const {
  return TypeScriptParser::RuleNestedTypeGeneric;
}

void TypeScriptParser::NestedTypeGenericContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNestedTypeGeneric(this);
}

void TypeScriptParser::NestedTypeGenericContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNestedTypeGeneric(this);
}


antlrcpp::Any TypeScriptParser::NestedTypeGenericContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitNestedTypeGeneric(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::NestedTypeGenericContext* TypeScriptParser::nestedTypeGeneric() {
  NestedTypeGenericContext *_localctx = _tracker.createInstance<NestedTypeGenericContext>(_ctx, getState());
  enterRule(_localctx, 28, TypeScriptParser::RuleNestedTypeGeneric);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(419);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(417);
      typeIncludeGeneric();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(418);
      typeGeneric();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeGenericContext ------------------------------------------------------------------

TypeScriptParser::TypeGenericContext::TypeGenericContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::TypeGenericContext::LessThan() {
  return getToken(TypeScriptParser::LessThan, 0);
}

TypeScriptParser::TypeArgumentListContext* TypeScriptParser::TypeGenericContext::typeArgumentList() {
  return getRuleContext<TypeScriptParser::TypeArgumentListContext>(0);
}

tree::TerminalNode* TypeScriptParser::TypeGenericContext::MoreThan() {
  return getToken(TypeScriptParser::MoreThan, 0);
}


size_t TypeScriptParser::TypeGenericContext::getRuleIndex() const {
  return TypeScriptParser::RuleTypeGeneric;
}

void TypeScriptParser::TypeGenericContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeGeneric(this);
}

void TypeScriptParser::TypeGenericContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeGeneric(this);
}


antlrcpp::Any TypeScriptParser::TypeGenericContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTypeGeneric(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TypeGenericContext* TypeScriptParser::typeGeneric() {
  TypeGenericContext *_localctx = _tracker.createInstance<TypeGenericContext>(_ctx, getState());
  enterRule(_localctx, 30, TypeScriptParser::RuleTypeGeneric);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(421);
    match(TypeScriptParser::LessThan);
    setState(422);
    typeArgumentList();
    setState(423);
    match(TypeScriptParser::MoreThan);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIncludeGenericContext ------------------------------------------------------------------

TypeScriptParser::TypeIncludeGenericContext::TypeIncludeGenericContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TypeScriptParser::TypeIncludeGenericContext::LessThan() {
  return getTokens(TypeScriptParser::LessThan);
}

tree::TerminalNode* TypeScriptParser::TypeIncludeGenericContext::LessThan(size_t i) {
  return getToken(TypeScriptParser::LessThan, i);
}

std::vector<TypeScriptParser::TypeArgumentListContext *> TypeScriptParser::TypeIncludeGenericContext::typeArgumentList() {
  return getRuleContexts<TypeScriptParser::TypeArgumentListContext>();
}

TypeScriptParser::TypeArgumentListContext* TypeScriptParser::TypeIncludeGenericContext::typeArgumentList(size_t i) {
  return getRuleContext<TypeScriptParser::TypeArgumentListContext>(i);
}

std::vector<tree::TerminalNode *> TypeScriptParser::TypeIncludeGenericContext::MoreThan() {
  return getTokens(TypeScriptParser::MoreThan);
}

tree::TerminalNode* TypeScriptParser::TypeIncludeGenericContext::MoreThan(size_t i) {
  return getToken(TypeScriptParser::MoreThan, i);
}

TypeScriptParser::BindingPatternContext* TypeScriptParser::TypeIncludeGenericContext::bindingPattern() {
  return getRuleContext<TypeScriptParser::BindingPatternContext>(0);
}

tree::TerminalNode* TypeScriptParser::TypeIncludeGenericContext::RightShiftArithmetic() {
  return getToken(TypeScriptParser::RightShiftArithmetic, 0);
}


size_t TypeScriptParser::TypeIncludeGenericContext::getRuleIndex() const {
  return TypeScriptParser::RuleTypeIncludeGeneric;
}

void TypeScriptParser::TypeIncludeGenericContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeIncludeGeneric(this);
}

void TypeScriptParser::TypeIncludeGenericContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeIncludeGeneric(this);
}


antlrcpp::Any TypeScriptParser::TypeIncludeGenericContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTypeIncludeGeneric(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TypeIncludeGenericContext* TypeScriptParser::typeIncludeGeneric() {
  TypeIncludeGenericContext *_localctx = _tracker.createInstance<TypeIncludeGenericContext>(_ctx, getState());
  enterRule(_localctx, 32, TypeScriptParser::RuleTypeIncludeGeneric);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(425);
    match(TypeScriptParser::LessThan);
    setState(426);
    typeArgumentList();
    setState(427);
    match(TypeScriptParser::LessThan);
    setState(428);
    typeArgumentList();
    setState(434);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypeScriptParser::MoreThan: {
        setState(429);
        match(TypeScriptParser::MoreThan);
        setState(430);
        bindingPattern();
        setState(431);
        match(TypeScriptParser::MoreThan);
        break;
      }

      case TypeScriptParser::RightShiftArithmetic: {
        setState(433);
        match(TypeScriptParser::RightShiftArithmetic);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameContext ------------------------------------------------------------------

TypeScriptParser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::TypeNameContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

TypeScriptParser::NamespaceNameContext* TypeScriptParser::TypeNameContext::namespaceName() {
  return getRuleContext<TypeScriptParser::NamespaceNameContext>(0);
}


size_t TypeScriptParser::TypeNameContext::getRuleIndex() const {
  return TypeScriptParser::RuleTypeName;
}

void TypeScriptParser::TypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeName(this);
}

void TypeScriptParser::TypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeName(this);
}


antlrcpp::Any TypeScriptParser::TypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTypeName(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TypeNameContext* TypeScriptParser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 34, TypeScriptParser::RuleTypeName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(438);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(436);
      match(TypeScriptParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(437);
      namespaceName();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectTypeContext ------------------------------------------------------------------

TypeScriptParser::ObjectTypeContext::ObjectTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::ObjectTypeContext::OpenBrace() {
  return getToken(TypeScriptParser::OpenBrace, 0);
}

tree::TerminalNode* TypeScriptParser::ObjectTypeContext::CloseBrace() {
  return getToken(TypeScriptParser::CloseBrace, 0);
}

TypeScriptParser::TypeBodyContext* TypeScriptParser::ObjectTypeContext::typeBody() {
  return getRuleContext<TypeScriptParser::TypeBodyContext>(0);
}


size_t TypeScriptParser::ObjectTypeContext::getRuleIndex() const {
  return TypeScriptParser::RuleObjectType;
}

void TypeScriptParser::ObjectTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectType(this);
}

void TypeScriptParser::ObjectTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectType(this);
}


antlrcpp::Any TypeScriptParser::ObjectTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitObjectType(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ObjectTypeContext* TypeScriptParser::objectType() {
  ObjectTypeContext *_localctx = _tracker.createInstance<ObjectTypeContext>(_ctx, getState());
  enterRule(_localctx, 36, TypeScriptParser::RuleObjectType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(440);
    match(TypeScriptParser::OpenBrace);
    setState(442);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypeScriptParser::OpenBracket)
      | (1ULL << TypeScriptParser::OpenParen)
      | (1ULL << TypeScriptParser::LessThan)
      | (1ULL << TypeScriptParser::NullLiteral)
      | (1ULL << TypeScriptParser::BooleanLiteral)
      | (1ULL << TypeScriptParser::DecimalLiteral)
      | (1ULL << TypeScriptParser::HexIntegerLiteral)
      | (1ULL << TypeScriptParser::OctalIntegerLiteral)
      | (1ULL << TypeScriptParser::OctalIntegerLiteral2)
      | (1ULL << TypeScriptParser::BinaryIntegerLiteral)
      | (1ULL << TypeScriptParser::Break)
      | (1ULL << TypeScriptParser::Do))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (TypeScriptParser::Instanceof - 64))
      | (1ULL << (TypeScriptParser::Typeof - 64))
      | (1ULL << (TypeScriptParser::Case - 64))
      | (1ULL << (TypeScriptParser::Else - 64))
      | (1ULL << (TypeScriptParser::New - 64))
      | (1ULL << (TypeScriptParser::Var - 64))
      | (1ULL << (TypeScriptParser::Catch - 64))
      | (1ULL << (TypeScriptParser::Finally - 64))
      | (1ULL << (TypeScriptParser::Return - 64))
      | (1ULL << (TypeScriptParser::Void - 64))
      | (1ULL << (TypeScriptParser::Continue - 64))
      | (1ULL << (TypeScriptParser::For - 64))
      | (1ULL << (TypeScriptParser::Switch - 64))
      | (1ULL << (TypeScriptParser::While - 64))
      | (1ULL << (TypeScriptParser::Debugger - 64))
      | (1ULL << (TypeScriptParser::Function_ - 64))
      | (1ULL << (TypeScriptParser::This - 64))
      | (1ULL << (TypeScriptParser::With - 64))
      | (1ULL << (TypeScriptParser::Default - 64))
      | (1ULL << (TypeScriptParser::If - 64))
      | (1ULL << (TypeScriptParser::Throw - 64))
      | (1ULL << (TypeScriptParser::Delete - 64))
      | (1ULL << (TypeScriptParser::In - 64))
      | (1ULL << (TypeScriptParser::Try - 64))
      | (1ULL << (TypeScriptParser::From - 64))
      | (1ULL << (TypeScriptParser::ReadOnly - 64))
      | (1ULL << (TypeScriptParser::Async - 64))
      | (1ULL << (TypeScriptParser::Class - 64))
      | (1ULL << (TypeScriptParser::Enum - 64))
      | (1ULL << (TypeScriptParser::Extends - 64))
      | (1ULL << (TypeScriptParser::Super - 64))
      | (1ULL << (TypeScriptParser::Const - 64))
      | (1ULL << (TypeScriptParser::Export - 64))
      | (1ULL << (TypeScriptParser::Import - 64))
      | (1ULL << (TypeScriptParser::Implements - 64))
      | (1ULL << (TypeScriptParser::Let - 64))
      | (1ULL << (TypeScriptParser::Private - 64))
      | (1ULL << (TypeScriptParser::Public - 64))
      | (1ULL << (TypeScriptParser::Interface - 64))
      | (1ULL << (TypeScriptParser::Package - 64))
      | (1ULL << (TypeScriptParser::Protected - 64))
      | (1ULL << (TypeScriptParser::Static - 64))
      | (1ULL << (TypeScriptParser::Yield - 64))
      | (1ULL << (TypeScriptParser::String - 64))
      | (1ULL << (TypeScriptParser::TypeAlias - 64))
      | (1ULL << (TypeScriptParser::Get - 64))
      | (1ULL << (TypeScriptParser::Set - 64))
      | (1ULL << (TypeScriptParser::Require - 64))
      | (1ULL << (TypeScriptParser::Identifier - 64))
      | (1ULL << (TypeScriptParser::StringLiteral - 64)))) != 0)) {
      setState(441);
      typeBody();
    }
    setState(444);
    match(TypeScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeBodyContext ------------------------------------------------------------------

TypeScriptParser::TypeBodyContext::TypeBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::TypeMemberListContext* TypeScriptParser::TypeBodyContext::typeMemberList() {
  return getRuleContext<TypeScriptParser::TypeMemberListContext>(0);
}

tree::TerminalNode* TypeScriptParser::TypeBodyContext::SemiColon() {
  return getToken(TypeScriptParser::SemiColon, 0);
}

tree::TerminalNode* TypeScriptParser::TypeBodyContext::Comma() {
  return getToken(TypeScriptParser::Comma, 0);
}


size_t TypeScriptParser::TypeBodyContext::getRuleIndex() const {
  return TypeScriptParser::RuleTypeBody;
}

void TypeScriptParser::TypeBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeBody(this);
}

void TypeScriptParser::TypeBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeBody(this);
}


antlrcpp::Any TypeScriptParser::TypeBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTypeBody(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TypeBodyContext* TypeScriptParser::typeBody() {
  TypeBodyContext *_localctx = _tracker.createInstance<TypeBodyContext>(_ctx, getState());
  enterRule(_localctx, 38, TypeScriptParser::RuleTypeBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(446);
    typeMemberList();
    setState(448);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::SemiColon

    || _la == TypeScriptParser::Comma) {
      setState(447);
      _la = _input->LA(1);
      if (!(_la == TypeScriptParser::SemiColon

      || _la == TypeScriptParser::Comma)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeMemberListContext ------------------------------------------------------------------

TypeScriptParser::TypeMemberListContext::TypeMemberListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypeScriptParser::TypeMemberContext *> TypeScriptParser::TypeMemberListContext::typeMember() {
  return getRuleContexts<TypeScriptParser::TypeMemberContext>();
}

TypeScriptParser::TypeMemberContext* TypeScriptParser::TypeMemberListContext::typeMember(size_t i) {
  return getRuleContext<TypeScriptParser::TypeMemberContext>(i);
}

std::vector<tree::TerminalNode *> TypeScriptParser::TypeMemberListContext::SemiColon() {
  return getTokens(TypeScriptParser::SemiColon);
}

tree::TerminalNode* TypeScriptParser::TypeMemberListContext::SemiColon(size_t i) {
  return getToken(TypeScriptParser::SemiColon, i);
}

std::vector<tree::TerminalNode *> TypeScriptParser::TypeMemberListContext::Comma() {
  return getTokens(TypeScriptParser::Comma);
}

tree::TerminalNode* TypeScriptParser::TypeMemberListContext::Comma(size_t i) {
  return getToken(TypeScriptParser::Comma, i);
}


size_t TypeScriptParser::TypeMemberListContext::getRuleIndex() const {
  return TypeScriptParser::RuleTypeMemberList;
}

void TypeScriptParser::TypeMemberListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeMemberList(this);
}

void TypeScriptParser::TypeMemberListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeMemberList(this);
}


antlrcpp::Any TypeScriptParser::TypeMemberListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTypeMemberList(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TypeMemberListContext* TypeScriptParser::typeMemberList() {
  TypeMemberListContext *_localctx = _tracker.createInstance<TypeMemberListContext>(_ctx, getState());
  enterRule(_localctx, 40, TypeScriptParser::RuleTypeMemberList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(450);
    typeMember();
    setState(455);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(451);
        _la = _input->LA(1);
        if (!(_la == TypeScriptParser::SemiColon

        || _la == TypeScriptParser::Comma)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(452);
        typeMember(); 
      }
      setState(457);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeMemberContext ------------------------------------------------------------------

TypeScriptParser::TypeMemberContext::TypeMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::PropertySignaturContext* TypeScriptParser::TypeMemberContext::propertySignatur() {
  return getRuleContext<TypeScriptParser::PropertySignaturContext>(0);
}

TypeScriptParser::CallSignatureContext* TypeScriptParser::TypeMemberContext::callSignature() {
  return getRuleContext<TypeScriptParser::CallSignatureContext>(0);
}

TypeScriptParser::ConstructSignatureContext* TypeScriptParser::TypeMemberContext::constructSignature() {
  return getRuleContext<TypeScriptParser::ConstructSignatureContext>(0);
}

TypeScriptParser::IndexSignatureContext* TypeScriptParser::TypeMemberContext::indexSignature() {
  return getRuleContext<TypeScriptParser::IndexSignatureContext>(0);
}

TypeScriptParser::MethodSignatureContext* TypeScriptParser::TypeMemberContext::methodSignature() {
  return getRuleContext<TypeScriptParser::MethodSignatureContext>(0);
}

tree::TerminalNode* TypeScriptParser::TypeMemberContext::ARROW() {
  return getToken(TypeScriptParser::ARROW, 0);
}

TypeScriptParser::Type_Context* TypeScriptParser::TypeMemberContext::type_() {
  return getRuleContext<TypeScriptParser::Type_Context>(0);
}


size_t TypeScriptParser::TypeMemberContext::getRuleIndex() const {
  return TypeScriptParser::RuleTypeMember;
}

void TypeScriptParser::TypeMemberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeMember(this);
}

void TypeScriptParser::TypeMemberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeMember(this);
}


antlrcpp::Any TypeScriptParser::TypeMemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTypeMember(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TypeMemberContext* TypeScriptParser::typeMember() {
  TypeMemberContext *_localctx = _tracker.createInstance<TypeMemberContext>(_ctx, getState());
  enterRule(_localctx, 42, TypeScriptParser::RuleTypeMember);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(467);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(458);
      propertySignatur();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(459);
      callSignature();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(460);
      constructSignature();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(461);
      indexSignature();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(462);
      methodSignature();
      setState(465);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypeScriptParser::ARROW) {
        setState(463);
        match(TypeScriptParser::ARROW);
        setState(464);
        type_();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayTypeContext ------------------------------------------------------------------

TypeScriptParser::ArrayTypeContext::ArrayTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::PrimaryTypeContext* TypeScriptParser::ArrayTypeContext::primaryType() {
  return getRuleContext<TypeScriptParser::PrimaryTypeContext>(0);
}

tree::TerminalNode* TypeScriptParser::ArrayTypeContext::OpenBracket() {
  return getToken(TypeScriptParser::OpenBracket, 0);
}

tree::TerminalNode* TypeScriptParser::ArrayTypeContext::CloseBracket() {
  return getToken(TypeScriptParser::CloseBracket, 0);
}


size_t TypeScriptParser::ArrayTypeContext::getRuleIndex() const {
  return TypeScriptParser::RuleArrayType;
}

void TypeScriptParser::ArrayTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayType(this);
}

void TypeScriptParser::ArrayTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayType(this);
}


antlrcpp::Any TypeScriptParser::ArrayTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitArrayType(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ArrayTypeContext* TypeScriptParser::arrayType() {
  ArrayTypeContext *_localctx = _tracker.createInstance<ArrayTypeContext>(_ctx, getState());
  enterRule(_localctx, 44, TypeScriptParser::RuleArrayType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(469);
    primaryType(0);
    setState(470);

    if (!(notLineTerminator())) throw FailedPredicateException(this, "notLineTerminator()");
    setState(471);
    match(TypeScriptParser::OpenBracket);
    setState(472);
    match(TypeScriptParser::CloseBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TupleTypeContext ------------------------------------------------------------------

TypeScriptParser::TupleTypeContext::TupleTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::TupleTypeContext::OpenBracket() {
  return getToken(TypeScriptParser::OpenBracket, 0);
}

TypeScriptParser::TupleElementTypesContext* TypeScriptParser::TupleTypeContext::tupleElementTypes() {
  return getRuleContext<TypeScriptParser::TupleElementTypesContext>(0);
}

tree::TerminalNode* TypeScriptParser::TupleTypeContext::CloseBracket() {
  return getToken(TypeScriptParser::CloseBracket, 0);
}


size_t TypeScriptParser::TupleTypeContext::getRuleIndex() const {
  return TypeScriptParser::RuleTupleType;
}

void TypeScriptParser::TupleTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTupleType(this);
}

void TypeScriptParser::TupleTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTupleType(this);
}


antlrcpp::Any TypeScriptParser::TupleTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTupleType(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TupleTypeContext* TypeScriptParser::tupleType() {
  TupleTypeContext *_localctx = _tracker.createInstance<TupleTypeContext>(_ctx, getState());
  enterRule(_localctx, 46, TypeScriptParser::RuleTupleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(474);
    match(TypeScriptParser::OpenBracket);
    setState(475);
    tupleElementTypes();
    setState(476);
    match(TypeScriptParser::CloseBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TupleElementTypesContext ------------------------------------------------------------------

TypeScriptParser::TupleElementTypesContext::TupleElementTypesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypeScriptParser::Type_Context *> TypeScriptParser::TupleElementTypesContext::type_() {
  return getRuleContexts<TypeScriptParser::Type_Context>();
}

TypeScriptParser::Type_Context* TypeScriptParser::TupleElementTypesContext::type_(size_t i) {
  return getRuleContext<TypeScriptParser::Type_Context>(i);
}

std::vector<tree::TerminalNode *> TypeScriptParser::TupleElementTypesContext::Comma() {
  return getTokens(TypeScriptParser::Comma);
}

tree::TerminalNode* TypeScriptParser::TupleElementTypesContext::Comma(size_t i) {
  return getToken(TypeScriptParser::Comma, i);
}


size_t TypeScriptParser::TupleElementTypesContext::getRuleIndex() const {
  return TypeScriptParser::RuleTupleElementTypes;
}

void TypeScriptParser::TupleElementTypesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTupleElementTypes(this);
}

void TypeScriptParser::TupleElementTypesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTupleElementTypes(this);
}


antlrcpp::Any TypeScriptParser::TupleElementTypesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTupleElementTypes(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TupleElementTypesContext* TypeScriptParser::tupleElementTypes() {
  TupleElementTypesContext *_localctx = _tracker.createInstance<TupleElementTypesContext>(_ctx, getState());
  enterRule(_localctx, 48, TypeScriptParser::RuleTupleElementTypes);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(478);
    type_();
    setState(483);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypeScriptParser::Comma) {
      setState(479);
      match(TypeScriptParser::Comma);
      setState(480);
      type_();
      setState(485);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionTypeContext ------------------------------------------------------------------

TypeScriptParser::FunctionTypeContext::FunctionTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::FunctionTypeContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

tree::TerminalNode* TypeScriptParser::FunctionTypeContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

tree::TerminalNode* TypeScriptParser::FunctionTypeContext::ARROW() {
  return getToken(TypeScriptParser::ARROW, 0);
}

TypeScriptParser::Type_Context* TypeScriptParser::FunctionTypeContext::type_() {
  return getRuleContext<TypeScriptParser::Type_Context>(0);
}

TypeScriptParser::TypeParametersContext* TypeScriptParser::FunctionTypeContext::typeParameters() {
  return getRuleContext<TypeScriptParser::TypeParametersContext>(0);
}

TypeScriptParser::ParameterListContext* TypeScriptParser::FunctionTypeContext::parameterList() {
  return getRuleContext<TypeScriptParser::ParameterListContext>(0);
}


size_t TypeScriptParser::FunctionTypeContext::getRuleIndex() const {
  return TypeScriptParser::RuleFunctionType;
}

void TypeScriptParser::FunctionTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionType(this);
}

void TypeScriptParser::FunctionTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionType(this);
}


antlrcpp::Any TypeScriptParser::FunctionTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitFunctionType(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::FunctionTypeContext* TypeScriptParser::functionType() {
  FunctionTypeContext *_localctx = _tracker.createInstance<FunctionTypeContext>(_ctx, getState());
  enterRule(_localctx, 50, TypeScriptParser::RuleFunctionType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(487);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::LessThan) {
      setState(486);
      typeParameters();
    }
    setState(489);
    match(TypeScriptParser::OpenParen);
    setState(491);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypeScriptParser::OpenBracket)
      | (1ULL << TypeScriptParser::OpenBrace)
      | (1ULL << TypeScriptParser::Ellipsis)
      | (1ULL << TypeScriptParser::NullLiteral)
      | (1ULL << TypeScriptParser::BooleanLiteral)
      | (1ULL << TypeScriptParser::Break)
      | (1ULL << TypeScriptParser::Do))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (TypeScriptParser::Instanceof - 64))
      | (1ULL << (TypeScriptParser::Typeof - 64))
      | (1ULL << (TypeScriptParser::Case - 64))
      | (1ULL << (TypeScriptParser::Else - 64))
      | (1ULL << (TypeScriptParser::New - 64))
      | (1ULL << (TypeScriptParser::Var - 64))
      | (1ULL << (TypeScriptParser::Catch - 64))
      | (1ULL << (TypeScriptParser::Finally - 64))
      | (1ULL << (TypeScriptParser::Return - 64))
      | (1ULL << (TypeScriptParser::Void - 64))
      | (1ULL << (TypeScriptParser::Continue - 64))
      | (1ULL << (TypeScriptParser::For - 64))
      | (1ULL << (TypeScriptParser::Switch - 64))
      | (1ULL << (TypeScriptParser::While - 64))
      | (1ULL << (TypeScriptParser::Debugger - 64))
      | (1ULL << (TypeScriptParser::Function_ - 64))
      | (1ULL << (TypeScriptParser::This - 64))
      | (1ULL << (TypeScriptParser::With - 64))
      | (1ULL << (TypeScriptParser::Default - 64))
      | (1ULL << (TypeScriptParser::If - 64))
      | (1ULL << (TypeScriptParser::Throw - 64))
      | (1ULL << (TypeScriptParser::Delete - 64))
      | (1ULL << (TypeScriptParser::In - 64))
      | (1ULL << (TypeScriptParser::Try - 64))
      | (1ULL << (TypeScriptParser::From - 64))
      | (1ULL << (TypeScriptParser::ReadOnly - 64))
      | (1ULL << (TypeScriptParser::Async - 64))
      | (1ULL << (TypeScriptParser::Class - 64))
      | (1ULL << (TypeScriptParser::Enum - 64))
      | (1ULL << (TypeScriptParser::Extends - 64))
      | (1ULL << (TypeScriptParser::Super - 64))
      | (1ULL << (TypeScriptParser::Const - 64))
      | (1ULL << (TypeScriptParser::Export - 64))
      | (1ULL << (TypeScriptParser::Import - 64))
      | (1ULL << (TypeScriptParser::Implements - 64))
      | (1ULL << (TypeScriptParser::Let - 64))
      | (1ULL << (TypeScriptParser::Private - 64))
      | (1ULL << (TypeScriptParser::Public - 64))
      | (1ULL << (TypeScriptParser::Interface - 64))
      | (1ULL << (TypeScriptParser::Package - 64))
      | (1ULL << (TypeScriptParser::Protected - 64))
      | (1ULL << (TypeScriptParser::Static - 64))
      | (1ULL << (TypeScriptParser::Yield - 64))
      | (1ULL << (TypeScriptParser::String - 64))
      | (1ULL << (TypeScriptParser::TypeAlias - 64))
      | (1ULL << (TypeScriptParser::Get - 64))
      | (1ULL << (TypeScriptParser::Set - 64))
      | (1ULL << (TypeScriptParser::Require - 64))
      | (1ULL << (TypeScriptParser::At - 64))
      | (1ULL << (TypeScriptParser::Identifier - 64)))) != 0)) {
      setState(490);
      parameterList();
    }
    setState(493);
    match(TypeScriptParser::CloseParen);
    setState(494);
    match(TypeScriptParser::ARROW);
    setState(495);
    type_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorTypeContext ------------------------------------------------------------------

TypeScriptParser::ConstructorTypeContext::ConstructorTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::ConstructorTypeContext::New() {
  return getToken(TypeScriptParser::New, 0);
}

tree::TerminalNode* TypeScriptParser::ConstructorTypeContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

tree::TerminalNode* TypeScriptParser::ConstructorTypeContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

tree::TerminalNode* TypeScriptParser::ConstructorTypeContext::ARROW() {
  return getToken(TypeScriptParser::ARROW, 0);
}

TypeScriptParser::Type_Context* TypeScriptParser::ConstructorTypeContext::type_() {
  return getRuleContext<TypeScriptParser::Type_Context>(0);
}

TypeScriptParser::TypeParametersContext* TypeScriptParser::ConstructorTypeContext::typeParameters() {
  return getRuleContext<TypeScriptParser::TypeParametersContext>(0);
}

TypeScriptParser::ParameterListContext* TypeScriptParser::ConstructorTypeContext::parameterList() {
  return getRuleContext<TypeScriptParser::ParameterListContext>(0);
}


size_t TypeScriptParser::ConstructorTypeContext::getRuleIndex() const {
  return TypeScriptParser::RuleConstructorType;
}

void TypeScriptParser::ConstructorTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorType(this);
}

void TypeScriptParser::ConstructorTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorType(this);
}


antlrcpp::Any TypeScriptParser::ConstructorTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitConstructorType(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ConstructorTypeContext* TypeScriptParser::constructorType() {
  ConstructorTypeContext *_localctx = _tracker.createInstance<ConstructorTypeContext>(_ctx, getState());
  enterRule(_localctx, 52, TypeScriptParser::RuleConstructorType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(497);
    match(TypeScriptParser::New);
    setState(499);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::LessThan) {
      setState(498);
      typeParameters();
    }
    setState(501);
    match(TypeScriptParser::OpenParen);
    setState(503);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypeScriptParser::OpenBracket)
      | (1ULL << TypeScriptParser::OpenBrace)
      | (1ULL << TypeScriptParser::Ellipsis)
      | (1ULL << TypeScriptParser::NullLiteral)
      | (1ULL << TypeScriptParser::BooleanLiteral)
      | (1ULL << TypeScriptParser::Break)
      | (1ULL << TypeScriptParser::Do))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (TypeScriptParser::Instanceof - 64))
      | (1ULL << (TypeScriptParser::Typeof - 64))
      | (1ULL << (TypeScriptParser::Case - 64))
      | (1ULL << (TypeScriptParser::Else - 64))
      | (1ULL << (TypeScriptParser::New - 64))
      | (1ULL << (TypeScriptParser::Var - 64))
      | (1ULL << (TypeScriptParser::Catch - 64))
      | (1ULL << (TypeScriptParser::Finally - 64))
      | (1ULL << (TypeScriptParser::Return - 64))
      | (1ULL << (TypeScriptParser::Void - 64))
      | (1ULL << (TypeScriptParser::Continue - 64))
      | (1ULL << (TypeScriptParser::For - 64))
      | (1ULL << (TypeScriptParser::Switch - 64))
      | (1ULL << (TypeScriptParser::While - 64))
      | (1ULL << (TypeScriptParser::Debugger - 64))
      | (1ULL << (TypeScriptParser::Function_ - 64))
      | (1ULL << (TypeScriptParser::This - 64))
      | (1ULL << (TypeScriptParser::With - 64))
      | (1ULL << (TypeScriptParser::Default - 64))
      | (1ULL << (TypeScriptParser::If - 64))
      | (1ULL << (TypeScriptParser::Throw - 64))
      | (1ULL << (TypeScriptParser::Delete - 64))
      | (1ULL << (TypeScriptParser::In - 64))
      | (1ULL << (TypeScriptParser::Try - 64))
      | (1ULL << (TypeScriptParser::From - 64))
      | (1ULL << (TypeScriptParser::ReadOnly - 64))
      | (1ULL << (TypeScriptParser::Async - 64))
      | (1ULL << (TypeScriptParser::Class - 64))
      | (1ULL << (TypeScriptParser::Enum - 64))
      | (1ULL << (TypeScriptParser::Extends - 64))
      | (1ULL << (TypeScriptParser::Super - 64))
      | (1ULL << (TypeScriptParser::Const - 64))
      | (1ULL << (TypeScriptParser::Export - 64))
      | (1ULL << (TypeScriptParser::Import - 64))
      | (1ULL << (TypeScriptParser::Implements - 64))
      | (1ULL << (TypeScriptParser::Let - 64))
      | (1ULL << (TypeScriptParser::Private - 64))
      | (1ULL << (TypeScriptParser::Public - 64))
      | (1ULL << (TypeScriptParser::Interface - 64))
      | (1ULL << (TypeScriptParser::Package - 64))
      | (1ULL << (TypeScriptParser::Protected - 64))
      | (1ULL << (TypeScriptParser::Static - 64))
      | (1ULL << (TypeScriptParser::Yield - 64))
      | (1ULL << (TypeScriptParser::String - 64))
      | (1ULL << (TypeScriptParser::TypeAlias - 64))
      | (1ULL << (TypeScriptParser::Get - 64))
      | (1ULL << (TypeScriptParser::Set - 64))
      | (1ULL << (TypeScriptParser::Require - 64))
      | (1ULL << (TypeScriptParser::At - 64))
      | (1ULL << (TypeScriptParser::Identifier - 64)))) != 0)) {
      setState(502);
      parameterList();
    }
    setState(505);
    match(TypeScriptParser::CloseParen);
    setState(506);
    match(TypeScriptParser::ARROW);
    setState(507);
    type_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeQueryContext ------------------------------------------------------------------

TypeScriptParser::TypeQueryContext::TypeQueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::TypeQueryContext::Typeof() {
  return getToken(TypeScriptParser::Typeof, 0);
}

TypeScriptParser::TypeQueryExpressionContext* TypeScriptParser::TypeQueryContext::typeQueryExpression() {
  return getRuleContext<TypeScriptParser::TypeQueryExpressionContext>(0);
}


size_t TypeScriptParser::TypeQueryContext::getRuleIndex() const {
  return TypeScriptParser::RuleTypeQuery;
}

void TypeScriptParser::TypeQueryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeQuery(this);
}

void TypeScriptParser::TypeQueryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeQuery(this);
}


antlrcpp::Any TypeScriptParser::TypeQueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTypeQuery(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TypeQueryContext* TypeScriptParser::typeQuery() {
  TypeQueryContext *_localctx = _tracker.createInstance<TypeQueryContext>(_ctx, getState());
  enterRule(_localctx, 54, TypeScriptParser::RuleTypeQuery);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(509);
    match(TypeScriptParser::Typeof);
    setState(510);
    typeQueryExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeQueryExpressionContext ------------------------------------------------------------------

TypeScriptParser::TypeQueryExpressionContext::TypeQueryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::TypeQueryExpressionContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

std::vector<TypeScriptParser::IdentifierNameContext *> TypeScriptParser::TypeQueryExpressionContext::identifierName() {
  return getRuleContexts<TypeScriptParser::IdentifierNameContext>();
}

TypeScriptParser::IdentifierNameContext* TypeScriptParser::TypeQueryExpressionContext::identifierName(size_t i) {
  return getRuleContext<TypeScriptParser::IdentifierNameContext>(i);
}

std::vector<tree::TerminalNode *> TypeScriptParser::TypeQueryExpressionContext::Dot() {
  return getTokens(TypeScriptParser::Dot);
}

tree::TerminalNode* TypeScriptParser::TypeQueryExpressionContext::Dot(size_t i) {
  return getToken(TypeScriptParser::Dot, i);
}


size_t TypeScriptParser::TypeQueryExpressionContext::getRuleIndex() const {
  return TypeScriptParser::RuleTypeQueryExpression;
}

void TypeScriptParser::TypeQueryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeQueryExpression(this);
}

void TypeScriptParser::TypeQueryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeQueryExpression(this);
}


antlrcpp::Any TypeScriptParser::TypeQueryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTypeQueryExpression(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TypeQueryExpressionContext* TypeScriptParser::typeQueryExpression() {
  TypeQueryExpressionContext *_localctx = _tracker.createInstance<TypeQueryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 56, TypeScriptParser::RuleTypeQueryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(522);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(512);
      match(TypeScriptParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(516); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(513);
                identifierName();
                setState(514);
                match(TypeScriptParser::Dot);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(518); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(520);
      identifierName();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertySignaturContext ------------------------------------------------------------------

TypeScriptParser::PropertySignaturContext::PropertySignaturContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::PropertyNameContext* TypeScriptParser::PropertySignaturContext::propertyName() {
  return getRuleContext<TypeScriptParser::PropertyNameContext>(0);
}

tree::TerminalNode* TypeScriptParser::PropertySignaturContext::ReadOnly() {
  return getToken(TypeScriptParser::ReadOnly, 0);
}

tree::TerminalNode* TypeScriptParser::PropertySignaturContext::QuestionMark() {
  return getToken(TypeScriptParser::QuestionMark, 0);
}

TypeScriptParser::TypeAnnotationContext* TypeScriptParser::PropertySignaturContext::typeAnnotation() {
  return getRuleContext<TypeScriptParser::TypeAnnotationContext>(0);
}

tree::TerminalNode* TypeScriptParser::PropertySignaturContext::ARROW() {
  return getToken(TypeScriptParser::ARROW, 0);
}

TypeScriptParser::Type_Context* TypeScriptParser::PropertySignaturContext::type_() {
  return getRuleContext<TypeScriptParser::Type_Context>(0);
}


size_t TypeScriptParser::PropertySignaturContext::getRuleIndex() const {
  return TypeScriptParser::RulePropertySignatur;
}

void TypeScriptParser::PropertySignaturContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertySignatur(this);
}

void TypeScriptParser::PropertySignaturContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertySignatur(this);
}


antlrcpp::Any TypeScriptParser::PropertySignaturContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitPropertySignatur(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::PropertySignaturContext* TypeScriptParser::propertySignatur() {
  PropertySignaturContext *_localctx = _tracker.createInstance<PropertySignaturContext>(_ctx, getState());
  enterRule(_localctx, 58, TypeScriptParser::RulePropertySignatur);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(525);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      setState(524);
      match(TypeScriptParser::ReadOnly);
      break;
    }

    default:
      break;
    }
    setState(527);
    propertyName();
    setState(529);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::QuestionMark) {
      setState(528);
      match(TypeScriptParser::QuestionMark);
    }
    setState(532);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Colon) {
      setState(531);
      typeAnnotation();
    }
    setState(536);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::ARROW) {
      setState(534);
      match(TypeScriptParser::ARROW);
      setState(535);
      type_();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeAnnotationContext ------------------------------------------------------------------

TypeScriptParser::TypeAnnotationContext::TypeAnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::TypeAnnotationContext::Colon() {
  return getToken(TypeScriptParser::Colon, 0);
}

TypeScriptParser::Type_Context* TypeScriptParser::TypeAnnotationContext::type_() {
  return getRuleContext<TypeScriptParser::Type_Context>(0);
}


size_t TypeScriptParser::TypeAnnotationContext::getRuleIndex() const {
  return TypeScriptParser::RuleTypeAnnotation;
}

void TypeScriptParser::TypeAnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeAnnotation(this);
}

void TypeScriptParser::TypeAnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeAnnotation(this);
}


antlrcpp::Any TypeScriptParser::TypeAnnotationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTypeAnnotation(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TypeAnnotationContext* TypeScriptParser::typeAnnotation() {
  TypeAnnotationContext *_localctx = _tracker.createInstance<TypeAnnotationContext>(_ctx, getState());
  enterRule(_localctx, 60, TypeScriptParser::RuleTypeAnnotation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(538);
    match(TypeScriptParser::Colon);
    setState(539);
    type_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallSignatureContext ------------------------------------------------------------------

TypeScriptParser::CallSignatureContext::CallSignatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::CallSignatureContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

tree::TerminalNode* TypeScriptParser::CallSignatureContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

TypeScriptParser::TypeParametersContext* TypeScriptParser::CallSignatureContext::typeParameters() {
  return getRuleContext<TypeScriptParser::TypeParametersContext>(0);
}

TypeScriptParser::ParameterListContext* TypeScriptParser::CallSignatureContext::parameterList() {
  return getRuleContext<TypeScriptParser::ParameterListContext>(0);
}

TypeScriptParser::TypeAnnotationContext* TypeScriptParser::CallSignatureContext::typeAnnotation() {
  return getRuleContext<TypeScriptParser::TypeAnnotationContext>(0);
}


size_t TypeScriptParser::CallSignatureContext::getRuleIndex() const {
  return TypeScriptParser::RuleCallSignature;
}

void TypeScriptParser::CallSignatureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallSignature(this);
}

void TypeScriptParser::CallSignatureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallSignature(this);
}


antlrcpp::Any TypeScriptParser::CallSignatureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitCallSignature(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::CallSignatureContext* TypeScriptParser::callSignature() {
  CallSignatureContext *_localctx = _tracker.createInstance<CallSignatureContext>(_ctx, getState());
  enterRule(_localctx, 62, TypeScriptParser::RuleCallSignature);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(542);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::LessThan) {
      setState(541);
      typeParameters();
    }
    setState(544);
    match(TypeScriptParser::OpenParen);
    setState(546);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypeScriptParser::OpenBracket)
      | (1ULL << TypeScriptParser::OpenBrace)
      | (1ULL << TypeScriptParser::Ellipsis)
      | (1ULL << TypeScriptParser::NullLiteral)
      | (1ULL << TypeScriptParser::BooleanLiteral)
      | (1ULL << TypeScriptParser::Break)
      | (1ULL << TypeScriptParser::Do))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (TypeScriptParser::Instanceof - 64))
      | (1ULL << (TypeScriptParser::Typeof - 64))
      | (1ULL << (TypeScriptParser::Case - 64))
      | (1ULL << (TypeScriptParser::Else - 64))
      | (1ULL << (TypeScriptParser::New - 64))
      | (1ULL << (TypeScriptParser::Var - 64))
      | (1ULL << (TypeScriptParser::Catch - 64))
      | (1ULL << (TypeScriptParser::Finally - 64))
      | (1ULL << (TypeScriptParser::Return - 64))
      | (1ULL << (TypeScriptParser::Void - 64))
      | (1ULL << (TypeScriptParser::Continue - 64))
      | (1ULL << (TypeScriptParser::For - 64))
      | (1ULL << (TypeScriptParser::Switch - 64))
      | (1ULL << (TypeScriptParser::While - 64))
      | (1ULL << (TypeScriptParser::Debugger - 64))
      | (1ULL << (TypeScriptParser::Function_ - 64))
      | (1ULL << (TypeScriptParser::This - 64))
      | (1ULL << (TypeScriptParser::With - 64))
      | (1ULL << (TypeScriptParser::Default - 64))
      | (1ULL << (TypeScriptParser::If - 64))
      | (1ULL << (TypeScriptParser::Throw - 64))
      | (1ULL << (TypeScriptParser::Delete - 64))
      | (1ULL << (TypeScriptParser::In - 64))
      | (1ULL << (TypeScriptParser::Try - 64))
      | (1ULL << (TypeScriptParser::From - 64))
      | (1ULL << (TypeScriptParser::ReadOnly - 64))
      | (1ULL << (TypeScriptParser::Async - 64))
      | (1ULL << (TypeScriptParser::Class - 64))
      | (1ULL << (TypeScriptParser::Enum - 64))
      | (1ULL << (TypeScriptParser::Extends - 64))
      | (1ULL << (TypeScriptParser::Super - 64))
      | (1ULL << (TypeScriptParser::Const - 64))
      | (1ULL << (TypeScriptParser::Export - 64))
      | (1ULL << (TypeScriptParser::Import - 64))
      | (1ULL << (TypeScriptParser::Implements - 64))
      | (1ULL << (TypeScriptParser::Let - 64))
      | (1ULL << (TypeScriptParser::Private - 64))
      | (1ULL << (TypeScriptParser::Public - 64))
      | (1ULL << (TypeScriptParser::Interface - 64))
      | (1ULL << (TypeScriptParser::Package - 64))
      | (1ULL << (TypeScriptParser::Protected - 64))
      | (1ULL << (TypeScriptParser::Static - 64))
      | (1ULL << (TypeScriptParser::Yield - 64))
      | (1ULL << (TypeScriptParser::String - 64))
      | (1ULL << (TypeScriptParser::TypeAlias - 64))
      | (1ULL << (TypeScriptParser::Get - 64))
      | (1ULL << (TypeScriptParser::Set - 64))
      | (1ULL << (TypeScriptParser::Require - 64))
      | (1ULL << (TypeScriptParser::At - 64))
      | (1ULL << (TypeScriptParser::Identifier - 64)))) != 0)) {
      setState(545);
      dynamic_cast<CallSignatureContext *>(_localctx)->params = parameterList();
    }
    setState(548);
    match(TypeScriptParser::CloseParen);
    setState(550);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      setState(549);
      dynamic_cast<CallSignatureContext *>(_localctx)->retType = typeAnnotation();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

TypeScriptParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::RestParameterContext* TypeScriptParser::ParameterListContext::restParameter() {
  return getRuleContext<TypeScriptParser::RestParameterContext>(0);
}

std::vector<TypeScriptParser::ParameterContext *> TypeScriptParser::ParameterListContext::parameter() {
  return getRuleContexts<TypeScriptParser::ParameterContext>();
}

TypeScriptParser::ParameterContext* TypeScriptParser::ParameterListContext::parameter(size_t i) {
  return getRuleContext<TypeScriptParser::ParameterContext>(i);
}

std::vector<tree::TerminalNode *> TypeScriptParser::ParameterListContext::Comma() {
  return getTokens(TypeScriptParser::Comma);
}

tree::TerminalNode* TypeScriptParser::ParameterListContext::Comma(size_t i) {
  return getToken(TypeScriptParser::Comma, i);
}


size_t TypeScriptParser::ParameterListContext::getRuleIndex() const {
  return TypeScriptParser::RuleParameterList;
}

void TypeScriptParser::ParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList(this);
}

void TypeScriptParser::ParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList(this);
}


antlrcpp::Any TypeScriptParser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ParameterListContext* TypeScriptParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 64, TypeScriptParser::RuleParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(565);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypeScriptParser::Ellipsis: {
        enterOuterAlt(_localctx, 1);
        setState(552);
        restParameter();
        break;
      }

      case TypeScriptParser::OpenBracket:
      case TypeScriptParser::OpenBrace:
      case TypeScriptParser::NullLiteral:
      case TypeScriptParser::BooleanLiteral:
      case TypeScriptParser::Break:
      case TypeScriptParser::Do:
      case TypeScriptParser::Instanceof:
      case TypeScriptParser::Typeof:
      case TypeScriptParser::Case:
      case TypeScriptParser::Else:
      case TypeScriptParser::New:
      case TypeScriptParser::Var:
      case TypeScriptParser::Catch:
      case TypeScriptParser::Finally:
      case TypeScriptParser::Return:
      case TypeScriptParser::Void:
      case TypeScriptParser::Continue:
      case TypeScriptParser::For:
      case TypeScriptParser::Switch:
      case TypeScriptParser::While:
      case TypeScriptParser::Debugger:
      case TypeScriptParser::Function_:
      case TypeScriptParser::This:
      case TypeScriptParser::With:
      case TypeScriptParser::Default:
      case TypeScriptParser::If:
      case TypeScriptParser::Throw:
      case TypeScriptParser::Delete:
      case TypeScriptParser::In:
      case TypeScriptParser::Try:
      case TypeScriptParser::From:
      case TypeScriptParser::ReadOnly:
      case TypeScriptParser::Async:
      case TypeScriptParser::Class:
      case TypeScriptParser::Enum:
      case TypeScriptParser::Extends:
      case TypeScriptParser::Super:
      case TypeScriptParser::Const:
      case TypeScriptParser::Export:
      case TypeScriptParser::Import:
      case TypeScriptParser::Implements:
      case TypeScriptParser::Let:
      case TypeScriptParser::Private:
      case TypeScriptParser::Public:
      case TypeScriptParser::Interface:
      case TypeScriptParser::Package:
      case TypeScriptParser::Protected:
      case TypeScriptParser::Static:
      case TypeScriptParser::Yield:
      case TypeScriptParser::String:
      case TypeScriptParser::TypeAlias:
      case TypeScriptParser::Get:
      case TypeScriptParser::Set:
      case TypeScriptParser::Require:
      case TypeScriptParser::At:
      case TypeScriptParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(553);
        parameter();
        setState(558);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(554);
            match(TypeScriptParser::Comma);
            setState(555);
            parameter(); 
          }
          setState(560);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
        }
        setState(563);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypeScriptParser::Comma) {
          setState(561);
          match(TypeScriptParser::Comma);
          setState(562);
          restParameter();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RequiredParameterListContext ------------------------------------------------------------------

TypeScriptParser::RequiredParameterListContext::RequiredParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypeScriptParser::RequiredParameterContext *> TypeScriptParser::RequiredParameterListContext::requiredParameter() {
  return getRuleContexts<TypeScriptParser::RequiredParameterContext>();
}

TypeScriptParser::RequiredParameterContext* TypeScriptParser::RequiredParameterListContext::requiredParameter(size_t i) {
  return getRuleContext<TypeScriptParser::RequiredParameterContext>(i);
}

std::vector<tree::TerminalNode *> TypeScriptParser::RequiredParameterListContext::Comma() {
  return getTokens(TypeScriptParser::Comma);
}

tree::TerminalNode* TypeScriptParser::RequiredParameterListContext::Comma(size_t i) {
  return getToken(TypeScriptParser::Comma, i);
}


size_t TypeScriptParser::RequiredParameterListContext::getRuleIndex() const {
  return TypeScriptParser::RuleRequiredParameterList;
}

void TypeScriptParser::RequiredParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRequiredParameterList(this);
}

void TypeScriptParser::RequiredParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRequiredParameterList(this);
}


antlrcpp::Any TypeScriptParser::RequiredParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitRequiredParameterList(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::RequiredParameterListContext* TypeScriptParser::requiredParameterList() {
  RequiredParameterListContext *_localctx = _tracker.createInstance<RequiredParameterListContext>(_ctx, getState());
  enterRule(_localctx, 66, TypeScriptParser::RuleRequiredParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(567);
    requiredParameter();
    setState(572);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypeScriptParser::Comma) {
      setState(568);
      match(TypeScriptParser::Comma);
      setState(569);
      requiredParameter();
      setState(574);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

TypeScriptParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::RequiredParameterContext* TypeScriptParser::ParameterContext::requiredParameter() {
  return getRuleContext<TypeScriptParser::RequiredParameterContext>(0);
}

TypeScriptParser::OptionalParameterContext* TypeScriptParser::ParameterContext::optionalParameter() {
  return getRuleContext<TypeScriptParser::OptionalParameterContext>(0);
}


size_t TypeScriptParser::ParameterContext::getRuleIndex() const {
  return TypeScriptParser::RuleParameter;
}

void TypeScriptParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void TypeScriptParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}


antlrcpp::Any TypeScriptParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ParameterContext* TypeScriptParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 68, TypeScriptParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(577);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(575);
      requiredParameter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(576);
      optionalParameter();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionalParameterContext ------------------------------------------------------------------

TypeScriptParser::OptionalParameterContext::OptionalParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::IdentifierOrPatternContext* TypeScriptParser::OptionalParameterContext::identifierOrPattern() {
  return getRuleContext<TypeScriptParser::IdentifierOrPatternContext>(0);
}

TypeScriptParser::DecoratorListContext* TypeScriptParser::OptionalParameterContext::decoratorList() {
  return getRuleContext<TypeScriptParser::DecoratorListContext>(0);
}

tree::TerminalNode* TypeScriptParser::OptionalParameterContext::QuestionMark() {
  return getToken(TypeScriptParser::QuestionMark, 0);
}

TypeScriptParser::InitializerContext* TypeScriptParser::OptionalParameterContext::initializer() {
  return getRuleContext<TypeScriptParser::InitializerContext>(0);
}

TypeScriptParser::AccessibilityModifierContext* TypeScriptParser::OptionalParameterContext::accessibilityModifier() {
  return getRuleContext<TypeScriptParser::AccessibilityModifierContext>(0);
}

TypeScriptParser::TypeAnnotationContext* TypeScriptParser::OptionalParameterContext::typeAnnotation() {
  return getRuleContext<TypeScriptParser::TypeAnnotationContext>(0);
}


size_t TypeScriptParser::OptionalParameterContext::getRuleIndex() const {
  return TypeScriptParser::RuleOptionalParameter;
}

void TypeScriptParser::OptionalParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptionalParameter(this);
}

void TypeScriptParser::OptionalParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptionalParameter(this);
}


antlrcpp::Any TypeScriptParser::OptionalParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitOptionalParameter(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::OptionalParameterContext* TypeScriptParser::optionalParameter() {
  OptionalParameterContext *_localctx = _tracker.createInstance<OptionalParameterContext>(_ctx, getState());
  enterRule(_localctx, 70, TypeScriptParser::RuleOptionalParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(580);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::At) {
      setState(579);
      decoratorList();
    }

    setState(583);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      setState(582);
      accessibilityModifier();
      break;
    }

    default:
      break;
    }
    setState(585);
    identifierOrPattern();
    setState(594);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypeScriptParser::QuestionMark: {
        setState(586);
        match(TypeScriptParser::QuestionMark);
        setState(588);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypeScriptParser::Colon) {
          setState(587);
          typeAnnotation();
        }
        break;
      }

      case TypeScriptParser::Assign:
      case TypeScriptParser::Colon: {
        setState(591);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypeScriptParser::Colon) {
          setState(590);
          typeAnnotation();
        }
        setState(593);
        initializer();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RestParameterContext ------------------------------------------------------------------

TypeScriptParser::RestParameterContext::RestParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::RestParameterContext::Ellipsis() {
  return getToken(TypeScriptParser::Ellipsis, 0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::RestParameterContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

TypeScriptParser::TypeAnnotationContext* TypeScriptParser::RestParameterContext::typeAnnotation() {
  return getRuleContext<TypeScriptParser::TypeAnnotationContext>(0);
}


size_t TypeScriptParser::RestParameterContext::getRuleIndex() const {
  return TypeScriptParser::RuleRestParameter;
}

void TypeScriptParser::RestParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRestParameter(this);
}

void TypeScriptParser::RestParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRestParameter(this);
}


antlrcpp::Any TypeScriptParser::RestParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitRestParameter(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::RestParameterContext* TypeScriptParser::restParameter() {
  RestParameterContext *_localctx = _tracker.createInstance<RestParameterContext>(_ctx, getState());
  enterRule(_localctx, 72, TypeScriptParser::RuleRestParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(596);
    match(TypeScriptParser::Ellipsis);
    setState(597);
    expression(0);
    setState(599);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Colon) {
      setState(598);
      typeAnnotation();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RequiredParameterContext ------------------------------------------------------------------

TypeScriptParser::RequiredParameterContext::RequiredParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::IdentifierOrPatternContext* TypeScriptParser::RequiredParameterContext::identifierOrPattern() {
  return getRuleContext<TypeScriptParser::IdentifierOrPatternContext>(0);
}

TypeScriptParser::DecoratorListContext* TypeScriptParser::RequiredParameterContext::decoratorList() {
  return getRuleContext<TypeScriptParser::DecoratorListContext>(0);
}

TypeScriptParser::AccessibilityModifierContext* TypeScriptParser::RequiredParameterContext::accessibilityModifier() {
  return getRuleContext<TypeScriptParser::AccessibilityModifierContext>(0);
}

TypeScriptParser::TypeAnnotationContext* TypeScriptParser::RequiredParameterContext::typeAnnotation() {
  return getRuleContext<TypeScriptParser::TypeAnnotationContext>(0);
}


size_t TypeScriptParser::RequiredParameterContext::getRuleIndex() const {
  return TypeScriptParser::RuleRequiredParameter;
}

void TypeScriptParser::RequiredParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRequiredParameter(this);
}

void TypeScriptParser::RequiredParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRequiredParameter(this);
}


antlrcpp::Any TypeScriptParser::RequiredParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitRequiredParameter(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::RequiredParameterContext* TypeScriptParser::requiredParameter() {
  RequiredParameterContext *_localctx = _tracker.createInstance<RequiredParameterContext>(_ctx, getState());
  enterRule(_localctx, 74, TypeScriptParser::RuleRequiredParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(602);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::At) {
      setState(601);
      decoratorList();
    }
    setState(605);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      setState(604);
      accessibilityModifier();
      break;
    }

    default:
      break;
    }
    setState(607);
    identifierOrPattern();
    setState(609);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Colon) {
      setState(608);
      typeAnnotation();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessibilityModifierContext ------------------------------------------------------------------

TypeScriptParser::AccessibilityModifierContext::AccessibilityModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::AccessibilityModifierContext::Public() {
  return getToken(TypeScriptParser::Public, 0);
}

tree::TerminalNode* TypeScriptParser::AccessibilityModifierContext::Private() {
  return getToken(TypeScriptParser::Private, 0);
}

tree::TerminalNode* TypeScriptParser::AccessibilityModifierContext::Protected() {
  return getToken(TypeScriptParser::Protected, 0);
}


size_t TypeScriptParser::AccessibilityModifierContext::getRuleIndex() const {
  return TypeScriptParser::RuleAccessibilityModifier;
}

void TypeScriptParser::AccessibilityModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessibilityModifier(this);
}

void TypeScriptParser::AccessibilityModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessibilityModifier(this);
}


antlrcpp::Any TypeScriptParser::AccessibilityModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitAccessibilityModifier(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::AccessibilityModifierContext* TypeScriptParser::accessibilityModifier() {
  AccessibilityModifierContext *_localctx = _tracker.createInstance<AccessibilityModifierContext>(_ctx, getState());
  enterRule(_localctx, 76, TypeScriptParser::RuleAccessibilityModifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(611);
    _la = _input->LA(1);
    if (!(((((_la - 101) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 101)) & ((1ULL << (TypeScriptParser::Private - 101))
      | (1ULL << (TypeScriptParser::Public - 101))
      | (1ULL << (TypeScriptParser::Protected - 101)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierOrPatternContext ------------------------------------------------------------------

TypeScriptParser::IdentifierOrPatternContext::IdentifierOrPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::IdentifierNameContext* TypeScriptParser::IdentifierOrPatternContext::identifierName() {
  return getRuleContext<TypeScriptParser::IdentifierNameContext>(0);
}

TypeScriptParser::BindingPatternContext* TypeScriptParser::IdentifierOrPatternContext::bindingPattern() {
  return getRuleContext<TypeScriptParser::BindingPatternContext>(0);
}


size_t TypeScriptParser::IdentifierOrPatternContext::getRuleIndex() const {
  return TypeScriptParser::RuleIdentifierOrPattern;
}

void TypeScriptParser::IdentifierOrPatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierOrPattern(this);
}

void TypeScriptParser::IdentifierOrPatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierOrPattern(this);
}


antlrcpp::Any TypeScriptParser::IdentifierOrPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierOrPattern(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::IdentifierOrPatternContext* TypeScriptParser::identifierOrPattern() {
  IdentifierOrPatternContext *_localctx = _tracker.createInstance<IdentifierOrPatternContext>(_ctx, getState());
  enterRule(_localctx, 78, TypeScriptParser::RuleIdentifierOrPattern);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(615);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypeScriptParser::NullLiteral:
      case TypeScriptParser::BooleanLiteral:
      case TypeScriptParser::Break:
      case TypeScriptParser::Do:
      case TypeScriptParser::Instanceof:
      case TypeScriptParser::Typeof:
      case TypeScriptParser::Case:
      case TypeScriptParser::Else:
      case TypeScriptParser::New:
      case TypeScriptParser::Var:
      case TypeScriptParser::Catch:
      case TypeScriptParser::Finally:
      case TypeScriptParser::Return:
      case TypeScriptParser::Void:
      case TypeScriptParser::Continue:
      case TypeScriptParser::For:
      case TypeScriptParser::Switch:
      case TypeScriptParser::While:
      case TypeScriptParser::Debugger:
      case TypeScriptParser::Function_:
      case TypeScriptParser::This:
      case TypeScriptParser::With:
      case TypeScriptParser::Default:
      case TypeScriptParser::If:
      case TypeScriptParser::Throw:
      case TypeScriptParser::Delete:
      case TypeScriptParser::In:
      case TypeScriptParser::Try:
      case TypeScriptParser::From:
      case TypeScriptParser::ReadOnly:
      case TypeScriptParser::Async:
      case TypeScriptParser::Class:
      case TypeScriptParser::Enum:
      case TypeScriptParser::Extends:
      case TypeScriptParser::Super:
      case TypeScriptParser::Const:
      case TypeScriptParser::Export:
      case TypeScriptParser::Import:
      case TypeScriptParser::Implements:
      case TypeScriptParser::Let:
      case TypeScriptParser::Private:
      case TypeScriptParser::Public:
      case TypeScriptParser::Interface:
      case TypeScriptParser::Package:
      case TypeScriptParser::Protected:
      case TypeScriptParser::Static:
      case TypeScriptParser::Yield:
      case TypeScriptParser::String:
      case TypeScriptParser::TypeAlias:
      case TypeScriptParser::Get:
      case TypeScriptParser::Set:
      case TypeScriptParser::Require:
      case TypeScriptParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(613);
        identifierName();
        break;
      }

      case TypeScriptParser::OpenBracket:
      case TypeScriptParser::OpenBrace: {
        enterOuterAlt(_localctx, 2);
        setState(614);
        bindingPattern();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructSignatureContext ------------------------------------------------------------------

TypeScriptParser::ConstructSignatureContext::ConstructSignatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::ConstructSignatureContext::New() {
  return getToken(TypeScriptParser::New, 0);
}

tree::TerminalNode* TypeScriptParser::ConstructSignatureContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

tree::TerminalNode* TypeScriptParser::ConstructSignatureContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

TypeScriptParser::TypeParametersContext* TypeScriptParser::ConstructSignatureContext::typeParameters() {
  return getRuleContext<TypeScriptParser::TypeParametersContext>(0);
}

TypeScriptParser::ParameterListContext* TypeScriptParser::ConstructSignatureContext::parameterList() {
  return getRuleContext<TypeScriptParser::ParameterListContext>(0);
}

TypeScriptParser::TypeAnnotationContext* TypeScriptParser::ConstructSignatureContext::typeAnnotation() {
  return getRuleContext<TypeScriptParser::TypeAnnotationContext>(0);
}


size_t TypeScriptParser::ConstructSignatureContext::getRuleIndex() const {
  return TypeScriptParser::RuleConstructSignature;
}

void TypeScriptParser::ConstructSignatureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructSignature(this);
}

void TypeScriptParser::ConstructSignatureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructSignature(this);
}


antlrcpp::Any TypeScriptParser::ConstructSignatureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitConstructSignature(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ConstructSignatureContext* TypeScriptParser::constructSignature() {
  ConstructSignatureContext *_localctx = _tracker.createInstance<ConstructSignatureContext>(_ctx, getState());
  enterRule(_localctx, 80, TypeScriptParser::RuleConstructSignature);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(617);
    match(TypeScriptParser::New);
    setState(619);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::LessThan) {
      setState(618);
      typeParameters();
    }
    setState(621);
    match(TypeScriptParser::OpenParen);
    setState(623);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypeScriptParser::OpenBracket)
      | (1ULL << TypeScriptParser::OpenBrace)
      | (1ULL << TypeScriptParser::Ellipsis)
      | (1ULL << TypeScriptParser::NullLiteral)
      | (1ULL << TypeScriptParser::BooleanLiteral)
      | (1ULL << TypeScriptParser::Break)
      | (1ULL << TypeScriptParser::Do))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (TypeScriptParser::Instanceof - 64))
      | (1ULL << (TypeScriptParser::Typeof - 64))
      | (1ULL << (TypeScriptParser::Case - 64))
      | (1ULL << (TypeScriptParser::Else - 64))
      | (1ULL << (TypeScriptParser::New - 64))
      | (1ULL << (TypeScriptParser::Var - 64))
      | (1ULL << (TypeScriptParser::Catch - 64))
      | (1ULL << (TypeScriptParser::Finally - 64))
      | (1ULL << (TypeScriptParser::Return - 64))
      | (1ULL << (TypeScriptParser::Void - 64))
      | (1ULL << (TypeScriptParser::Continue - 64))
      | (1ULL << (TypeScriptParser::For - 64))
      | (1ULL << (TypeScriptParser::Switch - 64))
      | (1ULL << (TypeScriptParser::While - 64))
      | (1ULL << (TypeScriptParser::Debugger - 64))
      | (1ULL << (TypeScriptParser::Function_ - 64))
      | (1ULL << (TypeScriptParser::This - 64))
      | (1ULL << (TypeScriptParser::With - 64))
      | (1ULL << (TypeScriptParser::Default - 64))
      | (1ULL << (TypeScriptParser::If - 64))
      | (1ULL << (TypeScriptParser::Throw - 64))
      | (1ULL << (TypeScriptParser::Delete - 64))
      | (1ULL << (TypeScriptParser::In - 64))
      | (1ULL << (TypeScriptParser::Try - 64))
      | (1ULL << (TypeScriptParser::From - 64))
      | (1ULL << (TypeScriptParser::ReadOnly - 64))
      | (1ULL << (TypeScriptParser::Async - 64))
      | (1ULL << (TypeScriptParser::Class - 64))
      | (1ULL << (TypeScriptParser::Enum - 64))
      | (1ULL << (TypeScriptParser::Extends - 64))
      | (1ULL << (TypeScriptParser::Super - 64))
      | (1ULL << (TypeScriptParser::Const - 64))
      | (1ULL << (TypeScriptParser::Export - 64))
      | (1ULL << (TypeScriptParser::Import - 64))
      | (1ULL << (TypeScriptParser::Implements - 64))
      | (1ULL << (TypeScriptParser::Let - 64))
      | (1ULL << (TypeScriptParser::Private - 64))
      | (1ULL << (TypeScriptParser::Public - 64))
      | (1ULL << (TypeScriptParser::Interface - 64))
      | (1ULL << (TypeScriptParser::Package - 64))
      | (1ULL << (TypeScriptParser::Protected - 64))
      | (1ULL << (TypeScriptParser::Static - 64))
      | (1ULL << (TypeScriptParser::Yield - 64))
      | (1ULL << (TypeScriptParser::String - 64))
      | (1ULL << (TypeScriptParser::TypeAlias - 64))
      | (1ULL << (TypeScriptParser::Get - 64))
      | (1ULL << (TypeScriptParser::Set - 64))
      | (1ULL << (TypeScriptParser::Require - 64))
      | (1ULL << (TypeScriptParser::At - 64))
      | (1ULL << (TypeScriptParser::Identifier - 64)))) != 0)) {
      setState(622);
      parameterList();
    }
    setState(625);
    match(TypeScriptParser::CloseParen);
    setState(627);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Colon) {
      setState(626);
      typeAnnotation();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IndexSignatureContext ------------------------------------------------------------------

TypeScriptParser::IndexSignatureContext::IndexSignatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::IndexSignatureContext::OpenBracket() {
  return getToken(TypeScriptParser::OpenBracket, 0);
}

tree::TerminalNode* TypeScriptParser::IndexSignatureContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

tree::TerminalNode* TypeScriptParser::IndexSignatureContext::Colon() {
  return getToken(TypeScriptParser::Colon, 0);
}

tree::TerminalNode* TypeScriptParser::IndexSignatureContext::CloseBracket() {
  return getToken(TypeScriptParser::CloseBracket, 0);
}

TypeScriptParser::TypeAnnotationContext* TypeScriptParser::IndexSignatureContext::typeAnnotation() {
  return getRuleContext<TypeScriptParser::TypeAnnotationContext>(0);
}

tree::TerminalNode* TypeScriptParser::IndexSignatureContext::Number() {
  return getToken(TypeScriptParser::Number, 0);
}

tree::TerminalNode* TypeScriptParser::IndexSignatureContext::String() {
  return getToken(TypeScriptParser::String, 0);
}


size_t TypeScriptParser::IndexSignatureContext::getRuleIndex() const {
  return TypeScriptParser::RuleIndexSignature;
}

void TypeScriptParser::IndexSignatureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndexSignature(this);
}

void TypeScriptParser::IndexSignatureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndexSignature(this);
}


antlrcpp::Any TypeScriptParser::IndexSignatureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitIndexSignature(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::IndexSignatureContext* TypeScriptParser::indexSignature() {
  IndexSignatureContext *_localctx = _tracker.createInstance<IndexSignatureContext>(_ctx, getState());
  enterRule(_localctx, 82, TypeScriptParser::RuleIndexSignature);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(629);
    match(TypeScriptParser::OpenBracket);
    setState(630);
    match(TypeScriptParser::Identifier);
    setState(631);
    match(TypeScriptParser::Colon);
    setState(632);
    _la = _input->LA(1);
    if (!(_la == TypeScriptParser::Number

    || _la == TypeScriptParser::String)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(633);
    match(TypeScriptParser::CloseBracket);
    setState(634);
    typeAnnotation();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodSignatureContext ------------------------------------------------------------------

TypeScriptParser::MethodSignatureContext::MethodSignatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::PropertyNameContext* TypeScriptParser::MethodSignatureContext::propertyName() {
  return getRuleContext<TypeScriptParser::PropertyNameContext>(0);
}

TypeScriptParser::CallSignatureContext* TypeScriptParser::MethodSignatureContext::callSignature() {
  return getRuleContext<TypeScriptParser::CallSignatureContext>(0);
}

tree::TerminalNode* TypeScriptParser::MethodSignatureContext::QuestionMark() {
  return getToken(TypeScriptParser::QuestionMark, 0);
}


size_t TypeScriptParser::MethodSignatureContext::getRuleIndex() const {
  return TypeScriptParser::RuleMethodSignature;
}

void TypeScriptParser::MethodSignatureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodSignature(this);
}

void TypeScriptParser::MethodSignatureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodSignature(this);
}


antlrcpp::Any TypeScriptParser::MethodSignatureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitMethodSignature(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::MethodSignatureContext* TypeScriptParser::methodSignature() {
  MethodSignatureContext *_localctx = _tracker.createInstance<MethodSignatureContext>(_ctx, getState());
  enterRule(_localctx, 84, TypeScriptParser::RuleMethodSignature);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(636);
    propertyName();
    setState(638);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::QuestionMark) {
      setState(637);
      match(TypeScriptParser::QuestionMark);
    }
    setState(640);
    callSignature();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeAliasDeclarationContext ------------------------------------------------------------------

TypeScriptParser::TypeAliasDeclarationContext::TypeAliasDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::TypeAliasDeclarationContext::TypeAlias() {
  return getToken(TypeScriptParser::TypeAlias, 0);
}

tree::TerminalNode* TypeScriptParser::TypeAliasDeclarationContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

tree::TerminalNode* TypeScriptParser::TypeAliasDeclarationContext::Assign() {
  return getToken(TypeScriptParser::Assign, 0);
}

TypeScriptParser::Type_Context* TypeScriptParser::TypeAliasDeclarationContext::type_() {
  return getRuleContext<TypeScriptParser::Type_Context>(0);
}

tree::TerminalNode* TypeScriptParser::TypeAliasDeclarationContext::SemiColon() {
  return getToken(TypeScriptParser::SemiColon, 0);
}

TypeScriptParser::TypeParametersContext* TypeScriptParser::TypeAliasDeclarationContext::typeParameters() {
  return getRuleContext<TypeScriptParser::TypeParametersContext>(0);
}


size_t TypeScriptParser::TypeAliasDeclarationContext::getRuleIndex() const {
  return TypeScriptParser::RuleTypeAliasDeclaration;
}

void TypeScriptParser::TypeAliasDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeAliasDeclaration(this);
}

void TypeScriptParser::TypeAliasDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeAliasDeclaration(this);
}


antlrcpp::Any TypeScriptParser::TypeAliasDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTypeAliasDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TypeAliasDeclarationContext* TypeScriptParser::typeAliasDeclaration() {
  TypeAliasDeclarationContext *_localctx = _tracker.createInstance<TypeAliasDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 86, TypeScriptParser::RuleTypeAliasDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(642);
    match(TypeScriptParser::TypeAlias);
    setState(643);
    match(TypeScriptParser::Identifier);
    setState(645);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::LessThan) {
      setState(644);
      typeParameters();
    }
    setState(647);
    match(TypeScriptParser::Assign);
    setState(648);
    type_();
    setState(649);
    match(TypeScriptParser::SemiColon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorDeclarationContext ------------------------------------------------------------------

TypeScriptParser::ConstructorDeclarationContext::ConstructorDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::ConstructorDeclarationContext::Constructor() {
  return getToken(TypeScriptParser::Constructor, 0);
}

tree::TerminalNode* TypeScriptParser::ConstructorDeclarationContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

tree::TerminalNode* TypeScriptParser::ConstructorDeclarationContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

TypeScriptParser::AccessibilityModifierContext* TypeScriptParser::ConstructorDeclarationContext::accessibilityModifier() {
  return getRuleContext<TypeScriptParser::AccessibilityModifierContext>(0);
}

TypeScriptParser::FormalParameterListContext* TypeScriptParser::ConstructorDeclarationContext::formalParameterList() {
  return getRuleContext<TypeScriptParser::FormalParameterListContext>(0);
}

tree::TerminalNode* TypeScriptParser::ConstructorDeclarationContext::SemiColon() {
  return getToken(TypeScriptParser::SemiColon, 0);
}

tree::TerminalNode* TypeScriptParser::ConstructorDeclarationContext::OpenBrace() {
  return getToken(TypeScriptParser::OpenBrace, 0);
}

TypeScriptParser::FunctionBodyContext* TypeScriptParser::ConstructorDeclarationContext::functionBody() {
  return getRuleContext<TypeScriptParser::FunctionBodyContext>(0);
}

tree::TerminalNode* TypeScriptParser::ConstructorDeclarationContext::CloseBrace() {
  return getToken(TypeScriptParser::CloseBrace, 0);
}


size_t TypeScriptParser::ConstructorDeclarationContext::getRuleIndex() const {
  return TypeScriptParser::RuleConstructorDeclaration;
}

void TypeScriptParser::ConstructorDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorDeclaration(this);
}

void TypeScriptParser::ConstructorDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorDeclaration(this);
}


antlrcpp::Any TypeScriptParser::ConstructorDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitConstructorDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ConstructorDeclarationContext* TypeScriptParser::constructorDeclaration() {
  ConstructorDeclarationContext *_localctx = _tracker.createInstance<ConstructorDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 88, TypeScriptParser::RuleConstructorDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(652);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 101) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 101)) & ((1ULL << (TypeScriptParser::Private - 101))
      | (1ULL << (TypeScriptParser::Public - 101))
      | (1ULL << (TypeScriptParser::Protected - 101)))) != 0)) {
      setState(651);
      accessibilityModifier();
    }
    setState(654);
    match(TypeScriptParser::Constructor);
    setState(655);
    match(TypeScriptParser::OpenParen);
    setState(657);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypeScriptParser::OpenBracket)
      | (1ULL << TypeScriptParser::OpenBrace)
      | (1ULL << TypeScriptParser::Ellipsis))) != 0) || ((((_la - 101) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 101)) & ((1ULL << (TypeScriptParser::Private - 101))
      | (1ULL << (TypeScriptParser::Public - 101))
      | (1ULL << (TypeScriptParser::Protected - 101))
      | (1ULL << (TypeScriptParser::TypeAlias - 101))
      | (1ULL << (TypeScriptParser::Require - 101))
      | (1ULL << (TypeScriptParser::At - 101))
      | (1ULL << (TypeScriptParser::Identifier - 101)))) != 0)) {
      setState(656);
      formalParameterList();
    }
    setState(659);
    match(TypeScriptParser::CloseParen);
    setState(665);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx)) {
    case 1: {
      setState(660);
      match(TypeScriptParser::OpenBrace);
      setState(661);
      functionBody();
      setState(662);
      match(TypeScriptParser::CloseBrace);
      break;
    }

    case 2: {
      setState(664);
      match(TypeScriptParser::SemiColon);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceDeclarationContext ------------------------------------------------------------------

TypeScriptParser::InterfaceDeclarationContext::InterfaceDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::InterfaceDeclarationContext::Interface() {
  return getToken(TypeScriptParser::Interface, 0);
}

tree::TerminalNode* TypeScriptParser::InterfaceDeclarationContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

TypeScriptParser::ObjectTypeContext* TypeScriptParser::InterfaceDeclarationContext::objectType() {
  return getRuleContext<TypeScriptParser::ObjectTypeContext>(0);
}

tree::TerminalNode* TypeScriptParser::InterfaceDeclarationContext::Export() {
  return getToken(TypeScriptParser::Export, 0);
}

tree::TerminalNode* TypeScriptParser::InterfaceDeclarationContext::Declare() {
  return getToken(TypeScriptParser::Declare, 0);
}

TypeScriptParser::TypeParametersContext* TypeScriptParser::InterfaceDeclarationContext::typeParameters() {
  return getRuleContext<TypeScriptParser::TypeParametersContext>(0);
}

TypeScriptParser::InterfaceExtendsClauseContext* TypeScriptParser::InterfaceDeclarationContext::interfaceExtendsClause() {
  return getRuleContext<TypeScriptParser::InterfaceExtendsClauseContext>(0);
}

tree::TerminalNode* TypeScriptParser::InterfaceDeclarationContext::SemiColon() {
  return getToken(TypeScriptParser::SemiColon, 0);
}


size_t TypeScriptParser::InterfaceDeclarationContext::getRuleIndex() const {
  return TypeScriptParser::RuleInterfaceDeclaration;
}

void TypeScriptParser::InterfaceDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceDeclaration(this);
}

void TypeScriptParser::InterfaceDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceDeclaration(this);
}


antlrcpp::Any TypeScriptParser::InterfaceDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::InterfaceDeclarationContext* TypeScriptParser::interfaceDeclaration() {
  InterfaceDeclarationContext *_localctx = _tracker.createInstance<InterfaceDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 90, TypeScriptParser::RuleInterfaceDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(668);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Export) {
      setState(667);
      match(TypeScriptParser::Export);
    }
    setState(671);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Declare) {
      setState(670);
      match(TypeScriptParser::Declare);
    }
    setState(673);
    match(TypeScriptParser::Interface);
    setState(674);
    match(TypeScriptParser::Identifier);
    setState(676);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::LessThan) {
      setState(675);
      typeParameters();
    }
    setState(679);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Extends) {
      setState(678);
      interfaceExtendsClause();
    }
    setState(681);
    objectType();
    setState(683);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      setState(682);
      match(TypeScriptParser::SemiColon);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceExtendsClauseContext ------------------------------------------------------------------

TypeScriptParser::InterfaceExtendsClauseContext::InterfaceExtendsClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::InterfaceExtendsClauseContext::Extends() {
  return getToken(TypeScriptParser::Extends, 0);
}

TypeScriptParser::ClassOrInterfaceTypeListContext* TypeScriptParser::InterfaceExtendsClauseContext::classOrInterfaceTypeList() {
  return getRuleContext<TypeScriptParser::ClassOrInterfaceTypeListContext>(0);
}


size_t TypeScriptParser::InterfaceExtendsClauseContext::getRuleIndex() const {
  return TypeScriptParser::RuleInterfaceExtendsClause;
}

void TypeScriptParser::InterfaceExtendsClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceExtendsClause(this);
}

void TypeScriptParser::InterfaceExtendsClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceExtendsClause(this);
}


antlrcpp::Any TypeScriptParser::InterfaceExtendsClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceExtendsClause(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::InterfaceExtendsClauseContext* TypeScriptParser::interfaceExtendsClause() {
  InterfaceExtendsClauseContext *_localctx = _tracker.createInstance<InterfaceExtendsClauseContext>(_ctx, getState());
  enterRule(_localctx, 92, TypeScriptParser::RuleInterfaceExtendsClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(685);
    match(TypeScriptParser::Extends);
    setState(686);
    classOrInterfaceTypeList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassOrInterfaceTypeListContext ------------------------------------------------------------------

TypeScriptParser::ClassOrInterfaceTypeListContext::ClassOrInterfaceTypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypeScriptParser::TypeReferenceContext *> TypeScriptParser::ClassOrInterfaceTypeListContext::typeReference() {
  return getRuleContexts<TypeScriptParser::TypeReferenceContext>();
}

TypeScriptParser::TypeReferenceContext* TypeScriptParser::ClassOrInterfaceTypeListContext::typeReference(size_t i) {
  return getRuleContext<TypeScriptParser::TypeReferenceContext>(i);
}

std::vector<tree::TerminalNode *> TypeScriptParser::ClassOrInterfaceTypeListContext::Comma() {
  return getTokens(TypeScriptParser::Comma);
}

tree::TerminalNode* TypeScriptParser::ClassOrInterfaceTypeListContext::Comma(size_t i) {
  return getToken(TypeScriptParser::Comma, i);
}


size_t TypeScriptParser::ClassOrInterfaceTypeListContext::getRuleIndex() const {
  return TypeScriptParser::RuleClassOrInterfaceTypeList;
}

void TypeScriptParser::ClassOrInterfaceTypeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassOrInterfaceTypeList(this);
}

void TypeScriptParser::ClassOrInterfaceTypeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassOrInterfaceTypeList(this);
}


antlrcpp::Any TypeScriptParser::ClassOrInterfaceTypeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitClassOrInterfaceTypeList(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ClassOrInterfaceTypeListContext* TypeScriptParser::classOrInterfaceTypeList() {
  ClassOrInterfaceTypeListContext *_localctx = _tracker.createInstance<ClassOrInterfaceTypeListContext>(_ctx, getState());
  enterRule(_localctx, 94, TypeScriptParser::RuleClassOrInterfaceTypeList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(688);
    typeReference();
    setState(693);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypeScriptParser::Comma) {
      setState(689);
      match(TypeScriptParser::Comma);
      setState(690);
      typeReference();
      setState(695);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumDeclarationContext ------------------------------------------------------------------

TypeScriptParser::EnumDeclarationContext::EnumDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::EnumDeclarationContext::Enum() {
  return getToken(TypeScriptParser::Enum, 0);
}

tree::TerminalNode* TypeScriptParser::EnumDeclarationContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

tree::TerminalNode* TypeScriptParser::EnumDeclarationContext::OpenBrace() {
  return getToken(TypeScriptParser::OpenBrace, 0);
}

tree::TerminalNode* TypeScriptParser::EnumDeclarationContext::CloseBrace() {
  return getToken(TypeScriptParser::CloseBrace, 0);
}

tree::TerminalNode* TypeScriptParser::EnumDeclarationContext::Const() {
  return getToken(TypeScriptParser::Const, 0);
}

TypeScriptParser::EnumBodyContext* TypeScriptParser::EnumDeclarationContext::enumBody() {
  return getRuleContext<TypeScriptParser::EnumBodyContext>(0);
}


size_t TypeScriptParser::EnumDeclarationContext::getRuleIndex() const {
  return TypeScriptParser::RuleEnumDeclaration;
}

void TypeScriptParser::EnumDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumDeclaration(this);
}

void TypeScriptParser::EnumDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumDeclaration(this);
}


antlrcpp::Any TypeScriptParser::EnumDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitEnumDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::EnumDeclarationContext* TypeScriptParser::enumDeclaration() {
  EnumDeclarationContext *_localctx = _tracker.createInstance<EnumDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 96, TypeScriptParser::RuleEnumDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(697);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Const) {
      setState(696);
      match(TypeScriptParser::Const);
    }
    setState(699);
    match(TypeScriptParser::Enum);
    setState(700);
    match(TypeScriptParser::Identifier);
    setState(701);
    match(TypeScriptParser::OpenBrace);
    setState(703);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypeScriptParser::NullLiteral)
      | (1ULL << TypeScriptParser::BooleanLiteral)
      | (1ULL << TypeScriptParser::DecimalLiteral)
      | (1ULL << TypeScriptParser::HexIntegerLiteral)
      | (1ULL << TypeScriptParser::OctalIntegerLiteral)
      | (1ULL << TypeScriptParser::OctalIntegerLiteral2)
      | (1ULL << TypeScriptParser::BinaryIntegerLiteral)
      | (1ULL << TypeScriptParser::Break)
      | (1ULL << TypeScriptParser::Do))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (TypeScriptParser::Instanceof - 64))
      | (1ULL << (TypeScriptParser::Typeof - 64))
      | (1ULL << (TypeScriptParser::Case - 64))
      | (1ULL << (TypeScriptParser::Else - 64))
      | (1ULL << (TypeScriptParser::New - 64))
      | (1ULL << (TypeScriptParser::Var - 64))
      | (1ULL << (TypeScriptParser::Catch - 64))
      | (1ULL << (TypeScriptParser::Finally - 64))
      | (1ULL << (TypeScriptParser::Return - 64))
      | (1ULL << (TypeScriptParser::Void - 64))
      | (1ULL << (TypeScriptParser::Continue - 64))
      | (1ULL << (TypeScriptParser::For - 64))
      | (1ULL << (TypeScriptParser::Switch - 64))
      | (1ULL << (TypeScriptParser::While - 64))
      | (1ULL << (TypeScriptParser::Debugger - 64))
      | (1ULL << (TypeScriptParser::Function_ - 64))
      | (1ULL << (TypeScriptParser::This - 64))
      | (1ULL << (TypeScriptParser::With - 64))
      | (1ULL << (TypeScriptParser::Default - 64))
      | (1ULL << (TypeScriptParser::If - 64))
      | (1ULL << (TypeScriptParser::Throw - 64))
      | (1ULL << (TypeScriptParser::Delete - 64))
      | (1ULL << (TypeScriptParser::In - 64))
      | (1ULL << (TypeScriptParser::Try - 64))
      | (1ULL << (TypeScriptParser::From - 64))
      | (1ULL << (TypeScriptParser::ReadOnly - 64))
      | (1ULL << (TypeScriptParser::Async - 64))
      | (1ULL << (TypeScriptParser::Class - 64))
      | (1ULL << (TypeScriptParser::Enum - 64))
      | (1ULL << (TypeScriptParser::Extends - 64))
      | (1ULL << (TypeScriptParser::Super - 64))
      | (1ULL << (TypeScriptParser::Const - 64))
      | (1ULL << (TypeScriptParser::Export - 64))
      | (1ULL << (TypeScriptParser::Import - 64))
      | (1ULL << (TypeScriptParser::Implements - 64))
      | (1ULL << (TypeScriptParser::Let - 64))
      | (1ULL << (TypeScriptParser::Private - 64))
      | (1ULL << (TypeScriptParser::Public - 64))
      | (1ULL << (TypeScriptParser::Interface - 64))
      | (1ULL << (TypeScriptParser::Package - 64))
      | (1ULL << (TypeScriptParser::Protected - 64))
      | (1ULL << (TypeScriptParser::Static - 64))
      | (1ULL << (TypeScriptParser::Yield - 64))
      | (1ULL << (TypeScriptParser::String - 64))
      | (1ULL << (TypeScriptParser::TypeAlias - 64))
      | (1ULL << (TypeScriptParser::Get - 64))
      | (1ULL << (TypeScriptParser::Set - 64))
      | (1ULL << (TypeScriptParser::Require - 64))
      | (1ULL << (TypeScriptParser::Identifier - 64))
      | (1ULL << (TypeScriptParser::StringLiteral - 64)))) != 0)) {
      setState(702);
      enumBody();
    }
    setState(705);
    match(TypeScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumBodyContext ------------------------------------------------------------------

TypeScriptParser::EnumBodyContext::EnumBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::EnumMemberListContext* TypeScriptParser::EnumBodyContext::enumMemberList() {
  return getRuleContext<TypeScriptParser::EnumMemberListContext>(0);
}

tree::TerminalNode* TypeScriptParser::EnumBodyContext::Comma() {
  return getToken(TypeScriptParser::Comma, 0);
}


size_t TypeScriptParser::EnumBodyContext::getRuleIndex() const {
  return TypeScriptParser::RuleEnumBody;
}

void TypeScriptParser::EnumBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumBody(this);
}

void TypeScriptParser::EnumBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumBody(this);
}


antlrcpp::Any TypeScriptParser::EnumBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitEnumBody(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::EnumBodyContext* TypeScriptParser::enumBody() {
  EnumBodyContext *_localctx = _tracker.createInstance<EnumBodyContext>(_ctx, getState());
  enterRule(_localctx, 98, TypeScriptParser::RuleEnumBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(707);
    enumMemberList();
    setState(709);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Comma) {
      setState(708);
      match(TypeScriptParser::Comma);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumMemberListContext ------------------------------------------------------------------

TypeScriptParser::EnumMemberListContext::EnumMemberListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypeScriptParser::EnumMemberContext *> TypeScriptParser::EnumMemberListContext::enumMember() {
  return getRuleContexts<TypeScriptParser::EnumMemberContext>();
}

TypeScriptParser::EnumMemberContext* TypeScriptParser::EnumMemberListContext::enumMember(size_t i) {
  return getRuleContext<TypeScriptParser::EnumMemberContext>(i);
}

std::vector<tree::TerminalNode *> TypeScriptParser::EnumMemberListContext::Comma() {
  return getTokens(TypeScriptParser::Comma);
}

tree::TerminalNode* TypeScriptParser::EnumMemberListContext::Comma(size_t i) {
  return getToken(TypeScriptParser::Comma, i);
}


size_t TypeScriptParser::EnumMemberListContext::getRuleIndex() const {
  return TypeScriptParser::RuleEnumMemberList;
}

void TypeScriptParser::EnumMemberListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumMemberList(this);
}

void TypeScriptParser::EnumMemberListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumMemberList(this);
}


antlrcpp::Any TypeScriptParser::EnumMemberListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitEnumMemberList(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::EnumMemberListContext* TypeScriptParser::enumMemberList() {
  EnumMemberListContext *_localctx = _tracker.createInstance<EnumMemberListContext>(_ctx, getState());
  enterRule(_localctx, 100, TypeScriptParser::RuleEnumMemberList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(711);
    enumMember();
    setState(716);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(712);
        match(TypeScriptParser::Comma);
        setState(713);
        enumMember(); 
      }
      setState(718);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumMemberContext ------------------------------------------------------------------

TypeScriptParser::EnumMemberContext::EnumMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::PropertyNameContext* TypeScriptParser::EnumMemberContext::propertyName() {
  return getRuleContext<TypeScriptParser::PropertyNameContext>(0);
}

tree::TerminalNode* TypeScriptParser::EnumMemberContext::Assign() {
  return getToken(TypeScriptParser::Assign, 0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::EnumMemberContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}


size_t TypeScriptParser::EnumMemberContext::getRuleIndex() const {
  return TypeScriptParser::RuleEnumMember;
}

void TypeScriptParser::EnumMemberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumMember(this);
}

void TypeScriptParser::EnumMemberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumMember(this);
}


antlrcpp::Any TypeScriptParser::EnumMemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitEnumMember(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::EnumMemberContext* TypeScriptParser::enumMember() {
  EnumMemberContext *_localctx = _tracker.createInstance<EnumMemberContext>(_ctx, getState());
  enterRule(_localctx, 102, TypeScriptParser::RuleEnumMember);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(719);
    propertyName();
    setState(722);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Assign) {
      setState(720);
      match(TypeScriptParser::Assign);
      setState(721);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespaceDeclarationContext ------------------------------------------------------------------

TypeScriptParser::NamespaceDeclarationContext::NamespaceDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::NamespaceDeclarationContext::Namespace() {
  return getToken(TypeScriptParser::Namespace, 0);
}

TypeScriptParser::NamespaceNameContext* TypeScriptParser::NamespaceDeclarationContext::namespaceName() {
  return getRuleContext<TypeScriptParser::NamespaceNameContext>(0);
}

tree::TerminalNode* TypeScriptParser::NamespaceDeclarationContext::OpenBrace() {
  return getToken(TypeScriptParser::OpenBrace, 0);
}

tree::TerminalNode* TypeScriptParser::NamespaceDeclarationContext::CloseBrace() {
  return getToken(TypeScriptParser::CloseBrace, 0);
}

TypeScriptParser::StatementListContext* TypeScriptParser::NamespaceDeclarationContext::statementList() {
  return getRuleContext<TypeScriptParser::StatementListContext>(0);
}


size_t TypeScriptParser::NamespaceDeclarationContext::getRuleIndex() const {
  return TypeScriptParser::RuleNamespaceDeclaration;
}

void TypeScriptParser::NamespaceDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespaceDeclaration(this);
}

void TypeScriptParser::NamespaceDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespaceDeclaration(this);
}


antlrcpp::Any TypeScriptParser::NamespaceDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitNamespaceDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::NamespaceDeclarationContext* TypeScriptParser::namespaceDeclaration() {
  NamespaceDeclarationContext *_localctx = _tracker.createInstance<NamespaceDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 104, TypeScriptParser::RuleNamespaceDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(724);
    match(TypeScriptParser::Namespace);
    setState(725);
    namespaceName();
    setState(726);
    match(TypeScriptParser::OpenBrace);
    setState(728);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      setState(727);
      statementList();
      break;
    }

    default:
      break;
    }
    setState(730);
    match(TypeScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespaceNameContext ------------------------------------------------------------------

TypeScriptParser::NamespaceNameContext::NamespaceNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TypeScriptParser::NamespaceNameContext::Identifier() {
  return getTokens(TypeScriptParser::Identifier);
}

tree::TerminalNode* TypeScriptParser::NamespaceNameContext::Identifier(size_t i) {
  return getToken(TypeScriptParser::Identifier, i);
}

std::vector<tree::TerminalNode *> TypeScriptParser::NamespaceNameContext::Dot() {
  return getTokens(TypeScriptParser::Dot);
}

tree::TerminalNode* TypeScriptParser::NamespaceNameContext::Dot(size_t i) {
  return getToken(TypeScriptParser::Dot, i);
}


size_t TypeScriptParser::NamespaceNameContext::getRuleIndex() const {
  return TypeScriptParser::RuleNamespaceName;
}

void TypeScriptParser::NamespaceNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespaceName(this);
}

void TypeScriptParser::NamespaceNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespaceName(this);
}


antlrcpp::Any TypeScriptParser::NamespaceNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitNamespaceName(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::NamespaceNameContext* TypeScriptParser::namespaceName() {
  NamespaceNameContext *_localctx = _tracker.createInstance<NamespaceNameContext>(_ctx, getState());
  enterRule(_localctx, 106, TypeScriptParser::RuleNamespaceName);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(732);
    match(TypeScriptParser::Identifier);
    setState(741);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(734); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(733);
          match(TypeScriptParser::Dot);
          setState(736); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == TypeScriptParser::Dot);
        setState(738);
        match(TypeScriptParser::Identifier); 
      }
      setState(743);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportAliasDeclarationContext ------------------------------------------------------------------

TypeScriptParser::ImportAliasDeclarationContext::ImportAliasDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::ImportAliasDeclarationContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

tree::TerminalNode* TypeScriptParser::ImportAliasDeclarationContext::Assign() {
  return getToken(TypeScriptParser::Assign, 0);
}

TypeScriptParser::NamespaceNameContext* TypeScriptParser::ImportAliasDeclarationContext::namespaceName() {
  return getRuleContext<TypeScriptParser::NamespaceNameContext>(0);
}

tree::TerminalNode* TypeScriptParser::ImportAliasDeclarationContext::SemiColon() {
  return getToken(TypeScriptParser::SemiColon, 0);
}


size_t TypeScriptParser::ImportAliasDeclarationContext::getRuleIndex() const {
  return TypeScriptParser::RuleImportAliasDeclaration;
}

void TypeScriptParser::ImportAliasDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportAliasDeclaration(this);
}

void TypeScriptParser::ImportAliasDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportAliasDeclaration(this);
}


antlrcpp::Any TypeScriptParser::ImportAliasDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitImportAliasDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ImportAliasDeclarationContext* TypeScriptParser::importAliasDeclaration() {
  ImportAliasDeclarationContext *_localctx = _tracker.createInstance<ImportAliasDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 108, TypeScriptParser::RuleImportAliasDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(744);
    match(TypeScriptParser::Identifier);
    setState(745);
    match(TypeScriptParser::Assign);
    setState(746);
    namespaceName();
    setState(747);
    match(TypeScriptParser::SemiColon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecoratorListContext ------------------------------------------------------------------

TypeScriptParser::DecoratorListContext::DecoratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypeScriptParser::DecoratorContext *> TypeScriptParser::DecoratorListContext::decorator() {
  return getRuleContexts<TypeScriptParser::DecoratorContext>();
}

TypeScriptParser::DecoratorContext* TypeScriptParser::DecoratorListContext::decorator(size_t i) {
  return getRuleContext<TypeScriptParser::DecoratorContext>(i);
}


size_t TypeScriptParser::DecoratorListContext::getRuleIndex() const {
  return TypeScriptParser::RuleDecoratorList;
}

void TypeScriptParser::DecoratorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecoratorList(this);
}

void TypeScriptParser::DecoratorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecoratorList(this);
}


antlrcpp::Any TypeScriptParser::DecoratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitDecoratorList(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::DecoratorListContext* TypeScriptParser::decoratorList() {
  DecoratorListContext *_localctx = _tracker.createInstance<DecoratorListContext>(_ctx, getState());
  enterRule(_localctx, 110, TypeScriptParser::RuleDecoratorList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(750); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(749);
              decorator();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(752); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecoratorContext ------------------------------------------------------------------

TypeScriptParser::DecoratorContext::DecoratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::DecoratorContext::At() {
  return getToken(TypeScriptParser::At, 0);
}

TypeScriptParser::DecoratorMemberExpressionContext* TypeScriptParser::DecoratorContext::decoratorMemberExpression() {
  return getRuleContext<TypeScriptParser::DecoratorMemberExpressionContext>(0);
}

TypeScriptParser::DecoratorCallExpressionContext* TypeScriptParser::DecoratorContext::decoratorCallExpression() {
  return getRuleContext<TypeScriptParser::DecoratorCallExpressionContext>(0);
}


size_t TypeScriptParser::DecoratorContext::getRuleIndex() const {
  return TypeScriptParser::RuleDecorator;
}

void TypeScriptParser::DecoratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecorator(this);
}

void TypeScriptParser::DecoratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecorator(this);
}


antlrcpp::Any TypeScriptParser::DecoratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitDecorator(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::DecoratorContext* TypeScriptParser::decorator() {
  DecoratorContext *_localctx = _tracker.createInstance<DecoratorContext>(_ctx, getState());
  enterRule(_localctx, 112, TypeScriptParser::RuleDecorator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(754);
    match(TypeScriptParser::At);
    setState(757);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      setState(755);
      decoratorMemberExpression(0);
      break;
    }

    case 2: {
      setState(756);
      decoratorCallExpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecoratorMemberExpressionContext ------------------------------------------------------------------

TypeScriptParser::DecoratorMemberExpressionContext::DecoratorMemberExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::DecoratorMemberExpressionContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

tree::TerminalNode* TypeScriptParser::DecoratorMemberExpressionContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::DecoratorMemberExpressionContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

tree::TerminalNode* TypeScriptParser::DecoratorMemberExpressionContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

TypeScriptParser::DecoratorMemberExpressionContext* TypeScriptParser::DecoratorMemberExpressionContext::decoratorMemberExpression() {
  return getRuleContext<TypeScriptParser::DecoratorMemberExpressionContext>(0);
}

tree::TerminalNode* TypeScriptParser::DecoratorMemberExpressionContext::Dot() {
  return getToken(TypeScriptParser::Dot, 0);
}

TypeScriptParser::IdentifierNameContext* TypeScriptParser::DecoratorMemberExpressionContext::identifierName() {
  return getRuleContext<TypeScriptParser::IdentifierNameContext>(0);
}


size_t TypeScriptParser::DecoratorMemberExpressionContext::getRuleIndex() const {
  return TypeScriptParser::RuleDecoratorMemberExpression;
}

void TypeScriptParser::DecoratorMemberExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecoratorMemberExpression(this);
}

void TypeScriptParser::DecoratorMemberExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecoratorMemberExpression(this);
}


antlrcpp::Any TypeScriptParser::DecoratorMemberExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitDecoratorMemberExpression(this);
  else
    return visitor->visitChildren(this);
}


TypeScriptParser::DecoratorMemberExpressionContext* TypeScriptParser::decoratorMemberExpression() {
   return decoratorMemberExpression(0);
}

TypeScriptParser::DecoratorMemberExpressionContext* TypeScriptParser::decoratorMemberExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  TypeScriptParser::DecoratorMemberExpressionContext *_localctx = _tracker.createInstance<DecoratorMemberExpressionContext>(_ctx, parentState);
  TypeScriptParser::DecoratorMemberExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 114;
  enterRecursionRule(_localctx, 114, TypeScriptParser::RuleDecoratorMemberExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(765);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypeScriptParser::Identifier: {
        setState(760);
        match(TypeScriptParser::Identifier);
        break;
      }

      case TypeScriptParser::OpenParen: {
        setState(761);
        match(TypeScriptParser::OpenParen);
        setState(762);
        expression(0);
        setState(763);
        match(TypeScriptParser::CloseParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(772);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<DecoratorMemberExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleDecoratorMemberExpression);
        setState(767);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(768);
        match(TypeScriptParser::Dot);
        setState(769);
        identifierName(); 
      }
      setState(774);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- DecoratorCallExpressionContext ------------------------------------------------------------------

TypeScriptParser::DecoratorCallExpressionContext::DecoratorCallExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::DecoratorMemberExpressionContext* TypeScriptParser::DecoratorCallExpressionContext::decoratorMemberExpression() {
  return getRuleContext<TypeScriptParser::DecoratorMemberExpressionContext>(0);
}

TypeScriptParser::CallExpressoinArgumentsContext* TypeScriptParser::DecoratorCallExpressionContext::callExpressoinArguments() {
  return getRuleContext<TypeScriptParser::CallExpressoinArgumentsContext>(0);
}


size_t TypeScriptParser::DecoratorCallExpressionContext::getRuleIndex() const {
  return TypeScriptParser::RuleDecoratorCallExpression;
}

void TypeScriptParser::DecoratorCallExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecoratorCallExpression(this);
}

void TypeScriptParser::DecoratorCallExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecoratorCallExpression(this);
}


antlrcpp::Any TypeScriptParser::DecoratorCallExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitDecoratorCallExpression(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::DecoratorCallExpressionContext* TypeScriptParser::decoratorCallExpression() {
  DecoratorCallExpressionContext *_localctx = _tracker.createInstance<DecoratorCallExpressionContext>(_ctx, getState());
  enterRule(_localctx, 116, TypeScriptParser::RuleDecoratorCallExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(775);
    decoratorMemberExpression(0);
    setState(776);
    callExpressoinArguments();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

TypeScriptParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::ProgramContext::EOF() {
  return getToken(TypeScriptParser::EOF, 0);
}

TypeScriptParser::SourceElementsContext* TypeScriptParser::ProgramContext::sourceElements() {
  return getRuleContext<TypeScriptParser::SourceElementsContext>(0);
}


size_t TypeScriptParser::ProgramContext::getRuleIndex() const {
  return TypeScriptParser::RuleProgram;
}

void TypeScriptParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void TypeScriptParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any TypeScriptParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ProgramContext* TypeScriptParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 118, TypeScriptParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(779);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
    case 1: {
      setState(778);
      dynamic_cast<ProgramContext *>(_localctx)->body = sourceElements();
      break;
    }

    default:
      break;
    }
    setState(781);
    match(TypeScriptParser::EOF);
     dynamic_cast<ProgramContext *>(_localctx)->type =  "Program"; dynamic_cast<ProgramContext *>(_localctx)->sourceType =  0; { System.out.println("Enterring the program " +  _localctx->type); }   
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SourceElementContext ------------------------------------------------------------------

TypeScriptParser::SourceElementContext::SourceElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::StatementContext* TypeScriptParser::SourceElementContext::statement() {
  return getRuleContext<TypeScriptParser::StatementContext>(0);
}

tree::TerminalNode* TypeScriptParser::SourceElementContext::Export() {
  return getToken(TypeScriptParser::Export, 0);
}


size_t TypeScriptParser::SourceElementContext::getRuleIndex() const {
  return TypeScriptParser::RuleSourceElement;
}

void TypeScriptParser::SourceElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSourceElement(this);
}

void TypeScriptParser::SourceElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSourceElement(this);
}


antlrcpp::Any TypeScriptParser::SourceElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitSourceElement(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::SourceElementContext* TypeScriptParser::sourceElement() {
  SourceElementContext *_localctx = _tracker.createInstance<SourceElementContext>(_ctx, getState());
  enterRule(_localctx, 120, TypeScriptParser::RuleSourceElement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(785);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
    case 1: {
      setState(784);
      match(TypeScriptParser::Export);
      break;
    }

    default:
      break;
    }
    setState(787);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

TypeScriptParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::BlockContext* TypeScriptParser::StatementContext::block() {
  return getRuleContext<TypeScriptParser::BlockContext>(0);
}

TypeScriptParser::ImportStatementContext* TypeScriptParser::StatementContext::importStatement() {
  return getRuleContext<TypeScriptParser::ImportStatementContext>(0);
}

TypeScriptParser::ExportStatementContext* TypeScriptParser::StatementContext::exportStatement() {
  return getRuleContext<TypeScriptParser::ExportStatementContext>(0);
}

TypeScriptParser::EmptyStatementContext* TypeScriptParser::StatementContext::emptyStatement() {
  return getRuleContext<TypeScriptParser::EmptyStatementContext>(0);
}

TypeScriptParser::AbstractDeclarationContext* TypeScriptParser::StatementContext::abstractDeclaration() {
  return getRuleContext<TypeScriptParser::AbstractDeclarationContext>(0);
}

TypeScriptParser::DecoratorListContext* TypeScriptParser::StatementContext::decoratorList() {
  return getRuleContext<TypeScriptParser::DecoratorListContext>(0);
}

TypeScriptParser::ClassDeclarationContext* TypeScriptParser::StatementContext::classDeclaration() {
  return getRuleContext<TypeScriptParser::ClassDeclarationContext>(0);
}

TypeScriptParser::InterfaceDeclarationContext* TypeScriptParser::StatementContext::interfaceDeclaration() {
  return getRuleContext<TypeScriptParser::InterfaceDeclarationContext>(0);
}

TypeScriptParser::NamespaceDeclarationContext* TypeScriptParser::StatementContext::namespaceDeclaration() {
  return getRuleContext<TypeScriptParser::NamespaceDeclarationContext>(0);
}

TypeScriptParser::IfStatementContext* TypeScriptParser::StatementContext::ifStatement() {
  return getRuleContext<TypeScriptParser::IfStatementContext>(0);
}

TypeScriptParser::IterationStatementContext* TypeScriptParser::StatementContext::iterationStatement() {
  return getRuleContext<TypeScriptParser::IterationStatementContext>(0);
}

TypeScriptParser::ContinueStatementContext* TypeScriptParser::StatementContext::continueStatement() {
  return getRuleContext<TypeScriptParser::ContinueStatementContext>(0);
}

TypeScriptParser::BreakStatementContext* TypeScriptParser::StatementContext::breakStatement() {
  return getRuleContext<TypeScriptParser::BreakStatementContext>(0);
}

TypeScriptParser::ReturnStatementContext* TypeScriptParser::StatementContext::returnStatement() {
  return getRuleContext<TypeScriptParser::ReturnStatementContext>(0);
}

TypeScriptParser::YieldStatementContext* TypeScriptParser::StatementContext::yieldStatement() {
  return getRuleContext<TypeScriptParser::YieldStatementContext>(0);
}

TypeScriptParser::WithStatementContext* TypeScriptParser::StatementContext::withStatement() {
  return getRuleContext<TypeScriptParser::WithStatementContext>(0);
}

TypeScriptParser::LabelledStatementContext* TypeScriptParser::StatementContext::labelledStatement() {
  return getRuleContext<TypeScriptParser::LabelledStatementContext>(0);
}

TypeScriptParser::SwitchStatementContext* TypeScriptParser::StatementContext::switchStatement() {
  return getRuleContext<TypeScriptParser::SwitchStatementContext>(0);
}

TypeScriptParser::ThrowStatementContext* TypeScriptParser::StatementContext::throwStatement() {
  return getRuleContext<TypeScriptParser::ThrowStatementContext>(0);
}

TypeScriptParser::TryStatementContext* TypeScriptParser::StatementContext::tryStatement() {
  return getRuleContext<TypeScriptParser::TryStatementContext>(0);
}

TypeScriptParser::DebuggerStatementContext* TypeScriptParser::StatementContext::debuggerStatement() {
  return getRuleContext<TypeScriptParser::DebuggerStatementContext>(0);
}

TypeScriptParser::FunctionDeclarationContext* TypeScriptParser::StatementContext::functionDeclaration() {
  return getRuleContext<TypeScriptParser::FunctionDeclarationContext>(0);
}

TypeScriptParser::ArrowFunctionDeclarationContext* TypeScriptParser::StatementContext::arrowFunctionDeclaration() {
  return getRuleContext<TypeScriptParser::ArrowFunctionDeclarationContext>(0);
}

TypeScriptParser::GeneratorFunctionDeclarationContext* TypeScriptParser::StatementContext::generatorFunctionDeclaration() {
  return getRuleContext<TypeScriptParser::GeneratorFunctionDeclarationContext>(0);
}

TypeScriptParser::ExpressionStatementContext* TypeScriptParser::StatementContext::expressionStatement() {
  return getRuleContext<TypeScriptParser::ExpressionStatementContext>(0);
}

TypeScriptParser::VariableStatementContext* TypeScriptParser::StatementContext::variableStatement() {
  return getRuleContext<TypeScriptParser::VariableStatementContext>(0);
}

TypeScriptParser::TypeAliasDeclarationContext* TypeScriptParser::StatementContext::typeAliasDeclaration() {
  return getRuleContext<TypeScriptParser::TypeAliasDeclarationContext>(0);
}

TypeScriptParser::EnumDeclarationContext* TypeScriptParser::StatementContext::enumDeclaration() {
  return getRuleContext<TypeScriptParser::EnumDeclarationContext>(0);
}

tree::TerminalNode* TypeScriptParser::StatementContext::Export() {
  return getToken(TypeScriptParser::Export, 0);
}

TypeScriptParser::StatementContext* TypeScriptParser::StatementContext::statement() {
  return getRuleContext<TypeScriptParser::StatementContext>(0);
}


size_t TypeScriptParser::StatementContext::getRuleIndex() const {
  return TypeScriptParser::RuleStatement;
}

void TypeScriptParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void TypeScriptParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any TypeScriptParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::StatementContext* TypeScriptParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 122, TypeScriptParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(819);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(789);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(790);
      importStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(791);
      exportStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(792);
      emptyStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(793);
      abstractDeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(794);
      decoratorList();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(795);
      classDeclaration();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(796);
      interfaceDeclaration();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(797);
      namespaceDeclaration();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(798);
      ifStatement();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(799);
      iterationStatement();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(800);
      continueStatement();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(801);
      breakStatement();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(802);
      returnStatement();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(803);
      yieldStatement();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(804);
      withStatement();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(805);
      labelledStatement();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(806);
      switchStatement();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(807);
      throwStatement();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(808);
      tryStatement();
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(809);
      debuggerStatement();
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(810);
      functionDeclaration();
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(811);
      arrowFunctionDeclaration();
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(812);
      generatorFunctionDeclaration();
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(813);
      expressionStatement();
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(814);
      variableStatement();
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(815);
      typeAliasDeclaration();
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(816);
      enumDeclaration();
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(817);
      match(TypeScriptParser::Export);
      setState(818);
      statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

TypeScriptParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::BlockContext::OpenBrace() {
  return getToken(TypeScriptParser::OpenBrace, 0);
}

tree::TerminalNode* TypeScriptParser::BlockContext::CloseBrace() {
  return getToken(TypeScriptParser::CloseBrace, 0);
}

TypeScriptParser::StatementListContext* TypeScriptParser::BlockContext::statementList() {
  return getRuleContext<TypeScriptParser::StatementListContext>(0);
}


size_t TypeScriptParser::BlockContext::getRuleIndex() const {
  return TypeScriptParser::RuleBlock;
}

void TypeScriptParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void TypeScriptParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any TypeScriptParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::BlockContext* TypeScriptParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 124, TypeScriptParser::RuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(821);
    match(TypeScriptParser::OpenBrace);
    setState(823);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
    case 1: {
      setState(822);
      statementList();
      break;
    }

    default:
      break;
    }
    setState(825);
    match(TypeScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementListContext ------------------------------------------------------------------

TypeScriptParser::StatementListContext::StatementListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypeScriptParser::StatementContext *> TypeScriptParser::StatementListContext::statement() {
  return getRuleContexts<TypeScriptParser::StatementContext>();
}

TypeScriptParser::StatementContext* TypeScriptParser::StatementListContext::statement(size_t i) {
  return getRuleContext<TypeScriptParser::StatementContext>(i);
}


size_t TypeScriptParser::StatementListContext::getRuleIndex() const {
  return TypeScriptParser::RuleStatementList;
}

void TypeScriptParser::StatementListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementList(this);
}

void TypeScriptParser::StatementListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementList(this);
}


antlrcpp::Any TypeScriptParser::StatementListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitStatementList(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::StatementListContext* TypeScriptParser::statementList() {
  StatementListContext *_localctx = _tracker.createInstance<StatementListContext>(_ctx, getState());
  enterRule(_localctx, 126, TypeScriptParser::RuleStatementList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(828); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(827);
              statement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(830); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AbstractDeclarationContext ------------------------------------------------------------------

TypeScriptParser::AbstractDeclarationContext::AbstractDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::AbstractDeclarationContext::Abstract() {
  return getToken(TypeScriptParser::Abstract, 0);
}

TypeScriptParser::EosContext* TypeScriptParser::AbstractDeclarationContext::eos() {
  return getRuleContext<TypeScriptParser::EosContext>(0);
}

tree::TerminalNode* TypeScriptParser::AbstractDeclarationContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

TypeScriptParser::CallSignatureContext* TypeScriptParser::AbstractDeclarationContext::callSignature() {
  return getRuleContext<TypeScriptParser::CallSignatureContext>(0);
}

TypeScriptParser::VariableStatementContext* TypeScriptParser::AbstractDeclarationContext::variableStatement() {
  return getRuleContext<TypeScriptParser::VariableStatementContext>(0);
}


size_t TypeScriptParser::AbstractDeclarationContext::getRuleIndex() const {
  return TypeScriptParser::RuleAbstractDeclaration;
}

void TypeScriptParser::AbstractDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractDeclaration(this);
}

void TypeScriptParser::AbstractDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractDeclaration(this);
}


antlrcpp::Any TypeScriptParser::AbstractDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitAbstractDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::AbstractDeclarationContext* TypeScriptParser::abstractDeclaration() {
  AbstractDeclarationContext *_localctx = _tracker.createInstance<AbstractDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 128, TypeScriptParser::RuleAbstractDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(832);
    match(TypeScriptParser::Abstract);
    setState(836);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx)) {
    case 1: {
      setState(833);
      match(TypeScriptParser::Identifier);
      setState(834);
      callSignature();
      break;
    }

    case 2: {
      setState(835);
      variableStatement();
      break;
    }

    default:
      break;
    }
    setState(838);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportStatementContext ------------------------------------------------------------------

TypeScriptParser::ImportStatementContext::ImportStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::ImportStatementContext::Import() {
  return getToken(TypeScriptParser::Import, 0);
}

TypeScriptParser::FromBlockContext* TypeScriptParser::ImportStatementContext::fromBlock() {
  return getRuleContext<TypeScriptParser::FromBlockContext>(0);
}

TypeScriptParser::ImportAliasDeclarationContext* TypeScriptParser::ImportStatementContext::importAliasDeclaration() {
  return getRuleContext<TypeScriptParser::ImportAliasDeclarationContext>(0);
}


size_t TypeScriptParser::ImportStatementContext::getRuleIndex() const {
  return TypeScriptParser::RuleImportStatement;
}

void TypeScriptParser::ImportStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportStatement(this);
}

void TypeScriptParser::ImportStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportStatement(this);
}


antlrcpp::Any TypeScriptParser::ImportStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitImportStatement(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ImportStatementContext* TypeScriptParser::importStatement() {
  ImportStatementContext *_localctx = _tracker.createInstance<ImportStatementContext>(_ctx, getState());
  enterRule(_localctx, 130, TypeScriptParser::RuleImportStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(840);
    match(TypeScriptParser::Import);
    setState(843);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
    case 1: {
      setState(841);
      fromBlock();
      break;
    }

    case 2: {
      setState(842);
      importAliasDeclaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FromBlockContext ------------------------------------------------------------------

TypeScriptParser::FromBlockContext::FromBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::FromBlockContext::From() {
  return getToken(TypeScriptParser::From, 0);
}

tree::TerminalNode* TypeScriptParser::FromBlockContext::StringLiteral() {
  return getToken(TypeScriptParser::StringLiteral, 0);
}

TypeScriptParser::EosContext* TypeScriptParser::FromBlockContext::eos() {
  return getRuleContext<TypeScriptParser::EosContext>(0);
}

tree::TerminalNode* TypeScriptParser::FromBlockContext::Multiply() {
  return getToken(TypeScriptParser::Multiply, 0);
}

TypeScriptParser::MultipleImportStatementContext* TypeScriptParser::FromBlockContext::multipleImportStatement() {
  return getRuleContext<TypeScriptParser::MultipleImportStatementContext>(0);
}

tree::TerminalNode* TypeScriptParser::FromBlockContext::As() {
  return getToken(TypeScriptParser::As, 0);
}

TypeScriptParser::IdentifierNameContext* TypeScriptParser::FromBlockContext::identifierName() {
  return getRuleContext<TypeScriptParser::IdentifierNameContext>(0);
}


size_t TypeScriptParser::FromBlockContext::getRuleIndex() const {
  return TypeScriptParser::RuleFromBlock;
}

void TypeScriptParser::FromBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFromBlock(this);
}

void TypeScriptParser::FromBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFromBlock(this);
}


antlrcpp::Any TypeScriptParser::FromBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitFromBlock(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::FromBlockContext* TypeScriptParser::fromBlock() {
  FromBlockContext *_localctx = _tracker.createInstance<FromBlockContext>(_ctx, getState());
  enterRule(_localctx, 132, TypeScriptParser::RuleFromBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(847);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypeScriptParser::Multiply: {
        setState(845);
        match(TypeScriptParser::Multiply);
        break;
      }

      case TypeScriptParser::OpenBrace:
      case TypeScriptParser::NullLiteral:
      case TypeScriptParser::BooleanLiteral:
      case TypeScriptParser::Break:
      case TypeScriptParser::Do:
      case TypeScriptParser::Instanceof:
      case TypeScriptParser::Typeof:
      case TypeScriptParser::Case:
      case TypeScriptParser::Else:
      case TypeScriptParser::New:
      case TypeScriptParser::Var:
      case TypeScriptParser::Catch:
      case TypeScriptParser::Finally:
      case TypeScriptParser::Return:
      case TypeScriptParser::Void:
      case TypeScriptParser::Continue:
      case TypeScriptParser::For:
      case TypeScriptParser::Switch:
      case TypeScriptParser::While:
      case TypeScriptParser::Debugger:
      case TypeScriptParser::Function_:
      case TypeScriptParser::This:
      case TypeScriptParser::With:
      case TypeScriptParser::Default:
      case TypeScriptParser::If:
      case TypeScriptParser::Throw:
      case TypeScriptParser::Delete:
      case TypeScriptParser::In:
      case TypeScriptParser::Try:
      case TypeScriptParser::From:
      case TypeScriptParser::ReadOnly:
      case TypeScriptParser::Async:
      case TypeScriptParser::Class:
      case TypeScriptParser::Enum:
      case TypeScriptParser::Extends:
      case TypeScriptParser::Super:
      case TypeScriptParser::Const:
      case TypeScriptParser::Export:
      case TypeScriptParser::Import:
      case TypeScriptParser::Implements:
      case TypeScriptParser::Let:
      case TypeScriptParser::Private:
      case TypeScriptParser::Public:
      case TypeScriptParser::Interface:
      case TypeScriptParser::Package:
      case TypeScriptParser::Protected:
      case TypeScriptParser::Static:
      case TypeScriptParser::Yield:
      case TypeScriptParser::String:
      case TypeScriptParser::TypeAlias:
      case TypeScriptParser::Get:
      case TypeScriptParser::Set:
      case TypeScriptParser::Require:
      case TypeScriptParser::Identifier: {
        setState(846);
        multipleImportStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(851);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::As) {
      setState(849);
      match(TypeScriptParser::As);
      setState(850);
      identifierName();
    }
    setState(853);
    match(TypeScriptParser::From);
    setState(854);
    match(TypeScriptParser::StringLiteral);
    setState(855);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultipleImportStatementContext ------------------------------------------------------------------

TypeScriptParser::MultipleImportStatementContext::MultipleImportStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::MultipleImportStatementContext::OpenBrace() {
  return getToken(TypeScriptParser::OpenBrace, 0);
}

std::vector<TypeScriptParser::IdentifierNameContext *> TypeScriptParser::MultipleImportStatementContext::identifierName() {
  return getRuleContexts<TypeScriptParser::IdentifierNameContext>();
}

TypeScriptParser::IdentifierNameContext* TypeScriptParser::MultipleImportStatementContext::identifierName(size_t i) {
  return getRuleContext<TypeScriptParser::IdentifierNameContext>(i);
}

tree::TerminalNode* TypeScriptParser::MultipleImportStatementContext::CloseBrace() {
  return getToken(TypeScriptParser::CloseBrace, 0);
}

std::vector<tree::TerminalNode *> TypeScriptParser::MultipleImportStatementContext::Comma() {
  return getTokens(TypeScriptParser::Comma);
}

tree::TerminalNode* TypeScriptParser::MultipleImportStatementContext::Comma(size_t i) {
  return getToken(TypeScriptParser::Comma, i);
}


size_t TypeScriptParser::MultipleImportStatementContext::getRuleIndex() const {
  return TypeScriptParser::RuleMultipleImportStatement;
}

void TypeScriptParser::MultipleImportStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultipleImportStatement(this);
}

void TypeScriptParser::MultipleImportStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultipleImportStatement(this);
}


antlrcpp::Any TypeScriptParser::MultipleImportStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitMultipleImportStatement(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::MultipleImportStatementContext* TypeScriptParser::multipleImportStatement() {
  MultipleImportStatementContext *_localctx = _tracker.createInstance<MultipleImportStatementContext>(_ctx, getState());
  enterRule(_localctx, 134, TypeScriptParser::RuleMultipleImportStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(860);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypeScriptParser::NullLiteral)
      | (1ULL << TypeScriptParser::BooleanLiteral)
      | (1ULL << TypeScriptParser::Break)
      | (1ULL << TypeScriptParser::Do))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (TypeScriptParser::Instanceof - 64))
      | (1ULL << (TypeScriptParser::Typeof - 64))
      | (1ULL << (TypeScriptParser::Case - 64))
      | (1ULL << (TypeScriptParser::Else - 64))
      | (1ULL << (TypeScriptParser::New - 64))
      | (1ULL << (TypeScriptParser::Var - 64))
      | (1ULL << (TypeScriptParser::Catch - 64))
      | (1ULL << (TypeScriptParser::Finally - 64))
      | (1ULL << (TypeScriptParser::Return - 64))
      | (1ULL << (TypeScriptParser::Void - 64))
      | (1ULL << (TypeScriptParser::Continue - 64))
      | (1ULL << (TypeScriptParser::For - 64))
      | (1ULL << (TypeScriptParser::Switch - 64))
      | (1ULL << (TypeScriptParser::While - 64))
      | (1ULL << (TypeScriptParser::Debugger - 64))
      | (1ULL << (TypeScriptParser::Function_ - 64))
      | (1ULL << (TypeScriptParser::This - 64))
      | (1ULL << (TypeScriptParser::With - 64))
      | (1ULL << (TypeScriptParser::Default - 64))
      | (1ULL << (TypeScriptParser::If - 64))
      | (1ULL << (TypeScriptParser::Throw - 64))
      | (1ULL << (TypeScriptParser::Delete - 64))
      | (1ULL << (TypeScriptParser::In - 64))
      | (1ULL << (TypeScriptParser::Try - 64))
      | (1ULL << (TypeScriptParser::From - 64))
      | (1ULL << (TypeScriptParser::ReadOnly - 64))
      | (1ULL << (TypeScriptParser::Async - 64))
      | (1ULL << (TypeScriptParser::Class - 64))
      | (1ULL << (TypeScriptParser::Enum - 64))
      | (1ULL << (TypeScriptParser::Extends - 64))
      | (1ULL << (TypeScriptParser::Super - 64))
      | (1ULL << (TypeScriptParser::Const - 64))
      | (1ULL << (TypeScriptParser::Export - 64))
      | (1ULL << (TypeScriptParser::Import - 64))
      | (1ULL << (TypeScriptParser::Implements - 64))
      | (1ULL << (TypeScriptParser::Let - 64))
      | (1ULL << (TypeScriptParser::Private - 64))
      | (1ULL << (TypeScriptParser::Public - 64))
      | (1ULL << (TypeScriptParser::Interface - 64))
      | (1ULL << (TypeScriptParser::Package - 64))
      | (1ULL << (TypeScriptParser::Protected - 64))
      | (1ULL << (TypeScriptParser::Static - 64))
      | (1ULL << (TypeScriptParser::Yield - 64))
      | (1ULL << (TypeScriptParser::String - 64))
      | (1ULL << (TypeScriptParser::TypeAlias - 64))
      | (1ULL << (TypeScriptParser::Get - 64))
      | (1ULL << (TypeScriptParser::Set - 64))
      | (1ULL << (TypeScriptParser::Require - 64))
      | (1ULL << (TypeScriptParser::Identifier - 64)))) != 0)) {
      setState(857);
      identifierName();
      setState(858);
      match(TypeScriptParser::Comma);
    }
    setState(862);
    match(TypeScriptParser::OpenBrace);
    setState(863);
    identifierName();
    setState(868);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypeScriptParser::Comma) {
      setState(864);
      match(TypeScriptParser::Comma);
      setState(865);
      identifierName();
      setState(870);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(871);
    match(TypeScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExportStatementContext ------------------------------------------------------------------

TypeScriptParser::ExportStatementContext::ExportStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::ExportStatementContext::Export() {
  return getToken(TypeScriptParser::Export, 0);
}

TypeScriptParser::FromBlockContext* TypeScriptParser::ExportStatementContext::fromBlock() {
  return getRuleContext<TypeScriptParser::FromBlockContext>(0);
}

TypeScriptParser::StatementContext* TypeScriptParser::ExportStatementContext::statement() {
  return getRuleContext<TypeScriptParser::StatementContext>(0);
}

tree::TerminalNode* TypeScriptParser::ExportStatementContext::Default() {
  return getToken(TypeScriptParser::Default, 0);
}


size_t TypeScriptParser::ExportStatementContext::getRuleIndex() const {
  return TypeScriptParser::RuleExportStatement;
}

void TypeScriptParser::ExportStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExportStatement(this);
}

void TypeScriptParser::ExportStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExportStatement(this);
}


antlrcpp::Any TypeScriptParser::ExportStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitExportStatement(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ExportStatementContext* TypeScriptParser::exportStatement() {
  ExportStatementContext *_localctx = _tracker.createInstance<ExportStatementContext>(_ctx, getState());
  enterRule(_localctx, 136, TypeScriptParser::RuleExportStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(873);
    match(TypeScriptParser::Export);
    setState(875);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx)) {
    case 1: {
      setState(874);
      match(TypeScriptParser::Default);
      break;
    }

    default:
      break;
    }
    setState(879);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
    case 1: {
      setState(877);
      fromBlock();
      break;
    }

    case 2: {
      setState(878);
      statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

TypeScriptParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::VarModifierContext* TypeScriptParser::VariableDeclarationContext::varModifier() {
  return getRuleContext<TypeScriptParser::VarModifierContext>(0);
}

TypeScriptParser::VariableDeclarationListContext* TypeScriptParser::VariableDeclarationContext::variableDeclarationList() {
  return getRuleContext<TypeScriptParser::VariableDeclarationListContext>(0);
}


size_t TypeScriptParser::VariableDeclarationContext::getRuleIndex() const {
  return TypeScriptParser::RuleVariableDeclaration;
}

void TypeScriptParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void TypeScriptParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}


antlrcpp::Any TypeScriptParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::VariableDeclarationContext* TypeScriptParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 138, TypeScriptParser::RuleVariableDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(881);
    dynamic_cast<VariableDeclarationContext *>(_localctx)->kind = varModifier();
    setState(882);
    dynamic_cast<VariableDeclarationContext *>(_localctx)->declarations = variableDeclarationList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableStatementContext ------------------------------------------------------------------

TypeScriptParser::VariableStatementContext::VariableStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::VariableDeclarationContext* TypeScriptParser::VariableStatementContext::variableDeclaration() {
  return getRuleContext<TypeScriptParser::VariableDeclarationContext>(0);
}

TypeScriptParser::BindingPatternContext* TypeScriptParser::VariableStatementContext::bindingPattern() {
  return getRuleContext<TypeScriptParser::BindingPatternContext>(0);
}

TypeScriptParser::InitializerContext* TypeScriptParser::VariableStatementContext::initializer() {
  return getRuleContext<TypeScriptParser::InitializerContext>(0);
}

TypeScriptParser::TypeAnnotationContext* TypeScriptParser::VariableStatementContext::typeAnnotation() {
  return getRuleContext<TypeScriptParser::TypeAnnotationContext>(0);
}

tree::TerminalNode* TypeScriptParser::VariableStatementContext::SemiColon() {
  return getToken(TypeScriptParser::SemiColon, 0);
}

TypeScriptParser::VariableDeclarationListContext* TypeScriptParser::VariableStatementContext::variableDeclarationList() {
  return getRuleContext<TypeScriptParser::VariableDeclarationListContext>(0);
}

TypeScriptParser::AccessibilityModifierContext* TypeScriptParser::VariableStatementContext::accessibilityModifier() {
  return getRuleContext<TypeScriptParser::AccessibilityModifierContext>(0);
}

TypeScriptParser::VarModifierContext* TypeScriptParser::VariableStatementContext::varModifier() {
  return getRuleContext<TypeScriptParser::VarModifierContext>(0);
}

tree::TerminalNode* TypeScriptParser::VariableStatementContext::ReadOnly() {
  return getToken(TypeScriptParser::ReadOnly, 0);
}

tree::TerminalNode* TypeScriptParser::VariableStatementContext::Declare() {
  return getToken(TypeScriptParser::Declare, 0);
}


size_t TypeScriptParser::VariableStatementContext::getRuleIndex() const {
  return TypeScriptParser::RuleVariableStatement;
}

void TypeScriptParser::VariableStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableStatement(this);
}

void TypeScriptParser::VariableStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableStatement(this);
}


antlrcpp::Any TypeScriptParser::VariableStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitVariableStatement(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::VariableStatementContext* TypeScriptParser::variableStatement() {
  VariableStatementContext *_localctx = _tracker.createInstance<VariableStatementContext>(_ctx, getState());
  enterRule(_localctx, 140, TypeScriptParser::RuleVariableStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(914);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(884);
      variableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(885);
      bindingPattern();
      setState(887);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypeScriptParser::Colon) {
        setState(886);
        typeAnnotation();
      }
      setState(889);
      initializer();
      setState(891);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
      case 1: {
        setState(890);
        match(TypeScriptParser::SemiColon);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(894);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 101) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 101)) & ((1ULL << (TypeScriptParser::Private - 101))
        | (1ULL << (TypeScriptParser::Public - 101))
        | (1ULL << (TypeScriptParser::Protected - 101)))) != 0)) {
        setState(893);
        accessibilityModifier();
      }
      setState(897);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (TypeScriptParser::Var - 69))
        | (1ULL << (TypeScriptParser::Const - 69))
        | (1ULL << (TypeScriptParser::Let - 69)))) != 0)) {
        setState(896);
        varModifier();
      }
      setState(900);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypeScriptParser::ReadOnly) {
        setState(899);
        match(TypeScriptParser::ReadOnly);
      }
      setState(902);
      variableDeclarationList();
      setState(904);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx)) {
      case 1: {
        setState(903);
        match(TypeScriptParser::SemiColon);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(906);
      match(TypeScriptParser::Declare);
      setState(908);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (TypeScriptParser::Var - 69))
        | (1ULL << (TypeScriptParser::Const - 69))
        | (1ULL << (TypeScriptParser::Let - 69)))) != 0)) {
        setState(907);
        varModifier();
      }
      setState(910);
      variableDeclarationList();
      setState(912);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx)) {
      case 1: {
        setState(911);
        match(TypeScriptParser::SemiColon);
        break;
      }

      default:
        break;
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationListContext ------------------------------------------------------------------

TypeScriptParser::VariableDeclarationListContext::VariableDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypeScriptParser::VariableDeclaratorContext *> TypeScriptParser::VariableDeclarationListContext::variableDeclarator() {
  return getRuleContexts<TypeScriptParser::VariableDeclaratorContext>();
}

TypeScriptParser::VariableDeclaratorContext* TypeScriptParser::VariableDeclarationListContext::variableDeclarator(size_t i) {
  return getRuleContext<TypeScriptParser::VariableDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> TypeScriptParser::VariableDeclarationListContext::Comma() {
  return getTokens(TypeScriptParser::Comma);
}

tree::TerminalNode* TypeScriptParser::VariableDeclarationListContext::Comma(size_t i) {
  return getToken(TypeScriptParser::Comma, i);
}


size_t TypeScriptParser::VariableDeclarationListContext::getRuleIndex() const {
  return TypeScriptParser::RuleVariableDeclarationList;
}

void TypeScriptParser::VariableDeclarationListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarationList(this);
}

void TypeScriptParser::VariableDeclarationListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarationList(this);
}


antlrcpp::Any TypeScriptParser::VariableDeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarationList(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::VariableDeclarationListContext* TypeScriptParser::variableDeclarationList() {
  VariableDeclarationListContext *_localctx = _tracker.createInstance<VariableDeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 142, TypeScriptParser::RuleVariableDeclarationList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(916);
    variableDeclarator();
    setState(921);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(917);
        match(TypeScriptParser::Comma);
        setState(918);
        variableDeclarator(); 
      }
      setState(923);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarateIdPatternContext ------------------------------------------------------------------

TypeScriptParser::VariableDeclarateIdPatternContext::VariableDeclarateIdPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::IdentifierOrKeyWordContext* TypeScriptParser::VariableDeclarateIdPatternContext::identifierOrKeyWord() {
  return getRuleContext<TypeScriptParser::IdentifierOrKeyWordContext>(0);
}

TypeScriptParser::ArrayLiteralContext* TypeScriptParser::VariableDeclarateIdPatternContext::arrayLiteral() {
  return getRuleContext<TypeScriptParser::ArrayLiteralContext>(0);
}

TypeScriptParser::ObjectLiteralContext* TypeScriptParser::VariableDeclarateIdPatternContext::objectLiteral() {
  return getRuleContext<TypeScriptParser::ObjectLiteralContext>(0);
}


size_t TypeScriptParser::VariableDeclarateIdPatternContext::getRuleIndex() const {
  return TypeScriptParser::RuleVariableDeclarateIdPattern;
}

void TypeScriptParser::VariableDeclarateIdPatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarateIdPattern(this);
}

void TypeScriptParser::VariableDeclarateIdPatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarateIdPattern(this);
}


antlrcpp::Any TypeScriptParser::VariableDeclarateIdPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarateIdPattern(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::VariableDeclarateIdPatternContext* TypeScriptParser::variableDeclarateIdPattern() {
  VariableDeclarateIdPatternContext *_localctx = _tracker.createInstance<VariableDeclarateIdPatternContext>(_ctx, getState());
  enterRule(_localctx, 144, TypeScriptParser::RuleVariableDeclarateIdPattern);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(927);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypeScriptParser::TypeAlias:
      case TypeScriptParser::Require:
      case TypeScriptParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(924);
        identifierOrKeyWord();
        break;
      }

      case TypeScriptParser::OpenBracket: {
        enterOuterAlt(_localctx, 2);
        setState(925);
        arrayLiteral();
        break;
      }

      case TypeScriptParser::OpenBrace: {
        enterOuterAlt(_localctx, 3);
        setState(926);
        objectLiteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableAnnotationContext ------------------------------------------------------------------

TypeScriptParser::VariableAnnotationContext::VariableAnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::VariableAnnotationContext::Colon() {
  return getToken(TypeScriptParser::Colon, 0);
}

TypeScriptParser::Type_Context* TypeScriptParser::VariableAnnotationContext::type_() {
  return getRuleContext<TypeScriptParser::Type_Context>(0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::VariableAnnotationContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}


size_t TypeScriptParser::VariableAnnotationContext::getRuleIndex() const {
  return TypeScriptParser::RuleVariableAnnotation;
}

void TypeScriptParser::VariableAnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableAnnotation(this);
}

void TypeScriptParser::VariableAnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableAnnotation(this);
}


antlrcpp::Any TypeScriptParser::VariableAnnotationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitVariableAnnotation(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::VariableAnnotationContext* TypeScriptParser::variableAnnotation() {
  VariableAnnotationContext *_localctx = _tracker.createInstance<VariableAnnotationContext>(_ctx, getState());
  enterRule(_localctx, 146, TypeScriptParser::RuleVariableAnnotation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(929);
    match(TypeScriptParser::Colon);
    setState(932);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx)) {
    case 1: {
      setState(930);
      type_();
      break;
    }

    case 2: {
      setState(931);
      expression(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableInitPatternContext ------------------------------------------------------------------

TypeScriptParser::VariableInitPatternContext::VariableInitPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::ExpressionContext* TypeScriptParser::VariableInitPatternContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

TypeScriptParser::TypeParametersContext* TypeScriptParser::VariableInitPatternContext::typeParameters() {
  return getRuleContext<TypeScriptParser::TypeParametersContext>(0);
}


size_t TypeScriptParser::VariableInitPatternContext::getRuleIndex() const {
  return TypeScriptParser::RuleVariableInitPattern;
}

void TypeScriptParser::VariableInitPatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableInitPattern(this);
}

void TypeScriptParser::VariableInitPatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableInitPattern(this);
}


antlrcpp::Any TypeScriptParser::VariableInitPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitVariableInitPattern(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::VariableInitPatternContext* TypeScriptParser::variableInitPattern() {
  VariableInitPatternContext *_localctx = _tracker.createInstance<VariableInitPatternContext>(_ctx, getState());
  enterRule(_localctx, 148, TypeScriptParser::RuleVariableInitPattern);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(935);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
    case 1: {
      setState(934);
      typeParameters();
      break;
    }

    default:
      break;
    }
    setState(937);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclaratorContext ------------------------------------------------------------------

TypeScriptParser::VariableDeclaratorContext::VariableDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::VariableDeclarateIdPatternContext* TypeScriptParser::VariableDeclaratorContext::variableDeclarateIdPattern() {
  return getRuleContext<TypeScriptParser::VariableDeclarateIdPatternContext>(0);
}

tree::TerminalNode* TypeScriptParser::VariableDeclaratorContext::Assign() {
  return getToken(TypeScriptParser::Assign, 0);
}

TypeScriptParser::VariableAnnotationContext* TypeScriptParser::VariableDeclaratorContext::variableAnnotation() {
  return getRuleContext<TypeScriptParser::VariableAnnotationContext>(0);
}

TypeScriptParser::VariableInitPatternContext* TypeScriptParser::VariableDeclaratorContext::variableInitPattern() {
  return getRuleContext<TypeScriptParser::VariableInitPatternContext>(0);
}


size_t TypeScriptParser::VariableDeclaratorContext::getRuleIndex() const {
  return TypeScriptParser::RuleVariableDeclarator;
}

void TypeScriptParser::VariableDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarator(this);
}

void TypeScriptParser::VariableDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarator(this);
}


antlrcpp::Any TypeScriptParser::VariableDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarator(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::VariableDeclaratorContext* TypeScriptParser::variableDeclarator() {
  VariableDeclaratorContext *_localctx = _tracker.createInstance<VariableDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 150, TypeScriptParser::RuleVariableDeclarator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(939);
    dynamic_cast<VariableDeclaratorContext *>(_localctx)->id = variableDeclarateIdPattern();
    setState(941);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 103, _ctx)) {
    case 1: {
      setState(940);
      dynamic_cast<VariableDeclaratorContext *>(_localctx)->annotation = variableAnnotation();
      break;
    }

    default:
      break;
    }
    setState(945);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx)) {
    case 1: {
      setState(943);
      match(TypeScriptParser::Assign);
      setState(944);
      dynamic_cast<VariableDeclaratorContext *>(_localctx)->init = variableInitPattern();
      break;
    }

    default:
      break;
    }

            dynamic_cast<VariableDeclaratorContext *>(_localctx)->type =  "VariableDeclarator";
        
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyStatementContext ------------------------------------------------------------------

TypeScriptParser::EmptyStatementContext::EmptyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::EmptyStatementContext::SemiColon() {
  return getToken(TypeScriptParser::SemiColon, 0);
}


size_t TypeScriptParser::EmptyStatementContext::getRuleIndex() const {
  return TypeScriptParser::RuleEmptyStatement;
}

void TypeScriptParser::EmptyStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyStatement(this);
}

void TypeScriptParser::EmptyStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyStatement(this);
}


antlrcpp::Any TypeScriptParser::EmptyStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitEmptyStatement(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::EmptyStatementContext* TypeScriptParser::emptyStatement() {
  EmptyStatementContext *_localctx = _tracker.createInstance<EmptyStatementContext>(_ctx, getState());
  enterRule(_localctx, 152, TypeScriptParser::RuleEmptyStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(949);
    match(TypeScriptParser::SemiColon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

TypeScriptParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::ExpressionSequenceContext* TypeScriptParser::ExpressionStatementContext::expressionSequence() {
  return getRuleContext<TypeScriptParser::ExpressionSequenceContext>(0);
}

tree::TerminalNode* TypeScriptParser::ExpressionStatementContext::SemiColon() {
  return getToken(TypeScriptParser::SemiColon, 0);
}


size_t TypeScriptParser::ExpressionStatementContext::getRuleIndex() const {
  return TypeScriptParser::RuleExpressionStatement;
}

void TypeScriptParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void TypeScriptParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}


antlrcpp::Any TypeScriptParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ExpressionStatementContext* TypeScriptParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 154, TypeScriptParser::RuleExpressionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(951);

    if (!(this.notOpenBraceAndNotFunction())) throw FailedPredicateException(this, "this.notOpenBraceAndNotFunction()");
    setState(952);
    expressionSequence();
    setState(954);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx)) {
    case 1: {
      setState(953);
      match(TypeScriptParser::SemiColon);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

TypeScriptParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::IfStatementContext::If() {
  return getToken(TypeScriptParser::If, 0);
}

tree::TerminalNode* TypeScriptParser::IfStatementContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

tree::TerminalNode* TypeScriptParser::IfStatementContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

TypeScriptParser::ExpressionSequenceContext* TypeScriptParser::IfStatementContext::expressionSequence() {
  return getRuleContext<TypeScriptParser::ExpressionSequenceContext>(0);
}

std::vector<TypeScriptParser::StatementContext *> TypeScriptParser::IfStatementContext::statement() {
  return getRuleContexts<TypeScriptParser::StatementContext>();
}

TypeScriptParser::StatementContext* TypeScriptParser::IfStatementContext::statement(size_t i) {
  return getRuleContext<TypeScriptParser::StatementContext>(i);
}

tree::TerminalNode* TypeScriptParser::IfStatementContext::Else() {
  return getToken(TypeScriptParser::Else, 0);
}


size_t TypeScriptParser::IfStatementContext::getRuleIndex() const {
  return TypeScriptParser::RuleIfStatement;
}

void TypeScriptParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void TypeScriptParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


antlrcpp::Any TypeScriptParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::IfStatementContext* TypeScriptParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 156, TypeScriptParser::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(956);
    match(TypeScriptParser::If);
    setState(957);
    match(TypeScriptParser::OpenParen);
    setState(958);
    dynamic_cast<IfStatementContext *>(_localctx)->test = expressionSequence();
    setState(959);
    match(TypeScriptParser::CloseParen);
    setState(960);
    dynamic_cast<IfStatementContext *>(_localctx)->consequent = statement();
    setState(963);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, _ctx)) {
    case 1: {
      setState(961);
      match(TypeScriptParser::Else);
      setState(962);
      dynamic_cast<IfStatementContext *>(_localctx)->alternate = statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterationStatementContext ------------------------------------------------------------------

TypeScriptParser::IterationStatementContext::IterationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TypeScriptParser::IterationStatementContext::getRuleIndex() const {
  return TypeScriptParser::RuleIterationStatement;
}

void TypeScriptParser::IterationStatementContext::copyFrom(IterationStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- DoStatementContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::DoStatementContext::Do() {
  return getToken(TypeScriptParser::Do, 0);
}

TypeScriptParser::StatementContext* TypeScriptParser::DoStatementContext::statement() {
  return getRuleContext<TypeScriptParser::StatementContext>(0);
}

tree::TerminalNode* TypeScriptParser::DoStatementContext::While() {
  return getToken(TypeScriptParser::While, 0);
}

tree::TerminalNode* TypeScriptParser::DoStatementContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

TypeScriptParser::ExpressionSequenceContext* TypeScriptParser::DoStatementContext::expressionSequence() {
  return getRuleContext<TypeScriptParser::ExpressionSequenceContext>(0);
}

tree::TerminalNode* TypeScriptParser::DoStatementContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

TypeScriptParser::EosContext* TypeScriptParser::DoStatementContext::eos() {
  return getRuleContext<TypeScriptParser::EosContext>(0);
}

TypeScriptParser::DoStatementContext::DoStatementContext(IterationStatementContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::DoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoStatement(this);
}
void TypeScriptParser::DoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoStatement(this);
}

antlrcpp::Any TypeScriptParser::DoStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitDoStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ForVarStatementContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::ForVarStatementContext::For() {
  return getToken(TypeScriptParser::For, 0);
}

tree::TerminalNode* TypeScriptParser::ForVarStatementContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

TypeScriptParser::VarModifierContext* TypeScriptParser::ForVarStatementContext::varModifier() {
  return getRuleContext<TypeScriptParser::VarModifierContext>(0);
}

TypeScriptParser::VariableDeclarationListContext* TypeScriptParser::ForVarStatementContext::variableDeclarationList() {
  return getRuleContext<TypeScriptParser::VariableDeclarationListContext>(0);
}

std::vector<tree::TerminalNode *> TypeScriptParser::ForVarStatementContext::SemiColon() {
  return getTokens(TypeScriptParser::SemiColon);
}

tree::TerminalNode* TypeScriptParser::ForVarStatementContext::SemiColon(size_t i) {
  return getToken(TypeScriptParser::SemiColon, i);
}

tree::TerminalNode* TypeScriptParser::ForVarStatementContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

TypeScriptParser::StatementContext* TypeScriptParser::ForVarStatementContext::statement() {
  return getRuleContext<TypeScriptParser::StatementContext>(0);
}

std::vector<TypeScriptParser::ExpressionSequenceContext *> TypeScriptParser::ForVarStatementContext::expressionSequence() {
  return getRuleContexts<TypeScriptParser::ExpressionSequenceContext>();
}

TypeScriptParser::ExpressionSequenceContext* TypeScriptParser::ForVarStatementContext::expressionSequence(size_t i) {
  return getRuleContext<TypeScriptParser::ExpressionSequenceContext>(i);
}

TypeScriptParser::ForVarStatementContext::ForVarStatementContext(IterationStatementContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::ForVarStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForVarStatement(this);
}
void TypeScriptParser::ForVarStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForVarStatement(this);
}

antlrcpp::Any TypeScriptParser::ForVarStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitForVarStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ForVarInStatementContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::ForVarInStatementContext::For() {
  return getToken(TypeScriptParser::For, 0);
}

tree::TerminalNode* TypeScriptParser::ForVarInStatementContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

TypeScriptParser::VarModifierContext* TypeScriptParser::ForVarInStatementContext::varModifier() {
  return getRuleContext<TypeScriptParser::VarModifierContext>(0);
}

TypeScriptParser::VariableDeclaratorContext* TypeScriptParser::ForVarInStatementContext::variableDeclarator() {
  return getRuleContext<TypeScriptParser::VariableDeclaratorContext>(0);
}

TypeScriptParser::ExpressionSequenceContext* TypeScriptParser::ForVarInStatementContext::expressionSequence() {
  return getRuleContext<TypeScriptParser::ExpressionSequenceContext>(0);
}

tree::TerminalNode* TypeScriptParser::ForVarInStatementContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

TypeScriptParser::StatementContext* TypeScriptParser::ForVarInStatementContext::statement() {
  return getRuleContext<TypeScriptParser::StatementContext>(0);
}

tree::TerminalNode* TypeScriptParser::ForVarInStatementContext::In() {
  return getToken(TypeScriptParser::In, 0);
}

tree::TerminalNode* TypeScriptParser::ForVarInStatementContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

TypeScriptParser::ForVarInStatementContext::ForVarInStatementContext(IterationStatementContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::ForVarInStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForVarInStatement(this);
}
void TypeScriptParser::ForVarInStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForVarInStatement(this);
}

antlrcpp::Any TypeScriptParser::ForVarInStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitForVarInStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileStatementContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::WhileStatementContext::While() {
  return getToken(TypeScriptParser::While, 0);
}

tree::TerminalNode* TypeScriptParser::WhileStatementContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

TypeScriptParser::ExpressionSequenceContext* TypeScriptParser::WhileStatementContext::expressionSequence() {
  return getRuleContext<TypeScriptParser::ExpressionSequenceContext>(0);
}

tree::TerminalNode* TypeScriptParser::WhileStatementContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

TypeScriptParser::StatementContext* TypeScriptParser::WhileStatementContext::statement() {
  return getRuleContext<TypeScriptParser::StatementContext>(0);
}

TypeScriptParser::WhileStatementContext::WhileStatementContext(IterationStatementContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}
void TypeScriptParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}

antlrcpp::Any TypeScriptParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ForStatementContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::ForStatementContext::For() {
  return getToken(TypeScriptParser::For, 0);
}

tree::TerminalNode* TypeScriptParser::ForStatementContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

std::vector<tree::TerminalNode *> TypeScriptParser::ForStatementContext::SemiColon() {
  return getTokens(TypeScriptParser::SemiColon);
}

tree::TerminalNode* TypeScriptParser::ForStatementContext::SemiColon(size_t i) {
  return getToken(TypeScriptParser::SemiColon, i);
}

tree::TerminalNode* TypeScriptParser::ForStatementContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

TypeScriptParser::StatementContext* TypeScriptParser::ForStatementContext::statement() {
  return getRuleContext<TypeScriptParser::StatementContext>(0);
}

std::vector<TypeScriptParser::ExpressionSequenceContext *> TypeScriptParser::ForStatementContext::expressionSequence() {
  return getRuleContexts<TypeScriptParser::ExpressionSequenceContext>();
}

TypeScriptParser::ExpressionSequenceContext* TypeScriptParser::ForStatementContext::expressionSequence(size_t i) {
  return getRuleContext<TypeScriptParser::ExpressionSequenceContext>(i);
}

TypeScriptParser::ForStatementContext::ForStatementContext(IterationStatementContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}
void TypeScriptParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}

antlrcpp::Any TypeScriptParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ForInStatementContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::ForInStatementContext::For() {
  return getToken(TypeScriptParser::For, 0);
}

tree::TerminalNode* TypeScriptParser::ForInStatementContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::ForInStatementContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

TypeScriptParser::ExpressionSequenceContext* TypeScriptParser::ForInStatementContext::expressionSequence() {
  return getRuleContext<TypeScriptParser::ExpressionSequenceContext>(0);
}

tree::TerminalNode* TypeScriptParser::ForInStatementContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

TypeScriptParser::StatementContext* TypeScriptParser::ForInStatementContext::statement() {
  return getRuleContext<TypeScriptParser::StatementContext>(0);
}

tree::TerminalNode* TypeScriptParser::ForInStatementContext::In() {
  return getToken(TypeScriptParser::In, 0);
}

tree::TerminalNode* TypeScriptParser::ForInStatementContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

TypeScriptParser::ForInStatementContext::ForInStatementContext(IterationStatementContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::ForInStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForInStatement(this);
}
void TypeScriptParser::ForInStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForInStatement(this);
}

antlrcpp::Any TypeScriptParser::ForInStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitForInStatement(this);
  else
    return visitor->visitChildren(this);
}
TypeScriptParser::IterationStatementContext* TypeScriptParser::iterationStatement() {
  IterationStatementContext *_localctx = _tracker.createInstance<IterationStatementContext>(_ctx, getState());
  enterRule(_localctx, 158, TypeScriptParser::RuleIterationStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1034);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<IterationStatementContext *>(_tracker.createInstance<TypeScriptParser::DoStatementContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(965);
      match(TypeScriptParser::Do);
      setState(966);
      statement();
      setState(967);
      match(TypeScriptParser::While);
      setState(968);
      match(TypeScriptParser::OpenParen);
      setState(969);
      expressionSequence();
      setState(970);
      match(TypeScriptParser::CloseParen);
      setState(971);
      eos();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<IterationStatementContext *>(_tracker.createInstance<TypeScriptParser::WhileStatementContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(973);
      match(TypeScriptParser::While);
      setState(974);
      match(TypeScriptParser::OpenParen);
      setState(975);
      expressionSequence();
      setState(976);
      match(TypeScriptParser::CloseParen);
      setState(977);
      statement();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<IterationStatementContext *>(_tracker.createInstance<TypeScriptParser::ForStatementContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(979);
      match(TypeScriptParser::For);
      setState(980);
      match(TypeScriptParser::OpenParen);
      setState(982);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TypeScriptParser::RegularExpressionLiteral)
        | (1ULL << TypeScriptParser::OpenBracket)
        | (1ULL << TypeScriptParser::OpenParen)
        | (1ULL << TypeScriptParser::OpenBrace)
        | (1ULL << TypeScriptParser::PlusPlus)
        | (1ULL << TypeScriptParser::MinusMinus)
        | (1ULL << TypeScriptParser::Plus)
        | (1ULL << TypeScriptParser::Minus)
        | (1ULL << TypeScriptParser::BitNot)
        | (1ULL << TypeScriptParser::Not)
        | (1ULL << TypeScriptParser::LessThan)
        | (1ULL << TypeScriptParser::NullLiteral)
        | (1ULL << TypeScriptParser::BooleanLiteral)
        | (1ULL << TypeScriptParser::DecimalLiteral)
        | (1ULL << TypeScriptParser::HexIntegerLiteral)
        | (1ULL << TypeScriptParser::OctalIntegerLiteral)
        | (1ULL << TypeScriptParser::OctalIntegerLiteral2)
        | (1ULL << TypeScriptParser::BinaryIntegerLiteral)
        | (1ULL << TypeScriptParser::Break)
        | (1ULL << TypeScriptParser::Do))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (TypeScriptParser::Instanceof - 64))
        | (1ULL << (TypeScriptParser::Typeof - 64))
        | (1ULL << (TypeScriptParser::Case - 64))
        | (1ULL << (TypeScriptParser::Else - 64))
        | (1ULL << (TypeScriptParser::New - 64))
        | (1ULL << (TypeScriptParser::Var - 64))
        | (1ULL << (TypeScriptParser::Catch - 64))
        | (1ULL << (TypeScriptParser::Finally - 64))
        | (1ULL << (TypeScriptParser::Return - 64))
        | (1ULL << (TypeScriptParser::Void - 64))
        | (1ULL << (TypeScriptParser::Continue - 64))
        | (1ULL << (TypeScriptParser::For - 64))
        | (1ULL << (TypeScriptParser::Switch - 64))
        | (1ULL << (TypeScriptParser::While - 64))
        | (1ULL << (TypeScriptParser::Debugger - 64))
        | (1ULL << (TypeScriptParser::Function_ - 64))
        | (1ULL << (TypeScriptParser::This - 64))
        | (1ULL << (TypeScriptParser::With - 64))
        | (1ULL << (TypeScriptParser::Default - 64))
        | (1ULL << (TypeScriptParser::If - 64))
        | (1ULL << (TypeScriptParser::Throw - 64))
        | (1ULL << (TypeScriptParser::Delete - 64))
        | (1ULL << (TypeScriptParser::In - 64))
        | (1ULL << (TypeScriptParser::Try - 64))
        | (1ULL << (TypeScriptParser::From - 64))
        | (1ULL << (TypeScriptParser::ReadOnly - 64))
        | (1ULL << (TypeScriptParser::Async - 64))
        | (1ULL << (TypeScriptParser::Class - 64))
        | (1ULL << (TypeScriptParser::Enum - 64))
        | (1ULL << (TypeScriptParser::Extends - 64))
        | (1ULL << (TypeScriptParser::Super - 64))
        | (1ULL << (TypeScriptParser::Const - 64))
        | (1ULL << (TypeScriptParser::Export - 64))
        | (1ULL << (TypeScriptParser::Import - 64))
        | (1ULL << (TypeScriptParser::Implements - 64))
        | (1ULL << (TypeScriptParser::Let - 64))
        | (1ULL << (TypeScriptParser::Private - 64))
        | (1ULL << (TypeScriptParser::Public - 64))
        | (1ULL << (TypeScriptParser::Interface - 64))
        | (1ULL << (TypeScriptParser::Package - 64))
        | (1ULL << (TypeScriptParser::Protected - 64))
        | (1ULL << (TypeScriptParser::Static - 64))
        | (1ULL << (TypeScriptParser::Yield - 64))
        | (1ULL << (TypeScriptParser::String - 64))
        | (1ULL << (TypeScriptParser::TypeAlias - 64))
        | (1ULL << (TypeScriptParser::Get - 64))
        | (1ULL << (TypeScriptParser::Set - 64))
        | (1ULL << (TypeScriptParser::Require - 64))
        | (1ULL << (TypeScriptParser::Identifier - 64))
        | (1ULL << (TypeScriptParser::StringLiteral - 64))
        | (1ULL << (TypeScriptParser::BackTick - 64)))) != 0)) {
        setState(981);
        expressionSequence();
      }
      setState(984);
      match(TypeScriptParser::SemiColon);
      setState(986);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TypeScriptParser::RegularExpressionLiteral)
        | (1ULL << TypeScriptParser::OpenBracket)
        | (1ULL << TypeScriptParser::OpenParen)
        | (1ULL << TypeScriptParser::OpenBrace)
        | (1ULL << TypeScriptParser::PlusPlus)
        | (1ULL << TypeScriptParser::MinusMinus)
        | (1ULL << TypeScriptParser::Plus)
        | (1ULL << TypeScriptParser::Minus)
        | (1ULL << TypeScriptParser::BitNot)
        | (1ULL << TypeScriptParser::Not)
        | (1ULL << TypeScriptParser::LessThan)
        | (1ULL << TypeScriptParser::NullLiteral)
        | (1ULL << TypeScriptParser::BooleanLiteral)
        | (1ULL << TypeScriptParser::DecimalLiteral)
        | (1ULL << TypeScriptParser::HexIntegerLiteral)
        | (1ULL << TypeScriptParser::OctalIntegerLiteral)
        | (1ULL << TypeScriptParser::OctalIntegerLiteral2)
        | (1ULL << TypeScriptParser::BinaryIntegerLiteral)
        | (1ULL << TypeScriptParser::Break)
        | (1ULL << TypeScriptParser::Do))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (TypeScriptParser::Instanceof - 64))
        | (1ULL << (TypeScriptParser::Typeof - 64))
        | (1ULL << (TypeScriptParser::Case - 64))
        | (1ULL << (TypeScriptParser::Else - 64))
        | (1ULL << (TypeScriptParser::New - 64))
        | (1ULL << (TypeScriptParser::Var - 64))
        | (1ULL << (TypeScriptParser::Catch - 64))
        | (1ULL << (TypeScriptParser::Finally - 64))
        | (1ULL << (TypeScriptParser::Return - 64))
        | (1ULL << (TypeScriptParser::Void - 64))
        | (1ULL << (TypeScriptParser::Continue - 64))
        | (1ULL << (TypeScriptParser::For - 64))
        | (1ULL << (TypeScriptParser::Switch - 64))
        | (1ULL << (TypeScriptParser::While - 64))
        | (1ULL << (TypeScriptParser::Debugger - 64))
        | (1ULL << (TypeScriptParser::Function_ - 64))
        | (1ULL << (TypeScriptParser::This - 64))
        | (1ULL << (TypeScriptParser::With - 64))
        | (1ULL << (TypeScriptParser::Default - 64))
        | (1ULL << (TypeScriptParser::If - 64))
        | (1ULL << (TypeScriptParser::Throw - 64))
        | (1ULL << (TypeScriptParser::Delete - 64))
        | (1ULL << (TypeScriptParser::In - 64))
        | (1ULL << (TypeScriptParser::Try - 64))
        | (1ULL << (TypeScriptParser::From - 64))
        | (1ULL << (TypeScriptParser::ReadOnly - 64))
        | (1ULL << (TypeScriptParser::Async - 64))
        | (1ULL << (TypeScriptParser::Class - 64))
        | (1ULL << (TypeScriptParser::Enum - 64))
        | (1ULL << (TypeScriptParser::Extends - 64))
        | (1ULL << (TypeScriptParser::Super - 64))
        | (1ULL << (TypeScriptParser::Const - 64))
        | (1ULL << (TypeScriptParser::Export - 64))
        | (1ULL << (TypeScriptParser::Import - 64))
        | (1ULL << (TypeScriptParser::Implements - 64))
        | (1ULL << (TypeScriptParser::Let - 64))
        | (1ULL << (TypeScriptParser::Private - 64))
        | (1ULL << (TypeScriptParser::Public - 64))
        | (1ULL << (TypeScriptParser::Interface - 64))
        | (1ULL << (TypeScriptParser::Package - 64))
        | (1ULL << (TypeScriptParser::Protected - 64))
        | (1ULL << (TypeScriptParser::Static - 64))
        | (1ULL << (TypeScriptParser::Yield - 64))
        | (1ULL << (TypeScriptParser::String - 64))
        | (1ULL << (TypeScriptParser::TypeAlias - 64))
        | (1ULL << (TypeScriptParser::Get - 64))
        | (1ULL << (TypeScriptParser::Set - 64))
        | (1ULL << (TypeScriptParser::Require - 64))
        | (1ULL << (TypeScriptParser::Identifier - 64))
        | (1ULL << (TypeScriptParser::StringLiteral - 64))
        | (1ULL << (TypeScriptParser::BackTick - 64)))) != 0)) {
        setState(985);
        expressionSequence();
      }
      setState(988);
      match(TypeScriptParser::SemiColon);
      setState(990);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TypeScriptParser::RegularExpressionLiteral)
        | (1ULL << TypeScriptParser::OpenBracket)
        | (1ULL << TypeScriptParser::OpenParen)
        | (1ULL << TypeScriptParser::OpenBrace)
        | (1ULL << TypeScriptParser::PlusPlus)
        | (1ULL << TypeScriptParser::MinusMinus)
        | (1ULL << TypeScriptParser::Plus)
        | (1ULL << TypeScriptParser::Minus)
        | (1ULL << TypeScriptParser::BitNot)
        | (1ULL << TypeScriptParser::Not)
        | (1ULL << TypeScriptParser::LessThan)
        | (1ULL << TypeScriptParser::NullLiteral)
        | (1ULL << TypeScriptParser::BooleanLiteral)
        | (1ULL << TypeScriptParser::DecimalLiteral)
        | (1ULL << TypeScriptParser::HexIntegerLiteral)
        | (1ULL << TypeScriptParser::OctalIntegerLiteral)
        | (1ULL << TypeScriptParser::OctalIntegerLiteral2)
        | (1ULL << TypeScriptParser::BinaryIntegerLiteral)
        | (1ULL << TypeScriptParser::Break)
        | (1ULL << TypeScriptParser::Do))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (TypeScriptParser::Instanceof - 64))
        | (1ULL << (TypeScriptParser::Typeof - 64))
        | (1ULL << (TypeScriptParser::Case - 64))
        | (1ULL << (TypeScriptParser::Else - 64))
        | (1ULL << (TypeScriptParser::New - 64))
        | (1ULL << (TypeScriptParser::Var - 64))
        | (1ULL << (TypeScriptParser::Catch - 64))
        | (1ULL << (TypeScriptParser::Finally - 64))
        | (1ULL << (TypeScriptParser::Return - 64))
        | (1ULL << (TypeScriptParser::Void - 64))
        | (1ULL << (TypeScriptParser::Continue - 64))
        | (1ULL << (TypeScriptParser::For - 64))
        | (1ULL << (TypeScriptParser::Switch - 64))
        | (1ULL << (TypeScriptParser::While - 64))
        | (1ULL << (TypeScriptParser::Debugger - 64))
        | (1ULL << (TypeScriptParser::Function_ - 64))
        | (1ULL << (TypeScriptParser::This - 64))
        | (1ULL << (TypeScriptParser::With - 64))
        | (1ULL << (TypeScriptParser::Default - 64))
        | (1ULL << (TypeScriptParser::If - 64))
        | (1ULL << (TypeScriptParser::Throw - 64))
        | (1ULL << (TypeScriptParser::Delete - 64))
        | (1ULL << (TypeScriptParser::In - 64))
        | (1ULL << (TypeScriptParser::Try - 64))
        | (1ULL << (TypeScriptParser::From - 64))
        | (1ULL << (TypeScriptParser::ReadOnly - 64))
        | (1ULL << (TypeScriptParser::Async - 64))
        | (1ULL << (TypeScriptParser::Class - 64))
        | (1ULL << (TypeScriptParser::Enum - 64))
        | (1ULL << (TypeScriptParser::Extends - 64))
        | (1ULL << (TypeScriptParser::Super - 64))
        | (1ULL << (TypeScriptParser::Const - 64))
        | (1ULL << (TypeScriptParser::Export - 64))
        | (1ULL << (TypeScriptParser::Import - 64))
        | (1ULL << (TypeScriptParser::Implements - 64))
        | (1ULL << (TypeScriptParser::Let - 64))
        | (1ULL << (TypeScriptParser::Private - 64))
        | (1ULL << (TypeScriptParser::Public - 64))
        | (1ULL << (TypeScriptParser::Interface - 64))
        | (1ULL << (TypeScriptParser::Package - 64))
        | (1ULL << (TypeScriptParser::Protected - 64))
        | (1ULL << (TypeScriptParser::Static - 64))
        | (1ULL << (TypeScriptParser::Yield - 64))
        | (1ULL << (TypeScriptParser::String - 64))
        | (1ULL << (TypeScriptParser::TypeAlias - 64))
        | (1ULL << (TypeScriptParser::Get - 64))
        | (1ULL << (TypeScriptParser::Set - 64))
        | (1ULL << (TypeScriptParser::Require - 64))
        | (1ULL << (TypeScriptParser::Identifier - 64))
        | (1ULL << (TypeScriptParser::StringLiteral - 64))
        | (1ULL << (TypeScriptParser::BackTick - 64)))) != 0)) {
        setState(989);
        expressionSequence();
      }
      setState(992);
      match(TypeScriptParser::CloseParen);
      setState(993);
      statement();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<IterationStatementContext *>(_tracker.createInstance<TypeScriptParser::ForVarStatementContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(994);
      match(TypeScriptParser::For);
      setState(995);
      match(TypeScriptParser::OpenParen);
      setState(996);
      varModifier();
      setState(997);
      variableDeclarationList();
      setState(998);
      match(TypeScriptParser::SemiColon);
      setState(1000);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TypeScriptParser::RegularExpressionLiteral)
        | (1ULL << TypeScriptParser::OpenBracket)
        | (1ULL << TypeScriptParser::OpenParen)
        | (1ULL << TypeScriptParser::OpenBrace)
        | (1ULL << TypeScriptParser::PlusPlus)
        | (1ULL << TypeScriptParser::MinusMinus)
        | (1ULL << TypeScriptParser::Plus)
        | (1ULL << TypeScriptParser::Minus)
        | (1ULL << TypeScriptParser::BitNot)
        | (1ULL << TypeScriptParser::Not)
        | (1ULL << TypeScriptParser::LessThan)
        | (1ULL << TypeScriptParser::NullLiteral)
        | (1ULL << TypeScriptParser::BooleanLiteral)
        | (1ULL << TypeScriptParser::DecimalLiteral)
        | (1ULL << TypeScriptParser::HexIntegerLiteral)
        | (1ULL << TypeScriptParser::OctalIntegerLiteral)
        | (1ULL << TypeScriptParser::OctalIntegerLiteral2)
        | (1ULL << TypeScriptParser::BinaryIntegerLiteral)
        | (1ULL << TypeScriptParser::Break)
        | (1ULL << TypeScriptParser::Do))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (TypeScriptParser::Instanceof - 64))
        | (1ULL << (TypeScriptParser::Typeof - 64))
        | (1ULL << (TypeScriptParser::Case - 64))
        | (1ULL << (TypeScriptParser::Else - 64))
        | (1ULL << (TypeScriptParser::New - 64))
        | (1ULL << (TypeScriptParser::Var - 64))
        | (1ULL << (TypeScriptParser::Catch - 64))
        | (1ULL << (TypeScriptParser::Finally - 64))
        | (1ULL << (TypeScriptParser::Return - 64))
        | (1ULL << (TypeScriptParser::Void - 64))
        | (1ULL << (TypeScriptParser::Continue - 64))
        | (1ULL << (TypeScriptParser::For - 64))
        | (1ULL << (TypeScriptParser::Switch - 64))
        | (1ULL << (TypeScriptParser::While - 64))
        | (1ULL << (TypeScriptParser::Debugger - 64))
        | (1ULL << (TypeScriptParser::Function_ - 64))
        | (1ULL << (TypeScriptParser::This - 64))
        | (1ULL << (TypeScriptParser::With - 64))
        | (1ULL << (TypeScriptParser::Default - 64))
        | (1ULL << (TypeScriptParser::If - 64))
        | (1ULL << (TypeScriptParser::Throw - 64))
        | (1ULL << (TypeScriptParser::Delete - 64))
        | (1ULL << (TypeScriptParser::In - 64))
        | (1ULL << (TypeScriptParser::Try - 64))
        | (1ULL << (TypeScriptParser::From - 64))
        | (1ULL << (TypeScriptParser::ReadOnly - 64))
        | (1ULL << (TypeScriptParser::Async - 64))
        | (1ULL << (TypeScriptParser::Class - 64))
        | (1ULL << (TypeScriptParser::Enum - 64))
        | (1ULL << (TypeScriptParser::Extends - 64))
        | (1ULL << (TypeScriptParser::Super - 64))
        | (1ULL << (TypeScriptParser::Const - 64))
        | (1ULL << (TypeScriptParser::Export - 64))
        | (1ULL << (TypeScriptParser::Import - 64))
        | (1ULL << (TypeScriptParser::Implements - 64))
        | (1ULL << (TypeScriptParser::Let - 64))
        | (1ULL << (TypeScriptParser::Private - 64))
        | (1ULL << (TypeScriptParser::Public - 64))
        | (1ULL << (TypeScriptParser::Interface - 64))
        | (1ULL << (TypeScriptParser::Package - 64))
        | (1ULL << (TypeScriptParser::Protected - 64))
        | (1ULL << (TypeScriptParser::Static - 64))
        | (1ULL << (TypeScriptParser::Yield - 64))
        | (1ULL << (TypeScriptParser::String - 64))
        | (1ULL << (TypeScriptParser::TypeAlias - 64))
        | (1ULL << (TypeScriptParser::Get - 64))
        | (1ULL << (TypeScriptParser::Set - 64))
        | (1ULL << (TypeScriptParser::Require - 64))
        | (1ULL << (TypeScriptParser::Identifier - 64))
        | (1ULL << (TypeScriptParser::StringLiteral - 64))
        | (1ULL << (TypeScriptParser::BackTick - 64)))) != 0)) {
        setState(999);
        expressionSequence();
      }
      setState(1002);
      match(TypeScriptParser::SemiColon);
      setState(1004);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TypeScriptParser::RegularExpressionLiteral)
        | (1ULL << TypeScriptParser::OpenBracket)
        | (1ULL << TypeScriptParser::OpenParen)
        | (1ULL << TypeScriptParser::OpenBrace)
        | (1ULL << TypeScriptParser::PlusPlus)
        | (1ULL << TypeScriptParser::MinusMinus)
        | (1ULL << TypeScriptParser::Plus)
        | (1ULL << TypeScriptParser::Minus)
        | (1ULL << TypeScriptParser::BitNot)
        | (1ULL << TypeScriptParser::Not)
        | (1ULL << TypeScriptParser::LessThan)
        | (1ULL << TypeScriptParser::NullLiteral)
        | (1ULL << TypeScriptParser::BooleanLiteral)
        | (1ULL << TypeScriptParser::DecimalLiteral)
        | (1ULL << TypeScriptParser::HexIntegerLiteral)
        | (1ULL << TypeScriptParser::OctalIntegerLiteral)
        | (1ULL << TypeScriptParser::OctalIntegerLiteral2)
        | (1ULL << TypeScriptParser::BinaryIntegerLiteral)
        | (1ULL << TypeScriptParser::Break)
        | (1ULL << TypeScriptParser::Do))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (TypeScriptParser::Instanceof - 64))
        | (1ULL << (TypeScriptParser::Typeof - 64))
        | (1ULL << (TypeScriptParser::Case - 64))
        | (1ULL << (TypeScriptParser::Else - 64))
        | (1ULL << (TypeScriptParser::New - 64))
        | (1ULL << (TypeScriptParser::Var - 64))
        | (1ULL << (TypeScriptParser::Catch - 64))
        | (1ULL << (TypeScriptParser::Finally - 64))
        | (1ULL << (TypeScriptParser::Return - 64))
        | (1ULL << (TypeScriptParser::Void - 64))
        | (1ULL << (TypeScriptParser::Continue - 64))
        | (1ULL << (TypeScriptParser::For - 64))
        | (1ULL << (TypeScriptParser::Switch - 64))
        | (1ULL << (TypeScriptParser::While - 64))
        | (1ULL << (TypeScriptParser::Debugger - 64))
        | (1ULL << (TypeScriptParser::Function_ - 64))
        | (1ULL << (TypeScriptParser::This - 64))
        | (1ULL << (TypeScriptParser::With - 64))
        | (1ULL << (TypeScriptParser::Default - 64))
        | (1ULL << (TypeScriptParser::If - 64))
        | (1ULL << (TypeScriptParser::Throw - 64))
        | (1ULL << (TypeScriptParser::Delete - 64))
        | (1ULL << (TypeScriptParser::In - 64))
        | (1ULL << (TypeScriptParser::Try - 64))
        | (1ULL << (TypeScriptParser::From - 64))
        | (1ULL << (TypeScriptParser::ReadOnly - 64))
        | (1ULL << (TypeScriptParser::Async - 64))
        | (1ULL << (TypeScriptParser::Class - 64))
        | (1ULL << (TypeScriptParser::Enum - 64))
        | (1ULL << (TypeScriptParser::Extends - 64))
        | (1ULL << (TypeScriptParser::Super - 64))
        | (1ULL << (TypeScriptParser::Const - 64))
        | (1ULL << (TypeScriptParser::Export - 64))
        | (1ULL << (TypeScriptParser::Import - 64))
        | (1ULL << (TypeScriptParser::Implements - 64))
        | (1ULL << (TypeScriptParser::Let - 64))
        | (1ULL << (TypeScriptParser::Private - 64))
        | (1ULL << (TypeScriptParser::Public - 64))
        | (1ULL << (TypeScriptParser::Interface - 64))
        | (1ULL << (TypeScriptParser::Package - 64))
        | (1ULL << (TypeScriptParser::Protected - 64))
        | (1ULL << (TypeScriptParser::Static - 64))
        | (1ULL << (TypeScriptParser::Yield - 64))
        | (1ULL << (TypeScriptParser::String - 64))
        | (1ULL << (TypeScriptParser::TypeAlias - 64))
        | (1ULL << (TypeScriptParser::Get - 64))
        | (1ULL << (TypeScriptParser::Set - 64))
        | (1ULL << (TypeScriptParser::Require - 64))
        | (1ULL << (TypeScriptParser::Identifier - 64))
        | (1ULL << (TypeScriptParser::StringLiteral - 64))
        | (1ULL << (TypeScriptParser::BackTick - 64)))) != 0)) {
        setState(1003);
        expressionSequence();
      }
      setState(1006);
      match(TypeScriptParser::CloseParen);
      setState(1007);
      statement();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<IterationStatementContext *>(_tracker.createInstance<TypeScriptParser::ForInStatementContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(1009);
      match(TypeScriptParser::For);
      setState(1010);
      match(TypeScriptParser::OpenParen);
      setState(1011);
      expression(0);
      setState(1015);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypeScriptParser::In: {
          setState(1012);
          match(TypeScriptParser::In);
          break;
        }

        case TypeScriptParser::Identifier: {
          setState(1013);
          match(TypeScriptParser::Identifier);
          setState(1014);

          if (!(this.p("of"))) throw FailedPredicateException(this, "this.p(\"of\")");
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1017);
      expressionSequence();
      setState(1018);
      match(TypeScriptParser::CloseParen);
      setState(1019);
      statement();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<IterationStatementContext *>(_tracker.createInstance<TypeScriptParser::ForVarInStatementContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(1021);
      match(TypeScriptParser::For);
      setState(1022);
      match(TypeScriptParser::OpenParen);
      setState(1023);
      varModifier();
      setState(1024);
      variableDeclarator();
      setState(1028);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypeScriptParser::In: {
          setState(1025);
          match(TypeScriptParser::In);
          break;
        }

        case TypeScriptParser::Identifier: {
          setState(1026);
          match(TypeScriptParser::Identifier);
          setState(1027);

          if (!(this.p("of"))) throw FailedPredicateException(this, "this.p(\"of\")");
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1030);
      expressionSequence();
      setState(1031);
      match(TypeScriptParser::CloseParen);
      setState(1032);
      statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarModifierContext ------------------------------------------------------------------

TypeScriptParser::VarModifierContext::VarModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::VarModifierContext::Var() {
  return getToken(TypeScriptParser::Var, 0);
}

tree::TerminalNode* TypeScriptParser::VarModifierContext::Let() {
  return getToken(TypeScriptParser::Let, 0);
}

tree::TerminalNode* TypeScriptParser::VarModifierContext::Const() {
  return getToken(TypeScriptParser::Const, 0);
}


size_t TypeScriptParser::VarModifierContext::getRuleIndex() const {
  return TypeScriptParser::RuleVarModifier;
}

void TypeScriptParser::VarModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarModifier(this);
}

void TypeScriptParser::VarModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarModifier(this);
}


antlrcpp::Any TypeScriptParser::VarModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitVarModifier(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::VarModifierContext* TypeScriptParser::varModifier() {
  VarModifierContext *_localctx = _tracker.createInstance<VarModifierContext>(_ctx, getState());
  enterRule(_localctx, 160, TypeScriptParser::RuleVarModifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1036);
    _la = _input->LA(1);
    if (!(((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (TypeScriptParser::Var - 69))
      | (1ULL << (TypeScriptParser::Const - 69))
      | (1ULL << (TypeScriptParser::Let - 69)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueStatementContext ------------------------------------------------------------------

TypeScriptParser::ContinueStatementContext::ContinueStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::ContinueStatementContext::Continue() {
  return getToken(TypeScriptParser::Continue, 0);
}

TypeScriptParser::EosContext* TypeScriptParser::ContinueStatementContext::eos() {
  return getRuleContext<TypeScriptParser::EosContext>(0);
}

tree::TerminalNode* TypeScriptParser::ContinueStatementContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}


size_t TypeScriptParser::ContinueStatementContext::getRuleIndex() const {
  return TypeScriptParser::RuleContinueStatement;
}

void TypeScriptParser::ContinueStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueStatement(this);
}

void TypeScriptParser::ContinueStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueStatement(this);
}


antlrcpp::Any TypeScriptParser::ContinueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitContinueStatement(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ContinueStatementContext* TypeScriptParser::continueStatement() {
  ContinueStatementContext *_localctx = _tracker.createInstance<ContinueStatementContext>(_ctx, getState());
  enterRule(_localctx, 162, TypeScriptParser::RuleContinueStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1038);
    match(TypeScriptParser::Continue);
    setState(1041);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 115, _ctx)) {
    case 1: {
      setState(1039);

      if (!(this.notLineTerminator())) throw FailedPredicateException(this, "this.notLineTerminator()");
      setState(1040);
      match(TypeScriptParser::Identifier);
      break;
    }

    default:
      break;
    }
    setState(1043);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStatementContext ------------------------------------------------------------------

TypeScriptParser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::BreakStatementContext::Break() {
  return getToken(TypeScriptParser::Break, 0);
}

TypeScriptParser::EosContext* TypeScriptParser::BreakStatementContext::eos() {
  return getRuleContext<TypeScriptParser::EosContext>(0);
}

tree::TerminalNode* TypeScriptParser::BreakStatementContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}


size_t TypeScriptParser::BreakStatementContext::getRuleIndex() const {
  return TypeScriptParser::RuleBreakStatement;
}

void TypeScriptParser::BreakStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStatement(this);
}

void TypeScriptParser::BreakStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStatement(this);
}


antlrcpp::Any TypeScriptParser::BreakStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitBreakStatement(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::BreakStatementContext* TypeScriptParser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 164, TypeScriptParser::RuleBreakStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1045);
    match(TypeScriptParser::Break);
    setState(1048);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx)) {
    case 1: {
      setState(1046);

      if (!(this.notLineTerminator())) throw FailedPredicateException(this, "this.notLineTerminator()");
      setState(1047);
      match(TypeScriptParser::Identifier);
      break;
    }

    default:
      break;
    }
    setState(1050);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

TypeScriptParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::ReturnStatementContext::Return() {
  return getToken(TypeScriptParser::Return, 0);
}

TypeScriptParser::EosContext* TypeScriptParser::ReturnStatementContext::eos() {
  return getRuleContext<TypeScriptParser::EosContext>(0);
}

TypeScriptParser::ExpressionSequenceContext* TypeScriptParser::ReturnStatementContext::expressionSequence() {
  return getRuleContext<TypeScriptParser::ExpressionSequenceContext>(0);
}


size_t TypeScriptParser::ReturnStatementContext::getRuleIndex() const {
  return TypeScriptParser::RuleReturnStatement;
}

void TypeScriptParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void TypeScriptParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}


antlrcpp::Any TypeScriptParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ReturnStatementContext* TypeScriptParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 166, TypeScriptParser::RuleReturnStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1052);
    match(TypeScriptParser::Return);
    setState(1055);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx)) {
    case 1: {
      setState(1053);

      if (!(this.notLineTerminator())) throw FailedPredicateException(this, "this.notLineTerminator()");
      setState(1054);
      expressionSequence();
      break;
    }

    default:
      break;
    }
    setState(1057);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- YieldStatementContext ------------------------------------------------------------------

TypeScriptParser::YieldStatementContext::YieldStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::YieldStatementContext::Yield() {
  return getToken(TypeScriptParser::Yield, 0);
}

TypeScriptParser::EosContext* TypeScriptParser::YieldStatementContext::eos() {
  return getRuleContext<TypeScriptParser::EosContext>(0);
}

TypeScriptParser::ExpressionSequenceContext* TypeScriptParser::YieldStatementContext::expressionSequence() {
  return getRuleContext<TypeScriptParser::ExpressionSequenceContext>(0);
}


size_t TypeScriptParser::YieldStatementContext::getRuleIndex() const {
  return TypeScriptParser::RuleYieldStatement;
}

void TypeScriptParser::YieldStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterYieldStatement(this);
}

void TypeScriptParser::YieldStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitYieldStatement(this);
}


antlrcpp::Any TypeScriptParser::YieldStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitYieldStatement(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::YieldStatementContext* TypeScriptParser::yieldStatement() {
  YieldStatementContext *_localctx = _tracker.createInstance<YieldStatementContext>(_ctx, getState());
  enterRule(_localctx, 168, TypeScriptParser::RuleYieldStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1059);
    match(TypeScriptParser::Yield);
    setState(1062);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx)) {
    case 1: {
      setState(1060);

      if (!(this.notLineTerminator())) throw FailedPredicateException(this, "this.notLineTerminator()");
      setState(1061);
      expressionSequence();
      break;
    }

    default:
      break;
    }
    setState(1064);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WithStatementContext ------------------------------------------------------------------

TypeScriptParser::WithStatementContext::WithStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::WithStatementContext::With() {
  return getToken(TypeScriptParser::With, 0);
}

tree::TerminalNode* TypeScriptParser::WithStatementContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

TypeScriptParser::ExpressionSequenceContext* TypeScriptParser::WithStatementContext::expressionSequence() {
  return getRuleContext<TypeScriptParser::ExpressionSequenceContext>(0);
}

tree::TerminalNode* TypeScriptParser::WithStatementContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

TypeScriptParser::StatementContext* TypeScriptParser::WithStatementContext::statement() {
  return getRuleContext<TypeScriptParser::StatementContext>(0);
}


size_t TypeScriptParser::WithStatementContext::getRuleIndex() const {
  return TypeScriptParser::RuleWithStatement;
}

void TypeScriptParser::WithStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWithStatement(this);
}

void TypeScriptParser::WithStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWithStatement(this);
}


antlrcpp::Any TypeScriptParser::WithStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitWithStatement(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::WithStatementContext* TypeScriptParser::withStatement() {
  WithStatementContext *_localctx = _tracker.createInstance<WithStatementContext>(_ctx, getState());
  enterRule(_localctx, 170, TypeScriptParser::RuleWithStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1066);
    match(TypeScriptParser::With);
    setState(1067);
    match(TypeScriptParser::OpenParen);
    setState(1068);
    expressionSequence();
    setState(1069);
    match(TypeScriptParser::CloseParen);
    setState(1070);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchStatementContext ------------------------------------------------------------------

TypeScriptParser::SwitchStatementContext::SwitchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::SwitchStatementContext::Switch() {
  return getToken(TypeScriptParser::Switch, 0);
}

tree::TerminalNode* TypeScriptParser::SwitchStatementContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

TypeScriptParser::ExpressionSequenceContext* TypeScriptParser::SwitchStatementContext::expressionSequence() {
  return getRuleContext<TypeScriptParser::ExpressionSequenceContext>(0);
}

tree::TerminalNode* TypeScriptParser::SwitchStatementContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

TypeScriptParser::CaseBlockContext* TypeScriptParser::SwitchStatementContext::caseBlock() {
  return getRuleContext<TypeScriptParser::CaseBlockContext>(0);
}


size_t TypeScriptParser::SwitchStatementContext::getRuleIndex() const {
  return TypeScriptParser::RuleSwitchStatement;
}

void TypeScriptParser::SwitchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchStatement(this);
}

void TypeScriptParser::SwitchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchStatement(this);
}


antlrcpp::Any TypeScriptParser::SwitchStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitSwitchStatement(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::SwitchStatementContext* TypeScriptParser::switchStatement() {
  SwitchStatementContext *_localctx = _tracker.createInstance<SwitchStatementContext>(_ctx, getState());
  enterRule(_localctx, 172, TypeScriptParser::RuleSwitchStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1072);
    match(TypeScriptParser::Switch);
    setState(1073);
    match(TypeScriptParser::OpenParen);
    setState(1074);
    expressionSequence();
    setState(1075);
    match(TypeScriptParser::CloseParen);
    setState(1076);
    caseBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseBlockContext ------------------------------------------------------------------

TypeScriptParser::CaseBlockContext::CaseBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::CaseBlockContext::OpenBrace() {
  return getToken(TypeScriptParser::OpenBrace, 0);
}

tree::TerminalNode* TypeScriptParser::CaseBlockContext::CloseBrace() {
  return getToken(TypeScriptParser::CloseBrace, 0);
}

std::vector<TypeScriptParser::CaseClausesContext *> TypeScriptParser::CaseBlockContext::caseClauses() {
  return getRuleContexts<TypeScriptParser::CaseClausesContext>();
}

TypeScriptParser::CaseClausesContext* TypeScriptParser::CaseBlockContext::caseClauses(size_t i) {
  return getRuleContext<TypeScriptParser::CaseClausesContext>(i);
}

TypeScriptParser::DefaultClauseContext* TypeScriptParser::CaseBlockContext::defaultClause() {
  return getRuleContext<TypeScriptParser::DefaultClauseContext>(0);
}


size_t TypeScriptParser::CaseBlockContext::getRuleIndex() const {
  return TypeScriptParser::RuleCaseBlock;
}

void TypeScriptParser::CaseBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseBlock(this);
}

void TypeScriptParser::CaseBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseBlock(this);
}


antlrcpp::Any TypeScriptParser::CaseBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitCaseBlock(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::CaseBlockContext* TypeScriptParser::caseBlock() {
  CaseBlockContext *_localctx = _tracker.createInstance<CaseBlockContext>(_ctx, getState());
  enterRule(_localctx, 174, TypeScriptParser::RuleCaseBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1078);
    match(TypeScriptParser::OpenBrace);
    setState(1080);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Case) {
      setState(1079);
      caseClauses();
    }
    setState(1086);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Default) {
      setState(1082);
      defaultClause();
      setState(1084);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypeScriptParser::Case) {
        setState(1083);
        caseClauses();
      }
    }
    setState(1088);
    match(TypeScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseClausesContext ------------------------------------------------------------------

TypeScriptParser::CaseClausesContext::CaseClausesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypeScriptParser::CaseClauseContext *> TypeScriptParser::CaseClausesContext::caseClause() {
  return getRuleContexts<TypeScriptParser::CaseClauseContext>();
}

TypeScriptParser::CaseClauseContext* TypeScriptParser::CaseClausesContext::caseClause(size_t i) {
  return getRuleContext<TypeScriptParser::CaseClauseContext>(i);
}


size_t TypeScriptParser::CaseClausesContext::getRuleIndex() const {
  return TypeScriptParser::RuleCaseClauses;
}

void TypeScriptParser::CaseClausesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseClauses(this);
}

void TypeScriptParser::CaseClausesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseClauses(this);
}


antlrcpp::Any TypeScriptParser::CaseClausesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitCaseClauses(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::CaseClausesContext* TypeScriptParser::caseClauses() {
  CaseClausesContext *_localctx = _tracker.createInstance<CaseClausesContext>(_ctx, getState());
  enterRule(_localctx, 176, TypeScriptParser::RuleCaseClauses);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1091); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1090);
      caseClause();
      setState(1093); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == TypeScriptParser::Case);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseClauseContext ------------------------------------------------------------------

TypeScriptParser::CaseClauseContext::CaseClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::CaseClauseContext::Case() {
  return getToken(TypeScriptParser::Case, 0);
}

TypeScriptParser::ExpressionSequenceContext* TypeScriptParser::CaseClauseContext::expressionSequence() {
  return getRuleContext<TypeScriptParser::ExpressionSequenceContext>(0);
}

tree::TerminalNode* TypeScriptParser::CaseClauseContext::Colon() {
  return getToken(TypeScriptParser::Colon, 0);
}

TypeScriptParser::StatementListContext* TypeScriptParser::CaseClauseContext::statementList() {
  return getRuleContext<TypeScriptParser::StatementListContext>(0);
}


size_t TypeScriptParser::CaseClauseContext::getRuleIndex() const {
  return TypeScriptParser::RuleCaseClause;
}

void TypeScriptParser::CaseClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseClause(this);
}

void TypeScriptParser::CaseClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseClause(this);
}


antlrcpp::Any TypeScriptParser::CaseClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitCaseClause(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::CaseClauseContext* TypeScriptParser::caseClause() {
  CaseClauseContext *_localctx = _tracker.createInstance<CaseClauseContext>(_ctx, getState());
  enterRule(_localctx, 178, TypeScriptParser::RuleCaseClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1095);
    match(TypeScriptParser::Case);
    setState(1096);
    expressionSequence();
    setState(1097);
    match(TypeScriptParser::Colon);
    setState(1099);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 123, _ctx)) {
    case 1: {
      setState(1098);
      statementList();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultClauseContext ------------------------------------------------------------------

TypeScriptParser::DefaultClauseContext::DefaultClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::DefaultClauseContext::Default() {
  return getToken(TypeScriptParser::Default, 0);
}

tree::TerminalNode* TypeScriptParser::DefaultClauseContext::Colon() {
  return getToken(TypeScriptParser::Colon, 0);
}

TypeScriptParser::StatementListContext* TypeScriptParser::DefaultClauseContext::statementList() {
  return getRuleContext<TypeScriptParser::StatementListContext>(0);
}


size_t TypeScriptParser::DefaultClauseContext::getRuleIndex() const {
  return TypeScriptParser::RuleDefaultClause;
}

void TypeScriptParser::DefaultClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultClause(this);
}

void TypeScriptParser::DefaultClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultClause(this);
}


antlrcpp::Any TypeScriptParser::DefaultClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitDefaultClause(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::DefaultClauseContext* TypeScriptParser::defaultClause() {
  DefaultClauseContext *_localctx = _tracker.createInstance<DefaultClauseContext>(_ctx, getState());
  enterRule(_localctx, 180, TypeScriptParser::RuleDefaultClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1101);
    match(TypeScriptParser::Default);
    setState(1102);
    match(TypeScriptParser::Colon);
    setState(1104);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 124, _ctx)) {
    case 1: {
      setState(1103);
      statementList();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelledStatementContext ------------------------------------------------------------------

TypeScriptParser::LabelledStatementContext::LabelledStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::LabelledStatementContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

tree::TerminalNode* TypeScriptParser::LabelledStatementContext::Colon() {
  return getToken(TypeScriptParser::Colon, 0);
}

TypeScriptParser::StatementContext* TypeScriptParser::LabelledStatementContext::statement() {
  return getRuleContext<TypeScriptParser::StatementContext>(0);
}


size_t TypeScriptParser::LabelledStatementContext::getRuleIndex() const {
  return TypeScriptParser::RuleLabelledStatement;
}

void TypeScriptParser::LabelledStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabelledStatement(this);
}

void TypeScriptParser::LabelledStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabelledStatement(this);
}


antlrcpp::Any TypeScriptParser::LabelledStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitLabelledStatement(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::LabelledStatementContext* TypeScriptParser::labelledStatement() {
  LabelledStatementContext *_localctx = _tracker.createInstance<LabelledStatementContext>(_ctx, getState());
  enterRule(_localctx, 182, TypeScriptParser::RuleLabelledStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1106);
    match(TypeScriptParser::Identifier);
    setState(1107);
    match(TypeScriptParser::Colon);
    setState(1108);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThrowStatementContext ------------------------------------------------------------------

TypeScriptParser::ThrowStatementContext::ThrowStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::ThrowStatementContext::Throw() {
  return getToken(TypeScriptParser::Throw, 0);
}

TypeScriptParser::ExpressionSequenceContext* TypeScriptParser::ThrowStatementContext::expressionSequence() {
  return getRuleContext<TypeScriptParser::ExpressionSequenceContext>(0);
}

TypeScriptParser::EosContext* TypeScriptParser::ThrowStatementContext::eos() {
  return getRuleContext<TypeScriptParser::EosContext>(0);
}


size_t TypeScriptParser::ThrowStatementContext::getRuleIndex() const {
  return TypeScriptParser::RuleThrowStatement;
}

void TypeScriptParser::ThrowStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrowStatement(this);
}

void TypeScriptParser::ThrowStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrowStatement(this);
}


antlrcpp::Any TypeScriptParser::ThrowStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitThrowStatement(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ThrowStatementContext* TypeScriptParser::throwStatement() {
  ThrowStatementContext *_localctx = _tracker.createInstance<ThrowStatementContext>(_ctx, getState());
  enterRule(_localctx, 184, TypeScriptParser::RuleThrowStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1110);
    match(TypeScriptParser::Throw);
    setState(1111);

    if (!(this.notLineTerminator())) throw FailedPredicateException(this, "this.notLineTerminator()");
    setState(1112);
    expressionSequence();
    setState(1113);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryStatementContext ------------------------------------------------------------------

TypeScriptParser::TryStatementContext::TryStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::TryStatementContext::Try() {
  return getToken(TypeScriptParser::Try, 0);
}

TypeScriptParser::BlockContext* TypeScriptParser::TryStatementContext::block() {
  return getRuleContext<TypeScriptParser::BlockContext>(0);
}

TypeScriptParser::CatchProductionContext* TypeScriptParser::TryStatementContext::catchProduction() {
  return getRuleContext<TypeScriptParser::CatchProductionContext>(0);
}

TypeScriptParser::FinallyProductionContext* TypeScriptParser::TryStatementContext::finallyProduction() {
  return getRuleContext<TypeScriptParser::FinallyProductionContext>(0);
}


size_t TypeScriptParser::TryStatementContext::getRuleIndex() const {
  return TypeScriptParser::RuleTryStatement;
}

void TypeScriptParser::TryStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryStatement(this);
}

void TypeScriptParser::TryStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryStatement(this);
}


antlrcpp::Any TypeScriptParser::TryStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTryStatement(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TryStatementContext* TypeScriptParser::tryStatement() {
  TryStatementContext *_localctx = _tracker.createInstance<TryStatementContext>(_ctx, getState());
  enterRule(_localctx, 186, TypeScriptParser::RuleTryStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1115);
    match(TypeScriptParser::Try);
    setState(1116);
    block();
    setState(1122);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypeScriptParser::Catch: {
        setState(1117);
        catchProduction();
        setState(1119);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 125, _ctx)) {
        case 1: {
          setState(1118);
          finallyProduction();
          break;
        }

        default:
          break;
        }
        break;
      }

      case TypeScriptParser::Finally: {
        setState(1121);
        finallyProduction();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchProductionContext ------------------------------------------------------------------

TypeScriptParser::CatchProductionContext::CatchProductionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::CatchProductionContext::Catch() {
  return getToken(TypeScriptParser::Catch, 0);
}

tree::TerminalNode* TypeScriptParser::CatchProductionContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

tree::TerminalNode* TypeScriptParser::CatchProductionContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

tree::TerminalNode* TypeScriptParser::CatchProductionContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

TypeScriptParser::BlockContext* TypeScriptParser::CatchProductionContext::block() {
  return getRuleContext<TypeScriptParser::BlockContext>(0);
}


size_t TypeScriptParser::CatchProductionContext::getRuleIndex() const {
  return TypeScriptParser::RuleCatchProduction;
}

void TypeScriptParser::CatchProductionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCatchProduction(this);
}

void TypeScriptParser::CatchProductionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCatchProduction(this);
}


antlrcpp::Any TypeScriptParser::CatchProductionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitCatchProduction(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::CatchProductionContext* TypeScriptParser::catchProduction() {
  CatchProductionContext *_localctx = _tracker.createInstance<CatchProductionContext>(_ctx, getState());
  enterRule(_localctx, 188, TypeScriptParser::RuleCatchProduction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1124);
    match(TypeScriptParser::Catch);
    setState(1125);
    match(TypeScriptParser::OpenParen);
    setState(1126);
    match(TypeScriptParser::Identifier);
    setState(1127);
    match(TypeScriptParser::CloseParen);
    setState(1128);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FinallyProductionContext ------------------------------------------------------------------

TypeScriptParser::FinallyProductionContext::FinallyProductionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::FinallyProductionContext::Finally() {
  return getToken(TypeScriptParser::Finally, 0);
}

TypeScriptParser::BlockContext* TypeScriptParser::FinallyProductionContext::block() {
  return getRuleContext<TypeScriptParser::BlockContext>(0);
}


size_t TypeScriptParser::FinallyProductionContext::getRuleIndex() const {
  return TypeScriptParser::RuleFinallyProduction;
}

void TypeScriptParser::FinallyProductionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFinallyProduction(this);
}

void TypeScriptParser::FinallyProductionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFinallyProduction(this);
}


antlrcpp::Any TypeScriptParser::FinallyProductionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitFinallyProduction(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::FinallyProductionContext* TypeScriptParser::finallyProduction() {
  FinallyProductionContext *_localctx = _tracker.createInstance<FinallyProductionContext>(_ctx, getState());
  enterRule(_localctx, 190, TypeScriptParser::RuleFinallyProduction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1130);
    match(TypeScriptParser::Finally);
    setState(1131);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DebuggerStatementContext ------------------------------------------------------------------

TypeScriptParser::DebuggerStatementContext::DebuggerStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::DebuggerStatementContext::Debugger() {
  return getToken(TypeScriptParser::Debugger, 0);
}

TypeScriptParser::EosContext* TypeScriptParser::DebuggerStatementContext::eos() {
  return getRuleContext<TypeScriptParser::EosContext>(0);
}


size_t TypeScriptParser::DebuggerStatementContext::getRuleIndex() const {
  return TypeScriptParser::RuleDebuggerStatement;
}

void TypeScriptParser::DebuggerStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDebuggerStatement(this);
}

void TypeScriptParser::DebuggerStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDebuggerStatement(this);
}


antlrcpp::Any TypeScriptParser::DebuggerStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitDebuggerStatement(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::DebuggerStatementContext* TypeScriptParser::debuggerStatement() {
  DebuggerStatementContext *_localctx = _tracker.createInstance<DebuggerStatementContext>(_ctx, getState());
  enterRule(_localctx, 192, TypeScriptParser::RuleDebuggerStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1133);
    match(TypeScriptParser::Debugger);
    setState(1134);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

TypeScriptParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::FunctionDeclarationContext::Function_() {
  return getToken(TypeScriptParser::Function_, 0);
}

tree::TerminalNode* TypeScriptParser::FunctionDeclarationContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

TypeScriptParser::CallSignatureContext* TypeScriptParser::FunctionDeclarationContext::callSignature() {
  return getRuleContext<TypeScriptParser::CallSignatureContext>(0);
}

tree::TerminalNode* TypeScriptParser::FunctionDeclarationContext::SemiColon() {
  return getToken(TypeScriptParser::SemiColon, 0);
}

tree::TerminalNode* TypeScriptParser::FunctionDeclarationContext::OpenBrace() {
  return getToken(TypeScriptParser::OpenBrace, 0);
}

tree::TerminalNode* TypeScriptParser::FunctionDeclarationContext::CloseBrace() {
  return getToken(TypeScriptParser::CloseBrace, 0);
}

TypeScriptParser::FunctionBodyContext* TypeScriptParser::FunctionDeclarationContext::functionBody() {
  return getRuleContext<TypeScriptParser::FunctionBodyContext>(0);
}


size_t TypeScriptParser::FunctionDeclarationContext::getRuleIndex() const {
  return TypeScriptParser::RuleFunctionDeclaration;
}

void TypeScriptParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void TypeScriptParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}


antlrcpp::Any TypeScriptParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::FunctionDeclarationContext* TypeScriptParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 194, TypeScriptParser::RuleFunctionDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1136);
    match(TypeScriptParser::Function_);
    setState(1137);
    dynamic_cast<FunctionDeclarationContext *>(_localctx)->id = match(TypeScriptParser::Identifier);
    setState(1138);
    dynamic_cast<FunctionDeclarationContext *>(_localctx)->signature = callSignature();
    setState(1144);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypeScriptParser::OpenBrace: {
        setState(1139);
        match(TypeScriptParser::OpenBrace);
        setState(1140);
        dynamic_cast<FunctionDeclarationContext *>(_localctx)->body = functionBody();
        setState(1141);
        match(TypeScriptParser::CloseBrace);
        break;
      }

      case TypeScriptParser::SemiColon: {
        setState(1143);
        match(TypeScriptParser::SemiColon);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    dynamic_cast<FunctionDeclarationContext *>(_localctx)->type =  "FunctionDeclaration";  
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclarationContext ------------------------------------------------------------------

TypeScriptParser::ClassDeclarationContext::ClassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::ClassDeclarationContext::Class() {
  return getToken(TypeScriptParser::Class, 0);
}

tree::TerminalNode* TypeScriptParser::ClassDeclarationContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

TypeScriptParser::ClassHeritageContext* TypeScriptParser::ClassDeclarationContext::classHeritage() {
  return getRuleContext<TypeScriptParser::ClassHeritageContext>(0);
}

TypeScriptParser::ClassTailContext* TypeScriptParser::ClassDeclarationContext::classTail() {
  return getRuleContext<TypeScriptParser::ClassTailContext>(0);
}

tree::TerminalNode* TypeScriptParser::ClassDeclarationContext::Abstract() {
  return getToken(TypeScriptParser::Abstract, 0);
}

TypeScriptParser::TypeParametersContext* TypeScriptParser::ClassDeclarationContext::typeParameters() {
  return getRuleContext<TypeScriptParser::TypeParametersContext>(0);
}


size_t TypeScriptParser::ClassDeclarationContext::getRuleIndex() const {
  return TypeScriptParser::RuleClassDeclaration;
}

void TypeScriptParser::ClassDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDeclaration(this);
}

void TypeScriptParser::ClassDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDeclaration(this);
}


antlrcpp::Any TypeScriptParser::ClassDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitClassDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ClassDeclarationContext* TypeScriptParser::classDeclaration() {
  ClassDeclarationContext *_localctx = _tracker.createInstance<ClassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 196, TypeScriptParser::RuleClassDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1149);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Abstract) {
      setState(1148);
      match(TypeScriptParser::Abstract);
    }
    setState(1151);
    match(TypeScriptParser::Class);
    setState(1152);
    match(TypeScriptParser::Identifier);
    setState(1154);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::LessThan) {
      setState(1153);
      typeParameters();
    }
    setState(1156);
    classHeritage();
    setState(1157);
    classTail();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassHeritageContext ------------------------------------------------------------------

TypeScriptParser::ClassHeritageContext::ClassHeritageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::ClassExtendsClauseContext* TypeScriptParser::ClassHeritageContext::classExtendsClause() {
  return getRuleContext<TypeScriptParser::ClassExtendsClauseContext>(0);
}

TypeScriptParser::ImplementsClauseContext* TypeScriptParser::ClassHeritageContext::implementsClause() {
  return getRuleContext<TypeScriptParser::ImplementsClauseContext>(0);
}


size_t TypeScriptParser::ClassHeritageContext::getRuleIndex() const {
  return TypeScriptParser::RuleClassHeritage;
}

void TypeScriptParser::ClassHeritageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassHeritage(this);
}

void TypeScriptParser::ClassHeritageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassHeritage(this);
}


antlrcpp::Any TypeScriptParser::ClassHeritageContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitClassHeritage(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ClassHeritageContext* TypeScriptParser::classHeritage() {
  ClassHeritageContext *_localctx = _tracker.createInstance<ClassHeritageContext>(_ctx, getState());
  enterRule(_localctx, 198, TypeScriptParser::RuleClassHeritage);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1160);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Extends) {
      setState(1159);
      classExtendsClause();
    }
    setState(1163);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Implements) {
      setState(1162);
      implementsClause();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassTailContext ------------------------------------------------------------------

TypeScriptParser::ClassTailContext::ClassTailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::ClassTailContext::OpenBrace() {
  return getToken(TypeScriptParser::OpenBrace, 0);
}

tree::TerminalNode* TypeScriptParser::ClassTailContext::CloseBrace() {
  return getToken(TypeScriptParser::CloseBrace, 0);
}

std::vector<TypeScriptParser::ClassElementContext *> TypeScriptParser::ClassTailContext::classElement() {
  return getRuleContexts<TypeScriptParser::ClassElementContext>();
}

TypeScriptParser::ClassElementContext* TypeScriptParser::ClassTailContext::classElement(size_t i) {
  return getRuleContext<TypeScriptParser::ClassElementContext>(i);
}


size_t TypeScriptParser::ClassTailContext::getRuleIndex() const {
  return TypeScriptParser::RuleClassTail;
}

void TypeScriptParser::ClassTailContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassTail(this);
}

void TypeScriptParser::ClassTailContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassTail(this);
}


antlrcpp::Any TypeScriptParser::ClassTailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitClassTail(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ClassTailContext* TypeScriptParser::classTail() {
  ClassTailContext *_localctx = _tracker.createInstance<ClassTailContext>(_ctx, getState());
  enterRule(_localctx, 200, TypeScriptParser::RuleClassTail);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1165);
    match(TypeScriptParser::OpenBrace);
    setState(1169);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 132, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1166);
        classElement(); 
      }
      setState(1171);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 132, _ctx);
    }
    setState(1172);
    match(TypeScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassExtendsClauseContext ------------------------------------------------------------------

TypeScriptParser::ClassExtendsClauseContext::ClassExtendsClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::ClassExtendsClauseContext::Extends() {
  return getToken(TypeScriptParser::Extends, 0);
}

TypeScriptParser::TypeReferenceContext* TypeScriptParser::ClassExtendsClauseContext::typeReference() {
  return getRuleContext<TypeScriptParser::TypeReferenceContext>(0);
}


size_t TypeScriptParser::ClassExtendsClauseContext::getRuleIndex() const {
  return TypeScriptParser::RuleClassExtendsClause;
}

void TypeScriptParser::ClassExtendsClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassExtendsClause(this);
}

void TypeScriptParser::ClassExtendsClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassExtendsClause(this);
}


antlrcpp::Any TypeScriptParser::ClassExtendsClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitClassExtendsClause(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ClassExtendsClauseContext* TypeScriptParser::classExtendsClause() {
  ClassExtendsClauseContext *_localctx = _tracker.createInstance<ClassExtendsClauseContext>(_ctx, getState());
  enterRule(_localctx, 202, TypeScriptParser::RuleClassExtendsClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1174);
    match(TypeScriptParser::Extends);
    setState(1175);
    typeReference();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImplementsClauseContext ------------------------------------------------------------------

TypeScriptParser::ImplementsClauseContext::ImplementsClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::ImplementsClauseContext::Implements() {
  return getToken(TypeScriptParser::Implements, 0);
}

TypeScriptParser::ClassOrInterfaceTypeListContext* TypeScriptParser::ImplementsClauseContext::classOrInterfaceTypeList() {
  return getRuleContext<TypeScriptParser::ClassOrInterfaceTypeListContext>(0);
}


size_t TypeScriptParser::ImplementsClauseContext::getRuleIndex() const {
  return TypeScriptParser::RuleImplementsClause;
}

void TypeScriptParser::ImplementsClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImplementsClause(this);
}

void TypeScriptParser::ImplementsClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImplementsClause(this);
}


antlrcpp::Any TypeScriptParser::ImplementsClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitImplementsClause(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ImplementsClauseContext* TypeScriptParser::implementsClause() {
  ImplementsClauseContext *_localctx = _tracker.createInstance<ImplementsClauseContext>(_ctx, getState());
  enterRule(_localctx, 204, TypeScriptParser::RuleImplementsClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1177);
    match(TypeScriptParser::Implements);
    setState(1178);
    classOrInterfaceTypeList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassElementContext ------------------------------------------------------------------

TypeScriptParser::ClassElementContext::ClassElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::ConstructorDeclarationContext* TypeScriptParser::ClassElementContext::constructorDeclaration() {
  return getRuleContext<TypeScriptParser::ConstructorDeclarationContext>(0);
}

TypeScriptParser::PropertyMemberDeclarationContext* TypeScriptParser::ClassElementContext::propertyMemberDeclaration() {
  return getRuleContext<TypeScriptParser::PropertyMemberDeclarationContext>(0);
}

TypeScriptParser::DecoratorListContext* TypeScriptParser::ClassElementContext::decoratorList() {
  return getRuleContext<TypeScriptParser::DecoratorListContext>(0);
}

TypeScriptParser::IndexMemberDeclarationContext* TypeScriptParser::ClassElementContext::indexMemberDeclaration() {
  return getRuleContext<TypeScriptParser::IndexMemberDeclarationContext>(0);
}

TypeScriptParser::StatementContext* TypeScriptParser::ClassElementContext::statement() {
  return getRuleContext<TypeScriptParser::StatementContext>(0);
}


size_t TypeScriptParser::ClassElementContext::getRuleIndex() const {
  return TypeScriptParser::RuleClassElement;
}

void TypeScriptParser::ClassElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassElement(this);
}

void TypeScriptParser::ClassElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassElement(this);
}


antlrcpp::Any TypeScriptParser::ClassElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitClassElement(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ClassElementContext* TypeScriptParser::classElement() {
  ClassElementContext *_localctx = _tracker.createInstance<ClassElementContext>(_ctx, getState());
  enterRule(_localctx, 206, TypeScriptParser::RuleClassElement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1187);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 134, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1180);
      constructorDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1182);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypeScriptParser::At) {
        setState(1181);
        decoratorList();
      }
      setState(1184);
      propertyMemberDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1185);
      indexMemberDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1186);
      statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyMemberDeclarationContext ------------------------------------------------------------------

TypeScriptParser::PropertyMemberDeclarationContext::PropertyMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TypeScriptParser::PropertyMemberDeclarationContext::getRuleIndex() const {
  return TypeScriptParser::RulePropertyMemberDeclaration;
}

void TypeScriptParser::PropertyMemberDeclarationContext::copyFrom(PropertyMemberDeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
  this->key = ctx->key;
  this->computed = ctx->computed;
  this->isStatic = ctx->isStatic;
}

//----------------- MethodDeclarationExpressionContext ------------------------------------------------------------------

TypeScriptParser::PropertyMemberBaseContext* TypeScriptParser::MethodDeclarationExpressionContext::propertyMemberBase() {
  return getRuleContext<TypeScriptParser::PropertyMemberBaseContext>(0);
}

TypeScriptParser::PropertyNameContext* TypeScriptParser::MethodDeclarationExpressionContext::propertyName() {
  return getRuleContext<TypeScriptParser::PropertyNameContext>(0);
}

TypeScriptParser::CallSignatureContext* TypeScriptParser::MethodDeclarationExpressionContext::callSignature() {
  return getRuleContext<TypeScriptParser::CallSignatureContext>(0);
}

tree::TerminalNode* TypeScriptParser::MethodDeclarationExpressionContext::SemiColon() {
  return getToken(TypeScriptParser::SemiColon, 0);
}

tree::TerminalNode* TypeScriptParser::MethodDeclarationExpressionContext::OpenBrace() {
  return getToken(TypeScriptParser::OpenBrace, 0);
}

TypeScriptParser::FunctionBodyContext* TypeScriptParser::MethodDeclarationExpressionContext::functionBody() {
  return getRuleContext<TypeScriptParser::FunctionBodyContext>(0);
}

tree::TerminalNode* TypeScriptParser::MethodDeclarationExpressionContext::CloseBrace() {
  return getToken(TypeScriptParser::CloseBrace, 0);
}

TypeScriptParser::MethodDeclarationExpressionContext::MethodDeclarationExpressionContext(PropertyMemberDeclarationContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::MethodDeclarationExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodDeclarationExpression(this);
}
void TypeScriptParser::MethodDeclarationExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodDeclarationExpression(this);
}

antlrcpp::Any TypeScriptParser::MethodDeclarationExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitMethodDeclarationExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GetterSetterDeclarationExpressionContext ------------------------------------------------------------------

TypeScriptParser::PropertyMemberBaseContext* TypeScriptParser::GetterSetterDeclarationExpressionContext::propertyMemberBase() {
  return getRuleContext<TypeScriptParser::PropertyMemberBaseContext>(0);
}

TypeScriptParser::GetAccessorContext* TypeScriptParser::GetterSetterDeclarationExpressionContext::getAccessor() {
  return getRuleContext<TypeScriptParser::GetAccessorContext>(0);
}

TypeScriptParser::SetAccessorContext* TypeScriptParser::GetterSetterDeclarationExpressionContext::setAccessor() {
  return getRuleContext<TypeScriptParser::SetAccessorContext>(0);
}

TypeScriptParser::GetterSetterDeclarationExpressionContext::GetterSetterDeclarationExpressionContext(PropertyMemberDeclarationContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::GetterSetterDeclarationExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGetterSetterDeclarationExpression(this);
}
void TypeScriptParser::GetterSetterDeclarationExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGetterSetterDeclarationExpression(this);
}

antlrcpp::Any TypeScriptParser::GetterSetterDeclarationExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitGetterSetterDeclarationExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PropertyDefinitionContext ------------------------------------------------------------------

TypeScriptParser::PropertyMemberBaseContext* TypeScriptParser::PropertyDefinitionContext::propertyMemberBase() {
  return getRuleContext<TypeScriptParser::PropertyMemberBaseContext>(0);
}

TypeScriptParser::PropertyNameContext* TypeScriptParser::PropertyDefinitionContext::propertyName() {
  return getRuleContext<TypeScriptParser::PropertyNameContext>(0);
}

tree::TerminalNode* TypeScriptParser::PropertyDefinitionContext::SemiColon() {
  return getToken(TypeScriptParser::SemiColon, 0);
}

tree::TerminalNode* TypeScriptParser::PropertyDefinitionContext::QuestionMark() {
  return getToken(TypeScriptParser::QuestionMark, 0);
}

TypeScriptParser::TypeAnnotationContext* TypeScriptParser::PropertyDefinitionContext::typeAnnotation() {
  return getRuleContext<TypeScriptParser::TypeAnnotationContext>(0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::PropertyDefinitionContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

TypeScriptParser::PropertyDefinitionContext::PropertyDefinitionContext(PropertyMemberDeclarationContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::PropertyDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyDefinition(this);
}
void TypeScriptParser::PropertyDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyDefinition(this);
}

antlrcpp::Any TypeScriptParser::PropertyDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitPropertyDefinition(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AbstractMemberDeclarationContext ------------------------------------------------------------------

TypeScriptParser::AbstractDeclarationContext* TypeScriptParser::AbstractMemberDeclarationContext::abstractDeclaration() {
  return getRuleContext<TypeScriptParser::AbstractDeclarationContext>(0);
}

TypeScriptParser::AbstractMemberDeclarationContext::AbstractMemberDeclarationContext(PropertyMemberDeclarationContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::AbstractMemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractMemberDeclaration(this);
}
void TypeScriptParser::AbstractMemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractMemberDeclaration(this);
}

antlrcpp::Any TypeScriptParser::AbstractMemberDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitAbstractMemberDeclaration(this);
  else
    return visitor->visitChildren(this);
}
TypeScriptParser::PropertyMemberDeclarationContext* TypeScriptParser::propertyMemberDeclaration() {
  PropertyMemberDeclarationContext *_localctx = _tracker.createInstance<PropertyMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 208, TypeScriptParser::RulePropertyMemberDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1219);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 140, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<PropertyMemberDeclarationContext *>(_tracker.createInstance<TypeScriptParser::PropertyDefinitionContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(1189);
      propertyMemberBase();
      setState(1190);
      propertyName();
      setState(1192);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypeScriptParser::QuestionMark) {
        setState(1191);
        match(TypeScriptParser::QuestionMark);
      }
      setState(1195);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypeScriptParser::Colon) {
        setState(1194);
        typeAnnotation();
      }
      setState(1198);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TypeScriptParser::RegularExpressionLiteral)
        | (1ULL << TypeScriptParser::OpenBracket)
        | (1ULL << TypeScriptParser::OpenParen)
        | (1ULL << TypeScriptParser::OpenBrace)
        | (1ULL << TypeScriptParser::PlusPlus)
        | (1ULL << TypeScriptParser::MinusMinus)
        | (1ULL << TypeScriptParser::Plus)
        | (1ULL << TypeScriptParser::Minus)
        | (1ULL << TypeScriptParser::BitNot)
        | (1ULL << TypeScriptParser::Not)
        | (1ULL << TypeScriptParser::LessThan)
        | (1ULL << TypeScriptParser::NullLiteral)
        | (1ULL << TypeScriptParser::BooleanLiteral)
        | (1ULL << TypeScriptParser::DecimalLiteral)
        | (1ULL << TypeScriptParser::HexIntegerLiteral)
        | (1ULL << TypeScriptParser::OctalIntegerLiteral)
        | (1ULL << TypeScriptParser::OctalIntegerLiteral2)
        | (1ULL << TypeScriptParser::BinaryIntegerLiteral)
        | (1ULL << TypeScriptParser::Break)
        | (1ULL << TypeScriptParser::Do))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (TypeScriptParser::Instanceof - 64))
        | (1ULL << (TypeScriptParser::Typeof - 64))
        | (1ULL << (TypeScriptParser::Case - 64))
        | (1ULL << (TypeScriptParser::Else - 64))
        | (1ULL << (TypeScriptParser::New - 64))
        | (1ULL << (TypeScriptParser::Var - 64))
        | (1ULL << (TypeScriptParser::Catch - 64))
        | (1ULL << (TypeScriptParser::Finally - 64))
        | (1ULL << (TypeScriptParser::Return - 64))
        | (1ULL << (TypeScriptParser::Void - 64))
        | (1ULL << (TypeScriptParser::Continue - 64))
        | (1ULL << (TypeScriptParser::For - 64))
        | (1ULL << (TypeScriptParser::Switch - 64))
        | (1ULL << (TypeScriptParser::While - 64))
        | (1ULL << (TypeScriptParser::Debugger - 64))
        | (1ULL << (TypeScriptParser::Function_ - 64))
        | (1ULL << (TypeScriptParser::This - 64))
        | (1ULL << (TypeScriptParser::With - 64))
        | (1ULL << (TypeScriptParser::Default - 64))
        | (1ULL << (TypeScriptParser::If - 64))
        | (1ULL << (TypeScriptParser::Throw - 64))
        | (1ULL << (TypeScriptParser::Delete - 64))
        | (1ULL << (TypeScriptParser::In - 64))
        | (1ULL << (TypeScriptParser::Try - 64))
        | (1ULL << (TypeScriptParser::From - 64))
        | (1ULL << (TypeScriptParser::ReadOnly - 64))
        | (1ULL << (TypeScriptParser::Async - 64))
        | (1ULL << (TypeScriptParser::Class - 64))
        | (1ULL << (TypeScriptParser::Enum - 64))
        | (1ULL << (TypeScriptParser::Extends - 64))
        | (1ULL << (TypeScriptParser::Super - 64))
        | (1ULL << (TypeScriptParser::Const - 64))
        | (1ULL << (TypeScriptParser::Export - 64))
        | (1ULL << (TypeScriptParser::Import - 64))
        | (1ULL << (TypeScriptParser::Implements - 64))
        | (1ULL << (TypeScriptParser::Let - 64))
        | (1ULL << (TypeScriptParser::Private - 64))
        | (1ULL << (TypeScriptParser::Public - 64))
        | (1ULL << (TypeScriptParser::Interface - 64))
        | (1ULL << (TypeScriptParser::Package - 64))
        | (1ULL << (TypeScriptParser::Protected - 64))
        | (1ULL << (TypeScriptParser::Static - 64))
        | (1ULL << (TypeScriptParser::Yield - 64))
        | (1ULL << (TypeScriptParser::String - 64))
        | (1ULL << (TypeScriptParser::TypeAlias - 64))
        | (1ULL << (TypeScriptParser::Get - 64))
        | (1ULL << (TypeScriptParser::Set - 64))
        | (1ULL << (TypeScriptParser::Require - 64))
        | (1ULL << (TypeScriptParser::Identifier - 64))
        | (1ULL << (TypeScriptParser::StringLiteral - 64))
        | (1ULL << (TypeScriptParser::BackTick - 64)))) != 0)) {
        setState(1197);
        dynamic_cast<PropertyDefinitionContext *>(_localctx)->value = expression(0);
      }
      setState(1200);
      match(TypeScriptParser::SemiColon);

              dynamic_cast<PropertyDefinitionContext *>(_localctx)->type =  "PropertyDefinition";
          
      break;
    }

    case 2: {
      _localctx = dynamic_cast<PropertyMemberDeclarationContext *>(_tracker.createInstance<TypeScriptParser::MethodDeclarationExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(1203);
      propertyMemberBase();
      setState(1204);
      propertyName();
      setState(1205);
      callSignature();
      setState(1211);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypeScriptParser::OpenBrace: {
          setState(1206);
          match(TypeScriptParser::OpenBrace);
          setState(1207);
          functionBody();
          setState(1208);
          match(TypeScriptParser::CloseBrace);
          break;
        }

        case TypeScriptParser::SemiColon: {
          setState(1210);
          match(TypeScriptParser::SemiColon);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 3: {
      _localctx = dynamic_cast<PropertyMemberDeclarationContext *>(_tracker.createInstance<TypeScriptParser::GetterSetterDeclarationExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(1213);
      propertyMemberBase();
      setState(1216);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypeScriptParser::Get: {
          setState(1214);
          getAccessor();
          break;
        }

        case TypeScriptParser::Set: {
          setState(1215);
          setAccessor();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 4: {
      _localctx = dynamic_cast<PropertyMemberDeclarationContext *>(_tracker.createInstance<TypeScriptParser::AbstractMemberDeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(1218);
      abstractDeclaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyMemberBaseContext ------------------------------------------------------------------

TypeScriptParser::PropertyMemberBaseContext::PropertyMemberBaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::PropertyMemberBaseContext::Async() {
  return getToken(TypeScriptParser::Async, 0);
}

TypeScriptParser::AccessibilityModifierContext* TypeScriptParser::PropertyMemberBaseContext::accessibilityModifier() {
  return getRuleContext<TypeScriptParser::AccessibilityModifierContext>(0);
}

tree::TerminalNode* TypeScriptParser::PropertyMemberBaseContext::Static() {
  return getToken(TypeScriptParser::Static, 0);
}

tree::TerminalNode* TypeScriptParser::PropertyMemberBaseContext::ReadOnly() {
  return getToken(TypeScriptParser::ReadOnly, 0);
}


size_t TypeScriptParser::PropertyMemberBaseContext::getRuleIndex() const {
  return TypeScriptParser::RulePropertyMemberBase;
}

void TypeScriptParser::PropertyMemberBaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyMemberBase(this);
}

void TypeScriptParser::PropertyMemberBaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyMemberBase(this);
}


antlrcpp::Any TypeScriptParser::PropertyMemberBaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitPropertyMemberBase(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::PropertyMemberBaseContext* TypeScriptParser::propertyMemberBase() {
  PropertyMemberBaseContext *_localctx = _tracker.createInstance<PropertyMemberBaseContext>(_ctx, getState());
  enterRule(_localctx, 210, TypeScriptParser::RulePropertyMemberBase);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1222);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx)) {
    case 1: {
      setState(1221);
      match(TypeScriptParser::Async);
      break;
    }

    default:
      break;
    }
    setState(1225);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 142, _ctx)) {
    case 1: {
      setState(1224);
      accessibilityModifier();
      break;
    }

    default:
      break;
    }
    setState(1228);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 143, _ctx)) {
    case 1: {
      setState(1227);
      match(TypeScriptParser::Static);
      break;
    }

    default:
      break;
    }
    setState(1231);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 144, _ctx)) {
    case 1: {
      setState(1230);
      match(TypeScriptParser::ReadOnly);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IndexMemberDeclarationContext ------------------------------------------------------------------

TypeScriptParser::IndexMemberDeclarationContext::IndexMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::IndexSignatureContext* TypeScriptParser::IndexMemberDeclarationContext::indexSignature() {
  return getRuleContext<TypeScriptParser::IndexSignatureContext>(0);
}

tree::TerminalNode* TypeScriptParser::IndexMemberDeclarationContext::SemiColon() {
  return getToken(TypeScriptParser::SemiColon, 0);
}


size_t TypeScriptParser::IndexMemberDeclarationContext::getRuleIndex() const {
  return TypeScriptParser::RuleIndexMemberDeclaration;
}

void TypeScriptParser::IndexMemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndexMemberDeclaration(this);
}

void TypeScriptParser::IndexMemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndexMemberDeclaration(this);
}


antlrcpp::Any TypeScriptParser::IndexMemberDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitIndexMemberDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::IndexMemberDeclarationContext* TypeScriptParser::indexMemberDeclaration() {
  IndexMemberDeclarationContext *_localctx = _tracker.createInstance<IndexMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 212, TypeScriptParser::RuleIndexMemberDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1233);
    indexSignature();
    setState(1234);
    match(TypeScriptParser::SemiColon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GeneratorMethodContext ------------------------------------------------------------------

TypeScriptParser::GeneratorMethodContext::GeneratorMethodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::GeneratorMethodContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

tree::TerminalNode* TypeScriptParser::GeneratorMethodContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

tree::TerminalNode* TypeScriptParser::GeneratorMethodContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

tree::TerminalNode* TypeScriptParser::GeneratorMethodContext::OpenBrace() {
  return getToken(TypeScriptParser::OpenBrace, 0);
}

TypeScriptParser::FunctionBodyContext* TypeScriptParser::GeneratorMethodContext::functionBody() {
  return getRuleContext<TypeScriptParser::FunctionBodyContext>(0);
}

tree::TerminalNode* TypeScriptParser::GeneratorMethodContext::CloseBrace() {
  return getToken(TypeScriptParser::CloseBrace, 0);
}

tree::TerminalNode* TypeScriptParser::GeneratorMethodContext::Multiply() {
  return getToken(TypeScriptParser::Multiply, 0);
}

TypeScriptParser::FormalParameterListContext* TypeScriptParser::GeneratorMethodContext::formalParameterList() {
  return getRuleContext<TypeScriptParser::FormalParameterListContext>(0);
}


size_t TypeScriptParser::GeneratorMethodContext::getRuleIndex() const {
  return TypeScriptParser::RuleGeneratorMethod;
}

void TypeScriptParser::GeneratorMethodContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGeneratorMethod(this);
}

void TypeScriptParser::GeneratorMethodContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGeneratorMethod(this);
}


antlrcpp::Any TypeScriptParser::GeneratorMethodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitGeneratorMethod(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::GeneratorMethodContext* TypeScriptParser::generatorMethod() {
  GeneratorMethodContext *_localctx = _tracker.createInstance<GeneratorMethodContext>(_ctx, getState());
  enterRule(_localctx, 214, TypeScriptParser::RuleGeneratorMethod);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1237);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Multiply) {
      setState(1236);
      match(TypeScriptParser::Multiply);
    }
    setState(1239);
    match(TypeScriptParser::Identifier);
    setState(1240);
    match(TypeScriptParser::OpenParen);
    setState(1242);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypeScriptParser::OpenBracket)
      | (1ULL << TypeScriptParser::OpenBrace)
      | (1ULL << TypeScriptParser::Ellipsis))) != 0) || ((((_la - 101) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 101)) & ((1ULL << (TypeScriptParser::Private - 101))
      | (1ULL << (TypeScriptParser::Public - 101))
      | (1ULL << (TypeScriptParser::Protected - 101))
      | (1ULL << (TypeScriptParser::TypeAlias - 101))
      | (1ULL << (TypeScriptParser::Require - 101))
      | (1ULL << (TypeScriptParser::At - 101))
      | (1ULL << (TypeScriptParser::Identifier - 101)))) != 0)) {
      setState(1241);
      formalParameterList();
    }
    setState(1244);
    match(TypeScriptParser::CloseParen);
    setState(1245);
    match(TypeScriptParser::OpenBrace);
    setState(1246);
    functionBody();
    setState(1247);
    match(TypeScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GeneratorFunctionDeclarationContext ------------------------------------------------------------------

TypeScriptParser::GeneratorFunctionDeclarationContext::GeneratorFunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::GeneratorFunctionDeclarationContext::Function_() {
  return getToken(TypeScriptParser::Function_, 0);
}

tree::TerminalNode* TypeScriptParser::GeneratorFunctionDeclarationContext::Multiply() {
  return getToken(TypeScriptParser::Multiply, 0);
}

tree::TerminalNode* TypeScriptParser::GeneratorFunctionDeclarationContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

tree::TerminalNode* TypeScriptParser::GeneratorFunctionDeclarationContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

tree::TerminalNode* TypeScriptParser::GeneratorFunctionDeclarationContext::OpenBrace() {
  return getToken(TypeScriptParser::OpenBrace, 0);
}

TypeScriptParser::FunctionBodyContext* TypeScriptParser::GeneratorFunctionDeclarationContext::functionBody() {
  return getRuleContext<TypeScriptParser::FunctionBodyContext>(0);
}

tree::TerminalNode* TypeScriptParser::GeneratorFunctionDeclarationContext::CloseBrace() {
  return getToken(TypeScriptParser::CloseBrace, 0);
}

tree::TerminalNode* TypeScriptParser::GeneratorFunctionDeclarationContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

TypeScriptParser::FormalParameterListContext* TypeScriptParser::GeneratorFunctionDeclarationContext::formalParameterList() {
  return getRuleContext<TypeScriptParser::FormalParameterListContext>(0);
}


size_t TypeScriptParser::GeneratorFunctionDeclarationContext::getRuleIndex() const {
  return TypeScriptParser::RuleGeneratorFunctionDeclaration;
}

void TypeScriptParser::GeneratorFunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGeneratorFunctionDeclaration(this);
}

void TypeScriptParser::GeneratorFunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGeneratorFunctionDeclaration(this);
}


antlrcpp::Any TypeScriptParser::GeneratorFunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitGeneratorFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::GeneratorFunctionDeclarationContext* TypeScriptParser::generatorFunctionDeclaration() {
  GeneratorFunctionDeclarationContext *_localctx = _tracker.createInstance<GeneratorFunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 216, TypeScriptParser::RuleGeneratorFunctionDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1249);
    match(TypeScriptParser::Function_);
    setState(1250);
    match(TypeScriptParser::Multiply);
    setState(1252);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Identifier) {
      setState(1251);
      match(TypeScriptParser::Identifier);
    }
    setState(1254);
    match(TypeScriptParser::OpenParen);
    setState(1256);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypeScriptParser::OpenBracket)
      | (1ULL << TypeScriptParser::OpenBrace)
      | (1ULL << TypeScriptParser::Ellipsis))) != 0) || ((((_la - 101) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 101)) & ((1ULL << (TypeScriptParser::Private - 101))
      | (1ULL << (TypeScriptParser::Public - 101))
      | (1ULL << (TypeScriptParser::Protected - 101))
      | (1ULL << (TypeScriptParser::TypeAlias - 101))
      | (1ULL << (TypeScriptParser::Require - 101))
      | (1ULL << (TypeScriptParser::At - 101))
      | (1ULL << (TypeScriptParser::Identifier - 101)))) != 0)) {
      setState(1255);
      formalParameterList();
    }
    setState(1258);
    match(TypeScriptParser::CloseParen);
    setState(1259);
    match(TypeScriptParser::OpenBrace);
    setState(1260);
    functionBody();
    setState(1261);
    match(TypeScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GeneratorBlockContext ------------------------------------------------------------------

TypeScriptParser::GeneratorBlockContext::GeneratorBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::GeneratorBlockContext::OpenBrace() {
  return getToken(TypeScriptParser::OpenBrace, 0);
}

std::vector<TypeScriptParser::GeneratorDefinitionContext *> TypeScriptParser::GeneratorBlockContext::generatorDefinition() {
  return getRuleContexts<TypeScriptParser::GeneratorDefinitionContext>();
}

TypeScriptParser::GeneratorDefinitionContext* TypeScriptParser::GeneratorBlockContext::generatorDefinition(size_t i) {
  return getRuleContext<TypeScriptParser::GeneratorDefinitionContext>(i);
}

tree::TerminalNode* TypeScriptParser::GeneratorBlockContext::CloseBrace() {
  return getToken(TypeScriptParser::CloseBrace, 0);
}

std::vector<tree::TerminalNode *> TypeScriptParser::GeneratorBlockContext::Comma() {
  return getTokens(TypeScriptParser::Comma);
}

tree::TerminalNode* TypeScriptParser::GeneratorBlockContext::Comma(size_t i) {
  return getToken(TypeScriptParser::Comma, i);
}


size_t TypeScriptParser::GeneratorBlockContext::getRuleIndex() const {
  return TypeScriptParser::RuleGeneratorBlock;
}

void TypeScriptParser::GeneratorBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGeneratorBlock(this);
}

void TypeScriptParser::GeneratorBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGeneratorBlock(this);
}


antlrcpp::Any TypeScriptParser::GeneratorBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitGeneratorBlock(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::GeneratorBlockContext* TypeScriptParser::generatorBlock() {
  GeneratorBlockContext *_localctx = _tracker.createInstance<GeneratorBlockContext>(_ctx, getState());
  enterRule(_localctx, 218, TypeScriptParser::RuleGeneratorBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1263);
    match(TypeScriptParser::OpenBrace);
    setState(1264);
    generatorDefinition();
    setState(1269);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 149, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1265);
        match(TypeScriptParser::Comma);
        setState(1266);
        generatorDefinition(); 
      }
      setState(1271);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 149, _ctx);
    }
    setState(1273);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Comma) {
      setState(1272);
      match(TypeScriptParser::Comma);
    }
    setState(1275);
    match(TypeScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GeneratorDefinitionContext ------------------------------------------------------------------

TypeScriptParser::GeneratorDefinitionContext::GeneratorDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::GeneratorDefinitionContext::Multiply() {
  return getToken(TypeScriptParser::Multiply, 0);
}

TypeScriptParser::IteratorDefinitionContext* TypeScriptParser::GeneratorDefinitionContext::iteratorDefinition() {
  return getRuleContext<TypeScriptParser::IteratorDefinitionContext>(0);
}


size_t TypeScriptParser::GeneratorDefinitionContext::getRuleIndex() const {
  return TypeScriptParser::RuleGeneratorDefinition;
}

void TypeScriptParser::GeneratorDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGeneratorDefinition(this);
}

void TypeScriptParser::GeneratorDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGeneratorDefinition(this);
}


antlrcpp::Any TypeScriptParser::GeneratorDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitGeneratorDefinition(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::GeneratorDefinitionContext* TypeScriptParser::generatorDefinition() {
  GeneratorDefinitionContext *_localctx = _tracker.createInstance<GeneratorDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 220, TypeScriptParser::RuleGeneratorDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1277);
    match(TypeScriptParser::Multiply);
    setState(1278);
    iteratorDefinition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IteratorBlockContext ------------------------------------------------------------------

TypeScriptParser::IteratorBlockContext::IteratorBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::IteratorBlockContext::OpenBrace() {
  return getToken(TypeScriptParser::OpenBrace, 0);
}

std::vector<TypeScriptParser::IteratorDefinitionContext *> TypeScriptParser::IteratorBlockContext::iteratorDefinition() {
  return getRuleContexts<TypeScriptParser::IteratorDefinitionContext>();
}

TypeScriptParser::IteratorDefinitionContext* TypeScriptParser::IteratorBlockContext::iteratorDefinition(size_t i) {
  return getRuleContext<TypeScriptParser::IteratorDefinitionContext>(i);
}

tree::TerminalNode* TypeScriptParser::IteratorBlockContext::CloseBrace() {
  return getToken(TypeScriptParser::CloseBrace, 0);
}

std::vector<tree::TerminalNode *> TypeScriptParser::IteratorBlockContext::Comma() {
  return getTokens(TypeScriptParser::Comma);
}

tree::TerminalNode* TypeScriptParser::IteratorBlockContext::Comma(size_t i) {
  return getToken(TypeScriptParser::Comma, i);
}


size_t TypeScriptParser::IteratorBlockContext::getRuleIndex() const {
  return TypeScriptParser::RuleIteratorBlock;
}

void TypeScriptParser::IteratorBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIteratorBlock(this);
}

void TypeScriptParser::IteratorBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIteratorBlock(this);
}


antlrcpp::Any TypeScriptParser::IteratorBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitIteratorBlock(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::IteratorBlockContext* TypeScriptParser::iteratorBlock() {
  IteratorBlockContext *_localctx = _tracker.createInstance<IteratorBlockContext>(_ctx, getState());
  enterRule(_localctx, 222, TypeScriptParser::RuleIteratorBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1280);
    match(TypeScriptParser::OpenBrace);
    setState(1281);
    iteratorDefinition();
    setState(1286);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 151, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1282);
        match(TypeScriptParser::Comma);
        setState(1283);
        iteratorDefinition(); 
      }
      setState(1288);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 151, _ctx);
    }
    setState(1290);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Comma) {
      setState(1289);
      match(TypeScriptParser::Comma);
    }
    setState(1292);
    match(TypeScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IteratorDefinitionContext ------------------------------------------------------------------

TypeScriptParser::IteratorDefinitionContext::IteratorDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::IteratorDefinitionContext::OpenBracket() {
  return getToken(TypeScriptParser::OpenBracket, 0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::IteratorDefinitionContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

tree::TerminalNode* TypeScriptParser::IteratorDefinitionContext::CloseBracket() {
  return getToken(TypeScriptParser::CloseBracket, 0);
}

tree::TerminalNode* TypeScriptParser::IteratorDefinitionContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

tree::TerminalNode* TypeScriptParser::IteratorDefinitionContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

tree::TerminalNode* TypeScriptParser::IteratorDefinitionContext::OpenBrace() {
  return getToken(TypeScriptParser::OpenBrace, 0);
}

TypeScriptParser::FunctionBodyContext* TypeScriptParser::IteratorDefinitionContext::functionBody() {
  return getRuleContext<TypeScriptParser::FunctionBodyContext>(0);
}

tree::TerminalNode* TypeScriptParser::IteratorDefinitionContext::CloseBrace() {
  return getToken(TypeScriptParser::CloseBrace, 0);
}

TypeScriptParser::FormalParameterListContext* TypeScriptParser::IteratorDefinitionContext::formalParameterList() {
  return getRuleContext<TypeScriptParser::FormalParameterListContext>(0);
}


size_t TypeScriptParser::IteratorDefinitionContext::getRuleIndex() const {
  return TypeScriptParser::RuleIteratorDefinition;
}

void TypeScriptParser::IteratorDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIteratorDefinition(this);
}

void TypeScriptParser::IteratorDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIteratorDefinition(this);
}


antlrcpp::Any TypeScriptParser::IteratorDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitIteratorDefinition(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::IteratorDefinitionContext* TypeScriptParser::iteratorDefinition() {
  IteratorDefinitionContext *_localctx = _tracker.createInstance<IteratorDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 224, TypeScriptParser::RuleIteratorDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1294);
    match(TypeScriptParser::OpenBracket);
    setState(1295);
    expression(0);
    setState(1296);
    match(TypeScriptParser::CloseBracket);
    setState(1297);
    match(TypeScriptParser::OpenParen);
    setState(1299);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypeScriptParser::OpenBracket)
      | (1ULL << TypeScriptParser::OpenBrace)
      | (1ULL << TypeScriptParser::Ellipsis))) != 0) || ((((_la - 101) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 101)) & ((1ULL << (TypeScriptParser::Private - 101))
      | (1ULL << (TypeScriptParser::Public - 101))
      | (1ULL << (TypeScriptParser::Protected - 101))
      | (1ULL << (TypeScriptParser::TypeAlias - 101))
      | (1ULL << (TypeScriptParser::Require - 101))
      | (1ULL << (TypeScriptParser::At - 101))
      | (1ULL << (TypeScriptParser::Identifier - 101)))) != 0)) {
      setState(1298);
      formalParameterList();
    }
    setState(1301);
    match(TypeScriptParser::CloseParen);
    setState(1302);
    match(TypeScriptParser::OpenBrace);
    setState(1303);
    functionBody();
    setState(1304);
    match(TypeScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterListContext ------------------------------------------------------------------

TypeScriptParser::FormalParameterListContext::FormalParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypeScriptParser::FormalParameterArgContext *> TypeScriptParser::FormalParameterListContext::formalParameterArg() {
  return getRuleContexts<TypeScriptParser::FormalParameterArgContext>();
}

TypeScriptParser::FormalParameterArgContext* TypeScriptParser::FormalParameterListContext::formalParameterArg(size_t i) {
  return getRuleContext<TypeScriptParser::FormalParameterArgContext>(i);
}

std::vector<tree::TerminalNode *> TypeScriptParser::FormalParameterListContext::Comma() {
  return getTokens(TypeScriptParser::Comma);
}

tree::TerminalNode* TypeScriptParser::FormalParameterListContext::Comma(size_t i) {
  return getToken(TypeScriptParser::Comma, i);
}

TypeScriptParser::LastFormalParameterArgContext* TypeScriptParser::FormalParameterListContext::lastFormalParameterArg() {
  return getRuleContext<TypeScriptParser::LastFormalParameterArgContext>(0);
}

TypeScriptParser::ArrayLiteralContext* TypeScriptParser::FormalParameterListContext::arrayLiteral() {
  return getRuleContext<TypeScriptParser::ArrayLiteralContext>(0);
}

TypeScriptParser::ObjectLiteralContext* TypeScriptParser::FormalParameterListContext::objectLiteral() {
  return getRuleContext<TypeScriptParser::ObjectLiteralContext>(0);
}

tree::TerminalNode* TypeScriptParser::FormalParameterListContext::Colon() {
  return getToken(TypeScriptParser::Colon, 0);
}

TypeScriptParser::FormalParameterListContext* TypeScriptParser::FormalParameterListContext::formalParameterList() {
  return getRuleContext<TypeScriptParser::FormalParameterListContext>(0);
}


size_t TypeScriptParser::FormalParameterListContext::getRuleIndex() const {
  return TypeScriptParser::RuleFormalParameterList;
}

void TypeScriptParser::FormalParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameterList(this);
}

void TypeScriptParser::FormalParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameterList(this);
}


antlrcpp::Any TypeScriptParser::FormalParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitFormalParameterList(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::FormalParameterListContext* TypeScriptParser::formalParameterList() {
  FormalParameterListContext *_localctx = _tracker.createInstance<FormalParameterListContext>(_ctx, getState());
  enterRule(_localctx, 226, TypeScriptParser::RuleFormalParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(1325);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypeScriptParser::Private:
      case TypeScriptParser::Public:
      case TypeScriptParser::Protected:
      case TypeScriptParser::TypeAlias:
      case TypeScriptParser::Require:
      case TypeScriptParser::At:
      case TypeScriptParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1306);
        formalParameterArg();
        setState(1311);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 154, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(1307);
            match(TypeScriptParser::Comma);
            setState(1308);
            formalParameterArg(); 
          }
          setState(1313);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 154, _ctx);
        }
        setState(1316);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypeScriptParser::Comma) {
          setState(1314);
          match(TypeScriptParser::Comma);
          setState(1315);
          lastFormalParameterArg();
        }
        break;
      }

      case TypeScriptParser::Ellipsis: {
        enterOuterAlt(_localctx, 2);
        setState(1318);
        lastFormalParameterArg();
        break;
      }

      case TypeScriptParser::OpenBracket: {
        enterOuterAlt(_localctx, 3);
        setState(1319);
        arrayLiteral();
        break;
      }

      case TypeScriptParser::OpenBrace: {
        enterOuterAlt(_localctx, 4);
        setState(1320);
        objectLiteral();
        setState(1323);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypeScriptParser::Colon) {
          setState(1321);
          match(TypeScriptParser::Colon);
          setState(1322);
          formalParameterList();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterArgContext ------------------------------------------------------------------

TypeScriptParser::FormalParameterArgContext::FormalParameterArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::IdentifierOrKeyWordContext* TypeScriptParser::FormalParameterArgContext::identifierOrKeyWord() {
  return getRuleContext<TypeScriptParser::IdentifierOrKeyWordContext>(0);
}

TypeScriptParser::DecoratorContext* TypeScriptParser::FormalParameterArgContext::decorator() {
  return getRuleContext<TypeScriptParser::DecoratorContext>(0);
}

TypeScriptParser::AccessibilityModifierContext* TypeScriptParser::FormalParameterArgContext::accessibilityModifier() {
  return getRuleContext<TypeScriptParser::AccessibilityModifierContext>(0);
}

tree::TerminalNode* TypeScriptParser::FormalParameterArgContext::QuestionMark() {
  return getToken(TypeScriptParser::QuestionMark, 0);
}

TypeScriptParser::TypeAnnotationContext* TypeScriptParser::FormalParameterArgContext::typeAnnotation() {
  return getRuleContext<TypeScriptParser::TypeAnnotationContext>(0);
}

tree::TerminalNode* TypeScriptParser::FormalParameterArgContext::Assign() {
  return getToken(TypeScriptParser::Assign, 0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::FormalParameterArgContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}


size_t TypeScriptParser::FormalParameterArgContext::getRuleIndex() const {
  return TypeScriptParser::RuleFormalParameterArg;
}

void TypeScriptParser::FormalParameterArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameterArg(this);
}

void TypeScriptParser::FormalParameterArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameterArg(this);
}


antlrcpp::Any TypeScriptParser::FormalParameterArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitFormalParameterArg(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::FormalParameterArgContext* TypeScriptParser::formalParameterArg() {
  FormalParameterArgContext *_localctx = _tracker.createInstance<FormalParameterArgContext>(_ctx, getState());
  enterRule(_localctx, 228, TypeScriptParser::RuleFormalParameterArg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1328);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::At) {
      setState(1327);
      decorator();
    }
    setState(1331);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 101) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 101)) & ((1ULL << (TypeScriptParser::Private - 101))
      | (1ULL << (TypeScriptParser::Public - 101))
      | (1ULL << (TypeScriptParser::Protected - 101)))) != 0)) {
      setState(1330);
      accessibilityModifier();
    }
    setState(1333);
    identifierOrKeyWord();
    setState(1335);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::QuestionMark) {
      setState(1334);
      match(TypeScriptParser::QuestionMark);
    }
    setState(1338);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Colon) {
      setState(1337);
      typeAnnotation();
    }
    setState(1342);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Assign) {
      setState(1340);
      match(TypeScriptParser::Assign);
      setState(1341);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LastFormalParameterArgContext ------------------------------------------------------------------

TypeScriptParser::LastFormalParameterArgContext::LastFormalParameterArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::LastFormalParameterArgContext::Ellipsis() {
  return getToken(TypeScriptParser::Ellipsis, 0);
}

tree::TerminalNode* TypeScriptParser::LastFormalParameterArgContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}


size_t TypeScriptParser::LastFormalParameterArgContext::getRuleIndex() const {
  return TypeScriptParser::RuleLastFormalParameterArg;
}

void TypeScriptParser::LastFormalParameterArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLastFormalParameterArg(this);
}

void TypeScriptParser::LastFormalParameterArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLastFormalParameterArg(this);
}


antlrcpp::Any TypeScriptParser::LastFormalParameterArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitLastFormalParameterArg(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::LastFormalParameterArgContext* TypeScriptParser::lastFormalParameterArg() {
  LastFormalParameterArgContext *_localctx = _tracker.createInstance<LastFormalParameterArgContext>(_ctx, getState());
  enterRule(_localctx, 230, TypeScriptParser::RuleLastFormalParameterArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1344);
    match(TypeScriptParser::Ellipsis);
    setState(1345);
    match(TypeScriptParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionBodyContext ------------------------------------------------------------------

TypeScriptParser::FunctionBodyContext::FunctionBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::SourceElementsContext* TypeScriptParser::FunctionBodyContext::sourceElements() {
  return getRuleContext<TypeScriptParser::SourceElementsContext>(0);
}


size_t TypeScriptParser::FunctionBodyContext::getRuleIndex() const {
  return TypeScriptParser::RuleFunctionBody;
}

void TypeScriptParser::FunctionBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionBody(this);
}

void TypeScriptParser::FunctionBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionBody(this);
}


antlrcpp::Any TypeScriptParser::FunctionBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitFunctionBody(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::FunctionBodyContext* TypeScriptParser::functionBody() {
  FunctionBodyContext *_localctx = _tracker.createInstance<FunctionBodyContext>(_ctx, getState());
  enterRule(_localctx, 232, TypeScriptParser::RuleFunctionBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1348);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, _ctx)) {
    case 1: {
      setState(1347);
      sourceElements();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SourceElementsContext ------------------------------------------------------------------

TypeScriptParser::SourceElementsContext::SourceElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypeScriptParser::SourceElementContext *> TypeScriptParser::SourceElementsContext::sourceElement() {
  return getRuleContexts<TypeScriptParser::SourceElementContext>();
}

TypeScriptParser::SourceElementContext* TypeScriptParser::SourceElementsContext::sourceElement(size_t i) {
  return getRuleContext<TypeScriptParser::SourceElementContext>(i);
}


size_t TypeScriptParser::SourceElementsContext::getRuleIndex() const {
  return TypeScriptParser::RuleSourceElements;
}

void TypeScriptParser::SourceElementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSourceElements(this);
}

void TypeScriptParser::SourceElementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSourceElements(this);
}


antlrcpp::Any TypeScriptParser::SourceElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitSourceElements(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::SourceElementsContext* TypeScriptParser::sourceElements() {
  SourceElementsContext *_localctx = _tracker.createInstance<SourceElementsContext>(_ctx, getState());
  enterRule(_localctx, 234, TypeScriptParser::RuleSourceElements);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1351); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1350);
              sourceElement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1353); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 164, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayLiteralContext ------------------------------------------------------------------

TypeScriptParser::ArrayLiteralContext::ArrayLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::ArrayLiteralContext::OpenBracket() {
  return getToken(TypeScriptParser::OpenBracket, 0);
}

tree::TerminalNode* TypeScriptParser::ArrayLiteralContext::CloseBracket() {
  return getToken(TypeScriptParser::CloseBracket, 0);
}

TypeScriptParser::ElementListContext* TypeScriptParser::ArrayLiteralContext::elementList() {
  return getRuleContext<TypeScriptParser::ElementListContext>(0);
}


size_t TypeScriptParser::ArrayLiteralContext::getRuleIndex() const {
  return TypeScriptParser::RuleArrayLiteral;
}

void TypeScriptParser::ArrayLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayLiteral(this);
}

void TypeScriptParser::ArrayLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayLiteral(this);
}


antlrcpp::Any TypeScriptParser::ArrayLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitArrayLiteral(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ArrayLiteralContext* TypeScriptParser::arrayLiteral() {
  ArrayLiteralContext *_localctx = _tracker.createInstance<ArrayLiteralContext>(_ctx, getState());
  enterRule(_localctx, 236, TypeScriptParser::RuleArrayLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1355);
    match(TypeScriptParser::OpenBracket);
    setState(1357);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypeScriptParser::RegularExpressionLiteral)
      | (1ULL << TypeScriptParser::OpenBracket)
      | (1ULL << TypeScriptParser::OpenParen)
      | (1ULL << TypeScriptParser::OpenBrace)
      | (1ULL << TypeScriptParser::Ellipsis)
      | (1ULL << TypeScriptParser::PlusPlus)
      | (1ULL << TypeScriptParser::MinusMinus)
      | (1ULL << TypeScriptParser::Plus)
      | (1ULL << TypeScriptParser::Minus)
      | (1ULL << TypeScriptParser::BitNot)
      | (1ULL << TypeScriptParser::Not)
      | (1ULL << TypeScriptParser::LessThan)
      | (1ULL << TypeScriptParser::NullLiteral)
      | (1ULL << TypeScriptParser::BooleanLiteral)
      | (1ULL << TypeScriptParser::DecimalLiteral)
      | (1ULL << TypeScriptParser::HexIntegerLiteral)
      | (1ULL << TypeScriptParser::OctalIntegerLiteral)
      | (1ULL << TypeScriptParser::OctalIntegerLiteral2)
      | (1ULL << TypeScriptParser::BinaryIntegerLiteral)
      | (1ULL << TypeScriptParser::Break)
      | (1ULL << TypeScriptParser::Do))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (TypeScriptParser::Instanceof - 64))
      | (1ULL << (TypeScriptParser::Typeof - 64))
      | (1ULL << (TypeScriptParser::Case - 64))
      | (1ULL << (TypeScriptParser::Else - 64))
      | (1ULL << (TypeScriptParser::New - 64))
      | (1ULL << (TypeScriptParser::Var - 64))
      | (1ULL << (TypeScriptParser::Catch - 64))
      | (1ULL << (TypeScriptParser::Finally - 64))
      | (1ULL << (TypeScriptParser::Return - 64))
      | (1ULL << (TypeScriptParser::Void - 64))
      | (1ULL << (TypeScriptParser::Continue - 64))
      | (1ULL << (TypeScriptParser::For - 64))
      | (1ULL << (TypeScriptParser::Switch - 64))
      | (1ULL << (TypeScriptParser::While - 64))
      | (1ULL << (TypeScriptParser::Debugger - 64))
      | (1ULL << (TypeScriptParser::Function_ - 64))
      | (1ULL << (TypeScriptParser::This - 64))
      | (1ULL << (TypeScriptParser::With - 64))
      | (1ULL << (TypeScriptParser::Default - 64))
      | (1ULL << (TypeScriptParser::If - 64))
      | (1ULL << (TypeScriptParser::Throw - 64))
      | (1ULL << (TypeScriptParser::Delete - 64))
      | (1ULL << (TypeScriptParser::In - 64))
      | (1ULL << (TypeScriptParser::Try - 64))
      | (1ULL << (TypeScriptParser::From - 64))
      | (1ULL << (TypeScriptParser::ReadOnly - 64))
      | (1ULL << (TypeScriptParser::Async - 64))
      | (1ULL << (TypeScriptParser::Class - 64))
      | (1ULL << (TypeScriptParser::Enum - 64))
      | (1ULL << (TypeScriptParser::Extends - 64))
      | (1ULL << (TypeScriptParser::Super - 64))
      | (1ULL << (TypeScriptParser::Const - 64))
      | (1ULL << (TypeScriptParser::Export - 64))
      | (1ULL << (TypeScriptParser::Import - 64))
      | (1ULL << (TypeScriptParser::Implements - 64))
      | (1ULL << (TypeScriptParser::Let - 64))
      | (1ULL << (TypeScriptParser::Private - 64))
      | (1ULL << (TypeScriptParser::Public - 64))
      | (1ULL << (TypeScriptParser::Interface - 64))
      | (1ULL << (TypeScriptParser::Package - 64))
      | (1ULL << (TypeScriptParser::Protected - 64))
      | (1ULL << (TypeScriptParser::Static - 64))
      | (1ULL << (TypeScriptParser::Yield - 64))
      | (1ULL << (TypeScriptParser::String - 64))
      | (1ULL << (TypeScriptParser::TypeAlias - 64))
      | (1ULL << (TypeScriptParser::Get - 64))
      | (1ULL << (TypeScriptParser::Set - 64))
      | (1ULL << (TypeScriptParser::Require - 64))
      | (1ULL << (TypeScriptParser::Identifier - 64))
      | (1ULL << (TypeScriptParser::StringLiteral - 64))
      | (1ULL << (TypeScriptParser::BackTick - 64)))) != 0)) {
      setState(1356);
      dynamic_cast<ArrayLiteralContext *>(_localctx)->elements = elementList();
    }
    setState(1359);
    match(TypeScriptParser::CloseBracket);

            dynamic_cast<ArrayLiteralContext *>(_localctx)->type =  "ArrayExpression";
        
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementListContext ------------------------------------------------------------------

TypeScriptParser::ElementListContext::ElementListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypeScriptParser::ArrayElementContext *> TypeScriptParser::ElementListContext::arrayElement() {
  return getRuleContexts<TypeScriptParser::ArrayElementContext>();
}

TypeScriptParser::ArrayElementContext* TypeScriptParser::ElementListContext::arrayElement(size_t i) {
  return getRuleContext<TypeScriptParser::ArrayElementContext>(i);
}

std::vector<tree::TerminalNode *> TypeScriptParser::ElementListContext::Comma() {
  return getTokens(TypeScriptParser::Comma);
}

tree::TerminalNode* TypeScriptParser::ElementListContext::Comma(size_t i) {
  return getToken(TypeScriptParser::Comma, i);
}


size_t TypeScriptParser::ElementListContext::getRuleIndex() const {
  return TypeScriptParser::RuleElementList;
}

void TypeScriptParser::ElementListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementList(this);
}

void TypeScriptParser::ElementListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementList(this);
}


antlrcpp::Any TypeScriptParser::ElementListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitElementList(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ElementListContext* TypeScriptParser::elementList() {
  ElementListContext *_localctx = _tracker.createInstance<ElementListContext>(_ctx, getState());
  enterRule(_localctx, 238, TypeScriptParser::RuleElementList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1363);
    arrayElement();
    setState(1372);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypeScriptParser::Comma) {
      setState(1365); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(1364);
        match(TypeScriptParser::Comma);
        setState(1367); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == TypeScriptParser::Comma);
      setState(1369);
      arrayElement();
      setState(1374);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayElementContext ------------------------------------------------------------------

TypeScriptParser::ArrayElementContext::ArrayElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::ExpressionContext* TypeScriptParser::ArrayElementContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

tree::TerminalNode* TypeScriptParser::ArrayElementContext::Ellipsis() {
  return getToken(TypeScriptParser::Ellipsis, 0);
}

tree::TerminalNode* TypeScriptParser::ArrayElementContext::Comma() {
  return getToken(TypeScriptParser::Comma, 0);
}


size_t TypeScriptParser::ArrayElementContext::getRuleIndex() const {
  return TypeScriptParser::RuleArrayElement;
}

void TypeScriptParser::ArrayElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayElement(this);
}

void TypeScriptParser::ArrayElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayElement(this);
}


antlrcpp::Any TypeScriptParser::ArrayElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitArrayElement(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ArrayElementContext* TypeScriptParser::arrayElement() {
  ArrayElementContext *_localctx = _tracker.createInstance<ArrayElementContext>(_ctx, getState());
  enterRule(_localctx, 240, TypeScriptParser::RuleArrayElement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1376);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Ellipsis) {
      setState(1375);
      match(TypeScriptParser::Ellipsis);
    }
    setState(1378);
    expression(0);
    setState(1380);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 169, _ctx)) {
    case 1: {
      setState(1379);
      match(TypeScriptParser::Comma);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectLiteralContext ------------------------------------------------------------------

TypeScriptParser::ObjectLiteralContext::ObjectLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::ObjectLiteralContext::OpenBrace() {
  return getToken(TypeScriptParser::OpenBrace, 0);
}

tree::TerminalNode* TypeScriptParser::ObjectLiteralContext::CloseBrace() {
  return getToken(TypeScriptParser::CloseBrace, 0);
}

std::vector<TypeScriptParser::PropertyAssignmentContext *> TypeScriptParser::ObjectLiteralContext::propertyAssignment() {
  return getRuleContexts<TypeScriptParser::PropertyAssignmentContext>();
}

TypeScriptParser::PropertyAssignmentContext* TypeScriptParser::ObjectLiteralContext::propertyAssignment(size_t i) {
  return getRuleContext<TypeScriptParser::PropertyAssignmentContext>(i);
}

std::vector<tree::TerminalNode *> TypeScriptParser::ObjectLiteralContext::Comma() {
  return getTokens(TypeScriptParser::Comma);
}

tree::TerminalNode* TypeScriptParser::ObjectLiteralContext::Comma(size_t i) {
  return getToken(TypeScriptParser::Comma, i);
}


size_t TypeScriptParser::ObjectLiteralContext::getRuleIndex() const {
  return TypeScriptParser::RuleObjectLiteral;
}

void TypeScriptParser::ObjectLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectLiteral(this);
}

void TypeScriptParser::ObjectLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectLiteral(this);
}


antlrcpp::Any TypeScriptParser::ObjectLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitObjectLiteral(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ObjectLiteralContext* TypeScriptParser::objectLiteral() {
  ObjectLiteralContext *_localctx = _tracker.createInstance<ObjectLiteralContext>(_ctx, getState());
  enterRule(_localctx, 242, TypeScriptParser::RuleObjectLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1382);
    match(TypeScriptParser::OpenBrace);
    setState(1394);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypeScriptParser::OpenBracket)
      | (1ULL << TypeScriptParser::Ellipsis)
      | (1ULL << TypeScriptParser::Multiply)
      | (1ULL << TypeScriptParser::NullLiteral)
      | (1ULL << TypeScriptParser::BooleanLiteral)
      | (1ULL << TypeScriptParser::DecimalLiteral)
      | (1ULL << TypeScriptParser::HexIntegerLiteral)
      | (1ULL << TypeScriptParser::OctalIntegerLiteral)
      | (1ULL << TypeScriptParser::OctalIntegerLiteral2)
      | (1ULL << TypeScriptParser::BinaryIntegerLiteral)
      | (1ULL << TypeScriptParser::Break)
      | (1ULL << TypeScriptParser::Do))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (TypeScriptParser::Instanceof - 64))
      | (1ULL << (TypeScriptParser::Typeof - 64))
      | (1ULL << (TypeScriptParser::Case - 64))
      | (1ULL << (TypeScriptParser::Else - 64))
      | (1ULL << (TypeScriptParser::New - 64))
      | (1ULL << (TypeScriptParser::Var - 64))
      | (1ULL << (TypeScriptParser::Catch - 64))
      | (1ULL << (TypeScriptParser::Finally - 64))
      | (1ULL << (TypeScriptParser::Return - 64))
      | (1ULL << (TypeScriptParser::Void - 64))
      | (1ULL << (TypeScriptParser::Continue - 64))
      | (1ULL << (TypeScriptParser::For - 64))
      | (1ULL << (TypeScriptParser::Switch - 64))
      | (1ULL << (TypeScriptParser::While - 64))
      | (1ULL << (TypeScriptParser::Debugger - 64))
      | (1ULL << (TypeScriptParser::Function_ - 64))
      | (1ULL << (TypeScriptParser::This - 64))
      | (1ULL << (TypeScriptParser::With - 64))
      | (1ULL << (TypeScriptParser::Default - 64))
      | (1ULL << (TypeScriptParser::If - 64))
      | (1ULL << (TypeScriptParser::Throw - 64))
      | (1ULL << (TypeScriptParser::Delete - 64))
      | (1ULL << (TypeScriptParser::In - 64))
      | (1ULL << (TypeScriptParser::Try - 64))
      | (1ULL << (TypeScriptParser::From - 64))
      | (1ULL << (TypeScriptParser::ReadOnly - 64))
      | (1ULL << (TypeScriptParser::Async - 64))
      | (1ULL << (TypeScriptParser::Class - 64))
      | (1ULL << (TypeScriptParser::Enum - 64))
      | (1ULL << (TypeScriptParser::Extends - 64))
      | (1ULL << (TypeScriptParser::Super - 64))
      | (1ULL << (TypeScriptParser::Const - 64))
      | (1ULL << (TypeScriptParser::Export - 64))
      | (1ULL << (TypeScriptParser::Import - 64))
      | (1ULL << (TypeScriptParser::Implements - 64))
      | (1ULL << (TypeScriptParser::Let - 64))
      | (1ULL << (TypeScriptParser::Private - 64))
      | (1ULL << (TypeScriptParser::Public - 64))
      | (1ULL << (TypeScriptParser::Interface - 64))
      | (1ULL << (TypeScriptParser::Package - 64))
      | (1ULL << (TypeScriptParser::Protected - 64))
      | (1ULL << (TypeScriptParser::Static - 64))
      | (1ULL << (TypeScriptParser::Yield - 64))
      | (1ULL << (TypeScriptParser::String - 64))
      | (1ULL << (TypeScriptParser::TypeAlias - 64))
      | (1ULL << (TypeScriptParser::Get - 64))
      | (1ULL << (TypeScriptParser::Set - 64))
      | (1ULL << (TypeScriptParser::Require - 64))
      | (1ULL << (TypeScriptParser::Identifier - 64))
      | (1ULL << (TypeScriptParser::StringLiteral - 64)))) != 0)) {
      setState(1383);
      propertyAssignment();
      setState(1388);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 170, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1384);
          match(TypeScriptParser::Comma);
          setState(1385);
          propertyAssignment(); 
        }
        setState(1390);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 170, _ctx);
      }
      setState(1392);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypeScriptParser::Comma) {
        setState(1391);
        match(TypeScriptParser::Comma);
      }
    }
    setState(1396);
    match(TypeScriptParser::CloseBrace);

            dynamic_cast<ObjectLiteralContext *>(_localctx)->type =  "ObjectExpression";
        
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyAssignmentContext ------------------------------------------------------------------

TypeScriptParser::PropertyAssignmentContext::PropertyAssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TypeScriptParser::PropertyAssignmentContext::getRuleIndex() const {
  return TypeScriptParser::RulePropertyAssignment;
}

void TypeScriptParser::PropertyAssignmentContext::copyFrom(PropertyAssignmentContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
  this->method = ctx->method;
  this->shorthand = ctx->shorthand;
  this->computed = ctx->computed;
  this->kind = ctx->kind;
}

//----------------- PropertyExpressionAssignmentContext ------------------------------------------------------------------

TypeScriptParser::PropertyNameContext* TypeScriptParser::PropertyExpressionAssignmentContext::propertyName() {
  return getRuleContext<TypeScriptParser::PropertyNameContext>(0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::PropertyExpressionAssignmentContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

tree::TerminalNode* TypeScriptParser::PropertyExpressionAssignmentContext::Colon() {
  return getToken(TypeScriptParser::Colon, 0);
}

tree::TerminalNode* TypeScriptParser::PropertyExpressionAssignmentContext::Assign() {
  return getToken(TypeScriptParser::Assign, 0);
}

TypeScriptParser::PropertyExpressionAssignmentContext::PropertyExpressionAssignmentContext(PropertyAssignmentContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::PropertyExpressionAssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyExpressionAssignment(this);
}
void TypeScriptParser::PropertyExpressionAssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyExpressionAssignment(this);
}

antlrcpp::Any TypeScriptParser::PropertyExpressionAssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitPropertyExpressionAssignment(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ComputedPropertyExpressionAssignmentContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::ComputedPropertyExpressionAssignmentContext::OpenBracket() {
  return getToken(TypeScriptParser::OpenBracket, 0);
}

std::vector<TypeScriptParser::ExpressionContext *> TypeScriptParser::ComputedPropertyExpressionAssignmentContext::expression() {
  return getRuleContexts<TypeScriptParser::ExpressionContext>();
}

TypeScriptParser::ExpressionContext* TypeScriptParser::ComputedPropertyExpressionAssignmentContext::expression(size_t i) {
  return getRuleContext<TypeScriptParser::ExpressionContext>(i);
}

tree::TerminalNode* TypeScriptParser::ComputedPropertyExpressionAssignmentContext::CloseBracket() {
  return getToken(TypeScriptParser::CloseBracket, 0);
}

tree::TerminalNode* TypeScriptParser::ComputedPropertyExpressionAssignmentContext::Colon() {
  return getToken(TypeScriptParser::Colon, 0);
}

TypeScriptParser::ComputedPropertyExpressionAssignmentContext::ComputedPropertyExpressionAssignmentContext(PropertyAssignmentContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::ComputedPropertyExpressionAssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComputedPropertyExpressionAssignment(this);
}
void TypeScriptParser::ComputedPropertyExpressionAssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComputedPropertyExpressionAssignment(this);
}

antlrcpp::Any TypeScriptParser::ComputedPropertyExpressionAssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitComputedPropertyExpressionAssignment(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PropertyShorthandContext ------------------------------------------------------------------

TypeScriptParser::IdentifierOrKeyWordContext* TypeScriptParser::PropertyShorthandContext::identifierOrKeyWord() {
  return getRuleContext<TypeScriptParser::IdentifierOrKeyWordContext>(0);
}

TypeScriptParser::PropertyShorthandContext::PropertyShorthandContext(PropertyAssignmentContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::PropertyShorthandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyShorthand(this);
}
void TypeScriptParser::PropertyShorthandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyShorthand(this);
}

antlrcpp::Any TypeScriptParser::PropertyShorthandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitPropertyShorthand(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PropertySetterContext ------------------------------------------------------------------

TypeScriptParser::SetAccessorContext* TypeScriptParser::PropertySetterContext::setAccessor() {
  return getRuleContext<TypeScriptParser::SetAccessorContext>(0);
}

TypeScriptParser::PropertySetterContext::PropertySetterContext(PropertyAssignmentContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::PropertySetterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertySetter(this);
}
void TypeScriptParser::PropertySetterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertySetter(this);
}

antlrcpp::Any TypeScriptParser::PropertySetterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitPropertySetter(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PropertyGetterContext ------------------------------------------------------------------

TypeScriptParser::GetAccessorContext* TypeScriptParser::PropertyGetterContext::getAccessor() {
  return getRuleContext<TypeScriptParser::GetAccessorContext>(0);
}

TypeScriptParser::PropertyGetterContext::PropertyGetterContext(PropertyAssignmentContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::PropertyGetterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyGetter(this);
}
void TypeScriptParser::PropertyGetterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyGetter(this);
}

antlrcpp::Any TypeScriptParser::PropertyGetterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitPropertyGetter(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RestParameterInObjectContext ------------------------------------------------------------------

TypeScriptParser::RestParameterContext* TypeScriptParser::RestParameterInObjectContext::restParameter() {
  return getRuleContext<TypeScriptParser::RestParameterContext>(0);
}

TypeScriptParser::RestParameterInObjectContext::RestParameterInObjectContext(PropertyAssignmentContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::RestParameterInObjectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRestParameterInObject(this);
}
void TypeScriptParser::RestParameterInObjectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRestParameterInObject(this);
}

antlrcpp::Any TypeScriptParser::RestParameterInObjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitRestParameterInObject(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MethodPropertyContext ------------------------------------------------------------------

TypeScriptParser::GeneratorMethodContext* TypeScriptParser::MethodPropertyContext::generatorMethod() {
  return getRuleContext<TypeScriptParser::GeneratorMethodContext>(0);
}

TypeScriptParser::MethodPropertyContext::MethodPropertyContext(PropertyAssignmentContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::MethodPropertyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodProperty(this);
}
void TypeScriptParser::MethodPropertyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodProperty(this);
}

antlrcpp::Any TypeScriptParser::MethodPropertyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitMethodProperty(this);
  else
    return visitor->visitChildren(this);
}
TypeScriptParser::PropertyAssignmentContext* TypeScriptParser::propertyAssignment() {
  PropertyAssignmentContext *_localctx = _tracker.createInstance<PropertyAssignmentContext>(_ctx, getState());
  enterRule(_localctx, 244, TypeScriptParser::RulePropertyAssignment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1426);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 173, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<PropertyAssignmentContext *>(_tracker.createInstance<TypeScriptParser::PropertyExpressionAssignmentContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(1399);
      propertyName();
      setState(1400);
      _la = _input->LA(1);
      if (!(_la == TypeScriptParser::Assign

      || _la == TypeScriptParser::Colon)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1401);
      expression(0);

              dynamic_cast<PropertyExpressionAssignmentContext *>(_localctx)->method =  false;
              dynamic_cast<PropertyExpressionAssignmentContext *>(_localctx)->shorthand =  false;
              dynamic_cast<PropertyExpressionAssignmentContext *>(_localctx)->computed =  false;
              dynamic_cast<PropertyExpressionAssignmentContext *>(_localctx)->kind =  "init";
          
      break;
    }

    case 2: {
      _localctx = dynamic_cast<PropertyAssignmentContext *>(_tracker.createInstance<TypeScriptParser::ComputedPropertyExpressionAssignmentContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(1404);
      match(TypeScriptParser::OpenBracket);
      setState(1405);
      expression(0);
      setState(1406);
      match(TypeScriptParser::CloseBracket);
      setState(1407);
      match(TypeScriptParser::Colon);
      setState(1408);
      expression(0);

              dynamic_cast<ComputedPropertyExpressionAssignmentContext *>(_localctx)->method =  false;
              dynamic_cast<ComputedPropertyExpressionAssignmentContext *>(_localctx)->shorthand =  false;
              dynamic_cast<ComputedPropertyExpressionAssignmentContext *>(_localctx)->computed =  true;
              dynamic_cast<ComputedPropertyExpressionAssignmentContext *>(_localctx)->kind =  "init";
          
      break;
    }

    case 3: {
      _localctx = dynamic_cast<PropertyAssignmentContext *>(_tracker.createInstance<TypeScriptParser::PropertyGetterContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(1411);
      getAccessor();

              dynamic_cast<PropertyGetterContext *>(_localctx)->method =  true;
              dynamic_cast<PropertyGetterContext *>(_localctx)->shorthand =  false;
              dynamic_cast<PropertyGetterContext *>(_localctx)->computed =  false;
              dynamic_cast<PropertyGetterContext *>(_localctx)->kind =  "get";

          
      break;
    }

    case 4: {
      _localctx = dynamic_cast<PropertyAssignmentContext *>(_tracker.createInstance<TypeScriptParser::PropertySetterContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(1414);
      setAccessor();

              dynamic_cast<PropertySetterContext *>(_localctx)->method =  true;
              dynamic_cast<PropertySetterContext *>(_localctx)->shorthand =  false;
              dynamic_cast<PropertySetterContext *>(_localctx)->computed =  false;
              dynamic_cast<PropertySetterContext *>(_localctx)->kind =  "set";

          
      break;
    }

    case 5: {
      _localctx = dynamic_cast<PropertyAssignmentContext *>(_tracker.createInstance<TypeScriptParser::MethodPropertyContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(1417);
      generatorMethod();

              dynamic_cast<MethodPropertyContext *>(_localctx)->method =  false;
              dynamic_cast<MethodPropertyContext *>(_localctx)->shorthand =  false;
              dynamic_cast<MethodPropertyContext *>(_localctx)->computed =  true;
              dynamic_cast<MethodPropertyContext *>(_localctx)->kind =  "init";

          
      break;
    }

    case 6: {
      _localctx = dynamic_cast<PropertyAssignmentContext *>(_tracker.createInstance<TypeScriptParser::PropertyShorthandContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(1420);
      identifierOrKeyWord();
         //TODO Need verify
              dynamic_cast<PropertyShorthandContext *>(_localctx)->method =  false;
              dynamic_cast<PropertyShorthandContext *>(_localctx)->shorthand =  true;
              dynamic_cast<PropertyShorthandContext *>(_localctx)->computed =  false;
              dynamic_cast<PropertyShorthandContext *>(_localctx)->kind =  "init";

          
      break;
    }

    case 7: {
      _localctx = dynamic_cast<PropertyAssignmentContext *>(_tracker.createInstance<TypeScriptParser::RestParameterInObjectContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(1423);
      restParameter();
         //TODO Need verify
              dynamic_cast<RestParameterInObjectContext *>(_localctx)->method =  false;
              dynamic_cast<RestParameterInObjectContext *>(_localctx)->shorthand =  false;
              dynamic_cast<RestParameterInObjectContext *>(_localctx)->computed =  true;
              dynamic_cast<RestParameterInObjectContext *>(_localctx)->kind =  "init";

          
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GetAccessorContext ------------------------------------------------------------------

TypeScriptParser::GetAccessorContext::GetAccessorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::GetterContext* TypeScriptParser::GetAccessorContext::getter() {
  return getRuleContext<TypeScriptParser::GetterContext>(0);
}

tree::TerminalNode* TypeScriptParser::GetAccessorContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

tree::TerminalNode* TypeScriptParser::GetAccessorContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

tree::TerminalNode* TypeScriptParser::GetAccessorContext::OpenBrace() {
  return getToken(TypeScriptParser::OpenBrace, 0);
}

TypeScriptParser::FunctionBodyContext* TypeScriptParser::GetAccessorContext::functionBody() {
  return getRuleContext<TypeScriptParser::FunctionBodyContext>(0);
}

tree::TerminalNode* TypeScriptParser::GetAccessorContext::CloseBrace() {
  return getToken(TypeScriptParser::CloseBrace, 0);
}

TypeScriptParser::TypeAnnotationContext* TypeScriptParser::GetAccessorContext::typeAnnotation() {
  return getRuleContext<TypeScriptParser::TypeAnnotationContext>(0);
}


size_t TypeScriptParser::GetAccessorContext::getRuleIndex() const {
  return TypeScriptParser::RuleGetAccessor;
}

void TypeScriptParser::GetAccessorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGetAccessor(this);
}

void TypeScriptParser::GetAccessorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGetAccessor(this);
}


antlrcpp::Any TypeScriptParser::GetAccessorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitGetAccessor(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::GetAccessorContext* TypeScriptParser::getAccessor() {
  GetAccessorContext *_localctx = _tracker.createInstance<GetAccessorContext>(_ctx, getState());
  enterRule(_localctx, 246, TypeScriptParser::RuleGetAccessor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1428);
    getter();
    setState(1429);
    match(TypeScriptParser::OpenParen);
    setState(1430);
    match(TypeScriptParser::CloseParen);
    setState(1432);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Colon) {
      setState(1431);
      typeAnnotation();
    }
    setState(1434);
    match(TypeScriptParser::OpenBrace);
    setState(1435);
    functionBody();
    setState(1436);
    match(TypeScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetAccessorContext ------------------------------------------------------------------

TypeScriptParser::SetAccessorContext::SetAccessorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::SetterContext* TypeScriptParser::SetAccessorContext::setter() {
  return getRuleContext<TypeScriptParser::SetterContext>(0);
}

tree::TerminalNode* TypeScriptParser::SetAccessorContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

tree::TerminalNode* TypeScriptParser::SetAccessorContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

tree::TerminalNode* TypeScriptParser::SetAccessorContext::OpenBrace() {
  return getToken(TypeScriptParser::OpenBrace, 0);
}

TypeScriptParser::FunctionBodyContext* TypeScriptParser::SetAccessorContext::functionBody() {
  return getRuleContext<TypeScriptParser::FunctionBodyContext>(0);
}

tree::TerminalNode* TypeScriptParser::SetAccessorContext::CloseBrace() {
  return getToken(TypeScriptParser::CloseBrace, 0);
}

tree::TerminalNode* TypeScriptParser::SetAccessorContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

TypeScriptParser::BindingPatternContext* TypeScriptParser::SetAccessorContext::bindingPattern() {
  return getRuleContext<TypeScriptParser::BindingPatternContext>(0);
}

TypeScriptParser::TypeAnnotationContext* TypeScriptParser::SetAccessorContext::typeAnnotation() {
  return getRuleContext<TypeScriptParser::TypeAnnotationContext>(0);
}


size_t TypeScriptParser::SetAccessorContext::getRuleIndex() const {
  return TypeScriptParser::RuleSetAccessor;
}

void TypeScriptParser::SetAccessorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetAccessor(this);
}

void TypeScriptParser::SetAccessorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetAccessor(this);
}


antlrcpp::Any TypeScriptParser::SetAccessorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitSetAccessor(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::SetAccessorContext* TypeScriptParser::setAccessor() {
  SetAccessorContext *_localctx = _tracker.createInstance<SetAccessorContext>(_ctx, getState());
  enterRule(_localctx, 248, TypeScriptParser::RuleSetAccessor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1438);
    setter();
    setState(1439);
    match(TypeScriptParser::OpenParen);
    setState(1442);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypeScriptParser::Identifier: {
        setState(1440);
        match(TypeScriptParser::Identifier);
        break;
      }

      case TypeScriptParser::OpenBracket:
      case TypeScriptParser::OpenBrace: {
        setState(1441);
        bindingPattern();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(1445);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Colon) {
      setState(1444);
      typeAnnotation();
    }
    setState(1447);
    match(TypeScriptParser::CloseParen);
    setState(1448);
    match(TypeScriptParser::OpenBrace);
    setState(1449);
    functionBody();
    setState(1450);
    match(TypeScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyNameContext ------------------------------------------------------------------

TypeScriptParser::PropertyNameContext::PropertyNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::IdentifierNameContext* TypeScriptParser::PropertyNameContext::identifierName() {
  return getRuleContext<TypeScriptParser::IdentifierNameContext>(0);
}

tree::TerminalNode* TypeScriptParser::PropertyNameContext::StringLiteral() {
  return getToken(TypeScriptParser::StringLiteral, 0);
}

TypeScriptParser::NumericLiteralContext* TypeScriptParser::PropertyNameContext::numericLiteral() {
  return getRuleContext<TypeScriptParser::NumericLiteralContext>(0);
}


size_t TypeScriptParser::PropertyNameContext::getRuleIndex() const {
  return TypeScriptParser::RulePropertyName;
}

void TypeScriptParser::PropertyNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyName(this);
}

void TypeScriptParser::PropertyNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyName(this);
}


antlrcpp::Any TypeScriptParser::PropertyNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitPropertyName(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::PropertyNameContext* TypeScriptParser::propertyName() {
  PropertyNameContext *_localctx = _tracker.createInstance<PropertyNameContext>(_ctx, getState());
  enterRule(_localctx, 250, TypeScriptParser::RulePropertyName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1455);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypeScriptParser::NullLiteral:
      case TypeScriptParser::BooleanLiteral:
      case TypeScriptParser::Break:
      case TypeScriptParser::Do:
      case TypeScriptParser::Instanceof:
      case TypeScriptParser::Typeof:
      case TypeScriptParser::Case:
      case TypeScriptParser::Else:
      case TypeScriptParser::New:
      case TypeScriptParser::Var:
      case TypeScriptParser::Catch:
      case TypeScriptParser::Finally:
      case TypeScriptParser::Return:
      case TypeScriptParser::Void:
      case TypeScriptParser::Continue:
      case TypeScriptParser::For:
      case TypeScriptParser::Switch:
      case TypeScriptParser::While:
      case TypeScriptParser::Debugger:
      case TypeScriptParser::Function_:
      case TypeScriptParser::This:
      case TypeScriptParser::With:
      case TypeScriptParser::Default:
      case TypeScriptParser::If:
      case TypeScriptParser::Throw:
      case TypeScriptParser::Delete:
      case TypeScriptParser::In:
      case TypeScriptParser::Try:
      case TypeScriptParser::From:
      case TypeScriptParser::ReadOnly:
      case TypeScriptParser::Async:
      case TypeScriptParser::Class:
      case TypeScriptParser::Enum:
      case TypeScriptParser::Extends:
      case TypeScriptParser::Super:
      case TypeScriptParser::Const:
      case TypeScriptParser::Export:
      case TypeScriptParser::Import:
      case TypeScriptParser::Implements:
      case TypeScriptParser::Let:
      case TypeScriptParser::Private:
      case TypeScriptParser::Public:
      case TypeScriptParser::Interface:
      case TypeScriptParser::Package:
      case TypeScriptParser::Protected:
      case TypeScriptParser::Static:
      case TypeScriptParser::Yield:
      case TypeScriptParser::String:
      case TypeScriptParser::TypeAlias:
      case TypeScriptParser::Get:
      case TypeScriptParser::Set:
      case TypeScriptParser::Require:
      case TypeScriptParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1452);
        identifierName();
        break;
      }

      case TypeScriptParser::StringLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(1453);
        match(TypeScriptParser::StringLiteral);
        break;
      }

      case TypeScriptParser::DecimalLiteral:
      case TypeScriptParser::HexIntegerLiteral:
      case TypeScriptParser::OctalIntegerLiteral:
      case TypeScriptParser::OctalIntegerLiteral2:
      case TypeScriptParser::BinaryIntegerLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(1454);
        numericLiteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallExpressoinArgumentsContext ------------------------------------------------------------------

TypeScriptParser::CallExpressoinArgumentsContext::CallExpressoinArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::CallExpressoinArgumentsContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

tree::TerminalNode* TypeScriptParser::CallExpressoinArgumentsContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

TypeScriptParser::ArgumentListContext* TypeScriptParser::CallExpressoinArgumentsContext::argumentList() {
  return getRuleContext<TypeScriptParser::ArgumentListContext>(0);
}

tree::TerminalNode* TypeScriptParser::CallExpressoinArgumentsContext::Comma() {
  return getToken(TypeScriptParser::Comma, 0);
}


size_t TypeScriptParser::CallExpressoinArgumentsContext::getRuleIndex() const {
  return TypeScriptParser::RuleCallExpressoinArguments;
}

void TypeScriptParser::CallExpressoinArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallExpressoinArguments(this);
}

void TypeScriptParser::CallExpressoinArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallExpressoinArguments(this);
}


antlrcpp::Any TypeScriptParser::CallExpressoinArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitCallExpressoinArguments(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::CallExpressoinArgumentsContext* TypeScriptParser::callExpressoinArguments() {
  CallExpressoinArgumentsContext *_localctx = _tracker.createInstance<CallExpressoinArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 252, TypeScriptParser::RuleCallExpressoinArguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1457);
    match(TypeScriptParser::OpenParen);
    setState(1462);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypeScriptParser::RegularExpressionLiteral)
      | (1ULL << TypeScriptParser::OpenBracket)
      | (1ULL << TypeScriptParser::OpenParen)
      | (1ULL << TypeScriptParser::OpenBrace)
      | (1ULL << TypeScriptParser::Ellipsis)
      | (1ULL << TypeScriptParser::PlusPlus)
      | (1ULL << TypeScriptParser::MinusMinus)
      | (1ULL << TypeScriptParser::Plus)
      | (1ULL << TypeScriptParser::Minus)
      | (1ULL << TypeScriptParser::BitNot)
      | (1ULL << TypeScriptParser::Not)
      | (1ULL << TypeScriptParser::LessThan)
      | (1ULL << TypeScriptParser::NullLiteral)
      | (1ULL << TypeScriptParser::BooleanLiteral)
      | (1ULL << TypeScriptParser::DecimalLiteral)
      | (1ULL << TypeScriptParser::HexIntegerLiteral)
      | (1ULL << TypeScriptParser::OctalIntegerLiteral)
      | (1ULL << TypeScriptParser::OctalIntegerLiteral2)
      | (1ULL << TypeScriptParser::BinaryIntegerLiteral)
      | (1ULL << TypeScriptParser::Break)
      | (1ULL << TypeScriptParser::Do))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (TypeScriptParser::Instanceof - 64))
      | (1ULL << (TypeScriptParser::Typeof - 64))
      | (1ULL << (TypeScriptParser::Case - 64))
      | (1ULL << (TypeScriptParser::Else - 64))
      | (1ULL << (TypeScriptParser::New - 64))
      | (1ULL << (TypeScriptParser::Var - 64))
      | (1ULL << (TypeScriptParser::Catch - 64))
      | (1ULL << (TypeScriptParser::Finally - 64))
      | (1ULL << (TypeScriptParser::Return - 64))
      | (1ULL << (TypeScriptParser::Void - 64))
      | (1ULL << (TypeScriptParser::Continue - 64))
      | (1ULL << (TypeScriptParser::For - 64))
      | (1ULL << (TypeScriptParser::Switch - 64))
      | (1ULL << (TypeScriptParser::While - 64))
      | (1ULL << (TypeScriptParser::Debugger - 64))
      | (1ULL << (TypeScriptParser::Function_ - 64))
      | (1ULL << (TypeScriptParser::This - 64))
      | (1ULL << (TypeScriptParser::With - 64))
      | (1ULL << (TypeScriptParser::Default - 64))
      | (1ULL << (TypeScriptParser::If - 64))
      | (1ULL << (TypeScriptParser::Throw - 64))
      | (1ULL << (TypeScriptParser::Delete - 64))
      | (1ULL << (TypeScriptParser::In - 64))
      | (1ULL << (TypeScriptParser::Try - 64))
      | (1ULL << (TypeScriptParser::From - 64))
      | (1ULL << (TypeScriptParser::ReadOnly - 64))
      | (1ULL << (TypeScriptParser::Async - 64))
      | (1ULL << (TypeScriptParser::Class - 64))
      | (1ULL << (TypeScriptParser::Enum - 64))
      | (1ULL << (TypeScriptParser::Extends - 64))
      | (1ULL << (TypeScriptParser::Super - 64))
      | (1ULL << (TypeScriptParser::Const - 64))
      | (1ULL << (TypeScriptParser::Export - 64))
      | (1ULL << (TypeScriptParser::Import - 64))
      | (1ULL << (TypeScriptParser::Implements - 64))
      | (1ULL << (TypeScriptParser::Let - 64))
      | (1ULL << (TypeScriptParser::Private - 64))
      | (1ULL << (TypeScriptParser::Public - 64))
      | (1ULL << (TypeScriptParser::Interface - 64))
      | (1ULL << (TypeScriptParser::Package - 64))
      | (1ULL << (TypeScriptParser::Protected - 64))
      | (1ULL << (TypeScriptParser::Static - 64))
      | (1ULL << (TypeScriptParser::Yield - 64))
      | (1ULL << (TypeScriptParser::String - 64))
      | (1ULL << (TypeScriptParser::TypeAlias - 64))
      | (1ULL << (TypeScriptParser::Get - 64))
      | (1ULL << (TypeScriptParser::Set - 64))
      | (1ULL << (TypeScriptParser::Require - 64))
      | (1ULL << (TypeScriptParser::Identifier - 64))
      | (1ULL << (TypeScriptParser::StringLiteral - 64))
      | (1ULL << (TypeScriptParser::BackTick - 64)))) != 0)) {
      setState(1458);
      argumentList();
      setState(1460);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypeScriptParser::Comma) {
        setState(1459);
        match(TypeScriptParser::Comma);
      }
    }
    setState(1464);
    match(TypeScriptParser::CloseParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentListContext ------------------------------------------------------------------

TypeScriptParser::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypeScriptParser::SingleArgumentContext *> TypeScriptParser::ArgumentListContext::singleArgument() {
  return getRuleContexts<TypeScriptParser::SingleArgumentContext>();
}

TypeScriptParser::SingleArgumentContext* TypeScriptParser::ArgumentListContext::singleArgument(size_t i) {
  return getRuleContext<TypeScriptParser::SingleArgumentContext>(i);
}

std::vector<tree::TerminalNode *> TypeScriptParser::ArgumentListContext::Comma() {
  return getTokens(TypeScriptParser::Comma);
}

tree::TerminalNode* TypeScriptParser::ArgumentListContext::Comma(size_t i) {
  return getToken(TypeScriptParser::Comma, i);
}


size_t TypeScriptParser::ArgumentListContext::getRuleIndex() const {
  return TypeScriptParser::RuleArgumentList;
}

void TypeScriptParser::ArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentList(this);
}

void TypeScriptParser::ArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentList(this);
}


antlrcpp::Any TypeScriptParser::ArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitArgumentList(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ArgumentListContext* TypeScriptParser::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 254, TypeScriptParser::RuleArgumentList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1466);
    singleArgument();
    setState(1471);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 180, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1467);
        match(TypeScriptParser::Comma);
        setState(1468);
        singleArgument(); 
      }
      setState(1473);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 180, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleArgumentContext ------------------------------------------------------------------

TypeScriptParser::SingleArgumentContext::SingleArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::ExpressionContext* TypeScriptParser::SingleArgumentContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

tree::TerminalNode* TypeScriptParser::SingleArgumentContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

tree::TerminalNode* TypeScriptParser::SingleArgumentContext::Ellipsis() {
  return getToken(TypeScriptParser::Ellipsis, 0);
}


size_t TypeScriptParser::SingleArgumentContext::getRuleIndex() const {
  return TypeScriptParser::RuleSingleArgument;
}

void TypeScriptParser::SingleArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleArgument(this);
}

void TypeScriptParser::SingleArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleArgument(this);
}


antlrcpp::Any TypeScriptParser::SingleArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitSingleArgument(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::SingleArgumentContext* TypeScriptParser::singleArgument() {
  SingleArgumentContext *_localctx = _tracker.createInstance<SingleArgumentContext>(_ctx, getState());
  enterRule(_localctx, 256, TypeScriptParser::RuleSingleArgument);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1475);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Ellipsis) {
      setState(1474);
      match(TypeScriptParser::Ellipsis);
    }
    setState(1479);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 182, _ctx)) {
    case 1: {
      setState(1477);
      expression(0);
      break;
    }

    case 2: {
      setState(1478);
      match(TypeScriptParser::Identifier);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionSequenceContext ------------------------------------------------------------------

TypeScriptParser::ExpressionSequenceContext::ExpressionSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypeScriptParser::ExpressionContext *> TypeScriptParser::ExpressionSequenceContext::expression() {
  return getRuleContexts<TypeScriptParser::ExpressionContext>();
}

TypeScriptParser::ExpressionContext* TypeScriptParser::ExpressionSequenceContext::expression(size_t i) {
  return getRuleContext<TypeScriptParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> TypeScriptParser::ExpressionSequenceContext::Comma() {
  return getTokens(TypeScriptParser::Comma);
}

tree::TerminalNode* TypeScriptParser::ExpressionSequenceContext::Comma(size_t i) {
  return getToken(TypeScriptParser::Comma, i);
}


size_t TypeScriptParser::ExpressionSequenceContext::getRuleIndex() const {
  return TypeScriptParser::RuleExpressionSequence;
}

void TypeScriptParser::ExpressionSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionSequence(this);
}

void TypeScriptParser::ExpressionSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionSequence(this);
}


antlrcpp::Any TypeScriptParser::ExpressionSequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitExpressionSequence(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ExpressionSequenceContext* TypeScriptParser::expressionSequence() {
  ExpressionSequenceContext *_localctx = _tracker.createInstance<ExpressionSequenceContext>(_ctx, getState());
  enterRule(_localctx, 258, TypeScriptParser::RuleExpressionSequence);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1481);
    expression(0);
    setState(1486);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 183, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1482);
        match(TypeScriptParser::Comma);
        setState(1483);
        expression(0); 
      }
      setState(1488);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 183, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionExpressionDeclarationContext ------------------------------------------------------------------

TypeScriptParser::FunctionExpressionDeclarationContext::FunctionExpressionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::FunctionExpressionDeclarationContext::Function_() {
  return getToken(TypeScriptParser::Function_, 0);
}

tree::TerminalNode* TypeScriptParser::FunctionExpressionDeclarationContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

tree::TerminalNode* TypeScriptParser::FunctionExpressionDeclarationContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

tree::TerminalNode* TypeScriptParser::FunctionExpressionDeclarationContext::OpenBrace() {
  return getToken(TypeScriptParser::OpenBrace, 0);
}

TypeScriptParser::FunctionBodyContext* TypeScriptParser::FunctionExpressionDeclarationContext::functionBody() {
  return getRuleContext<TypeScriptParser::FunctionBodyContext>(0);
}

tree::TerminalNode* TypeScriptParser::FunctionExpressionDeclarationContext::CloseBrace() {
  return getToken(TypeScriptParser::CloseBrace, 0);
}

TypeScriptParser::FormalParameterListContext* TypeScriptParser::FunctionExpressionDeclarationContext::formalParameterList() {
  return getRuleContext<TypeScriptParser::FormalParameterListContext>(0);
}

TypeScriptParser::TypeAnnotationContext* TypeScriptParser::FunctionExpressionDeclarationContext::typeAnnotation() {
  return getRuleContext<TypeScriptParser::TypeAnnotationContext>(0);
}

tree::TerminalNode* TypeScriptParser::FunctionExpressionDeclarationContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}


size_t TypeScriptParser::FunctionExpressionDeclarationContext::getRuleIndex() const {
  return TypeScriptParser::RuleFunctionExpressionDeclaration;
}

void TypeScriptParser::FunctionExpressionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionExpressionDeclaration(this);
}

void TypeScriptParser::FunctionExpressionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionExpressionDeclaration(this);
}


antlrcpp::Any TypeScriptParser::FunctionExpressionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitFunctionExpressionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::FunctionExpressionDeclarationContext* TypeScriptParser::functionExpressionDeclaration() {
  FunctionExpressionDeclarationContext *_localctx = _tracker.createInstance<FunctionExpressionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 260, TypeScriptParser::RuleFunctionExpressionDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1489);
    match(TypeScriptParser::Function_);
    setState(1491);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Identifier) {
      setState(1490);
      dynamic_cast<FunctionExpressionDeclarationContext *>(_localctx)->id = match(TypeScriptParser::Identifier);
    }
    setState(1493);
    match(TypeScriptParser::OpenParen);
    setState(1495);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypeScriptParser::OpenBracket)
      | (1ULL << TypeScriptParser::OpenBrace)
      | (1ULL << TypeScriptParser::Ellipsis))) != 0) || ((((_la - 101) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 101)) & ((1ULL << (TypeScriptParser::Private - 101))
      | (1ULL << (TypeScriptParser::Public - 101))
      | (1ULL << (TypeScriptParser::Protected - 101))
      | (1ULL << (TypeScriptParser::TypeAlias - 101))
      | (1ULL << (TypeScriptParser::Require - 101))
      | (1ULL << (TypeScriptParser::At - 101))
      | (1ULL << (TypeScriptParser::Identifier - 101)))) != 0)) {
      setState(1494);
      formalParameterList();
    }
    setState(1497);
    match(TypeScriptParser::CloseParen);
    setState(1499);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Colon) {
      setState(1498);
      typeAnnotation();
    }
    setState(1501);
    match(TypeScriptParser::OpenBrace);
    setState(1502);
    functionBody();
    setState(1503);
    match(TypeScriptParser::CloseBrace);

             dynamic_cast<FunctionExpressionDeclarationContext *>(_localctx)->type =  "FunctionDeclaration";
        
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UpdateOperatorContext ------------------------------------------------------------------

TypeScriptParser::UpdateOperatorContext::UpdateOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::UpdateOperatorContext::PlusPlus() {
  return getToken(TypeScriptParser::PlusPlus, 0);
}

tree::TerminalNode* TypeScriptParser::UpdateOperatorContext::MinusMinus() {
  return getToken(TypeScriptParser::MinusMinus, 0);
}


size_t TypeScriptParser::UpdateOperatorContext::getRuleIndex() const {
  return TypeScriptParser::RuleUpdateOperator;
}

void TypeScriptParser::UpdateOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUpdateOperator(this);
}

void TypeScriptParser::UpdateOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUpdateOperator(this);
}


antlrcpp::Any TypeScriptParser::UpdateOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitUpdateOperator(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::UpdateOperatorContext* TypeScriptParser::updateOperator() {
  UpdateOperatorContext *_localctx = _tracker.createInstance<UpdateOperatorContext>(_ctx, getState());
  enterRule(_localctx, 262, TypeScriptParser::RuleUpdateOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1506);
    _la = _input->LA(1);
    if (!(_la == TypeScriptParser::PlusPlus

    || _la == TypeScriptParser::MinusMinus)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOperatorContext ------------------------------------------------------------------

TypeScriptParser::UnaryOperatorContext::UnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::UnaryOperatorContext::Minus() {
  return getToken(TypeScriptParser::Minus, 0);
}

tree::TerminalNode* TypeScriptParser::UnaryOperatorContext::Plus() {
  return getToken(TypeScriptParser::Plus, 0);
}

tree::TerminalNode* TypeScriptParser::UnaryOperatorContext::Not() {
  return getToken(TypeScriptParser::Not, 0);
}

tree::TerminalNode* TypeScriptParser::UnaryOperatorContext::BitNot() {
  return getToken(TypeScriptParser::BitNot, 0);
}

tree::TerminalNode* TypeScriptParser::UnaryOperatorContext::Typeof() {
  return getToken(TypeScriptParser::Typeof, 0);
}

tree::TerminalNode* TypeScriptParser::UnaryOperatorContext::Void() {
  return getToken(TypeScriptParser::Void, 0);
}

tree::TerminalNode* TypeScriptParser::UnaryOperatorContext::Delete() {
  return getToken(TypeScriptParser::Delete, 0);
}


size_t TypeScriptParser::UnaryOperatorContext::getRuleIndex() const {
  return TypeScriptParser::RuleUnaryOperator;
}

void TypeScriptParser::UnaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryOperator(this);
}

void TypeScriptParser::UnaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryOperator(this);
}


antlrcpp::Any TypeScriptParser::UnaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitUnaryOperator(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::UnaryOperatorContext* TypeScriptParser::unaryOperator() {
  UnaryOperatorContext *_localctx = _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 264, TypeScriptParser::RuleUnaryOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1508);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypeScriptParser::Plus)
      | (1ULL << TypeScriptParser::Minus)
      | (1ULL << TypeScriptParser::BitNot)
      | (1ULL << TypeScriptParser::Not))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (TypeScriptParser::Typeof - 65))
      | (1ULL << (TypeScriptParser::Void - 65))
      | (1ULL << (TypeScriptParser::Delete - 65)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

TypeScriptParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TypeScriptParser::ExpressionContext::getRuleIndex() const {
  return TypeScriptParser::RuleExpression;
}

void TypeScriptParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- TemplateStringExpressionContext ------------------------------------------------------------------

TypeScriptParser::ExpressionContext* TypeScriptParser::TemplateStringExpressionContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

TypeScriptParser::TemplateStringLiteralContext* TypeScriptParser::TemplateStringExpressionContext::templateStringLiteral() {
  return getRuleContext<TypeScriptParser::TemplateStringLiteralContext>(0);
}

TypeScriptParser::TemplateStringExpressionContext::TemplateStringExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::TemplateStringExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateStringExpression(this);
}
void TypeScriptParser::TemplateStringExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateStringExpression(this);
}

antlrcpp::Any TypeScriptParser::TemplateStringExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTemplateStringExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TernaryExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::TernaryExpressionContext::QuestionMark() {
  return getToken(TypeScriptParser::QuestionMark, 0);
}

tree::TerminalNode* TypeScriptParser::TernaryExpressionContext::Colon() {
  return getToken(TypeScriptParser::Colon, 0);
}

std::vector<TypeScriptParser::ExpressionContext *> TypeScriptParser::TernaryExpressionContext::expression() {
  return getRuleContexts<TypeScriptParser::ExpressionContext>();
}

TypeScriptParser::ExpressionContext* TypeScriptParser::TernaryExpressionContext::expression(size_t i) {
  return getRuleContext<TypeScriptParser::ExpressionContext>(i);
}

TypeScriptParser::TernaryExpressionContext::TernaryExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::TernaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTernaryExpression(this);
}
void TypeScriptParser::TernaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTernaryExpression(this);
}

antlrcpp::Any TypeScriptParser::TernaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTernaryExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalAndExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::LogicalAndExpressionContext::And() {
  return getToken(TypeScriptParser::And, 0);
}

std::vector<TypeScriptParser::ExpressionContext *> TypeScriptParser::LogicalAndExpressionContext::expression() {
  return getRuleContexts<TypeScriptParser::ExpressionContext>();
}

TypeScriptParser::ExpressionContext* TypeScriptParser::LogicalAndExpressionContext::expression(size_t i) {
  return getRuleContext<TypeScriptParser::ExpressionContext>(i);
}

TypeScriptParser::LogicalAndExpressionContext::LogicalAndExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::LogicalAndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalAndExpression(this);
}
void TypeScriptParser::LogicalAndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalAndExpression(this);
}

antlrcpp::Any TypeScriptParser::LogicalAndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitLogicalAndExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GeneratorsExpressionContext ------------------------------------------------------------------

TypeScriptParser::GeneratorBlockContext* TypeScriptParser::GeneratorsExpressionContext::generatorBlock() {
  return getRuleContext<TypeScriptParser::GeneratorBlockContext>(0);
}

TypeScriptParser::GeneratorsExpressionContext::GeneratorsExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::GeneratorsExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGeneratorsExpression(this);
}
void TypeScriptParser::GeneratorsExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGeneratorsExpression(this);
}

antlrcpp::Any TypeScriptParser::GeneratorsExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitGeneratorsExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::InExpressionContext::In() {
  return getToken(TypeScriptParser::In, 0);
}

std::vector<TypeScriptParser::ExpressionContext *> TypeScriptParser::InExpressionContext::expression() {
  return getRuleContexts<TypeScriptParser::ExpressionContext>();
}

TypeScriptParser::ExpressionContext* TypeScriptParser::InExpressionContext::expression(size_t i) {
  return getRuleContext<TypeScriptParser::ExpressionContext>(i);
}

TypeScriptParser::InExpressionContext::InExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::InExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInExpression(this);
}
void TypeScriptParser::InExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInExpression(this);
}

antlrcpp::Any TypeScriptParser::InExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitInExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalOrExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::LogicalOrExpressionContext::Or() {
  return getToken(TypeScriptParser::Or, 0);
}

std::vector<TypeScriptParser::ExpressionContext *> TypeScriptParser::LogicalOrExpressionContext::expression() {
  return getRuleContexts<TypeScriptParser::ExpressionContext>();
}

TypeScriptParser::ExpressionContext* TypeScriptParser::LogicalOrExpressionContext::expression(size_t i) {
  return getRuleContext<TypeScriptParser::ExpressionContext>(i);
}

TypeScriptParser::LogicalOrExpressionContext::LogicalOrExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::LogicalOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalOrExpression(this);
}
void TypeScriptParser::LogicalOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalOrExpression(this);
}

antlrcpp::Any TypeScriptParser::LogicalOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitLogicalOrExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GenericTypesContext ------------------------------------------------------------------

TypeScriptParser::TypeArgumentsContext* TypeScriptParser::GenericTypesContext::typeArguments() {
  return getRuleContext<TypeScriptParser::TypeArgumentsContext>(0);
}

TypeScriptParser::ExpressionSequenceContext* TypeScriptParser::GenericTypesContext::expressionSequence() {
  return getRuleContext<TypeScriptParser::ExpressionSequenceContext>(0);
}

TypeScriptParser::GenericTypesContext::GenericTypesContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::GenericTypesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericTypes(this);
}
void TypeScriptParser::GenericTypesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericTypes(this);
}

antlrcpp::Any TypeScriptParser::GenericTypesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitGenericTypes(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::NotExpressionContext::Not() {
  return getToken(TypeScriptParser::Not, 0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::NotExpressionContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

TypeScriptParser::NotExpressionContext::NotExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::NotExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotExpression(this);
}
void TypeScriptParser::NotExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotExpression(this);
}

antlrcpp::Any TypeScriptParser::NotExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitNotExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ThisExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::ThisExpressionContext::This() {
  return getToken(TypeScriptParser::This, 0);
}

TypeScriptParser::ThisExpressionContext::ThisExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::ThisExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThisExpression(this);
}
void TypeScriptParser::ThisExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThisExpression(this);
}

antlrcpp::Any TypeScriptParser::ThisExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitThisExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionExpressionContext ------------------------------------------------------------------

TypeScriptParser::FunctionExpressionDeclarationContext* TypeScriptParser::FunctionExpressionContext::functionExpressionDeclaration() {
  return getRuleContext<TypeScriptParser::FunctionExpressionDeclarationContext>(0);
}

TypeScriptParser::FunctionExpressionContext::FunctionExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::FunctionExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionExpression(this);
}
void TypeScriptParser::FunctionExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionExpression(this);
}

antlrcpp::Any TypeScriptParser::FunctionExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitFunctionExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryMinusExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::UnaryMinusExpressionContext::Minus() {
  return getToken(TypeScriptParser::Minus, 0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::UnaryMinusExpressionContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

TypeScriptParser::UnaryMinusExpressionContext::UnaryMinusExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::UnaryMinusExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryMinusExpression(this);
}
void TypeScriptParser::UnaryMinusExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryMinusExpression(this);
}

antlrcpp::Any TypeScriptParser::UnaryMinusExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitUnaryMinusExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignmentExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::AssignmentExpressionContext::Assign() {
  return getToken(TypeScriptParser::Assign, 0);
}

std::vector<TypeScriptParser::ExpressionContext *> TypeScriptParser::AssignmentExpressionContext::expression() {
  return getRuleContexts<TypeScriptParser::ExpressionContext>();
}

TypeScriptParser::ExpressionContext* TypeScriptParser::AssignmentExpressionContext::expression(size_t i) {
  return getRuleContext<TypeScriptParser::ExpressionContext>(i);
}

TypeScriptParser::AssignmentExpressionContext::AssignmentExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::AssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentExpression(this);
}
void TypeScriptParser::AssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentExpression(this);
}

antlrcpp::Any TypeScriptParser::AssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeofExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::TypeofExpressionContext::Typeof() {
  return getToken(TypeScriptParser::Typeof, 0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::TypeofExpressionContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

TypeScriptParser::TypeofExpressionContext::TypeofExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::TypeofExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeofExpression(this);
}
void TypeScriptParser::TypeofExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeofExpression(this);
}

antlrcpp::Any TypeScriptParser::TypeofExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTypeofExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InstanceofExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::InstanceofExpressionContext::Instanceof() {
  return getToken(TypeScriptParser::Instanceof, 0);
}

std::vector<TypeScriptParser::ExpressionContext *> TypeScriptParser::InstanceofExpressionContext::expression() {
  return getRuleContexts<TypeScriptParser::ExpressionContext>();
}

TypeScriptParser::ExpressionContext* TypeScriptParser::InstanceofExpressionContext::expression(size_t i) {
  return getRuleContext<TypeScriptParser::ExpressionContext>(i);
}

TypeScriptParser::InstanceofExpressionContext::InstanceofExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::InstanceofExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstanceofExpression(this);
}
void TypeScriptParser::InstanceofExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstanceofExpression(this);
}

antlrcpp::Any TypeScriptParser::InstanceofExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitInstanceofExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryPlusExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::UnaryPlusExpressionContext::Plus() {
  return getToken(TypeScriptParser::Plus, 0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::UnaryPlusExpressionContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

TypeScriptParser::UnaryPlusExpressionContext::UnaryPlusExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::UnaryPlusExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryPlusExpression(this);
}
void TypeScriptParser::UnaryPlusExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryPlusExpression(this);
}

antlrcpp::Any TypeScriptParser::UnaryPlusExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitUnaryPlusExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeleteExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::DeleteExpressionContext::Delete() {
  return getToken(TypeScriptParser::Delete, 0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::DeleteExpressionContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

TypeScriptParser::DeleteExpressionContext::DeleteExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::DeleteExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeleteExpression(this);
}
void TypeScriptParser::DeleteExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeleteExpression(this);
}

antlrcpp::Any TypeScriptParser::DeleteExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitDeleteExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GeneratorsFunctionExpressionContext ------------------------------------------------------------------

TypeScriptParser::GeneratorFunctionDeclarationContext* TypeScriptParser::GeneratorsFunctionExpressionContext::generatorFunctionDeclaration() {
  return getRuleContext<TypeScriptParser::GeneratorFunctionDeclarationContext>(0);
}

TypeScriptParser::GeneratorsFunctionExpressionContext::GeneratorsFunctionExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::GeneratorsFunctionExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGeneratorsFunctionExpression(this);
}
void TypeScriptParser::GeneratorsFunctionExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGeneratorsFunctionExpression(this);
}

antlrcpp::Any TypeScriptParser::GeneratorsFunctionExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitGeneratorsFunctionExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrowFunctionExpressionContext ------------------------------------------------------------------

TypeScriptParser::ArrowFunctionDeclarationContext* TypeScriptParser::ArrowFunctionExpressionContext::arrowFunctionDeclaration() {
  return getRuleContext<TypeScriptParser::ArrowFunctionDeclarationContext>(0);
}

TypeScriptParser::ArrowFunctionExpressionContext::ArrowFunctionExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::ArrowFunctionExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrowFunctionExpression(this);
}
void TypeScriptParser::ArrowFunctionExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrowFunctionExpression(this);
}

antlrcpp::Any TypeScriptParser::ArrowFunctionExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitArrowFunctionExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IteratorsExpressionContext ------------------------------------------------------------------

TypeScriptParser::IteratorBlockContext* TypeScriptParser::IteratorsExpressionContext::iteratorBlock() {
  return getRuleContext<TypeScriptParser::IteratorBlockContext>(0);
}

TypeScriptParser::IteratorsExpressionContext::IteratorsExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::IteratorsExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIteratorsExpression(this);
}
void TypeScriptParser::IteratorsExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIteratorsExpression(this);
}

antlrcpp::Any TypeScriptParser::IteratorsExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitIteratorsExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualityExpressionContext ------------------------------------------------------------------

std::vector<TypeScriptParser::ExpressionContext *> TypeScriptParser::EqualityExpressionContext::expression() {
  return getRuleContexts<TypeScriptParser::ExpressionContext>();
}

TypeScriptParser::ExpressionContext* TypeScriptParser::EqualityExpressionContext::expression(size_t i) {
  return getRuleContext<TypeScriptParser::ExpressionContext>(i);
}

tree::TerminalNode* TypeScriptParser::EqualityExpressionContext::Equals_() {
  return getToken(TypeScriptParser::Equals_, 0);
}

tree::TerminalNode* TypeScriptParser::EqualityExpressionContext::NotEquals() {
  return getToken(TypeScriptParser::NotEquals, 0);
}

tree::TerminalNode* TypeScriptParser::EqualityExpressionContext::IdentityEquals() {
  return getToken(TypeScriptParser::IdentityEquals, 0);
}

tree::TerminalNode* TypeScriptParser::EqualityExpressionContext::IdentityNotEquals() {
  return getToken(TypeScriptParser::IdentityNotEquals, 0);
}

TypeScriptParser::EqualityExpressionContext::EqualityExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::EqualityExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityExpression(this);
}
void TypeScriptParser::EqualityExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityExpression(this);
}

antlrcpp::Any TypeScriptParser::EqualityExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitEqualityExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitXOrExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::BitXOrExpressionContext::BitXOr() {
  return getToken(TypeScriptParser::BitXOr, 0);
}

std::vector<TypeScriptParser::ExpressionContext *> TypeScriptParser::BitXOrExpressionContext::expression() {
  return getRuleContexts<TypeScriptParser::ExpressionContext>();
}

TypeScriptParser::ExpressionContext* TypeScriptParser::BitXOrExpressionContext::expression(size_t i) {
  return getRuleContext<TypeScriptParser::ExpressionContext>(i);
}

TypeScriptParser::BitXOrExpressionContext::BitXOrExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::BitXOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitXOrExpression(this);
}
void TypeScriptParser::BitXOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitXOrExpression(this);
}

antlrcpp::Any TypeScriptParser::BitXOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitBitXOrExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CastAsExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::CastAsExpressionContext::As() {
  return getToken(TypeScriptParser::As, 0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::CastAsExpressionContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

TypeScriptParser::AsExpressionContext* TypeScriptParser::CastAsExpressionContext::asExpression() {
  return getRuleContext<TypeScriptParser::AsExpressionContext>(0);
}

TypeScriptParser::CastAsExpressionContext::CastAsExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::CastAsExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCastAsExpression(this);
}
void TypeScriptParser::CastAsExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCastAsExpression(this);
}

antlrcpp::Any TypeScriptParser::CastAsExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitCastAsExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UpdateExpressionContext ------------------------------------------------------------------

TypeScriptParser::UpdateOperatorContext* TypeScriptParser::UpdateExpressionContext::updateOperator() {
  return getRuleContext<TypeScriptParser::UpdateOperatorContext>(0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::UpdateExpressionContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

TypeScriptParser::UpdateExpressionContext::UpdateExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::UpdateExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUpdateExpression(this);
}
void TypeScriptParser::UpdateExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUpdateExpression(this);
}

antlrcpp::Any TypeScriptParser::UpdateExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitUpdateExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SuperExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::SuperExpressionContext::Super() {
  return getToken(TypeScriptParser::Super, 0);
}

TypeScriptParser::SuperExpressionContext::SuperExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::SuperExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSuperExpression(this);
}
void TypeScriptParser::SuperExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSuperExpression(this);
}

antlrcpp::Any TypeScriptParser::SuperExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitSuperExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

std::vector<TypeScriptParser::ExpressionContext *> TypeScriptParser::MultiplicativeExpressionContext::expression() {
  return getRuleContexts<TypeScriptParser::ExpressionContext>();
}

TypeScriptParser::ExpressionContext* TypeScriptParser::MultiplicativeExpressionContext::expression(size_t i) {
  return getRuleContext<TypeScriptParser::ExpressionContext>(i);
}

tree::TerminalNode* TypeScriptParser::MultiplicativeExpressionContext::Multiply() {
  return getToken(TypeScriptParser::Multiply, 0);
}

tree::TerminalNode* TypeScriptParser::MultiplicativeExpressionContext::Divide() {
  return getToken(TypeScriptParser::Divide, 0);
}

tree::TerminalNode* TypeScriptParser::MultiplicativeExpressionContext::Modulus() {
  return getToken(TypeScriptParser::Modulus, 0);
}

TypeScriptParser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::MultiplicativeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeExpression(this);
}
void TypeScriptParser::MultiplicativeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeExpression(this);
}

antlrcpp::Any TypeScriptParser::MultiplicativeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CallExpressionContext ------------------------------------------------------------------

TypeScriptParser::ExpressionContext* TypeScriptParser::CallExpressionContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

TypeScriptParser::CallExpressoinArgumentsContext* TypeScriptParser::CallExpressionContext::callExpressoinArguments() {
  return getRuleContext<TypeScriptParser::CallExpressoinArgumentsContext>(0);
}

TypeScriptParser::CallExpressionContext::CallExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::CallExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallExpression(this);
}
void TypeScriptParser::CallExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallExpression(this);
}

antlrcpp::Any TypeScriptParser::CallExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitCallExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitShiftExpressionContext ------------------------------------------------------------------

std::vector<TypeScriptParser::ExpressionContext *> TypeScriptParser::BitShiftExpressionContext::expression() {
  return getRuleContexts<TypeScriptParser::ExpressionContext>();
}

TypeScriptParser::ExpressionContext* TypeScriptParser::BitShiftExpressionContext::expression(size_t i) {
  return getRuleContext<TypeScriptParser::ExpressionContext>(i);
}

tree::TerminalNode* TypeScriptParser::BitShiftExpressionContext::LeftShiftArithmetic() {
  return getToken(TypeScriptParser::LeftShiftArithmetic, 0);
}

tree::TerminalNode* TypeScriptParser::BitShiftExpressionContext::RightShiftArithmetic() {
  return getToken(TypeScriptParser::RightShiftArithmetic, 0);
}

tree::TerminalNode* TypeScriptParser::BitShiftExpressionContext::RightShiftLogical() {
  return getToken(TypeScriptParser::RightShiftLogical, 0);
}

TypeScriptParser::BitShiftExpressionContext::BitShiftExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::BitShiftExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitShiftExpression(this);
}
void TypeScriptParser::BitShiftExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitShiftExpression(this);
}

antlrcpp::Any TypeScriptParser::BitShiftExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitBitShiftExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesizedExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::ParenthesizedExpressionContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

TypeScriptParser::ExpressionSequenceContext* TypeScriptParser::ParenthesizedExpressionContext::expressionSequence() {
  return getRuleContext<TypeScriptParser::ExpressionSequenceContext>(0);
}

tree::TerminalNode* TypeScriptParser::ParenthesizedExpressionContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

TypeScriptParser::ParenthesizedExpressionContext::ParenthesizedExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::ParenthesizedExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesizedExpression(this);
}
void TypeScriptParser::ParenthesizedExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesizedExpression(this);
}

antlrcpp::Any TypeScriptParser::ParenthesizedExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitParenthesizedExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AdditiveExpressionContext ------------------------------------------------------------------

std::vector<TypeScriptParser::ExpressionContext *> TypeScriptParser::AdditiveExpressionContext::expression() {
  return getRuleContexts<TypeScriptParser::ExpressionContext>();
}

TypeScriptParser::ExpressionContext* TypeScriptParser::AdditiveExpressionContext::expression(size_t i) {
  return getRuleContext<TypeScriptParser::ExpressionContext>(i);
}

tree::TerminalNode* TypeScriptParser::AdditiveExpressionContext::Plus() {
  return getToken(TypeScriptParser::Plus, 0);
}

tree::TerminalNode* TypeScriptParser::AdditiveExpressionContext::Minus() {
  return getToken(TypeScriptParser::Minus, 0);
}

TypeScriptParser::AdditiveExpressionContext::AdditiveExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::AdditiveExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveExpression(this);
}
void TypeScriptParser::AdditiveExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveExpression(this);
}

antlrcpp::Any TypeScriptParser::AdditiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelationalExpressionContext ------------------------------------------------------------------

std::vector<TypeScriptParser::ExpressionContext *> TypeScriptParser::RelationalExpressionContext::expression() {
  return getRuleContexts<TypeScriptParser::ExpressionContext>();
}

TypeScriptParser::ExpressionContext* TypeScriptParser::RelationalExpressionContext::expression(size_t i) {
  return getRuleContext<TypeScriptParser::ExpressionContext>(i);
}

tree::TerminalNode* TypeScriptParser::RelationalExpressionContext::LessThan() {
  return getToken(TypeScriptParser::LessThan, 0);
}

tree::TerminalNode* TypeScriptParser::RelationalExpressionContext::MoreThan() {
  return getToken(TypeScriptParser::MoreThan, 0);
}

tree::TerminalNode* TypeScriptParser::RelationalExpressionContext::LessThanEquals() {
  return getToken(TypeScriptParser::LessThanEquals, 0);
}

tree::TerminalNode* TypeScriptParser::RelationalExpressionContext::GreaterThanEquals() {
  return getToken(TypeScriptParser::GreaterThanEquals, 0);
}

TypeScriptParser::RelationalExpressionContext::RelationalExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::RelationalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalExpression(this);
}
void TypeScriptParser::RelationalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalExpression(this);
}

antlrcpp::Any TypeScriptParser::RelationalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitRelationalExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- YieldExpressionContext ------------------------------------------------------------------

TypeScriptParser::YieldStatementContext* TypeScriptParser::YieldExpressionContext::yieldStatement() {
  return getRuleContext<TypeScriptParser::YieldStatementContext>(0);
}

TypeScriptParser::YieldExpressionContext::YieldExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::YieldExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterYieldExpression(this);
}
void TypeScriptParser::YieldExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitYieldExpression(this);
}

antlrcpp::Any TypeScriptParser::YieldExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitYieldExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitNotExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::BitNotExpressionContext::BitNot() {
  return getToken(TypeScriptParser::BitNot, 0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::BitNotExpressionContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

TypeScriptParser::BitNotExpressionContext::BitNotExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::BitNotExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitNotExpression(this);
}
void TypeScriptParser::BitNotExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitNotExpression(this);
}

antlrcpp::Any TypeScriptParser::BitNotExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitBitNotExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NewExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::NewExpressionContext::New() {
  return getToken(TypeScriptParser::New, 0);
}

TypeScriptParser::TypeParametersContext* TypeScriptParser::NewExpressionContext::typeParameters() {
  return getRuleContext<TypeScriptParser::TypeParametersContext>(0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::NewExpressionContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

TypeScriptParser::CallExpressoinArgumentsContext* TypeScriptParser::NewExpressionContext::callExpressoinArguments() {
  return getRuleContext<TypeScriptParser::CallExpressoinArgumentsContext>(0);
}

TypeScriptParser::TypeArgumentsContext* TypeScriptParser::NewExpressionContext::typeArguments() {
  return getRuleContext<TypeScriptParser::TypeArgumentsContext>(0);
}

TypeScriptParser::NewExpressionContext::NewExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::NewExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewExpression(this);
}
void TypeScriptParser::NewExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewExpression(this);
}

antlrcpp::Any TypeScriptParser::NewExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitNewExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ClassExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::ClassExpressionContext::Class() {
  return getToken(TypeScriptParser::Class, 0);
}

TypeScriptParser::ClassTailContext* TypeScriptParser::ClassExpressionContext::classTail() {
  return getRuleContext<TypeScriptParser::ClassTailContext>(0);
}

tree::TerminalNode* TypeScriptParser::ClassExpressionContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

TypeScriptParser::ClassExpressionContext::ClassExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::ClassExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassExpression(this);
}
void TypeScriptParser::ClassExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassExpression(this);
}

antlrcpp::Any TypeScriptParser::ClassExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitClassExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdentifierExpressionContext ------------------------------------------------------------------

TypeScriptParser::IdentifierNameContext* TypeScriptParser::IdentifierExpressionContext::identifierName() {
  return getRuleContext<TypeScriptParser::IdentifierNameContext>(0);
}

TypeScriptParser::IdentifierExpressionContext::IdentifierExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::IdentifierExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierExpression(this);
}
void TypeScriptParser::IdentifierExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierExpression(this);
}

antlrcpp::Any TypeScriptParser::IdentifierExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MemberExpressionContext ------------------------------------------------------------------

TypeScriptParser::ExpressionContext* TypeScriptParser::MemberExpressionContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

TypeScriptParser::MemberExpressionPatternContext* TypeScriptParser::MemberExpressionContext::memberExpressionPattern() {
  return getRuleContext<TypeScriptParser::MemberExpressionPatternContext>(0);
}

TypeScriptParser::MemberExpressionContext::MemberExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::MemberExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberExpression(this);
}
void TypeScriptParser::MemberExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberExpression(this);
}

antlrcpp::Any TypeScriptParser::MemberExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitMemberExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitAndExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::BitAndExpressionContext::BitAnd() {
  return getToken(TypeScriptParser::BitAnd, 0);
}

std::vector<TypeScriptParser::ExpressionContext *> TypeScriptParser::BitAndExpressionContext::expression() {
  return getRuleContexts<TypeScriptParser::ExpressionContext>();
}

TypeScriptParser::ExpressionContext* TypeScriptParser::BitAndExpressionContext::expression(size_t i) {
  return getRuleContext<TypeScriptParser::ExpressionContext>(i);
}

TypeScriptParser::BitAndExpressionContext::BitAndExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::BitAndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitAndExpression(this);
}
void TypeScriptParser::BitAndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitAndExpression(this);
}

antlrcpp::Any TypeScriptParser::BitAndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitBitAndExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitOrExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::BitOrExpressionContext::BitOr() {
  return getToken(TypeScriptParser::BitOr, 0);
}

std::vector<TypeScriptParser::ExpressionContext *> TypeScriptParser::BitOrExpressionContext::expression() {
  return getRuleContexts<TypeScriptParser::ExpressionContext>();
}

TypeScriptParser::ExpressionContext* TypeScriptParser::BitOrExpressionContext::expression(size_t i) {
  return getRuleContext<TypeScriptParser::ExpressionContext>(i);
}

TypeScriptParser::BitOrExpressionContext::BitOrExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::BitOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitOrExpression(this);
}
void TypeScriptParser::BitOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitOrExpression(this);
}

antlrcpp::Any TypeScriptParser::BitOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitBitOrExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignmentOperatorExpressionContext ------------------------------------------------------------------

std::vector<TypeScriptParser::ExpressionContext *> TypeScriptParser::AssignmentOperatorExpressionContext::expression() {
  return getRuleContexts<TypeScriptParser::ExpressionContext>();
}

TypeScriptParser::ExpressionContext* TypeScriptParser::AssignmentOperatorExpressionContext::expression(size_t i) {
  return getRuleContext<TypeScriptParser::ExpressionContext>(i);
}

TypeScriptParser::AssignmentOperatorContext* TypeScriptParser::AssignmentOperatorExpressionContext::assignmentOperator() {
  return getRuleContext<TypeScriptParser::AssignmentOperatorContext>(0);
}

TypeScriptParser::AssignmentOperatorExpressionContext::AssignmentOperatorExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::AssignmentOperatorExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOperatorExpression(this);
}
void TypeScriptParser::AssignmentOperatorExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOperatorExpression(this);
}

antlrcpp::Any TypeScriptParser::AssignmentOperatorExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentOperatorExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayExpressionContext ------------------------------------------------------------------

TypeScriptParser::LiteralContext* TypeScriptParser::ArrayExpressionContext::literal() {
  return getRuleContext<TypeScriptParser::LiteralContext>(0);
}

TypeScriptParser::ArrayLiteralContext* TypeScriptParser::ArrayExpressionContext::arrayLiteral() {
  return getRuleContext<TypeScriptParser::ArrayLiteralContext>(0);
}

TypeScriptParser::ArrayExpressionContext::ArrayExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::ArrayExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayExpression(this);
}
void TypeScriptParser::ArrayExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayExpression(this);
}

antlrcpp::Any TypeScriptParser::ArrayExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitArrayExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VoidExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TypeScriptParser::VoidExpressionContext::Void() {
  return getToken(TypeScriptParser::Void, 0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::VoidExpressionContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

TypeScriptParser::VoidExpressionContext::VoidExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::VoidExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVoidExpression(this);
}
void TypeScriptParser::VoidExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVoidExpression(this);
}

antlrcpp::Any TypeScriptParser::VoidExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitVoidExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ObjectExpressionContext ------------------------------------------------------------------

TypeScriptParser::ObjectLiteralContext* TypeScriptParser::ObjectExpressionContext::objectLiteral() {
  return getRuleContext<TypeScriptParser::ObjectLiteralContext>(0);
}

TypeScriptParser::ObjectExpressionContext::ObjectExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TypeScriptParser::ObjectExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectExpression(this);
}
void TypeScriptParser::ObjectExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectExpression(this);
}

antlrcpp::Any TypeScriptParser::ObjectExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitObjectExpression(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::expression() {
   return expression(0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  TypeScriptParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  TypeScriptParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 266;
  enterRecursionRule(_localctx, 266, TypeScriptParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1608);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 191, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<FunctionExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(1511);
      functionExpressionDeclaration();

              dynamic_cast<FunctionExpressionContext *>(_localctx)->type =  "FunctionExpression";
          
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ArrowFunctionExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1514);
      arrowFunctionDeclaration();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ClassExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1515);
      match(TypeScriptParser::Class);
      setState(1517);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypeScriptParser::Identifier) {
        setState(1516);
        match(TypeScriptParser::Identifier);
      }
      setState(1519);
      classTail();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<NewExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1520);
      match(TypeScriptParser::New);
      setState(1521);
      dynamic_cast<NewExpressionContext *>(_localctx)->callee = expression(0);
      setState(1522);
      typeParameters();
      setState(1524);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypeScriptParser::LessThan) {
        setState(1523);
        typeArguments();
      }
      setState(1526);
      dynamic_cast<NewExpressionContext *>(_localctx)->arguments = callExpressoinArguments();

              dynamic_cast<NewExpressionContext *>(_localctx)->type =  "NewExpression";
          
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NewExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1529);
      match(TypeScriptParser::New);
      setState(1530);
      dynamic_cast<NewExpressionContext *>(_localctx)->callee = expression(0);
      setState(1532);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 189, _ctx)) {
      case 1: {
        setState(1531);
        typeArguments();
        break;
      }

      default:
        break;
      }

              dynamic_cast<NewExpressionContext *>(_localctx)->type =  "NewExpression";
          
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<UpdateExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1536);
      dynamic_cast<UpdateExpressionContext *>(_localctx)->operator_ = updateOperator();
      setState(1537);
      dynamic_cast<UpdateExpressionContext *>(_localctx)->argument = expression(38);

              dynamic_cast<UpdateExpressionContext *>(_localctx)->type =  "UpdateExpression";
          
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<DeleteExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1540);
      match(TypeScriptParser::Delete);
      setState(1541);
      expression(36);

              dynamic_cast<DeleteExpressionContext *>(_localctx)->type =  "FunctionExpression";
          
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<VoidExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1544);
      match(TypeScriptParser::Void);
      setState(1545);
      expression(35);

              dynamic_cast<VoidExpressionContext *>(_localctx)->type =  "FunctionExpression";
          
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<TypeofExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1548);
      match(TypeScriptParser::Typeof);
      setState(1549);
      expression(34);

              dynamic_cast<TypeofExpressionContext *>(_localctx)->type =  "FunctionExpression";
          
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<UnaryPlusExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1552);
      match(TypeScriptParser::Plus);
      setState(1553);
      expression(33);

              dynamic_cast<UnaryPlusExpressionContext *>(_localctx)->type =  "FunctionExpression";
          
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<UnaryMinusExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1556);
      match(TypeScriptParser::Minus);
      setState(1557);
      expression(32);

              dynamic_cast<UnaryMinusExpressionContext *>(_localctx)->type =  "FunctionExpression";
          
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<BitNotExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1560);
      match(TypeScriptParser::BitNot);
      setState(1561);
      expression(31);

              dynamic_cast<BitNotExpressionContext *>(_localctx)->type =  "FunctionExpression";
          
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<NotExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1564);
      match(TypeScriptParser::Not);
      setState(1565);
      expression(30);

              dynamic_cast<NotExpressionContext *>(_localctx)->type =  "FunctionExpression";
          
      break;
    }

    case 14: {
      _localctx = _tracker.createInstance<IteratorsExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1568);
      iteratorBlock();

              dynamic_cast<IteratorsExpressionContext *>(_localctx)->type =  "FunctionExpression";
          
      break;
    }

    case 15: {
      _localctx = _tracker.createInstance<GeneratorsExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1571);
      generatorBlock();

              dynamic_cast<GeneratorsExpressionContext *>(_localctx)->type =  "FunctionExpression";
          
      break;
    }

    case 16: {
      _localctx = _tracker.createInstance<GeneratorsFunctionExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1574);
      generatorFunctionDeclaration();

              dynamic_cast<GeneratorsFunctionExpressionContext *>(_localctx)->type =  "FunctionExpression";
          
      break;
    }

    case 17: {
      _localctx = _tracker.createInstance<YieldExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1577);
      yieldStatement();

              dynamic_cast<YieldExpressionContext *>(_localctx)->type =  "FunctionExpression";
          
      break;
    }

    case 18: {
      _localctx = _tracker.createInstance<ThisExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1580);
      match(TypeScriptParser::This);

                  dynamic_cast<ThisExpressionContext *>(_localctx)->type =  "ThisExpression";
              
      break;
    }

    case 19: {
      _localctx = _tracker.createInstance<IdentifierExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1582);
      identifierName();

                  dynamic_cast<IdentifierExpressionContext *>(_localctx)->type =  "Identifier";
              
      break;
    }

    case 20: {
      _localctx = _tracker.createInstance<SuperExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1585);
      match(TypeScriptParser::Super);

              dynamic_cast<SuperExpressionContext *>(_localctx)->type =  "FunctionExpression";
          
      break;
    }

    case 21: {
      _localctx = _tracker.createInstance<ArrayExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1587);
      dynamic_cast<ArrayExpressionContext *>(_localctx)->value = literal();

              dynamic_cast<ArrayExpressionContext *>(_localctx)->type =  "Literal";
          
      break;
    }

    case 22: {
      _localctx = _tracker.createInstance<ArrayExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1590);
      arrayLiteral();

              dynamic_cast<ArrayExpressionContext *>(_localctx)->type =  "ArrayExpression";
          

              dynamic_cast<ArrayExpressionContext *>(_localctx)->type =  "FunctionExpression";
          
      break;
    }

    case 23: {
      _localctx = _tracker.createInstance<ObjectExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1594);
      dynamic_cast<ObjectExpressionContext *>(_localctx)->properties = objectLiteral();

              dynamic_cast<ObjectExpressionContext *>(_localctx)->type =  "ObjectExpression";
          
      break;
    }

    case 24: {
      _localctx = _tracker.createInstance<ParenthesizedExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1597);
      match(TypeScriptParser::OpenParen);
      setState(1598);
      expressionSequence();
      setState(1599);
      match(TypeScriptParser::CloseParen);

              dynamic_cast<ParenthesizedExpressionContext *>(_localctx)->type =  "FunctionExpression";
          
      break;
    }

    case 25: {
      _localctx = _tracker.createInstance<GenericTypesContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1602);
      typeArguments();
      setState(1604);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 190, _ctx)) {
      case 1: {
        setState(1603);
        expressionSequence();
        break;
      }

      default:
        break;
      }

              dynamic_cast<GenericTypesContext *>(_localctx)->type =  "FunctionExpression";
          
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(1711);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 193, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1709);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 192, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultiplicativeExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1610);

          if (!(precpred(_ctx, 29))) throw FailedPredicateException(this, "precpred(_ctx, 29)");
          setState(1611);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << TypeScriptParser::Multiply)
            | (1ULL << TypeScriptParser::Divide)
            | (1ULL << TypeScriptParser::Modulus))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1612);
          dynamic_cast<MultiplicativeExpressionContext *>(_localctx)->rhs = expression(30);

                            dynamic_cast<MultiplicativeExpressionContext *>(_localctx)->type =  "FunctionExpression";
                        
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AdditiveExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1615);

          if (!(precpred(_ctx, 28))) throw FailedPredicateException(this, "precpred(_ctx, 28)");
          setState(1616);
          _la = _input->LA(1);
          if (!(_la == TypeScriptParser::Plus

          || _la == TypeScriptParser::Minus)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1617);
          dynamic_cast<AdditiveExpressionContext *>(_localctx)->rhs = expression(29);

                            dynamic_cast<AdditiveExpressionContext *>(_localctx)->type =  "FunctionExpression";
                        
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BitShiftExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1620);

          if (!(precpred(_ctx, 27))) throw FailedPredicateException(this, "precpred(_ctx, 27)");
          setState(1621);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << TypeScriptParser::RightShiftArithmetic)
            | (1ULL << TypeScriptParser::LeftShiftArithmetic)
            | (1ULL << TypeScriptParser::RightShiftLogical))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1622);
          dynamic_cast<BitShiftExpressionContext *>(_localctx)->rhs = expression(28);

                            dynamic_cast<BitShiftExpressionContext *>(_localctx)->type =  "FunctionExpression";
                        
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<RelationalExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1625);

          if (!(precpred(_ctx, 26))) throw FailedPredicateException(this, "precpred(_ctx, 26)");
          setState(1626);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << TypeScriptParser::LessThan)
            | (1ULL << TypeScriptParser::MoreThan)
            | (1ULL << TypeScriptParser::LessThanEquals)
            | (1ULL << TypeScriptParser::GreaterThanEquals))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1627);
          dynamic_cast<RelationalExpressionContext *>(_localctx)->rhs = expression(27);

                            dynamic_cast<RelationalExpressionContext *>(_localctx)->type =  "FunctionExpression";
                        
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<InstanceofExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1630);

          if (!(precpred(_ctx, 25))) throw FailedPredicateException(this, "precpred(_ctx, 25)");
          setState(1631);
          match(TypeScriptParser::Instanceof);
          setState(1632);
          dynamic_cast<InstanceofExpressionContext *>(_localctx)->rhs = expression(26);

                            dynamic_cast<InstanceofExpressionContext *>(_localctx)->type =  "FunctionExpression";
                        
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<InExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1635);

          if (!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
          setState(1636);
          match(TypeScriptParser::In);
          setState(1637);
          dynamic_cast<InExpressionContext *>(_localctx)->rhs = expression(25);

                            dynamic_cast<InExpressionContext *>(_localctx)->type =  "FunctionExpression";
                        
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<EqualityExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1640);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(1641);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << TypeScriptParser::Equals_)
            | (1ULL << TypeScriptParser::NotEquals)
            | (1ULL << TypeScriptParser::IdentityEquals)
            | (1ULL << TypeScriptParser::IdentityNotEquals))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1642);
          dynamic_cast<EqualityExpressionContext *>(_localctx)->rhs = expression(24);

                            dynamic_cast<EqualityExpressionContext *>(_localctx)->type =  "FunctionExpression";
                        
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<BitAndExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1645);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(1646);
          match(TypeScriptParser::BitAnd);
          setState(1647);
          dynamic_cast<BitAndExpressionContext *>(_localctx)->rhs = expression(23);

                            dynamic_cast<BitAndExpressionContext *>(_localctx)->type =  "FunctionExpression";
                        
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<BitXOrExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1650);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(1651);
          match(TypeScriptParser::BitXOr);
          setState(1652);
          dynamic_cast<BitXOrExpressionContext *>(_localctx)->rhs = expression(22);

                            dynamic_cast<BitXOrExpressionContext *>(_localctx)->type =  "FunctionExpression";
                        
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<BitOrExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1655);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(1656);
          match(TypeScriptParser::BitOr);
          setState(1657);
          dynamic_cast<BitOrExpressionContext *>(_localctx)->rhs = expression(21);

                            dynamic_cast<BitOrExpressionContext *>(_localctx)->type =  "FunctionExpression";
                        
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<LogicalAndExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1660);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(1661);
          match(TypeScriptParser::And);
          setState(1662);
          dynamic_cast<LogicalAndExpressionContext *>(_localctx)->rhs = expression(20);

                            dynamic_cast<LogicalAndExpressionContext *>(_localctx)->type =  "FunctionExpression";
                        
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<LogicalOrExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1665);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(1666);
          match(TypeScriptParser::Or);
          setState(1667);
          dynamic_cast<LogicalOrExpressionContext *>(_localctx)->rhs = expression(19);

                            dynamic_cast<LogicalOrExpressionContext *>(_localctx)->type =  "FunctionExpression";
                        
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<TernaryExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->condition = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1670);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(1671);
          match(TypeScriptParser::QuestionMark);
          setState(1672);
          dynamic_cast<TernaryExpressionContext *>(_localctx)->lhs = expression(0);
          setState(1673);
          match(TypeScriptParser::Colon);
          setState(1674);
          dynamic_cast<TernaryExpressionContext *>(_localctx)->rhs = expression(18);

                            dynamic_cast<TernaryExpressionContext *>(_localctx)->type =  "FunctionExpression";
                        
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<AssignmentExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->lhs = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1677);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(1678);
          match(TypeScriptParser::Assign);
          setState(1679);
          dynamic_cast<AssignmentExpressionContext *>(_localctx)->rhs = expression(17);

                            dynamic_cast<AssignmentExpressionContext *>(_localctx)->type =  "FunctionExpression";
                        
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<AssignmentOperatorExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1682);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(1683);
          assignmentOperator();
          setState(1684);
          expression(16);

                            dynamic_cast<AssignmentOperatorExpressionContext *>(_localctx)->type =  "FunctionExpression";
                        
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<MemberExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->object = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1687);

          if (!(precpred(_ctx, 42))) throw FailedPredicateException(this, "precpred(_ctx, 42)");
          setState(1688);
          dynamic_cast<MemberExpressionContext *>(_localctx)->property = dynamic_cast<MemberExpressionContext *>(_localctx)->memberExpressionPatternContext = memberExpressionPattern();

                                dynamic_cast<MemberExpressionContext *>(_localctx)->type =  "MemberExpression";
                                System.out.println("Calling MemberExpression ,type is " + _localctx->type);
                                System.out.println("Calling MemberExpression ,optional is " + dynamic_cast<MemberExpressionContext *>(_localctx)->memberExpressionPatternContext->optional);
                                System.out.println("Calling MemberExpression ,computed is " + dynamic_cast<MemberExpressionContext *>(_localctx)->memberExpressionPatternContext->computed);
                            
          break;
        }

        case 17: {
          auto newContext = _tracker.createInstance<CallExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->callee = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1691);

          if (!(precpred(_ctx, 39))) throw FailedPredicateException(this, "precpred(_ctx, 39)");
          setState(1692);
          dynamic_cast<CallExpressionContext *>(_localctx)->arguments = callExpressoinArguments();
             //TODO Add optional property
                            dynamic_cast<CallExpressionContext *>(_localctx)->type =  "CallExpression";
                        
          break;
        }

        case 18: {
          auto newContext = _tracker.createInstance<UpdateExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->argument = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1695);

          if (!(precpred(_ctx, 37))) throw FailedPredicateException(this, "precpred(_ctx, 37)");
          setState(1696);

          if (!(this.notLineTerminator())) throw FailedPredicateException(this, "this.notLineTerminator()");
          setState(1697);
          dynamic_cast<UpdateExpressionContext *>(_localctx)->operator_ = updateOperator();

                            dynamic_cast<UpdateExpressionContext *>(_localctx)->type =  "UpdateExpression";
                        
          break;
        }

        case 19: {
          auto newContext = _tracker.createInstance<TemplateStringExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1700);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(1701);
          templateStringLiteral();

                            dynamic_cast<TemplateStringExpressionContext *>(_localctx)->type =  "FunctionExpression";
                        
          break;
        }

        case 20: {
          auto newContext = _tracker.createInstance<CastAsExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->originalType = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(1704);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(1705);
          match(TypeScriptParser::As);
          setState(1706);
          dynamic_cast<CastAsExpressionContext *>(_localctx)->aliasType = asExpression();

                            dynamic_cast<CastAsExpressionContext *>(_localctx)->type =  "FunctionExpression";
                        
          break;
        }

        default:
          break;
        } 
      }
      setState(1713);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 193, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MemberExpressionPatternContext ------------------------------------------------------------------

TypeScriptParser::MemberExpressionPatternContext::MemberExpressionPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::MemberExpressionPatternContext::OpenBracket() {
  return getToken(TypeScriptParser::OpenBracket, 0);
}

std::vector<TypeScriptParser::ExpressionContext *> TypeScriptParser::MemberExpressionPatternContext::expression() {
  return getRuleContexts<TypeScriptParser::ExpressionContext>();
}

TypeScriptParser::ExpressionContext* TypeScriptParser::MemberExpressionPatternContext::expression(size_t i) {
  return getRuleContext<TypeScriptParser::ExpressionContext>(i);
}

tree::TerminalNode* TypeScriptParser::MemberExpressionPatternContext::CloseBracket() {
  return getToken(TypeScriptParser::CloseBracket, 0);
}

std::vector<tree::TerminalNode *> TypeScriptParser::MemberExpressionPatternContext::Comma() {
  return getTokens(TypeScriptParser::Comma);
}

tree::TerminalNode* TypeScriptParser::MemberExpressionPatternContext::Comma(size_t i) {
  return getToken(TypeScriptParser::Comma, i);
}

tree::TerminalNode* TypeScriptParser::MemberExpressionPatternContext::QuestionMark() {
  return getToken(TypeScriptParser::QuestionMark, 0);
}

tree::TerminalNode* TypeScriptParser::MemberExpressionPatternContext::Dot() {
  return getToken(TypeScriptParser::Dot, 0);
}

TypeScriptParser::IdentifierNameContext* TypeScriptParser::MemberExpressionPatternContext::identifierName() {
  return getRuleContext<TypeScriptParser::IdentifierNameContext>(0);
}

TypeScriptParser::NestedTypeGenericContext* TypeScriptParser::MemberExpressionPatternContext::nestedTypeGeneric() {
  return getRuleContext<TypeScriptParser::NestedTypeGenericContext>(0);
}


size_t TypeScriptParser::MemberExpressionPatternContext::getRuleIndex() const {
  return TypeScriptParser::RuleMemberExpressionPattern;
}

void TypeScriptParser::MemberExpressionPatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberExpressionPattern(this);
}

void TypeScriptParser::MemberExpressionPatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberExpressionPattern(this);
}


antlrcpp::Any TypeScriptParser::MemberExpressionPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitMemberExpressionPattern(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::MemberExpressionPatternContext* TypeScriptParser::memberExpressionPattern() {
  MemberExpressionPatternContext *_localctx = _tracker.createInstance<MemberExpressionPatternContext>(_ctx, getState());
  enterRule(_localctx, 268, TypeScriptParser::RuleMemberExpressionPattern);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1741);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypeScriptParser::OpenBracket: {
        enterOuterAlt(_localctx, 1);
        setState(1714);
        match(TypeScriptParser::OpenBracket);
        setState(1715);
        expression(0);
        setState(1720);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypeScriptParser::Comma) {
          setState(1716);
          match(TypeScriptParser::Comma);
          setState(1717);
          expression(0);
          setState(1722);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1723);
        match(TypeScriptParser::CloseBracket);
         dynamic_cast<MemberExpressionPatternContext *>(_localctx)->computed =  false; dynamic_cast<MemberExpressionPatternContext *>(_localctx)->optional =  false; 
        break;
      }

      case TypeScriptParser::QuestionMark: {
        enterOuterAlt(_localctx, 2);
        setState(1726);
        match(TypeScriptParser::QuestionMark);
        setState(1727);
        match(TypeScriptParser::Dot);
        setState(1728);
        identifierName();
        setState(1730);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx)) {
        case 1: {
          setState(1729);
          nestedTypeGeneric();
          break;
        }

        default:
          break;
        }
         dynamic_cast<MemberExpressionPatternContext *>(_localctx)->computed =  true; dynamic_cast<MemberExpressionPatternContext *>(_localctx)->optional =  true;
        break;
      }

      case TypeScriptParser::Dot: {
        enterOuterAlt(_localctx, 3);
        setState(1734);
        match(TypeScriptParser::Dot);
        setState(1735);
        identifierName();
        setState(1737);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 196, _ctx)) {
        case 1: {
          setState(1736);
          nestedTypeGeneric();
          break;
        }

        default:
          break;
        }
         dynamic_cast<MemberExpressionPatternContext *>(_localctx)->computed =  true; dynamic_cast<MemberExpressionPatternContext *>(_localctx)->optional =  false; 
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AsExpressionContext ------------------------------------------------------------------

TypeScriptParser::AsExpressionContext::AsExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::PredefinedTypeContext* TypeScriptParser::AsExpressionContext::predefinedType() {
  return getRuleContext<TypeScriptParser::PredefinedTypeContext>(0);
}

tree::TerminalNode* TypeScriptParser::AsExpressionContext::OpenBracket() {
  return getToken(TypeScriptParser::OpenBracket, 0);
}

tree::TerminalNode* TypeScriptParser::AsExpressionContext::CloseBracket() {
  return getToken(TypeScriptParser::CloseBracket, 0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::AsExpressionContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}


size_t TypeScriptParser::AsExpressionContext::getRuleIndex() const {
  return TypeScriptParser::RuleAsExpression;
}

void TypeScriptParser::AsExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsExpression(this);
}

void TypeScriptParser::AsExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsExpression(this);
}


antlrcpp::Any TypeScriptParser::AsExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitAsExpression(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::AsExpressionContext* TypeScriptParser::asExpression() {
  AsExpressionContext *_localctx = _tracker.createInstance<AsExpressionContext>(_ctx, getState());
  enterRule(_localctx, 270, TypeScriptParser::RuleAsExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1749);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 199, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1743);
      predefinedType();
      setState(1746);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 198, _ctx)) {
      case 1: {
        setState(1744);
        match(TypeScriptParser::OpenBracket);
        setState(1745);
        match(TypeScriptParser::CloseBracket);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1748);
      expression(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrowFunctionDeclarationContext ------------------------------------------------------------------

TypeScriptParser::ArrowFunctionDeclarationContext::ArrowFunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::ArrowFunctionParametersContext* TypeScriptParser::ArrowFunctionDeclarationContext::arrowFunctionParameters() {
  return getRuleContext<TypeScriptParser::ArrowFunctionParametersContext>(0);
}

tree::TerminalNode* TypeScriptParser::ArrowFunctionDeclarationContext::ARROW() {
  return getToken(TypeScriptParser::ARROW, 0);
}

TypeScriptParser::ArrowFunctionBodyContext* TypeScriptParser::ArrowFunctionDeclarationContext::arrowFunctionBody() {
  return getRuleContext<TypeScriptParser::ArrowFunctionBodyContext>(0);
}

tree::TerminalNode* TypeScriptParser::ArrowFunctionDeclarationContext::Async() {
  return getToken(TypeScriptParser::Async, 0);
}

TypeScriptParser::TypeAnnotationContext* TypeScriptParser::ArrowFunctionDeclarationContext::typeAnnotation() {
  return getRuleContext<TypeScriptParser::TypeAnnotationContext>(0);
}


size_t TypeScriptParser::ArrowFunctionDeclarationContext::getRuleIndex() const {
  return TypeScriptParser::RuleArrowFunctionDeclaration;
}

void TypeScriptParser::ArrowFunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrowFunctionDeclaration(this);
}

void TypeScriptParser::ArrowFunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrowFunctionDeclaration(this);
}


antlrcpp::Any TypeScriptParser::ArrowFunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitArrowFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ArrowFunctionDeclarationContext* TypeScriptParser::arrowFunctionDeclaration() {
  ArrowFunctionDeclarationContext *_localctx = _tracker.createInstance<ArrowFunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 272, TypeScriptParser::RuleArrowFunctionDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1752);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Async) {
      setState(1751);
      match(TypeScriptParser::Async);
    }
    setState(1754);
    arrowFunctionParameters();
    setState(1756);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypeScriptParser::Colon) {
      setState(1755);
      typeAnnotation();
    }
    setState(1758);
    match(TypeScriptParser::ARROW);
    setState(1759);
    arrowFunctionBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrowFunctionParametersContext ------------------------------------------------------------------

TypeScriptParser::ArrowFunctionParametersContext::ArrowFunctionParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::ArrowFunctionParametersContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

tree::TerminalNode* TypeScriptParser::ArrowFunctionParametersContext::OpenParen() {
  return getToken(TypeScriptParser::OpenParen, 0);
}

tree::TerminalNode* TypeScriptParser::ArrowFunctionParametersContext::CloseParen() {
  return getToken(TypeScriptParser::CloseParen, 0);
}

TypeScriptParser::FormalParameterListContext* TypeScriptParser::ArrowFunctionParametersContext::formalParameterList() {
  return getRuleContext<TypeScriptParser::FormalParameterListContext>(0);
}


size_t TypeScriptParser::ArrowFunctionParametersContext::getRuleIndex() const {
  return TypeScriptParser::RuleArrowFunctionParameters;
}

void TypeScriptParser::ArrowFunctionParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrowFunctionParameters(this);
}

void TypeScriptParser::ArrowFunctionParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrowFunctionParameters(this);
}


antlrcpp::Any TypeScriptParser::ArrowFunctionParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitArrowFunctionParameters(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ArrowFunctionParametersContext* TypeScriptParser::arrowFunctionParameters() {
  ArrowFunctionParametersContext *_localctx = _tracker.createInstance<ArrowFunctionParametersContext>(_ctx, getState());
  enterRule(_localctx, 274, TypeScriptParser::RuleArrowFunctionParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1767);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypeScriptParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1761);
        match(TypeScriptParser::Identifier);
        break;
      }

      case TypeScriptParser::OpenParen: {
        enterOuterAlt(_localctx, 2);
        setState(1762);
        match(TypeScriptParser::OpenParen);
        setState(1764);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << TypeScriptParser::OpenBracket)
          | (1ULL << TypeScriptParser::OpenBrace)
          | (1ULL << TypeScriptParser::Ellipsis))) != 0) || ((((_la - 101) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 101)) & ((1ULL << (TypeScriptParser::Private - 101))
          | (1ULL << (TypeScriptParser::Public - 101))
          | (1ULL << (TypeScriptParser::Protected - 101))
          | (1ULL << (TypeScriptParser::TypeAlias - 101))
          | (1ULL << (TypeScriptParser::Require - 101))
          | (1ULL << (TypeScriptParser::At - 101))
          | (1ULL << (TypeScriptParser::Identifier - 101)))) != 0)) {
          setState(1763);
          formalParameterList();
        }
        setState(1766);
        match(TypeScriptParser::CloseParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrowFunctionBodyContext ------------------------------------------------------------------

TypeScriptParser::ArrowFunctionBodyContext::ArrowFunctionBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::ExpressionContext* TypeScriptParser::ArrowFunctionBodyContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

tree::TerminalNode* TypeScriptParser::ArrowFunctionBodyContext::OpenBrace() {
  return getToken(TypeScriptParser::OpenBrace, 0);
}

TypeScriptParser::FunctionBodyContext* TypeScriptParser::ArrowFunctionBodyContext::functionBody() {
  return getRuleContext<TypeScriptParser::FunctionBodyContext>(0);
}

tree::TerminalNode* TypeScriptParser::ArrowFunctionBodyContext::CloseBrace() {
  return getToken(TypeScriptParser::CloseBrace, 0);
}


size_t TypeScriptParser::ArrowFunctionBodyContext::getRuleIndex() const {
  return TypeScriptParser::RuleArrowFunctionBody;
}

void TypeScriptParser::ArrowFunctionBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrowFunctionBody(this);
}

void TypeScriptParser::ArrowFunctionBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrowFunctionBody(this);
}


antlrcpp::Any TypeScriptParser::ArrowFunctionBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitArrowFunctionBody(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ArrowFunctionBodyContext* TypeScriptParser::arrowFunctionBody() {
  ArrowFunctionBodyContext *_localctx = _tracker.createInstance<ArrowFunctionBodyContext>(_ctx, getState());
  enterRule(_localctx, 276, TypeScriptParser::RuleArrowFunctionBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1774);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 204, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1769);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1770);
      match(TypeScriptParser::OpenBrace);
      setState(1771);
      functionBody();
      setState(1772);
      match(TypeScriptParser::CloseBrace);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentOperatorContext ------------------------------------------------------------------

TypeScriptParser::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::AssignmentOperatorContext::MultiplyAssign() {
  return getToken(TypeScriptParser::MultiplyAssign, 0);
}

tree::TerminalNode* TypeScriptParser::AssignmentOperatorContext::DivideAssign() {
  return getToken(TypeScriptParser::DivideAssign, 0);
}

tree::TerminalNode* TypeScriptParser::AssignmentOperatorContext::ModulusAssign() {
  return getToken(TypeScriptParser::ModulusAssign, 0);
}

tree::TerminalNode* TypeScriptParser::AssignmentOperatorContext::PlusAssign() {
  return getToken(TypeScriptParser::PlusAssign, 0);
}

tree::TerminalNode* TypeScriptParser::AssignmentOperatorContext::MinusAssign() {
  return getToken(TypeScriptParser::MinusAssign, 0);
}

tree::TerminalNode* TypeScriptParser::AssignmentOperatorContext::LeftShiftArithmeticAssign() {
  return getToken(TypeScriptParser::LeftShiftArithmeticAssign, 0);
}

tree::TerminalNode* TypeScriptParser::AssignmentOperatorContext::RightShiftArithmeticAssign() {
  return getToken(TypeScriptParser::RightShiftArithmeticAssign, 0);
}

tree::TerminalNode* TypeScriptParser::AssignmentOperatorContext::RightShiftLogicalAssign() {
  return getToken(TypeScriptParser::RightShiftLogicalAssign, 0);
}

tree::TerminalNode* TypeScriptParser::AssignmentOperatorContext::BitAndAssign() {
  return getToken(TypeScriptParser::BitAndAssign, 0);
}

tree::TerminalNode* TypeScriptParser::AssignmentOperatorContext::BitXorAssign() {
  return getToken(TypeScriptParser::BitXorAssign, 0);
}

tree::TerminalNode* TypeScriptParser::AssignmentOperatorContext::BitOrAssign() {
  return getToken(TypeScriptParser::BitOrAssign, 0);
}


size_t TypeScriptParser::AssignmentOperatorContext::getRuleIndex() const {
  return TypeScriptParser::RuleAssignmentOperator;
}

void TypeScriptParser::AssignmentOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOperator(this);
}

void TypeScriptParser::AssignmentOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOperator(this);
}


antlrcpp::Any TypeScriptParser::AssignmentOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentOperator(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::AssignmentOperatorContext* TypeScriptParser::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 278, TypeScriptParser::RuleAssignmentOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1776);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypeScriptParser::MultiplyAssign)
      | (1ULL << TypeScriptParser::DivideAssign)
      | (1ULL << TypeScriptParser::ModulusAssign)
      | (1ULL << TypeScriptParser::PlusAssign)
      | (1ULL << TypeScriptParser::MinusAssign)
      | (1ULL << TypeScriptParser::LeftShiftArithmeticAssign)
      | (1ULL << TypeScriptParser::RightShiftArithmeticAssign)
      | (1ULL << TypeScriptParser::RightShiftLogicalAssign)
      | (1ULL << TypeScriptParser::BitAndAssign)
      | (1ULL << TypeScriptParser::BitXorAssign)
      | (1ULL << TypeScriptParser::BitOrAssign))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

TypeScriptParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::LiteralContext::NullLiteral() {
  return getToken(TypeScriptParser::NullLiteral, 0);
}

tree::TerminalNode* TypeScriptParser::LiteralContext::BooleanLiteral() {
  return getToken(TypeScriptParser::BooleanLiteral, 0);
}

tree::TerminalNode* TypeScriptParser::LiteralContext::StringLiteral() {
  return getToken(TypeScriptParser::StringLiteral, 0);
}

TypeScriptParser::TemplateStringLiteralContext* TypeScriptParser::LiteralContext::templateStringLiteral() {
  return getRuleContext<TypeScriptParser::TemplateStringLiteralContext>(0);
}

tree::TerminalNode* TypeScriptParser::LiteralContext::RegularExpressionLiteral() {
  return getToken(TypeScriptParser::RegularExpressionLiteral, 0);
}

TypeScriptParser::NumericLiteralContext* TypeScriptParser::LiteralContext::numericLiteral() {
  return getRuleContext<TypeScriptParser::NumericLiteralContext>(0);
}


size_t TypeScriptParser::LiteralContext::getRuleIndex() const {
  return TypeScriptParser::RuleLiteral;
}

void TypeScriptParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void TypeScriptParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


antlrcpp::Any TypeScriptParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::LiteralContext* TypeScriptParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 280, TypeScriptParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1792);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypeScriptParser::NullLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(1778);
        match(TypeScriptParser::NullLiteral);
         dynamic_cast<LiteralContext *>(_localctx)->value =  0;
        break;
      }

      case TypeScriptParser::BooleanLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(1780);
        match(TypeScriptParser::BooleanLiteral);
         dynamic_cast<LiteralContext *>(_localctx)->value =  1;
        break;
      }

      case TypeScriptParser::StringLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(1782);
        match(TypeScriptParser::StringLiteral);
         dynamic_cast<LiteralContext *>(_localctx)->value =  2;
        break;
      }

      case TypeScriptParser::BackTick: {
        enterOuterAlt(_localctx, 4);
        setState(1784);
        templateStringLiteral();
         dynamic_cast<LiteralContext *>(_localctx)->value =  3;
        break;
      }

      case TypeScriptParser::RegularExpressionLiteral: {
        enterOuterAlt(_localctx, 5);
        setState(1787);
        match(TypeScriptParser::RegularExpressionLiteral);
         dynamic_cast<LiteralContext *>(_localctx)->value =  4;
        break;
      }

      case TypeScriptParser::DecimalLiteral:
      case TypeScriptParser::HexIntegerLiteral:
      case TypeScriptParser::OctalIntegerLiteral:
      case TypeScriptParser::OctalIntegerLiteral2:
      case TypeScriptParser::BinaryIntegerLiteral: {
        enterOuterAlt(_localctx, 6);
        setState(1789);
        numericLiteral();
         dynamic_cast<LiteralContext *>(_localctx)->value =  5;
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateStringLiteralContext ------------------------------------------------------------------

TypeScriptParser::TemplateStringLiteralContext::TemplateStringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TypeScriptParser::TemplateStringLiteralContext::BackTick() {
  return getTokens(TypeScriptParser::BackTick);
}

tree::TerminalNode* TypeScriptParser::TemplateStringLiteralContext::BackTick(size_t i) {
  return getToken(TypeScriptParser::BackTick, i);
}

std::vector<TypeScriptParser::TemplateStringAtomContext *> TypeScriptParser::TemplateStringLiteralContext::templateStringAtom() {
  return getRuleContexts<TypeScriptParser::TemplateStringAtomContext>();
}

TypeScriptParser::TemplateStringAtomContext* TypeScriptParser::TemplateStringLiteralContext::templateStringAtom(size_t i) {
  return getRuleContext<TypeScriptParser::TemplateStringAtomContext>(i);
}


size_t TypeScriptParser::TemplateStringLiteralContext::getRuleIndex() const {
  return TypeScriptParser::RuleTemplateStringLiteral;
}

void TypeScriptParser::TemplateStringLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateStringLiteral(this);
}

void TypeScriptParser::TemplateStringLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateStringLiteral(this);
}


antlrcpp::Any TypeScriptParser::TemplateStringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTemplateStringLiteral(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TemplateStringLiteralContext* TypeScriptParser::templateStringLiteral() {
  TemplateStringLiteralContext *_localctx = _tracker.createInstance<TemplateStringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 282, TypeScriptParser::RuleTemplateStringLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1794);
    match(TypeScriptParser::BackTick);
    setState(1798);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypeScriptParser::TemplateStringStartExpression

    || _la == TypeScriptParser::TemplateStringAtom) {
      setState(1795);
      templateStringAtom();
      setState(1800);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1801);
    match(TypeScriptParser::BackTick);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateStringAtomContext ------------------------------------------------------------------

TypeScriptParser::TemplateStringAtomContext::TemplateStringAtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::TemplateStringAtomContext::TemplateStringAtom() {
  return getToken(TypeScriptParser::TemplateStringAtom, 0);
}

tree::TerminalNode* TypeScriptParser::TemplateStringAtomContext::TemplateStringStartExpression() {
  return getToken(TypeScriptParser::TemplateStringStartExpression, 0);
}

TypeScriptParser::ExpressionContext* TypeScriptParser::TemplateStringAtomContext::expression() {
  return getRuleContext<TypeScriptParser::ExpressionContext>(0);
}

tree::TerminalNode* TypeScriptParser::TemplateStringAtomContext::TemplateCloseBrace() {
  return getToken(TypeScriptParser::TemplateCloseBrace, 0);
}


size_t TypeScriptParser::TemplateStringAtomContext::getRuleIndex() const {
  return TypeScriptParser::RuleTemplateStringAtom;
}

void TypeScriptParser::TemplateStringAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateStringAtom(this);
}

void TypeScriptParser::TemplateStringAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateStringAtom(this);
}


antlrcpp::Any TypeScriptParser::TemplateStringAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitTemplateStringAtom(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::TemplateStringAtomContext* TypeScriptParser::templateStringAtom() {
  TemplateStringAtomContext *_localctx = _tracker.createInstance<TemplateStringAtomContext>(_ctx, getState());
  enterRule(_localctx, 284, TypeScriptParser::RuleTemplateStringAtom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1808);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypeScriptParser::TemplateStringAtom: {
        enterOuterAlt(_localctx, 1);
        setState(1803);
        match(TypeScriptParser::TemplateStringAtom);
        break;
      }

      case TypeScriptParser::TemplateStringStartExpression: {
        enterOuterAlt(_localctx, 2);
        setState(1804);
        match(TypeScriptParser::TemplateStringStartExpression);
        setState(1805);
        expression(0);
        setState(1806);
        match(TypeScriptParser::TemplateCloseBrace);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericLiteralContext ------------------------------------------------------------------

TypeScriptParser::NumericLiteralContext::NumericLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::NumericLiteralContext::DecimalLiteral() {
  return getToken(TypeScriptParser::DecimalLiteral, 0);
}

tree::TerminalNode* TypeScriptParser::NumericLiteralContext::HexIntegerLiteral() {
  return getToken(TypeScriptParser::HexIntegerLiteral, 0);
}

tree::TerminalNode* TypeScriptParser::NumericLiteralContext::OctalIntegerLiteral() {
  return getToken(TypeScriptParser::OctalIntegerLiteral, 0);
}

tree::TerminalNode* TypeScriptParser::NumericLiteralContext::OctalIntegerLiteral2() {
  return getToken(TypeScriptParser::OctalIntegerLiteral2, 0);
}

tree::TerminalNode* TypeScriptParser::NumericLiteralContext::BinaryIntegerLiteral() {
  return getToken(TypeScriptParser::BinaryIntegerLiteral, 0);
}


size_t TypeScriptParser::NumericLiteralContext::getRuleIndex() const {
  return TypeScriptParser::RuleNumericLiteral;
}

void TypeScriptParser::NumericLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericLiteral(this);
}

void TypeScriptParser::NumericLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericLiteral(this);
}


antlrcpp::Any TypeScriptParser::NumericLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitNumericLiteral(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::NumericLiteralContext* TypeScriptParser::numericLiteral() {
  NumericLiteralContext *_localctx = _tracker.createInstance<NumericLiteralContext>(_ctx, getState());
  enterRule(_localctx, 286, TypeScriptParser::RuleNumericLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1810);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypeScriptParser::DecimalLiteral)
      | (1ULL << TypeScriptParser::HexIntegerLiteral)
      | (1ULL << TypeScriptParser::OctalIntegerLiteral)
      | (1ULL << TypeScriptParser::OctalIntegerLiteral2)
      | (1ULL << TypeScriptParser::BinaryIntegerLiteral))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierNameContext ------------------------------------------------------------------

TypeScriptParser::IdentifierNameContext::IdentifierNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::IdentifierNameContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

TypeScriptParser::ReservedWordContext* TypeScriptParser::IdentifierNameContext::reservedWord() {
  return getRuleContext<TypeScriptParser::ReservedWordContext>(0);
}


size_t TypeScriptParser::IdentifierNameContext::getRuleIndex() const {
  return TypeScriptParser::RuleIdentifierName;
}

void TypeScriptParser::IdentifierNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierName(this);
}

void TypeScriptParser::IdentifierNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierName(this);
}


antlrcpp::Any TypeScriptParser::IdentifierNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierName(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::IdentifierNameContext* TypeScriptParser::identifierName() {
  IdentifierNameContext *_localctx = _tracker.createInstance<IdentifierNameContext>(_ctx, getState());
  enterRule(_localctx, 288, TypeScriptParser::RuleIdentifierName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1814);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypeScriptParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1812);
        match(TypeScriptParser::Identifier);
        break;
      }

      case TypeScriptParser::NullLiteral:
      case TypeScriptParser::BooleanLiteral:
      case TypeScriptParser::Break:
      case TypeScriptParser::Do:
      case TypeScriptParser::Instanceof:
      case TypeScriptParser::Typeof:
      case TypeScriptParser::Case:
      case TypeScriptParser::Else:
      case TypeScriptParser::New:
      case TypeScriptParser::Var:
      case TypeScriptParser::Catch:
      case TypeScriptParser::Finally:
      case TypeScriptParser::Return:
      case TypeScriptParser::Void:
      case TypeScriptParser::Continue:
      case TypeScriptParser::For:
      case TypeScriptParser::Switch:
      case TypeScriptParser::While:
      case TypeScriptParser::Debugger:
      case TypeScriptParser::Function_:
      case TypeScriptParser::This:
      case TypeScriptParser::With:
      case TypeScriptParser::Default:
      case TypeScriptParser::If:
      case TypeScriptParser::Throw:
      case TypeScriptParser::Delete:
      case TypeScriptParser::In:
      case TypeScriptParser::Try:
      case TypeScriptParser::From:
      case TypeScriptParser::ReadOnly:
      case TypeScriptParser::Async:
      case TypeScriptParser::Class:
      case TypeScriptParser::Enum:
      case TypeScriptParser::Extends:
      case TypeScriptParser::Super:
      case TypeScriptParser::Const:
      case TypeScriptParser::Export:
      case TypeScriptParser::Import:
      case TypeScriptParser::Implements:
      case TypeScriptParser::Let:
      case TypeScriptParser::Private:
      case TypeScriptParser::Public:
      case TypeScriptParser::Interface:
      case TypeScriptParser::Package:
      case TypeScriptParser::Protected:
      case TypeScriptParser::Static:
      case TypeScriptParser::Yield:
      case TypeScriptParser::String:
      case TypeScriptParser::TypeAlias:
      case TypeScriptParser::Get:
      case TypeScriptParser::Set:
      case TypeScriptParser::Require: {
        enterOuterAlt(_localctx, 2);
        setState(1813);
        reservedWord();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierOrKeyWordContext ------------------------------------------------------------------

TypeScriptParser::IdentifierOrKeyWordContext::IdentifierOrKeyWordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::IdentifierOrKeyWordContext::Identifier() {
  return getToken(TypeScriptParser::Identifier, 0);
}

tree::TerminalNode* TypeScriptParser::IdentifierOrKeyWordContext::TypeAlias() {
  return getToken(TypeScriptParser::TypeAlias, 0);
}

tree::TerminalNode* TypeScriptParser::IdentifierOrKeyWordContext::Require() {
  return getToken(TypeScriptParser::Require, 0);
}


size_t TypeScriptParser::IdentifierOrKeyWordContext::getRuleIndex() const {
  return TypeScriptParser::RuleIdentifierOrKeyWord;
}

void TypeScriptParser::IdentifierOrKeyWordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierOrKeyWord(this);
}

void TypeScriptParser::IdentifierOrKeyWordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierOrKeyWord(this);
}


antlrcpp::Any TypeScriptParser::IdentifierOrKeyWordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierOrKeyWord(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::IdentifierOrKeyWordContext* TypeScriptParser::identifierOrKeyWord() {
  IdentifierOrKeyWordContext *_localctx = _tracker.createInstance<IdentifierOrKeyWordContext>(_ctx, getState());
  enterRule(_localctx, 290, TypeScriptParser::RuleIdentifierOrKeyWord);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1816);
    _la = _input->LA(1);
    if (!(((((_la - 113) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 113)) & ((1ULL << (TypeScriptParser::TypeAlias - 113))
      | (1ULL << (TypeScriptParser::Require - 113))
      | (1ULL << (TypeScriptParser::Identifier - 113)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReservedWordContext ------------------------------------------------------------------

TypeScriptParser::ReservedWordContext::ReservedWordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypeScriptParser::KeywordContext* TypeScriptParser::ReservedWordContext::keyword() {
  return getRuleContext<TypeScriptParser::KeywordContext>(0);
}

tree::TerminalNode* TypeScriptParser::ReservedWordContext::NullLiteral() {
  return getToken(TypeScriptParser::NullLiteral, 0);
}

tree::TerminalNode* TypeScriptParser::ReservedWordContext::BooleanLiteral() {
  return getToken(TypeScriptParser::BooleanLiteral, 0);
}


size_t TypeScriptParser::ReservedWordContext::getRuleIndex() const {
  return TypeScriptParser::RuleReservedWord;
}

void TypeScriptParser::ReservedWordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReservedWord(this);
}

void TypeScriptParser::ReservedWordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReservedWord(this);
}


antlrcpp::Any TypeScriptParser::ReservedWordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitReservedWord(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::ReservedWordContext* TypeScriptParser::reservedWord() {
  ReservedWordContext *_localctx = _tracker.createInstance<ReservedWordContext>(_ctx, getState());
  enterRule(_localctx, 292, TypeScriptParser::RuleReservedWord);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1821);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypeScriptParser::Break:
      case TypeScriptParser::Do:
      case TypeScriptParser::Instanceof:
      case TypeScriptParser::Typeof:
      case TypeScriptParser::Case:
      case TypeScriptParser::Else:
      case TypeScriptParser::New:
      case TypeScriptParser::Var:
      case TypeScriptParser::Catch:
      case TypeScriptParser::Finally:
      case TypeScriptParser::Return:
      case TypeScriptParser::Void:
      case TypeScriptParser::Continue:
      case TypeScriptParser::For:
      case TypeScriptParser::Switch:
      case TypeScriptParser::While:
      case TypeScriptParser::Debugger:
      case TypeScriptParser::Function_:
      case TypeScriptParser::This:
      case TypeScriptParser::With:
      case TypeScriptParser::Default:
      case TypeScriptParser::If:
      case TypeScriptParser::Throw:
      case TypeScriptParser::Delete:
      case TypeScriptParser::In:
      case TypeScriptParser::Try:
      case TypeScriptParser::From:
      case TypeScriptParser::ReadOnly:
      case TypeScriptParser::Async:
      case TypeScriptParser::Class:
      case TypeScriptParser::Enum:
      case TypeScriptParser::Extends:
      case TypeScriptParser::Super:
      case TypeScriptParser::Const:
      case TypeScriptParser::Export:
      case TypeScriptParser::Import:
      case TypeScriptParser::Implements:
      case TypeScriptParser::Let:
      case TypeScriptParser::Private:
      case TypeScriptParser::Public:
      case TypeScriptParser::Interface:
      case TypeScriptParser::Package:
      case TypeScriptParser::Protected:
      case TypeScriptParser::Static:
      case TypeScriptParser::Yield:
      case TypeScriptParser::String:
      case TypeScriptParser::TypeAlias:
      case TypeScriptParser::Get:
      case TypeScriptParser::Set:
      case TypeScriptParser::Require: {
        enterOuterAlt(_localctx, 1);
        setState(1818);
        keyword();
        break;
      }

      case TypeScriptParser::NullLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(1819);
        match(TypeScriptParser::NullLiteral);
        break;
      }

      case TypeScriptParser::BooleanLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(1820);
        match(TypeScriptParser::BooleanLiteral);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeywordContext ------------------------------------------------------------------

TypeScriptParser::KeywordContext::KeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Break() {
  return getToken(TypeScriptParser::Break, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Do() {
  return getToken(TypeScriptParser::Do, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Instanceof() {
  return getToken(TypeScriptParser::Instanceof, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Typeof() {
  return getToken(TypeScriptParser::Typeof, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Case() {
  return getToken(TypeScriptParser::Case, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Else() {
  return getToken(TypeScriptParser::Else, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::New() {
  return getToken(TypeScriptParser::New, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Var() {
  return getToken(TypeScriptParser::Var, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Catch() {
  return getToken(TypeScriptParser::Catch, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Finally() {
  return getToken(TypeScriptParser::Finally, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Return() {
  return getToken(TypeScriptParser::Return, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Void() {
  return getToken(TypeScriptParser::Void, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Continue() {
  return getToken(TypeScriptParser::Continue, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::For() {
  return getToken(TypeScriptParser::For, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Switch() {
  return getToken(TypeScriptParser::Switch, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::While() {
  return getToken(TypeScriptParser::While, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Debugger() {
  return getToken(TypeScriptParser::Debugger, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Function_() {
  return getToken(TypeScriptParser::Function_, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::This() {
  return getToken(TypeScriptParser::This, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::With() {
  return getToken(TypeScriptParser::With, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Default() {
  return getToken(TypeScriptParser::Default, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::If() {
  return getToken(TypeScriptParser::If, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Throw() {
  return getToken(TypeScriptParser::Throw, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Delete() {
  return getToken(TypeScriptParser::Delete, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::In() {
  return getToken(TypeScriptParser::In, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Try() {
  return getToken(TypeScriptParser::Try, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::ReadOnly() {
  return getToken(TypeScriptParser::ReadOnly, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Async() {
  return getToken(TypeScriptParser::Async, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::From() {
  return getToken(TypeScriptParser::From, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Class() {
  return getToken(TypeScriptParser::Class, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Enum() {
  return getToken(TypeScriptParser::Enum, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Extends() {
  return getToken(TypeScriptParser::Extends, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Super() {
  return getToken(TypeScriptParser::Super, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Const() {
  return getToken(TypeScriptParser::Const, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Export() {
  return getToken(TypeScriptParser::Export, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Import() {
  return getToken(TypeScriptParser::Import, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Implements() {
  return getToken(TypeScriptParser::Implements, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Let() {
  return getToken(TypeScriptParser::Let, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Private() {
  return getToken(TypeScriptParser::Private, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Public() {
  return getToken(TypeScriptParser::Public, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Interface() {
  return getToken(TypeScriptParser::Interface, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Package() {
  return getToken(TypeScriptParser::Package, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Protected() {
  return getToken(TypeScriptParser::Protected, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Static() {
  return getToken(TypeScriptParser::Static, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Yield() {
  return getToken(TypeScriptParser::Yield, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Get() {
  return getToken(TypeScriptParser::Get, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Set() {
  return getToken(TypeScriptParser::Set, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::Require() {
  return getToken(TypeScriptParser::Require, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::TypeAlias() {
  return getToken(TypeScriptParser::TypeAlias, 0);
}

tree::TerminalNode* TypeScriptParser::KeywordContext::String() {
  return getToken(TypeScriptParser::String, 0);
}


size_t TypeScriptParser::KeywordContext::getRuleIndex() const {
  return TypeScriptParser::RuleKeyword;
}

void TypeScriptParser::KeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeyword(this);
}

void TypeScriptParser::KeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeyword(this);
}


antlrcpp::Any TypeScriptParser::KeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitKeyword(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::KeywordContext* TypeScriptParser::keyword() {
  KeywordContext *_localctx = _tracker.createInstance<KeywordContext>(_ctx, getState());
  enterRule(_localctx, 294, TypeScriptParser::RuleKeyword);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1823);
    _la = _input->LA(1);
    if (!(((((_la - 62) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 62)) & ((1ULL << (TypeScriptParser::Break - 62))
      | (1ULL << (TypeScriptParser::Do - 62))
      | (1ULL << (TypeScriptParser::Instanceof - 62))
      | (1ULL << (TypeScriptParser::Typeof - 62))
      | (1ULL << (TypeScriptParser::Case - 62))
      | (1ULL << (TypeScriptParser::Else - 62))
      | (1ULL << (TypeScriptParser::New - 62))
      | (1ULL << (TypeScriptParser::Var - 62))
      | (1ULL << (TypeScriptParser::Catch - 62))
      | (1ULL << (TypeScriptParser::Finally - 62))
      | (1ULL << (TypeScriptParser::Return - 62))
      | (1ULL << (TypeScriptParser::Void - 62))
      | (1ULL << (TypeScriptParser::Continue - 62))
      | (1ULL << (TypeScriptParser::For - 62))
      | (1ULL << (TypeScriptParser::Switch - 62))
      | (1ULL << (TypeScriptParser::While - 62))
      | (1ULL << (TypeScriptParser::Debugger - 62))
      | (1ULL << (TypeScriptParser::Function_ - 62))
      | (1ULL << (TypeScriptParser::This - 62))
      | (1ULL << (TypeScriptParser::With - 62))
      | (1ULL << (TypeScriptParser::Default - 62))
      | (1ULL << (TypeScriptParser::If - 62))
      | (1ULL << (TypeScriptParser::Throw - 62))
      | (1ULL << (TypeScriptParser::Delete - 62))
      | (1ULL << (TypeScriptParser::In - 62))
      | (1ULL << (TypeScriptParser::Try - 62))
      | (1ULL << (TypeScriptParser::From - 62))
      | (1ULL << (TypeScriptParser::ReadOnly - 62))
      | (1ULL << (TypeScriptParser::Async - 62))
      | (1ULL << (TypeScriptParser::Class - 62))
      | (1ULL << (TypeScriptParser::Enum - 62))
      | (1ULL << (TypeScriptParser::Extends - 62))
      | (1ULL << (TypeScriptParser::Super - 62))
      | (1ULL << (TypeScriptParser::Const - 62))
      | (1ULL << (TypeScriptParser::Export - 62))
      | (1ULL << (TypeScriptParser::Import - 62))
      | (1ULL << (TypeScriptParser::Implements - 62))
      | (1ULL << (TypeScriptParser::Let - 62))
      | (1ULL << (TypeScriptParser::Private - 62))
      | (1ULL << (TypeScriptParser::Public - 62))
      | (1ULL << (TypeScriptParser::Interface - 62))
      | (1ULL << (TypeScriptParser::Package - 62))
      | (1ULL << (TypeScriptParser::Protected - 62))
      | (1ULL << (TypeScriptParser::Static - 62))
      | (1ULL << (TypeScriptParser::Yield - 62))
      | (1ULL << (TypeScriptParser::String - 62))
      | (1ULL << (TypeScriptParser::TypeAlias - 62))
      | (1ULL << (TypeScriptParser::Get - 62))
      | (1ULL << (TypeScriptParser::Set - 62))
      | (1ULL << (TypeScriptParser::Require - 62)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GetterContext ------------------------------------------------------------------

TypeScriptParser::GetterContext::GetterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::GetterContext::Get() {
  return getToken(TypeScriptParser::Get, 0);
}

TypeScriptParser::PropertyNameContext* TypeScriptParser::GetterContext::propertyName() {
  return getRuleContext<TypeScriptParser::PropertyNameContext>(0);
}


size_t TypeScriptParser::GetterContext::getRuleIndex() const {
  return TypeScriptParser::RuleGetter;
}

void TypeScriptParser::GetterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGetter(this);
}

void TypeScriptParser::GetterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGetter(this);
}


antlrcpp::Any TypeScriptParser::GetterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitGetter(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::GetterContext* TypeScriptParser::getter() {
  GetterContext *_localctx = _tracker.createInstance<GetterContext>(_ctx, getState());
  enterRule(_localctx, 296, TypeScriptParser::RuleGetter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1825);
    match(TypeScriptParser::Get);
    setState(1826);
    propertyName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetterContext ------------------------------------------------------------------

TypeScriptParser::SetterContext::SetterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::SetterContext::Set() {
  return getToken(TypeScriptParser::Set, 0);
}

TypeScriptParser::PropertyNameContext* TypeScriptParser::SetterContext::propertyName() {
  return getRuleContext<TypeScriptParser::PropertyNameContext>(0);
}


size_t TypeScriptParser::SetterContext::getRuleIndex() const {
  return TypeScriptParser::RuleSetter;
}

void TypeScriptParser::SetterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetter(this);
}

void TypeScriptParser::SetterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetter(this);
}


antlrcpp::Any TypeScriptParser::SetterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitSetter(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::SetterContext* TypeScriptParser::setter() {
  SetterContext *_localctx = _tracker.createInstance<SetterContext>(_ctx, getState());
  enterRule(_localctx, 298, TypeScriptParser::RuleSetter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1828);
    match(TypeScriptParser::Set);
    setState(1829);
    propertyName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EosContext ------------------------------------------------------------------

TypeScriptParser::EosContext::EosContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypeScriptParser::EosContext::SemiColon() {
  return getToken(TypeScriptParser::SemiColon, 0);
}

tree::TerminalNode* TypeScriptParser::EosContext::EOF() {
  return getToken(TypeScriptParser::EOF, 0);
}


size_t TypeScriptParser::EosContext::getRuleIndex() const {
  return TypeScriptParser::RuleEos;
}

void TypeScriptParser::EosContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEos(this);
}

void TypeScriptParser::EosContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypeScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEos(this);
}


antlrcpp::Any TypeScriptParser::EosContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypeScriptParserVisitor*>(visitor))
    return parserVisitor->visitEos(this);
  else
    return visitor->visitChildren(this);
}

TypeScriptParser::EosContext* TypeScriptParser::eos() {
  EosContext *_localctx = _tracker.createInstance<EosContext>(_ctx, getState());
  enterRule(_localctx, 300, TypeScriptParser::RuleEos);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1835);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 210, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1831);
      match(TypeScriptParser::SemiColon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1832);
      match(TypeScriptParser::EOF);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1833);

      if (!(this.lineTerminatorAhead())) throw FailedPredicateException(this, "this.lineTerminatorAhead()");
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1834);

      if (!(this.closeBrace())) throw FailedPredicateException(this, "this.closeBrace()");
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool TypeScriptParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 10: return unionOrIntersectionOrPrimaryTypeSempred(dynamic_cast<UnionOrIntersectionOrPrimaryTypeContext *>(context), predicateIndex);
    case 11: return primaryTypeSempred(dynamic_cast<PrimaryTypeContext *>(context), predicateIndex);
    case 22: return arrayTypeSempred(dynamic_cast<ArrayTypeContext *>(context), predicateIndex);
    case 57: return decoratorMemberExpressionSempred(dynamic_cast<DecoratorMemberExpressionContext *>(context), predicateIndex);
    case 77: return expressionStatementSempred(dynamic_cast<ExpressionStatementContext *>(context), predicateIndex);
    case 79: return iterationStatementSempred(dynamic_cast<IterationStatementContext *>(context), predicateIndex);
    case 81: return continueStatementSempred(dynamic_cast<ContinueStatementContext *>(context), predicateIndex);
    case 82: return breakStatementSempred(dynamic_cast<BreakStatementContext *>(context), predicateIndex);
    case 83: return returnStatementSempred(dynamic_cast<ReturnStatementContext *>(context), predicateIndex);
    case 84: return yieldStatementSempred(dynamic_cast<YieldStatementContext *>(context), predicateIndex);
    case 92: return throwStatementSempred(dynamic_cast<ThrowStatementContext *>(context), predicateIndex);
    case 133: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 150: return eosSempred(dynamic_cast<EosContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool TypeScriptParser::unionOrIntersectionOrPrimaryTypeSempred(UnionOrIntersectionOrPrimaryTypeContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool TypeScriptParser::primaryTypeSempred(PrimaryTypeContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 5);
    case 3: return notLineTerminator();

  default:
    break;
  }
  return true;
}

bool TypeScriptParser::arrayTypeSempred(ArrayTypeContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return notLineTerminator();

  default:
    break;
  }
  return true;
}

bool TypeScriptParser::decoratorMemberExpressionSempred(DecoratorMemberExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool TypeScriptParser::expressionStatementSempred(ExpressionStatementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return this.notOpenBraceAndNotFunction();

  default:
    break;
  }
  return true;
}

bool TypeScriptParser::iterationStatementSempred(IterationStatementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return this.p("of");
    case 8: return this.p("of");

  default:
    break;
  }
  return true;
}

bool TypeScriptParser::continueStatementSempred(ContinueStatementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 9: return this.notLineTerminator();

  default:
    break;
  }
  return true;
}

bool TypeScriptParser::breakStatementSempred(BreakStatementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 10: return this.notLineTerminator();

  default:
    break;
  }
  return true;
}

bool TypeScriptParser::returnStatementSempred(ReturnStatementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 11: return this.notLineTerminator();

  default:
    break;
  }
  return true;
}

bool TypeScriptParser::yieldStatementSempred(YieldStatementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 12: return this.notLineTerminator();

  default:
    break;
  }
  return true;
}

bool TypeScriptParser::throwStatementSempred(ThrowStatementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 13: return this.notLineTerminator();

  default:
    break;
  }
  return true;
}

bool TypeScriptParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 14: return precpred(_ctx, 29);
    case 15: return precpred(_ctx, 28);
    case 16: return precpred(_ctx, 27);
    case 17: return precpred(_ctx, 26);
    case 18: return precpred(_ctx, 25);
    case 19: return precpred(_ctx, 24);
    case 20: return precpred(_ctx, 23);
    case 21: return precpred(_ctx, 22);
    case 22: return precpred(_ctx, 21);
    case 23: return precpred(_ctx, 20);
    case 24: return precpred(_ctx, 19);
    case 25: return precpred(_ctx, 18);
    case 26: return precpred(_ctx, 17);
    case 27: return precpred(_ctx, 16);
    case 28: return precpred(_ctx, 15);
    case 29: return precpred(_ctx, 42);
    case 30: return precpred(_ctx, 39);
    case 31: return precpred(_ctx, 37);
    case 32: return this.notLineTerminator();
    case 33: return precpred(_ctx, 14);
    case 34: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool TypeScriptParser::eosSempred(EosContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 35: return this.lineTerminatorAhead();
    case 36: return this.closeBrace();

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> TypeScriptParser::_decisionToDFA;
atn::PredictionContextCache TypeScriptParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN TypeScriptParser::_atn;
std::vector<uint16_t> TypeScriptParser::_serializedATN;

std::vector<std::string> TypeScriptParser::_ruleNames = {
  "initializer", "bindingPattern", "typeParameters", "typeParameterList", 
  "typeParameter", "constraint", "typeArguments", "typeArgumentList", "typeArgument", 
  "type_", "unionOrIntersectionOrPrimaryType", "primaryType", "predefinedType", 
  "typeReference", "nestedTypeGeneric", "typeGeneric", "typeIncludeGeneric", 
  "typeName", "objectType", "typeBody", "typeMemberList", "typeMember", 
  "arrayType", "tupleType", "tupleElementTypes", "functionType", "constructorType", 
  "typeQuery", "typeQueryExpression", "propertySignatur", "typeAnnotation", 
  "callSignature", "parameterList", "requiredParameterList", "parameter", 
  "optionalParameter", "restParameter", "requiredParameter", "accessibilityModifier", 
  "identifierOrPattern", "constructSignature", "indexSignature", "methodSignature", 
  "typeAliasDeclaration", "constructorDeclaration", "interfaceDeclaration", 
  "interfaceExtendsClause", "classOrInterfaceTypeList", "enumDeclaration", 
  "enumBody", "enumMemberList", "enumMember", "namespaceDeclaration", "namespaceName", 
  "importAliasDeclaration", "decoratorList", "decorator", "decoratorMemberExpression", 
  "decoratorCallExpression", "program", "sourceElement", "statement", "block", 
  "statementList", "abstractDeclaration", "importStatement", "fromBlock", 
  "multipleImportStatement", "exportStatement", "variableDeclaration", "variableStatement", 
  "variableDeclarationList", "variableDeclarateIdPattern", "variableAnnotation", 
  "variableInitPattern", "variableDeclarator", "emptyStatement", "expressionStatement", 
  "ifStatement", "iterationStatement", "varModifier", "continueStatement", 
  "breakStatement", "returnStatement", "yieldStatement", "withStatement", 
  "switchStatement", "caseBlock", "caseClauses", "caseClause", "defaultClause", 
  "labelledStatement", "throwStatement", "tryStatement", "catchProduction", 
  "finallyProduction", "debuggerStatement", "functionDeclaration", "classDeclaration", 
  "classHeritage", "classTail", "classExtendsClause", "implementsClause", 
  "classElement", "propertyMemberDeclaration", "propertyMemberBase", "indexMemberDeclaration", 
  "generatorMethod", "generatorFunctionDeclaration", "generatorBlock", "generatorDefinition", 
  "iteratorBlock", "iteratorDefinition", "formalParameterList", "formalParameterArg", 
  "lastFormalParameterArg", "functionBody", "sourceElements", "arrayLiteral", 
  "elementList", "arrayElement", "objectLiteral", "propertyAssignment", 
  "getAccessor", "setAccessor", "propertyName", "callExpressoinArguments", 
  "argumentList", "singleArgument", "expressionSequence", "functionExpressionDeclaration", 
  "updateOperator", "unaryOperator", "expression", "memberExpressionPattern", 
  "asExpression", "arrowFunctionDeclaration", "arrowFunctionParameters", 
  "arrowFunctionBody", "assignmentOperator", "literal", "templateStringLiteral", 
  "templateStringAtom", "numericLiteral", "identifierName", "identifierOrKeyWord", 
  "reservedWord", "keyword", "getter", "setter", "eos"
};

std::vector<std::string> TypeScriptParser::_literalNames = {
  "", "", "", "", "'['", "']'", "'('", "')'", "'{'", "", "'}'", "';'", "','", 
  "'='", "'\u003F'", "':'", "'...'", "'.'", "'++'", "'--'", "'+'", "'-'", 
  "'~'", "'!'", "'*'", "'/'", "'%'", "'>>'", "'<<'", "'>>>'", "'<'", "'>'", 
  "'<='", "'>='", "'=='", "'!='", "'==='", "'!=='", "'&'", "'^'", "'|'", 
  "'&&'", "'||'", "'*='", "'/='", "'%='", "'+='", "'-='", "'<<='", "'>>='", 
  "'>>>='", "'&='", "'^='", "'|='", "'=>'", "'null'", "", "", "", "", "", 
  "", "'break'", "'do'", "'instanceof'", "'typeof'", "'case'", "'else'", 
  "'new'", "'var'", "'catch'", "'finally'", "'return'", "'void'", "'continue'", 
  "'for'", "'switch'", "'while'", "'debugger'", "'function'", "'this'", 
  "'with'", "'default'", "'if'", "'throw'", "'delete'", "'in'", "'try'", 
  "'as'", "'from'", "'readonly'", "'async'", "'class'", "'enum'", "'extends'", 
  "'super'", "'const'", "'export'", "'import'", "'implements'", "'let'", 
  "'private'", "'public'", "'interface'", "'package'", "'protected'", "'static'", 
  "'yield'", "'any'", "'number'", "'boolean'", "'string'", "'symbol'", "'type'", 
  "'get'", "'set'", "'constructor'", "'namespace'", "'require'", "'module'", 
  "'declare'", "'abstract'", "'is'", "'@'", "", "", "", "", "", "", "", 
  "", "'${'"
};

std::vector<std::string> TypeScriptParser::_symbolicNames = {
  "", "MultiLineComment", "SingleLineComment", "RegularExpressionLiteral", 
  "OpenBracket", "CloseBracket", "OpenParen", "CloseParen", "OpenBrace", 
  "TemplateCloseBrace", "CloseBrace", "SemiColon", "Comma", "Assign", "QuestionMark", 
  "Colon", "Ellipsis", "Dot", "PlusPlus", "MinusMinus", "Plus", "Minus", 
  "BitNot", "Not", "Multiply", "Divide", "Modulus", "RightShiftArithmetic", 
  "LeftShiftArithmetic", "RightShiftLogical", "LessThan", "MoreThan", "LessThanEquals", 
  "GreaterThanEquals", "Equals_", "NotEquals", "IdentityEquals", "IdentityNotEquals", 
  "BitAnd", "BitXOr", "BitOr", "And", "Or", "MultiplyAssign", "DivideAssign", 
  "ModulusAssign", "PlusAssign", "MinusAssign", "LeftShiftArithmeticAssign", 
  "RightShiftArithmeticAssign", "RightShiftLogicalAssign", "BitAndAssign", 
  "BitXorAssign", "BitOrAssign", "ARROW", "NullLiteral", "BooleanLiteral", 
  "DecimalLiteral", "HexIntegerLiteral", "OctalIntegerLiteral", "OctalIntegerLiteral2", 
  "BinaryIntegerLiteral", "Break", "Do", "Instanceof", "Typeof", "Case", 
  "Else", "New", "Var", "Catch", "Finally", "Return", "Void", "Continue", 
  "For", "Switch", "While", "Debugger", "Function_", "This", "With", "Default", 
  "If", "Throw", "Delete", "In", "Try", "As", "From", "ReadOnly", "Async", 
  "Class", "Enum", "Extends", "Super", "Const", "Export", "Import", "Implements", 
  "Let", "Private", "Public", "Interface", "Package", "Protected", "Static", 
  "Yield", "Any", "Number", "Boolean", "String", "Symbol", "TypeAlias", 
  "Get", "Set", "Constructor", "Namespace", "Require", "Module", "Declare", 
  "Abstract", "Is", "At", "Identifier", "StringLiteral", "BackTick", "WhiteSpaces", 
  "LineTerminator", "HtmlComment", "CDataComment", "UnexpectedCharacter", 
  "TemplateStringStartExpression", "TemplateStringAtom"
};

dfa::Vocabulary TypeScriptParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> TypeScriptParser::_tokenNames;

TypeScriptParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x87, 0x730, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 
    0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 
    0x6d, 0x9, 0x6d, 0x4, 0x6e, 0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 
    0x9, 0x70, 0x4, 0x71, 0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 
    0x73, 0x4, 0x74, 0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 
    0x4, 0x77, 0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 
    0x7a, 0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
    0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 0x9, 
    0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 0x9, 0x83, 
    0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 0x9, 0x86, 0x4, 
    0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 0x9, 0x89, 0x4, 0x8a, 
    0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 0x9, 0x8c, 0x4, 0x8d, 0x9, 
    0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 
    0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 
    0x94, 0x9, 0x94, 0x4, 0x95, 0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 
    0x9, 0x97, 0x4, 0x98, 0x9, 0x98, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0x136, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 
    0x13a, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 
    0x5, 0x141, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x144, 0xb, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x5, 0x6, 0x148, 0xa, 0x6, 0x3, 0x6, 0x5, 0x6, 0x14b, 0xa, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x152, 
    0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 
    0x159, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x15c, 0xb, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x165, 
    0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x170, 0xa, 0xc, 0xc, 0xc, 0xe, 
    0xc, 0x173, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 
    0x187, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x18d, 
    0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x190, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x19e, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x5, 0xf, 0x1a2, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x1a6, 0xa, 
    0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x5, 0x12, 0x1b5, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 
    0x1b9, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x1bd, 0xa, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x1c3, 0xa, 0x15, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0x1c8, 0xa, 0x16, 0xc, 0x16, 
    0xe, 0x16, 0x1cb, 0xb, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x1d4, 0xa, 0x17, 0x5, 0x17, 
    0x1d6, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x7, 0x1a, 0x1e4, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x1e7, 0xb, 
    0x1a, 0x3, 0x1b, 0x5, 0x1b, 0x1ea, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x5, 0x1b, 0x1ee, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x1f6, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x5, 0x1c, 0x1fa, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1e, 0x6, 0x1e, 0x207, 0xa, 0x1e, 0xd, 0x1e, 0xe, 0x1e, 0x208, 0x3, 
    0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x20d, 0xa, 0x1e, 0x3, 0x1f, 0x5, 0x1f, 
    0x210, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x214, 0xa, 0x1f, 
    0x3, 0x1f, 0x5, 0x1f, 0x217, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 
    0x21b, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x5, 0x21, 
    0x221, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x225, 0xa, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x229, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x22f, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 
    0x232, 0xb, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x236, 0xa, 0x22, 
    0x5, 0x22, 0x238, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 
    0x23d, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x240, 0xb, 0x23, 0x3, 0x24, 
    0x3, 0x24, 0x5, 0x24, 0x244, 0xa, 0x24, 0x3, 0x25, 0x5, 0x25, 0x247, 
    0xa, 0x25, 0x3, 0x25, 0x5, 0x25, 0x24a, 0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x5, 0x25, 0x24f, 0xa, 0x25, 0x3, 0x25, 0x5, 0x25, 0x252, 
    0xa, 0x25, 0x3, 0x25, 0x5, 0x25, 0x255, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x5, 0x26, 0x25a, 0xa, 0x26, 0x3, 0x27, 0x5, 0x27, 0x25d, 
    0xa, 0x27, 0x3, 0x27, 0x5, 0x27, 0x260, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x5, 0x27, 0x264, 0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 
    0x5, 0x29, 0x26a, 0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x26e, 
    0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x272, 0xa, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x5, 0x2a, 0x276, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x5, 
    0x2c, 0x281, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x5, 0x2d, 0x288, 0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2e, 0x5, 0x2e, 0x28f, 0xa, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x5, 0x2e, 0x294, 0xa, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x29c, 0xa, 0x2e, 0x3, 0x2f, 
    0x5, 0x2f, 0x29f, 0xa, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x2a2, 0xa, 0x2f, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x2a7, 0xa, 0x2f, 0x3, 0x2f, 
    0x5, 0x2f, 0x2aa, 0xa, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x2ae, 
    0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x7, 0x31, 0x2b6, 0xa, 0x31, 0xc, 0x31, 0xe, 0x31, 0x2b9, 0xb, 
    0x31, 0x3, 0x32, 0x5, 0x32, 0x2bc, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x2c2, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x2c8, 0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x7, 0x34, 0x2cd, 0xa, 0x34, 0xc, 0x34, 0xe, 0x34, 0x2d0, 
    0xb, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x2d5, 0xa, 0x35, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x2db, 0xa, 0x36, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x6, 0x37, 0x2e1, 0xa, 0x37, 
    0xd, 0x37, 0xe, 0x37, 0x2e2, 0x3, 0x37, 0x7, 0x37, 0x2e6, 0xa, 0x37, 
    0xc, 0x37, 0xe, 0x37, 0x2e9, 0xb, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x6, 0x39, 0x2f1, 0xa, 0x39, 0xd, 0x39, 
    0xe, 0x39, 0x2f2, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x2f8, 
    0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 
    0x3b, 0x5, 0x3b, 0x300, 0xa, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
    0x7, 0x3b, 0x305, 0xa, 0x3b, 0xc, 0x3b, 0xe, 0x3b, 0x308, 0xb, 0x3b, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x5, 0x3d, 0x30e, 0xa, 0x3d, 
    0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x5, 0x3e, 0x314, 0xa, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 
    0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 
    0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 
    0x3f, 0x336, 0xa, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x33a, 0xa, 
    0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 0x6, 0x41, 0x33f, 0xa, 0x41, 
    0xd, 0x41, 0xe, 0x41, 0x340, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x5, 0x42, 0x347, 0xa, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 
    0x3, 0x43, 0x5, 0x43, 0x34e, 0xa, 0x43, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 
    0x352, 0xa, 0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x356, 0xa, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 
    0x45, 0x5, 0x45, 0x35f, 0xa, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 
    0x3, 0x45, 0x7, 0x45, 0x365, 0xa, 0x45, 0xc, 0x45, 0xe, 0x45, 0x368, 
    0xb, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x36e, 
    0xa, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x372, 0xa, 0x46, 0x3, 0x47, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x5, 0x48, 0x37a, 
    0xa, 0x48, 0x3, 0x48, 0x3, 0x48, 0x5, 0x48, 0x37e, 0xa, 0x48, 0x3, 0x48, 
    0x5, 0x48, 0x381, 0xa, 0x48, 0x3, 0x48, 0x5, 0x48, 0x384, 0xa, 0x48, 
    0x3, 0x48, 0x5, 0x48, 0x387, 0xa, 0x48, 0x3, 0x48, 0x3, 0x48, 0x5, 0x48, 
    0x38b, 0xa, 0x48, 0x3, 0x48, 0x3, 0x48, 0x5, 0x48, 0x38f, 0xa, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x5, 0x48, 0x393, 0xa, 0x48, 0x5, 0x48, 0x395, 
    0xa, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x7, 0x49, 0x39a, 0xa, 0x49, 
    0xc, 0x49, 0xe, 0x49, 0x39d, 0xb, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 
    0x5, 0x4a, 0x3a2, 0xa, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 
    0x3a7, 0xa, 0x4b, 0x3, 0x4c, 0x5, 0x4c, 0x3aa, 0xa, 0x4c, 0x3, 0x4c, 
    0x3, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x3b0, 0xa, 0x4d, 0x3, 0x4d, 
    0x3, 0x4d, 0x5, 0x4d, 0x3b4, 0xa, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x3bd, 0xa, 0x4f, 
    0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 
    0x50, 0x5, 0x50, 0x3c6, 0xa, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 
    0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 
    0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 
    0x3, 0x51, 0x5, 0x51, 0x3d9, 0xa, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 
    0x3dd, 0xa, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 0x3e1, 0xa, 0x51, 
    0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 
    0x51, 0x3, 0x51, 0x5, 0x51, 0x3eb, 0xa, 0x51, 0x3, 0x51, 0x3, 0x51, 
    0x5, 0x51, 0x3ef, 0xa, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 
    0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 0x3fa, 
    0xa, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 
    0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 
    0x407, 0xa, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 
    0x40d, 0xa, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
    0x5, 0x53, 0x414, 0xa, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x54, 0x3, 0x54, 
    0x3, 0x54, 0x5, 0x54, 0x41b, 0xa, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 
    0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x422, 0xa, 0x55, 0x3, 0x55, 0x3, 0x55, 
    0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x429, 0xa, 0x56, 0x3, 0x56, 
    0x3, 0x56, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 
    0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 
    0x3, 0x59, 0x3, 0x59, 0x5, 0x59, 0x43b, 0xa, 0x59, 0x3, 0x59, 0x3, 0x59, 
    0x5, 0x59, 0x43f, 0xa, 0x59, 0x5, 0x59, 0x441, 0xa, 0x59, 0x3, 0x59, 
    0x3, 0x59, 0x3, 0x5a, 0x6, 0x5a, 0x446, 0xa, 0x5a, 0xd, 0x5a, 0xe, 0x5a, 
    0x447, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x5, 0x5b, 0x44e, 
    0xa, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x453, 0xa, 0x5c, 
    0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x3, 
    0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 
    0x5, 0x5f, 0x462, 0xa, 0x5f, 0x3, 0x5f, 0x5, 0x5f, 0x465, 0xa, 0x5f, 
    0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 
    0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x63, 
    0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 
    0x63, 0x5, 0x63, 0x47b, 0xa, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x64, 
    0x5, 0x64, 0x480, 0xa, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x5, 0x64, 
    0x485, 0xa, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x65, 0x5, 0x65, 
    0x48b, 0xa, 0x65, 0x3, 0x65, 0x5, 0x65, 0x48e, 0xa, 0x65, 0x3, 0x66, 
    0x3, 0x66, 0x7, 0x66, 0x492, 0xa, 0x66, 0xc, 0x66, 0xe, 0x66, 0x495, 
    0xb, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 
    0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x69, 0x3, 0x69, 0x5, 0x69, 0x4a1, 
    0xa, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x5, 0x69, 0x4a6, 0xa, 0x69, 
    0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x5, 0x6a, 0x4ab, 0xa, 0x6a, 0x3, 0x6a, 
    0x5, 0x6a, 0x4ae, 0xa, 0x6a, 0x3, 0x6a, 0x5, 0x6a, 0x4b1, 0xa, 0x6a, 
    0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
    0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x5, 0x6a, 0x4be, 
    0xa, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x5, 0x6a, 0x4c3, 0xa, 0x6a, 
    0x3, 0x6a, 0x5, 0x6a, 0x4c6, 0xa, 0x6a, 0x3, 0x6b, 0x5, 0x6b, 0x4c9, 
    0xa, 0x6b, 0x3, 0x6b, 0x5, 0x6b, 0x4cc, 0xa, 0x6b, 0x3, 0x6b, 0x5, 0x6b, 
    0x4cf, 0xa, 0x6b, 0x3, 0x6b, 0x5, 0x6b, 0x4d2, 0xa, 0x6b, 0x3, 0x6c, 
    0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6d, 0x5, 0x6d, 0x4d8, 0xa, 0x6d, 0x3, 0x6d, 
    0x3, 0x6d, 0x3, 0x6d, 0x5, 0x6d, 0x4dd, 0xa, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 
    0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x5, 
    0x6e, 0x4e7, 0xa, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x5, 0x6e, 0x4eb, 0xa, 
    0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6f, 
    0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x7, 0x6f, 0x4f6, 0xa, 0x6f, 0xc, 0x6f, 
    0xe, 0x6f, 0x4f9, 0xb, 0x6f, 0x3, 0x6f, 0x5, 0x6f, 0x4fc, 0xa, 0x6f, 
    0x3, 0x6f, 0x3, 0x6f, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x71, 0x3, 
    0x71, 0x3, 0x71, 0x3, 0x71, 0x7, 0x71, 0x507, 0xa, 0x71, 0xc, 0x71, 
    0xe, 0x71, 0x50a, 0xb, 0x71, 0x3, 0x71, 0x5, 0x71, 0x50d, 0xa, 0x71, 
    0x3, 0x71, 0x3, 0x71, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 
    0x72, 0x5, 0x72, 0x516, 0xa, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 
    0x3, 0x72, 0x3, 0x72, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x7, 0x73, 0x520, 
    0xa, 0x73, 0xc, 0x73, 0xe, 0x73, 0x523, 0xb, 0x73, 0x3, 0x73, 0x3, 0x73, 
    0x5, 0x73, 0x527, 0xa, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 
    0x3, 0x73, 0x5, 0x73, 0x52e, 0xa, 0x73, 0x5, 0x73, 0x530, 0xa, 0x73, 
    0x3, 0x74, 0x5, 0x74, 0x533, 0xa, 0x74, 0x3, 0x74, 0x5, 0x74, 0x536, 
    0xa, 0x74, 0x3, 0x74, 0x3, 0x74, 0x5, 0x74, 0x53a, 0xa, 0x74, 0x3, 0x74, 
    0x5, 0x74, 0x53d, 0xa, 0x74, 0x3, 0x74, 0x3, 0x74, 0x5, 0x74, 0x541, 
    0xa, 0x74, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x76, 0x5, 0x76, 0x547, 
    0xa, 0x76, 0x3, 0x77, 0x6, 0x77, 0x54a, 0xa, 0x77, 0xd, 0x77, 0xe, 0x77, 
    0x54b, 0x3, 0x78, 0x3, 0x78, 0x5, 0x78, 0x550, 0xa, 0x78, 0x3, 0x78, 
    0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x79, 0x3, 0x79, 0x6, 0x79, 0x558, 
    0xa, 0x79, 0xd, 0x79, 0xe, 0x79, 0x559, 0x3, 0x79, 0x7, 0x79, 0x55d, 
    0xa, 0x79, 0xc, 0x79, 0xe, 0x79, 0x560, 0xb, 0x79, 0x3, 0x7a, 0x5, 0x7a, 
    0x563, 0xa, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x5, 0x7a, 0x567, 0xa, 0x7a, 
    0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x7, 0x7b, 0x56d, 0xa, 0x7b, 
    0xc, 0x7b, 0xe, 0x7b, 0x570, 0xb, 0x7b, 0x3, 0x7b, 0x5, 0x7b, 0x573, 
    0xa, 0x7b, 0x5, 0x7b, 0x575, 0xa, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 
    0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 
    0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 
    0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 
    0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 
    0x3, 0x7c, 0x5, 0x7c, 0x595, 0xa, 0x7c, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x5, 0x7d, 0x59b, 0xa, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x5a5, 
    0xa, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x5a8, 0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 
    0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x5, 
    0x7f, 0x5b2, 0xa, 0x7f, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x5, 0x80, 
    0x5b7, 0xa, 0x80, 0x5, 0x80, 0x5b9, 0xa, 0x80, 0x3, 0x80, 0x3, 0x80, 
    0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x7, 0x81, 0x5c0, 0xa, 0x81, 0xc, 0x81, 
    0xe, 0x81, 0x5c3, 0xb, 0x81, 0x3, 0x82, 0x5, 0x82, 0x5c6, 0xa, 0x82, 
    0x3, 0x82, 0x3, 0x82, 0x5, 0x82, 0x5ca, 0xa, 0x82, 0x3, 0x83, 0x3, 0x83, 
    0x3, 0x83, 0x7, 0x83, 0x5cf, 0xa, 0x83, 0xc, 0x83, 0xe, 0x83, 0x5d2, 
    0xb, 0x83, 0x3, 0x84, 0x3, 0x84, 0x5, 0x84, 0x5d6, 0xa, 0x84, 0x3, 0x84, 
    0x3, 0x84, 0x5, 0x84, 0x5da, 0xa, 0x84, 0x3, 0x84, 0x3, 0x84, 0x5, 0x84, 
    0x5de, 0xa, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 
    0x3, 0x85, 0x3, 0x85, 0x3, 0x86, 0x3, 0x86, 0x3, 0x87, 0x3, 0x87, 0x3, 
    0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 0x5f0, 
    0xa, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x5, 
    0x87, 0x5f7, 0xa, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 
    0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 0x5ff, 0xa, 0x87, 0x3, 0x87, 0x3, 0x87, 
    0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 
    0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 
    0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 
    0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 
    0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 
    0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 
    0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 
    0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 
    0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 
    0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 
    0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 0x647, 0xa, 0x87, 0x3, 0x87, 
    0x3, 0x87, 0x5, 0x87, 0x64b, 0xa, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 
    0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 
    0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 
    0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 
    0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 
    0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 
    0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 
    0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 
    0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 
    0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 
    0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 
    0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 
    0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 
    0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 
    0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 
    0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x7, 0x87, 0x6b0, 
    0xa, 0x87, 0xc, 0x87, 0xe, 0x87, 0x6b3, 0xb, 0x87, 0x3, 0x88, 0x3, 0x88, 
    0x3, 0x88, 0x3, 0x88, 0x7, 0x88, 0x6b9, 0xa, 0x88, 0xc, 0x88, 0xe, 0x88, 
    0x6bc, 0xb, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 
    0x3, 0x88, 0x3, 0x88, 0x5, 0x88, 0x6c5, 0xa, 0x88, 0x3, 0x88, 0x3, 0x88, 
    0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x5, 0x88, 0x6cc, 0xa, 0x88, 0x3, 0x88, 
    0x3, 0x88, 0x5, 0x88, 0x6d0, 0xa, 0x88, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 
    0x5, 0x89, 0x6d5, 0xa, 0x89, 0x3, 0x89, 0x5, 0x89, 0x6d8, 0xa, 0x89, 
    0x3, 0x8a, 0x5, 0x8a, 0x6db, 0xa, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x5, 0x8a, 
    0x6df, 0xa, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8b, 0x3, 0x8b, 
    0x3, 0x8b, 0x5, 0x8b, 0x6e7, 0xa, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x6ea, 
    0xa, 0x8b, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x5, 
    0x8c, 0x6f1, 0xa, 0x8c, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8e, 0x3, 0x8e, 
    0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 
    0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x5, 0x8e, 
    0x703, 0xa, 0x8e, 0x3, 0x8f, 0x3, 0x8f, 0x7, 0x8f, 0x707, 0xa, 0x8f, 
    0xc, 0x8f, 0xe, 0x8f, 0x70a, 0xb, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x90, 
    0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x5, 0x90, 0x713, 0xa, 0x90, 
    0x3, 0x91, 0x3, 0x91, 0x3, 0x92, 0x3, 0x92, 0x5, 0x92, 0x719, 0xa, 0x92, 
    0x3, 0x93, 0x3, 0x93, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x5, 0x94, 0x720, 
    0xa, 0x94, 0x3, 0x95, 0x3, 0x95, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 
    0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 
    0x5, 0x98, 0x72e, 0xa, 0x98, 0x3, 0x98, 0x2, 0x6, 0x16, 0x18, 0x74, 
    0x10c, 0x99, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 
    0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 
    0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 
    0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 
    0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 
    0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 
    0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 
    0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 
    0xd8, 0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 
    0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 
    0x106, 0x108, 0x10a, 0x10c, 0x10e, 0x110, 0x112, 0x114, 0x116, 0x118, 
    0x11a, 0x11c, 0x11e, 0x120, 0x122, 0x124, 0x126, 0x128, 0x12a, 0x12c, 
    0x12e, 0x2, 0x12, 0x3, 0x2, 0xd, 0xe, 0x4, 0x2, 0x67, 0x68, 0x6b, 0x6b, 
    0x4, 0x2, 0x6f, 0x6f, 0x71, 0x71, 0x5, 0x2, 0x47, 0x47, 0x62, 0x62, 
    0x66, 0x66, 0x4, 0x2, 0xf, 0xf, 0x11, 0x11, 0x3, 0x2, 0x14, 0x15, 0x6, 
    0x2, 0x16, 0x19, 0x43, 0x43, 0x4b, 0x4b, 0x57, 0x57, 0x3, 0x2, 0x1a, 
    0x1c, 0x3, 0x2, 0x16, 0x17, 0x3, 0x2, 0x1d, 0x1f, 0x3, 0x2, 0x20, 0x23, 
    0x3, 0x2, 0x24, 0x27, 0x3, 0x2, 0x2d, 0x37, 0x3, 0x2, 0x3b, 0x3f, 0x5, 
    0x2, 0x73, 0x73, 0x78, 0x78, 0x7e, 0x7e, 0x7, 0x2, 0x40, 0x59, 0x5b, 
    0x6d, 0x71, 0x71, 0x73, 0x75, 0x78, 0x78, 0x2, 0x7db, 0x2, 0x130, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x135, 0x3, 0x2, 0x2, 0x2, 0x6, 0x137, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x13d, 0x3, 0x2, 0x2, 0x2, 0xa, 0x14a, 0x3, 0x2, 0x2, 
    0x2, 0xc, 0x14c, 0x3, 0x2, 0x2, 0x2, 0xe, 0x14f, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x155, 0x3, 0x2, 0x2, 0x2, 0x12, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x164, 0x3, 0x2, 0x2, 0x2, 0x16, 0x166, 0x3, 0x2, 0x2, 0x2, 0x18, 0x186, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x19f, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1a7, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1b8, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1c0, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x1d7, 0x3, 0x2, 0x2, 0x2, 0x30, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x32, 0x1e0, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x36, 0x1f3, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x20c, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x21c, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x220, 0x3, 0x2, 0x2, 0x2, 0x42, 0x237, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x239, 0x3, 0x2, 0x2, 0x2, 0x46, 0x243, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x246, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x256, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x25c, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x265, 0x3, 0x2, 0x2, 0x2, 0x50, 0x269, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x54, 0x277, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x58, 0x284, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x29e, 0x3, 0x2, 0x2, 0x2, 
    0x5e, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x60, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x2bb, 0x3, 0x2, 0x2, 0x2, 0x64, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x66, 0x2c9, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x2d6, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x2ea, 0x3, 0x2, 
    0x2, 0x2, 0x70, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x72, 0x2f4, 0x3, 0x2, 0x2, 
    0x2, 0x74, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x76, 0x309, 0x3, 0x2, 0x2, 0x2, 
    0x78, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x313, 0x3, 0x2, 0x2, 0x2, 0x7c, 
    0x335, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x337, 0x3, 0x2, 0x2, 0x2, 0x80, 0x33e, 
    0x3, 0x2, 0x2, 0x2, 0x82, 0x342, 0x3, 0x2, 0x2, 0x2, 0x84, 0x34a, 0x3, 
    0x2, 0x2, 0x2, 0x86, 0x351, 0x3, 0x2, 0x2, 0x2, 0x88, 0x35e, 0x3, 0x2, 
    0x2, 0x2, 0x8a, 0x36b, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x373, 0x3, 0x2, 0x2, 
    0x2, 0x8e, 0x394, 0x3, 0x2, 0x2, 0x2, 0x90, 0x396, 0x3, 0x2, 0x2, 0x2, 
    0x92, 0x3a1, 0x3, 0x2, 0x2, 0x2, 0x94, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0x96, 
    0x3a9, 0x3, 0x2, 0x2, 0x2, 0x98, 0x3ad, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x3b7, 
    0x3, 0x2, 0x2, 0x2, 0x9c, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x3be, 0x3, 
    0x2, 0x2, 0x2, 0xa0, 0x40c, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x40e, 0x3, 0x2, 
    0x2, 0x2, 0xa4, 0x410, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x417, 0x3, 0x2, 0x2, 
    0x2, 0xa8, 0x41e, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x425, 0x3, 0x2, 0x2, 0x2, 
    0xac, 0x42c, 0x3, 0x2, 0x2, 0x2, 0xae, 0x432, 0x3, 0x2, 0x2, 0x2, 0xb0, 
    0x438, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x445, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x449, 
    0x3, 0x2, 0x2, 0x2, 0xb6, 0x44f, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x454, 0x3, 
    0x2, 0x2, 0x2, 0xba, 0x458, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x45d, 0x3, 0x2, 
    0x2, 0x2, 0xbe, 0x466, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x46c, 0x3, 0x2, 0x2, 
    0x2, 0xc2, 0x46f, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x472, 0x3, 0x2, 0x2, 0x2, 
    0xc6, 0x47f, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x48a, 0x3, 0x2, 0x2, 0x2, 0xca, 
    0x48f, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x498, 0x3, 0x2, 0x2, 0x2, 0xce, 0x49b, 
    0x3, 0x2, 0x2, 0x2, 0xd0, 0x4a5, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x4c5, 0x3, 
    0x2, 0x2, 0x2, 0xd4, 0x4c8, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x4d3, 0x3, 0x2, 
    0x2, 0x2, 0xd8, 0x4d7, 0x3, 0x2, 0x2, 0x2, 0xda, 0x4e3, 0x3, 0x2, 0x2, 
    0x2, 0xdc, 0x4f1, 0x3, 0x2, 0x2, 0x2, 0xde, 0x4ff, 0x3, 0x2, 0x2, 0x2, 
    0xe0, 0x502, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x510, 0x3, 0x2, 0x2, 0x2, 0xe4, 
    0x52f, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x532, 0x3, 0x2, 0x2, 0x2, 0xe8, 0x542, 
    0x3, 0x2, 0x2, 0x2, 0xea, 0x546, 0x3, 0x2, 0x2, 0x2, 0xec, 0x549, 0x3, 
    0x2, 0x2, 0x2, 0xee, 0x54d, 0x3, 0x2, 0x2, 0x2, 0xf0, 0x555, 0x3, 0x2, 
    0x2, 0x2, 0xf2, 0x562, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x568, 0x3, 0x2, 0x2, 
    0x2, 0xf6, 0x594, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x596, 0x3, 0x2, 0x2, 0x2, 
    0xfa, 0x5a0, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x5b1, 0x3, 0x2, 0x2, 0x2, 0xfe, 
    0x5b3, 0x3, 0x2, 0x2, 0x2, 0x100, 0x5bc, 0x3, 0x2, 0x2, 0x2, 0x102, 
    0x5c5, 0x3, 0x2, 0x2, 0x2, 0x104, 0x5cb, 0x3, 0x2, 0x2, 0x2, 0x106, 
    0x5d3, 0x3, 0x2, 0x2, 0x2, 0x108, 0x5e4, 0x3, 0x2, 0x2, 0x2, 0x10a, 
    0x5e6, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x64a, 0x3, 0x2, 0x2, 0x2, 0x10e, 
    0x6cf, 0x3, 0x2, 0x2, 0x2, 0x110, 0x6d7, 0x3, 0x2, 0x2, 0x2, 0x112, 
    0x6da, 0x3, 0x2, 0x2, 0x2, 0x114, 0x6e9, 0x3, 0x2, 0x2, 0x2, 0x116, 
    0x6f0, 0x3, 0x2, 0x2, 0x2, 0x118, 0x6f2, 0x3, 0x2, 0x2, 0x2, 0x11a, 
    0x702, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x704, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x712, 0x3, 0x2, 0x2, 0x2, 0x120, 0x714, 0x3, 0x2, 0x2, 0x2, 0x122, 
    0x718, 0x3, 0x2, 0x2, 0x2, 0x124, 0x71a, 0x3, 0x2, 0x2, 0x2, 0x126, 
    0x71f, 0x3, 0x2, 0x2, 0x2, 0x128, 0x721, 0x3, 0x2, 0x2, 0x2, 0x12a, 
    0x723, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x726, 0x3, 0x2, 0x2, 0x2, 0x12e, 
    0x72d, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x7, 0xf, 0x2, 0x2, 0x131, 
    0x132, 0x5, 0x10c, 0x87, 0x2, 0x132, 0x3, 0x3, 0x2, 0x2, 0x2, 0x133, 
    0x136, 0x5, 0xee, 0x78, 0x2, 0x134, 0x136, 0x5, 0xf4, 0x7b, 0x2, 0x135, 
    0x133, 0x3, 0x2, 0x2, 0x2, 0x135, 0x134, 0x3, 0x2, 0x2, 0x2, 0x136, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x137, 0x139, 0x7, 0x20, 0x2, 0x2, 0x138, 0x13a, 
    0x5, 0x8, 0x5, 0x2, 0x139, 0x138, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 
    0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 
    0x7, 0x21, 0x2, 0x2, 0x13c, 0x7, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x142, 0x5, 
    0xa, 0x6, 0x2, 0x13e, 0x13f, 0x7, 0xe, 0x2, 0x2, 0x13f, 0x141, 0x5, 
    0xa, 0x6, 0x2, 0x140, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x141, 0x144, 0x3, 
    0x2, 0x2, 0x2, 0x142, 0x140, 0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 0x3, 
    0x2, 0x2, 0x2, 0x143, 0x9, 0x3, 0x2, 0x2, 0x2, 0x144, 0x142, 0x3, 0x2, 
    0x2, 0x2, 0x145, 0x147, 0x7, 0x7e, 0x2, 0x2, 0x146, 0x148, 0x5, 0xc, 
    0x7, 0x2, 0x147, 0x146, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x3, 0x2, 
    0x2, 0x2, 0x148, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14b, 0x5, 0x6, 
    0x4, 0x2, 0x14a, 0x145, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x149, 0x3, 0x2, 
    0x2, 0x2, 0x14b, 0xb, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14d, 0x7, 0x60, 0x2, 
    0x2, 0x14d, 0x14e, 0x5, 0x14, 0xb, 0x2, 0x14e, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x14f, 0x151, 0x7, 0x20, 0x2, 0x2, 0x150, 0x152, 0x5, 0x10, 0x9, 0x2, 
    0x151, 0x150, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x3, 0x2, 0x2, 0x2, 
    0x152, 0x153, 0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 0x7, 0x21, 0x2, 0x2, 
    0x154, 0xf, 0x3, 0x2, 0x2, 0x2, 0x155, 0x15a, 0x5, 0x12, 0xa, 0x2, 0x156, 
    0x157, 0x7, 0xe, 0x2, 0x2, 0x157, 0x159, 0x5, 0x12, 0xa, 0x2, 0x158, 
    0x156, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15a, 
    0x158, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15b, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 
    0x5, 0x14, 0xb, 0x2, 0x15e, 0x13, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x165, 
    0x5, 0x16, 0xc, 0x2, 0x160, 0x165, 0x5, 0x34, 0x1b, 0x2, 0x161, 0x165, 
    0x5, 0x36, 0x1c, 0x2, 0x162, 0x165, 0x5, 0x20, 0x11, 0x2, 0x163, 0x165, 
    0x7, 0x7f, 0x2, 0x2, 0x164, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x164, 0x160, 
    0x3, 0x2, 0x2, 0x2, 0x164, 0x161, 0x3, 0x2, 0x2, 0x2, 0x164, 0x162, 
    0x3, 0x2, 0x2, 0x2, 0x164, 0x163, 0x3, 0x2, 0x2, 0x2, 0x165, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x166, 0x167, 0x8, 0xc, 0x1, 0x2, 0x167, 0x168, 0x5, 
    0x18, 0xd, 0x2, 0x168, 0x171, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16a, 0xc, 
    0x5, 0x2, 0x2, 0x16a, 0x16b, 0x7, 0x2a, 0x2, 0x2, 0x16b, 0x170, 0x5, 
    0x16, 0xc, 0x6, 0x16c, 0x16d, 0xc, 0x4, 0x2, 0x2, 0x16d, 0x16e, 0x7, 
    0x28, 0x2, 0x2, 0x16e, 0x170, 0x5, 0x16, 0xc, 0x5, 0x16f, 0x169, 0x3, 
    0x2, 0x2, 0x2, 0x16f, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x170, 0x173, 0x3, 
    0x2, 0x2, 0x2, 0x171, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 0x3, 
    0x2, 0x2, 0x2, 0x172, 0x17, 0x3, 0x2, 0x2, 0x2, 0x173, 0x171, 0x3, 0x2, 
    0x2, 0x2, 0x174, 0x175, 0x8, 0xd, 0x1, 0x2, 0x175, 0x176, 0x7, 0x8, 
    0x2, 0x2, 0x176, 0x177, 0x5, 0x14, 0xb, 0x2, 0x177, 0x178, 0x7, 0x9, 
    0x2, 0x2, 0x178, 0x187, 0x3, 0x2, 0x2, 0x2, 0x179, 0x187, 0x5, 0x1a, 
    0xe, 0x2, 0x17a, 0x187, 0x5, 0x1c, 0xf, 0x2, 0x17b, 0x187, 0x5, 0x26, 
    0x14, 0x2, 0x17c, 0x17d, 0x7, 0x6, 0x2, 0x2, 0x17d, 0x17e, 0x5, 0x32, 
    0x1a, 0x2, 0x17e, 0x17f, 0x7, 0x7, 0x2, 0x2, 0x17f, 0x187, 0x3, 0x2, 
    0x2, 0x2, 0x180, 0x187, 0x5, 0x38, 0x1d, 0x2, 0x181, 0x187, 0x7, 0x52, 
    0x2, 0x2, 0x182, 0x183, 0x5, 0x1c, 0xf, 0x2, 0x183, 0x184, 0x7, 0x7c, 
    0x2, 0x2, 0x184, 0x185, 0x5, 0x18, 0xd, 0x3, 0x185, 0x187, 0x3, 0x2, 
    0x2, 0x2, 0x186, 0x174, 0x3, 0x2, 0x2, 0x2, 0x186, 0x179, 0x3, 0x2, 
    0x2, 0x2, 0x186, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x186, 0x17b, 0x3, 0x2, 
    0x2, 0x2, 0x186, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x186, 0x180, 0x3, 0x2, 
    0x2, 0x2, 0x186, 0x181, 0x3, 0x2, 0x2, 0x2, 0x186, 0x182, 0x3, 0x2, 
    0x2, 0x2, 0x187, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x188, 0x189, 0xc, 0x7, 
    0x2, 0x2, 0x189, 0x18a, 0x6, 0xd, 0x5, 0x2, 0x18a, 0x18b, 0x7, 0x6, 
    0x2, 0x2, 0x18b, 0x18d, 0x7, 0x7, 0x2, 0x2, 0x18c, 0x188, 0x3, 0x2, 
    0x2, 0x2, 0x18d, 0x190, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18c, 0x3, 0x2, 
    0x2, 0x2, 0x18e, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x190, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x191, 0x192, 0x7, 0x6e, 0x2, 
    0x2, 0x192, 0x19e, 0x8, 0xe, 0x1, 0x2, 0x193, 0x194, 0x7, 0x6f, 0x2, 
    0x2, 0x194, 0x19e, 0x8, 0xe, 0x1, 0x2, 0x195, 0x196, 0x7, 0x70, 0x2, 
    0x2, 0x196, 0x19e, 0x8, 0xe, 0x1, 0x2, 0x197, 0x198, 0x7, 0x71, 0x2, 
    0x2, 0x198, 0x19e, 0x8, 0xe, 0x1, 0x2, 0x199, 0x19a, 0x7, 0x72, 0x2, 
    0x2, 0x19a, 0x19e, 0x8, 0xe, 0x1, 0x2, 0x19b, 0x19c, 0x7, 0x4b, 0x2, 
    0x2, 0x19c, 0x19e, 0x8, 0xe, 0x1, 0x2, 0x19d, 0x191, 0x3, 0x2, 0x2, 
    0x2, 0x19d, 0x193, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x195, 0x3, 0x2, 0x2, 
    0x2, 0x19d, 0x197, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x199, 0x3, 0x2, 0x2, 
    0x2, 0x19d, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x19f, 0x1a1, 0x5, 0x24, 0x13, 0x2, 0x1a0, 0x1a2, 0x5, 0x1e, 0x10, 0x2, 
    0x1a1, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a2, 0x3, 0x2, 0x2, 0x2, 
    0x1a2, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a6, 0x5, 0x22, 0x12, 0x2, 
    0x1a4, 0x1a6, 0x5, 0x20, 0x11, 0x2, 0x1a5, 0x1a3, 0x3, 0x2, 0x2, 0x2, 
    0x1a5, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1a7, 
    0x1a8, 0x7, 0x20, 0x2, 0x2, 0x1a8, 0x1a9, 0x5, 0x10, 0x9, 0x2, 0x1a9, 
    0x1aa, 0x7, 0x21, 0x2, 0x2, 0x1aa, 0x21, 0x3, 0x2, 0x2, 0x2, 0x1ab, 
    0x1ac, 0x7, 0x20, 0x2, 0x2, 0x1ac, 0x1ad, 0x5, 0x10, 0x9, 0x2, 0x1ad, 
    0x1ae, 0x7, 0x20, 0x2, 0x2, 0x1ae, 0x1b4, 0x5, 0x10, 0x9, 0x2, 0x1af, 
    0x1b0, 0x7, 0x21, 0x2, 0x2, 0x1b0, 0x1b1, 0x5, 0x4, 0x3, 0x2, 0x1b1, 
    0x1b2, 0x7, 0x21, 0x2, 0x2, 0x1b2, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b3, 
    0x1b5, 0x7, 0x1d, 0x2, 0x2, 0x1b4, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b4, 
    0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x23, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b9, 
    0x7, 0x7e, 0x2, 0x2, 0x1b7, 0x1b9, 0x5, 0x6c, 0x37, 0x2, 0x1b8, 0x1b6, 
    0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x1ba, 0x1bc, 0x7, 0xa, 0x2, 0x2, 0x1bb, 0x1bd, 0x5, 
    0x28, 0x15, 0x2, 0x1bc, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bd, 0x3, 
    0x2, 0x2, 0x2, 0x1bd, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bf, 0x7, 
    0xc, 0x2, 0x2, 0x1bf, 0x27, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c2, 0x5, 0x2a, 
    0x16, 0x2, 0x1c1, 0x1c3, 0x9, 0x2, 0x2, 0x2, 0x1c2, 0x1c1, 0x3, 0x2, 
    0x2, 0x2, 0x1c2, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0x1c4, 0x1c9, 0x5, 0x2c, 0x17, 0x2, 0x1c5, 0x1c6, 0x9, 0x2, 0x2, 
    0x2, 0x1c6, 0x1c8, 0x5, 0x2c, 0x17, 0x2, 0x1c7, 0x1c5, 0x3, 0x2, 0x2, 
    0x2, 0x1c8, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1c7, 0x3, 0x2, 0x2, 
    0x2, 0x1c9, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0x1cb, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1d6, 0x5, 0x3c, 0x1f, 0x2, 
    0x1cd, 0x1d6, 0x5, 0x40, 0x21, 0x2, 0x1ce, 0x1d6, 0x5, 0x52, 0x2a, 0x2, 
    0x1cf, 0x1d6, 0x5, 0x54, 0x2b, 0x2, 0x1d0, 0x1d3, 0x5, 0x56, 0x2c, 0x2, 
    0x1d1, 0x1d2, 0x7, 0x38, 0x2, 0x2, 0x1d2, 0x1d4, 0x5, 0x14, 0xb, 0x2, 
    0x1d3, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d4, 0x3, 0x2, 0x2, 0x2, 
    0x1d4, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1cc, 0x3, 0x2, 0x2, 0x2, 
    0x1d5, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1ce, 0x3, 0x2, 0x2, 0x2, 
    0x1d5, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d0, 0x3, 0x2, 0x2, 0x2, 
    0x1d6, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 0x5, 0x18, 0xd, 0x2, 
    0x1d8, 0x1d9, 0x6, 0x18, 0x6, 0x2, 0x1d9, 0x1da, 0x7, 0x6, 0x2, 0x2, 
    0x1da, 0x1db, 0x7, 0x7, 0x2, 0x2, 0x1db, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x1dc, 
    0x1dd, 0x7, 0x6, 0x2, 0x2, 0x1dd, 0x1de, 0x5, 0x32, 0x1a, 0x2, 0x1de, 
    0x1df, 0x7, 0x7, 0x2, 0x2, 0x1df, 0x31, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e5, 
    0x5, 0x14, 0xb, 0x2, 0x1e1, 0x1e2, 0x7, 0xe, 0x2, 0x2, 0x1e2, 0x1e4, 
    0x5, 0x14, 0xb, 0x2, 0x1e3, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e7, 
    0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e6, 
    0x3, 0x2, 0x2, 0x2, 0x1e6, 0x33, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e5, 0x3, 
    0x2, 0x2, 0x2, 0x1e8, 0x1ea, 0x5, 0x6, 0x4, 0x2, 0x1e9, 0x1e8, 0x3, 
    0x2, 0x2, 0x2, 0x1e9, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1eb, 0x3, 
    0x2, 0x2, 0x2, 0x1eb, 0x1ed, 0x7, 0x8, 0x2, 0x2, 0x1ec, 0x1ee, 0x5, 
    0x42, 0x22, 0x2, 0x1ed, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x3, 
    0x2, 0x2, 0x2, 0x1ee, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f0, 0x7, 
    0x9, 0x2, 0x2, 0x1f0, 0x1f1, 0x7, 0x38, 0x2, 0x2, 0x1f1, 0x1f2, 0x5, 
    0x14, 0xb, 0x2, 0x1f2, 0x35, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f5, 0x7, 
    0x46, 0x2, 0x2, 0x1f4, 0x1f6, 0x5, 0x6, 0x4, 0x2, 0x1f5, 0x1f4, 0x3, 
    0x2, 0x2, 0x2, 0x1f5, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f7, 0x3, 
    0x2, 0x2, 0x2, 0x1f7, 0x1f9, 0x7, 0x8, 0x2, 0x2, 0x1f8, 0x1fa, 0x5, 
    0x42, 0x22, 0x2, 0x1f9, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fa, 0x3, 
    0x2, 0x2, 0x2, 0x1fa, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fc, 0x7, 
    0x9, 0x2, 0x2, 0x1fc, 0x1fd, 0x7, 0x38, 0x2, 0x2, 0x1fd, 0x1fe, 0x5, 
    0x14, 0xb, 0x2, 0x1fe, 0x37, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x200, 0x7, 
    0x43, 0x2, 0x2, 0x200, 0x201, 0x5, 0x3a, 0x1e, 0x2, 0x201, 0x39, 0x3, 
    0x2, 0x2, 0x2, 0x202, 0x20d, 0x7, 0x7e, 0x2, 0x2, 0x203, 0x204, 0x5, 
    0x122, 0x92, 0x2, 0x204, 0x205, 0x7, 0x13, 0x2, 0x2, 0x205, 0x207, 0x3, 
    0x2, 0x2, 0x2, 0x206, 0x203, 0x3, 0x2, 0x2, 0x2, 0x207, 0x208, 0x3, 
    0x2, 0x2, 0x2, 0x208, 0x206, 0x3, 0x2, 0x2, 0x2, 0x208, 0x209, 0x3, 
    0x2, 0x2, 0x2, 0x209, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 0x5, 
    0x122, 0x92, 0x2, 0x20b, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x202, 0x3, 
    0x2, 0x2, 0x2, 0x20c, 0x206, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x3b, 0x3, 0x2, 
    0x2, 0x2, 0x20e, 0x210, 0x7, 0x5c, 0x2, 0x2, 0x20f, 0x20e, 0x3, 0x2, 
    0x2, 0x2, 0x20f, 0x210, 0x3, 0x2, 0x2, 0x2, 0x210, 0x211, 0x3, 0x2, 
    0x2, 0x2, 0x211, 0x213, 0x5, 0xfc, 0x7f, 0x2, 0x212, 0x214, 0x7, 0x10, 
    0x2, 0x2, 0x213, 0x212, 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 0x3, 0x2, 
    0x2, 0x2, 0x214, 0x216, 0x3, 0x2, 0x2, 0x2, 0x215, 0x217, 0x5, 0x3e, 
    0x20, 0x2, 0x216, 0x215, 0x3, 0x2, 0x2, 0x2, 0x216, 0x217, 0x3, 0x2, 
    0x2, 0x2, 0x217, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x218, 0x219, 0x7, 0x38, 
    0x2, 0x2, 0x219, 0x21b, 0x5, 0x14, 0xb, 0x2, 0x21a, 0x218, 0x3, 0x2, 
    0x2, 0x2, 0x21a, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x3d, 0x3, 0x2, 0x2, 
    0x2, 0x21c, 0x21d, 0x7, 0x11, 0x2, 0x2, 0x21d, 0x21e, 0x5, 0x14, 0xb, 
    0x2, 0x21e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x221, 0x5, 0x6, 0x4, 0x2, 
    0x220, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x220, 0x221, 0x3, 0x2, 0x2, 0x2, 
    0x221, 0x222, 0x3, 0x2, 0x2, 0x2, 0x222, 0x224, 0x7, 0x8, 0x2, 0x2, 
    0x223, 0x225, 0x5, 0x42, 0x22, 0x2, 0x224, 0x223, 0x3, 0x2, 0x2, 0x2, 
    0x224, 0x225, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x3, 0x2, 0x2, 0x2, 
    0x226, 0x228, 0x7, 0x9, 0x2, 0x2, 0x227, 0x229, 0x5, 0x3e, 0x20, 0x2, 
    0x228, 0x227, 0x3, 0x2, 0x2, 0x2, 0x228, 0x229, 0x3, 0x2, 0x2, 0x2, 
    0x229, 0x41, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x238, 0x5, 0x4a, 0x26, 0x2, 
    0x22b, 0x230, 0x5, 0x46, 0x24, 0x2, 0x22c, 0x22d, 0x7, 0xe, 0x2, 0x2, 
    0x22d, 0x22f, 0x5, 0x46, 0x24, 0x2, 0x22e, 0x22c, 0x3, 0x2, 0x2, 0x2, 
    0x22f, 0x232, 0x3, 0x2, 0x2, 0x2, 0x230, 0x22e, 0x3, 0x2, 0x2, 0x2, 
    0x230, 0x231, 0x3, 0x2, 0x2, 0x2, 0x231, 0x235, 0x3, 0x2, 0x2, 0x2, 
    0x232, 0x230, 0x3, 0x2, 0x2, 0x2, 0x233, 0x234, 0x7, 0xe, 0x2, 0x2, 
    0x234, 0x236, 0x5, 0x4a, 0x26, 0x2, 0x235, 0x233, 0x3, 0x2, 0x2, 0x2, 
    0x235, 0x236, 0x3, 0x2, 0x2, 0x2, 0x236, 0x238, 0x3, 0x2, 0x2, 0x2, 
    0x237, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x237, 0x22b, 0x3, 0x2, 0x2, 0x2, 
    0x238, 0x43, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23e, 0x5, 0x4c, 0x27, 0x2, 
    0x23a, 0x23b, 0x7, 0xe, 0x2, 0x2, 0x23b, 0x23d, 0x5, 0x4c, 0x27, 0x2, 
    0x23c, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x240, 0x3, 0x2, 0x2, 0x2, 
    0x23e, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 0x3, 0x2, 0x2, 0x2, 
    0x23f, 0x45, 0x3, 0x2, 0x2, 0x2, 0x240, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x241, 
    0x244, 0x5, 0x4c, 0x27, 0x2, 0x242, 0x244, 0x5, 0x48, 0x25, 0x2, 0x243, 
    0x241, 0x3, 0x2, 0x2, 0x2, 0x243, 0x242, 0x3, 0x2, 0x2, 0x2, 0x244, 
    0x47, 0x3, 0x2, 0x2, 0x2, 0x245, 0x247, 0x5, 0x70, 0x39, 0x2, 0x246, 
    0x245, 0x3, 0x2, 0x2, 0x2, 0x246, 0x247, 0x3, 0x2, 0x2, 0x2, 0x247, 
    0x249, 0x3, 0x2, 0x2, 0x2, 0x248, 0x24a, 0x5, 0x4e, 0x28, 0x2, 0x249, 
    0x248, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24a, 
    0x24b, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x254, 0x5, 0x50, 0x29, 0x2, 0x24c, 
    0x24e, 0x7, 0x10, 0x2, 0x2, 0x24d, 0x24f, 0x5, 0x3e, 0x20, 0x2, 0x24e, 
    0x24d, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x24f, 
    0x255, 0x3, 0x2, 0x2, 0x2, 0x250, 0x252, 0x5, 0x3e, 0x20, 0x2, 0x251, 
    0x250, 0x3, 0x2, 0x2, 0x2, 0x251, 0x252, 0x3, 0x2, 0x2, 0x2, 0x252, 
    0x253, 0x3, 0x2, 0x2, 0x2, 0x253, 0x255, 0x5, 0x2, 0x2, 0x2, 0x254, 
    0x24c, 0x3, 0x2, 0x2, 0x2, 0x254, 0x251, 0x3, 0x2, 0x2, 0x2, 0x255, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x7, 0x12, 0x2, 0x2, 0x257, 
    0x259, 0x5, 0x10c, 0x87, 0x2, 0x258, 0x25a, 0x5, 0x3e, 0x20, 0x2, 0x259, 
    0x258, 0x3, 0x2, 0x2, 0x2, 0x259, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x25a, 
    0x4b, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x25d, 0x5, 0x70, 0x39, 0x2, 0x25c, 
    0x25b, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x25d, 
    0x25f, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x260, 0x5, 0x4e, 0x28, 0x2, 0x25f, 
    0x25e, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x260, 0x3, 0x2, 0x2, 0x2, 0x260, 
    0x261, 0x3, 0x2, 0x2, 0x2, 0x261, 0x263, 0x5, 0x50, 0x29, 0x2, 0x262, 
    0x264, 0x5, 0x3e, 0x20, 0x2, 0x263, 0x262, 0x3, 0x2, 0x2, 0x2, 0x263, 
    0x264, 0x3, 0x2, 0x2, 0x2, 0x264, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x265, 0x266, 
    0x9, 0x3, 0x2, 0x2, 0x266, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x267, 0x26a, 0x5, 
    0x122, 0x92, 0x2, 0x268, 0x26a, 0x5, 0x4, 0x3, 0x2, 0x269, 0x267, 0x3, 
    0x2, 0x2, 0x2, 0x269, 0x268, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x51, 0x3, 0x2, 
    0x2, 0x2, 0x26b, 0x26d, 0x7, 0x46, 0x2, 0x2, 0x26c, 0x26e, 0x5, 0x6, 
    0x4, 0x2, 0x26d, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26e, 0x3, 0x2, 
    0x2, 0x2, 0x26e, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x271, 0x7, 0x8, 
    0x2, 0x2, 0x270, 0x272, 0x5, 0x42, 0x22, 0x2, 0x271, 0x270, 0x3, 0x2, 
    0x2, 0x2, 0x271, 0x272, 0x3, 0x2, 0x2, 0x2, 0x272, 0x273, 0x3, 0x2, 
    0x2, 0x2, 0x273, 0x275, 0x7, 0x9, 0x2, 0x2, 0x274, 0x276, 0x5, 0x3e, 
    0x20, 0x2, 0x275, 0x274, 0x3, 0x2, 0x2, 0x2, 0x275, 0x276, 0x3, 0x2, 
    0x2, 0x2, 0x276, 0x53, 0x3, 0x2, 0x2, 0x2, 0x277, 0x278, 0x7, 0x6, 0x2, 
    0x2, 0x278, 0x279, 0x7, 0x7e, 0x2, 0x2, 0x279, 0x27a, 0x7, 0x11, 0x2, 
    0x2, 0x27a, 0x27b, 0x9, 0x4, 0x2, 0x2, 0x27b, 0x27c, 0x7, 0x7, 0x2, 
    0x2, 0x27c, 0x27d, 0x5, 0x3e, 0x20, 0x2, 0x27d, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x27e, 0x280, 0x5, 0xfc, 0x7f, 0x2, 0x27f, 0x281, 0x7, 0x10, 0x2, 
    0x2, 0x280, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x280, 0x281, 0x3, 0x2, 0x2, 
    0x2, 0x281, 0x282, 0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 0x5, 0x40, 0x21, 
    0x2, 0x283, 0x57, 0x3, 0x2, 0x2, 0x2, 0x284, 0x285, 0x7, 0x73, 0x2, 
    0x2, 0x285, 0x287, 0x7, 0x7e, 0x2, 0x2, 0x286, 0x288, 0x5, 0x6, 0x4, 
    0x2, 0x287, 0x286, 0x3, 0x2, 0x2, 0x2, 0x287, 0x288, 0x3, 0x2, 0x2, 
    0x2, 0x288, 0x289, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 0x7, 0xf, 0x2, 
    0x2, 0x28a, 0x28b, 0x5, 0x14, 0xb, 0x2, 0x28b, 0x28c, 0x7, 0xd, 0x2, 
    0x2, 0x28c, 0x59, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x28f, 0x5, 0x4e, 0x28, 
    0x2, 0x28e, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28f, 0x3, 0x2, 0x2, 
    0x2, 0x28f, 0x290, 0x3, 0x2, 0x2, 0x2, 0x290, 0x291, 0x7, 0x76, 0x2, 
    0x2, 0x291, 0x293, 0x7, 0x8, 0x2, 0x2, 0x292, 0x294, 0x5, 0xe4, 0x73, 
    0x2, 0x293, 0x292, 0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 0x3, 0x2, 0x2, 
    0x2, 0x294, 0x295, 0x3, 0x2, 0x2, 0x2, 0x295, 0x29b, 0x7, 0x9, 0x2, 
    0x2, 0x296, 0x297, 0x7, 0xa, 0x2, 0x2, 0x297, 0x298, 0x5, 0xea, 0x76, 
    0x2, 0x298, 0x299, 0x7, 0xc, 0x2, 0x2, 0x299, 0x29c, 0x3, 0x2, 0x2, 
    0x2, 0x29a, 0x29c, 0x7, 0xd, 0x2, 0x2, 0x29b, 0x296, 0x3, 0x2, 0x2, 
    0x2, 0x29b, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x29c, 0x3, 0x2, 0x2, 
    0x2, 0x29c, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x29f, 0x7, 0x63, 0x2, 
    0x2, 0x29e, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29f, 0x3, 0x2, 0x2, 
    0x2, 0x29f, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x2a2, 0x7, 0x7a, 0x2, 
    0x2, 0x2a1, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x2a2, 0x3, 0x2, 0x2, 
    0x2, 0x2a2, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2a4, 0x7, 0x69, 0x2, 
    0x2, 0x2a4, 0x2a6, 0x7, 0x7e, 0x2, 0x2, 0x2a5, 0x2a7, 0x5, 0x6, 0x4, 
    0x2, 0x2a6, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x2a7, 0x3, 0x2, 0x2, 
    0x2, 0x2a7, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2aa, 0x5, 0x5e, 0x30, 
    0x2, 0x2a9, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2aa, 0x3, 0x2, 0x2, 
    0x2, 0x2aa, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2ad, 0x5, 0x26, 0x14, 
    0x2, 0x2ac, 0x2ae, 0x7, 0xd, 0x2, 0x2, 0x2ad, 0x2ac, 0x3, 0x2, 0x2, 
    0x2, 0x2ad, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x2af, 0x2b0, 0x7, 0x60, 0x2, 0x2, 0x2b0, 0x2b1, 0x5, 0x60, 0x31, 0x2, 
    0x2b1, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b7, 0x5, 0x1c, 0xf, 0x2, 
    0x2b3, 0x2b4, 0x7, 0xe, 0x2, 0x2, 0x2b4, 0x2b6, 0x5, 0x1c, 0xf, 0x2, 
    0x2b5, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b6, 0x2b9, 0x3, 0x2, 0x2, 0x2, 
    0x2b7, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b8, 0x3, 0x2, 0x2, 0x2, 
    0x2b8, 0x61, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2ba, 
    0x2bc, 0x7, 0x62, 0x2, 0x2, 0x2bb, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2bb, 
    0x2bc, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2bd, 
    0x2be, 0x7, 0x5f, 0x2, 0x2, 0x2be, 0x2bf, 0x7, 0x7e, 0x2, 0x2, 0x2bf, 
    0x2c1, 0x7, 0xa, 0x2, 0x2, 0x2c0, 0x2c2, 0x5, 0x64, 0x33, 0x2, 0x2c1, 
    0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2c2, 
    0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c4, 0x7, 0xc, 0x2, 0x2, 0x2c4, 
    0x63, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c7, 0x5, 0x66, 0x34, 0x2, 0x2c6, 
    0x2c8, 0x7, 0xe, 0x2, 0x2, 0x2c7, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2c7, 
    0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x65, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2ce, 
    0x5, 0x68, 0x35, 0x2, 0x2ca, 0x2cb, 0x7, 0xe, 0x2, 0x2, 0x2cb, 0x2cd, 
    0x5, 0x68, 0x35, 0x2, 0x2cc, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2d0, 
    0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2cf, 
    0x3, 0x2, 0x2, 0x2, 0x2cf, 0x67, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2ce, 0x3, 
    0x2, 0x2, 0x2, 0x2d1, 0x2d4, 0x5, 0xfc, 0x7f, 0x2, 0x2d2, 0x2d3, 0x7, 
    0xf, 0x2, 0x2, 0x2d3, 0x2d5, 0x5, 0x10c, 0x87, 0x2, 0x2d4, 0x2d2, 0x3, 
    0x2, 0x2, 0x2, 0x2d4, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d5, 0x69, 0x3, 0x2, 
    0x2, 0x2, 0x2d6, 0x2d7, 0x7, 0x77, 0x2, 0x2, 0x2d7, 0x2d8, 0x5, 0x6c, 
    0x37, 0x2, 0x2d8, 0x2da, 0x7, 0xa, 0x2, 0x2, 0x2d9, 0x2db, 0x5, 0x80, 
    0x41, 0x2, 0x2da, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2db, 0x3, 0x2, 
    0x2, 0x2, 0x2db, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2dd, 0x7, 0xc, 
    0x2, 0x2, 0x2dd, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2e7, 0x7, 0x7e, 
    0x2, 0x2, 0x2df, 0x2e1, 0x7, 0x13, 0x2, 0x2, 0x2e0, 0x2df, 0x3, 0x2, 
    0x2, 0x2, 0x2e1, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e0, 0x3, 0x2, 
    0x2, 0x2, 0x2e2, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e4, 0x3, 0x2, 
    0x2, 0x2, 0x2e4, 0x2e6, 0x7, 0x7e, 0x2, 0x2, 0x2e5, 0x2e0, 0x3, 0x2, 
    0x2, 0x2, 0x2e6, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2e5, 0x3, 0x2, 
    0x2, 0x2, 0x2e7, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x6d, 0x3, 0x2, 0x2, 
    0x2, 0x2e9, 0x2e7, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2eb, 0x7, 0x7e, 0x2, 
    0x2, 0x2eb, 0x2ec, 0x7, 0xf, 0x2, 0x2, 0x2ec, 0x2ed, 0x5, 0x6c, 0x37, 
    0x2, 0x2ed, 0x2ee, 0x7, 0xd, 0x2, 0x2, 0x2ee, 0x6f, 0x3, 0x2, 0x2, 0x2, 
    0x2ef, 0x2f1, 0x5, 0x72, 0x3a, 0x2, 0x2f0, 0x2ef, 0x3, 0x2, 0x2, 0x2, 
    0x2f1, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f2, 0x2f0, 0x3, 0x2, 0x2, 0x2, 
    0x2f2, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x71, 0x3, 0x2, 0x2, 0x2, 0x2f4, 
    0x2f7, 0x7, 0x7d, 0x2, 0x2, 0x2f5, 0x2f8, 0x5, 0x74, 0x3b, 0x2, 0x2f6, 
    0x2f8, 0x5, 0x76, 0x3c, 0x2, 0x2f7, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f7, 
    0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x73, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fa, 
    0x8, 0x3b, 0x1, 0x2, 0x2fa, 0x300, 0x7, 0x7e, 0x2, 0x2, 0x2fb, 0x2fc, 
    0x7, 0x8, 0x2, 0x2, 0x2fc, 0x2fd, 0x5, 0x10c, 0x87, 0x2, 0x2fd, 0x2fe, 
    0x7, 0x9, 0x2, 0x2, 0x2fe, 0x300, 0x3, 0x2, 0x2, 0x2, 0x2ff, 0x2f9, 
    0x3, 0x2, 0x2, 0x2, 0x2ff, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x300, 0x306, 
    0x3, 0x2, 0x2, 0x2, 0x301, 0x302, 0xc, 0x4, 0x2, 0x2, 0x302, 0x303, 
    0x7, 0x13, 0x2, 0x2, 0x303, 0x305, 0x5, 0x122, 0x92, 0x2, 0x304, 0x301, 
    0x3, 0x2, 0x2, 0x2, 0x305, 0x308, 0x3, 0x2, 0x2, 0x2, 0x306, 0x304, 
    0x3, 0x2, 0x2, 0x2, 0x306, 0x307, 0x3, 0x2, 0x2, 0x2, 0x307, 0x75, 0x3, 
    0x2, 0x2, 0x2, 0x308, 0x306, 0x3, 0x2, 0x2, 0x2, 0x309, 0x30a, 0x5, 
    0x74, 0x3b, 0x2, 0x30a, 0x30b, 0x5, 0xfe, 0x80, 0x2, 0x30b, 0x77, 0x3, 
    0x2, 0x2, 0x2, 0x30c, 0x30e, 0x5, 0xec, 0x77, 0x2, 0x30d, 0x30c, 0x3, 
    0x2, 0x2, 0x2, 0x30d, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x30e, 0x30f, 0x3, 
    0x2, 0x2, 0x2, 0x30f, 0x310, 0x7, 0x2, 0x2, 0x3, 0x310, 0x311, 0x8, 
    0x3d, 0x1, 0x2, 0x311, 0x79, 0x3, 0x2, 0x2, 0x2, 0x312, 0x314, 0x7, 
    0x63, 0x2, 0x2, 0x313, 0x312, 0x3, 0x2, 0x2, 0x2, 0x313, 0x314, 0x3, 
    0x2, 0x2, 0x2, 0x314, 0x315, 0x3, 0x2, 0x2, 0x2, 0x315, 0x316, 0x5, 
    0x7c, 0x3f, 0x2, 0x316, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x317, 0x336, 0x5, 
    0x7e, 0x40, 0x2, 0x318, 0x336, 0x5, 0x84, 0x43, 0x2, 0x319, 0x336, 0x5, 
    0x8a, 0x46, 0x2, 0x31a, 0x336, 0x5, 0x9a, 0x4e, 0x2, 0x31b, 0x336, 0x5, 
    0x82, 0x42, 0x2, 0x31c, 0x336, 0x5, 0x70, 0x39, 0x2, 0x31d, 0x336, 0x5, 
    0xc6, 0x64, 0x2, 0x31e, 0x336, 0x5, 0x5c, 0x2f, 0x2, 0x31f, 0x336, 0x5, 
    0x6a, 0x36, 0x2, 0x320, 0x336, 0x5, 0x9e, 0x50, 0x2, 0x321, 0x336, 0x5, 
    0xa0, 0x51, 0x2, 0x322, 0x336, 0x5, 0xa4, 0x53, 0x2, 0x323, 0x336, 0x5, 
    0xa6, 0x54, 0x2, 0x324, 0x336, 0x5, 0xa8, 0x55, 0x2, 0x325, 0x336, 0x5, 
    0xaa, 0x56, 0x2, 0x326, 0x336, 0x5, 0xac, 0x57, 0x2, 0x327, 0x336, 0x5, 
    0xb8, 0x5d, 0x2, 0x328, 0x336, 0x5, 0xae, 0x58, 0x2, 0x329, 0x336, 0x5, 
    0xba, 0x5e, 0x2, 0x32a, 0x336, 0x5, 0xbc, 0x5f, 0x2, 0x32b, 0x336, 0x5, 
    0xc2, 0x62, 0x2, 0x32c, 0x336, 0x5, 0xc4, 0x63, 0x2, 0x32d, 0x336, 0x5, 
    0x112, 0x8a, 0x2, 0x32e, 0x336, 0x5, 0xda, 0x6e, 0x2, 0x32f, 0x336, 
    0x5, 0x9c, 0x4f, 0x2, 0x330, 0x336, 0x5, 0x8e, 0x48, 0x2, 0x331, 0x336, 
    0x5, 0x58, 0x2d, 0x2, 0x332, 0x336, 0x5, 0x62, 0x32, 0x2, 0x333, 0x334, 
    0x7, 0x63, 0x2, 0x2, 0x334, 0x336, 0x5, 0x7c, 0x3f, 0x2, 0x335, 0x317, 
    0x3, 0x2, 0x2, 0x2, 0x335, 0x318, 0x3, 0x2, 0x2, 0x2, 0x335, 0x319, 
    0x3, 0x2, 0x2, 0x2, 0x335, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x335, 0x31b, 
    0x3, 0x2, 0x2, 0x2, 0x335, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x335, 0x31d, 
    0x3, 0x2, 0x2, 0x2, 0x335, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x335, 0x31f, 
    0x3, 0x2, 0x2, 0x2, 0x335, 0x320, 0x3, 0x2, 0x2, 0x2, 0x335, 0x321, 
    0x3, 0x2, 0x2, 0x2, 0x335, 0x322, 0x3, 0x2, 0x2, 0x2, 0x335, 0x323, 
    0x3, 0x2, 0x2, 0x2, 0x335, 0x324, 0x3, 0x2, 0x2, 0x2, 0x335, 0x325, 
    0x3, 0x2, 0x2, 0x2, 0x335, 0x326, 0x3, 0x2, 0x2, 0x2, 0x335, 0x327, 
    0x3, 0x2, 0x2, 0x2, 0x335, 0x328, 0x3, 0x2, 0x2, 0x2, 0x335, 0x329, 
    0x3, 0x2, 0x2, 0x2, 0x335, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x335, 0x32b, 
    0x3, 0x2, 0x2, 0x2, 0x335, 0x32c, 0x3, 0x2, 0x2, 0x2, 0x335, 0x32d, 
    0x3, 0x2, 0x2, 0x2, 0x335, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x335, 0x32f, 
    0x3, 0x2, 0x2, 0x2, 0x335, 0x330, 0x3, 0x2, 0x2, 0x2, 0x335, 0x331, 
    0x3, 0x2, 0x2, 0x2, 0x335, 0x332, 0x3, 0x2, 0x2, 0x2, 0x335, 0x333, 
    0x3, 0x2, 0x2, 0x2, 0x336, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x337, 0x339, 0x7, 
    0xa, 0x2, 0x2, 0x338, 0x33a, 0x5, 0x80, 0x41, 0x2, 0x339, 0x338, 0x3, 
    0x2, 0x2, 0x2, 0x339, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x33b, 0x3, 
    0x2, 0x2, 0x2, 0x33b, 0x33c, 0x7, 0xc, 0x2, 0x2, 0x33c, 0x7f, 0x3, 0x2, 
    0x2, 0x2, 0x33d, 0x33f, 0x5, 0x7c, 0x3f, 0x2, 0x33e, 0x33d, 0x3, 0x2, 
    0x2, 0x2, 0x33f, 0x340, 0x3, 0x2, 0x2, 0x2, 0x340, 0x33e, 0x3, 0x2, 
    0x2, 0x2, 0x340, 0x341, 0x3, 0x2, 0x2, 0x2, 0x341, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0x342, 0x346, 0x7, 0x7b, 0x2, 0x2, 0x343, 0x344, 0x7, 0x7e, 0x2, 
    0x2, 0x344, 0x347, 0x5, 0x40, 0x21, 0x2, 0x345, 0x347, 0x5, 0x8e, 0x48, 
    0x2, 0x346, 0x343, 0x3, 0x2, 0x2, 0x2, 0x346, 0x345, 0x3, 0x2, 0x2, 
    0x2, 0x347, 0x348, 0x3, 0x2, 0x2, 0x2, 0x348, 0x349, 0x5, 0x12e, 0x98, 
    0x2, 0x349, 0x83, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x34d, 0x7, 0x64, 0x2, 
    0x2, 0x34b, 0x34e, 0x5, 0x86, 0x44, 0x2, 0x34c, 0x34e, 0x5, 0x6e, 0x38, 
    0x2, 0x34d, 0x34b, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x34c, 0x3, 0x2, 0x2, 
    0x2, 0x34e, 0x85, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x352, 0x7, 0x1a, 0x2, 
    0x2, 0x350, 0x352, 0x5, 0x88, 0x45, 0x2, 0x351, 0x34f, 0x3, 0x2, 0x2, 
    0x2, 0x351, 0x350, 0x3, 0x2, 0x2, 0x2, 0x352, 0x355, 0x3, 0x2, 0x2, 
    0x2, 0x353, 0x354, 0x7, 0x5a, 0x2, 0x2, 0x354, 0x356, 0x5, 0x122, 0x92, 
    0x2, 0x355, 0x353, 0x3, 0x2, 0x2, 0x2, 0x355, 0x356, 0x3, 0x2, 0x2, 
    0x2, 0x356, 0x357, 0x3, 0x2, 0x2, 0x2, 0x357, 0x358, 0x7, 0x5b, 0x2, 
    0x2, 0x358, 0x359, 0x7, 0x7f, 0x2, 0x2, 0x359, 0x35a, 0x5, 0x12e, 0x98, 
    0x2, 0x35a, 0x87, 0x3, 0x2, 0x2, 0x2, 0x35b, 0x35c, 0x5, 0x122, 0x92, 
    0x2, 0x35c, 0x35d, 0x7, 0xe, 0x2, 0x2, 0x35d, 0x35f, 0x3, 0x2, 0x2, 
    0x2, 0x35e, 0x35b, 0x3, 0x2, 0x2, 0x2, 0x35e, 0x35f, 0x3, 0x2, 0x2, 
    0x2, 0x35f, 0x360, 0x3, 0x2, 0x2, 0x2, 0x360, 0x361, 0x7, 0xa, 0x2, 
    0x2, 0x361, 0x366, 0x5, 0x122, 0x92, 0x2, 0x362, 0x363, 0x7, 0xe, 0x2, 
    0x2, 0x363, 0x365, 0x5, 0x122, 0x92, 0x2, 0x364, 0x362, 0x3, 0x2, 0x2, 
    0x2, 0x365, 0x368, 0x3, 0x2, 0x2, 0x2, 0x366, 0x364, 0x3, 0x2, 0x2, 
    0x2, 0x366, 0x367, 0x3, 0x2, 0x2, 0x2, 0x367, 0x369, 0x3, 0x2, 0x2, 
    0x2, 0x368, 0x366, 0x3, 0x2, 0x2, 0x2, 0x369, 0x36a, 0x7, 0xc, 0x2, 
    0x2, 0x36a, 0x89, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x36d, 0x7, 0x63, 0x2, 
    0x2, 0x36c, 0x36e, 0x7, 0x54, 0x2, 0x2, 0x36d, 0x36c, 0x3, 0x2, 0x2, 
    0x2, 0x36d, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x371, 0x3, 0x2, 0x2, 
    0x2, 0x36f, 0x372, 0x5, 0x86, 0x44, 0x2, 0x370, 0x372, 0x5, 0x7c, 0x3f, 
    0x2, 0x371, 0x36f, 0x3, 0x2, 0x2, 0x2, 0x371, 0x370, 0x3, 0x2, 0x2, 
    0x2, 0x372, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x373, 0x374, 0x5, 0xa2, 0x52, 
    0x2, 0x374, 0x375, 0x5, 0x90, 0x49, 0x2, 0x375, 0x8d, 0x3, 0x2, 0x2, 
    0x2, 0x376, 0x395, 0x5, 0x8c, 0x47, 0x2, 0x377, 0x379, 0x5, 0x4, 0x3, 
    0x2, 0x378, 0x37a, 0x5, 0x3e, 0x20, 0x2, 0x379, 0x378, 0x3, 0x2, 0x2, 
    0x2, 0x379, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x37a, 0x37b, 0x3, 0x2, 0x2, 
    0x2, 0x37b, 0x37d, 0x5, 0x2, 0x2, 0x2, 0x37c, 0x37e, 0x7, 0xd, 0x2, 
    0x2, 0x37d, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x37e, 0x3, 0x2, 0x2, 
    0x2, 0x37e, 0x395, 0x3, 0x2, 0x2, 0x2, 0x37f, 0x381, 0x5, 0x4e, 0x28, 
    0x2, 0x380, 0x37f, 0x3, 0x2, 0x2, 0x2, 0x380, 0x381, 0x3, 0x2, 0x2, 
    0x2, 0x381, 0x383, 0x3, 0x2, 0x2, 0x2, 0x382, 0x384, 0x5, 0xa2, 0x52, 
    0x2, 0x383, 0x382, 0x3, 0x2, 0x2, 0x2, 0x383, 0x384, 0x3, 0x2, 0x2, 
    0x2, 0x384, 0x386, 0x3, 0x2, 0x2, 0x2, 0x385, 0x387, 0x7, 0x5c, 0x2, 
    0x2, 0x386, 0x385, 0x3, 0x2, 0x2, 0x2, 0x386, 0x387, 0x3, 0x2, 0x2, 
    0x2, 0x387, 0x388, 0x3, 0x2, 0x2, 0x2, 0x388, 0x38a, 0x5, 0x90, 0x49, 
    0x2, 0x389, 0x38b, 0x7, 0xd, 0x2, 0x2, 0x38a, 0x389, 0x3, 0x2, 0x2, 
    0x2, 0x38a, 0x38b, 0x3, 0x2, 0x2, 0x2, 0x38b, 0x395, 0x3, 0x2, 0x2, 
    0x2, 0x38c, 0x38e, 0x7, 0x7a, 0x2, 0x2, 0x38d, 0x38f, 0x5, 0xa2, 0x52, 
    0x2, 0x38e, 0x38d, 0x3, 0x2, 0x2, 0x2, 0x38e, 0x38f, 0x3, 0x2, 0x2, 
    0x2, 0x38f, 0x390, 0x3, 0x2, 0x2, 0x2, 0x390, 0x392, 0x5, 0x90, 0x49, 
    0x2, 0x391, 0x393, 0x7, 0xd, 0x2, 0x2, 0x392, 0x391, 0x3, 0x2, 0x2, 
    0x2, 0x392, 0x393, 0x3, 0x2, 0x2, 0x2, 0x393, 0x395, 0x3, 0x2, 0x2, 
    0x2, 0x394, 0x376, 0x3, 0x2, 0x2, 0x2, 0x394, 0x377, 0x3, 0x2, 0x2, 
    0x2, 0x394, 0x380, 0x3, 0x2, 0x2, 0x2, 0x394, 0x38c, 0x3, 0x2, 0x2, 
    0x2, 0x395, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x396, 0x39b, 0x5, 0x98, 0x4d, 
    0x2, 0x397, 0x398, 0x7, 0xe, 0x2, 0x2, 0x398, 0x39a, 0x5, 0x98, 0x4d, 
    0x2, 0x399, 0x397, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x39d, 0x3, 0x2, 0x2, 
    0x2, 0x39b, 0x399, 0x3, 0x2, 0x2, 0x2, 0x39b, 0x39c, 0x3, 0x2, 0x2, 
    0x2, 0x39c, 0x91, 0x3, 0x2, 0x2, 0x2, 0x39d, 0x39b, 0x3, 0x2, 0x2, 0x2, 
    0x39e, 0x3a2, 0x5, 0x124, 0x93, 0x2, 0x39f, 0x3a2, 0x5, 0xee, 0x78, 
    0x2, 0x3a0, 0x3a2, 0x5, 0xf4, 0x7b, 0x2, 0x3a1, 0x39e, 0x3, 0x2, 0x2, 
    0x2, 0x3a1, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x3a1, 0x3a0, 0x3, 0x2, 0x2, 
    0x2, 0x3a2, 0x93, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a6, 0x7, 0x11, 0x2, 
    0x2, 0x3a4, 0x3a7, 0x5, 0x14, 0xb, 0x2, 0x3a5, 0x3a7, 0x5, 0x10c, 0x87, 
    0x2, 0x3a6, 0x3a4, 0x3, 0x2, 0x2, 0x2, 0x3a6, 0x3a5, 0x3, 0x2, 0x2, 
    0x2, 0x3a7, 0x95, 0x3, 0x2, 0x2, 0x2, 0x3a8, 0x3aa, 0x5, 0x6, 0x4, 0x2, 
    0x3a9, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3aa, 0x3, 0x2, 0x2, 0x2, 
    0x3aa, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3ab, 0x3ac, 0x5, 0x10c, 0x87, 0x2, 
    0x3ac, 0x97, 0x3, 0x2, 0x2, 0x2, 0x3ad, 0x3af, 0x5, 0x92, 0x4a, 0x2, 
    0x3ae, 0x3b0, 0x5, 0x94, 0x4b, 0x2, 0x3af, 0x3ae, 0x3, 0x2, 0x2, 0x2, 
    0x3af, 0x3b0, 0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3b3, 0x3, 0x2, 0x2, 0x2, 
    0x3b1, 0x3b2, 0x7, 0xf, 0x2, 0x2, 0x3b2, 0x3b4, 0x5, 0x96, 0x4c, 0x2, 
    0x3b3, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3b4, 0x3, 0x2, 0x2, 0x2, 
    0x3b4, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b6, 0x8, 0x4d, 0x1, 0x2, 
    0x3b6, 0x99, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3b8, 0x7, 0xd, 0x2, 0x2, 0x3b8, 
    0x9b, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3ba, 0x6, 0x4f, 0x8, 0x2, 0x3ba, 
    0x3bc, 0x5, 0x104, 0x83, 0x2, 0x3bb, 0x3bd, 0x7, 0xd, 0x2, 0x2, 0x3bc, 
    0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3bd, 0x3, 0x2, 0x2, 0x2, 0x3bd, 
    0x9d, 0x3, 0x2, 0x2, 0x2, 0x3be, 0x3bf, 0x7, 0x55, 0x2, 0x2, 0x3bf, 
    0x3c0, 0x7, 0x8, 0x2, 0x2, 0x3c0, 0x3c1, 0x5, 0x104, 0x83, 0x2, 0x3c1, 
    0x3c2, 0x7, 0x9, 0x2, 0x2, 0x3c2, 0x3c5, 0x5, 0x7c, 0x3f, 0x2, 0x3c3, 
    0x3c4, 0x7, 0x45, 0x2, 0x2, 0x3c4, 0x3c6, 0x5, 0x7c, 0x3f, 0x2, 0x3c5, 
    0x3c3, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3c6, 0x3, 0x2, 0x2, 0x2, 0x3c6, 
    0x9f, 0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3c8, 0x7, 0x41, 0x2, 0x2, 0x3c8, 
    0x3c9, 0x5, 0x7c, 0x3f, 0x2, 0x3c9, 0x3ca, 0x7, 0x4f, 0x2, 0x2, 0x3ca, 
    0x3cb, 0x7, 0x8, 0x2, 0x2, 0x3cb, 0x3cc, 0x5, 0x104, 0x83, 0x2, 0x3cc, 
    0x3cd, 0x7, 0x9, 0x2, 0x2, 0x3cd, 0x3ce, 0x5, 0x12e, 0x98, 0x2, 0x3ce, 
    0x40d, 0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3d0, 0x7, 0x4f, 0x2, 0x2, 0x3d0, 
    0x3d1, 0x7, 0x8, 0x2, 0x2, 0x3d1, 0x3d2, 0x5, 0x104, 0x83, 0x2, 0x3d2, 
    0x3d3, 0x7, 0x9, 0x2, 0x2, 0x3d3, 0x3d4, 0x5, 0x7c, 0x3f, 0x2, 0x3d4, 
    0x40d, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d6, 0x7, 0x4d, 0x2, 0x2, 0x3d6, 
    0x3d8, 0x7, 0x8, 0x2, 0x2, 0x3d7, 0x3d9, 0x5, 0x104, 0x83, 0x2, 0x3d8, 
    0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3d8, 0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3d9, 
    0x3da, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3dc, 0x7, 0xd, 0x2, 0x2, 0x3db, 
    0x3dd, 0x5, 0x104, 0x83, 0x2, 0x3dc, 0x3db, 0x3, 0x2, 0x2, 0x2, 0x3dc, 
    0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3dd, 0x3de, 0x3, 0x2, 0x2, 0x2, 0x3de, 
    0x3e0, 0x7, 0xd, 0x2, 0x2, 0x3df, 0x3e1, 0x5, 0x104, 0x83, 0x2, 0x3e0, 
    0x3df, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3e1, 
    0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e3, 0x7, 0x9, 0x2, 0x2, 0x3e3, 
    0x40d, 0x5, 0x7c, 0x3f, 0x2, 0x3e4, 0x3e5, 0x7, 0x4d, 0x2, 0x2, 0x3e5, 
    0x3e6, 0x7, 0x8, 0x2, 0x2, 0x3e6, 0x3e7, 0x5, 0xa2, 0x52, 0x2, 0x3e7, 
    0x3e8, 0x5, 0x90, 0x49, 0x2, 0x3e8, 0x3ea, 0x7, 0xd, 0x2, 0x2, 0x3e9, 
    0x3eb, 0x5, 0x104, 0x83, 0x2, 0x3ea, 0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3ea, 
    0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3eb, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0x3ec, 
    0x3ee, 0x7, 0xd, 0x2, 0x2, 0x3ed, 0x3ef, 0x5, 0x104, 0x83, 0x2, 0x3ee, 
    0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3ee, 0x3ef, 0x3, 0x2, 0x2, 0x2, 0x3ef, 
    0x3f0, 0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3f1, 0x7, 0x9, 0x2, 0x2, 0x3f1, 
    0x3f2, 0x5, 0x7c, 0x3f, 0x2, 0x3f2, 0x40d, 0x3, 0x2, 0x2, 0x2, 0x3f3, 
    0x3f4, 0x7, 0x4d, 0x2, 0x2, 0x3f4, 0x3f5, 0x7, 0x8, 0x2, 0x2, 0x3f5, 
    0x3f9, 0x5, 0x10c, 0x87, 0x2, 0x3f6, 0x3fa, 0x7, 0x58, 0x2, 0x2, 0x3f7, 
    0x3f8, 0x7, 0x7e, 0x2, 0x2, 0x3f8, 0x3fa, 0x6, 0x51, 0x9, 0x2, 0x3f9, 
    0x3f6, 0x3, 0x2, 0x2, 0x2, 0x3f9, 0x3f7, 0x3, 0x2, 0x2, 0x2, 0x3fa, 
    0x3fb, 0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fc, 0x5, 0x104, 0x83, 0x2, 0x3fc, 
    0x3fd, 0x7, 0x9, 0x2, 0x2, 0x3fd, 0x3fe, 0x5, 0x7c, 0x3f, 0x2, 0x3fe, 
    0x40d, 0x3, 0x2, 0x2, 0x2, 0x3ff, 0x400, 0x7, 0x4d, 0x2, 0x2, 0x400, 
    0x401, 0x7, 0x8, 0x2, 0x2, 0x401, 0x402, 0x5, 0xa2, 0x52, 0x2, 0x402, 
    0x406, 0x5, 0x98, 0x4d, 0x2, 0x403, 0x407, 0x7, 0x58, 0x2, 0x2, 0x404, 
    0x405, 0x7, 0x7e, 0x2, 0x2, 0x405, 0x407, 0x6, 0x51, 0xa, 0x2, 0x406, 
    0x403, 0x3, 0x2, 0x2, 0x2, 0x406, 0x404, 0x3, 0x2, 0x2, 0x2, 0x407, 
    0x408, 0x3, 0x2, 0x2, 0x2, 0x408, 0x409, 0x5, 0x104, 0x83, 0x2, 0x409, 
    0x40a, 0x7, 0x9, 0x2, 0x2, 0x40a, 0x40b, 0x5, 0x7c, 0x3f, 0x2, 0x40b, 
    0x40d, 0x3, 0x2, 0x2, 0x2, 0x40c, 0x3c7, 0x3, 0x2, 0x2, 0x2, 0x40c, 
    0x3cf, 0x3, 0x2, 0x2, 0x2, 0x40c, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x40c, 
    0x3e4, 0x3, 0x2, 0x2, 0x2, 0x40c, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0x40c, 
    0x3ff, 0x3, 0x2, 0x2, 0x2, 0x40d, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x40e, 0x40f, 
    0x9, 0x5, 0x2, 0x2, 0x40f, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x410, 0x413, 0x7, 
    0x4c, 0x2, 0x2, 0x411, 0x412, 0x6, 0x53, 0xb, 0x2, 0x412, 0x414, 0x7, 
    0x7e, 0x2, 0x2, 0x413, 0x411, 0x3, 0x2, 0x2, 0x2, 0x413, 0x414, 0x3, 
    0x2, 0x2, 0x2, 0x414, 0x415, 0x3, 0x2, 0x2, 0x2, 0x415, 0x416, 0x5, 
    0x12e, 0x98, 0x2, 0x416, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x417, 0x41a, 0x7, 
    0x40, 0x2, 0x2, 0x418, 0x419, 0x6, 0x54, 0xc, 0x2, 0x419, 0x41b, 0x7, 
    0x7e, 0x2, 0x2, 0x41a, 0x418, 0x3, 0x2, 0x2, 0x2, 0x41a, 0x41b, 0x3, 
    0x2, 0x2, 0x2, 0x41b, 0x41c, 0x3, 0x2, 0x2, 0x2, 0x41c, 0x41d, 0x5, 
    0x12e, 0x98, 0x2, 0x41d, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x41e, 0x421, 0x7, 
    0x4a, 0x2, 0x2, 0x41f, 0x420, 0x6, 0x55, 0xd, 0x2, 0x420, 0x422, 0x5, 
    0x104, 0x83, 0x2, 0x421, 0x41f, 0x3, 0x2, 0x2, 0x2, 0x421, 0x422, 0x3, 
    0x2, 0x2, 0x2, 0x422, 0x423, 0x3, 0x2, 0x2, 0x2, 0x423, 0x424, 0x5, 
    0x12e, 0x98, 0x2, 0x424, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x425, 0x428, 0x7, 
    0x6d, 0x2, 0x2, 0x426, 0x427, 0x6, 0x56, 0xe, 0x2, 0x427, 0x429, 0x5, 
    0x104, 0x83, 0x2, 0x428, 0x426, 0x3, 0x2, 0x2, 0x2, 0x428, 0x429, 0x3, 
    0x2, 0x2, 0x2, 0x429, 0x42a, 0x3, 0x2, 0x2, 0x2, 0x42a, 0x42b, 0x5, 
    0x12e, 0x98, 0x2, 0x42b, 0xab, 0x3, 0x2, 0x2, 0x2, 0x42c, 0x42d, 0x7, 
    0x53, 0x2, 0x2, 0x42d, 0x42e, 0x7, 0x8, 0x2, 0x2, 0x42e, 0x42f, 0x5, 
    0x104, 0x83, 0x2, 0x42f, 0x430, 0x7, 0x9, 0x2, 0x2, 0x430, 0x431, 0x5, 
    0x7c, 0x3f, 0x2, 0x431, 0xad, 0x3, 0x2, 0x2, 0x2, 0x432, 0x433, 0x7, 
    0x4e, 0x2, 0x2, 0x433, 0x434, 0x7, 0x8, 0x2, 0x2, 0x434, 0x435, 0x5, 
    0x104, 0x83, 0x2, 0x435, 0x436, 0x7, 0x9, 0x2, 0x2, 0x436, 0x437, 0x5, 
    0xb0, 0x59, 0x2, 0x437, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x438, 0x43a, 0x7, 
    0xa, 0x2, 0x2, 0x439, 0x43b, 0x5, 0xb2, 0x5a, 0x2, 0x43a, 0x439, 0x3, 
    0x2, 0x2, 0x2, 0x43a, 0x43b, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x440, 0x3, 
    0x2, 0x2, 0x2, 0x43c, 0x43e, 0x5, 0xb6, 0x5c, 0x2, 0x43d, 0x43f, 0x5, 
    0xb2, 0x5a, 0x2, 0x43e, 0x43d, 0x3, 0x2, 0x2, 0x2, 0x43e, 0x43f, 0x3, 
    0x2, 0x2, 0x2, 0x43f, 0x441, 0x3, 0x2, 0x2, 0x2, 0x440, 0x43c, 0x3, 
    0x2, 0x2, 0x2, 0x440, 0x441, 0x3, 0x2, 0x2, 0x2, 0x441, 0x442, 0x3, 
    0x2, 0x2, 0x2, 0x442, 0x443, 0x7, 0xc, 0x2, 0x2, 0x443, 0xb1, 0x3, 0x2, 
    0x2, 0x2, 0x444, 0x446, 0x5, 0xb4, 0x5b, 0x2, 0x445, 0x444, 0x3, 0x2, 
    0x2, 0x2, 0x446, 0x447, 0x3, 0x2, 0x2, 0x2, 0x447, 0x445, 0x3, 0x2, 
    0x2, 0x2, 0x447, 0x448, 0x3, 0x2, 0x2, 0x2, 0x448, 0xb3, 0x3, 0x2, 0x2, 
    0x2, 0x449, 0x44a, 0x7, 0x44, 0x2, 0x2, 0x44a, 0x44b, 0x5, 0x104, 0x83, 
    0x2, 0x44b, 0x44d, 0x7, 0x11, 0x2, 0x2, 0x44c, 0x44e, 0x5, 0x80, 0x41, 
    0x2, 0x44d, 0x44c, 0x3, 0x2, 0x2, 0x2, 0x44d, 0x44e, 0x3, 0x2, 0x2, 
    0x2, 0x44e, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x44f, 0x450, 0x7, 0x54, 0x2, 
    0x2, 0x450, 0x452, 0x7, 0x11, 0x2, 0x2, 0x451, 0x453, 0x5, 0x80, 0x41, 
    0x2, 0x452, 0x451, 0x3, 0x2, 0x2, 0x2, 0x452, 0x453, 0x3, 0x2, 0x2, 
    0x2, 0x453, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x454, 0x455, 0x7, 0x7e, 0x2, 
    0x2, 0x455, 0x456, 0x7, 0x11, 0x2, 0x2, 0x456, 0x457, 0x5, 0x7c, 0x3f, 
    0x2, 0x457, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x458, 0x459, 0x7, 0x56, 0x2, 
    0x2, 0x459, 0x45a, 0x6, 0x5e, 0xf, 0x2, 0x45a, 0x45b, 0x5, 0x104, 0x83, 
    0x2, 0x45b, 0x45c, 0x5, 0x12e, 0x98, 0x2, 0x45c, 0xbb, 0x3, 0x2, 0x2, 
    0x2, 0x45d, 0x45e, 0x7, 0x59, 0x2, 0x2, 0x45e, 0x464, 0x5, 0x7e, 0x40, 
    0x2, 0x45f, 0x461, 0x5, 0xbe, 0x60, 0x2, 0x460, 0x462, 0x5, 0xc0, 0x61, 
    0x2, 0x461, 0x460, 0x3, 0x2, 0x2, 0x2, 0x461, 0x462, 0x3, 0x2, 0x2, 
    0x2, 0x462, 0x465, 0x3, 0x2, 0x2, 0x2, 0x463, 0x465, 0x5, 0xc0, 0x61, 
    0x2, 0x464, 0x45f, 0x3, 0x2, 0x2, 0x2, 0x464, 0x463, 0x3, 0x2, 0x2, 
    0x2, 0x465, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x466, 0x467, 0x7, 0x48, 0x2, 
    0x2, 0x467, 0x468, 0x7, 0x8, 0x2, 0x2, 0x468, 0x469, 0x7, 0x7e, 0x2, 
    0x2, 0x469, 0x46a, 0x7, 0x9, 0x2, 0x2, 0x46a, 0x46b, 0x5, 0x7e, 0x40, 
    0x2, 0x46b, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x46c, 0x46d, 0x7, 0x49, 0x2, 
    0x2, 0x46d, 0x46e, 0x5, 0x7e, 0x40, 0x2, 0x46e, 0xc1, 0x3, 0x2, 0x2, 
    0x2, 0x46f, 0x470, 0x7, 0x50, 0x2, 0x2, 0x470, 0x471, 0x5, 0x12e, 0x98, 
    0x2, 0x471, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x472, 0x473, 0x7, 0x51, 0x2, 
    0x2, 0x473, 0x474, 0x7, 0x7e, 0x2, 0x2, 0x474, 0x47a, 0x5, 0x40, 0x21, 
    0x2, 0x475, 0x476, 0x7, 0xa, 0x2, 0x2, 0x476, 0x477, 0x5, 0xea, 0x76, 
    0x2, 0x477, 0x478, 0x7, 0xc, 0x2, 0x2, 0x478, 0x47b, 0x3, 0x2, 0x2, 
    0x2, 0x479, 0x47b, 0x7, 0xd, 0x2, 0x2, 0x47a, 0x475, 0x3, 0x2, 0x2, 
    0x2, 0x47a, 0x479, 0x3, 0x2, 0x2, 0x2, 0x47b, 0x47c, 0x3, 0x2, 0x2, 
    0x2, 0x47c, 0x47d, 0x8, 0x63, 0x1, 0x2, 0x47d, 0xc5, 0x3, 0x2, 0x2, 
    0x2, 0x47e, 0x480, 0x7, 0x7b, 0x2, 0x2, 0x47f, 0x47e, 0x3, 0x2, 0x2, 
    0x2, 0x47f, 0x480, 0x3, 0x2, 0x2, 0x2, 0x480, 0x481, 0x3, 0x2, 0x2, 
    0x2, 0x481, 0x482, 0x7, 0x5e, 0x2, 0x2, 0x482, 0x484, 0x7, 0x7e, 0x2, 
    0x2, 0x483, 0x485, 0x5, 0x6, 0x4, 0x2, 0x484, 0x483, 0x3, 0x2, 0x2, 
    0x2, 0x484, 0x485, 0x3, 0x2, 0x2, 0x2, 0x485, 0x486, 0x3, 0x2, 0x2, 
    0x2, 0x486, 0x487, 0x5, 0xc8, 0x65, 0x2, 0x487, 0x488, 0x5, 0xca, 0x66, 
    0x2, 0x488, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x489, 0x48b, 0x5, 0xcc, 0x67, 
    0x2, 0x48a, 0x489, 0x3, 0x2, 0x2, 0x2, 0x48a, 0x48b, 0x3, 0x2, 0x2, 
    0x2, 0x48b, 0x48d, 0x3, 0x2, 0x2, 0x2, 0x48c, 0x48e, 0x5, 0xce, 0x68, 
    0x2, 0x48d, 0x48c, 0x3, 0x2, 0x2, 0x2, 0x48d, 0x48e, 0x3, 0x2, 0x2, 
    0x2, 0x48e, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x493, 0x7, 0xa, 0x2, 0x2, 
    0x490, 0x492, 0x5, 0xd0, 0x69, 0x2, 0x491, 0x490, 0x3, 0x2, 0x2, 0x2, 
    0x492, 0x495, 0x3, 0x2, 0x2, 0x2, 0x493, 0x491, 0x3, 0x2, 0x2, 0x2, 
    0x493, 0x494, 0x3, 0x2, 0x2, 0x2, 0x494, 0x496, 0x3, 0x2, 0x2, 0x2, 
    0x495, 0x493, 0x3, 0x2, 0x2, 0x2, 0x496, 0x497, 0x7, 0xc, 0x2, 0x2, 
    0x497, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x498, 0x499, 0x7, 0x60, 0x2, 0x2, 
    0x499, 0x49a, 0x5, 0x1c, 0xf, 0x2, 0x49a, 0xcd, 0x3, 0x2, 0x2, 0x2, 
    0x49b, 0x49c, 0x7, 0x65, 0x2, 0x2, 0x49c, 0x49d, 0x5, 0x60, 0x31, 0x2, 
    0x49d, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x49e, 0x4a6, 0x5, 0x5a, 0x2e, 0x2, 
    0x49f, 0x4a1, 0x5, 0x70, 0x39, 0x2, 0x4a0, 0x49f, 0x3, 0x2, 0x2, 0x2, 
    0x4a0, 0x4a1, 0x3, 0x2, 0x2, 0x2, 0x4a1, 0x4a2, 0x3, 0x2, 0x2, 0x2, 
    0x4a2, 0x4a6, 0x5, 0xd2, 0x6a, 0x2, 0x4a3, 0x4a6, 0x5, 0xd6, 0x6c, 0x2, 
    0x4a4, 0x4a6, 0x5, 0x7c, 0x3f, 0x2, 0x4a5, 0x49e, 0x3, 0x2, 0x2, 0x2, 
    0x4a5, 0x4a0, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x4a3, 0x3, 0x2, 0x2, 0x2, 
    0x4a5, 0x4a4, 0x3, 0x2, 0x2, 0x2, 0x4a6, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x4a7, 
    0x4a8, 0x5, 0xd4, 0x6b, 0x2, 0x4a8, 0x4aa, 0x5, 0xfc, 0x7f, 0x2, 0x4a9, 
    0x4ab, 0x7, 0x10, 0x2, 0x2, 0x4aa, 0x4a9, 0x3, 0x2, 0x2, 0x2, 0x4aa, 
    0x4ab, 0x3, 0x2, 0x2, 0x2, 0x4ab, 0x4ad, 0x3, 0x2, 0x2, 0x2, 0x4ac, 
    0x4ae, 0x5, 0x3e, 0x20, 0x2, 0x4ad, 0x4ac, 0x3, 0x2, 0x2, 0x2, 0x4ad, 
    0x4ae, 0x3, 0x2, 0x2, 0x2, 0x4ae, 0x4b0, 0x3, 0x2, 0x2, 0x2, 0x4af, 
    0x4b1, 0x5, 0x10c, 0x87, 0x2, 0x4b0, 0x4af, 0x3, 0x2, 0x2, 0x2, 0x4b0, 
    0x4b1, 0x3, 0x2, 0x2, 0x2, 0x4b1, 0x4b2, 0x3, 0x2, 0x2, 0x2, 0x4b2, 
    0x4b3, 0x7, 0xd, 0x2, 0x2, 0x4b3, 0x4b4, 0x8, 0x6a, 0x1, 0x2, 0x4b4, 
    0x4c6, 0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4b6, 0x5, 0xd4, 0x6b, 0x2, 0x4b6, 
    0x4b7, 0x5, 0xfc, 0x7f, 0x2, 0x4b7, 0x4bd, 0x5, 0x40, 0x21, 0x2, 0x4b8, 
    0x4b9, 0x7, 0xa, 0x2, 0x2, 0x4b9, 0x4ba, 0x5, 0xea, 0x76, 0x2, 0x4ba, 
    0x4bb, 0x7, 0xc, 0x2, 0x2, 0x4bb, 0x4be, 0x3, 0x2, 0x2, 0x2, 0x4bc, 
    0x4be, 0x7, 0xd, 0x2, 0x2, 0x4bd, 0x4b8, 0x3, 0x2, 0x2, 0x2, 0x4bd, 
    0x4bc, 0x3, 0x2, 0x2, 0x2, 0x4be, 0x4c6, 0x3, 0x2, 0x2, 0x2, 0x4bf, 
    0x4c2, 0x5, 0xd4, 0x6b, 0x2, 0x4c0, 0x4c3, 0x5, 0xf8, 0x7d, 0x2, 0x4c1, 
    0x4c3, 0x5, 0xfa, 0x7e, 0x2, 0x4c2, 0x4c0, 0x3, 0x2, 0x2, 0x2, 0x4c2, 
    0x4c1, 0x3, 0x2, 0x2, 0x2, 0x4c3, 0x4c6, 0x3, 0x2, 0x2, 0x2, 0x4c4, 
    0x4c6, 0x5, 0x82, 0x42, 0x2, 0x4c5, 0x4a7, 0x3, 0x2, 0x2, 0x2, 0x4c5, 
    0x4b5, 0x3, 0x2, 0x2, 0x2, 0x4c5, 0x4bf, 0x3, 0x2, 0x2, 0x2, 0x4c5, 
    0x4c4, 0x3, 0x2, 0x2, 0x2, 0x4c6, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x4c7, 0x4c9, 
    0x7, 0x5d, 0x2, 0x2, 0x4c8, 0x4c7, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4c9, 
    0x3, 0x2, 0x2, 0x2, 0x4c9, 0x4cb, 0x3, 0x2, 0x2, 0x2, 0x4ca, 0x4cc, 
    0x5, 0x4e, 0x28, 0x2, 0x4cb, 0x4ca, 0x3, 0x2, 0x2, 0x2, 0x4cb, 0x4cc, 
    0x3, 0x2, 0x2, 0x2, 0x4cc, 0x4ce, 0x3, 0x2, 0x2, 0x2, 0x4cd, 0x4cf, 
    0x7, 0x6c, 0x2, 0x2, 0x4ce, 0x4cd, 0x3, 0x2, 0x2, 0x2, 0x4ce, 0x4cf, 
    0x3, 0x2, 0x2, 0x2, 0x4cf, 0x4d1, 0x3, 0x2, 0x2, 0x2, 0x4d0, 0x4d2, 
    0x7, 0x5c, 0x2, 0x2, 0x4d1, 0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4d1, 0x4d2, 
    0x3, 0x2, 0x2, 0x2, 0x4d2, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x4d3, 0x4d4, 0x5, 
    0x54, 0x2b, 0x2, 0x4d4, 0x4d5, 0x7, 0xd, 0x2, 0x2, 0x4d5, 0xd7, 0x3, 
    0x2, 0x2, 0x2, 0x4d6, 0x4d8, 0x7, 0x1a, 0x2, 0x2, 0x4d7, 0x4d6, 0x3, 
    0x2, 0x2, 0x2, 0x4d7, 0x4d8, 0x3, 0x2, 0x2, 0x2, 0x4d8, 0x4d9, 0x3, 
    0x2, 0x2, 0x2, 0x4d9, 0x4da, 0x7, 0x7e, 0x2, 0x2, 0x4da, 0x4dc, 0x7, 
    0x8, 0x2, 0x2, 0x4db, 0x4dd, 0x5, 0xe4, 0x73, 0x2, 0x4dc, 0x4db, 0x3, 
    0x2, 0x2, 0x2, 0x4dc, 0x4dd, 0x3, 0x2, 0x2, 0x2, 0x4dd, 0x4de, 0x3, 
    0x2, 0x2, 0x2, 0x4de, 0x4df, 0x7, 0x9, 0x2, 0x2, 0x4df, 0x4e0, 0x7, 
    0xa, 0x2, 0x2, 0x4e0, 0x4e1, 0x5, 0xea, 0x76, 0x2, 0x4e1, 0x4e2, 0x7, 
    0xc, 0x2, 0x2, 0x4e2, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x4e3, 0x4e4, 0x7, 0x51, 
    0x2, 0x2, 0x4e4, 0x4e6, 0x7, 0x1a, 0x2, 0x2, 0x4e5, 0x4e7, 0x7, 0x7e, 
    0x2, 0x2, 0x4e6, 0x4e5, 0x3, 0x2, 0x2, 0x2, 0x4e6, 0x4e7, 0x3, 0x2, 
    0x2, 0x2, 0x4e7, 0x4e8, 0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4ea, 0x7, 0x8, 
    0x2, 0x2, 0x4e9, 0x4eb, 0x5, 0xe4, 0x73, 0x2, 0x4ea, 0x4e9, 0x3, 0x2, 
    0x2, 0x2, 0x4ea, 0x4eb, 0x3, 0x2, 0x2, 0x2, 0x4eb, 0x4ec, 0x3, 0x2, 
    0x2, 0x2, 0x4ec, 0x4ed, 0x7, 0x9, 0x2, 0x2, 0x4ed, 0x4ee, 0x7, 0xa, 
    0x2, 0x2, 0x4ee, 0x4ef, 0x5, 0xea, 0x76, 0x2, 0x4ef, 0x4f0, 0x7, 0xc, 
    0x2, 0x2, 0x4f0, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x4f1, 0x4f2, 0x7, 0xa, 0x2, 
    0x2, 0x4f2, 0x4f7, 0x5, 0xde, 0x70, 0x2, 0x4f3, 0x4f4, 0x7, 0xe, 0x2, 
    0x2, 0x4f4, 0x4f6, 0x5, 0xde, 0x70, 0x2, 0x4f5, 0x4f3, 0x3, 0x2, 0x2, 
    0x2, 0x4f6, 0x4f9, 0x3, 0x2, 0x2, 0x2, 0x4f7, 0x4f5, 0x3, 0x2, 0x2, 
    0x2, 0x4f7, 0x4f8, 0x3, 0x2, 0x2, 0x2, 0x4f8, 0x4fb, 0x3, 0x2, 0x2, 
    0x2, 0x4f9, 0x4f7, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0x4fc, 0x7, 0xe, 0x2, 
    0x2, 0x4fb, 0x4fa, 0x3, 0x2, 0x2, 0x2, 0x4fb, 0x4fc, 0x3, 0x2, 0x2, 
    0x2, 0x4fc, 0x4fd, 0x3, 0x2, 0x2, 0x2, 0x4fd, 0x4fe, 0x7, 0xc, 0x2, 
    0x2, 0x4fe, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x4ff, 0x500, 0x7, 0x1a, 0x2, 
    0x2, 0x500, 0x501, 0x5, 0xe2, 0x72, 0x2, 0x501, 0xdf, 0x3, 0x2, 0x2, 
    0x2, 0x502, 0x503, 0x7, 0xa, 0x2, 0x2, 0x503, 0x508, 0x5, 0xe2, 0x72, 
    0x2, 0x504, 0x505, 0x7, 0xe, 0x2, 0x2, 0x505, 0x507, 0x5, 0xe2, 0x72, 
    0x2, 0x506, 0x504, 0x3, 0x2, 0x2, 0x2, 0x507, 0x50a, 0x3, 0x2, 0x2, 
    0x2, 0x508, 0x506, 0x3, 0x2, 0x2, 0x2, 0x508, 0x509, 0x3, 0x2, 0x2, 
    0x2, 0x509, 0x50c, 0x3, 0x2, 0x2, 0x2, 0x50a, 0x508, 0x3, 0x2, 0x2, 
    0x2, 0x50b, 0x50d, 0x7, 0xe, 0x2, 0x2, 0x50c, 0x50b, 0x3, 0x2, 0x2, 
    0x2, 0x50c, 0x50d, 0x3, 0x2, 0x2, 0x2, 0x50d, 0x50e, 0x3, 0x2, 0x2, 
    0x2, 0x50e, 0x50f, 0x7, 0xc, 0x2, 0x2, 0x50f, 0xe1, 0x3, 0x2, 0x2, 0x2, 
    0x510, 0x511, 0x7, 0x6, 0x2, 0x2, 0x511, 0x512, 0x5, 0x10c, 0x87, 0x2, 
    0x512, 0x513, 0x7, 0x7, 0x2, 0x2, 0x513, 0x515, 0x7, 0x8, 0x2, 0x2, 
    0x514, 0x516, 0x5, 0xe4, 0x73, 0x2, 0x515, 0x514, 0x3, 0x2, 0x2, 0x2, 
    0x515, 0x516, 0x3, 0x2, 0x2, 0x2, 0x516, 0x517, 0x3, 0x2, 0x2, 0x2, 
    0x517, 0x518, 0x7, 0x9, 0x2, 0x2, 0x518, 0x519, 0x7, 0xa, 0x2, 0x2, 
    0x519, 0x51a, 0x5, 0xea, 0x76, 0x2, 0x51a, 0x51b, 0x7, 0xc, 0x2, 0x2, 
    0x51b, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x51c, 0x521, 0x5, 0xe6, 0x74, 0x2, 
    0x51d, 0x51e, 0x7, 0xe, 0x2, 0x2, 0x51e, 0x520, 0x5, 0xe6, 0x74, 0x2, 
    0x51f, 0x51d, 0x3, 0x2, 0x2, 0x2, 0x520, 0x523, 0x3, 0x2, 0x2, 0x2, 
    0x521, 0x51f, 0x3, 0x2, 0x2, 0x2, 0x521, 0x522, 0x3, 0x2, 0x2, 0x2, 
    0x522, 0x526, 0x3, 0x2, 0x2, 0x2, 0x523, 0x521, 0x3, 0x2, 0x2, 0x2, 
    0x524, 0x525, 0x7, 0xe, 0x2, 0x2, 0x525, 0x527, 0x5, 0xe8, 0x75, 0x2, 
    0x526, 0x524, 0x3, 0x2, 0x2, 0x2, 0x526, 0x527, 0x3, 0x2, 0x2, 0x2, 
    0x527, 0x530, 0x3, 0x2, 0x2, 0x2, 0x528, 0x530, 0x5, 0xe8, 0x75, 0x2, 
    0x529, 0x530, 0x5, 0xee, 0x78, 0x2, 0x52a, 0x52d, 0x5, 0xf4, 0x7b, 0x2, 
    0x52b, 0x52c, 0x7, 0x11, 0x2, 0x2, 0x52c, 0x52e, 0x5, 0xe4, 0x73, 0x2, 
    0x52d, 0x52b, 0x3, 0x2, 0x2, 0x2, 0x52d, 0x52e, 0x3, 0x2, 0x2, 0x2, 
    0x52e, 0x530, 0x3, 0x2, 0x2, 0x2, 0x52f, 0x51c, 0x3, 0x2, 0x2, 0x2, 
    0x52f, 0x528, 0x3, 0x2, 0x2, 0x2, 0x52f, 0x529, 0x3, 0x2, 0x2, 0x2, 
    0x52f, 0x52a, 0x3, 0x2, 0x2, 0x2, 0x530, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x531, 
    0x533, 0x5, 0x72, 0x3a, 0x2, 0x532, 0x531, 0x3, 0x2, 0x2, 0x2, 0x532, 
    0x533, 0x3, 0x2, 0x2, 0x2, 0x533, 0x535, 0x3, 0x2, 0x2, 0x2, 0x534, 
    0x536, 0x5, 0x4e, 0x28, 0x2, 0x535, 0x534, 0x3, 0x2, 0x2, 0x2, 0x535, 
    0x536, 0x3, 0x2, 0x2, 0x2, 0x536, 0x537, 0x3, 0x2, 0x2, 0x2, 0x537, 
    0x539, 0x5, 0x124, 0x93, 0x2, 0x538, 0x53a, 0x7, 0x10, 0x2, 0x2, 0x539, 
    0x538, 0x3, 0x2, 0x2, 0x2, 0x539, 0x53a, 0x3, 0x2, 0x2, 0x2, 0x53a, 
    0x53c, 0x3, 0x2, 0x2, 0x2, 0x53b, 0x53d, 0x5, 0x3e, 0x20, 0x2, 0x53c, 
    0x53b, 0x3, 0x2, 0x2, 0x2, 0x53c, 0x53d, 0x3, 0x2, 0x2, 0x2, 0x53d, 
    0x540, 0x3, 0x2, 0x2, 0x2, 0x53e, 0x53f, 0x7, 0xf, 0x2, 0x2, 0x53f, 
    0x541, 0x5, 0x10c, 0x87, 0x2, 0x540, 0x53e, 0x3, 0x2, 0x2, 0x2, 0x540, 
    0x541, 0x3, 0x2, 0x2, 0x2, 0x541, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x542, 0x543, 
    0x7, 0x12, 0x2, 0x2, 0x543, 0x544, 0x7, 0x7e, 0x2, 0x2, 0x544, 0xe9, 
    0x3, 0x2, 0x2, 0x2, 0x545, 0x547, 0x5, 0xec, 0x77, 0x2, 0x546, 0x545, 
    0x3, 0x2, 0x2, 0x2, 0x546, 0x547, 0x3, 0x2, 0x2, 0x2, 0x547, 0xeb, 0x3, 
    0x2, 0x2, 0x2, 0x548, 0x54a, 0x5, 0x7a, 0x3e, 0x2, 0x549, 0x548, 0x3, 
    0x2, 0x2, 0x2, 0x54a, 0x54b, 0x3, 0x2, 0x2, 0x2, 0x54b, 0x549, 0x3, 
    0x2, 0x2, 0x2, 0x54b, 0x54c, 0x3, 0x2, 0x2, 0x2, 0x54c, 0xed, 0x3, 0x2, 
    0x2, 0x2, 0x54d, 0x54f, 0x7, 0x6, 0x2, 0x2, 0x54e, 0x550, 0x5, 0xf0, 
    0x79, 0x2, 0x54f, 0x54e, 0x3, 0x2, 0x2, 0x2, 0x54f, 0x550, 0x3, 0x2, 
    0x2, 0x2, 0x550, 0x551, 0x3, 0x2, 0x2, 0x2, 0x551, 0x552, 0x7, 0x7, 
    0x2, 0x2, 0x552, 0x553, 0x3, 0x2, 0x2, 0x2, 0x553, 0x554, 0x8, 0x78, 
    0x1, 0x2, 0x554, 0xef, 0x3, 0x2, 0x2, 0x2, 0x555, 0x55e, 0x5, 0xf2, 
    0x7a, 0x2, 0x556, 0x558, 0x7, 0xe, 0x2, 0x2, 0x557, 0x556, 0x3, 0x2, 
    0x2, 0x2, 0x558, 0x559, 0x3, 0x2, 0x2, 0x2, 0x559, 0x557, 0x3, 0x2, 
    0x2, 0x2, 0x559, 0x55a, 0x3, 0x2, 0x2, 0x2, 0x55a, 0x55b, 0x3, 0x2, 
    0x2, 0x2, 0x55b, 0x55d, 0x5, 0xf2, 0x7a, 0x2, 0x55c, 0x557, 0x3, 0x2, 
    0x2, 0x2, 0x55d, 0x560, 0x3, 0x2, 0x2, 0x2, 0x55e, 0x55c, 0x3, 0x2, 
    0x2, 0x2, 0x55e, 0x55f, 0x3, 0x2, 0x2, 0x2, 0x55f, 0xf1, 0x3, 0x2, 0x2, 
    0x2, 0x560, 0x55e, 0x3, 0x2, 0x2, 0x2, 0x561, 0x563, 0x7, 0x12, 0x2, 
    0x2, 0x562, 0x561, 0x3, 0x2, 0x2, 0x2, 0x562, 0x563, 0x3, 0x2, 0x2, 
    0x2, 0x563, 0x564, 0x3, 0x2, 0x2, 0x2, 0x564, 0x566, 0x5, 0x10c, 0x87, 
    0x2, 0x565, 0x567, 0x7, 0xe, 0x2, 0x2, 0x566, 0x565, 0x3, 0x2, 0x2, 
    0x2, 0x566, 0x567, 0x3, 0x2, 0x2, 0x2, 0x567, 0xf3, 0x3, 0x2, 0x2, 0x2, 
    0x568, 0x574, 0x7, 0xa, 0x2, 0x2, 0x569, 0x56e, 0x5, 0xf6, 0x7c, 0x2, 
    0x56a, 0x56b, 0x7, 0xe, 0x2, 0x2, 0x56b, 0x56d, 0x5, 0xf6, 0x7c, 0x2, 
    0x56c, 0x56a, 0x3, 0x2, 0x2, 0x2, 0x56d, 0x570, 0x3, 0x2, 0x2, 0x2, 
    0x56e, 0x56c, 0x3, 0x2, 0x2, 0x2, 0x56e, 0x56f, 0x3, 0x2, 0x2, 0x2, 
    0x56f, 0x572, 0x3, 0x2, 0x2, 0x2, 0x570, 0x56e, 0x3, 0x2, 0x2, 0x2, 
    0x571, 0x573, 0x7, 0xe, 0x2, 0x2, 0x572, 0x571, 0x3, 0x2, 0x2, 0x2, 
    0x572, 0x573, 0x3, 0x2, 0x2, 0x2, 0x573, 0x575, 0x3, 0x2, 0x2, 0x2, 
    0x574, 0x569, 0x3, 0x2, 0x2, 0x2, 0x574, 0x575, 0x3, 0x2, 0x2, 0x2, 
    0x575, 0x576, 0x3, 0x2, 0x2, 0x2, 0x576, 0x577, 0x7, 0xc, 0x2, 0x2, 
    0x577, 0x578, 0x8, 0x7b, 0x1, 0x2, 0x578, 0xf5, 0x3, 0x2, 0x2, 0x2, 
    0x579, 0x57a, 0x5, 0xfc, 0x7f, 0x2, 0x57a, 0x57b, 0x9, 0x6, 0x2, 0x2, 
    0x57b, 0x57c, 0x5, 0x10c, 0x87, 0x2, 0x57c, 0x57d, 0x8, 0x7c, 0x1, 0x2, 
    0x57d, 0x595, 0x3, 0x2, 0x2, 0x2, 0x57e, 0x57f, 0x7, 0x6, 0x2, 0x2, 
    0x57f, 0x580, 0x5, 0x10c, 0x87, 0x2, 0x580, 0x581, 0x7, 0x7, 0x2, 0x2, 
    0x581, 0x582, 0x7, 0x11, 0x2, 0x2, 0x582, 0x583, 0x5, 0x10c, 0x87, 0x2, 
    0x583, 0x584, 0x8, 0x7c, 0x1, 0x2, 0x584, 0x595, 0x3, 0x2, 0x2, 0x2, 
    0x585, 0x586, 0x5, 0xf8, 0x7d, 0x2, 0x586, 0x587, 0x8, 0x7c, 0x1, 0x2, 
    0x587, 0x595, 0x3, 0x2, 0x2, 0x2, 0x588, 0x589, 0x5, 0xfa, 0x7e, 0x2, 
    0x589, 0x58a, 0x8, 0x7c, 0x1, 0x2, 0x58a, 0x595, 0x3, 0x2, 0x2, 0x2, 
    0x58b, 0x58c, 0x5, 0xd8, 0x6d, 0x2, 0x58c, 0x58d, 0x8, 0x7c, 0x1, 0x2, 
    0x58d, 0x595, 0x3, 0x2, 0x2, 0x2, 0x58e, 0x58f, 0x5, 0x124, 0x93, 0x2, 
    0x58f, 0x590, 0x8, 0x7c, 0x1, 0x2, 0x590, 0x595, 0x3, 0x2, 0x2, 0x2, 
    0x591, 0x592, 0x5, 0x4a, 0x26, 0x2, 0x592, 0x593, 0x8, 0x7c, 0x1, 0x2, 
    0x593, 0x595, 0x3, 0x2, 0x2, 0x2, 0x594, 0x579, 0x3, 0x2, 0x2, 0x2, 
    0x594, 0x57e, 0x3, 0x2, 0x2, 0x2, 0x594, 0x585, 0x3, 0x2, 0x2, 0x2, 
    0x594, 0x588, 0x3, 0x2, 0x2, 0x2, 0x594, 0x58b, 0x3, 0x2, 0x2, 0x2, 
    0x594, 0x58e, 0x3, 0x2, 0x2, 0x2, 0x594, 0x591, 0x3, 0x2, 0x2, 0x2, 
    0x595, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x596, 0x597, 0x5, 0x12a, 0x96, 0x2, 
    0x597, 0x598, 0x7, 0x8, 0x2, 0x2, 0x598, 0x59a, 0x7, 0x9, 0x2, 0x2, 
    0x599, 0x59b, 0x5, 0x3e, 0x20, 0x2, 0x59a, 0x599, 0x3, 0x2, 0x2, 0x2, 
    0x59a, 0x59b, 0x3, 0x2, 0x2, 0x2, 0x59b, 0x59c, 0x3, 0x2, 0x2, 0x2, 
    0x59c, 0x59d, 0x7, 0xa, 0x2, 0x2, 0x59d, 0x59e, 0x5, 0xea, 0x76, 0x2, 
    0x59e, 0x59f, 0x7, 0xc, 0x2, 0x2, 0x59f, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x5a0, 
    0x5a1, 0x5, 0x12c, 0x97, 0x2, 0x5a1, 0x5a4, 0x7, 0x8, 0x2, 0x2, 0x5a2, 
    0x5a5, 0x7, 0x7e, 0x2, 0x2, 0x5a3, 0x5a5, 0x5, 0x4, 0x3, 0x2, 0x5a4, 
    0x5a2, 0x3, 0x2, 0x2, 0x2, 0x5a4, 0x5a3, 0x3, 0x2, 0x2, 0x2, 0x5a5, 
    0x5a7, 0x3, 0x2, 0x2, 0x2, 0x5a6, 0x5a8, 0x5, 0x3e, 0x20, 0x2, 0x5a7, 
    0x5a6, 0x3, 0x2, 0x2, 0x2, 0x5a7, 0x5a8, 0x3, 0x2, 0x2, 0x2, 0x5a8, 
    0x5a9, 0x3, 0x2, 0x2, 0x2, 0x5a9, 0x5aa, 0x7, 0x9, 0x2, 0x2, 0x5aa, 
    0x5ab, 0x7, 0xa, 0x2, 0x2, 0x5ab, 0x5ac, 0x5, 0xea, 0x76, 0x2, 0x5ac, 
    0x5ad, 0x7, 0xc, 0x2, 0x2, 0x5ad, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x5ae, 0x5b2, 
    0x5, 0x122, 0x92, 0x2, 0x5af, 0x5b2, 0x7, 0x7f, 0x2, 0x2, 0x5b0, 0x5b2, 
    0x5, 0x120, 0x91, 0x2, 0x5b1, 0x5ae, 0x3, 0x2, 0x2, 0x2, 0x5b1, 0x5af, 
    0x3, 0x2, 0x2, 0x2, 0x5b1, 0x5b0, 0x3, 0x2, 0x2, 0x2, 0x5b2, 0xfd, 0x3, 
    0x2, 0x2, 0x2, 0x5b3, 0x5b8, 0x7, 0x8, 0x2, 0x2, 0x5b4, 0x5b6, 0x5, 
    0x100, 0x81, 0x2, 0x5b5, 0x5b7, 0x7, 0xe, 0x2, 0x2, 0x5b6, 0x5b5, 0x3, 
    0x2, 0x2, 0x2, 0x5b6, 0x5b7, 0x3, 0x2, 0x2, 0x2, 0x5b7, 0x5b9, 0x3, 
    0x2, 0x2, 0x2, 0x5b8, 0x5b4, 0x3, 0x2, 0x2, 0x2, 0x5b8, 0x5b9, 0x3, 
    0x2, 0x2, 0x2, 0x5b9, 0x5ba, 0x3, 0x2, 0x2, 0x2, 0x5ba, 0x5bb, 0x7, 
    0x9, 0x2, 0x2, 0x5bb, 0xff, 0x3, 0x2, 0x2, 0x2, 0x5bc, 0x5c1, 0x5, 0x102, 
    0x82, 0x2, 0x5bd, 0x5be, 0x7, 0xe, 0x2, 0x2, 0x5be, 0x5c0, 0x5, 0x102, 
    0x82, 0x2, 0x5bf, 0x5bd, 0x3, 0x2, 0x2, 0x2, 0x5c0, 0x5c3, 0x3, 0x2, 
    0x2, 0x2, 0x5c1, 0x5bf, 0x3, 0x2, 0x2, 0x2, 0x5c1, 0x5c2, 0x3, 0x2, 
    0x2, 0x2, 0x5c2, 0x101, 0x3, 0x2, 0x2, 0x2, 0x5c3, 0x5c1, 0x3, 0x2, 
    0x2, 0x2, 0x5c4, 0x5c6, 0x7, 0x12, 0x2, 0x2, 0x5c5, 0x5c4, 0x3, 0x2, 
    0x2, 0x2, 0x5c5, 0x5c6, 0x3, 0x2, 0x2, 0x2, 0x5c6, 0x5c9, 0x3, 0x2, 
    0x2, 0x2, 0x5c7, 0x5ca, 0x5, 0x10c, 0x87, 0x2, 0x5c8, 0x5ca, 0x7, 0x7e, 
    0x2, 0x2, 0x5c9, 0x5c7, 0x3, 0x2, 0x2, 0x2, 0x5c9, 0x5c8, 0x3, 0x2, 
    0x2, 0x2, 0x5ca, 0x103, 0x3, 0x2, 0x2, 0x2, 0x5cb, 0x5d0, 0x5, 0x10c, 
    0x87, 0x2, 0x5cc, 0x5cd, 0x7, 0xe, 0x2, 0x2, 0x5cd, 0x5cf, 0x5, 0x10c, 
    0x87, 0x2, 0x5ce, 0x5cc, 0x3, 0x2, 0x2, 0x2, 0x5cf, 0x5d2, 0x3, 0x2, 
    0x2, 0x2, 0x5d0, 0x5ce, 0x3, 0x2, 0x2, 0x2, 0x5d0, 0x5d1, 0x3, 0x2, 
    0x2, 0x2, 0x5d1, 0x105, 0x3, 0x2, 0x2, 0x2, 0x5d2, 0x5d0, 0x3, 0x2, 
    0x2, 0x2, 0x5d3, 0x5d5, 0x7, 0x51, 0x2, 0x2, 0x5d4, 0x5d6, 0x7, 0x7e, 
    0x2, 0x2, 0x5d5, 0x5d4, 0x3, 0x2, 0x2, 0x2, 0x5d5, 0x5d6, 0x3, 0x2, 
    0x2, 0x2, 0x5d6, 0x5d7, 0x3, 0x2, 0x2, 0x2, 0x5d7, 0x5d9, 0x7, 0x8, 
    0x2, 0x2, 0x5d8, 0x5da, 0x5, 0xe4, 0x73, 0x2, 0x5d9, 0x5d8, 0x3, 0x2, 
    0x2, 0x2, 0x5d9, 0x5da, 0x3, 0x2, 0x2, 0x2, 0x5da, 0x5db, 0x3, 0x2, 
    0x2, 0x2, 0x5db, 0x5dd, 0x7, 0x9, 0x2, 0x2, 0x5dc, 0x5de, 0x5, 0x3e, 
    0x20, 0x2, 0x5dd, 0x5dc, 0x3, 0x2, 0x2, 0x2, 0x5dd, 0x5de, 0x3, 0x2, 
    0x2, 0x2, 0x5de, 0x5df, 0x3, 0x2, 0x2, 0x2, 0x5df, 0x5e0, 0x7, 0xa, 
    0x2, 0x2, 0x5e0, 0x5e1, 0x5, 0xea, 0x76, 0x2, 0x5e1, 0x5e2, 0x7, 0xc, 
    0x2, 0x2, 0x5e2, 0x5e3, 0x8, 0x84, 0x1, 0x2, 0x5e3, 0x107, 0x3, 0x2, 
    0x2, 0x2, 0x5e4, 0x5e5, 0x9, 0x7, 0x2, 0x2, 0x5e5, 0x109, 0x3, 0x2, 
    0x2, 0x2, 0x5e6, 0x5e7, 0x9, 0x8, 0x2, 0x2, 0x5e7, 0x10b, 0x3, 0x2, 
    0x2, 0x2, 0x5e8, 0x5e9, 0x8, 0x87, 0x1, 0x2, 0x5e9, 0x5ea, 0x5, 0x106, 
    0x84, 0x2, 0x5ea, 0x5eb, 0x8, 0x87, 0x1, 0x2, 0x5eb, 0x64b, 0x3, 0x2, 
    0x2, 0x2, 0x5ec, 0x64b, 0x5, 0x112, 0x8a, 0x2, 0x5ed, 0x5ef, 0x7, 0x5e, 
    0x2, 0x2, 0x5ee, 0x5f0, 0x7, 0x7e, 0x2, 0x2, 0x5ef, 0x5ee, 0x3, 0x2, 
    0x2, 0x2, 0x5ef, 0x5f0, 0x3, 0x2, 0x2, 0x2, 0x5f0, 0x5f1, 0x3, 0x2, 
    0x2, 0x2, 0x5f1, 0x64b, 0x5, 0xca, 0x66, 0x2, 0x5f2, 0x5f3, 0x7, 0x46, 
    0x2, 0x2, 0x5f3, 0x5f4, 0x5, 0x10c, 0x87, 0x2, 0x5f4, 0x5f6, 0x5, 0x6, 
    0x4, 0x2, 0x5f5, 0x5f7, 0x5, 0xe, 0x8, 0x2, 0x5f6, 0x5f5, 0x3, 0x2, 
    0x2, 0x2, 0x5f6, 0x5f7, 0x3, 0x2, 0x2, 0x2, 0x5f7, 0x5f8, 0x3, 0x2, 
    0x2, 0x2, 0x5f8, 0x5f9, 0x5, 0xfe, 0x80, 0x2, 0x5f9, 0x5fa, 0x8, 0x87, 
    0x1, 0x2, 0x5fa, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x5fb, 0x5fc, 0x7, 0x46, 
    0x2, 0x2, 0x5fc, 0x5fe, 0x5, 0x10c, 0x87, 0x2, 0x5fd, 0x5ff, 0x5, 0xe, 
    0x8, 0x2, 0x5fe, 0x5fd, 0x3, 0x2, 0x2, 0x2, 0x5fe, 0x5ff, 0x3, 0x2, 
    0x2, 0x2, 0x5ff, 0x600, 0x3, 0x2, 0x2, 0x2, 0x600, 0x601, 0x8, 0x87, 
    0x1, 0x2, 0x601, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x602, 0x603, 0x5, 0x108, 
    0x85, 0x2, 0x603, 0x604, 0x5, 0x10c, 0x87, 0x28, 0x604, 0x605, 0x8, 
    0x87, 0x1, 0x2, 0x605, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x606, 0x607, 0x7, 
    0x57, 0x2, 0x2, 0x607, 0x608, 0x5, 0x10c, 0x87, 0x26, 0x608, 0x609, 
    0x8, 0x87, 0x1, 0x2, 0x609, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x60a, 0x60b, 
    0x7, 0x4b, 0x2, 0x2, 0x60b, 0x60c, 0x5, 0x10c, 0x87, 0x25, 0x60c, 0x60d, 
    0x8, 0x87, 0x1, 0x2, 0x60d, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x60e, 0x60f, 
    0x7, 0x43, 0x2, 0x2, 0x60f, 0x610, 0x5, 0x10c, 0x87, 0x24, 0x610, 0x611, 
    0x8, 0x87, 0x1, 0x2, 0x611, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x612, 0x613, 
    0x7, 0x16, 0x2, 0x2, 0x613, 0x614, 0x5, 0x10c, 0x87, 0x23, 0x614, 0x615, 
    0x8, 0x87, 0x1, 0x2, 0x615, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x616, 0x617, 
    0x7, 0x17, 0x2, 0x2, 0x617, 0x618, 0x5, 0x10c, 0x87, 0x22, 0x618, 0x619, 
    0x8, 0x87, 0x1, 0x2, 0x619, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x61a, 0x61b, 
    0x7, 0x18, 0x2, 0x2, 0x61b, 0x61c, 0x5, 0x10c, 0x87, 0x21, 0x61c, 0x61d, 
    0x8, 0x87, 0x1, 0x2, 0x61d, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x61e, 0x61f, 
    0x7, 0x19, 0x2, 0x2, 0x61f, 0x620, 0x5, 0x10c, 0x87, 0x20, 0x620, 0x621, 
    0x8, 0x87, 0x1, 0x2, 0x621, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x622, 0x623, 
    0x5, 0xe0, 0x71, 0x2, 0x623, 0x624, 0x8, 0x87, 0x1, 0x2, 0x624, 0x64b, 
    0x3, 0x2, 0x2, 0x2, 0x625, 0x626, 0x5, 0xdc, 0x6f, 0x2, 0x626, 0x627, 
    0x8, 0x87, 0x1, 0x2, 0x627, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x628, 0x629, 
    0x5, 0xda, 0x6e, 0x2, 0x629, 0x62a, 0x8, 0x87, 0x1, 0x2, 0x62a, 0x64b, 
    0x3, 0x2, 0x2, 0x2, 0x62b, 0x62c, 0x5, 0xaa, 0x56, 0x2, 0x62c, 0x62d, 
    0x8, 0x87, 0x1, 0x2, 0x62d, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x62e, 0x62f, 
    0x7, 0x52, 0x2, 0x2, 0x62f, 0x64b, 0x8, 0x87, 0x1, 0x2, 0x630, 0x631, 
    0x5, 0x122, 0x92, 0x2, 0x631, 0x632, 0x8, 0x87, 0x1, 0x2, 0x632, 0x64b, 
    0x3, 0x2, 0x2, 0x2, 0x633, 0x634, 0x7, 0x61, 0x2, 0x2, 0x634, 0x64b, 
    0x8, 0x87, 0x1, 0x2, 0x635, 0x636, 0x5, 0x11a, 0x8e, 0x2, 0x636, 0x637, 
    0x8, 0x87, 0x1, 0x2, 0x637, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x638, 0x639, 
    0x5, 0xee, 0x78, 0x2, 0x639, 0x63a, 0x8, 0x87, 0x1, 0x2, 0x63a, 0x63b, 
    0x8, 0x87, 0x1, 0x2, 0x63b, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x63c, 0x63d, 
    0x5, 0xf4, 0x7b, 0x2, 0x63d, 0x63e, 0x8, 0x87, 0x1, 0x2, 0x63e, 0x64b, 
    0x3, 0x2, 0x2, 0x2, 0x63f, 0x640, 0x7, 0x8, 0x2, 0x2, 0x640, 0x641, 
    0x5, 0x104, 0x83, 0x2, 0x641, 0x642, 0x7, 0x9, 0x2, 0x2, 0x642, 0x643, 
    0x8, 0x87, 0x1, 0x2, 0x643, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x644, 0x646, 
    0x5, 0xe, 0x8, 0x2, 0x645, 0x647, 0x5, 0x104, 0x83, 0x2, 0x646, 0x645, 
    0x3, 0x2, 0x2, 0x2, 0x646, 0x647, 0x3, 0x2, 0x2, 0x2, 0x647, 0x648, 
    0x3, 0x2, 0x2, 0x2, 0x648, 0x649, 0x8, 0x87, 0x1, 0x2, 0x649, 0x64b, 
    0x3, 0x2, 0x2, 0x2, 0x64a, 0x5e8, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x5ec, 
    0x3, 0x2, 0x2, 0x2, 0x64a, 0x5ed, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x5f2, 
    0x3, 0x2, 0x2, 0x2, 0x64a, 0x5fb, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x602, 
    0x3, 0x2, 0x2, 0x2, 0x64a, 0x606, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x60a, 
    0x3, 0x2, 0x2, 0x2, 0x64a, 0x60e, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x612, 
    0x3, 0x2, 0x2, 0x2, 0x64a, 0x616, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x61a, 
    0x3, 0x2, 0x2, 0x2, 0x64a, 0x61e, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x622, 
    0x3, 0x2, 0x2, 0x2, 0x64a, 0x625, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x628, 
    0x3, 0x2, 0x2, 0x2, 0x64a, 0x62b, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x62e, 
    0x3, 0x2, 0x2, 0x2, 0x64a, 0x630, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x633, 
    0x3, 0x2, 0x2, 0x2, 0x64a, 0x635, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x638, 
    0x3, 0x2, 0x2, 0x2, 0x64a, 0x63c, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x63f, 
    0x3, 0x2, 0x2, 0x2, 0x64a, 0x644, 0x3, 0x2, 0x2, 0x2, 0x64b, 0x6b1, 
    0x3, 0x2, 0x2, 0x2, 0x64c, 0x64d, 0xc, 0x1f, 0x2, 0x2, 0x64d, 0x64e, 
    0x9, 0x9, 0x2, 0x2, 0x64e, 0x64f, 0x5, 0x10c, 0x87, 0x20, 0x64f, 0x650, 
    0x8, 0x87, 0x1, 0x2, 0x650, 0x6b0, 0x3, 0x2, 0x2, 0x2, 0x651, 0x652, 
    0xc, 0x1e, 0x2, 0x2, 0x652, 0x653, 0x9, 0xa, 0x2, 0x2, 0x653, 0x654, 
    0x5, 0x10c, 0x87, 0x1f, 0x654, 0x655, 0x8, 0x87, 0x1, 0x2, 0x655, 0x6b0, 
    0x3, 0x2, 0x2, 0x2, 0x656, 0x657, 0xc, 0x1d, 0x2, 0x2, 0x657, 0x658, 
    0x9, 0xb, 0x2, 0x2, 0x658, 0x659, 0x5, 0x10c, 0x87, 0x1e, 0x659, 0x65a, 
    0x8, 0x87, 0x1, 0x2, 0x65a, 0x6b0, 0x3, 0x2, 0x2, 0x2, 0x65b, 0x65c, 
    0xc, 0x1c, 0x2, 0x2, 0x65c, 0x65d, 0x9, 0xc, 0x2, 0x2, 0x65d, 0x65e, 
    0x5, 0x10c, 0x87, 0x1d, 0x65e, 0x65f, 0x8, 0x87, 0x1, 0x2, 0x65f, 0x6b0, 
    0x3, 0x2, 0x2, 0x2, 0x660, 0x661, 0xc, 0x1b, 0x2, 0x2, 0x661, 0x662, 
    0x7, 0x42, 0x2, 0x2, 0x662, 0x663, 0x5, 0x10c, 0x87, 0x1c, 0x663, 0x664, 
    0x8, 0x87, 0x1, 0x2, 0x664, 0x6b0, 0x3, 0x2, 0x2, 0x2, 0x665, 0x666, 
    0xc, 0x1a, 0x2, 0x2, 0x666, 0x667, 0x7, 0x58, 0x2, 0x2, 0x667, 0x668, 
    0x5, 0x10c, 0x87, 0x1b, 0x668, 0x669, 0x8, 0x87, 0x1, 0x2, 0x669, 0x6b0, 
    0x3, 0x2, 0x2, 0x2, 0x66a, 0x66b, 0xc, 0x19, 0x2, 0x2, 0x66b, 0x66c, 
    0x9, 0xd, 0x2, 0x2, 0x66c, 0x66d, 0x5, 0x10c, 0x87, 0x1a, 0x66d, 0x66e, 
    0x8, 0x87, 0x1, 0x2, 0x66e, 0x6b0, 0x3, 0x2, 0x2, 0x2, 0x66f, 0x670, 
    0xc, 0x18, 0x2, 0x2, 0x670, 0x671, 0x7, 0x28, 0x2, 0x2, 0x671, 0x672, 
    0x5, 0x10c, 0x87, 0x19, 0x672, 0x673, 0x8, 0x87, 0x1, 0x2, 0x673, 0x6b0, 
    0x3, 0x2, 0x2, 0x2, 0x674, 0x675, 0xc, 0x17, 0x2, 0x2, 0x675, 0x676, 
    0x7, 0x29, 0x2, 0x2, 0x676, 0x677, 0x5, 0x10c, 0x87, 0x18, 0x677, 0x678, 
    0x8, 0x87, 0x1, 0x2, 0x678, 0x6b0, 0x3, 0x2, 0x2, 0x2, 0x679, 0x67a, 
    0xc, 0x16, 0x2, 0x2, 0x67a, 0x67b, 0x7, 0x2a, 0x2, 0x2, 0x67b, 0x67c, 
    0x5, 0x10c, 0x87, 0x17, 0x67c, 0x67d, 0x8, 0x87, 0x1, 0x2, 0x67d, 0x6b0, 
    0x3, 0x2, 0x2, 0x2, 0x67e, 0x67f, 0xc, 0x15, 0x2, 0x2, 0x67f, 0x680, 
    0x7, 0x2b, 0x2, 0x2, 0x680, 0x681, 0x5, 0x10c, 0x87, 0x16, 0x681, 0x682, 
    0x8, 0x87, 0x1, 0x2, 0x682, 0x6b0, 0x3, 0x2, 0x2, 0x2, 0x683, 0x684, 
    0xc, 0x14, 0x2, 0x2, 0x684, 0x685, 0x7, 0x2c, 0x2, 0x2, 0x685, 0x686, 
    0x5, 0x10c, 0x87, 0x15, 0x686, 0x687, 0x8, 0x87, 0x1, 0x2, 0x687, 0x6b0, 
    0x3, 0x2, 0x2, 0x2, 0x688, 0x689, 0xc, 0x13, 0x2, 0x2, 0x689, 0x68a, 
    0x7, 0x10, 0x2, 0x2, 0x68a, 0x68b, 0x5, 0x10c, 0x87, 0x2, 0x68b, 0x68c, 
    0x7, 0x11, 0x2, 0x2, 0x68c, 0x68d, 0x5, 0x10c, 0x87, 0x14, 0x68d, 0x68e, 
    0x8, 0x87, 0x1, 0x2, 0x68e, 0x6b0, 0x3, 0x2, 0x2, 0x2, 0x68f, 0x690, 
    0xc, 0x12, 0x2, 0x2, 0x690, 0x691, 0x7, 0xf, 0x2, 0x2, 0x691, 0x692, 
    0x5, 0x10c, 0x87, 0x13, 0x692, 0x693, 0x8, 0x87, 0x1, 0x2, 0x693, 0x6b0, 
    0x3, 0x2, 0x2, 0x2, 0x694, 0x695, 0xc, 0x11, 0x2, 0x2, 0x695, 0x696, 
    0x5, 0x118, 0x8d, 0x2, 0x696, 0x697, 0x5, 0x10c, 0x87, 0x12, 0x697, 
    0x698, 0x8, 0x87, 0x1, 0x2, 0x698, 0x6b0, 0x3, 0x2, 0x2, 0x2, 0x699, 
    0x69a, 0xc, 0x2c, 0x2, 0x2, 0x69a, 0x69b, 0x5, 0x10e, 0x88, 0x2, 0x69b, 
    0x69c, 0x8, 0x87, 0x1, 0x2, 0x69c, 0x6b0, 0x3, 0x2, 0x2, 0x2, 0x69d, 
    0x69e, 0xc, 0x29, 0x2, 0x2, 0x69e, 0x69f, 0x5, 0xfe, 0x80, 0x2, 0x69f, 
    0x6a0, 0x8, 0x87, 0x1, 0x2, 0x6a0, 0x6b0, 0x3, 0x2, 0x2, 0x2, 0x6a1, 
    0x6a2, 0xc, 0x27, 0x2, 0x2, 0x6a2, 0x6a3, 0x6, 0x87, 0x22, 0x2, 0x6a3, 
    0x6a4, 0x5, 0x108, 0x85, 0x2, 0x6a4, 0x6a5, 0x8, 0x87, 0x1, 0x2, 0x6a5, 
    0x6b0, 0x3, 0x2, 0x2, 0x2, 0x6a6, 0x6a7, 0xc, 0x10, 0x2, 0x2, 0x6a7, 
    0x6a8, 0x5, 0x11c, 0x8f, 0x2, 0x6a8, 0x6a9, 0x8, 0x87, 0x1, 0x2, 0x6a9, 
    0x6b0, 0x3, 0x2, 0x2, 0x2, 0x6aa, 0x6ab, 0xc, 0x3, 0x2, 0x2, 0x6ab, 
    0x6ac, 0x7, 0x5a, 0x2, 0x2, 0x6ac, 0x6ad, 0x5, 0x110, 0x89, 0x2, 0x6ad, 
    0x6ae, 0x8, 0x87, 0x1, 0x2, 0x6ae, 0x6b0, 0x3, 0x2, 0x2, 0x2, 0x6af, 
    0x64c, 0x3, 0x2, 0x2, 0x2, 0x6af, 0x651, 0x3, 0x2, 0x2, 0x2, 0x6af, 
    0x656, 0x3, 0x2, 0x2, 0x2, 0x6af, 0x65b, 0x3, 0x2, 0x2, 0x2, 0x6af, 
    0x660, 0x3, 0x2, 0x2, 0x2, 0x6af, 0x665, 0x3, 0x2, 0x2, 0x2, 0x6af, 
    0x66a, 0x3, 0x2, 0x2, 0x2, 0x6af, 0x66f, 0x3, 0x2, 0x2, 0x2, 0x6af, 
    0x674, 0x3, 0x2, 0x2, 0x2, 0x6af, 0x679, 0x3, 0x2, 0x2, 0x2, 0x6af, 
    0x67e, 0x3, 0x2, 0x2, 0x2, 0x6af, 0x683, 0x3, 0x2, 0x2, 0x2, 0x6af, 
    0x688, 0x3, 0x2, 0x2, 0x2, 0x6af, 0x68f, 0x3, 0x2, 0x2, 0x2, 0x6af, 
    0x694, 0x3, 0x2, 0x2, 0x2, 0x6af, 0x699, 0x3, 0x2, 0x2, 0x2, 0x6af, 
    0x69d, 0x3, 0x2, 0x2, 0x2, 0x6af, 0x6a1, 0x3, 0x2, 0x2, 0x2, 0x6af, 
    0x6a6, 0x3, 0x2, 0x2, 0x2, 0x6af, 0x6aa, 0x3, 0x2, 0x2, 0x2, 0x6b0, 
    0x6b3, 0x3, 0x2, 0x2, 0x2, 0x6b1, 0x6af, 0x3, 0x2, 0x2, 0x2, 0x6b1, 
    0x6b2, 0x3, 0x2, 0x2, 0x2, 0x6b2, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x6b3, 
    0x6b1, 0x3, 0x2, 0x2, 0x2, 0x6b4, 0x6b5, 0x7, 0x6, 0x2, 0x2, 0x6b5, 
    0x6ba, 0x5, 0x10c, 0x87, 0x2, 0x6b6, 0x6b7, 0x7, 0xe, 0x2, 0x2, 0x6b7, 
    0x6b9, 0x5, 0x10c, 0x87, 0x2, 0x6b8, 0x6b6, 0x3, 0x2, 0x2, 0x2, 0x6b9, 
    0x6bc, 0x3, 0x2, 0x2, 0x2, 0x6ba, 0x6b8, 0x3, 0x2, 0x2, 0x2, 0x6ba, 
    0x6bb, 0x3, 0x2, 0x2, 0x2, 0x6bb, 0x6bd, 0x3, 0x2, 0x2, 0x2, 0x6bc, 
    0x6ba, 0x3, 0x2, 0x2, 0x2, 0x6bd, 0x6be, 0x7, 0x7, 0x2, 0x2, 0x6be, 
    0x6bf, 0x8, 0x88, 0x1, 0x2, 0x6bf, 0x6d0, 0x3, 0x2, 0x2, 0x2, 0x6c0, 
    0x6c1, 0x7, 0x10, 0x2, 0x2, 0x6c1, 0x6c2, 0x7, 0x13, 0x2, 0x2, 0x6c2, 
    0x6c4, 0x5, 0x122, 0x92, 0x2, 0x6c3, 0x6c5, 0x5, 0x1e, 0x10, 0x2, 0x6c4, 
    0x6c3, 0x3, 0x2, 0x2, 0x2, 0x6c4, 0x6c5, 0x3, 0x2, 0x2, 0x2, 0x6c5, 
    0x6c6, 0x3, 0x2, 0x2, 0x2, 0x6c6, 0x6c7, 0x8, 0x88, 0x1, 0x2, 0x6c7, 
    0x6d0, 0x3, 0x2, 0x2, 0x2, 0x6c8, 0x6c9, 0x7, 0x13, 0x2, 0x2, 0x6c9, 
    0x6cb, 0x5, 0x122, 0x92, 0x2, 0x6ca, 0x6cc, 0x5, 0x1e, 0x10, 0x2, 0x6cb, 
    0x6ca, 0x3, 0x2, 0x2, 0x2, 0x6cb, 0x6cc, 0x3, 0x2, 0x2, 0x2, 0x6cc, 
    0x6cd, 0x3, 0x2, 0x2, 0x2, 0x6cd, 0x6ce, 0x8, 0x88, 0x1, 0x2, 0x6ce, 
    0x6d0, 0x3, 0x2, 0x2, 0x2, 0x6cf, 0x6b4, 0x3, 0x2, 0x2, 0x2, 0x6cf, 
    0x6c0, 0x3, 0x2, 0x2, 0x2, 0x6cf, 0x6c8, 0x3, 0x2, 0x2, 0x2, 0x6d0, 
    0x10f, 0x3, 0x2, 0x2, 0x2, 0x6d1, 0x6d4, 0x5, 0x1a, 0xe, 0x2, 0x6d2, 
    0x6d3, 0x7, 0x6, 0x2, 0x2, 0x6d3, 0x6d5, 0x7, 0x7, 0x2, 0x2, 0x6d4, 
    0x6d2, 0x3, 0x2, 0x2, 0x2, 0x6d4, 0x6d5, 0x3, 0x2, 0x2, 0x2, 0x6d5, 
    0x6d8, 0x3, 0x2, 0x2, 0x2, 0x6d6, 0x6d8, 0x5, 0x10c, 0x87, 0x2, 0x6d7, 
    0x6d1, 0x3, 0x2, 0x2, 0x2, 0x6d7, 0x6d6, 0x3, 0x2, 0x2, 0x2, 0x6d8, 
    0x111, 0x3, 0x2, 0x2, 0x2, 0x6d9, 0x6db, 0x7, 0x5d, 0x2, 0x2, 0x6da, 
    0x6d9, 0x3, 0x2, 0x2, 0x2, 0x6da, 0x6db, 0x3, 0x2, 0x2, 0x2, 0x6db, 
    0x6dc, 0x3, 0x2, 0x2, 0x2, 0x6dc, 0x6de, 0x5, 0x114, 0x8b, 0x2, 0x6dd, 
    0x6df, 0x5, 0x3e, 0x20, 0x2, 0x6de, 0x6dd, 0x3, 0x2, 0x2, 0x2, 0x6de, 
    0x6df, 0x3, 0x2, 0x2, 0x2, 0x6df, 0x6e0, 0x3, 0x2, 0x2, 0x2, 0x6e0, 
    0x6e1, 0x7, 0x38, 0x2, 0x2, 0x6e1, 0x6e2, 0x5, 0x116, 0x8c, 0x2, 0x6e2, 
    0x113, 0x3, 0x2, 0x2, 0x2, 0x6e3, 0x6ea, 0x7, 0x7e, 0x2, 0x2, 0x6e4, 
    0x6e6, 0x7, 0x8, 0x2, 0x2, 0x6e5, 0x6e7, 0x5, 0xe4, 0x73, 0x2, 0x6e6, 
    0x6e5, 0x3, 0x2, 0x2, 0x2, 0x6e6, 0x6e7, 0x3, 0x2, 0x2, 0x2, 0x6e7, 
    0x6e8, 0x3, 0x2, 0x2, 0x2, 0x6e8, 0x6ea, 0x7, 0x9, 0x2, 0x2, 0x6e9, 
    0x6e3, 0x3, 0x2, 0x2, 0x2, 0x6e9, 0x6e4, 0x3, 0x2, 0x2, 0x2, 0x6ea, 
    0x115, 0x3, 0x2, 0x2, 0x2, 0x6eb, 0x6f1, 0x5, 0x10c, 0x87, 0x2, 0x6ec, 
    0x6ed, 0x7, 0xa, 0x2, 0x2, 0x6ed, 0x6ee, 0x5, 0xea, 0x76, 0x2, 0x6ee, 
    0x6ef, 0x7, 0xc, 0x2, 0x2, 0x6ef, 0x6f1, 0x3, 0x2, 0x2, 0x2, 0x6f0, 
    0x6eb, 0x3, 0x2, 0x2, 0x2, 0x6f0, 0x6ec, 0x3, 0x2, 0x2, 0x2, 0x6f1, 
    0x117, 0x3, 0x2, 0x2, 0x2, 0x6f2, 0x6f3, 0x9, 0xe, 0x2, 0x2, 0x6f3, 
    0x119, 0x3, 0x2, 0x2, 0x2, 0x6f4, 0x6f5, 0x7, 0x39, 0x2, 0x2, 0x6f5, 
    0x703, 0x8, 0x8e, 0x1, 0x2, 0x6f6, 0x6f7, 0x7, 0x3a, 0x2, 0x2, 0x6f7, 
    0x703, 0x8, 0x8e, 0x1, 0x2, 0x6f8, 0x6f9, 0x7, 0x7f, 0x2, 0x2, 0x6f9, 
    0x703, 0x8, 0x8e, 0x1, 0x2, 0x6fa, 0x6fb, 0x5, 0x11c, 0x8f, 0x2, 0x6fb, 
    0x6fc, 0x8, 0x8e, 0x1, 0x2, 0x6fc, 0x703, 0x3, 0x2, 0x2, 0x2, 0x6fd, 
    0x6fe, 0x7, 0x5, 0x2, 0x2, 0x6fe, 0x703, 0x8, 0x8e, 0x1, 0x2, 0x6ff, 
    0x700, 0x5, 0x120, 0x91, 0x2, 0x700, 0x701, 0x8, 0x8e, 0x1, 0x2, 0x701, 
    0x703, 0x3, 0x2, 0x2, 0x2, 0x702, 0x6f4, 0x3, 0x2, 0x2, 0x2, 0x702, 
    0x6f6, 0x3, 0x2, 0x2, 0x2, 0x702, 0x6f8, 0x3, 0x2, 0x2, 0x2, 0x702, 
    0x6fa, 0x3, 0x2, 0x2, 0x2, 0x702, 0x6fd, 0x3, 0x2, 0x2, 0x2, 0x702, 
    0x6ff, 0x3, 0x2, 0x2, 0x2, 0x703, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x704, 
    0x708, 0x7, 0x80, 0x2, 0x2, 0x705, 0x707, 0x5, 0x11e, 0x90, 0x2, 0x706, 
    0x705, 0x3, 0x2, 0x2, 0x2, 0x707, 0x70a, 0x3, 0x2, 0x2, 0x2, 0x708, 
    0x706, 0x3, 0x2, 0x2, 0x2, 0x708, 0x709, 0x3, 0x2, 0x2, 0x2, 0x709, 
    0x70b, 0x3, 0x2, 0x2, 0x2, 0x70a, 0x708, 0x3, 0x2, 0x2, 0x2, 0x70b, 
    0x70c, 0x7, 0x80, 0x2, 0x2, 0x70c, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x70d, 
    0x713, 0x7, 0x87, 0x2, 0x2, 0x70e, 0x70f, 0x7, 0x86, 0x2, 0x2, 0x70f, 
    0x710, 0x5, 0x10c, 0x87, 0x2, 0x710, 0x711, 0x7, 0xb, 0x2, 0x2, 0x711, 
    0x713, 0x3, 0x2, 0x2, 0x2, 0x712, 0x70d, 0x3, 0x2, 0x2, 0x2, 0x712, 
    0x70e, 0x3, 0x2, 0x2, 0x2, 0x713, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x714, 
    0x715, 0x9, 0xf, 0x2, 0x2, 0x715, 0x121, 0x3, 0x2, 0x2, 0x2, 0x716, 
    0x719, 0x7, 0x7e, 0x2, 0x2, 0x717, 0x719, 0x5, 0x126, 0x94, 0x2, 0x718, 
    0x716, 0x3, 0x2, 0x2, 0x2, 0x718, 0x717, 0x3, 0x2, 0x2, 0x2, 0x719, 
    0x123, 0x3, 0x2, 0x2, 0x2, 0x71a, 0x71b, 0x9, 0x10, 0x2, 0x2, 0x71b, 
    0x125, 0x3, 0x2, 0x2, 0x2, 0x71c, 0x720, 0x5, 0x128, 0x95, 0x2, 0x71d, 
    0x720, 0x7, 0x39, 0x2, 0x2, 0x71e, 0x720, 0x7, 0x3a, 0x2, 0x2, 0x71f, 
    0x71c, 0x3, 0x2, 0x2, 0x2, 0x71f, 0x71d, 0x3, 0x2, 0x2, 0x2, 0x71f, 
    0x71e, 0x3, 0x2, 0x2, 0x2, 0x720, 0x127, 0x3, 0x2, 0x2, 0x2, 0x721, 
    0x722, 0x9, 0x11, 0x2, 0x2, 0x722, 0x129, 0x3, 0x2, 0x2, 0x2, 0x723, 
    0x724, 0x7, 0x74, 0x2, 0x2, 0x724, 0x725, 0x5, 0xfc, 0x7f, 0x2, 0x725, 
    0x12b, 0x3, 0x2, 0x2, 0x2, 0x726, 0x727, 0x7, 0x75, 0x2, 0x2, 0x727, 
    0x728, 0x5, 0xfc, 0x7f, 0x2, 0x728, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x729, 
    0x72e, 0x7, 0xd, 0x2, 0x2, 0x72a, 0x72e, 0x7, 0x2, 0x2, 0x3, 0x72b, 
    0x72e, 0x6, 0x98, 0x25, 0x2, 0x72c, 0x72e, 0x6, 0x98, 0x26, 0x2, 0x72d, 
    0x729, 0x3, 0x2, 0x2, 0x2, 0x72d, 0x72a, 0x3, 0x2, 0x2, 0x2, 0x72d, 
    0x72b, 0x3, 0x2, 0x2, 0x2, 0x72d, 0x72c, 0x3, 0x2, 0x2, 0x2, 0x72e, 
    0x12f, 0x3, 0x2, 0x2, 0x2, 0xd5, 0x135, 0x139, 0x142, 0x147, 0x14a, 
    0x151, 0x15a, 0x164, 0x16f, 0x171, 0x186, 0x18e, 0x19d, 0x1a1, 0x1a5, 
    0x1b4, 0x1b8, 0x1bc, 0x1c2, 0x1c9, 0x1d3, 0x1d5, 0x1e5, 0x1e9, 0x1ed, 
    0x1f5, 0x1f9, 0x208, 0x20c, 0x20f, 0x213, 0x216, 0x21a, 0x220, 0x224, 
    0x228, 0x230, 0x235, 0x237, 0x23e, 0x243, 0x246, 0x249, 0x24e, 0x251, 
    0x254, 0x259, 0x25c, 0x25f, 0x263, 0x269, 0x26d, 0x271, 0x275, 0x280, 
    0x287, 0x28e, 0x293, 0x29b, 0x29e, 0x2a1, 0x2a6, 0x2a9, 0x2ad, 0x2b7, 
    0x2bb, 0x2c1, 0x2c7, 0x2ce, 0x2d4, 0x2da, 0x2e2, 0x2e7, 0x2f2, 0x2f7, 
    0x2ff, 0x306, 0x30d, 0x313, 0x335, 0x339, 0x340, 0x346, 0x34d, 0x351, 
    0x355, 0x35e, 0x366, 0x36d, 0x371, 0x379, 0x37d, 0x380, 0x383, 0x386, 
    0x38a, 0x38e, 0x392, 0x394, 0x39b, 0x3a1, 0x3a6, 0x3a9, 0x3af, 0x3b3, 
    0x3bc, 0x3c5, 0x3d8, 0x3dc, 0x3e0, 0x3ea, 0x3ee, 0x3f9, 0x406, 0x40c, 
    0x413, 0x41a, 0x421, 0x428, 0x43a, 0x43e, 0x440, 0x447, 0x44d, 0x452, 
    0x461, 0x464, 0x47a, 0x47f, 0x484, 0x48a, 0x48d, 0x493, 0x4a0, 0x4a5, 
    0x4aa, 0x4ad, 0x4b0, 0x4bd, 0x4c2, 0x4c5, 0x4c8, 0x4cb, 0x4ce, 0x4d1, 
    0x4d7, 0x4dc, 0x4e6, 0x4ea, 0x4f7, 0x4fb, 0x508, 0x50c, 0x515, 0x521, 
    0x526, 0x52d, 0x52f, 0x532, 0x535, 0x539, 0x53c, 0x540, 0x546, 0x54b, 
    0x54f, 0x559, 0x55e, 0x562, 0x566, 0x56e, 0x572, 0x574, 0x594, 0x59a, 
    0x5a4, 0x5a7, 0x5b1, 0x5b6, 0x5b8, 0x5c1, 0x5c5, 0x5c9, 0x5d0, 0x5d5, 
    0x5d9, 0x5dd, 0x5ef, 0x5f6, 0x5fe, 0x646, 0x64a, 0x6af, 0x6b1, 0x6ba, 
    0x6c4, 0x6cb, 0x6cf, 0x6d4, 0x6d7, 0x6da, 0x6de, 0x6e6, 0x6e9, 0x6f0, 
    0x702, 0x708, 0x712, 0x718, 0x71f, 0x72d, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

TypeScriptParser::Initializer TypeScriptParser::_init;
