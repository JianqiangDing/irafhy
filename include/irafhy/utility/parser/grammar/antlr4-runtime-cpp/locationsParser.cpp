
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
    setState(38);
    match(locationsParser::KEY_NAME);
    setState(39);
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
    setState(41);
    match(locationsParser::KEY_FLOWS);
    setState(42);
    match(locationsParser::LEFTCURLYBRACKET);
    setState(43);
    system();
    setState(44);
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
    setState(46);
    match(locationsParser::KEY_INVARIANT_CONDITIONS);
    setState(47);
    match(locationsParser::LEFTCURLYBRACKET);
    setState(49);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == locationsParser::KEY_CONDITION) {
      setState(48);
      condition();
    }
    setState(51);
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
    setState(53);
    match(locationsParser::KEY_MODEL);
    setState(54);
    match(locationsParser::LEFTCURLYBRACKET);
    setState(55);
    modelid();
    setState(56);
    flows();
    setState(57);
    invariantcondition();
    setState(58);
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
    setState(60);
    match(locationsParser::KEY_LOCATIONS);
    setState(61);
    match(locationsParser::LEFTCURLYBRACKET);
    setState(63); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(62);
      model();
      setState(65); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == locationsParser::KEY_MODEL);
    setState(67);
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
    setState(69);
    match(locationsParser::KEY_CONDITION);
    setState(70);
    match(locationsParser::LEFTCURLYBRACKET);
    setState(73);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case locationsParser::KEY_INTERVAL_HULL: {
        setState(71);
        intervalhull();
        break;
      }

      case locationsParser::KEY_POLYTOPE: {
        setState(72);
        polytope();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(75);
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
    setState(77);
    match(locationsParser::KEY_POLYTOPE);
    setState(80);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(78);
      hpolytope();
      break;
    }

    case 2: {
      setState(79);
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
    setState(82);
    match(locationsParser::LEFTCURLYBRACKET);
    setState(83);
    matrix();
    setState(84);
    vector();
    setState(85);
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
    setState(87);
    match(locationsParser::LEFTCURLYBRACKET);
    setState(88);
    vector();
    setState(93); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(90);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == locationsParser::COMMA) {
        setState(89);
        match(locationsParser::COMMA);
      }
      setState(92);
      vector();
      setState(95); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == locationsParser::LEFTROUNDBRACKET

    || _la == locationsParser::COMMA);
    setState(97);
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
    setState(99);
    match(locationsParser::KEY_MATRIX);
    setState(100);
    match(locationsParser::LEFTCURLYBRACKET);
    setState(101);
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
    setState(102);
    vector();
    setState(109);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == locationsParser::LEFTROUNDBRACKET

    || _la == locationsParser::COMMA) {
      setState(104);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == locationsParser::COMMA) {
        setState(103);
        match(locationsParser::COMMA);
      }
      setState(106);
      vector();
      setState(111);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(112);
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

std::vector<locationsParser::Const_expressionContext *> locationsParser::VectorContext::const_expression() {
  return getRuleContexts<locationsParser::Const_expressionContext>();
}

locationsParser::Const_expressionContext* locationsParser::VectorContext::const_expression(size_t i) {
  return getRuleContext<locationsParser::Const_expressionContext>(i);
}

tree::TerminalNode* locationsParser::VectorContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
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
    setState(114);
    match(locationsParser::LEFTROUNDBRACKET);
    setState(115);
    const_expression(0);
    setState(122);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 29) & ~ 0x3fULL) == 0) &&
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
      | (1ULL << (locationsParser::KEY_SQR_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_SQRT_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_POWER_FUNCTION - 29))
      | (1ULL << (locationsParser::KEY_INFINITY - 29))
      | (1ULL << (locationsParser::SCINUM - 29))
      | (1ULL << (locationsParser::NUMBER - 29))
      | (1ULL << (locationsParser::LEFTROUNDBRACKET - 29))
      | (1ULL << (locationsParser::COMMA - 29))
      | (1ULL << (locationsParser::PLUS - 29))
      | (1ULL << (locationsParser::MINUS - 29)))) != 0)) {
      setState(117);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == locationsParser::COMMA) {
        setState(116);
        match(locationsParser::COMMA);
      }
      setState(119);
      const_expression(0);
      setState(124);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(125);
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
    setState(127);
    match(locationsParser::KEY_INTERVAL_HULL);
    setState(128);
    match(locationsParser::LEFTCURLYBRACKET);
    setState(129);
    interval();
    setState(136);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == locationsParser::LEFTSQUAREBRACKET

    || _la == locationsParser::COMMA) {
      setState(131);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == locationsParser::COMMA) {
        setState(130);
        match(locationsParser::COMMA);
      }
      setState(133);
      interval();
      setState(138);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(139);
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
    setState(142); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(141);
      constraint();
      setState(144); 
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

locationsParser::Const_expressionContext* locationsParser::ConstraintContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
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
    setState(146);
    expression(0);
    setState(147);
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
    setState(148);
    const_expression(0);
   
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
    setState(151); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(150);
      formula();
      setState(153); 
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
    setState(155);
    match(locationsParser::VARIABLE);
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == locationsParser::DERIVATIVE) {
      setState(156);
      match(locationsParser::DERIVATIVE);
    }
    setState(159);
    match(locationsParser::ASSIGN);
    setState(160);
    expression(0);
    setState(162);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == locationsParser::LEFTSQUAREBRACKET) {
      setState(161);
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

std::vector<locationsParser::Const_expressionContext *> locationsParser::IntervalContext::const_expression() {
  return getRuleContexts<locationsParser::Const_expressionContext>();
}

locationsParser::Const_expressionContext* locationsParser::IntervalContext::const_expression(size_t i) {
  return getRuleContext<locationsParser::Const_expressionContext>(i);
}

tree::TerminalNode* locationsParser::IntervalContext::COMMA() {
  return getToken(locationsParser::COMMA, 0);
}

tree::TerminalNode* locationsParser::IntervalContext::RIGHTSQUAREBRACKET() {
  return getToken(locationsParser::RIGHTSQUAREBRACKET, 0);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    match(locationsParser::LEFTSQUAREBRACKET);
    setState(165);
    const_expression(0);
    setState(166);
    match(locationsParser::COMMA);
    setState(167);
    const_expression(0);
    setState(168);
    match(locationsParser::RIGHTSQUAREBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Const_expressionContext ------------------------------------------------------------------

locationsParser::Const_expressionContext::Const_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t locationsParser::Const_expressionContext::getRuleIndex() const {
  return locationsParser::RuleConst_expression;
}

void locationsParser::Const_expressionContext::copyFrom(Const_expressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SqrtConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::SqrtConstExpContext::KEY_SQRT_FUNCTION() {
  return getToken(locationsParser::KEY_SQRT_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::SqrtConstExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::Const_expressionContext* locationsParser::SqrtConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

tree::TerminalNode* locationsParser::SqrtConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::SqrtConstExpContext::SqrtConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::SqrtConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSqrtConstExp(this);
}
void locationsParser::SqrtConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSqrtConstExp(this);
}

antlrcpp::Any locationsParser::SqrtConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitSqrtConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcothConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::AcothConstExpContext::KEY_COTH_FUNCTION() {
  return getToken(locationsParser::KEY_COTH_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::AcothConstExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::Const_expressionContext* locationsParser::AcothConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

tree::TerminalNode* locationsParser::AcothConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::AcothConstExpContext::AcothConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::AcothConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcothConstExp(this);
}
void locationsParser::AcothConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcothConstExp(this);
}

antlrcpp::Any locationsParser::AcothConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitAcothConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::LogConstExpContext::KEY_LOG_FUNCTION() {
  return getToken(locationsParser::KEY_LOG_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::LogConstExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::Const_expressionContext* locationsParser::LogConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

tree::TerminalNode* locationsParser::LogConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::LogConstExpContext::LogConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::LogConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogConstExp(this);
}
void locationsParser::LogConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogConstExp(this);
}

antlrcpp::Any locationsParser::LogConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitLogConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TanhConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::TanhConstExpContext::KEY_TANH_FUNCTION() {
  return getToken(locationsParser::KEY_TANH_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::TanhConstExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::Const_expressionContext* locationsParser::TanhConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

tree::TerminalNode* locationsParser::TanhConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::TanhConstExpContext::TanhConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::TanhConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTanhConstExp(this);
}
void locationsParser::TanhConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTanhConstExp(this);
}

antlrcpp::Any locationsParser::TanhConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitTanhConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::PowConstExpContext::KEY_POWER_FUNCTION() {
  return getToken(locationsParser::KEY_POWER_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::PowConstExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

std::vector<locationsParser::Const_expressionContext *> locationsParser::PowConstExpContext::const_expression() {
  return getRuleContexts<locationsParser::Const_expressionContext>();
}

locationsParser::Const_expressionContext* locationsParser::PowConstExpContext::const_expression(size_t i) {
  return getRuleContext<locationsParser::Const_expressionContext>(i);
}

tree::TerminalNode* locationsParser::PowConstExpContext::COMMA() {
  return getToken(locationsParser::COMMA, 0);
}

tree::TerminalNode* locationsParser::PowConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::PowConstExpContext::PowConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::PowConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowConstExp(this);
}
void locationsParser::PowConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowConstExp(this);
}

antlrcpp::Any locationsParser::PowConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitPowConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PosConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::PosConstExpContext::PLUS() {
  return getToken(locationsParser::PLUS, 0);
}

locationsParser::Const_expressionContext* locationsParser::PosConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

locationsParser::PosConstExpContext::PosConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::PosConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPosConstExp(this);
}
void locationsParser::PosConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPosConstExp(this);
}

antlrcpp::Any locationsParser::PosConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitPosConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtanhConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::AtanhConstExpContext::KEY_ARCTANH_FUNCTION() {
  return getToken(locationsParser::KEY_ARCTANH_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::AtanhConstExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::Const_expressionContext* locationsParser::AtanhConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

tree::TerminalNode* locationsParser::AtanhConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::AtanhConstExpContext::AtanhConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::AtanhConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtanhConstExp(this);
}
void locationsParser::AtanhConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtanhConstExp(this);
}

antlrcpp::Any locationsParser::AtanhConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitAtanhConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SqrConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::SqrConstExpContext::KEY_SQR_FUNCTION() {
  return getToken(locationsParser::KEY_SQR_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::SqrConstExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::Const_expressionContext* locationsParser::SqrConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

tree::TerminalNode* locationsParser::SqrConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::SqrConstExpContext::SqrConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::SqrConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSqrConstExp(this);
}
void locationsParser::SqrConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSqrConstExp(this);
}

antlrcpp::Any locationsParser::SqrConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitSqrConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstExpBraContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::ConstExpBraContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::Const_expressionContext* locationsParser::ConstExpBraContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

tree::TerminalNode* locationsParser::ConstExpBraContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::ConstExpBraContext::ConstExpBraContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::ConstExpBraContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstExpBra(this);
}
void locationsParser::ConstExpBraContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstExpBra(this);
}

