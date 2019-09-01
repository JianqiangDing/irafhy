
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/hybridautomaton.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  hybridautomatonLexer : public antlr4::Lexer {
public:
  enum {
    KEY_HYBRID_AUTOMATON = 1, KEY_VARIABLES = 2, KEY_LOCATIONS = 3, KEY_MODEL = 4, 
    KEY_FLOWS = 5, KEY_INVARIANT_CONDITIONS = 6, KEY_SETTINGS = 7, KEY_ANALYSIS = 8, 
    KEY_ANALYSIS_FORWARD = 9, KEY_ANALYSIS_BACKWARD = 10, KEY_TIME_HORIZON = 11, 
    KEY_STEP = 12, KEY_GEOMETRY = 13, KEY_PLOT_FLAG = 14, KEY_PRINT_FLAG = 15, 
    KEY_MAX_JUMP = 16, KEY_START_MODEL_ID = 17, KEY_INITIAL_CONDITION = 18, 
    KEY_TRANSITIONS = 19, KEY_URGENT = 20, KEY_JUMP = 21, KEY_DIRECTION = 22, 
    KEY_GUARD_CONDITIONS = 23, KEY_RESET_MAP = 24, KEY_INTERVAL_HULL = 25, 
    KEY_POLYTOPE = 26, KEY_CONDITION = 27, KEY_MATRIX = 28, KEY_ROW_MAJOR_ORDER = 29, 
    KEY_COL_MAJOR_ORDER = 30, KEY_SIN_FUNCTION = 31, KEY_ARCSIN_FUNCTION = 32, 
    KEY_COS_FUNCTION = 33, KEY_ARCCOS_FUNCTION = 34, KEY_TAN_FUNCTION = 35, 
    KEY_ARCTAN_FUNCTION = 36, KEY_COT_FUNCTION = 37, KEY_ARCCOT_FUNCTION = 38, 
    KEY_LN_FUNCTION = 39, KEY_LOG_FUNCTION = 40, KEY_NATURAL_EXP_FUNCTION = 41, 
    KEY_SINH_FUNCTION = 42, KEY_ARCSINH_FUNCTION = 43, KEY_COSH_FUNCTION = 44, 
    KEY_ARCCOSH_FUNCTION = 45, KEY_TANH_FUNCTION = 46, KEY_ARCTANH_FUNCTION = 47, 
    KEY_COTH_FUNCTION = 48, KEY_ARCCOTH_FUNCTION = 49, KEY_SQR_FUNCTION = 50, 
    KEY_SQRT_FUNCTION = 51, KEY_ABS_FUNCTION = 52, KEY_POWER_FUNCTION = 53, 
    KEY_NAME = 54, KEY_SWITCH_ON = 55, KEY_SWITCH_OFF = 56, KEY_BOOL_TRUE = 57, 
    KEY_BOOL_FALSE = 58, KEY_INFINITY = 59, SCINUM = 60, NUMBER = 61, VARIABLE = 62, 
    LEFTCURLYBRACKET = 63, RIGHTCURLYBRACKET = 64, LEFTROUNDBRACKET = 65, 
    RIGHTROUNDBRACKET = 66, LEFTSQUAREBRACKET = 67, RIGHTSQUAREBRACKET = 68, 
    COMMA = 69, EQUAL = 70, UNEQUAL = 71, GEQ = 72, LEQ = 73, LSS = 74, 
    GTR = 75, DEFINE = 76, FROMTO = 77, ASSIGN = 78, PLUS = 79, MINUS = 80, 
    MULTIPLY = 81, DIVIDE = 82, EXPONENT = 83, DERIVATIVE = 84, COMMENT = 85, 
    WS = 86
  };

  hybridautomatonLexer(antlr4::CharStream *input);
  ~hybridautomatonLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

