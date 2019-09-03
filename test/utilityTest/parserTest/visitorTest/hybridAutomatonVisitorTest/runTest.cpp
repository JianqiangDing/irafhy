#include <gtest/gtest.h>
#include <capd/capdlib.h>
#include <vector>
#include <fstream>
#include <string>
#include <boost/filesystem.hpp>
#include <irafhy/utility/parser/visitor/hybridautomatonVisitor.h>
#include <overApproximateForward/analyser/analyser.h>
#include <overApproximateForward/verifier/verifier.h>

class runHybridAutomatonTest : public ::testing::Test
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
		example_3Path = rootPath + example_3Path;
		example_4Path = rootPath + example_4Path;
		example_5Path = rootPath + example_5Path;
		example_6Path = rootPath + example_6Path;
		example_7Path = rootPath + example_7Path;
		example_0Ifstream.open(example_0Path);
		example_1Ifstream.open(example_1Path);
		example_2Ifstream.open(example_2Path);
		example_3Ifstream.open(example_3Path);
		example_4Ifstream.open(example_4Path);
		example_5Ifstream.open(example_5Path);
		example_6Ifstream.open(example_6Path);
		example_7Ifstream.open(example_7Path);
	}
	void TearDown() override
	{
		rootPath.clear();
		example_0Path.clear();
		example_1Path.clear();
		example_2Path.clear();
		example_3Path.clear();
		example_4Path.clear();
		example_5Path.clear();
		example_6Path.clear();
		example_7Path.clear();
	}
	std::string   rootPath		= boost::filesystem::current_path().string();
	std::string   example_0Path = "/resource/model/example_0/model.mdl";
	std::string   example_1Path = "/resource/model/example_1/model.mdl";
	std::string   example_2Path = "/resource/model/example_2/model.mdl";
	std::string   example_3Path = "/resource/model/example_3/model.mdl";
	std::string   example_4Path = "/resource/model/example_4/model.mdl";
	std::string   example_5Path = "/resource/model/example_5/model.mdl";
	std::string   example_6Path = "/resource/model/example_6/model.mdl";
	std::string   example_7Path = "/resource/model/example_7/model.mdl";
	std::ifstream example_0Ifstream;
	std::ifstream example_1Ifstream;
	std::ifstream example_2Ifstream;
	std::ifstream example_3Ifstream;
	std::ifstream example_4Ifstream;
	std::ifstream example_5Ifstream;
	std::ifstream example_6Ifstream;
	std::ifstream example_7Ifstream;
};

TEST_F(runHybridAutomatonTest, example_0)
{
	antlr4::ANTLRInputStream					   hybridAutomationAntlrInputStream(this->example_0Ifstream);
	hybridautomatonLexer						   hybridAutomationLexer(&hybridAutomationAntlrInputStream);
	antlr4::CommonTokenStream					   hybridAutomationCommonTokenStream(&hybridAutomationLexer);
	hybridautomatonParser						   hybridAutomationParser(&hybridAutomationCommonTokenStream);
	hybridautomatonParser::HybridautomatonContext* hybridautomatonContext = hybridAutomationParser.hybridautomaton();
	irafhy::HybridAutomatonVisitor<irafhy::OAFAnalyser, irafhy::OAFVerifier> hybridAutomatonVisitor;
	irafhy::HybridAutomaton<irafhy::OAFAnalyser, irafhy::OAFVerifier>		 hybridAutomaton
		= hybridAutomatonVisitor.visit(hybridautomatonContext);
	std::cout.precision(20);
	std::cout << hybridAutomaton << std::endl;
}

TEST_F(runHybridAutomatonTest, example_1)
{
	antlr4::ANTLRInputStream					   hybridAutomationAntlrInputStream(this->example_1Ifstream);
	hybridautomatonLexer						   hybridAutomationLexer(&hybridAutomationAntlrInputStream);
	antlr4::CommonTokenStream					   hybridAutomationCommonTokenStream(&hybridAutomationLexer);
	hybridautomatonParser						   hybridAutomationParser(&hybridAutomationCommonTokenStream);
	hybridautomatonParser::HybridautomatonContext* hybridautomatonContext = hybridAutomationParser.hybridautomaton();
	irafhy::HybridAutomatonVisitor<irafhy::OAFAnalyser, irafhy::OAFVerifier> hybridAutomatonVisitor;
	irafhy::HybridAutomaton<irafhy::OAFAnalyser, irafhy::OAFVerifier>		 hybridAutomaton
		= hybridAutomatonVisitor.visit(hybridautomatonContext);
	std::cout.precision(20);
	std::cout << hybridAutomaton << std::endl;
}

TEST_F(runHybridAutomatonTest, example_2)
{
	antlr4::ANTLRInputStream					   hybridAutomationAntlrInputStream(this->example_2Ifstream);
	hybridautomatonLexer						   hybridAutomationLexer(&hybridAutomationAntlrInputStream);
	antlr4::CommonTokenStream					   hybridAutomationCommonTokenStream(&hybridAutomationLexer);
	hybridautomatonParser						   hybridAutomationParser(&hybridAutomationCommonTokenStream);
	hybridautomatonParser::HybridautomatonContext* hybridautomatonContext = hybridAutomationParser.hybridautomaton();
	irafhy::HybridAutomatonVisitor<irafhy::OAFAnalyser, irafhy::OAFVerifier> hybridAutomatonVisitor;
	irafhy::HybridAutomaton<irafhy::OAFAnalyser, irafhy::OAFVerifier>		 hybridAutomaton
		= hybridAutomatonVisitor.visit(hybridautomatonContext);
	std::cout.precision(20);
	std::cout << hybridAutomaton << std::endl;
}

