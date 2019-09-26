
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/locations.g4 by ANTLR 4.7.2


#include "locationsListener.h"
#include "locationsVisitor.h"

#include "locationsParser.h"


using namespace antlrcpp;
using namespace antlr4;

locationsParser::locationsParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

locationsParser::~locationsParser() {
  delete _interpreter;
}

std::string locationsParser::getGrammarFileName() const {
  return "locations.g4";
}

const std::vector<std::string>& locationsParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& locationsParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ModelidContext ------------------------------------------------------------------

locationsParser::ModelidContext::ModelidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* locationsParser::ModelidContext::KEY_NAME() {
  return getToken(locationsParser::KEY_NAME, 0);
}

tree::TerminalNode* locationsParser::ModelidContext::VARIABLE() {
  return getToken(locationsParser::VARIABLE, 0);
}


size_t locationsParser::ModelidContext::getRuleIndex() const {
  return locationsParser::RuleModelid;
}

void locationsParser::ModelidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModelid(this);
}

void locationsParser::ModelidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModelid(this);
}


antlrcpp::Any locationsParser::ModelidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitModelid(this);
  else
    return visitor->visitChildren(this);
}

locationsParser::ModelidContext* locationsParser::modelid() {
  ModelidContext *_localctx = _tracker.createInstance<ModelidContext>(_ctx, getState());
  enterRule(_localctx, 0, locationsParser::RuleModelid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    match(locationsParser::KEY_NAME);
    setState(37);
    match(locationsParser::VARIABLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FlowsContext ------------------------------------------------------------------

locationsParser::FlowsContext::FlowsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* locationsParser::FlowsContext::KEY_FLOWS() {
  return getToken(locationsParser::KEY_FLOWS, 0);
}

tree::TerminalNode* locationsParser::FlowsContext::LEFTCURLYBRACKET() {
  return getToken(locationsParser::LEFTCURLYBRACKET, 0);
}

locationsParser::SystemContext* locationsParser::FlowsContext::system() {
  return getRuleContext<locationsParser::SystemContext>(0);
}

tree::TerminalNode* locationsParser::FlowsContext::RIGHTCURLYBRACKET() {
  return getToken(locationsParser::RIGHTCURLYBRACKET, 0);
}


size_t locationsParser::FlowsContext::getRuleIndex() const {
  return locationsParser::RuleFlows;
}

void locationsParser::FlowsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFlows(this);
}

void locationsParser::FlowsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFlows(this);
}


antlrcpp::Any locationsParser::FlowsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitFlows(this);
  else
    return visitor->visitChildren(this);
}

locationsParser::FlowsContext* locationsParser::flows() {
  FlowsContext *_localctx = _tracker.createInstance<FlowsContext>(_ctx, getState());
  enterRule(_localctx, 2, locationsParser::RuleFlows);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(39);
    match(locationsParser::KEY_FLOWS);
    setState(40);
    match(locationsParser::LEFTCURLYBRACKET);
    setState(41);
    system();
    setState(42);
    match(locationsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InvariantconditionContext ------------------------------------------------------------------

locationsParser::InvariantconditionContext::InvariantconditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* locationsParser::InvariantconditionContext::KEY_INVARIANT_CONDITIONS() {
  return getToken(locationsParser::KEY_INVARIANT_CONDITIONS, 0);
}

tree::TerminalNode* locationsParser::InvariantconditionContext::LEFTCURLYBRACKET() {
  return getToken(locationsParser::LEFTCURLYBRACKET, 0);
}

tree::TerminalNode* locationsParser::InvariantconditionContext::RIGHTCURLYBRACKET() {
  return getToken(locationsParser::RIGHTCURLYBRACKET, 0);
}

locationsParser::ConditionContext* locationsParser::InvariantconditionContext::condition() {
  return getRuleContext<locationsParser::ConditionContext>(0);
}


size_t locationsParser::InvariantconditionContext::getRuleIndex() const {
  return locationsParser::RuleInvariantcondition;
}

void locationsParser::InvariantconditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInvariantcondition(this);
}

void locationsParser::InvariantconditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInvariantcondition(this);
}


antlrcpp::Any locationsParser::InvariantconditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitInvariantcondition(this);
  else
    return visitor->visitChildren(this);
}

locationsParser::InvariantconditionContext* locationsParser::invariantcondition() {
  InvariantconditionContext *_localctx = _tracker.createInstance<InvariantconditionContext>(_ctx, getState());
  enterRule(_localctx, 4, locationsParser::RuleInvariantcondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(locationsParser::KEY_INVARIANT_CONDITIONS);
    setState(45);
    match(locationsParser::LEFTCURLYBRACKET);
    setState(47);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == locationsParser::KEY_CONDITION) {
      setState(46);
      condition();
    }
    setState(49);
    match(locationsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModelContext ------------------------------------------------------------------

locationsParser::ModelContext::ModelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* locationsParser::ModelContext::KEY_MODEL() {
  return getToken(locationsParser::KEY_MODEL, 0);
}

tree::TerminalNode* locationsParser::ModelContext::LEFTCURLYBRACKET() {
  return getToken(locationsParser::LEFTCURLYBRACKET, 0);
}

locationsParser::ModelidContext* locationsParser::ModelContext::modelid() {
  return getRuleContext<locationsParser::ModelidContext>(0);
}

locationsParser::FlowsContext* locationsParser::ModelContext::flows() {
  return getRuleContext<locationsParser::FlowsContext>(0);
}

locationsParser::InvariantconditionContext* locationsParser::ModelContext::invariantcondition() {
  return getRuleContext<locationsParser::InvariantconditionContext>(0);
}

tree::TerminalNode* locationsParser::ModelContext::RIGHTCURLYBRACKET() {
  return getToken(locationsParser::RIGHTCURLYBRACKET, 0);
}


size_t locationsParser::ModelContext::getRuleIndex() const {
  return locationsParser::RuleModel;
}

void locationsParser::ModelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModel(this);
}

void locationsParser::ModelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModel(this);
}


antlrcpp::Any locationsParser::ModelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitModel(this);
  else
    return visitor->visitChildren(this);
}

locationsParser::ModelContext* locationsParser::model() {
  ModelContext *_localctx = _tracker.createInstance<ModelContext>(_ctx, getState());
  enterRule(_localctx, 6, locationsParser::RuleModel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(locationsParser::KEY_MODEL);
    setState(52);
    match(locationsParser::LEFTCURLYBRACKET);
    setState(53);
    modelid();
    setState(54);
    flows();
    setState(55);
    invariantcondition();
    setState(56);
    match(locationsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocationsContext ------------------------------------------------------------------

locationsParser::LocationsContext::LocationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* locationsParser::LocationsContext::KEY_LOCATIONS() {
  return getToken(locationsParser::KEY_LOCATIONS, 0);
}

tree::TerminalNode* locationsParser::LocationsContext::LEFTCURLYBRACKET() {
  return getToken(locationsParser::LEFTCURLYBRACKET, 0);
}

tree::TerminalNode* locationsParser::LocationsContext::RIGHTCURLYBRACKET() {
  return getToken(locationsParser::RIGHTCURLYBRACKET, 0);
}

std::vector<locationsParser::ModelContext *> locationsParser::LocationsContext::model() {
  return getRuleContexts<locationsParser::ModelContext>();
}

locationsParser::ModelContext* locationsParser::LocationsContext::model(size_t i) {
  return getRuleContext<locationsParser::ModelContext>(i);
}


size_t locationsParser::LocationsContext::getRuleIndex() const {
  return locationsParser::RuleLocations;
}

void locationsParser::LocationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocations(this);
}

void locationsParser::LocationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocations(this);
}


antlrcpp::Any locationsParser::LocationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitLocations(this);
  else
    return visitor->visitChildren(this);
}

locationsParser::LocationsContext* locationsParser::locations() {
  LocationsContext *_localctx = _tracker.createInstance<LocationsContext>(_ctx, getState());
  enterRule(_localctx, 8, locationsParser::RuleLocations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    match(locationsParser::KEY_LOCATIONS);
    setState(59);
    match(locationsParser::LEFTCURLYBRACKET);
    setState(61); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(60);
      model();
      setState(63); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == locationsParser::KEY_MODEL);
    setState(65);
    match(locationsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

locationsParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* locationsParser::ConditionContext::KEY_CONDITION() {
  return getToken(locationsParser::KEY_CONDITION, 0);
}

tree::TerminalNode* locationsParser::ConditionContext::LEFTCURLYBRACKET() {
  return getToken(locationsParser::LEFTCURLYBRACKET, 0);
}

tree::TerminalNode* locationsParser::ConditionContext::RIGHTCURLYBRACKET() {
  return getToken(locationsParser::RIGHTCURLYBRACKET, 0);
}

locationsParser::IntervalhullContext* locationsParser::ConditionContext::intervalhull() {
  return getRuleContext<locationsParser::IntervalhullContext>(0);
}

locationsParser::PolytopeContext* locationsParser::ConditionContext::polytope() {
  return getRuleContext<locationsParser::PolytopeContext>(0);
}


size_t locationsParser::ConditionContext::getRuleIndex() const {
  return locationsParser::RuleCondition;
}

void locationsParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void locationsParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


antlrcpp::Any locationsParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

locationsParser::ConditionContext* locationsParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 10, locationsParser::RuleCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    match(locationsParser::KEY_CONDITION);
    setState(68);
    match(locationsParser::LEFTCURLYBRACKET);
    setState(71);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case locationsParser::KEY_INTERVAL_HULL: {
        setState(69);
        intervalhull();
        break;
      }

      case locationsParser::KEY_POLYTOPE: {
        setState(70);
        polytope();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(73);
    match(locationsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PolytopeContext ------------------------------------------------------------------

locationsParser::PolytopeContext::PolytopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* locationsParser::PolytopeContext::KEY_POLYTOPE() {
  return getToken(locationsParser::KEY_POLYTOPE, 0);
}

locationsParser::HpolytopeContext* locationsParser::PolytopeContext::hpolytope() {
  return getRuleContext<locationsParser::HpolytopeContext>(0);
}

locationsParser::VpolytopeContext* locationsParser::PolytopeContext::vpolytope() {
  return getRuleContext<locationsParser::VpolytopeContext>(0);
}


size_t locationsParser::PolytopeContext::getRuleIndex() const {
  return locationsParser::RulePolytope;
}

void locationsParser::PolytopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPolytope(this);
}

void locationsParser::PolytopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPolytope(this);
}


antlrcpp::Any locationsParser::PolytopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitPolytope(this);
  else
    return visitor->visitChildren(this);
}

locationsParser::PolytopeContext* locationsParser::polytope() {
  PolytopeContext *_localctx = _tracker.createInstance<PolytopeContext>(_ctx, getState());
  enterRule(_localctx, 12, locationsParser::RulePolytope);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(locationsParser::KEY_POLYTOPE);
    setState(78);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(76);
      hpolytope();
      break;
    }

    case 2: {
      setState(77);
      vpolytope();
      break;
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

//----------------- HpolytopeContext ------------------------------------------------------------------

locationsParser::HpolytopeContext::HpolytopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* locationsParser::HpolytopeContext::LEFTCURLYBRACKET() {
  return getToken(locationsParser::LEFTCURLYBRACKET, 0);
}

locationsParser::MatrixContext* locationsParser::HpolytopeContext::matrix() {
  return getRuleContext<locationsParser::MatrixContext>(0);
}

locationsParser::VectorContext* locationsParser::HpolytopeContext::vector() {
  return getRuleContext<locationsParser::VectorContext>(0);
}

tree::TerminalNode* locationsParser::HpolytopeContext::RIGHTCURLYBRACKET() {
  return getToken(locationsParser::RIGHTCURLYBRACKET, 0);
}


size_t locationsParser::HpolytopeContext::getRuleIndex() const {
  return locationsParser::RuleHpolytope;
}

void locationsParser::HpolytopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHpolytope(this);
}

void locationsParser::HpolytopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHpolytope(this);
}


