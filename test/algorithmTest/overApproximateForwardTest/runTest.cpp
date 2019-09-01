#include <gtest/gtest.h>
#include <vector>
#include <string>
#include <fstream>
#include <boost/filesystem.hpp>
#include <capd/capdlib.h>
#include <irafhy/utility/parser/visitor/hybridautomatonVisitor.h>
#include <irafhy/utility/parser/visitor/settingsVisitor.h>
#include <irafhy/utility/viewer.h>
#include <overApproximateForward/analyser/analyser.h>
#include <overApproximateForward/settings/settings.h>
#include <overApproximateForward/verifier/verifier.h>

class runOAFAnalyserTest : public ::testing::Test
{
protected:
	void SetUp() override
	{
		std::size_t startPos = rootPath.find("IRafhy");
		if (startPos == std::string::npos)
			startPos = rootPath.find("irafhy");
		rootPath						  = rootPath.substr(0, startPos + 5);
		SpikingNeuronModelPath			  = rootPath + SpikingNeuronModelPath;
		SpikingNeuronModelSettingsPath	= rootPath + SpikingNeuronModelSettingsPath;
		HelicopterControllerModelPath	 = rootPath + HelicopterControllerModelPath;
		HelicopterControllerSettingsPath  = rootPath + HelicopterControllerSettingsPath;
		FitzHugNagNeuronModelPath		  = rootPath + FitzHugNagNeuronModelPath;
		FitzHugNagNeuronModelSettingsPath = rootPath + FitzHugNagNeuronModelSettingsPath;
		SpikingNeuronModelIfstream.open(SpikingNeuronModelPath);
		SpikingNeuronModelSettingsIfstream.open(SpikingNeuronModelSettingsPath);
		HelicopterControllerModelIfstream.open(HelicopterControllerModelPath);
		HelicopterControlerSettingsIfstream.open(HelicopterControllerSettingsPath);
		FitzHugNagNeuronModelIfstream.open(FitzHugNagNeuronModelPath);
		FitzHugNagNeuronModelSettingsIfstream.open(FitzHugNagNeuronModelSettingsPath);
	}
	void TearDown() override
	{
		rootPath.clear();
		SpikingNeuronModelPath.clear();
		SpikingNeuronModelSettingsPath.clear();
		HelicopterControllerModelPath.clear();
		HelicopterControllerSettingsPath.clear();
	}
	std::string   rootPath							= boost::filesystem::current_path().string();
	std::string   SpikingNeuronModelPath			= "/resource/model/example_0/model.mdl";
	std::string   SpikingNeuronModelSettingsPath	= "/resource/model/example_0/setting.cfg";
	std::string   HelicopterControllerModelPath		= "/resource/model/example_1/model.mdl";
	std::string   HelicopterControllerSettingsPath  = "/resource/model/example_1/setting.cfg";
	std::string   FitzHugNagNeuronModelPath			= "/resource/model/example_2/model.mdl";
	std::string   FitzHugNagNeuronModelSettingsPath = "/resource/model/example_2/setting.cfg";
	std::ifstream SpikingNeuronModelIfstream;
	std::ifstream SpikingNeuronModelSettingsIfstream;
	std::ifstream HelicopterControllerModelIfstream;
	std::ifstream HelicopterControlerSettingsIfstream;
	std::ifstream FitzHugNagNeuronModelIfstream;
	std::ifstream FitzHugNagNeuronModelSettingsIfstream;
};

TEST_F(runOAFAnalyserTest, runOAFAnalyserTest_SpikingNeuronModel_Test)
{
	//hybrid automaton parsing
	antlr4::ANTLRInputStream					   modelAntlrInputStream(this->SpikingNeuronModelIfstream);
	hybridautomatonLexer						   modelLexer(&modelAntlrInputStream);
	antlr4::CommonTokenStream					   modelCommonTokenStream(&modelLexer);
	hybridautomatonParser						   modelParser(&modelCommonTokenStream);
	hybridautomatonParser::HybridautomatonContext* modelContext = modelParser.hybridautomaton();
	irafhy::HybridAutomatonVisitor<irafhy::OAFAnalyser, irafhy::OAFVerifier> OAFHybridAutomatonVisitor;
	irafhy::HybridAutomaton<irafhy::OAFAnalyser, irafhy::OAFVerifier>		 hybridAutomaton
		= OAFHybridAutomatonVisitor.visit(modelContext);
	//setting parsing
	antlr4::ANTLRInputStream		settingAntlrInputStream(this->SpikingNeuronModelSettingsIfstream);
	settingsLexer					settingLexer(&settingAntlrInputStream);
	antlr4::CommonTokenStream		settingCommonTokenStream(&settingLexer);
	settingsParser					settingParser(&settingCommonTokenStream);
	settingsParser::SettingContext* settingContext = settingParser.setting();
	irafhy::SettingsVisitor			settingsVisitor(hybridAutomaton.variables());
	irafhy::Settings				settings = settingsVisitor.visit(settingContext);
	irafhy::OAFSettings				oafSettings(settings);
	//simulation
	hybridAutomaton.simulate(oafSettings);
	//get the resulting conditions
	std::vector<irafhy::Condition> results = hybridAutomaton.reachableConditions();
	//get the time sequence
	std::vector<capd::interval> timeSequence = hybridAutomaton.timeSequence();
	//view the conditions
	std::vector<irafhy::IntervalHull> resultIntervalHulls;
	resultIntervalHulls.reserve(results.size());
	int index = 0;
	for (const auto& condition : results)
		resultIntervalHulls.emplace_back(boost::get<irafhy::IntervalHull>(condition.entity()));
	irafhy::viewer::show(resultIntervalHulls, {}, timeSequence, {0, 1}, irafhy::VIEW_TYPE::PLANE);
	// irath::viewer::show(resultIntervalHulls, {}, {}, {0, 1}, irath::VIEW_TYPE::PLANE);
}

