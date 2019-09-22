#include <vector>
#include <string>
#include <boost/filesystem.hpp>
#include <capd/capdlib.h>
#include <irafhy/utility/parser/hybridAutomatonParser.h>
#include <irafhy/utility/parser/settingsParser.h>
#include <irafhy/utility/viewer.h>
#include <underApproximateBackwardUsingPolytope/analyser/analyser.h>
#include <underApproximateBackwardUsingPolytope/settings/settings.h>
#include <underApproximateBackwardUsingPolytope/verifier/verifier.h>

int main()
{
	//set the path of the related files
	std::string rootPath = boost::filesystem::current_path().string();
	std::size_t startPos = rootPath.find("IRafhy");
	if (startPos == std::string::npos)
		startPos = rootPath.find("irafhy");
	rootPath					= rootPath.substr(0, startPos + 6);
	std::string modelFilePath   = rootPath + "/resource/model/example_5/model.mdl";
	std::string settingFilePath = rootPath + "/resource/model/example_5/setting.cfg";
	//hybrid automaton parsing
	//hybrid automaton parsing
	irafhy::HybridAutomaton<irafhy::UABPAnalyser, irafhy::UABPVerifier> hybridAutomaton
		= irafhy::HybridAutomatonParser<irafhy::UABPAnalyser, irafhy::UABPVerifier>::parse(modelFilePath);
	//setting parsing
	irafhy::Settings	 settings = irafhy::SettingsParser::parse(settingFilePath, hybridAutomaton.variables());
	irafhy::UABPSettings uabpSettings(settings);
	uabpSettings.setEpsilon(0.001);
	//simulation
	hybridAutomaton.simulate(uabpSettings);
	//get the resulting conditions
	std::vector<irafhy::Condition> results = hybridAutomaton.reachableConditions();
	//get the time sequence
	std::vector<capd::interval> timeSequence = hybridAutomaton.timeSequence();
	//view the conditions
	std::vector<irafhy::IntervalHull> resultIntervalHulls;
	resultIntervalHulls.reserve(results.size());
	for (const auto& condition : results)
	{
		std::vector<capd::interval> thisConstraints;
		thisConstraints.reserve(condition.constraints().dimension());
		for (std::size_t index = 0; index < condition.constraints().dimension(); ++index)
		{
			thisConstraints.emplace_back(condition.constraints()[index]);
		}
		resultIntervalHulls.emplace_back(irafhy::IntervalHull(thisConstraints));
		std::cout << resultIntervalHulls.back() << std::endl;
	}
	irafhy::viewer::show(resultIntervalHulls, {}, timeSequence, {0, 1}, irafhy::VIEW_TYPE::PLANE);
	return 0;
}