antlrcpp::Any locationsParser::HpolytopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitHpolytope(this);
  else
    return visitor->visitChildren(this);
}

locationsParser::HpolytopeContext* locationsParser::hpolytope() {
  HpolytopeContext *_localctx = _tracker.createInstance<HpolytopeContext>(_ctx, getState());
  enterRule(_localctx, 14, locationsParser::RuleHpolytope);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    match(locationsParser::LEFTCURLYBRACKET);
    setState(81);
    matrix();
    setState(82);
    vector();
    setState(83);
    match(locationsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VpolytopeContext ------------------------------------------------------------------

locationsParser::VpolytopeContext::VpolytopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* locationsParser::VpolytopeContext::LEFTCURLYBRACKET() {
  return getToken(locationsParser::LEFTCURLYBRACKET, 0);
}

std::vector<locationsParser::VectorContext *> locationsParser::VpolytopeContext::vector() {
  return getRuleContexts<locationsParser::VectorContext>();
}

locationsParser::VectorContext* locationsParser::VpolytopeContext::vector(size_t i) {
  return getRuleContext<locationsParser::VectorContext>(i);
}

tree::TerminalNode* locationsParser::VpolytopeContext::RIGHTCURLYBRACKET() {
  return getToken(locationsParser::RIGHTCURLYBRACKET, 0);
}

std::vector<tree::TerminalNode *> locationsParser::VpolytopeContext::COMMA() {
  return getTokens(locationsParser::COMMA);
}

tree::TerminalNode* locationsParser::VpolytopeContext::COMMA(size_t i) {
  return getToken(locationsParser::COMMA, i);
}


size_t locationsParser::VpolytopeContext::getRuleIndex() const {
  return locationsParser::RuleVpolytope;
}

void locationsParser::VpolytopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVpolytope(this);
}

void locationsParser::VpolytopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVpolytope(this);
}


antlrcpp::Any locationsParser::VpolytopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitVpolytope(this);
  else
    return visitor->visitChildren(this);
}

locationsParser::VpolytopeContext* locationsParser::vpolytope() {
  VpolytopeContext *_localctx = _tracker.createInstance<VpolytopeContext>(_ctx, getState());
  enterRule(_localctx, 16, locationsParser::RuleVpolytope);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(locationsParser::LEFTCURLYBRACKET);
    setState(86);
    vector();
    setState(91); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(88);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == locationsParser::COMMA) {
        setState(87);
        match(locationsParser::COMMA);
      }
      setState(90);
      vector();
      setState(93); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == locationsParser::LEFTROUNDBRACKET

    || _la == locationsParser::COMMA);
    setState(95);
    match(locationsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatrixContext ------------------------------------------------------------------

locationsParser::MatrixContext::MatrixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* locationsParser::MatrixContext::KEY_MATRIX() {
  return getToken(locationsParser::KEY_MATRIX, 0);
}

tree::TerminalNode* locationsParser::MatrixContext::LEFTCURLYBRACKET() {
  return getToken(locationsParser::LEFTCURLYBRACKET, 0);
}

std::vector<locationsParser::VectorContext *> locationsParser::MatrixContext::vector() {
  return getRuleContexts<locationsParser::VectorContext>();
}

locationsParser::VectorContext* locationsParser::MatrixContext::vector(size_t i) {
  return getRuleContext<locationsParser::VectorContext>(i);
}

tree::TerminalNode* locationsParser::MatrixContext::RIGHTCURLYBRACKET() {
  return getToken(locationsParser::RIGHTCURLYBRACKET, 0);
}

tree::TerminalNode* locationsParser::MatrixContext::KEY_ROW_MAJOR_ORDER() {
  return getToken(locationsParser::KEY_ROW_MAJOR_ORDER, 0);
}

tree::TerminalNode* locationsParser::MatrixContext::KEY_COL_MAJOR_ORDER() {
  return getToken(locationsParser::KEY_COL_MAJOR_ORDER, 0);
}

std::vector<tree::TerminalNode *> locationsParser::MatrixContext::COMMA() {
  return getTokens(locationsParser::COMMA);
}

tree::TerminalNode* locationsParser::MatrixContext::COMMA(size_t i) {
  return getToken(locationsParser::COMMA, i);
}


size_t locationsParser::MatrixContext::getRuleIndex() const {
  return locationsParser::RuleMatrix;
}

void locationsParser::MatrixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatrix(this);
}

void locationsParser::MatrixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatrix(this);
}


antlrcpp::Any locationsParser::MatrixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitMatrix(this);
  else
    return visitor->visitChildren(this);
}

locationsParser::MatrixContext* locationsParser::matrix() {
  MatrixContext *_localctx = _tracker.createInstance<MatrixContext>(_ctx, getState());
  enterRule(_localctx, 18, locationsParser::RuleMatrix);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    match(locationsParser::KEY_MATRIX);
    setState(98);
    match(locationsParser::LEFTCURLYBRACKET);
    setState(99);
    dynamic_cast<MatrixContext *>(_localctx)->MAJOR_ORDER = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == locationsParser::KEY_ROW_MAJOR_ORDER

    || _la == locationsParser::KEY_COL_MAJOR_ORDER)) {
      dynamic_cast<MatrixContext *>(_localctx)->MAJOR_ORDER = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(100);
    vector();
    setState(107);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == locationsParser::LEFTROUNDBRACKET

    || _la == locationsParser::COMMA) {
      setState(102);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == locationsParser::COMMA) {
        setState(101);
        match(locationsParser::COMMA);
      }
      setState(104);
      vector();
      setState(109);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(110);
    match(locationsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VectorContext ------------------------------------------------------------------

locationsParser::VectorContext::VectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* locationsParser::VectorContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

std::vector<tree::TerminalNode *> locationsParser::VectorContext::NUMBER() {
  return getTokens(locationsParser::NUMBER);
}

tree::TerminalNode* locationsParser::VectorContext::NUMBER(size_t i) {
  return getToken(locationsParser::NUMBER, i);
}

tree::TerminalNode* locationsParser::VectorContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

std::vector<tree::TerminalNode *> locationsParser::VectorContext::PLUS() {
  return getTokens(locationsParser::PLUS);
}

tree::TerminalNode* locationsParser::VectorContext::PLUS(size_t i) {
  return getToken(locationsParser::PLUS, i);
}

std::vector<tree::TerminalNode *> locationsParser::VectorContext::MINUS() {
  return getTokens(locationsParser::MINUS);
}

tree::TerminalNode* locationsParser::VectorContext::MINUS(size_t i) {
  return getToken(locationsParser::MINUS, i);
}

std::vector<tree::TerminalNode *> locationsParser::VectorContext::COMMA() {
  return getTokens(locationsParser::COMMA);
}

tree::TerminalNode* locationsParser::VectorContext::COMMA(size_t i) {
  return getToken(locationsParser::COMMA, i);
}


size_t locationsParser::VectorContext::getRuleIndex() const {
  return locationsParser::RuleVector;
}

void locationsParser::VectorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVector(this);
}

void locationsParser::VectorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVector(this);
}


antlrcpp::Any locationsParser::VectorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitVector(this);
  else
    return visitor->visitChildren(this);
}

locationsParser::VectorContext* locationsParser::vector() {
  VectorContext *_localctx = _tracker.createInstance<VectorContext>(_ctx, getState());
  enterRule(_localctx, 20, locationsParser::RuleVector);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    match(locationsParser::LEFTROUNDBRACKET);
    setState(114);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == locationsParser::PLUS

    || _la == locationsParser::MINUS) {
      setState(113);
      dynamic_cast<VectorContext *>(_localctx)->_tset115 = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == locationsParser::PLUS

      || _la == locationsParser::MINUS)) {
        dynamic_cast<VectorContext *>(_localctx)->_tset115 = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      dynamic_cast<VectorContext *>(_localctx)->OP.push_back(dynamic_cast<VectorContext *>(_localctx)->_tset115);
    }
    setState(116);
    match(locationsParser::NUMBER);
    setState(126);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 59) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 59)) & ((1ULL << (locationsParser::NUMBER - 59))
      | (1ULL << (locationsParser::COMMA - 59))
      | (1ULL << (locationsParser::PLUS - 59))
      | (1ULL << (locationsParser::MINUS - 59)))) != 0)) {
      setState(118);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == locationsParser::COMMA) {
        setState(117);
        match(locationsParser::COMMA);
      }
      setState(121);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == locationsParser::PLUS

      || _la == locationsParser::MINUS) {
        setState(120);
        dynamic_cast<VectorContext *>(_localctx)->_tset135 = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == locationsParser::PLUS

        || _la == locationsParser::MINUS)) {
          dynamic_cast<VectorContext *>(_localctx)->_tset135 = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        dynamic_cast<VectorContext *>(_localctx)->OP.push_back(dynamic_cast<VectorContext *>(_localctx)->_tset135);
      }
      setState(123);
      match(locationsParser::NUMBER);
      setState(128);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(129);
    match(locationsParser::RIGHTROUNDBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntervalhullContext ------------------------------------------------------------------

locationsParser::IntervalhullContext::IntervalhullContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* locationsParser::IntervalhullContext::KEY_INTERVAL_HULL() {
  return getToken(locationsParser::KEY_INTERVAL_HULL, 0);
}

tree::TerminalNode* locationsParser::IntervalhullContext::LEFTCURLYBRACKET() {
  return getToken(locationsParser::LEFTCURLYBRACKET, 0);
}

std::vector<locationsParser::IntervalContext *> locationsParser::IntervalhullContext::interval() {
  return getRuleContexts<locationsParser::IntervalContext>();
}

locationsParser::IntervalContext* locationsParser::IntervalhullContext::interval(size_t i) {
  return getRuleContext<locationsParser::IntervalContext>(i);
}

tree::TerminalNode* locationsParser::IntervalhullContext::RIGHTCURLYBRACKET() {
  return getToken(locationsParser::RIGHTCURLYBRACKET, 0);
}

std::vector<tree::TerminalNode *> locationsParser::IntervalhullContext::COMMA() {
  return getTokens(locationsParser::COMMA);
}

tree::TerminalNode* locationsParser::IntervalhullContext::COMMA(size_t i) {
  return getToken(locationsParser::COMMA, i);
}


size_t locationsParser::IntervalhullContext::getRuleIndex() const {
  return locationsParser::RuleIntervalhull;
}

void locationsParser::IntervalhullContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntervalhull(this);
}

