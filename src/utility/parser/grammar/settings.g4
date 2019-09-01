grammar settings;
import definition;

timeHorizonsetting: KEY_TIME_HORIZON DEFINE interval;
stepSetting:KEY_STEP DEFINE NUMBER;
geometrysetting:
	KEY_GEOMETRY DEFINE VALUE =
	(
		KEY_INTERVAL_HULL
		| KEY_POLYTOPE
	);
plotsetting:
	KEY_PLOT_FLAG DEFINE SWITCH =
	(
		KEY_SWITCH_ON
		| KEY_SWITCH_OFF
	);
printsetting:
	KEY_PRINT_FLAG DEFINE SWITCH =
	(
		KEY_SWITCH_ON
		| KEY_SWITCH_OFF
	);
analysissetting:
	KEY_ANALYSIS DEFINE ANALYSIS =
	(
		KEY_ANALYSIS_FORWARD
		| KEY_ANALYSIS_BACKWARD
	);
maxjumpsetting: KEY_MAX_JUMP DEFINE NUMBER;
startmodelidsetting: KEY_START_MODEL_ID DEFINE VARIABLE;
initialconditionsetting: KEY_INITIAL_CONDITION DEFINE condition;
setting:
	KEY_SETTINGS LEFTCURLYBRACKET
	(
		timeHorizonsetting
		| stepSetting
		| plotsetting
		| printsetting
		| analysissetting
		| geometrysetting
		| maxjumpsetting
		| startmodelidsetting
		| initialconditionsetting
	)+ RIGHTCURLYBRACKET;
//if there exits several setting about one property, we will just use the latest one and ignore all the settings before the lattest