TEST_F(runOAFAnalyserTest, runOAFAnalyserTest_helicopterController_Test)
{
	//hybrid automaton parsing
	antlr4::ANTLRInputStream					   modelAntlrInputStream(this->HelicopterControllerModelIfstream);
	hybridautomatonLexer						   modelLexer(&modelAntlrInputStream);
	antlr4::CommonTokenStream					   modelCommonTokenStream(&modelLexer);
	hybridautomatonParser						   modelParser(&modelCommonTokenStream);
	hybridautomatonParser::HybridautomatonContext* modelContext = modelParser.hybridautomaton();
	irafhy::HybridAutomatonVisitor<irafhy::OAFAnalyser, irafhy::OAFVerifier> OAFHybridAutomatonVisitor;
	irafhy::HybridAutomaton<irafhy::OAFAnalyser, irafhy::OAFVerifier>		 hybridAutomaton
		= OAFHybridAutomatonVisitor.visit(modelContext);
	//setting parsing
	antlr4::ANTLRInputStream		settingAntlrInputStream(this->HelicopterControlerSettingsIfstream);
	settingsLexer					settingLexer(&settingAntlrInputStream);
	antlr4::CommonTokenStream		settingCommonTokenStream(&settingLexer);
	settingsParser					settingParser(&settingCommonTokenStream);
	settingsParser::SettingContext* settingContext = settingParser.setting();
	irafhy::SettingsVisitor			settingsVisitor(hybridAutomaton.variables());
	irafhy::Settings				settings = settingsVisitor.visit(settingContext);
	irafhy::OAFSettings				oafSettings(settings);
	//simulation
	hybridAutomaton.simulate(oafSettings);
	//get the resulting conditions
	std::vector<irafhy::Condition> results = hybridAutomaton.reachableConditions();
	//get the time sequence
	std::vector<capd::interval> timeSequence = hybridAutomaton.timeSequence();
	//view the conditions
	std::vector<irafhy::IntervalHull> resultIntervalHulls;
	resultIntervalHulls.reserve(results.size());
	int index = 0;
	for (const auto& condition : results)
	{
		std::vector<capd::interval> thisConstraints;
		thisConstraints.reserve(condition.constraints().dimension());
		for (int index = 0; index < condition.constraints().dimension(); ++index)
			thisConstraints.emplace_back(condition.constraints()[index] * 50);
		resultIntervalHulls.emplace_back(irafhy::IntervalHull(thisConstraints));
	}
	irafhy::viewer::show(resultIntervalHulls, {}, timeSequence, {0, 3}, irafhy::VIEW_TYPE::PLANE);
	// irath::viewer::show(resultIntervalHulls, {}, {}, {0, 1}, irath::VIEW_TYPE::PLANE);
}

TEST_F(runOAFAnalyserTest, runOAFAnalyserTest_fitzHugNagNeuronModel_Test)
{
	//hybrid automaton parsing
	antlr4::ANTLRInputStream					   modelAntlrInputStream(this->FitzHugNagNeuronModelIfstream);
	hybridautomatonLexer						   modelLexer(&modelAntlrInputStream);
	antlr4::CommonTokenStream					   modelCommonTokenStream(&modelLexer);
	hybridautomatonParser						   modelParser(&modelCommonTokenStream);
	hybridautomatonParser::HybridautomatonContext* modelContext = modelParser.hybridautomaton();
	irafhy::HybridAutomatonVisitor<irafhy::OAFAnalyser, irafhy::OAFVerifier> OAFHybridAutomatonVisitor;
	irafhy::HybridAutomaton<irafhy::OAFAnalyser, irafhy::OAFVerifier>		 hybridAutomaton
		= OAFHybridAutomatonVisitor.visit(modelContext);
	//setting parsing
	antlr4::ANTLRInputStream		settingAntlrInputStream(this->FitzHugNagNeuronModelSettingsIfstream);
	settingsLexer					settingLexer(&settingAntlrInputStream);
	antlr4::CommonTokenStream		settingCommonTokenStream(&settingLexer);
	settingsParser					settingParser(&settingCommonTokenStream);
	settingsParser::SettingContext* settingContext = settingParser.setting();
	irafhy::SettingsVisitor			settingsVisitor(hybridAutomaton.variables());
	irafhy::Settings				settings = settingsVisitor.visit(settingContext);
	irafhy::OAFSettings				oafSettings(settings);
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
	{
		std::vector<capd::interval> thisConstraints;
		thisConstraints.reserve(condition.constraints().dimension());
		for (std::size_t index = 0; index < condition.constraints().dimension(); ++index)
			thisConstraints.emplace_back(condition.constraints()[index]);
		resultIntervalHulls.emplace_back(irafhy::IntervalHull(thisConstraints));
	}
	irafhy::viewer::show(resultIntervalHulls, {}, timeSequence, {0, 1}, irafhy::VIEW_TYPE::PLANE);
}