void locationsParser::IntervalhullContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntervalhull(this);
}


antlrcpp::Any locationsParser::IntervalhullContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitIntervalhull(this);
  else
    return visitor->visitChildren(this);
}

locationsParser::IntervalhullContext* locationsParser::intervalhull() {
  IntervalhullContext *_localctx = _tracker.createInstance<IntervalhullContext>(_ctx, getState());
  enterRule(_localctx, 22, locationsParser::RuleIntervalhull);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(locationsParser::KEY_INTERVAL_HULL);
    setState(132);
    match(locationsParser::LEFTCURLYBRACKET);
    setState(133);
    interval();
    setState(140);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == locationsParser::LEFTSQUAREBRACKET

    || _la == locationsParser::COMMA) {
      setState(135);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == locationsParser::COMMA) {
        setState(134);
        match(locationsParser::COMMA);
      }
      setState(137);
      interval();
      setState(142);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(143);
    match(locationsParser::RIGHTCURLYBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstraintsContext ------------------------------------------------------------------

locationsParser::ConstraintsContext::ConstraintsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<locationsParser::ConstraintContext *> locationsParser::ConstraintsContext::constraint() {
  return getRuleContexts<locationsParser::ConstraintContext>();
}

locationsParser::ConstraintContext* locationsParser::ConstraintsContext::constraint(size_t i) {
  return getRuleContext<locationsParser::ConstraintContext>(i);
}


size_t locationsParser::ConstraintsContext::getRuleIndex() const {
  return locationsParser::RuleConstraints;
}

void locationsParser::ConstraintsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstraints(this);
}

void locationsParser::ConstraintsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstraints(this);
}


antlrcpp::Any locationsParser::ConstraintsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitConstraints(this);
  else
    return visitor->visitChildren(this);
}

locationsParser::ConstraintsContext* locationsParser::constraints() {
  ConstraintsContext *_localctx = _tracker.createInstance<ConstraintsContext>(_ctx, getState());
  enterRule(_localctx, 24, locationsParser::RuleConstraints);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(145);
      constraint();
      setState(148); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 29) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 29)) & ((1ULL << (locationsParser::KEY_SIN_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_ARCSIN_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_COS_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_ARCCOS_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_TAN_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_ARCTAN_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_COT_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_ARCCOT_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_LN_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_LOG_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_NATURAL_EXP_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_SINH_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_ARCSINH_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_COSH_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_ARCCOSH_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_TANH_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_ARCTANH_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_COTH_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_ARCCOTH_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_SQR_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_SQRT_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_POWER_FUNCTION - 29))
      | (1ULL << (locationsParser::SCINUM - 29))
      | (1ULL << (locationsParser::NUMBER - 29))
      | (1ULL << (locationsParser::VARIABLE - 29))
      | (1ULL << (locationsParser::LEFTROUNDBRACKET - 29))
      | (1ULL << (locationsParser::PLUS - 29))
      | (1ULL << (locationsParser::MINUS - 29)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstraintContext ------------------------------------------------------------------

locationsParser::ConstraintContext::ConstraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

locationsParser::ExpressionContext* locationsParser::ConstraintContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::ConstraintContext::NUMBER() {
  return getToken(locationsParser::NUMBER, 0);
}

tree::TerminalNode* locationsParser::ConstraintContext::SCINUM() {
  return getToken(locationsParser::SCINUM, 0);
}

tree::TerminalNode* locationsParser::ConstraintContext::EQUAL() {
  return getToken(locationsParser::EQUAL, 0);
}

tree::TerminalNode* locationsParser::ConstraintContext::UNEQUAL() {
  return getToken(locationsParser::UNEQUAL, 0);
}

tree::TerminalNode* locationsParser::ConstraintContext::GEQ() {
  return getToken(locationsParser::GEQ, 0);
}

tree::TerminalNode* locationsParser::ConstraintContext::LEQ() {
  return getToken(locationsParser::LEQ, 0);
}

tree::TerminalNode* locationsParser::ConstraintContext::LSS() {
  return getToken(locationsParser::LSS, 0);
}

tree::TerminalNode* locationsParser::ConstraintContext::GTR() {
  return getToken(locationsParser::GTR, 0);
}

tree::TerminalNode* locationsParser::ConstraintContext::PLUS() {
  return getToken(locationsParser::PLUS, 0);
}

tree::TerminalNode* locationsParser::ConstraintContext::MINUS() {
  return getToken(locationsParser::MINUS, 0);
}


size_t locationsParser::ConstraintContext::getRuleIndex() const {
  return locationsParser::RuleConstraint;
}

void locationsParser::ConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstraint(this);
}

void locationsParser::ConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstraint(this);
}


antlrcpp::Any locationsParser::ConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitConstraint(this);
  else
    return visitor->visitChildren(this);
}

locationsParser::ConstraintContext* locationsParser::constraint() {
  ConstraintContext *_localctx = _tracker.createInstance<ConstraintContext>(_ctx, getState());
  enterRule(_localctx, 26, locationsParser::RuleConstraint);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    expression(0);
    setState(151);
    dynamic_cast<ConstraintContext *>(_localctx)->RELATION = _input->LT(1);
    _la = _input->LA(1);
    if (!(((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (locationsParser::EQUAL - 68))
      | (1ULL << (locationsParser::UNEQUAL - 68))
      | (1ULL << (locationsParser::GEQ - 68))
      | (1ULL << (locationsParser::LEQ - 68))
      | (1ULL << (locationsParser::LSS - 68))
      | (1ULL << (locationsParser::GTR - 68)))) != 0))) {
      dynamic_cast<ConstraintContext *>(_localctx)->RELATION = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(153);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == locationsParser::PLUS

    || _la == locationsParser::MINUS) {
      setState(152);
      dynamic_cast<ConstraintContext *>(_localctx)->OP = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == locationsParser::PLUS

      || _la == locationsParser::MINUS)) {
        dynamic_cast<ConstraintContext *>(_localctx)->OP = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(155);
    _la = _input->LA(1);
    if (!(_la == locationsParser::SCINUM

    || _la == locationsParser::NUMBER)) {
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

//----------------- SystemContext ------------------------------------------------------------------

locationsParser::SystemContext::SystemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<locationsParser::FormulaContext *> locationsParser::SystemContext::formula() {
  return getRuleContexts<locationsParser::FormulaContext>();
}

locationsParser::FormulaContext* locationsParser::SystemContext::formula(size_t i) {
  return getRuleContext<locationsParser::FormulaContext>(i);
}


size_t locationsParser::SystemContext::getRuleIndex() const {
  return locationsParser::RuleSystem;
}

void locationsParser::SystemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSystem(this);
}

void locationsParser::SystemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSystem(this);
}


antlrcpp::Any locationsParser::SystemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitSystem(this);
  else
    return visitor->visitChildren(this);
}

locationsParser::SystemContext* locationsParser::system() {
  SystemContext *_localctx = _tracker.createInstance<SystemContext>(_ctx, getState());
  enterRule(_localctx, 28, locationsParser::RuleSystem);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(157);
      formula();
      setState(160); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == locationsParser::VARIABLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormulaContext ------------------------------------------------------------------

locationsParser::FormulaContext::FormulaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* locationsParser::FormulaContext::VARIABLE() {
  return getToken(locationsParser::VARIABLE, 0);
}

tree::TerminalNode* locationsParser::FormulaContext::ASSIGN() {
  return getToken(locationsParser::ASSIGN, 0);
}

locationsParser::ExpressionContext* locationsParser::FormulaContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::FormulaContext::DERIVATIVE() {
  return getToken(locationsParser::DERIVATIVE, 0);
}

locationsParser::IntervalContext* locationsParser::FormulaContext::interval() {
  return getRuleContext<locationsParser::IntervalContext>(0);
}


size_t locationsParser::FormulaContext::getRuleIndex() const {
  return locationsParser::RuleFormula;
}

void locationsParser::FormulaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormula(this);
}

void locationsParser::FormulaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormula(this);
}


antlrcpp::Any locationsParser::FormulaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitFormula(this);
  else
    return visitor->visitChildren(this);
}