antlrcpp::Any locationsParser::ConstExpBraContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitConstExpBra(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SinhConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::SinhConstExpContext::KEY_SINH_FUNCTION() {
  return getToken(locationsParser::KEY_SINH_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::SinhConstExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::Const_expressionContext* locationsParser::SinhConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

tree::TerminalNode* locationsParser::SinhConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::SinhConstExpContext::SinhConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::SinhConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSinhConstExp(this);
}
void locationsParser::SinhConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSinhConstExp(this);
}

antlrcpp::Any locationsParser::SinhConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitSinhConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtanConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::AtanConstExpContext::KEY_ARCTAN_FUNCTION() {
  return getToken(locationsParser::KEY_ARCTAN_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::AtanConstExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::Const_expressionContext* locationsParser::AtanConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

tree::TerminalNode* locationsParser::AtanConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::AtanConstExpContext::AtanConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::AtanConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtanConstExp(this);
}
void locationsParser::AtanConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtanConstExp(this);
}

antlrcpp::Any locationsParser::AtanConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitAtanConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AsinhConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::AsinhConstExpContext::KEY_ARCSINH_FUNCTION() {
  return getToken(locationsParser::KEY_ARCSINH_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::AsinhConstExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::Const_expressionContext* locationsParser::AsinhConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

tree::TerminalNode* locationsParser::AsinhConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::AsinhConstExpContext::AsinhConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::AsinhConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsinhConstExp(this);
}
void locationsParser::AsinhConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsinhConstExp(this);
}

antlrcpp::Any locationsParser::AsinhConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitAsinhConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::ConstExpContext::NUMBER() {
  return getToken(locationsParser::NUMBER, 0);
}

tree::TerminalNode* locationsParser::ConstExpContext::SCINUM() {
  return getToken(locationsParser::SCINUM, 0);
}

tree::TerminalNode* locationsParser::ConstExpContext::KEY_INFINITY() {
  return getToken(locationsParser::KEY_INFINITY, 0);
}

locationsParser::ConstExpContext::ConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::ConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstExp(this);
}
void locationsParser::ConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstExp(this);
}

antlrcpp::Any locationsParser::ConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::NegConstExpContext::MINUS() {
  return getToken(locationsParser::MINUS, 0);
}

locationsParser::Const_expressionContext* locationsParser::NegConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

locationsParser::NegConstExpContext::NegConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::NegConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegConstExp(this);
}
void locationsParser::NegConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegConstExp(this);
}

antlrcpp::Any locationsParser::NegConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitNegConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AsinConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::AsinConstExpContext::KEY_ARCSIN_FUNCTION() {
  return getToken(locationsParser::KEY_ARCSIN_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::AsinConstExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::Const_expressionContext* locationsParser::AsinConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

tree::TerminalNode* locationsParser::AsinConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::AsinConstExpContext::AsinConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::AsinConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsinConstExp(this);
}
void locationsParser::AsinConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsinConstExp(this);
}

antlrcpp::Any locationsParser::AsinConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitAsinConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TanConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::TanConstExpContext::KEY_TAN_FUNCTION() {
  return getToken(locationsParser::KEY_TAN_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::TanConstExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::Const_expressionContext* locationsParser::TanConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

tree::TerminalNode* locationsParser::TanConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::TanConstExpContext::TanConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::TanConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTanConstExp(this);
}
void locationsParser::TanConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTanConstExp(this);
}

antlrcpp::Any locationsParser::TanConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitTanConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NexpConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::NexpConstExpContext::KEY_NATURAL_EXP_FUNCTION() {
  return getToken(locationsParser::KEY_NATURAL_EXP_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::NexpConstExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::Const_expressionContext* locationsParser::NexpConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

tree::TerminalNode* locationsParser::NexpConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::NexpConstExpContext::NexpConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::NexpConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNexpConstExp(this);
}
void locationsParser::NexpConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNexpConstExp(this);
}

antlrcpp::Any locationsParser::NexpConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitNexpConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CosConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::CosConstExpContext::KEY_COS_FUNCTION() {
  return getToken(locationsParser::KEY_COS_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::CosConstExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::Const_expressionContext* locationsParser::CosConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

tree::TerminalNode* locationsParser::CosConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::CosConstExpContext::CosConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::CosConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCosConstExp(this);
}
void locationsParser::CosConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCosConstExp(this);
}

antlrcpp::Any locationsParser::CosConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitCosConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstExpMulDivContext ------------------------------------------------------------------

std::vector<locationsParser::Const_expressionContext *> locationsParser::ConstExpMulDivContext::const_expression() {
  return getRuleContexts<locationsParser::Const_expressionContext>();
}

locationsParser::Const_expressionContext* locationsParser::ConstExpMulDivContext::const_expression(size_t i) {
  return getRuleContext<locationsParser::Const_expressionContext>(i);
}

tree::TerminalNode* locationsParser::ConstExpMulDivContext::MULTIPLY() {
  return getToken(locationsParser::MULTIPLY, 0);
}

tree::TerminalNode* locationsParser::ConstExpMulDivContext::DIVIDE() {
  return getToken(locationsParser::DIVIDE, 0);
}

locationsParser::ConstExpMulDivContext::ConstExpMulDivContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::ConstExpMulDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstExpMulDiv(this);
}
void locationsParser::ConstExpMulDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstExpMulDiv(this);
}

antlrcpp::Any locationsParser::ConstExpMulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitConstExpMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpConstExpContext ------------------------------------------------------------------

std::vector<locationsParser::Const_expressionContext *> locationsParser::ExpConstExpContext::const_expression() {
  return getRuleContexts<locationsParser::Const_expressionContext>();
}

locationsParser::Const_expressionContext* locationsParser::ExpConstExpContext::const_expression(size_t i) {
  return getRuleContext<locationsParser::Const_expressionContext>(i);
}

