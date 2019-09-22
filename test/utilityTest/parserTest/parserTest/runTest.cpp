#include <gtest/gtest.h>
#include <capd/capdlib.h>
#include <fstream>
#include <string>
#include <boost/filesystem.hpp>
#include <irafhy/representation/formal/basic/constraints.h>
#include <irafhy/utility/parser/hybridAutomatonParser.h>
#include <irafhy/utility/parser/settingsParser.h>
#include <underApproximateBackwardUsingPolytope/analyser/analyser.h>
#include <underApproximateBackwardUsingPolytope/verifier/verifier.h>
#include <underApproximateBackwardUsingPolytope/settings/settings.h>

class runParserTest : public ::testing::Test
{
protected:
	void SetUp() override
	{
		std::size_t startPos = rootPath.find("IRafhy");
		if (startPos == std::string::npos)
			startPos = rootPath.find("irafhy");
		rootPath	 = rootPath.substr(0, startPos + 6);
		modelPath	 = rootPath + modelPath;
		settingsPath = rootPath + settingsPath;
	}
	void TearDown() override
	{
		modelPath.clear();
		settingsPath.clear();
	}
	std::string rootPath	 = boost::filesystem::current_path().string();
	std::string modelPath	 = "/resource/model/example_0/model.mdl";
	std::string settingsPath = "/resource/model/example_0/setting.cfg";
};

TEST_F(runParserTest, case_0)
{
	irafhy::HybridAutomaton<irafhy::UABPAnalyser, irafhy::UABPVerifier> hybridAutomaton
		= irafhy::HybridAutomatonParser<irafhy::UABPAnalyser, irafhy::UABPVerifier>::parse(this->modelPath);
	std::cout << hybridAutomaton << std::endl;
}

TEST_F(runParserTest, case_1)
{
	irafhy::HybridAutomaton<irafhy::UABPAnalyser, irafhy::UABPVerifier> hybridAutomaton
		= irafhy::HybridAutomatonParser<irafhy::UABPAnalyser, irafhy::UABPVerifier>::parse(this->modelPath);
	irafhy::Settings settings = irafhy::SettingsParser::parse(this->settingsPath, hybridAutomaton.variables());
	std::cout << settings << std::endl;
}