locationsParser::FormulaContext* locationsParser::formula() {
  FormulaContext *_localctx = _tracker.createInstance<FormulaContext>(_ctx, getState());
  enterRule(_localctx, 30, locationsParser::RuleFormula);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    match(locationsParser::VARIABLE);
    setState(164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == locationsParser::DERIVATIVE) {
      setState(163);
      match(locationsParser::DERIVATIVE);
    }
    setState(166);
    match(locationsParser::ASSIGN);
    setState(167);
    expression(0);
    setState(169);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == locationsParser::LEFTSQUAREBRACKET) {
      setState(168);
      interval();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntervalContext ------------------------------------------------------------------

locationsParser::IntervalContext::IntervalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* locationsParser::IntervalContext::LEFTSQUAREBRACKET() {
  return getToken(locationsParser::LEFTSQUAREBRACKET, 0);
}

tree::TerminalNode* locationsParser::IntervalContext::COMMA() {
  return getToken(locationsParser::COMMA, 0);
}

tree::TerminalNode* locationsParser::IntervalContext::RIGHTSQUAREBRACKET() {
  return getToken(locationsParser::RIGHTSQUAREBRACKET, 0);
}

std::vector<tree::TerminalNode *> locationsParser::IntervalContext::NUMBER() {
  return getTokens(locationsParser::NUMBER);
}

tree::TerminalNode* locationsParser::IntervalContext::NUMBER(size_t i) {
  return getToken(locationsParser::NUMBER, i);
}

std::vector<tree::TerminalNode *> locationsParser::IntervalContext::SCINUM() {
  return getTokens(locationsParser::SCINUM);
}

tree::TerminalNode* locationsParser::IntervalContext::SCINUM(size_t i) {
  return getToken(locationsParser::SCINUM, i);
}

std::vector<tree::TerminalNode *> locationsParser::IntervalContext::KEY_INFINITY() {
  return getTokens(locationsParser::KEY_INFINITY);
}

tree::TerminalNode* locationsParser::IntervalContext::KEY_INFINITY(size_t i) {
  return getToken(locationsParser::KEY_INFINITY, i);
}

std::vector<tree::TerminalNode *> locationsParser::IntervalContext::PLUS() {
  return getTokens(locationsParser::PLUS);
}

tree::TerminalNode* locationsParser::IntervalContext::PLUS(size_t i) {
  return getToken(locationsParser::PLUS, i);
}

std::vector<tree::TerminalNode *> locationsParser::IntervalContext::MINUS() {
  return getTokens(locationsParser::MINUS);
}

tree::TerminalNode* locationsParser::IntervalContext::MINUS(size_t i) {
  return getToken(locationsParser::MINUS, i);
}


size_t locationsParser::IntervalContext::getRuleIndex() const {
  return locationsParser::RuleInterval;
}

void locationsParser::IntervalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterval(this);
}

void locationsParser::IntervalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterval(this);
}


antlrcpp::Any locationsParser::IntervalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitInterval(this);
  else
    return visitor->visitChildren(this);
}

locationsParser::IntervalContext* locationsParser::interval() {
  IntervalContext *_localctx = _tracker.createInstance<IntervalContext>(_ctx, getState());
  enterRule(_localctx, 32, locationsParser::RuleInterval);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    match(locationsParser::LEFTSQUAREBRACKET);
    setState(173);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == locationsParser::PLUS

    || _la == locationsParser::MINUS) {
      setState(172);
      dynamic_cast<IntervalContext *>(_localctx)->_tset270 = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == locationsParser::PLUS

      || _la == locationsParser::MINUS)) {
        dynamic_cast<IntervalContext *>(_localctx)->_tset270 = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      dynamic_cast<IntervalContext *>(_localctx)->OP.push_back(dynamic_cast<IntervalContext *>(_localctx)->_tset270);
    }
    setState(175);
    dynamic_cast<IntervalContext *>(_localctx)->_tset283 = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << locationsParser::KEY_INFINITY)
      | (1ULL << locationsParser::SCINUM)
      | (1ULL << locationsParser::NUMBER))) != 0))) {
      dynamic_cast<IntervalContext *>(_localctx)->_tset283 = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    dynamic_cast<IntervalContext *>(_localctx)->VAL.push_back(dynamic_cast<IntervalContext *>(_localctx)->_tset283);
    setState(176);
    match(locationsParser::COMMA);
    setState(178);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == locationsParser::PLUS

    || _la == locationsParser::MINUS) {
      setState(177);
      dynamic_cast<IntervalContext *>(_localctx)->_tset303 = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == locationsParser::PLUS

      || _la == locationsParser::MINUS)) {
        dynamic_cast<IntervalContext *>(_localctx)->_tset303 = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      dynamic_cast<IntervalContext *>(_localctx)->OP.push_back(dynamic_cast<IntervalContext *>(_localctx)->_tset303);
    }
    setState(180);
    dynamic_cast<IntervalContext *>(_localctx)->_tset316 = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << locationsParser::KEY_INFINITY)
      | (1ULL << locationsParser::SCINUM)
      | (1ULL << locationsParser::NUMBER))) != 0))) {
      dynamic_cast<IntervalContext *>(_localctx)->_tset316 = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    dynamic_cast<IntervalContext *>(_localctx)->VAL.push_back(dynamic_cast<IntervalContext *>(_localctx)->_tset316);
    setState(181);
    match(locationsParser::RIGHTSQUAREBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

locationsParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t locationsParser::ExpressionContext::getRuleIndex() const {
  return locationsParser::RuleExpression;
}

void locationsParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TanExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::TanExpContext::KEY_TAN_FUNCTION() {
  return getToken(locationsParser::KEY_TAN_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::TanExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::TanExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::TanExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::TanExpContext::TanExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::TanExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTanExp(this);
}
void locationsParser::TanExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTanExp(this);
}

antlrcpp::Any locationsParser::TanExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitTanExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SqrExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::SqrExpContext::KEY_SQR_FUNCTION() {
  return getToken(locationsParser::KEY_SQR_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::SqrExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::SqrExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::SqrExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::SqrExpContext::SqrExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::SqrExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSqrExp(this);
}
void locationsParser::SqrExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSqrExp(this);
}

antlrcpp::Any locationsParser::SqrExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitSqrExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstantContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::ConstantContext::NUMBER() {
  return getToken(locationsParser::NUMBER, 0);
}

tree::TerminalNode* locationsParser::ConstantContext::SCINUM() {
  return getToken(locationsParser::SCINUM, 0);
}

locationsParser::ConstantContext::ConstantContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}
void locationsParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}

antlrcpp::Any locationsParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AsinhExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::AsinhExpContext::KEY_ARCSINH_FUNCTION() {
  return getToken(locationsParser::KEY_ARCSINH_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::AsinhExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::AsinhExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::AsinhExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::AsinhExpContext::AsinhExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::AsinhExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsinhExp(this);
}
void locationsParser::AsinhExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsinhExp(this);
}

antlrcpp::Any locationsParser::AsinhExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitAsinhExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcosExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::AcosExpContext::KEY_ARCCOS_FUNCTION() {
  return getToken(locationsParser::KEY_ARCCOS_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::AcosExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::AcosExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::AcosExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::AcosExpContext::AcosExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::AcosExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcosExp(this);
}
void locationsParser::AcosExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcosExp(this);
}

antlrcpp::Any locationsParser::AcosExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitAcosExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcothExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::AcothExpContext::KEY_ARCCOTH_FUNCTION() {
  return getToken(locationsParser::KEY_ARCCOTH_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::AcothExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::AcothExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::AcothExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::AcothExpContext::AcothExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::AcothExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcothExp(this);
}
void locationsParser::AcothExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcothExp(this);
}

antlrcpp::Any locationsParser::AcothExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitAcothExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcoshExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::AcoshExpContext::KEY_ARCCOSH_FUNCTION() {
  return getToken(locationsParser::KEY_ARCCOSH_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::AcoshExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::AcoshExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::AcoshExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::AcoshExpContext::AcoshExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::AcoshExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcoshExp(this);
}
void locationsParser::AcoshExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcoshExp(this);
}

antlrcpp::Any locationsParser::AcoshExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitAcoshExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CosExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::CosExpContext::KEY_COS_FUNCTION() {
  return getToken(locationsParser::KEY_COS_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::CosExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::CosExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::CosExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::CosExpContext::CosExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::CosExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCosExp(this);
}
void locationsParser::CosExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCosExp(this);
}

antlrcpp::Any locationsParser::CosExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitCosExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::PowExpContext::KEY_POWER_FUNCTION() {
  return getToken(locationsParser::KEY_POWER_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::PowExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

std::vector<locationsParser::ExpressionContext *> locationsParser::PowExpContext::expression() {
  return getRuleContexts<locationsParser::ExpressionContext>();
}

locationsParser::ExpressionContext* locationsParser::PowExpContext::expression(size_t i) {
  return getRuleContext<locationsParser::ExpressionContext>(i);
}

tree::TerminalNode* locationsParser::PowExpContext::COMMA() {
  return getToken(locationsParser::COMMA, 0);
}

tree::TerminalNode* locationsParser::PowExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::PowExpContext::PowExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::PowExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowExp(this);
}
void locationsParser::PowExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowExp(this);
}

antlrcpp::Any locationsParser::PowExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitPowExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CothExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::CothExpContext::KEY_COTH_FUNCTION() {
  return getToken(locationsParser::KEY_COTH_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::CothExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::CothExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::CothExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::CothExpContext::CothExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::CothExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCothExp(this);
}
void locationsParser::CothExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCothExp(this);
}

antlrcpp::Any locationsParser::CothExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitCothExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PosExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::PosExpContext::PLUS() {
  return getToken(locationsParser::PLUS, 0);
}

locationsParser::ExpressionContext* locationsParser::PosExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

locationsParser::PosExpContext::PosExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::PosExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPosExp(this);
}
void locationsParser::PosExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPosExp(this);
}

antlrcpp::Any locationsParser::PosExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitPosExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::NegExpContext::MINUS() {
  return getToken(locationsParser::MINUS, 0);
}

locationsParser::ExpressionContext* locationsParser::NegExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

locationsParser::NegExpContext::NegExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::NegExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegExp(this);
}
void locationsParser::NegExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegExp(this);
}

antlrcpp::Any locationsParser::NegExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitNegExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpBraContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::ExpBraContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::ExpBraContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::ExpBraContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::ExpBraContext::ExpBraContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::ExpBraContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpBra(this);
}
void locationsParser::ExpBraContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpBra(this);
}