tree::TerminalNode* locationsParser::ExpConstExpContext::EXPONENT() {
  return getToken(locationsParser::EXPONENT, 0);
}

locationsParser::ExpConstExpContext::ExpConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::ExpConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpConstExp(this);
}
void locationsParser::ExpConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpConstExp(this);
}

antlrcpp::Any locationsParser::ExpConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitExpConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CotConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::CotConstExpContext::KEY_COT_FUNCTION() {
  return getToken(locationsParser::KEY_COT_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::CotConstExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::Const_expressionContext* locationsParser::CotConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

tree::TerminalNode* locationsParser::CotConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::CotConstExpContext::CotConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::CotConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCotConstExp(this);
}
void locationsParser::CotConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCotConstExp(this);
}

antlrcpp::Any locationsParser::CotConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitCotConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CoshConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::CoshConstExpContext::KEY_COSH_FUNCTION() {
  return getToken(locationsParser::KEY_COSH_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::CoshConstExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::Const_expressionContext* locationsParser::CoshConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

tree::TerminalNode* locationsParser::CoshConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::CoshConstExpContext::CoshConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::CoshConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCoshConstExp(this);
}
void locationsParser::CoshConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCoshConstExp(this);
}

antlrcpp::Any locationsParser::CoshConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitCoshConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcoshConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::AcoshConstExpContext::KEY_ARCCOSH_FUNCTION() {
  return getToken(locationsParser::KEY_ARCCOSH_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::AcoshConstExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::Const_expressionContext* locationsParser::AcoshConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

tree::TerminalNode* locationsParser::AcoshConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::AcoshConstExpContext::AcoshConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::AcoshConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcoshConstExp(this);
}
void locationsParser::AcoshConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcoshConstExp(this);
}

antlrcpp::Any locationsParser::AcoshConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitAcoshConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SinConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::SinConstExpContext::KEY_SIN_FUNCTION() {
  return getToken(locationsParser::KEY_SIN_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::SinConstExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::Const_expressionContext* locationsParser::SinConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

tree::TerminalNode* locationsParser::SinConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::SinConstExpContext::SinConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::SinConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSinConstExp(this);
}
void locationsParser::SinConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSinConstExp(this);
}

antlrcpp::Any locationsParser::SinConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitSinConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcosConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::AcosConstExpContext::KEY_ARCCOS_FUNCTION() {
  return getToken(locationsParser::KEY_ARCCOS_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::AcosConstExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::Const_expressionContext* locationsParser::AcosConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

tree::TerminalNode* locationsParser::AcosConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::AcosConstExpContext::AcosConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::AcosConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcosConstExp(this);
}
void locationsParser::AcosConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcosConstExp(this);
}

antlrcpp::Any locationsParser::AcosConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitAcosConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstExpAddSubContext ------------------------------------------------------------------

std::vector<locationsParser::Const_expressionContext *> locationsParser::ConstExpAddSubContext::const_expression() {
  return getRuleContexts<locationsParser::Const_expressionContext>();
}

locationsParser::Const_expressionContext* locationsParser::ConstExpAddSubContext::const_expression(size_t i) {
  return getRuleContext<locationsParser::Const_expressionContext>(i);
}

tree::TerminalNode* locationsParser::ConstExpAddSubContext::PLUS() {
  return getToken(locationsParser::PLUS, 0);
}

tree::TerminalNode* locationsParser::ConstExpAddSubContext::MINUS() {
  return getToken(locationsParser::MINUS, 0);
}

locationsParser::ConstExpAddSubContext::ConstExpAddSubContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::ConstExpAddSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstExpAddSub(this);
}
void locationsParser::ConstExpAddSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstExpAddSub(this);
}

antlrcpp::Any locationsParser::ConstExpAddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitConstExpAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LnConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::LnConstExpContext::KEY_LN_FUNCTION() {
  return getToken(locationsParser::KEY_LN_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::LnConstExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::Const_expressionContext* locationsParser::LnConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

tree::TerminalNode* locationsParser::LnConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::LnConstExpContext::LnConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::LnConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLnConstExp(this);
}
void locationsParser::LnConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLnConstExp(this);
}

antlrcpp::Any locationsParser::LnConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitLnConstExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AcotConstExpContext ------------------------------------------------------------------

tree::TerminalNode* locationsParser::AcotConstExpContext::KEY_ARCCOT_FUNCTION() {
  return getToken(locationsParser::KEY_ARCCOT_FUNCTION, 0);
}

tree::TerminalNode* locationsParser::AcotConstExpContext::LEFTROUNDBRACKET() {
  return getToken(locationsParser::LEFTROUNDBRACKET, 0);
}

locationsParser::Const_expressionContext* locationsParser::AcotConstExpContext::const_expression() {
  return getRuleContext<locationsParser::Const_expressionContext>(0);
}

tree::TerminalNode* locationsParser::AcotConstExpContext::RIGHTROUNDBRACKET() {
  return getToken(locationsParser::RIGHTROUNDBRACKET, 0);
}

locationsParser::AcotConstExpContext::AcotConstExpContext(Const_expressionContext *ctx) { copyFrom(ctx); }

void locationsParser::AcotConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcotConstExp(this);
}
void locationsParser::AcotConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<locationsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcotConstExp(this);
}

antlrcpp::Any locationsParser::AcotConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<locationsVisitor*>(visitor))
    return parserVisitor->visitAcotConstExp(this);
  else
    return visitor->visitChildren(this);
}

locationsParser::Const_expressionContext* locationsParser::const_expression() {
   return const_expression(0);
}

