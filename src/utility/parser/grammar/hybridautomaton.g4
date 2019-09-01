grammar hybridautomaton;
import definition, locations, transitions;

hybridautomatonid: KEY_NAME VARIABLE+;
variables:
	KEY_VARIABLES LEFTCURLYBRACKET VARIABLE? (COMMA? VARIABLE)* RIGHTCURLYBRACKET;
hybridautomaton:
	KEY_HYBRID_AUTOMATON LEFTCURLYBRACKET hybridautomatonid variables locations transitions
		RIGHTCURLYBRACKET;

KEY_HYBRID_AUTOMATON: 'HYBRID_AUTOMATON';
KEY_VARIABLES: 'VARIABLES';