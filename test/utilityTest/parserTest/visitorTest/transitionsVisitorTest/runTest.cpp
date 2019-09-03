#include <gtest/gtest.h>
#include <vector>
#include <string>
#include <fstream>
#include <capd/capdlib.h>
#include <boost/filesystem.hpp>
#include <irafhy/utility/parser/visitor/transitionsVisitor.h>
#include <overApproximateForward/analyser/analyser.h>

class runTransitionsVisitorTest : public ::testing::Test
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
	std::string   example_0Path = "/resource/script/transitions_0.expr";
	std::string   example_1Path = "/resource/script/transitions_1.expr";
	std::string   example_2Path = "/resource/script/transitions_2.expr";
	std::ifstream example_0Ifstream;
	std::ifstream example_1Ifstream;
	std::ifstream example_2Ifstream;
};

TEST_F(runTransitionsVisitorTest, case_0)
{
	std::vector<std::string>						vars = {"x", "y"};
	antlr4::ANTLRInputStream						transitionsAntlrInputStream(this->example_0Ifstream);
	hybridautomatonLexer							transitionsLexer(&transitionsAntlrInputStream);
	antlr4::CommonTokenStream						transitionsCommonTokenStream(&transitionsLexer);
	hybridautomatonParser							transitionsParser(&transitionsCommonTokenStream);
	hybridautomatonParser::TransitionsContext*		transitionsContext = transitionsParser.transitions();
	irafhy::TransitionsVisitor<irafhy::OAFAnalyser> transitionsVisitor(vars);
	irafhy::Transitions<irafhy::OAFAnalyser>		transitions = transitionsVisitor.visit(transitionsContext);
	std::cout << transitions << std::endl;
}

TEST_F(runTransitionsVisitorTest, case_1)
{
	std::vector<std::string> vars
		= {"x1",  "x2",  "x3",  "x4",  "x5",  "x6",  "x7",  "x8",  "x9",  "x10", "x11", "x12", "x13", "x14",
		   "x15", "x16", "x17", "x18", "x19", "x20", "x21", "x22", "x23", "x24", "x25", "x26", "x27", "x28"};
	antlr4::ANTLRInputStream						transitionsAntlrInputStream(this->example_1Ifstream);
	hybridautomatonLexer							transitionsLexer(&transitionsAntlrInputStream);
	antlr4::CommonTokenStream						transitionsCommonTokenStream(&transitionsLexer);
	hybridautomatonParser							transitionsParser(&transitionsCommonTokenStream);
	hybridautomatonParser::TransitionsContext*		transitionsContext = transitionsParser.transitions();
	irafhy::TransitionsVisitor<irafhy::OAFAnalyser> transitionsVisitor(vars);
	irafhy::Transitions<irafhy::OAFAnalyser>		transitions = transitionsVisitor.visit(transitionsContext);
	std::cout << transitions << std::endl;
}

TEST_F(runTransitionsVisitorTest, case_2)
{
	std::vector<std::string>						vars = {"u", "v"};
	antlr4::ANTLRInputStream						transitionsAntlrInputStream(this->example_2Ifstream);
	hybridautomatonLexer							transitionsLexer(&transitionsAntlrInputStream);
	antlr4::CommonTokenStream						transitionsCommonTokenStream(&transitionsLexer);
	hybridautomatonParser							transitionsParser(&transitionsCommonTokenStream);
	hybridautomatonParser::TransitionsContext*		transitionsContext = transitionsParser.transitions();
	irafhy::TransitionsVisitor<irafhy::OAFAnalyser> transitionsVisitor(vars);
	irafhy::Transitions<irafhy::OAFAnalyser>		transitions = transitionsVisitor.visit(transitionsContext);
	std::cout << transitions << std::endl;
}