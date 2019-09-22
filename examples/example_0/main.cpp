#include <boost/filesystem.hpp>
#include <capd/capdlib.h>
#include <string>
#include <vector>
#include <irafhy/utility/parser/hybridAutomatonParser.h>
#include <irafhy/utility/parser/settingsParser.h>
#include <irafhy/utility/viewer.h>
#include <overApproximateForward/analyser/analyser.h>
#include <overApproximateForward/settings/settings.h>
#include <overApproximateForward/verifier/verifier.h>

int main()
{
	//set the path of the related files
	std::string rootPath = boost::filesystem::current_path().string();
	std::size_t startPos = rootPath.find("IRafhy");
	if (startPos == std::string::npos)
		startPos = rootPath.find("irafhy");
	rootPath					= rootPath.substr(0, startPos + 6);
	std::string modelFilePath   = rootPath + "/resource/model/example_0/model.mdl";
	std::string settingFilePath = rootPath + "/resource/model/example_0/setting_overApproximation.cfg";
	//read the model and settings
	irafhy::HybridAutomaton<irafhy::OAFAnalyser, irafhy::OAFVerifier> hybridAutomaton
		= irafhy::HybridAutomatonParser<irafhy::OAFAnalyser, irafhy::OAFVerifier>::parse(modelFilePath);
	irafhy::Settings	settings = irafhy::SettingsParser::parse(settingFilePath, hybridAutomaton.variables());
	irafhy::OAFSettings oafSettings(settings);
	//simulation
	hybridAutomaton.simulate(oafSettings);
	//get the resulting conditions
	std::vector<irafhy::Condition> results = hybridAutomaton.reachableConditions();
	//get the time sequence
	std::vector<capd::interval> timeSequence = hybridAutomaton.timeSequence();
	//view the conditions
	std::vector<irafhy::IntervalHull> resultIntervalHulls;
	resultIntervalHulls.reserve(results.size());
	for (const auto& condition : results)
		resultIntervalHulls.emplace_back(boost::get<irafhy::IntervalHull>(condition.entity()));
	irafhy::viewer::show(resultIntervalHulls, {}, timeSequence, {0, 1}, irafhy::VIEW_TYPE::PLANE);
	return 0;
}