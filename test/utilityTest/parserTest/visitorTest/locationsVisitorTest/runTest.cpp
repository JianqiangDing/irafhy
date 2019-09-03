#include <gtest/gtest.h>
#include <vector>
#include <fstream>
#include <capd/capdlib.h>
#include <boost/filesystem.hpp>
#include <irafhy/utility/parser/visitor/locationsVisitor.h>
#include <overApproximateForward/analyser/analyser.h>

class runLocationsVisitorTest : public ::testing::Test
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
	std::string   example_0Path = "/resource/script/locations_0.expr";
	std::string   example_1Path = "/resource/script/locations_1.expr";
	std::string   example_2Path = "/resource/script/locations_2.expr";
	std::ifstream example_0Ifstream;
	std::ifstream example_1Ifstream;
	std::ifstream example_2Ifstream;
};

TEST_F(runLocationsVisitorTest, case_0)
{
	antlr4::ANTLRInputStream					  locationsAntlrInputStream(this->example_0Ifstream);
	hybridautomatonLexer						  locationsLexer(&locationsAntlrInputStream);
	antlr4::CommonTokenStream					  locationsCommonTokenStream(&locationsLexer);
	hybridautomatonParser						  locationsParser(&locationsCommonTokenStream);
	hybridautomatonParser::LocationsContext*	  locationsContext = locationsParser.locations();
	std::vector<std::string>					  vars			   = {"x", "y"};
	irafhy::LocationsVisitor<irafhy::OAFAnalyser> locationsVisitor(vars);
	irafhy::Locations<irafhy::OAFAnalyser>		  locations = locationsVisitor.visit(locationsContext);
	std::cout.precision(20);
	std::cout << locations << std::endl;
}

TEST_F(runLocationsVisitorTest, case_1)
{
	antlr4::ANTLRInputStream				 locationsAntlrInputStream(this->example_1Ifstream);
	hybridautomatonLexer					 locationsLexer(&locationsAntlrInputStream);
	antlr4::CommonTokenStream				 locationsCommonTokenStream(&locationsLexer);
	hybridautomatonParser					 locationsParser(&locationsCommonTokenStream);
	hybridautomatonParser::LocationsContext* locationsContext = locationsParser.locations();
	std::vector<std::string>				 vars
		= {"x1",  "x2",  "x3",  "x4",  "x5",  "x6",  "x7",  "x8",  "x9",  "x10", "x11", "x12", "x13", "x14",
		   "x15", "x16", "x17", "x18", "x19", "x20", "x21", "x22", "x23", "x24", "x25", "x26", "x27", "x28"};
	irafhy::LocationsVisitor<irafhy::OAFAnalyser> locationsVisitor(vars);
	irafhy::Locations<irafhy::OAFAnalyser>		  locations = locationsVisitor.visit(locationsContext);
	std::cout.precision(20);
	std::cout << locations << std::endl;
}

TEST_F(runLocationsVisitorTest, case_2)
{
	antlr4::ANTLRInputStream					  locationsAntlrInputStream(this->example_2Ifstream);
	hybridautomatonLexer						  locationsLexer(&locationsAntlrInputStream);
	antlr4::CommonTokenStream					  locationsCommonTokenStream(&locationsLexer);
	hybridautomatonParser						  locationsParser(&locationsCommonTokenStream);
	hybridautomatonParser::LocationsContext*	  locationsContext = locationsParser.locations();
	std::vector<std::string>					  vars			   = {"u", "v"};
	irafhy::LocationsVisitor<irafhy::OAFAnalyser> locationsVisitor(vars);
	irafhy::Locations<irafhy::OAFAnalyser>		  locations = locationsVisitor.visit(locationsContext);
	std::cout.precision(20);
	std::cout << locations << std::endl;
}