antlrcpp::Any locationsParser::ExpBraContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitExpBra(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtanhExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::AtanhExpContext::KEY_ARCTANH_FUNCTION() {
  return getToken(locationsParser::KEY_ARCTANH_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::AtanhExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::AtanhExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::AtanhExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::AtanhExpContext::AtanhExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::AtanhExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtanhExp(this);
}
void locationsParser::AtanhExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtanhExp(this);
}

antlrcpp::Any locationsParser::AtanhExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitAtanhExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SinExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::SinExpContext::KEY_SIN_FUNCTION() {
  return getToken(locationsParser::KEY_SIN_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::SinExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::SinExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::SinExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::SinExpContext::SinExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::SinExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSinExp(this);
}
void locationsParser::SinExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSinExp(this);
}

antlrcpp::Any locationsParser::SinExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitSinExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LnExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::LnExpContext::KEY_LN_FUNCTION() {
  return getToken(locationsParser::KEY_LN_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::LnExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::LnExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::LnExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::LnExpContext::LnExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::LnExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLnExp(this);
}
void locationsParser::LnExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLnExp(this);
}

antlrcpp::Any locationsParser::LnExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitLnExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TanhExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::TanhExpContext::KEY_TANH_FUNCTION() {
  return getToken(locationsParser::KEY_TANH_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::TanhExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::TanhExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::TanhExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::TanhExpContext::TanhExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::TanhExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTanhExp(this);
}
void locationsParser::TanhExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTanhExp(this);
}

antlrcpp::Any locationsParser::TanhExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitTanhExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SqrtExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::SqrtExpContext::KEY_SQRT_FUNCTION() {
  return getToken(locationsParser::KEY_SQRT_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::SqrtExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::SqrtExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::SqrtExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::SqrtExpContext::SqrtExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::SqrtExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSqrtExp(this);
}
void locationsParser::SqrtExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSqrtExp(this);
}

antlrcpp::Any locationsParser::SqrtExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitSqrtExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpMulDivContext ------------------------------------------------------------------

std::vector<locationsParser::ExpressionContext *> locationsParser::ExpMulDivContext::expression() {
  return getRuleContexts<locationsParser::ExpressionContext>();
}

locationsParser::ExpressionContext* locationsParser::ExpMulDivContext::expression(size_t i) {
  return getRuleContext<locationsParser::ExpressionContext>(i);
}

tree::TerminalNode* locationsParser::ExpMulDivContext::MULTIPLY() {
  return getToken(locationsParser::MULTIPLY, 0);
}

tree::TerminalNode* locationsParser::ExpMulDivContext::DIVIDE() {
  return getToken(locationsParser::DIVIDE, 0);
}

locationsParser::ExpMulDivContext::ExpMulDivContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::ExpMulDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpMulDiv(this);
}
void locationsParser::ExpMulDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpMulDiv(this);
}

antlrcpp::Any locationsParser::ExpMulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitExpMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtanExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::AtanExpContext::KEY_ARCTAN_FUNCTION() {
  return getToken(locationsParser::KEY_ARCTAN_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::AtanExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::AtanExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::AtanExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::AtanExpContext::AtanExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::AtanExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtanExp(this);
}
void locationsParser::AtanExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtanExp(this);
}

antlrcpp::Any locationsParser::AtanExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitAtanExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcotExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::AcotExpContext::KEY_ARCCOT_FUNCTION() {
  return getToken(locationsParser::KEY_ARCCOT_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::AcotExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::AcotExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::AcotExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::AcotExpContext::AcotExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::AcotExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcotExp(this);
}
void locationsParser::AcotExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcotExp(this);
}

antlrcpp::Any locationsParser::AcotExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitAcotExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpExpContext ------------------------------------------------------------------

std::vector<locationsParser::ExpressionContext *> locationsParser::ExpExpContext::expression() {
  return getRuleContexts<locationsParser::ExpressionContext>();
}

locationsParser::ExpressionContext* locationsParser::ExpExpContext::expression(size_t i) {
  return getRuleContext<locationsParser::ExpressionContext>(i);
}

tree::TerminalNode* locationsParser::ExpExpContext::EXPONENT() {
  return getToken(locationsParser::EXPONENT, 0);
}

locationsParser::ExpExpContext::ExpExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::ExpExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpExp(this);
}
void locationsParser::ExpExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpExp(this);
}

antlrcpp::Any locationsParser::ExpExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitExpExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CoshExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::CoshExpContext::KEY_COSH_FUNCTION() {
  return getToken(locationsParser::KEY_COSH_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::CoshExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::CoshExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::CoshExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::CoshExpContext::CoshExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::CoshExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCoshExp(this);
}
void locationsParser::CoshExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCoshExp(this);
}

antlrcpp::Any locationsParser::CoshExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitCoshExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::LogExpContext::KEY_LOG_FUNCTION() {
  return getToken(locationsParser::KEY_LOG_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::LogExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::LogExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::LogExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::LogExpContext::LogExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::LogExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogExp(this);
}
void locationsParser::LogExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogExp(this);
}

antlrcpp::Any locationsParser::LogExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitLogExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AsinExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::AsinExpContext::KEY_ARCSIN_FUNCTION() {
  return getToken(locationsParser::KEY_ARCSIN_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::AsinExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::AsinExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::AsinExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::AsinExpContext::AsinExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::AsinExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsinExp(this);
}
void locationsParser::AsinExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsinExp(this);
}

antlrcpp::Any locationsParser::AsinExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitAsinExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CotExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::CotExpContext::KEY_COT_FUNCTION() {
  return getToken(locationsParser::KEY_COT_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::CotExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::CotExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::CotExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::CotExpContext::CotExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::CotExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCotExp(this);
}
void locationsParser::CotExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCotExp(this);
}

antlrcpp::Any locationsParser::CotExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitCotExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::VariableContext::VARIABLE() {
  return getToken(locationsParser::VARIABLE, 0);
}

locationsParser::VariableContext::VariableContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}
void locationsParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}

antlrcpp::Any locationsParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SinhExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::SinhExpContext::KEY_SINH_FUNCTION() {
  return getToken(locationsParser::KEY_SINH_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::SinhExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::SinhExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::SinhExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::SinhExpContext::SinhExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::SinhExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSinhExp(this);
}
void locationsParser::SinhExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSinhExp(this);
}

antlrcpp::Any locationsParser::SinhExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitSinhExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NexpExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::NexpExpContext::KEY_NATURAL_EXP_FUNCTION() {
  return getToken(locationsParser::KEY_NATURAL_EXP_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::NexpExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::ExpressionContext* locationsParser::NexpExpContext::expression() {
  return getRuleContext<locationsParser::ExpressionContext>(0);
}

tree::TerminalNode* locationsParser::NexpExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::NexpExpContext::NexpExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::NexpExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNexpExp(this);
}
void locationsParser::NexpExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNexpExp(this);
}

antlrcpp::Any locationsParser::NexpExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitNexpExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpAddSubContext ------------------------------------------------------------------

std::vector<locationsParser::ExpressionContext *> locationsParser::ExpAddSubContext::expression() {
  return getRuleContexts<locationsParser::ExpressionContext>();
}

locationsParser::ExpressionContext* locationsParser::ExpAddSubContext::expression(size_t i) {
  return getRuleContext<locationsParser::ExpressionContext>(i);
}

tree::TerminalNode* locationsParser::ExpAddSubContext::PLUS() {
  return getToken(locationsParser::PLUS, 0);
}

tree::TerminalNode* locationsParser::ExpAddSubContext::MINUS() {
  return getToken(locationsParser::MINUS, 0);
}

locationsParser::ExpAddSubContext::ExpAddSubContext(ExpressionContext *ctx) { copyFrom(ctx); }

void locationsParser::ExpAddSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpAddSub(this);
}
void locationsParser::ExpAddSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpAddSub(this);
}

antlrcpp::Any locationsParser::ExpAddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitExpAddSub(this);
  else
    return visitor->visitChildren(this);
}

locationsParser::ExpressionContext* locationsParser::expression() {
   return expression(0);
}

