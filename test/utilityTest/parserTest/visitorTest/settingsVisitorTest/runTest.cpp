#include <gtest/gtest.h>
#include <vector>
#include <fstream>
#include <string>
#include <boost/filesystem.hpp>
#include <capd/capdlib.h>
#include <irafhy/utility/parser/visitor/settingsVisitor.h>
#include <overApproximateForward/settings/settings.h>
#include <underApproximateBackwardUsingPolytope/settings/settings.h>

class runSettingsVisitorTest : public ::testing::Test
{
protected:
	void SetUp() override
	{
		std::size_t startPos = rootPath.find("IRafhy");
		if (startPos == std::string::npos)
			startPos = rootPath.find("irafhy");
		rootPath	  = rootPath.substr(0, startPos + 6);
		example_0Path = rootPath + example_0Path;
		example_1Path = rootPath + example_1Path;
		example_2Path = rootPath + example_2Path;
		example_0Ifstream.open(example_0Path);
		example_1Ifstream.open(example_1Path);
		example_2Ifstream.open(example_2Path);
	}
	void TearDown() override
	{
		rootPath.clear();
		example_0Path.clear();
		example_1Path.clear();
		example_2Path.clear();
	}
	std::string   rootPath		= boost::filesystem::current_path().string();
	std::string   example_0Path = "/resource/model/example_0/setting.cfg";
	std::string   example_1Path = "/resource/model/example_0/setting.cfg";
	std::string   example_2Path = "/resource/model/example_0/setting.cfg";
	std::ifstream example_0Ifstream;
	std::ifstream example_1Ifstream;
	std::ifstream example_2Ifstream;
};

TEST_F(runSettingsVisitorTest, case_0)
{
	antlr4::ANTLRInputStream		settingsAntlrInputStream(this->example_0Ifstream);
	settingsLexer					lexer(&settingsAntlrInputStream);
	antlr4::CommonTokenStream		settingsCommonTokenStream(&lexer);
	settingsParser					parser(&settingsCommonTokenStream);
	settingsParser::SettingContext* settingContext = parser.setting();
	std::vector<std::string>		vars		   = {"x", "y"};
	irafhy::SettingsVisitor			settingsVisitor(vars);
	irafhy::Settings				settings = settingsVisitor.visit(settingContext);
	std::cout << settings << std::endl;
	settings.help();
	irafhy::OAFSettings oafSettings(settings);
	std::cout << oafSettings << std::endl;
	oafSettings.help();
	irafhy::UABPSettings uabpSettings(settings);
	std::cout << uabpSettings << std::endl;
	uabpSettings.help();
}

TEST_F(runSettingsVisitorTest, case_1)
{
	antlr4::ANTLRInputStream		settingsAntlrInputStream(this->example_1Ifstream);
	settingsLexer					lexer(&settingsAntlrInputStream);
	antlr4::CommonTokenStream		settingsCommonTokenStream(&lexer);
	settingsParser					parser(&settingsCommonTokenStream);
	settingsParser::SettingContext* settingContext = parser.setting();
	std::vector<std::string>		vars
		= {"x1",  "x2",  "x3",  "x4",  "x5",  "x6",  "x7",  "x8",  "x9",  "x10", "x11", "x12", "x13", "x14",
		   "x15", "x16", "x17", "x18", "x19", "x20", "x21", "x22", "x23", "x24", "x25", "x26", "x27", "x28"};
	irafhy::SettingsVisitor settingsVisitor(vars);
	irafhy::Settings		settings = settingsVisitor.visit(settingContext);
	std::cout << settings << std::endl;
	settings.help();
	irafhy::OAFSettings oafSettings(settings);
	std::cout << oafSettings << std::endl;
	oafSettings.help();
	irafhy::UABPSettings uabpSettings(settings);
	std::cout << uabpSettings << std::endl;
	uabpSettings.help();
}

TEST_F(runSettingsVisitorTest, case_2)
{
	antlr4::ANTLRInputStream		settingsAntlrInputStream(this->example_2Ifstream);
	settingsLexer					lexer(&settingsAntlrInputStream);
	antlr4::CommonTokenStream		settingsCommonTokenStream(&lexer);
	settingsParser					parser(&settingsCommonTokenStream);
	settingsParser::SettingContext* settingContext = parser.setting();
	std::vector<std::string>		vars		   = {"u", "v"};
	irafhy::SettingsVisitor			settingsVisitor(vars);
	irafhy::Settings				settings = settingsVisitor.visit(settingContext);
	std::cout << settings << std::endl;
	settings.help();
	irafhy::OAFSettings oafSettings(settings);
	std::cout << oafSettings << std::endl;
	oafSettings.help();
	irafhy::UABPSettings uabpSettings(settings);
	std::cout << uabpSettings << std::endl;
	uabpSettings.help();
}