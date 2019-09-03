#include <gtest/gtest.h>
#include <capd/capdlib.h>
#include <vector>
#include <fstream>
#include <boost/filesystem.hpp>
#include <irafhy/representation/formal/basic/constraints.h>
#include <irafhy/utility/parser/visitor/constriantsVisitor.h>

class runConstraintsVisitorTest : public ::testing::Test
{
protected:
	void SetUp() override
	{
		std::size_t startPos = rootPath.find("IRafhy");
		if (startPos == std::string::npos)
			startPos = rootPath.find("irafhy");
		rootPath	= rootPath.substr(0, startPos + 6);
		case_0_path = rootPath + case_0_path;
		case_1_path = rootPath + case_1_path;
		case_2_path = rootPath + case_2_path;
		case_0_ifstream.open(case_0_path);
		case_1_ifstream.open(case_1_path);
		case_2_ifstream.open(case_2_path);
	}
	void TearDown() override
	{
		rootPath.clear();
		case_0_path.clear();
		case_1_path.clear();
		case_2_path.clear();
	}
	std::string   rootPath	= boost::filesystem::current_path().string();
	std::string   case_0_path = "/resource/script/constraints_0.expr";
	std::string   case_1_path = "/resource/script/constraints_1.expr";
	std::string   case_2_path = "/resource/script/constraints_2.expr";
	std::ifstream case_0_ifstream;
	std::ifstream case_1_ifstream;
	std::ifstream case_2_ifstream;
};

TEST_F(runConstraintsVisitorTest, case_0)
{
	antlr4::ANTLRInputStream				   constraintsAntlrInputStream(this->case_0_ifstream);
	hybridautomatonLexer					   constraintsLexer(&constraintsAntlrInputStream);
	antlr4::CommonTokenStream				   constraintsCommonTokenStream(&constraintsLexer);
	hybridautomatonParser					   constraintsParser(&constraintsCommonTokenStream);
	hybridautomatonParser::ConstraintsContext* constraintsContext = constraintsParser.constraints();
	std::vector<std::string>				   vars				  = {"x", "y", "z"};
	irafhy::ConstraintsVisitor				   constraintsVisitor(vars);
	irafhy::Constraints						   constraints = constraintsVisitor.visit(constraintsContext);
	std::cout << constraints << std::endl;
}

TEST_F(runConstraintsVisitorTest, case_1)
{
	antlr4::ANTLRInputStream				   constraintsAntlrInputStream(this->case_1_ifstream);
	hybridautomatonLexer					   constraintsLexer(&constraintsAntlrInputStream);
	antlr4::CommonTokenStream				   constraintsCommonTokenStream(&constraintsLexer);
	hybridautomatonParser					   constraintsParser(&constraintsCommonTokenStream);
	hybridautomatonParser::ConstraintsContext* constraintsContext = constraintsParser.constraints();
	std::vector<std::string>				   vars				  = {"x", "y", "z"};
	irafhy::ConstraintsVisitor				   constraintsVisitor(vars);
	irafhy::Constraints						   constraints = constraintsVisitor.visit(constraintsContext);
	std::cout << constraints << std::endl;
}

TEST_F(runConstraintsVisitorTest, case_2)
{
	antlr4::ANTLRInputStream				   constraintsAntlrInputStream(this->case_2_ifstream);
	hybridautomatonLexer					   constraintsLexer(&constraintsAntlrInputStream);
	antlr4::CommonTokenStream				   constraintsCommonTokenStream(&constraintsLexer);
	hybridautomatonParser					   constraintsParser(&constraintsCommonTokenStream);
	hybridautomatonParser::ConstraintsContext* constraintsContext = constraintsParser.constraints();
	std::vector<std::string>				   vars				  = {"x", "y"};
	irafhy::ConstraintsVisitor				   constraintsVisitor(vars);
	irafhy::Constraints						   constraints = constraintsVisitor.visit(constraintsContext);
	std::cout << constraints << std::endl;
}