locationsParser::ExpressionContext* locationsParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  locationsParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  locationsParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, locationsParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(306);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case locationsParser::PLUS: {
        _localctx = _tracker.createInstance<PosExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(184);
        match(locationsParser::PLUS);
        setState(185);
        expression(29);
        break;
      }

      case locationsParser::MINUS: {
        _localctx = _tracker.createInstance<NegExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(186);
        match(locationsParser::MINUS);
        setState(187);
        expression(28);
        break;
      }

      case locationsParser::LEFTROUNDBRACKET: {
        _localctx = _tracker.createInstance<ExpBraContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(188);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(189);
        expression(0);
        setState(190);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_SIN_FUNCTION: {
        _localctx = _tracker.createInstance<SinExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(192);
        match(locationsParser::KEY_SIN_FUNCTION);
        setState(193);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(194);
        expression(0);
        setState(195);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCSIN_FUNCTION: {
        _localctx = _tracker.createInstance<AsinExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(197);
        match(locationsParser::KEY_ARCSIN_FUNCTION);
        setState(198);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(199);
        expression(0);
        setState(200);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_COS_FUNCTION: {
        _localctx = _tracker.createInstance<CosExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(202);
        match(locationsParser::KEY_COS_FUNCTION);
        setState(203);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(204);
        expression(0);
        setState(205);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCCOS_FUNCTION: {
        _localctx = _tracker.createInstance<AcosExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(207);
        match(locationsParser::KEY_ARCCOS_FUNCTION);
        setState(208);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(209);
        expression(0);
        setState(210);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_TAN_FUNCTION: {
        _localctx = _tracker.createInstance<TanExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(212);
        match(locationsParser::KEY_TAN_FUNCTION);
        setState(213);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(214);
        expression(0);
        setState(215);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCTAN_FUNCTION: {
        _localctx = _tracker.createInstance<AtanExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(217);
        match(locationsParser::KEY_ARCTAN_FUNCTION);
        setState(218);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(219);
        expression(0);
        setState(220);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_COT_FUNCTION: {
        _localctx = _tracker.createInstance<CotExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(222);
        match(locationsParser::KEY_COT_FUNCTION);
        setState(223);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(224);
        expression(0);
        setState(225);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCCOT_FUNCTION: {
        _localctx = _tracker.createInstance<AcotExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(227);
        match(locationsParser::KEY_ARCCOT_FUNCTION);
        setState(228);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(229);
        expression(0);
        setState(230);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_SINH_FUNCTION: {
        _localctx = _tracker.createInstance<SinhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(232);
        match(locationsParser::KEY_SINH_FUNCTION);
        setState(233);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(234);
        expression(0);
        setState(235);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCSINH_FUNCTION: {
        _localctx = _tracker.createInstance<AsinhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(237);
        match(locationsParser::KEY_ARCSINH_FUNCTION);
        setState(238);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(239);
        expression(0);
        setState(240);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_COSH_FUNCTION: {
        _localctx = _tracker.createInstance<CoshExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(242);
        match(locationsParser::KEY_COSH_FUNCTION);
        setState(243);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(244);
        expression(0);
        setState(245);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCCOSH_FUNCTION: {
        _localctx = _tracker.createInstance<AcoshExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(247);
        match(locationsParser::KEY_ARCCOSH_FUNCTION);
        setState(248);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(249);
        expression(0);
        setState(250);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_TANH_FUNCTION: {
        _localctx = _tracker.createInstance<TanhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(252);
        match(locationsParser::KEY_TANH_FUNCTION);
        setState(253);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(254);
        expression(0);
        setState(255);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCTANH_FUNCTION: {
        _localctx = _tracker.createInstance<AtanhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(257);
        match(locationsParser::KEY_ARCTANH_FUNCTION);
        setState(258);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(259);
        expression(0);
        setState(260);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_COTH_FUNCTION: {
        _localctx = _tracker.createInstance<CothExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(262);
        match(locationsParser::KEY_COTH_FUNCTION);
        setState(263);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(264);
        expression(0);
        setState(265);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCCOTH_FUNCTION: {
        _localctx = _tracker.createInstance<AcothExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(267);
        match(locationsParser::KEY_ARCCOTH_FUNCTION);
        setState(268);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(269);
        expression(0);
        setState(270);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_LN_FUNCTION: {
        _localctx = _tracker.createInstance<LnExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(272);
        match(locationsParser::KEY_LN_FUNCTION);
        setState(273);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(274);
        expression(0);
        setState(275);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_LOG_FUNCTION: {
        _localctx = _tracker.createInstance<LogExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(277);
        match(locationsParser::KEY_LOG_FUNCTION);
        setState(278);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(279);
        expression(0);
        setState(280);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_NATURAL_EXP_FUNCTION: {
        _localctx = _tracker.createInstance<NexpExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(282);
        match(locationsParser::KEY_NATURAL_EXP_FUNCTION);
        setState(283);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(284);
        expression(0);
        setState(285);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_SQR_FUNCTION: {
        _localctx = _tracker.createInstance<SqrExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(287);
        match(locationsParser::KEY_SQR_FUNCTION);
        setState(288);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(289);
        expression(0);
        setState(290);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_SQRT_FUNCTION: {
        _localctx = _tracker.createInstance<SqrtExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(292);
        match(locationsParser::KEY_SQRT_FUNCTION);
        setState(293);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(294);
        expression(0);
        setState(295);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_POWER_FUNCTION: {
        _localctx = _tracker.createInstance<PowExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(297);
        match(locationsParser::KEY_POWER_FUNCTION);
        setState(298);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(299);
        expression(0);
        setState(300);
        match(locationsParser::COMMA);
        setState(301);
        expression(0);
        setState(302);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::SCINUM:
      case locationsParser::NUMBER: {
        _localctx = _tracker.createInstance<ConstantContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(304);
        _la = _input->LA(1);
        if (!(_la == locationsParser::SCINUM

        || _la == locationsParser::NUMBER)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case locationsParser::VARIABLE: {
        _localctx = _tracker.createInstance<VariableContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(305);
        match(locationsParser::VARIABLE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(319);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(317);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExpExpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(308);

          if (!(precpred(_ctx, 30))) throw FailedPredicateException(this, "precpred(_ctx, 30)");
          setState(309);
          match(locationsParser::EXPONENT);
          setState(310);
          expression(31);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ExpMulDivContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(311);

          if (!(precpred(_ctx, 27))) throw FailedPredicateException(this, "precpred(_ctx, 27)");
          setState(312);
          dynamic_cast<ExpMulDivContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == locationsParser::MULTIPLY

          || _la == locationsParser::DIVIDE)) {
            dynamic_cast<ExpMulDivContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(313);
          expression(28);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ExpAddSubContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(314);

          if (!(precpred(_ctx, 26))) throw FailedPredicateException(this, "precpred(_ctx, 26)");
          setState(315);
          dynamic_cast<ExpAddSubContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == locationsParser::PLUS

          || _la == locationsParser::MINUS)) {
            dynamic_cast<ExpAddSubContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(316);
          expression(27);
          break;
        }

        } 
      }
      setState(321);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool locationsParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 17: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool locationsParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 30);
    case 1: return precpred(_ctx, 27);
    case 2: return precpred(_ctx, 26);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> locationsParser::_decisionToDFA;
atn::PredictionContextCache locationsParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN locationsParser::_atn;
std::vector<uint16_t> locationsParser::_serializedATN;

std::vector<std::string> locationsParser::_ruleNames = {
  "modelid", "flows", "invariantcondition", "model", "locations", "condition", 
  "polytope", "hpolytope", "vpolytope", "matrix", "vector", "intervalhull", 
  "constraints", "constraint", "system", "formula", "interval", "expression"
};

std::vector<std::string> locationsParser::_literalNames = {
  "", "'LOCATIONS'", "'MODEL'", "'FLOWS'", "'INVARIANT_CONDITIONS'", "'SETTINGS'", 
  "'ANALYSIS'", "'FORWARD'", "'BACKWARD'", "'TIME_HORIZON'", "'STEP'", "'GEOMETRY'", 
  "'PLOT'", "'PRINT'", "'MAX_JUMP'", "'START_MODEL_ID'", "'INITIAL_CONDITION'", 
  "'TRANSITIONS'", "'URGENT'", "'JUMP'", "'DIRECTION'", "'GUARD_CONDITIONS'", 
  "'RESET_MAP'", "'INTERVAL_HULL'", "'POLYTOPE'", "'CONDITION'", "'MATRIX'", 
  "'ROW_MAJOR'", "'COL_MAJOR'", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "'NAME'", "'ON'", 
  "'OFF'", "'TRUE'", "'FALSE'", "", "", "", "", "'{'", "'}'", "'('", "')'", 
  "'['", "']'", "','", "'=='", "'!='", "'>='", "'<='", "'<'", "'>'", "':='", 
  "", "'='", "'+'", "'-'", "'*'", "'/'", "'^'", "'''"
};

std::vector<std::string> locationsParser::_symbolicNames = {
  "", "KEY_LOCATIONS", "KEY_MODEL", "KEY_FLOWS", "KEY_INVARIANT_CONDITIONS", 
  "KEY_SETTINGS", "KEY_ANALYSIS", "KEY_ANALYSIS_FORWARD", "KEY_ANALYSIS_BACKWARD", 
  "KEY_TIME_HORIZON", "KEY_STEP", "KEY_GEOMETRY", "KEY_PLOT_FLAG", "KEY_PRINT_FLAG", 
  "KEY_MAX_JUMP", "KEY_START_MODEL_ID", "KEY_INITIAL_CONDITION", "KEY_TRANSITIONS", 
  "KEY_URGENT", "KEY_JUMP", "KEY_DIRECTION", "KEY_GUARD_CONDITIONS", "KEY_RESET_MAP", 
  "KEY_INTERVAL_HULL", "KEY_POLYTOPE", "KEY_CONDITION", "KEY_MATRIX", "KEY_ROW_MAJOR_ORDER", 
  "KEY_COL_MAJOR_ORDER", "KEY_SIN_FUNCTION", "KEY_ARCSIN_FUNCTION", "KEY_COS_FUNCTION", 
  "KEY_ARCCOS_FUNCTION", "KEY_TAN_FUNCTION", "KEY_ARCTAN_FUNCTION", "KEY_COT_FUNCTION", 
  "KEY_ARCCOT_FUNCTION", "KEY_LN_FUNCTION", "KEY_LOG_FUNCTION", "KEY_NATURAL_EXP_FUNCTION", 
  "KEY_SINH_FUNCTION", "KEY_ARCSINH_FUNCTION", "KEY_COSH_FUNCTION", "KEY_ARCCOSH_FUNCTION", 
  "KEY_TANH_FUNCTION", "KEY_ARCTANH_FUNCTION", "KEY_COTH_FUNCTION", "KEY_ARCCOTH_FUNCTION", 
  "KEY_SQR_FUNCTION", "KEY_SQRT_FUNCTION", "KEY_ABS_FUNCTION", "KEY_POWER_FUNCTION", 
  "KEY_NAME", "KEY_SWITCH_ON", "KEY_SWITCH_OFF", "KEY_BOOL_TRUE", "KEY_BOOL_FALSE", 
  "KEY_INFINITY", "SCINUM", "NUMBER", "VARIABLE", "LEFTCURLYBRACKET", "RIGHTCURLYBRACKET", 
  "LEFTROUNDBRACKET", "RIGHTROUNDBRACKET", "LEFTSQUAREBRACKET", "RIGHTSQUAREBRACKET", 
  "COMMA", "EQUAL", "UNEQUAL", "GEQ", "LEQ", "LSS", "GTR", "DEFINE", "FROMTO", 
  "ASSIGN", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "EXPONENT", "DERIVATIVE", 
  "COMMENT", "WS"
};

dfa::Vocabulary locationsParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> locationsParser::_tokenNames;

locationsParser::Initializer::Initializer() {
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
    0x3, 0x56, 0x145, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x32, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x6, 0x6, 0x40, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0x41, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x4a, 
    0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0x51, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x5b, 0xa, 0xa, 0x3, 0xa, 0x6, 0xa, 
    0x5e, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x5f, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x69, 0xa, 0xb, 0x3, 
    0xb, 0x7, 0xb, 0x6c, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x6f, 0xb, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x75, 0xa, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x5, 0xc, 0x79, 0xa, 0xc, 0x3, 0xc, 0x5, 0xc, 0x7c, 0xa, 0xc, 
    0x3, 0xc, 0x7, 0xc, 0x7f, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x82, 0xb, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 
    0x8a, 0xa, 0xd, 0x3, 0xd, 0x7, 0xd, 0x8d, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 
    0x90, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x6, 0xe, 0x95, 0xa, 0xe, 
    0xd, 0xe, 0xe, 0xe, 0x96, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x9c, 
    0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x6, 0x10, 0xa1, 0xa, 0x10, 
    0xd, 0x10, 0xe, 0x10, 0xa2, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xa7, 0xa, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xac, 0xa, 0x11, 0x3, 
    0x12, 0x3, 0x12, 0x5, 0x12, 0xb0, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x5, 0x12, 0xb5, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 
    0x135, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x140, 0xa, 0x13, 
    0xc, 0x13, 0xe, 0x13, 0x143, 0xb, 0x13, 0x3, 0x13, 0x2, 0x3, 0x24, 0x14, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x2, 0x8, 0x3, 0x2, 0x1d, 0x1e, 0x3, 0x2, 
    0x4f, 0x50, 0x3, 0x2, 0x46, 0x4b, 0x3, 0x2, 0x3c, 0x3d, 0x3, 0x2, 0x3b, 
    0x3d, 0x3, 0x2, 0x51, 0x52, 0x2, 0x164, 0x2, 0x26, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x29, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x3c, 0x3, 0x2, 0x2, 0x2, 0xc, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x10, 0x52, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x57, 0x3, 0x2, 0x2, 0x2, 0x14, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x72, 0x3, 0x2, 0x2, 0x2, 0x18, 0x85, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x94, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x98, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xa0, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x22, 0xad, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0x134, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x7, 0x36, 
    0x2, 0x2, 0x27, 0x28, 0x7, 0x3e, 0x2, 0x2, 0x28, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x29, 0x2a, 0x7, 0x5, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x3f, 0x2, 0x2, 
    0x2b, 0x2c, 0x5, 0x1e, 0x10, 0x2, 0x2c, 0x2d, 0x7, 0x40, 0x2, 0x2, 0x2d, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x6, 0x2, 0x2, 0x2f, 0x31, 
    0x7, 0x3f, 0x2, 0x2, 0x30, 0x32, 0x5, 0xc, 0x7, 0x2, 0x31, 0x30, 0x3, 
    0x2, 0x2, 0x2, 0x31, 0x32, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0x33, 0x34, 0x7, 0x40, 0x2, 0x2, 0x34, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x35, 0x36, 0x7, 0x4, 0x2, 0x2, 0x36, 0x37, 0x7, 0x3f, 0x2, 0x2, 
    0x37, 0x38, 0x5, 0x2, 0x2, 0x2, 0x38, 0x39, 0x5, 0x4, 0x3, 0x2, 0x39, 
    0x3a, 0x5, 0x6, 0x4, 0x2, 0x3a, 0x3b, 0x7, 0x40, 0x2, 0x2, 0x3b, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x7, 0x3, 0x2, 0x2, 0x3d, 0x3f, 0x7, 
    0x3f, 0x2, 0x2, 0x3e, 0x40, 0x5, 0x8, 0x5, 0x2, 0x3f, 0x3e, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x41, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 
    0x2, 0x41, 0x42, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 
    0x43, 0x44, 0x7, 0x40, 0x2, 0x2, 0x44, 0xb, 0x3, 0x2, 0x2, 0x2, 0x45, 
    0x46, 0x7, 0x1b, 0x2, 0x2, 0x46, 0x49, 0x7, 0x3f, 0x2, 0x2, 0x47, 0x4a, 
    0x5, 0x18, 0xd, 0x2, 0x48, 0x4a, 0x5, 0xe, 0x8, 0x2, 0x49, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x49, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x4b, 0x4c, 0x7, 0x40, 0x2, 0x2, 0x4c, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x4d, 0x50, 0x7, 0x1a, 0x2, 0x2, 0x4e, 0x51, 0x5, 0x10, 0x9, 0x2, 
    0x4f, 0x51, 0x5, 0x12, 0xa, 0x2, 0x50, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x50, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0xf, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 
    0x7, 0x3f, 0x2, 0x2, 0x53, 0x54, 0x5, 0x14, 0xb, 0x2, 0x54, 0x55, 0x5, 
    0x16, 0xc, 0x2, 0x55, 0x56, 0x7, 0x40, 0x2, 0x2, 0x56, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x57, 0x58, 0x7, 0x3f, 0x2, 0x2, 0x58, 0x5d, 0x5, 0x16, 0xc, 
    0x2, 0x59, 0x5b, 0x7, 0x45, 0x2, 0x2, 0x5a, 0x59, 0x3, 0x2, 0x2, 0x2, 
    0x5a, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x5e, 0x5, 0x16, 0xc, 0x2, 0x5d, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x7, 0x40, 
    0x2, 0x2, 0x62, 0x13, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x7, 0x1c, 0x2, 
    0x2, 0x64, 0x65, 0x7, 0x3f, 0x2, 0x2, 0x65, 0x66, 0x9, 0x2, 0x2, 0x2, 
    0x66, 0x6d, 0x5, 0x16, 0xc, 0x2, 0x67, 0x69, 0x7, 0x45, 0x2, 0x2, 0x68, 
    0x67, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 
    0x3, 0x2, 0x2, 0x2, 0x6a, 0x6c, 0x5, 0x16, 0xc, 0x2, 0x6b, 0x68, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x70, 0x3, 0x2, 0x2, 
    0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x7, 0x40, 0x2, 0x2, 
    0x71, 0x15, 0x3, 0x2, 0x2, 0x2, 0x72, 0x74, 0x7, 0x41, 0x2, 0x2, 0x73, 
    0x75, 0x9, 0x3, 0x2, 0x2, 0x74, 0x73, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 0x80, 0x7, 
    0x3d, 0x2, 0x2, 0x77, 0x79, 0x7, 0x45, 0x2, 0x2, 0x78, 0x77, 0x3, 0x2, 
    0x2, 0x2, 0x78, 0x79, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7b, 0x3, 0x2, 0x2, 
    0x2, 0x7a, 0x7c, 0x9, 0x3, 0x2, 0x2, 0x7b, 0x7a, 0x3, 0x2, 0x2, 0x2, 
    0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 
    0x7f, 0x7, 0x3d, 0x2, 0x2, 0x7e, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x82, 
    0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x3, 
    0x2, 0x2, 0x2, 0x81, 0x83, 0x3, 0x2, 0x2, 0x2, 0x82, 0x80, 0x3, 0x2, 
    0x2, 0x2, 0x83, 0x84, 0x7, 0x42, 0x2, 0x2, 0x84, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x85, 0x86, 0x7, 0x19, 0x2, 0x2, 0x86, 0x87, 0x7, 0x3f, 0x2, 0x2, 
    0x87, 0x8e, 0x5, 0x22, 0x12, 0x2, 0x88, 0x8a, 0x7, 0x45, 0x2, 0x2, 0x89, 
    0x88, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 
    0x3, 0x2, 0x2, 0x2, 0x8b, 0x8d, 0x5, 0x22, 0x12, 0x2, 0x8c, 0x89, 0x3, 
    0x2, 0x2, 0x2, 0x8d, 0x90, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8c, 0x3, 0x2, 
    0x2, 0x2, 0x8e, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x91, 0x3, 0x2, 0x2, 
    0x2, 0x90, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x7, 0x40, 0x2, 0x2, 
    0x92, 0x19, 0x3, 0x2, 0x2, 0x2, 0x93, 0x95, 0x5, 0x1c, 0xf, 0x2, 0x94, 
    0x93, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 0x96, 0x94, 
    0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x3, 0x2, 0x2, 0x2, 0x97, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x98, 0x99, 0x5, 0x24, 0x13, 0x2, 0x99, 0x9b, 0x9, 0x4, 
    0x2, 0x2, 0x9a, 0x9c, 0x9, 0x3, 0x2, 0x2, 0x9b, 0x9a, 0x3, 0x2, 0x2, 
    0x2, 0x9b, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 
    0x9d, 0x9e, 0x9, 0x5, 0x2, 0x2, 0x9e, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x9f, 
    0xa1, 0x5, 0x20, 0x11, 0x2, 0xa0, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x3, 
    0x2, 0x2, 0x2, 0xa3, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa6, 0x7, 0x3e, 
    0x2, 0x2, 0xa5, 0xa7, 0x7, 0x54, 0x2, 0x2, 0xa6, 0xa5, 0x3, 0x2, 0x2, 
    0x2, 0xa6, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 
    0xa8, 0xa9, 0x7, 0x4e, 0x2, 0x2, 0xa9, 0xab, 0x5, 0x24, 0x13, 0x2, 0xaa, 
    0xac, 0x5, 0x22, 0x12, 0x2, 0xab, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 
    0x3, 0x2, 0x2, 0x2, 0xac, 0x21, 0x3, 0x2, 0x2, 0x2, 0xad, 0xaf, 0x7, 
    0x43, 0x2, 0x2, 0xae, 0xb0, 0x9, 0x3, 0x2, 0x2, 0xaf, 0xae, 0x3, 0x2, 
    0x2, 0x2, 0xaf, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x3, 0x2, 0x2, 
    0x2, 0xb1, 0xb2, 0x9, 0x6, 0x2, 0x2, 0xb2, 0xb4, 0x7, 0x45, 0x2, 0x2, 
    0xb3, 0xb5, 0x9, 0x3, 0x2, 0x2, 0xb4, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb4, 
    0xb5, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 
    0x9, 0x6, 0x2, 0x2, 0xb7, 0xb8, 0x7, 0x44, 0x2, 0x2, 0xb8, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0xb9, 0xba, 0x8, 0x13, 0x1, 0x2, 0xba, 0xbb, 0x7, 0x4f, 
    0x2, 0x2, 0xbb, 0x135, 0x5, 0x24, 0x13, 0x1f, 0xbc, 0xbd, 0x7, 0x50, 
    0x2, 0x2, 0xbd, 0x135, 0x5, 0x24, 0x13, 0x1e, 0xbe, 0xbf, 0x7, 0x41, 
    0x2, 0x2, 0xbf, 0xc0, 0x5, 0x24, 0x13, 0x2, 0xc0, 0xc1, 0x7, 0x42, 0x2, 
    0x2, 0xc1, 0x135, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x7, 0x1f, 0x2, 0x2, 
    0xc3, 0xc4, 0x7, 0x41, 0x2, 0x2, 0xc4, 0xc5, 0x5, 0x24, 0x13, 0x2, 0xc5, 
    0xc6, 0x7, 0x42, 0x2, 0x2, 0xc6, 0x135, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 
    0x7, 0x20, 0x2, 0x2, 0xc8, 0xc9, 0x7, 0x41, 0x2, 0x2, 0xc9, 0xca, 0x5, 
    0x24, 0x13, 0x2, 0xca, 0xcb, 0x7, 0x42, 0x2, 0x2, 0xcb, 0x135, 0x3, 
    0x2, 0x2, 0x2, 0xcc, 0xcd, 0x7, 0x21, 0x2, 0x2, 0xcd, 0xce, 0x7, 0x41, 
    0x2, 0x2, 0xce, 0xcf, 0x5, 0x24, 0x13, 0x2, 0xcf, 0xd0, 0x7, 0x42, 0x2, 
    0x2, 0xd0, 0x135, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x7, 0x22, 0x2, 0x2, 
    0xd2, 0xd3, 0x7, 0x41, 0x2, 0x2, 0xd3, 0xd4, 0x5, 0x24, 0x13, 0x2, 0xd4, 
    0xd5, 0x7, 0x42, 0x2, 0x2, 0xd5, 0x135, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 
    0x7, 0x23, 0x2, 0x2, 0xd7, 0xd8, 0x7, 0x41, 0x2, 0x2, 0xd8, 0xd9, 0x5, 
    0x24, 0x13, 0x2, 0xd9, 0xda, 0x7, 0x42, 0x2, 0x2, 0xda, 0x135, 0x3, 
    0x2, 0x2, 0x2, 0xdb, 0xdc, 0x7, 0x24, 0x2, 0x2, 0xdc, 0xdd, 0x7, 0x41, 
    0x2, 0x2, 0xdd, 0xde, 0x5, 0x24, 0x13, 0x2, 0xde, 0xdf, 0x7, 0x42, 0x2, 
    0x2, 0xdf, 0x135, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x7, 0x25, 0x2, 0x2, 
    0xe1, 0xe2, 0x7, 0x41, 0x2, 0x2, 0xe2, 0xe3, 0x5, 0x24, 0x13, 0x2, 0xe3, 
    0xe4, 0x7, 0x42, 0x2, 0x2, 0xe4, 0x135, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 
    0x7, 0x26, 0x2, 0x2, 0xe6, 0xe7, 0x7, 0x41, 0x2, 0x2, 0xe7, 0xe8, 0x5, 
    0x24, 0x13, 0x2, 0xe8, 0xe9, 0x7, 0x42, 0x2, 0x2, 0xe9, 0x135, 0x3, 
    0x2, 0x2, 0x2, 0xea, 0xeb, 0x7, 0x2a, 0x2, 0x2, 0xeb, 0xec, 0x7, 0x41, 
    0x2, 0x2, 0xec, 0xed, 0x5, 0x24, 0x13, 0x2, 0xed, 0xee, 0x7, 0x42, 0x2, 
    0x2, 0xee, 0x135, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x7, 0x2b, 0x2, 0x2, 
    0xf0, 0xf1, 0x7, 0x41, 0x2, 0x2, 0xf1, 0xf2, 0x5, 0x24, 0x13, 0x2, 0xf2, 
    0xf3, 0x7, 0x42, 0x2, 0x2, 0xf3, 0x135, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 
    0x7, 0x2c, 0x2, 0x2, 0xf5, 0xf6, 0x7, 0x41, 0x2, 0x2, 0xf6, 0xf7, 0x5, 
    0x24, 0x13, 0x2, 0xf7, 0xf8, 0x7, 0x42, 0x2, 0x2, 0xf8, 0x135, 0x3, 
    0x2, 0x2, 0x2, 0xf9, 0xfa, 0x7, 0x2d, 0x2, 0x2, 0xfa, 0xfb, 0x7, 0x41, 
    0x2, 0x2, 0xfb, 0xfc, 0x5, 0x24, 0x13, 0x2, 0xfc, 0xfd, 0x7, 0x42, 0x2, 
    0x2, 0xfd, 0x135, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x7, 0x2e, 0x2, 0x2, 
    0xff, 0x100, 0x7, 0x41, 0x2, 0x2, 0x100, 0x101, 0x5, 0x24, 0x13, 0x2, 
    0x101, 0x102, 0x7, 0x42, 0x2, 0x2, 0x102, 0x135, 0x3, 0x2, 0x2, 0x2, 
    0x103, 0x104, 0x7, 0x2f, 0x2, 0x2, 0x104, 0x105, 0x7, 0x41, 0x2, 0x2, 
    0x105, 0x106, 0x5, 0x24, 0x13, 0x2, 0x106, 0x107, 0x7, 0x42, 0x2, 0x2, 
    0x107, 0x135, 0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 0x7, 0x30, 0x2, 0x2, 
    0x109, 0x10a, 0x7, 0x41, 0x2, 0x2, 0x10a, 0x10b, 0x5, 0x24, 0x13, 0x2, 
    0x10b, 0x10c, 0x7, 0x42, 0x2, 0x2, 0x10c, 0x135, 0x3, 0x2, 0x2, 0x2, 
    0x10d, 0x10e, 0x7, 0x31, 0x2, 0x2, 0x10e, 0x10f, 0x7, 0x41, 0x2, 0x2, 
    0x10f, 0x110, 0x5, 0x24, 0x13, 0x2, 0x110, 0x111, 0x7, 0x42, 0x2, 0x2, 
    0x111, 0x135, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x7, 0x27, 0x2, 0x2, 
    0x113, 0x114, 0x7, 0x41, 0x2, 0x2, 0x114, 0x115, 0x5, 0x24, 0x13, 0x2, 
    0x115, 0x116, 0x7, 0x42, 0x2, 0x2, 0x116, 0x135, 0x3, 0x2, 0x2, 0x2, 
    0x117, 0x118, 0x7, 0x28, 0x2, 0x2, 0x118, 0x119, 0x7, 0x41, 0x2, 0x2, 
    0x119, 0x11a, 0x5, 0x24, 0x13, 0x2, 0x11a, 0x11b, 0x7, 0x42, 0x2, 0x2, 
    0x11b, 0x135, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 0x7, 0x29, 0x2, 0x2, 
    0x11d, 0x11e, 0x7, 0x41, 0x2, 0x2, 0x11e, 0x11f, 0x5, 0x24, 0x13, 0x2, 
    0x11f, 0x120, 0x7, 0x42, 0x2, 0x2, 0x120, 0x135, 0x3, 0x2, 0x2, 0x2, 
    0x121, 0x122, 0x7, 0x32, 0x2, 0x2, 0x122, 0x123, 0x7, 0x41, 0x2, 0x2, 
    0x123, 0x124, 0x5, 0x24, 0x13, 0x2, 0x124, 0x125, 0x7, 0x42, 0x2, 0x2, 
    0x125, 0x135, 0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x7, 0x33, 0x2, 0x2, 
    0x127, 0x128, 0x7, 0x41, 0x2, 0x2, 0x128, 0x129, 0x5, 0x24, 0x13, 0x2, 
    0x129, 0x12a, 0x7, 0x42, 0x2, 0x2, 0x12a, 0x135, 0x3, 0x2, 0x2, 0x2, 
    0x12b, 0x12c, 0x7, 0x35, 0x2, 0x2, 0x12c, 0x12d, 0x7, 0x41, 0x2, 0x2, 
    0x12d, 0x12e, 0x5, 0x24, 0x13, 0x2, 0x12e, 0x12f, 0x7, 0x45, 0x2, 0x2, 
    0x12f, 0x130, 0x5, 0x24, 0x13, 0x2, 0x130, 0x131, 0x7, 0x42, 0x2, 0x2, 
    0x131, 0x135, 0x3, 0x2, 0x2, 0x2, 0x132, 0x135, 0x9, 0x5, 0x2, 0x2, 
    0x133, 0x135, 0x7, 0x3e, 0x2, 0x2, 0x134, 0xb9, 0x3, 0x2, 0x2, 0x2, 
    0x134, 0xbc, 0x3, 0x2, 0x2, 0x2, 0x134, 0xbe, 0x3, 0x2, 0x2, 0x2, 0x134, 
    0xc2, 0x3, 0x2, 0x2, 0x2, 0x134, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x134, 0xcc, 
    0x3, 0x2, 0x2, 0x2, 0x134, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x134, 0xd6, 0x3, 
    0x2, 0x2, 0x2, 0x134, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x134, 0xe0, 0x3, 0x2, 
    0x2, 0x2, 0x134, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x134, 0xea, 0x3, 0x2, 0x2, 
    0x2, 0x134, 0xef, 0x3, 0x2, 0x2, 0x2, 0x134, 0xf4, 0x3, 0x2, 0x2, 0x2, 
    0x134, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x134, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x134, 
    0x103, 0x3, 0x2, 0x2, 0x2, 0x134, 0x108, 0x3, 0x2, 0x2, 0x2, 0x134, 
    0x10d, 0x3, 0x2, 0x2, 0x2, 0x134, 0x112, 0x3, 0x2, 0x2, 0x2, 0x134, 
    0x117, 0x3, 0x2, 0x2, 0x2, 0x134, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x134, 
    0x121, 0x3, 0x2, 0x2, 0x2, 0x134, 0x126, 0x3, 0x2, 0x2, 0x2, 0x134, 
    0x12b, 0x3, 0x2, 0x2, 0x2, 0x134, 0x132, 0x3, 0x2, 0x2, 0x2, 0x134, 
    0x133, 0x3, 0x2, 0x2, 0x2, 0x135, 0x141, 0x3, 0x2, 0x2, 0x2, 0x136, 
    0x137, 0xc, 0x20, 0x2, 0x2, 0x137, 0x138, 0x7, 0x53, 0x2, 0x2, 0x138, 
    0x140, 0x5, 0x24, 0x13, 0x21, 0x139, 0x13a, 0xc, 0x1d, 0x2, 0x2, 0x13a, 
    0x13b, 0x9, 0x7, 0x2, 0x2, 0x13b, 0x140, 0x5, 0x24, 0x13, 0x1e, 0x13c, 
    0x13d, 0xc, 0x1c, 0x2, 0x2, 0x13d, 0x13e, 0x9, 0x3, 0x2, 0x2, 0x13e, 
    0x140, 0x5, 0x24, 0x13, 0x1d, 0x13f, 0x136, 0x3, 0x2, 0x2, 0x2, 0x13f, 
    0x139, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x140, 
    0x143, 0x3, 0x2, 0x2, 0x2, 0x141, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x141, 
    0x142, 0x3, 0x2, 0x2, 0x2, 0x142, 0x25, 0x3, 0x2, 0x2, 0x2, 0x143, 0x141, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x31, 0x41, 0x49, 0x50, 0x5a, 0x5f, 0x68, 
    0x6d, 0x74, 0x78, 0x7b, 0x80, 0x89, 0x8e, 0x96, 0x9b, 0xa2, 0xa6, 0xab, 
    0xaf, 0xb4, 0x134, 0x13f, 0x141, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

locationsParser::Initializer locationsParser::_init;
