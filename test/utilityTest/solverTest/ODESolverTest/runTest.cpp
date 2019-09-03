#include <gtest/gtest.h>
#include <vector>
#include <string>
#include <fstream>
#include <capd/capdlib.h>
#include <boost/filesystem.hpp>
#include <irafhy/utility/solver/ODESolver.h>
#include <irafhy/utility/viewer.h>
#include <irafhy/utility/parser/visitor/systemVisitor.h>

class runODESolverTest : public ::testing::Test
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
		example_0Ifstream.open(example_0Path);
		example_1Ifstream.open(example_1Path);
		example_2Ifstream.open(example_2Path);
		example_3Ifstream.open(example_3Path);
		example_4Ifstream.open(example_4Path);
		//construct 2d interval hull
		std::vector<capd::interval> _2dConstraints;
		_2dConstraints.emplace_back(capd::interval(1.0));
		_2dConstraints.emplace_back(capd::interval(2.0));
		_2dIntervalHull = irafhy::IntervalHull(_2dConstraints);
		//construct 3d interval hull
		std::vector<capd::interval> _3dConstraints;
		_3dConstraints.emplace_back(capd::interval(10.0));
		_3dConstraints.emplace_back(capd::interval(1.0));
		_3dConstraints.emplace_back(capd::interval(1.0));
		_3dIntervalHull = irafhy::IntervalHull(_3dConstraints);
		//construct 28d interval hull
		std::vector<capd::interval> _28dConstraints_;
		//----------------------------------------------------------------------
		for (std::size_t index = 0; index < 8; ++index)
			_28dConstraints_.emplace_back(capd::interval(0.0, 0.1));
		for (std::size_t index = 0; index < 20; ++index)
			_28dConstraints_.emplace_back(capd::interval(0.0, 0.0));
		//----------------------------------------------------------------------
		_28dIntervalHull = irafhy::IntervalHull(_28dConstraints_);
	}
	void TearDown() override
	{
		rootPath.clear();
		example_0Path.clear();
		example_1Path.clear();
		example_2Path.clear();
		example_3Path.clear();
		example_4Path.clear();
	}
	int					 sampleCnt;
	irafhy::IntervalHull _2dIntervalHull;
	irafhy::IntervalHull _spiking2dIntervalHull;
	irafhy::IntervalHull _3dIntervalHull;
	irafhy::IntervalHull _28dIntervalHull;
	irafhy::IntervalHull _fitzIntervalHull;
	std::string			 rootPath	  = boost::filesystem::current_path().string();
	std::string			 example_0Path = "/resource/script/system_0.expr";
	std::string			 example_1Path = "/resource/script/system_1.expr";
	std::string			 example_2Path = "/resource/script/system_2.expr";
	std::string			 example_3Path = "/resource/script/system_3.expr";
	std::string			 example_4Path = "/resource/script/system_4.expr";
	std::ifstream		 example_0Ifstream;
	std::ifstream		 example_1Ifstream;
	std::ifstream		 example_2Ifstream;
	std::ifstream		 example_3Ifstream;
	std::ifstream		 example_4Ifstream;
};

TEST_F(runODESolverTest, case_0)
{
	antlr4::ANTLRInputStream			  systemAntlrInputStream(this->example_0Ifstream);
	hybridautomatonLexer				  systemLexer(&systemAntlrInputStream);
	antlr4::CommonTokenStream			  systemCommonTokenStream(&systemLexer);
	hybridautomatonParser				  systemParser(&systemCommonTokenStream);
	hybridautomatonParser::SystemContext* systemContext = systemParser.system();
	std::vector<std::string>			  vars			= {"x", "y"};
	irafhy::SystemVisitor				  systemVisitor(vars);
	irafhy::System						  system = systemVisitor.visit(systemContext);
	std::cout.precision(20);
	std::cout << system << std::endl;
	irafhy::Time	 duration(4, 10);
	capd::C0Rect2Set initCondition = irafhy::Condition(this->_2dIntervalHull).set();
	capd::C0Rect2Set result		   = irafhy::ODESolver::solve(system, initCondition, duration);
	capd::IVector	iVector(result);
	std::cout << iVector << std::endl;
}