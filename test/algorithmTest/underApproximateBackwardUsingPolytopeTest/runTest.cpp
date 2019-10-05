#include <gtest/gtest.h>
#include <vector>
#include <string>
#include <fstream>
#include <memory>
#include <boost/filesystem.hpp>
#include <capd/capdlib.h>
#include <irafhy/utility/parser/hybridAutomatonParser.h>
#include <irafhy/utility/parser/settingsParser.h>
#include <irafhy/utility/parser/visitor/systemVisitor.h>
#include <irafhy/utility/viewer.h>
#include <irafhy/utility/plotter.h>
#include <underApproximateBackwardUsingPolytope/analyser/analyser.h>
#include <underApproximateBackwardUsingPolytope/settings/settings.h>
#include <underApproximateBackwardUsingPolytope/verifier/verifier.h>

class runUABPAnalyserTest : public ::testing::Test
{
protected:
	void SetUp() override
	{
		std::size_t startPos = rootPath.find("IRafhy");
		if (startPos == std::string::npos)
			startPos = rootPath.find("irafhy");
		rootPath   = rootPath.substr(0, startPos + 6);
		systemPath = rootPath + systemPath;

		// modelIfstreamVec.resize(examplesCnt);
		// settingIfstreamVec.resize(examplesCnt);
		for (std::size_t index = 0; index < examplesCnt; ++index)
		{
			std::string thisModelPath   = "/resource/model/example_" + std::to_string(index) + "/model.mdl";
			std::string thisSettingPath = "/resource/model/example_" + std::to_string(index) + "/setting.cfg";
			thisModelPath				= rootPath + thisModelPath;
			thisSettingPath				= rootPath + thisSettingPath;
			modelPathVec.emplace_back(thisModelPath);
			settingPathVec.emplace_back(thisSettingPath);
			std::unique_ptr<std::ifstream> thisModelIfstream(new std::ifstream(thisModelPath));
			std::unique_ptr<std::ifstream> thisSettingIfstream(new std::ifstream(thisSettingPath));
			modelIfstreamVec.push_back(std::move(thisModelIfstream));
			settingIfstreamVec.push_back(std::move(thisSettingIfstream));
		}

		systemIfstream.open(systemPath);
	}
	void TearDown() override
	{
		rootPath.clear();
		systemPath.clear();
		modelPathVec.clear();
		settingPathVec.clear();
	}
	std::string rootPath	= boost::filesystem::current_path().string();
	std::string systemPath  = "/resource/script/spikingNeuronModel.expr";
	int			examplesCnt = 8;

	std::vector<std::string> modelPathVec;
	std::vector<std::string> settingPathVec;

	std::ifstream								systemIfstream;
	std::vector<std::unique_ptr<std::ifstream>> modelIfstreamVec;
	std::vector<std::unique_ptr<std::ifstream>> settingIfstreamVec;
};

TEST_F(runUABPAnalyserTest, runUABPAnalyser_SpikingNeuronModel_single_step_Test)
{
	antlr4::ANTLRInputStream			  systemAntlrInputStream(this->systemIfstream);
	hybridautomatonLexer				  systemLexer(&systemAntlrInputStream);
	antlr4::CommonTokenStream			  systemCommonTokenStream(&systemLexer);
	hybridautomatonParser				  systemParser(&systemCommonTokenStream);
	hybridautomatonParser::SystemContext* systemContext = systemParser.system();
	std::vector<std::string>			  vars			= {"u", "v"};
	irafhy::SystemVisitor				  systemVisitor(vars);
	irafhy::System						  system = systemVisitor.visit(systemContext);
	irafhy::UABPAnalyser				  analyser;
	irafhy::Time						  duration(0, 0.002);
	std::vector<capd::interval>			  constraints(2);
	constraints[0] = capd::interval(-65, -60);
	constraints[1] = capd::interval(-0.2, 0.2);
	// constraints[0] = capd::interval(-64.956, -60.1555);
	// constraints[1] = capd::interval(-1.06532, -1.04162);
	irafhy::Condition	initCondition(constraints, irafhy::GEOMETRY::INTERVAL_HULL);
	irafhy::UABPSettings settings;
	settings.setEpsilon(0.05);
	settings.setIsExact(false);
	capd::C0Rect2Set				  result = analyser.compute(duration, system, initCondition.set(), settings);
	std::vector<irafhy::IntervalHull> conditions;
	conditions.emplace_back(irafhy::IntervalHull(constraints));
	capd::IVector				iVector(result);
	std::vector<capd::interval> retConstraints;
	retConstraints.reserve(iVector.dimension());
	for (std::size_t index = 0; index < iVector.dimension(); ++index)
		retConstraints.emplace_back(iVector[index]);
	conditions.emplace_back(irafhy::IntervalHull(retConstraints));
	irafhy::viewer::show(conditions, {}, {}, {0, 1}, irafhy::VIEW_TYPE::PLANE);
}