locationsParser::Const_expressionContext* locationsParser::const_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  locationsParser::Const_expressionContext *_localctx = _tracker.createInstance<Const_expressionContext>(_ctx, parentState);
  locationsParser::Const_expressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, locationsParser::RuleConst_expression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(287);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case locationsParser::PLUS: {
        _localctx = _tracker.createInstance<PosConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(171);
        match(locationsParser::PLUS);
        setState(172);
        const_expression(27);
        break;
      }

      case locationsParser::MINUS: {
        _localctx = _tracker.createInstance<NegConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(173);
        match(locationsParser::MINUS);
        setState(174);
        const_expression(26);
        break;
      }

      case locationsParser::LEFTROUNDBRACKET: {
        _localctx = _tracker.createInstance<ConstExpBraContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(175);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(176);
        const_expression(0);
        setState(177);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_SIN_FUNCTION: {
        _localctx = _tracker.createInstance<SinConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(179);
        match(locationsParser::KEY_SIN_FUNCTION);
        setState(180);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(181);
        const_expression(0);
        setState(182);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCSIN_FUNCTION: {
        _localctx = _tracker.createInstance<AsinConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(184);
        match(locationsParser::KEY_ARCSIN_FUNCTION);
        setState(185);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(186);
        const_expression(0);
        setState(187);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_COS_FUNCTION: {
        _localctx = _tracker.createInstance<CosConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(189);
        match(locationsParser::KEY_COS_FUNCTION);
        setState(190);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(191);
        const_expression(0);
        setState(192);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCCOS_FUNCTION: {
        _localctx = _tracker.createInstance<AcosConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(194);
        match(locationsParser::KEY_ARCCOS_FUNCTION);
        setState(195);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(196);
        const_expression(0);
        setState(197);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_TAN_FUNCTION: {
        _localctx = _tracker.createInstance<TanConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(199);
        match(locationsParser::KEY_TAN_FUNCTION);
        setState(200);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(201);
        const_expression(0);
        setState(202);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCTAN_FUNCTION: {
        _localctx = _tracker.createInstance<AtanConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(204);
        match(locationsParser::KEY_ARCTAN_FUNCTION);
        setState(205);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(206);
        const_expression(0);
        setState(207);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_COT_FUNCTION: {
        _localctx = _tracker.createInstance<CotConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(209);
        match(locationsParser::KEY_COT_FUNCTION);
        setState(210);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(211);
        const_expression(0);
        setState(212);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCCOT_FUNCTION: {
        _localctx = _tracker.createInstance<AcotConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(214);
        match(locationsParser::KEY_ARCCOT_FUNCTION);
        setState(215);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(216);
        const_expression(0);
        setState(217);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_SINH_FUNCTION: {
        _localctx = _tracker.createInstance<SinhConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(219);
        match(locationsParser::KEY_SINH_FUNCTION);
        setState(220);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(221);
        const_expression(0);
        setState(222);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCSINH_FUNCTION: {
        _localctx = _tracker.createInstance<AsinhConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(224);
        match(locationsParser::KEY_ARCSINH_FUNCTION);
        setState(225);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(226);
        const_expression(0);
        setState(227);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_COSH_FUNCTION: {
        _localctx = _tracker.createInstance<CoshConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(229);
        match(locationsParser::KEY_COSH_FUNCTION);
        setState(230);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(231);
        const_expression(0);
        setState(232);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCCOSH_FUNCTION: {
        _localctx = _tracker.createInstance<AcoshConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(234);
        match(locationsParser::KEY_ARCCOSH_FUNCTION);
        setState(235);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(236);
        const_expression(0);
        setState(237);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_TANH_FUNCTION: {
        _localctx = _tracker.createInstance<TanhConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(239);
        match(locationsParser::KEY_TANH_FUNCTION);
        setState(240);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(241);
        const_expression(0);
        setState(242);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCTANH_FUNCTION: {
        _localctx = _tracker.createInstance<AtanhConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(244);
        match(locationsParser::KEY_ARCTANH_FUNCTION);
        setState(245);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(246);
        const_expression(0);
        setState(247);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_COTH_FUNCTION: {
        _localctx = _tracker.createInstance<AcothConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(249);
        match(locationsParser::KEY_COTH_FUNCTION);
        setState(250);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(251);
        const_expression(0);
        setState(252);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_LN_FUNCTION: {
        _localctx = _tracker.createInstance<LnConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(254);
        match(locationsParser::KEY_LN_FUNCTION);
        setState(255);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(256);
        const_expression(0);
        setState(257);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_LOG_FUNCTION: {
        _localctx = _tracker.createInstance<LogConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(259);
        match(locationsParser::KEY_LOG_FUNCTION);
        setState(260);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(261);
        const_expression(0);
        setState(262);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_NATURAL_EXP_FUNCTION: {
        _localctx = _tracker.createInstance<NexpConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(264);
        match(locationsParser::KEY_NATURAL_EXP_FUNCTION);
        setState(265);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(266);
        const_expression(0);
        setState(267);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_SQR_FUNCTION: {
        _localctx = _tracker.createInstance<SqrConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(269);
        match(locationsParser::KEY_SQR_FUNCTION);
        setState(270);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(271);
        const_expression(0);
        setState(272);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_SQRT_FUNCTION: {
        _localctx = _tracker.createInstance<SqrtConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(274);
        match(locationsParser::KEY_SQRT_FUNCTION);
        setState(275);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(276);
        const_expression(0);
        setState(277);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_POWER_FUNCTION: {
        _localctx = _tracker.createInstance<PowConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(279);
        match(locationsParser::KEY_POWER_FUNCTION);
        setState(280);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(281);
        const_expression(0);
        setState(282);
        match(locationsParser::COMMA);
        setState(283);
        const_expression(0);
        setState(284);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_INFINITY:
      case locationsParser::SCINUM:
      case locationsParser::NUMBER: {
        _localctx = _tracker.createInstance<ConstExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(286);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << locationsParser::KEY_INFINITY)
          | (1ULL << locationsParser::SCINUM)
          | (1ULL << locationsParser::NUMBER))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(300);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(298);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExpConstExpContext>(_tracker.createInstance<Const_expressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleConst_expression);
          setState(289);

          if (!(precpred(_ctx, 28))) throw FailedPredicateException(this, "precpred(_ctx, 28)");
          setState(290);
          match(locationsParser::EXPONENT);
          setState(291);
          const_expression(29);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ConstExpMulDivContext>(_tracker.createInstance<Const_expressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleConst_expression);
          setState(292);

          if (!(precpred(_ctx, 25))) throw FailedPredicateException(this, "precpred(_ctx, 25)");
          setState(293);
          dynamic_cast<ConstExpMulDivContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == locationsParser::MULTIPLY

          || _la == locationsParser::DIVIDE)) {
            dynamic_cast<ConstExpMulDivContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(294);
          const_expression(26);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ConstExpAddSubContext>(_tracker.createInstance<Const_expressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleConst_expression);
          setState(295);

          if (!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
          setState(296);
          dynamic_cast<ConstExpAddSubContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == locationsParser::PLUS

          || _la == locationsParser::MINUS)) {
            dynamic_cast<ConstExpAddSubContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(297);
          const_expression(25);
          break;
        }

        } 
      }
      setState(302);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
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
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, locationsParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(426);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case locationsParser::PLUS: {
        _localctx = _tracker.createInstance<PosExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(304);
        match(locationsParser::PLUS);
        setState(305);
        expression(29);
        break;
      }

      case locationsParser::MINUS: {
        _localctx = _tracker.createInstance<NegExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(306);
        match(locationsParser::MINUS);
        setState(307);
        expression(28);
        break;
      }

      case locationsParser::LEFTROUNDBRACKET: {
        _localctx = _tracker.createInstance<ExpBraContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(308);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(309);
        expression(0);
        setState(310);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_SIN_FUNCTION: {
        _localctx = _tracker.createInstance<SinExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(312);
        match(locationsParser::KEY_SIN_FUNCTION);
        setState(313);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(314);
        expression(0);
        setState(315);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCSIN_FUNCTION: {
        _localctx = _tracker.createInstance<AsinExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(317);
        match(locationsParser::KEY_ARCSIN_FUNCTION);
        setState(318);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(319);
        expression(0);
        setState(320);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_COS_FUNCTION: {
        _localctx = _tracker.createInstance<CosExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(322);
        match(locationsParser::KEY_COS_FUNCTION);
        setState(323);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(324);
        expression(0);
        setState(325);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCCOS_FUNCTION: {
        _localctx = _tracker.createInstance<AcosExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(327);
        match(locationsParser::KEY_ARCCOS_FUNCTION);
        setState(328);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(329);
        expression(0);
        setState(330);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_TAN_FUNCTION: {
        _localctx = _tracker.createInstance<TanExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(332);
        match(locationsParser::KEY_TAN_FUNCTION);
        setState(333);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(334);
        expression(0);
        setState(335);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCTAN_FUNCTION: {
        _localctx = _tracker.createInstance<AtanExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(337);
        match(locationsParser::KEY_ARCTAN_FUNCTION);
        setState(338);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(339);
        expression(0);
        setState(340);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_COT_FUNCTION: {
        _localctx = _tracker.createInstance<CotExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(342);
        match(locationsParser::KEY_COT_FUNCTION);
        setState(343);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(344);
        expression(0);
        setState(345);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCCOT_FUNCTION: {
        _localctx = _tracker.createInstance<AcotExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(347);
        match(locationsParser::KEY_ARCCOT_FUNCTION);
        setState(348);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(349);
        expression(0);
        setState(350);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_SINH_FUNCTION: {
        _localctx = _tracker.createInstance<SinhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(352);
        match(locationsParser::KEY_SINH_FUNCTION);
        setState(353);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(354);
        expression(0);
        setState(355);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCSINH_FUNCTION: {
        _localctx = _tracker.createInstance<AsinhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(357);
        match(locationsParser::KEY_ARCSINH_FUNCTION);
        setState(358);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(359);
        expression(0);
        setState(360);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_COSH_FUNCTION: {
        _localctx = _tracker.createInstance<CoshExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(362);
        match(locationsParser::KEY_COSH_FUNCTION);
        setState(363);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(364);
        expression(0);
        setState(365);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCCOSH_FUNCTION: {
        _localctx = _tracker.createInstance<AcoshExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(367);
        match(locationsParser::KEY_ARCCOSH_FUNCTION);
        setState(368);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(369);
        expression(0);
        setState(370);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_TANH_FUNCTION: {
        _localctx = _tracker.createInstance<TanhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(372);
        match(locationsParser::KEY_TANH_FUNCTION);
        setState(373);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(374);
        expression(0);
        setState(375);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCTANH_FUNCTION: {
        _localctx = _tracker.createInstance<AtanhExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(377);
        match(locationsParser::KEY_ARCTANH_FUNCTION);
        setState(378);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(379);
        expression(0);
        setState(380);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_COTH_FUNCTION: {
        _localctx = _tracker.createInstance<CothExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(382);
        match(locationsParser::KEY_COTH_FUNCTION);
        setState(383);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(384);
        expression(0);
        setState(385);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_ARCCOTH_FUNCTION: {
        _localctx = _tracker.createInstance<AcothExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(387);
        match(locationsParser::KEY_ARCCOTH_FUNCTION);
        setState(388);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(389);
        expression(0);
        setState(390);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_LN_FUNCTION: {
        _localctx = _tracker.createInstance<LnExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(392);
        match(locationsParser::KEY_LN_FUNCTION);
        setState(393);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(394);
        expression(0);
        setState(395);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_LOG_FUNCTION: {
        _localctx = _tracker.createInstance<LogExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(397);
        match(locationsParser::KEY_LOG_FUNCTION);
        setState(398);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(399);
        expression(0);
        setState(400);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_NATURAL_EXP_FUNCTION: {
        _localctx = _tracker.createInstance<NexpExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(402);
        match(locationsParser::KEY_NATURAL_EXP_FUNCTION);
        setState(403);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(404);
        expression(0);
        setState(405);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_SQR_FUNCTION: {
        _localctx = _tracker.createInstance<SqrExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(407);
        match(locationsParser::KEY_SQR_FUNCTION);
        setState(408);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(409);
        expression(0);
        setState(410);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_SQRT_FUNCTION: {
        _localctx = _tracker.createInstance<SqrtExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(412);
        match(locationsParser::KEY_SQRT_FUNCTION);
        setState(413);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(414);
        expression(0);
        setState(415);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::KEY_POWER_FUNCTION: {
        _localctx = _tracker.createInstance<PowExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(417);
        match(locationsParser::KEY_POWER_FUNCTION);
        setState(418);
        match(locationsParser::LEFTROUNDBRACKET);
        setState(419);
        expression(0);
        setState(420);
        match(locationsParser::COMMA);
        setState(421);
        expression(0);
        setState(422);
        match(locationsParser::RIGHTROUNDBRACKET);
        break;
      }

      case locationsParser::SCINUM:
      case locationsParser::NUMBER: {
        _localctx = _tracker.createInstance<ConstantContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(424);
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
        setState(425);
        match(locationsParser::VARIABLE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(439);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(437);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExpExpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(428);

          if (!(precpred(_ctx, 30))) throw FailedPredicateException(this, "precpred(_ctx, 30)");
          setState(429);
          match(locationsParser::EXPONENT);
          setState(430);
          expression(31);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ExpMulDivContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(431);

          if (!(precpred(_ctx, 27))) throw FailedPredicateException(this, "precpred(_ctx, 27)");
          setState(432);
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
          setState(433);
          expression(28);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ExpAddSubContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(434);

          if (!(precpred(_ctx, 26))) throw FailedPredicateException(this, "precpred(_ctx, 26)");
          setState(435);
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
          setState(436);
          expression(27);
          break;
        }

        } 
      }
      setState(441);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
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
    case 17: return const_expressionSempred(dynamic_cast<Const_expressionContext *>(context), predicateIndex);
    case 18: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool locationsParser::const_expressionSempred(Const_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 28);
    case 1: return precpred(_ctx, 25);
    case 2: return precpred(_ctx, 24);

  default:
    break;
  }
  return true;
}

bool locationsParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 30);
    case 4: return precpred(_ctx, 27);
    case 5: return precpred(_ctx, 26);

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
  "constraints", "constraint", "system", "formula", "interval", "const_expression", 
  "expression"
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
    0x3, 0x56, 0x1bd, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x34, 0xa, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x6, 0x6, 0x42, 0xa, 0x6, 0xd, 0x6, 
    0xe, 0x6, 0x43, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0x4c, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0x53, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x5d, 0xa, 0xa, 
    0x3, 0xa, 0x6, 0xa, 0x60, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x61, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 
    0x6b, 0xa, 0xb, 0x3, 0xb, 0x7, 0xb, 0x6e, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 
    0x71, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 
    0xc, 0x78, 0xa, 0xc, 0x3, 0xc, 0x7, 0xc, 0x7b, 0xa, 0xc, 0xc, 0xc, 0xe, 
    0xc, 0x7e, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x5, 0xd, 0x86, 0xa, 0xd, 0x3, 0xd, 0x7, 0xd, 0x89, 0xa, 0xd, 
    0xc, 0xd, 0xe, 0xd, 0x8c, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x6, 
    0xe, 0x91, 0xa, 0xe, 0xd, 0xe, 0xe, 0xe, 0x92, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0x10, 0x6, 0x10, 0x9a, 0xa, 0x10, 0xd, 0x10, 0xe, 
    0x10, 0x9b, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xa0, 0xa, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xa5, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 
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
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x122, 0xa, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x12d, 0xa, 0x13, 0xc, 0x13, 
    0xe, 0x13, 0x130, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x1ad, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x7, 0x14, 0x1b8, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x1bb, 0xb, 
    0x14, 0x3, 0x14, 0x2, 0x4, 0x24, 0x26, 0x15, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x26, 0x2, 0x8, 0x3, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x46, 0x4b, 0x3, 
    0x2, 0x3b, 0x3d, 0x3, 0x2, 0x51, 0x52, 0x3, 0x2, 0x4f, 0x50, 0x3, 0x2, 
    0x3c, 0x3d, 0x2, 0x1f1, 0x2, 0x28, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x30, 0x3, 0x2, 0x2, 0x2, 0x8, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x3e, 0x3, 0x2, 0x2, 0x2, 0xc, 0x47, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0x10, 0x54, 0x3, 0x2, 0x2, 0x2, 0x12, 0x59, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x65, 0x3, 0x2, 0x2, 0x2, 0x16, 0x74, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x81, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x90, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x94, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x99, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x22, 0xa6, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x121, 0x3, 0x2, 0x2, 0x2, 0x26, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x29, 0x7, 0x36, 0x2, 0x2, 0x29, 0x2a, 0x7, 0x3e, 0x2, 0x2, 0x2a, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0x5, 0x2, 0x2, 0x2c, 0x2d, 0x7, 
    0x3f, 0x2, 0x2, 0x2d, 0x2e, 0x5, 0x1e, 0x10, 0x2, 0x2e, 0x2f, 0x7, 0x40, 
    0x2, 0x2, 0x2f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x7, 0x6, 0x2, 
    0x2, 0x31, 0x33, 0x7, 0x3f, 0x2, 0x2, 0x32, 0x34, 0x5, 0xc, 0x7, 0x2, 
    0x33, 0x32, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x7, 0x40, 0x2, 0x2, 0x36, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0x7, 0x4, 0x2, 0x2, 0x38, 0x39, 0x7, 
    0x3f, 0x2, 0x2, 0x39, 0x3a, 0x5, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x5, 0x4, 
    0x3, 0x2, 0x3b, 0x3c, 0x5, 0x6, 0x4, 0x2, 0x3c, 0x3d, 0x7, 0x40, 0x2, 
    0x2, 0x3d, 0x9, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x7, 0x3, 0x2, 0x2, 
    0x3f, 0x41, 0x7, 0x3f, 0x2, 0x2, 0x40, 0x42, 0x5, 0x8, 0x5, 0x2, 0x41, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 0x43, 0x41, 
    0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 
    0x2, 0x2, 0x2, 0x45, 0x46, 0x7, 0x40, 0x2, 0x2, 0x46, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x47, 0x48, 0x7, 0x1b, 0x2, 0x2, 0x48, 0x4b, 0x7, 0x3f, 0x2, 
    0x2, 0x49, 0x4c, 0x5, 0x18, 0xd, 0x2, 0x4a, 0x4c, 0x5, 0xe, 0x8, 0x2, 
    0x4b, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 
    0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0x40, 0x2, 0x2, 0x4e, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x4f, 0x52, 0x7, 0x1a, 0x2, 0x2, 0x50, 0x53, 0x5, 
    0x10, 0x9, 0x2, 0x51, 0x53, 0x5, 0x12, 0xa, 0x2, 0x52, 0x50, 0x3, 0x2, 
    0x2, 0x2, 0x52, 0x51, 0x3, 0x2, 0x2, 0x2, 0x53, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x55, 0x7, 0x3f, 0x2, 0x2, 0x55, 0x56, 0x5, 0x14, 0xb, 0x2, 
    0x56, 0x57, 0x5, 0x16, 0xc, 0x2, 0x57, 0x58, 0x7, 0x40, 0x2, 0x2, 0x58, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 0x3f, 0x2, 0x2, 0x5a, 0x5f, 
    0x5, 0x16, 0xc, 0x2, 0x5b, 0x5d, 0x7, 0x45, 0x2, 0x2, 0x5c, 0x5b, 0x3, 
    0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 
    0x2, 0x2, 0x5e, 0x60, 0x5, 0x16, 0xc, 0x2, 0x5f, 0x5c, 0x3, 0x2, 0x2, 
    0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x3, 0x2, 0x2, 0x2, 0x63, 
    0x64, 0x7, 0x40, 0x2, 0x2, 0x64, 0x13, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 
    0x7, 0x1c, 0x2, 0x2, 0x66, 0x67, 0x7, 0x3f, 0x2, 0x2, 0x67, 0x68, 0x9, 
    0x2, 0x2, 0x2, 0x68, 0x6f, 0x5, 0x16, 0xc, 0x2, 0x69, 0x6b, 0x7, 0x45, 
    0x2, 0x2, 0x6a, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x3, 0x2, 0x2, 
    0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6e, 0x5, 0x16, 0xc, 0x2, 
    0x6d, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x71, 0x3, 0x2, 0x2, 0x2, 0x6f, 
    0x6d, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x2, 0x2, 0x70, 0x72, 
    0x3, 0x2, 0x2, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x7, 
    0x40, 0x2, 0x2, 0x73, 0x15, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x7, 0x41, 
    0x2, 0x2, 0x75, 0x7c, 0x5, 0x24, 0x13, 0x2, 0x76, 0x78, 0x7, 0x45, 0x2, 
    0x2, 0x77, 0x76, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 0x2, 0x2, 0x2, 
    0x78, 0x79, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7b, 0x5, 0x24, 0x13, 0x2, 0x7a, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7a, 
    0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7f, 0x3, 
    0x2, 0x2, 0x2, 0x7e, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x7, 0x42, 
    0x2, 0x2, 0x80, 0x17, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x7, 0x19, 0x2, 
    0x2, 0x82, 0x83, 0x7, 0x3f, 0x2, 0x2, 0x83, 0x8a, 0x5, 0x22, 0x12, 0x2, 
    0x84, 0x86, 0x7, 0x45, 0x2, 0x2, 0x85, 0x84, 0x3, 0x2, 0x2, 0x2, 0x85, 
    0x86, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x89, 
    0x5, 0x22, 0x12, 0x2, 0x88, 0x85, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8c, 0x3, 
    0x2, 0x2, 0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 
    0x2, 0x2, 0x8b, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8a, 0x3, 0x2, 0x2, 
    0x2, 0x8d, 0x8e, 0x7, 0x40, 0x2, 0x2, 0x8e, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0x8f, 0x91, 0x5, 0x1c, 0xf, 0x2, 0x90, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x91, 
    0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x90, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 
    0x3, 0x2, 0x2, 0x2, 0x93, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x5, 
    0x26, 0x14, 0x2, 0x95, 0x96, 0x9, 0x3, 0x2, 0x2, 0x96, 0x97, 0x5, 0x24, 
    0x13, 0x2, 0x97, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x98, 0x9a, 0x5, 0x20, 0x11, 
    0x2, 0x99, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x3, 0x2, 0x2, 0x2, 
    0x9b, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9c, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9f, 0x7, 0x3e, 0x2, 0x2, 0x9e, 0xa0, 
    0x7, 0x54, 0x2, 0x2, 0x9f, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x3, 
    0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x4e, 
    0x2, 0x2, 0xa2, 0xa4, 0x5, 0x26, 0x14, 0x2, 0xa3, 0xa5, 0x5, 0x22, 0x12, 
    0x2, 0xa4, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x3, 0x2, 0x2, 0x2, 
    0xa5, 0x21, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x7, 0x43, 0x2, 0x2, 0xa7, 
    0xa8, 0x5, 0x24, 0x13, 0x2, 0xa8, 0xa9, 0x7, 0x45, 0x2, 0x2, 0xa9, 0xaa, 
    0x5, 0x24, 0x13, 0x2, 0xaa, 0xab, 0x7, 0x44, 0x2, 0x2, 0xab, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0xac, 0xad, 0x8, 0x13, 0x1, 0x2, 0xad, 0xae, 0x7, 0x4f, 
    0x2, 0x2, 0xae, 0x122, 0x5, 0x24, 0x13, 0x1d, 0xaf, 0xb0, 0x7, 0x50, 
    0x2, 0x2, 0xb0, 0x122, 0x5, 0x24, 0x13, 0x1c, 0xb1, 0xb2, 0x7, 0x41, 
    0x2, 0x2, 0xb2, 0xb3, 0x5, 0x24, 0x13, 0x2, 0xb3, 0xb4, 0x7, 0x42, 0x2, 
    0x2, 0xb4, 0x122, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x7, 0x1f, 0x2, 0x2, 
    0xb6, 0xb7, 0x7, 0x41, 0x2, 0x2, 0xb7, 0xb8, 0x5, 0x24, 0x13, 0x2, 0xb8, 
    0xb9, 0x7, 0x42, 0x2, 0x2, 0xb9, 0x122, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 
    0x7, 0x20, 0x2, 0x2, 0xbb, 0xbc, 0x7, 0x41, 0x2, 0x2, 0xbc, 0xbd, 0x5, 
    0x24, 0x13, 0x2, 0xbd, 0xbe, 0x7, 0x42, 0x2, 0x2, 0xbe, 0x122, 0x3, 
    0x2, 0x2, 0x2, 0xbf, 0xc0, 0x7, 0x21, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0x41, 
    0x2, 0x2, 0xc1, 0xc2, 0x5, 0x24, 0x13, 0x2, 0xc2, 0xc3, 0x7, 0x42, 0x2, 
    0x2, 0xc3, 0x122, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x22, 0x2, 0x2, 
    0xc5, 0xc6, 0x7, 0x41, 0x2, 0x2, 0xc6, 0xc7, 0x5, 0x24, 0x13, 0x2, 0xc7, 
    0xc8, 0x7, 0x42, 0x2, 0x2, 0xc8, 0x122, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 
    0x7, 0x23, 0x2, 0x2, 0xca, 0xcb, 0x7, 0x41, 0x2, 0x2, 0xcb, 0xcc, 0x5, 
    0x24, 0x13, 0x2, 0xcc, 0xcd, 0x7, 0x42, 0x2, 0x2, 0xcd, 0x122, 0x3, 
    0x2, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x24, 0x2, 0x2, 0xcf, 0xd0, 0x7, 0x41, 
    0x2, 0x2, 0xd0, 0xd1, 0x5, 0x24, 0x13, 0x2, 0xd1, 0xd2, 0x7, 0x42, 0x2, 
    0x2, 0xd2, 0x122, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x7, 0x25, 0x2, 0x2, 
    0xd4, 0xd5, 0x7, 0x41, 0x2, 0x2, 0xd5, 0xd6, 0x5, 0x24, 0x13, 0x2, 0xd6, 
    0xd7, 0x7, 0x42, 0x2, 0x2, 0xd7, 0x122, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 
    0x7, 0x26, 0x2, 0x2, 0xd9, 0xda, 0x7, 0x41, 0x2, 0x2, 0xda, 0xdb, 0x5, 
    0x24, 0x13, 0x2, 0xdb, 0xdc, 0x7, 0x42, 0x2, 0x2, 0xdc, 0x122, 0x3, 
    0x2, 0x2, 0x2, 0xdd, 0xde, 0x7, 0x2a, 0x2, 0x2, 0xde, 0xdf, 0x7, 0x41, 
    0x2, 0x2, 0xdf, 0xe0, 0x5, 0x24, 0x13, 0x2, 0xe0, 0xe1, 0x7, 0x42, 0x2, 
    0x2, 0xe1, 0x122, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x7, 0x2b, 0x2, 0x2, 
    0xe3, 0xe4, 0x7, 0x41, 0x2, 0x2, 0xe4, 0xe5, 0x5, 0x24, 0x13, 0x2, 0xe5, 
    0xe6, 0x7, 0x42, 0x2, 0x2, 0xe6, 0x122, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 
    0x7, 0x2c, 0x2, 0x2, 0xe8, 0xe9, 0x7, 0x41, 0x2, 0x2, 0xe9, 0xea, 0x5, 
    0x24, 0x13, 0x2, 0xea, 0xeb, 0x7, 0x42, 0x2, 0x2, 0xeb, 0x122, 0x3, 
    0x2, 0x2, 0x2, 0xec, 0xed, 0x7, 0x2d, 0x2, 0x2, 0xed, 0xee, 0x7, 0x41, 
    0x2, 0x2, 0xee, 0xef, 0x5, 0x24, 0x13, 0x2, 0xef, 0xf0, 0x7, 0x42, 0x2, 
    0x2, 0xf0, 0x122, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x7, 0x2e, 0x2, 0x2, 
    0xf2, 0xf3, 0x7, 0x41, 0x2, 0x2, 0xf3, 0xf4, 0x5, 0x24, 0x13, 0x2, 0xf4, 
    0xf5, 0x7, 0x42, 0x2, 0x2, 0xf5, 0x122, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 
    0x7, 0x2f, 0x2, 0x2, 0xf7, 0xf8, 0x7, 0x41, 0x2, 0x2, 0xf8, 0xf9, 0x5, 
    0x24, 0x13, 0x2, 0xf9, 0xfa, 0x7, 0x42, 0x2, 0x2, 0xfa, 0x122, 0x3, 
    0x2, 0x2, 0x2, 0xfb, 0xfc, 0x7, 0x30, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0x41, 
    0x2, 0x2, 0xfd, 0xfe, 0x5, 0x24, 0x13, 0x2, 0xfe, 0xff, 0x7, 0x42, 0x2, 
    0x2, 0xff, 0x122, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x7, 0x27, 0x2, 
    0x2, 0x101, 0x102, 0x7, 0x41, 0x2, 0x2, 0x102, 0x103, 0x5, 0x24, 0x13, 
    0x2, 0x103, 0x104, 0x7, 0x42, 0x2, 0x2, 0x104, 0x122, 0x3, 0x2, 0x2, 
    0x2, 0x105, 0x106, 0x7, 0x28, 0x2, 0x2, 0x106, 0x107, 0x7, 0x41, 0x2, 
    0x2, 0x107, 0x108, 0x5, 0x24, 0x13, 0x2, 0x108, 0x109, 0x7, 0x42, 0x2, 
    0x2, 0x109, 0x122, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x7, 0x29, 0x2, 
    0x2, 0x10b, 0x10c, 0x7, 0x41, 0x2, 0x2, 0x10c, 0x10d, 0x5, 0x24, 0x13, 
    0x2, 0x10d, 0x10e, 0x7, 0x42, 0x2, 0x2, 0x10e, 0x122, 0x3, 0x2, 0x2, 
    0x2, 0x10f, 0x110, 0x7, 0x32, 0x2, 0x2, 0x110, 0x111, 0x7, 0x41, 0x2, 
    0x2, 0x111, 0x112, 0x5, 0x24, 0x13, 0x2, 0x112, 0x113, 0x7, 0x42, 0x2, 
    0x2, 0x113, 0x122, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x7, 0x33, 0x2, 
    0x2, 0x115, 0x116, 0x7, 0x41, 0x2, 0x2, 0x116, 0x117, 0x5, 0x24, 0x13, 
    0x2, 0x117, 0x118, 0x7, 0x42, 0x2, 0x2, 0x118, 0x122, 0x3, 0x2, 0x2, 
    0x2, 0x119, 0x11a, 0x7, 0x35, 0x2, 0x2, 0x11a, 0x11b, 0x7, 0x41, 0x2, 
    0x2, 0x11b, 0x11c, 0x5, 0x24, 0x13, 0x2, 0x11c, 0x11d, 0x7, 0x45, 0x2, 
    0x2, 0x11d, 0x11e, 0x5, 0x24, 0x13, 0x2, 0x11e, 0x11f, 0x7, 0x42, 0x2, 
    0x2, 0x11f, 0x122, 0x3, 0x2, 0x2, 0x2, 0x120, 0x122, 0x9, 0x4, 0x2, 
    0x2, 0x121, 0xac, 0x3, 0x2, 0x2, 0x2, 0x121, 0xaf, 0x3, 0x2, 0x2, 0x2, 
    0x121, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x121, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x121, 
    0xba, 0x3, 0x2, 0x2, 0x2, 0x121, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x121, 0xc4, 
    0x3, 0x2, 0x2, 0x2, 0x121, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x121, 0xce, 0x3, 
    0x2, 0x2, 0x2, 0x121, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x121, 0xd8, 0x3, 0x2, 
    0x2, 0x2, 0x121, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x121, 0xe2, 0x3, 0x2, 0x2, 
    0x2, 0x121, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x121, 0xec, 0x3, 0x2, 0x2, 0x2, 
    0x121, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x121, 0xf6, 0x3, 0x2, 0x2, 0x2, 0x121, 
    0xfb, 0x3, 0x2, 0x2, 0x2, 0x121, 0x100, 0x3, 0x2, 0x2, 0x2, 0x121, 0x105, 
    0x3, 0x2, 0x2, 0x2, 0x121, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x121, 0x10f, 
    0x3, 0x2, 0x2, 0x2, 0x121, 0x114, 0x3, 0x2, 0x2, 0x2, 0x121, 0x119, 
    0x3, 0x2, 0x2, 0x2, 0x121, 0x120, 0x3, 0x2, 0x2, 0x2, 0x122, 0x12e, 
    0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0xc, 0x1e, 0x2, 0x2, 0x124, 0x125, 
    0x7, 0x53, 0x2, 0x2, 0x125, 0x12d, 0x5, 0x24, 0x13, 0x1f, 0x126, 0x127, 
    0xc, 0x1b, 0x2, 0x2, 0x127, 0x128, 0x9, 0x5, 0x2, 0x2, 0x128, 0x12d, 
    0x5, 0x24, 0x13, 0x1c, 0x129, 0x12a, 0xc, 0x1a, 0x2, 0x2, 0x12a, 0x12b, 
    0x9, 0x6, 0x2, 0x2, 0x12b, 0x12d, 0x5, 0x24, 0x13, 0x1b, 0x12c, 0x123, 
    0x3, 0x2, 0x2, 0x2, 0x12c, 0x126, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x129, 
    0x3, 0x2, 0x2, 0x2, 0x12d, 0x130, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12c, 
    0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x130, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x8, 
    0x14, 0x1, 0x2, 0x132, 0x133, 0x7, 0x4f, 0x2, 0x2, 0x133, 0x1ad, 0x5, 
    0x26, 0x14, 0x1f, 0x134, 0x135, 0x7, 0x50, 0x2, 0x2, 0x135, 0x1ad, 0x5, 
    0x26, 0x14, 0x1e, 0x136, 0x137, 0x7, 0x41, 0x2, 0x2, 0x137, 0x138, 0x5, 
    0x26, 0x14, 0x2, 0x138, 0x139, 0x7, 0x42, 0x2, 0x2, 0x139, 0x1ad, 0x3, 
    0x2, 0x2, 0x2, 0x13a, 0x13b, 0x7, 0x1f, 0x2, 0x2, 0x13b, 0x13c, 0x7, 
    0x41, 0x2, 0x2, 0x13c, 0x13d, 0x5, 0x26, 0x14, 0x2, 0x13d, 0x13e, 0x7, 
    0x42, 0x2, 0x2, 0x13e, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 0x7, 
    0x20, 0x2, 0x2, 0x140, 0x141, 0x7, 0x41, 0x2, 0x2, 0x141, 0x142, 0x5, 
    0x26, 0x14, 0x2, 0x142, 0x143, 0x7, 0x42, 0x2, 0x2, 0x143, 0x1ad, 0x3, 
    0x2, 0x2, 0x2, 0x144, 0x145, 0x7, 0x21, 0x2, 0x2, 0x145, 0x146, 0x7, 
    0x41, 0x2, 0x2, 0x146, 0x147, 0x5, 0x26, 0x14, 0x2, 0x147, 0x148, 0x7, 
    0x42, 0x2, 0x2, 0x148, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x7, 
    0x22, 0x2, 0x2, 0x14a, 0x14b, 0x7, 0x41, 0x2, 0x2, 0x14b, 0x14c, 0x5, 
    0x26, 0x14, 0x2, 0x14c, 0x14d, 0x7, 0x42, 0x2, 0x2, 0x14d, 0x1ad, 0x3, 
    0x2, 0x2, 0x2, 0x14e, 0x14f, 0x7, 0x23, 0x2, 0x2, 0x14f, 0x150, 0x7, 
    0x41, 0x2, 0x2, 0x150, 0x151, 0x5, 0x26, 0x14, 0x2, 0x151, 0x152, 0x7, 
    0x42, 0x2, 0x2, 0x152, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 0x7, 
    0x24, 0x2, 0x2, 0x154, 0x155, 0x7, 0x41, 0x2, 0x2, 0x155, 0x156, 0x5, 
    0x26, 0x14, 0x2, 0x156, 0x157, 0x7, 0x42, 0x2, 0x2, 0x157, 0x1ad, 0x3, 
    0x2, 0x2, 0x2, 0x158, 0x159, 0x7, 0x25, 0x2, 0x2, 0x159, 0x15a, 0x7, 
    0x41, 0x2, 0x2, 0x15a, 0x15b, 0x5, 0x26, 0x14, 0x2, 0x15b, 0x15c, 0x7, 
    0x42, 0x2, 0x2, 0x15c, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 0x7, 
    0x26, 0x2, 0x2, 0x15e, 0x15f, 0x7, 0x41, 0x2, 0x2, 0x15f, 0x160, 0x5, 
    0x26, 0x14, 0x2, 0x160, 0x161, 0x7, 0x42, 0x2, 0x2, 0x161, 0x1ad, 0x3, 
    0x2, 0x2, 0x2, 0x162, 0x163, 0x7, 0x2a, 0x2, 0x2, 0x163, 0x164, 0x7, 
    0x41, 0x2, 0x2, 0x164, 0x165, 0x5, 0x26, 0x14, 0x2, 0x165, 0x166, 0x7, 
    0x42, 0x2, 0x2, 0x166, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x167, 0x168, 0x7, 
    0x2b, 0x2, 0x2, 0x168, 0x169, 0x7, 0x41, 0x2, 0x2, 0x169, 0x16a, 0x5, 
    0x26, 0x14, 0x2, 0x16a, 0x16b, 0x7, 0x42, 0x2, 0x2, 0x16b, 0x1ad, 0x3, 
    0x2, 0x2, 0x2, 0x16c, 0x16d, 0x7, 0x2c, 0x2, 0x2, 0x16d, 0x16e, 0x7, 
    0x41, 0x2, 0x2, 0x16e, 0x16f, 0x5, 0x26, 0x14, 0x2, 0x16f, 0x170, 0x7, 
    0x42, 0x2, 0x2, 0x170, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 0x7, 
    0x2d, 0x2, 0x2, 0x172, 0x173, 0x7, 0x41, 0x2, 0x2, 0x173, 0x174, 0x5, 
    0x26, 0x14, 0x2, 0x174, 0x175, 0x7, 0x42, 0x2, 0x2, 0x175, 0x1ad, 0x3, 
    0x2, 0x2, 0x2, 0x176, 0x177, 0x7, 0x2e, 0x2, 0x2, 0x177, 0x178, 0x7, 
    0x41, 0x2, 0x2, 0x178, 0x179, 0x5, 0x26, 0x14, 0x2, 0x179, 0x17a, 0x7, 
    0x42, 0x2, 0x2, 0x17a, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x7, 
    0x2f, 0x2, 0x2, 0x17c, 0x17d, 0x7, 0x41, 0x2, 0x2, 0x17d, 0x17e, 0x5, 
    0x26, 0x14, 0x2, 0x17e, 0x17f, 0x7, 0x42, 0x2, 0x2, 0x17f, 0x1ad, 0x3, 
    0x2, 0x2, 0x2, 0x180, 0x181, 0x7, 0x30, 0x2, 0x2, 0x181, 0x182, 0x7, 
    0x41, 0x2, 0x2, 0x182, 0x183, 0x5, 0x26, 0x14, 0x2, 0x183, 0x184, 0x7, 
    0x42, 0x2, 0x2, 0x184, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x7, 
    0x31, 0x2, 0x2, 0x186, 0x187, 0x7, 0x41, 0x2, 0x2, 0x187, 0x188, 0x5, 
    0x26, 0x14, 0x2, 0x188, 0x189, 0x7, 0x42, 0x2, 0x2, 0x189, 0x1ad, 0x3, 
    0x2, 0x2, 0x2, 0x18a, 0x18b, 0x7, 0x27, 0x2, 0x2, 0x18b, 0x18c, 0x7, 
    0x41, 0x2, 0x2, 0x18c, 0x18d, 0x5, 0x26, 0x14, 0x2, 0x18d, 0x18e, 0x7, 
    0x42, 0x2, 0x2, 0x18e, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 0x7, 
    0x28, 0x2, 0x2, 0x190, 0x191, 0x7, 0x41, 0x2, 0x2, 0x191, 0x192, 0x5, 
    0x26, 0x14, 0x2, 0x192, 0x193, 0x7, 0x42, 0x2, 0x2, 0x193, 0x1ad, 0x3, 
    0x2, 0x2, 0x2, 0x194, 0x195, 0x7, 0x29, 0x2, 0x2, 0x195, 0x196, 0x7, 
    0x41, 0x2, 0x2, 0x196, 0x197, 0x5, 0x26, 0x14, 0x2, 0x197, 0x198, 0x7, 
    0x42, 0x2, 0x2, 0x198, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19a, 0x7, 
    0x32, 0x2, 0x2, 0x19a, 0x19b, 0x7, 0x41, 0x2, 0x2, 0x19b, 0x19c, 0x5, 
    0x26, 0x14, 0x2, 0x19c, 0x19d, 0x7, 0x42, 0x2, 0x2, 0x19d, 0x1ad, 0x3, 
    0x2, 0x2, 0x2, 0x19e, 0x19f, 0x7, 0x33, 0x2, 0x2, 0x19f, 0x1a0, 0x7, 
    0x41, 0x2, 0x2, 0x1a0, 0x1a1, 0x5, 0x26, 0x14, 0x2, 0x1a1, 0x1a2, 0x7, 
    0x42, 0x2, 0x2, 0x1a2, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 0x7, 
    0x35, 0x2, 0x2, 0x1a4, 0x1a5, 0x7, 0x41, 0x2, 0x2, 0x1a5, 0x1a6, 0x5, 
    0x26, 0x14, 0x2, 0x1a6, 0x1a7, 0x7, 0x45, 0x2, 0x2, 0x1a7, 0x1a8, 0x5, 
    0x26, 0x14, 0x2, 0x1a8, 0x1a9, 0x7, 0x42, 0x2, 0x2, 0x1a9, 0x1ad, 0x3, 
    0x2, 0x2, 0x2, 0x1aa, 0x1ad, 0x9, 0x7, 0x2, 0x2, 0x1ab, 0x1ad, 0x7, 
    0x3e, 0x2, 0x2, 0x1ac, 0x131, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x134, 0x3, 
    0x2, 0x2, 0x2, 0x1ac, 0x136, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x13a, 0x3, 
    0x2, 0x2, 0x2, 0x1ac, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x144, 0x3, 
    0x2, 0x2, 0x2, 0x1ac, 0x149, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x14e, 0x3, 
    0x2, 0x2, 0x2, 0x1ac, 0x153, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x158, 0x3, 
    0x2, 0x2, 0x2, 0x1ac, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x162, 0x3, 
    0x2, 0x2, 0x2, 0x1ac, 0x167, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x16c, 0x3, 
    0x2, 0x2, 0x2, 0x1ac, 0x171, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x176, 0x3, 
    0x2, 0x2, 0x2, 0x1ac, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x180, 0x3, 
    0x2, 0x2, 0x2, 0x1ac, 0x185, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x18a, 0x3, 
    0x2, 0x2, 0x2, 0x1ac, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x194, 0x3, 
    0x2, 0x2, 0x2, 0x1ac, 0x199, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x19e, 0x3, 
    0x2, 0x2, 0x2, 0x1ac, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1aa, 0x3, 
    0x2, 0x2, 0x2, 0x1ac, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1b9, 0x3, 
    0x2, 0x2, 0x2, 0x1ae, 0x1af, 0xc, 0x20, 0x2, 0x2, 0x1af, 0x1b0, 0x7, 
    0x53, 0x2, 0x2, 0x1b0, 0x1b8, 0x5, 0x26, 0x14, 0x21, 0x1b1, 0x1b2, 0xc, 
    0x1d, 0x2, 0x2, 0x1b2, 0x1b3, 0x9, 0x5, 0x2, 0x2, 0x1b3, 0x1b8, 0x5, 
    0x26, 0x14, 0x1e, 0x1b4, 0x1b5, 0xc, 0x1c, 0x2, 0x2, 0x1b5, 0x1b6, 0x9, 
    0x6, 0x2, 0x2, 0x1b6, 0x1b8, 0x5, 0x26, 0x14, 0x1d, 0x1b7, 0x1ae, 0x3, 
    0x2, 0x2, 0x2, 0x1b7, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b4, 0x3, 
    0x2, 0x2, 0x2, 0x1b8, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1b7, 0x3, 
    0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x18, 0x33, 0x43, 0x4b, 
    0x52, 0x5c, 0x61, 0x6a, 0x6f, 0x77, 0x7c, 0x85, 0x8a, 0x92, 0x9b, 0x9f, 
    0xa4, 0x121, 0x12c, 0x12e, 0x1ac, 0x1b7, 0x1b9, 
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