TEST_F(runHybridAutomatonTest, example_3)
{
	antlr4::ANTLRInputStream					   hybridAutomationAntlrInputStream(this->example_3Ifstream);
	hybridautomatonLexer						   hybridAutomationLexer(&hybridAutomationAntlrInputStream);
	antlr4::CommonTokenStream					   hybridAutomationCommonTokenStream(&hybridAutomationLexer);
	hybridautomatonParser						   hybridAutomationParser(&hybridAutomationCommonTokenStream);
	hybridautomatonParser::HybridautomatonContext* hybridautomatonContext = hybridAutomationParser.hybridautomaton();
	irafhy::HybridAutomatonVisitor<irafhy::OAFAnalyser, irafhy::OAFVerifier> hybridAutomatonVisitor;
	irafhy::HybridAutomaton<irafhy::OAFAnalyser, irafhy::OAFVerifier>		 hybridAutomaton
		= hybridAutomatonVisitor.visit(hybridautomatonContext);
	std::cout.precision(20);
	std::cout << hybridAutomaton << std::endl;
}


TEST_F(runHybridAutomatonTest, example_4)
{
	antlr4::ANTLRInputStream					   hybridAutomationAntlrInputStream(this->example_4Ifstream);
	hybridautomatonLexer						   hybridAutomationLexer(&hybridAutomationAntlrInputStream);
	antlr4::CommonTokenStream					   hybridAutomationCommonTokenStream(&hybridAutomationLexer);
	hybridautomatonParser						   hybridAutomationParser(&hybridAutomationCommonTokenStream);
	hybridautomatonParser::HybridautomatonContext* hybridautomatonContext = hybridAutomationParser.hybridautomaton();
	irafhy::HybridAutomatonVisitor<irafhy::OAFAnalyser, irafhy::OAFVerifier> hybridAutomatonVisitor;
	irafhy::HybridAutomaton<irafhy::OAFAnalyser, irafhy::OAFVerifier>		 hybridAutomaton
		= hybridAutomatonVisitor.visit(hybridautomatonContext);
	std::cout.precision(20);
	std::cout << hybridAutomaton << std::endl;
}
TEST_F(runHybridAutomatonTest, example_5)
{
	antlr4::ANTLRInputStream					   hybridAutomationAntlrInputStream(this->example_5Ifstream);
	hybridautomatonLexer						   hybridAutomationLexer(&hybridAutomationAntlrInputStream);
	antlr4::CommonTokenStream					   hybridAutomationCommonTokenStream(&hybridAutomationLexer);
	hybridautomatonParser						   hybridAutomationParser(&hybridAutomationCommonTokenStream);
	hybridautomatonParser::HybridautomatonContext* hybridautomatonContext = hybridAutomationParser.hybridautomaton();
	irafhy::HybridAutomatonVisitor<irafhy::OAFAnalyser, irafhy::OAFVerifier> hybridAutomatonVisitor;
	irafhy::HybridAutomaton<irafhy::OAFAnalyser, irafhy::OAFVerifier>		 hybridAutomaton
		= hybridAutomatonVisitor.visit(hybridautomatonContext);
	std::cout.precision(20);
	std::cout << hybridAutomaton << std::endl;
}

TEST_F(runHybridAutomatonTest, example_6)
{
	antlr4::ANTLRInputStream					   hybridAutomationAntlrInputStream(this->example_6Ifstream);
	hybridautomatonLexer						   hybridAutomationLexer(&hybridAutomationAntlrInputStream);
	antlr4::CommonTokenStream					   hybridAutomationCommonTokenStream(&hybridAutomationLexer);
	hybridautomatonParser						   hybridAutomationParser(&hybridAutomationCommonTokenStream);
	hybridautomatonParser::HybridautomatonContext* hybridautomatonContext = hybridAutomationParser.hybridautomaton();
	irafhy::HybridAutomatonVisitor<irafhy::OAFAnalyser, irafhy::OAFVerifier> hybridAutomatonVisitor;
	irafhy::HybridAutomaton<irafhy::OAFAnalyser, irafhy::OAFVerifier>		 hybridAutomaton
		= hybridAutomatonVisitor.visit(hybridautomatonContext);
	std::cout.precision(20);
	std::cout << hybridAutomaton << std::endl;
}

TEST_F(runHybridAutomatonTest, example_7)
{
	antlr4::ANTLRInputStream					   hybridAutomationAntlrInputStream(this->example_7Ifstream);
	hybridautomatonLexer						   hybridAutomationLexer(&hybridAutomationAntlrInputStream);
	antlr4::CommonTokenStream					   hybridAutomationCommonTokenStream(&hybridAutomationLexer);
	hybridautomatonParser						   hybridAutomationParser(&hybridAutomationCommonTokenStream);
	hybridautomatonParser::HybridautomatonContext* hybridautomatonContext = hybridAutomationParser.hybridautomaton();
	irafhy::HybridAutomatonVisitor<irafhy::OAFAnalyser, irafhy::OAFVerifier> hybridAutomatonVisitor;
	irafhy::HybridAutomaton<irafhy::OAFAnalyser, irafhy::OAFVerifier>		 hybridAutomaton
		= hybridAutomatonVisitor.visit(hybridautomatonContext);
	std::cout.precision(20);
	std::cout << hybridAutomaton << std::endl;
}