TEST_F(runUABPAnalyserTest, runUABPAnalyserTest_example_0_Test)
{
	//hybrid automaton parsing
	irafhy::HybridAutomaton<irafhy::UABPAnalyser, irafhy::UABPVerifier> hybridAutomaton
		= irafhy::HybridAutomatonParser<irafhy::UABPAnalyser, irafhy::UABPVerifier>::parse(this->modelPathVec[0]);
	//setting parsing
	irafhy::Settings	 settings = irafhy::SettingsParser::parse(this->settingPathVec[0], hybridAutomaton.variables());
	irafhy::UABPSettings uabpSettings(settings);
	uabpSettings.setEpsilon(0.005);
	//simulation
	hybridAutomaton.simulate(uabpSettings);
	//get the resulting conditions
	std::vector<irafhy::Condition> results = hybridAutomaton.reachableConditions();
	//get the time sequence
	std::vector<capd::interval> timeSequence = hybridAutomaton.timeSequence();
	//rescale the time sequence
	for (auto& time : timeSequence)
		time *= 50;
	//view the conditions
	std::vector<irafhy::IntervalHull> resultIntervalHulls;
	resultIntervalHulls.reserve(results.size());
	for (const auto& condition : results)
	{
		std::vector<capd::interval> thisConstraints;
		thisConstraints.reserve(condition.constraints().dimension());
		for (std::size_t index = 0; index < condition.constraints().dimension(); ++index)
		{
			if (index == 0)
			{
				thisConstraints.emplace_back(condition.constraints()[index] * 100);
			}
			else
			{
				thisConstraints.emplace_back(condition.constraints()[index]);
			}
		}
		resultIntervalHulls.emplace_back(irafhy::IntervalHull(thisConstraints));
		std::cout << resultIntervalHulls.back() << std::endl;
	}
	irafhy::viewer::show(resultIntervalHulls, {}, timeSequence, {0, 1}, irafhy::VIEW_TYPE::PLANE);
}

TEST_F(runUABPAnalyserTest, runUABPAnalyserTest_example_2_Test)
{
	//hybrid automaton parsing
	irafhy::HybridAutomaton<irafhy::UABPAnalyser, irafhy::UABPVerifier> hybridAutomaton
		= irafhy::HybridAutomatonParser<irafhy::UABPAnalyser, irafhy::UABPVerifier>::parse(this->modelPathVec[2]);
	//setting parsing
	irafhy::Settings	 settings = irafhy::SettingsParser::parse(this->settingPathVec[2], hybridAutomaton.variables());
	irafhy::UABPSettings uabpSettings(settings);
	uabpSettings.setEpsilon(0.005);
	//simulation
	hybridAutomaton.simulate(uabpSettings);
	//get the resulting conditions
	std::vector<irafhy::Condition> results = hybridAutomaton.reachableConditions();
	//get the time sequence
	std::vector<capd::interval> timeSequence = hybridAutomaton.timeSequence();
	//rescale the time sequence
	for (auto& time : timeSequence)
		time *= 50;
	//view the conditions
	std::vector<irafhy::IntervalHull> resultIntervalHulls;
	resultIntervalHulls.reserve(results.size());
	for (const auto& condition : results)
	{
		std::vector<capd::interval> thisConstraints;
		thisConstraints.reserve(condition.constraints().dimension());
		for (std::size_t index = 0; index < condition.constraints().dimension(); ++index)
		{
			thisConstraints.emplace_back(condition.constraints()[index] * 10);
		}
		resultIntervalHulls.emplace_back(irafhy::IntervalHull(thisConstraints));
		std::cout << resultIntervalHulls.back() << std::endl;
	}
	irafhy::viewer::show(resultIntervalHulls, {}, timeSequence, {0, 1}, irafhy::VIEW_TYPE::PLANE);
}

