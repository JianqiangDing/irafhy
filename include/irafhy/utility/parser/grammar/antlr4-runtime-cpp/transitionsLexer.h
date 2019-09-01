
// Generated from /home/jianqiang/CLionProjects/irafhy/src/utility/parser/grammar/transitions.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  transitionsLexer : public antlr4::Lexer {
public:
  enum {
    KEY_LOCATIONS = 1, KEY_MODEL = 2, KEY_FLOWS = 3, KEY_INVARIANT_CONDITIONS = 4, 
    KEY_SETTINGS = 5, KEY_ANALYSIS = 6, KEY_ANALYSIS_FORWARD = 7, KEY_ANALYSIS_BACKWARD = 8, 
    KEY_TIME_HORIZON = 9, KEY_STEP = 10, KEY_GEOMETRY = 11, KEY_PLOT_FLAG = 12, 
    KEY_PRINT_FLAG = 13, KEY_MAX_JUMP = 14, KEY_START_MODEL_ID = 15, KEY_INITIAL_CONDITION = 16, 
    KEY_TRANSITIONS = 17, KEY_URGENT = 18, KEY_JUMP = 19, KEY_DIRECTION = 20, 
    KEY_GUARD_CONDITIONS = 21, KEY_RESET_MAP = 22, KEY_INTERVAL_HULL = 23, 
    KEY_POLYTOPE = 24, KEY_CONDITION = 25, KEY_MATRIX = 26, KEY_ROW_MAJOR_ORDER = 27, 
    KEY_COL_MAJOR_ORDER = 28, KEY_SIN_FUNCTION = 29, KEY_ARCSIN_FUNCTION = 30, 
    KEY_COS_FUNCTION = 31, KEY_ARCCOS_FUNCTION = 32, KEY_TAN_FUNCTION = 33, 
    KEY_ARCTAN_FUNCTION = 34, KEY_COT_FUNCTION = 35, KEY_ARCCOT_FUNCTION = 36, 
    KEY_LN_FUNCTION = 37, KEY_LOG_FUNCTION = 38, KEY_NATURAL_EXP_FUNCTION = 39, 
    KEY_SINH_FUNCTION = 40, KEY_ARCSINH_FUNCTION = 41, KEY_COSH_FUNCTION = 42, 
    KEY_ARCCOSH_FUNCTION = 43, KEY_TANH_FUNCTION = 44, KEY_ARCTANH_FUNCTION = 45, 
    KEY_COTH_FUNCTION = 46, KEY_ARCCOTH_FUNCTION = 47, KEY_SQR_FUNCTION = 48, 
    KEY_SQRT_FUNCTION = 49, KEY_ABS_FUNCTION = 50, KEY_POWER_FUNCTION = 51, 
    KEY_NAME = 52, KEY_SWITCH_ON = 53, KEY_SWITCH_OFF = 54, KEY_BOOL_TRUE = 55, 
    KEY_BOOL_FALSE = 56, KEY_INFINITY = 57, SCINUM = 58, NUMBER = 59, VARIABLE = 60, 
    LEFTCURLYBRACKET = 61, RIGHTCURLYBRACKET = 62, LEFTROUNDBRACKET = 63, 
    RIGHTROUNDBRACKET = 64, LEFTSQUAREBRACKET = 65, RIGHTSQUAREBRACKET = 66, 
    COMMA = 67, EQUAL = 68, UNEQUAL = 69, GEQ = 70, LEQ = 71, LSS = 72, 
    GTR = 73, DEFINE = 74, FROMTO = 75, ASSIGN = 76, PLUS = 77, MINUS = 78, 
    MULTIPLY = 79, DIVIDE = 80, EXPONENT = 81, DERIVATIVE = 82, COMMENT = 83, 
    WS = 84
  };

  transitionsLexer(antlr4::CharStream *input);
  ~transitionsLexer();

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

