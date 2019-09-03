#include <gtest/gtest.h>
#include <capd/capdlib.h>
#include <vector>
#include <fstream>
#include <string>
#include <boost/filesystem.hpp>
#include <irafhy/representation/formal/basic/system.h>
#include <irafhy/utility/parser/visitor/systemVisitor.h>

class runSystemVisitorTest : public ::testing::Test
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
	std::string   example_0Path = "/resource/script/system_0.expr";
	std::string   example_1Path = "/resource/script/system_1.expr";
	std::string   example_2Path = "/resource/script/system_2.expr";
	std::ifstream example_0Ifstream;
	std::ifstream example_1Ifstream;
	std::ifstream example_2Ifstream;
};

TEST_F(runSystemVisitorTest, case_0)
{
	antlr4::ANTLRInputStream			  systemAntlrInputStream(this->example_0Ifstream);
	hybridautomatonLexer				  systemLexer(&systemAntlrInputStream);
	antlr4::CommonTokenStream			  systemCommonTokenStream(&systemLexer);
	hybridautomatonParser				  systemParser(&systemCommonTokenStream);
	hybridautomatonParser::SystemContext* systemContext = systemParser.system();
	std::vector<std::string>			  vars			= {"x", "y"};
	irafhy::SystemVisitor				  systemVisitor(vars);
	irafhy::System						  system = systemVisitor.visit(systemContext);
	std::cout << system << std::endl;
}

TEST_F(runSystemVisitorTest, case_1)
{
	antlr4::ANTLRInputStream			  systemAntlrInputStream(this->example_1Ifstream);
	hybridautomatonLexer				  systemLexer(&systemAntlrInputStream);
	antlr4::CommonTokenStream			  systemCommonTokenStream(&systemLexer);
	hybridautomatonParser				  systemParser(&systemCommonTokenStream);
	hybridautomatonParser::SystemContext* systemContext = systemParser.system();
	std::vector<std::string>			  vars
		= {"x1",  "x2",  "x3",  "x4",  "x5",  "x6",  "x7",  "x8",  "x9",  "x10", "x11", "x12", "x13", "x14",
		   "x15", "x16", "x17", "x18", "x19", "x20", "x21", "x22", "x23", "x24", "x25", "x26", "x27", "x28"};
	irafhy::SystemVisitor systemVisitor(vars);
	irafhy::System		  system = systemVisitor.visit(systemContext);
	std::cout << system << std::endl;
}

TEST_F(runSystemVisitorTest, case_2)
{
	antlr4::ANTLRInputStream			  systemAntlrInputStream(this->example_2Ifstream);
	hybridautomatonLexer				  systemLexer(&systemAntlrInputStream);
	antlr4::CommonTokenStream			  systemCommonTokenStream(&systemLexer);
	hybridautomatonParser				  systemParser(&systemCommonTokenStream);
	hybridautomatonParser::SystemContext* systemContext = systemParser.system();
	std::vector<std::string>			  vars			= {"u", "v"};
	irafhy::SystemVisitor				  systemVisitor(vars);
	irafhy::System						  system = systemVisitor.visit(systemContext);
	std::cout << system << std::endl;
}