TEST_F(runUABPAnalyserTest, runUABPAnalyserTest_example_3_Test)
{
	//hybrid automaton parsing
	irafhy::HybridAutomaton<irafhy::UABPAnalyser, irafhy::UABPVerifier> hybridAutomaton
		= irafhy::HybridAutomatonParser<irafhy::UABPAnalyser, irafhy::UABPVerifier>::parse(this->modelPathVec[3]);
	//setting parsing
	irafhy::Settings	 settings = irafhy::SettingsParser::parse(this->settingPathVec[3], hybridAutomaton.variables());
	irafhy::UABPSettings uabpSettings(settings);
	uabpSettings.setEpsilon(0.0001);
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
			thisConstraints.emplace_back(condition.constraints()[index] /** 50*/);
		resultIntervalHulls.emplace_back(irafhy::IntervalHull(thisConstraints));
		std::cout << resultIntervalHulls.back() << std::endl;
	}
	irafhy::viewer::show(resultIntervalHulls, {}, timeSequence, {0, 1}, irafhy::VIEW_TYPE::PLANE);
	// irafhy::viewer::show(resultIntervalHulls, {}, {}, {0, 1}, irafhy::VIEW_TYPE::PLANE);
}

TEST_F(runUABPAnalyserTest, runUABPAnalyserTest_example_4_Test)
{
	//hybrid automaton parsing
	irafhy::HybridAutomaton<irafhy::UABPAnalyser, irafhy::UABPVerifier> hybridAutomaton
		= irafhy::HybridAutomatonParser<irafhy::UABPAnalyser, irafhy::UABPVerifier>::parse(this->modelPathVec[4]);
	//setting parsing
	irafhy::Settings	 settings = irafhy::SettingsParser::parse(this->settingPathVec[4], hybridAutomaton.variables());
	irafhy::UABPSettings uabpSettings(settings);
	uabpSettings.setEpsilon(0.01);
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
}

TEST_F(runUABPAnalyserTest, runUABPAnalyserTest_example_5_Test)
{
	//hybrid automaton parsing
	irafhy::HybridAutomaton<irafhy::UABPAnalyser, irafhy::UABPVerifier> hybridAutomaton
		= irafhy::HybridAutomatonParser<irafhy::UABPAnalyser, irafhy::UABPVerifier>::parse(this->modelPathVec[5]);
	//setting parsing
	irafhy::Settings	 settings = irafhy::SettingsParser::parse(this->settingPathVec[5], hybridAutomaton.variables());
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
	irafhy::Plotter::plot(timeSequence, resultIntervalHulls, {0});
}

TEST_F(runUABPAnalyserTest, runUABPAnalyserTest_example_6_Test)
{
	//hybrid automaton parsing
	irafhy::HybridAutomaton<irafhy::UABPAnalyser, irafhy::UABPVerifier> hybridAutomaton
		= irafhy::HybridAutomatonParser<irafhy::UABPAnalyser, irafhy::UABPVerifier>::parse(this->modelPathVec[6]);
	//setting parsing
	irafhy::Settings	 settings = irafhy::SettingsParser::parse(this->settingPathVec[6], hybridAutomaton.variables());
	irafhy::UABPSettings uabpSettings(settings);
	uabpSettings.setEpsilon(0.05);
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
	// irafhy::viewer::show(resultIntervalHulls, {}, timeSequence, {0, 1}, irafhy::VIEW_TYPE::PLANE);
	irafhy::viewer::show(resultIntervalHulls, {}, {}, {0, 1, 2}, irafhy::VIEW_TYPE::LINE);
}

TEST_F(runUABPAnalyserTest, runUABPAnalyserTest_example_7_Test)
{
	//hybrid automaton parsing
	irafhy::HybridAutomaton<irafhy::UABPAnalyser, irafhy::UABPVerifier> hybridAutomaton
		= irafhy::HybridAutomatonParser<irafhy::UABPAnalyser, irafhy::UABPVerifier>::parse(this->modelPathVec[7]);
	//setting parsing
	irafhy::Settings	 settings = irafhy::SettingsParser::parse(this->settingPathVec[7], hybridAutomaton.variables());
	irafhy::UABPSettings uabpSettings(settings);
	uabpSettings.setEpsilon(0.01);
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
	// irafhy::viewer::show(resultIntervalHulls, {}, timeSequence, {0, 1}, irafhy::VIEW_TYPE::PLANE);
	irafhy::viewer::show(resultIntervalHulls, {}, {}, {0, 1, 2}, irafhy::VIEW_TYPE::LINE);
}