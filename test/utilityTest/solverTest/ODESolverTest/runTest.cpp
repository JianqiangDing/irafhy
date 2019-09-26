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
		//construct example_0 interval hull
		std::vector<capd::interval> example_0Constraints;
		example_0Constraints.emplace_back(capd::interval(0.5, 1.5));
		example_0Constraints.emplace_back(capd::interval(2.0, 3.0));
		example_0IntervalHull = irafhy::IntervalHull(example_0Constraints);
		//construct example_1 interval hull
		std::vector<capd::interval> example_1Constraints;
		for (std::size_t index = 0; index < 8; ++index)
			example_1Constraints.emplace_back(capd::interval(0.0, 0.1));
		for (std::size_t index = 0; index < 20; ++index)
			example_1Constraints.emplace_back(capd::interval(0.0, 0.0));
		example_1IntervalHull = irafhy::IntervalHull(example_1Constraints);
		//construct example_2 interval hull
		std::vector<capd::interval> example_2Constraints;
		example_2Constraints.emplace_back(capd::interval(25.0, 25.2));
		example_2Constraints.emplace_back(capd::interval(-65, -65));
		example_2IntervalHull = irafhy::IntervalHull(example_2Constraints);
		//construct example_3 interval hull
		std::vector<capd::interval> example_3Constraints;
		example_3Constraints.emplace_back(capd::interval(1.0));
		example_3Constraints.emplace_back(capd::interval(2.0));
		example_3IntervalHull = irafhy::IntervalHull(example_3Constraints);
		//construct example_4 interval hull
		std::vector<capd::interval> example_4Constraints;
		example_4Constraints.emplace_back(capd::interval(10.0));
		example_4Constraints.emplace_back(capd::interval(1.0));
		example_4Constraints.emplace_back(capd::interval(1.0));
		example_4IntervalHull = irafhy::IntervalHull(example_4Constraints);
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
	irafhy::IntervalHull example_0IntervalHull;
	irafhy::IntervalHull example_1IntervalHull;
	irafhy::IntervalHull example_2IntervalHull;
	irafhy::IntervalHull example_3IntervalHull;
	irafhy::IntervalHull example_4IntervalHull;
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
	irafhy::Time					  duration(0, 0.2);
	capd::C0Rect2Set				  set = irafhy::Condition(this->example_0IntervalHull).set();
	std::vector<irafhy::IntervalHull> retIntervalHulls;
	std::vector<capd::interval>		  time;
	double							  step = 0.02;
	retIntervalHulls.reserve(duration.range() / step + 1);
	time.reserve(duration.range() / step + 1);
	long int steps = duration.range() / step;
	for (int index = 0; index < steps; ++index)
	{
		double						curStart = index * step;
		double						curEnd   = (index + 1) * step;
		irafhy::Time				curDuration(curStart, curEnd);
		capd::C0Rect2Set			thisResult = irafhy::ODESolver::solve(system, set, curDuration);
		capd::IVector				thisV(thisResult);
		std::vector<capd::interval> thisConstraints;
		thisConstraints.reserve(thisV.dimension());
		for (int dimIdx = 0; dimIdx < thisV.dimension(); ++dimIdx)
			thisConstraints.emplace_back(thisV[dimIdx]);
		retIntervalHulls.emplace_back(irafhy::IntervalHull(thisConstraints));
		set = thisResult;
		std::cout << curDuration << std::endl;
		time.emplace_back(capd::interval(curStart, curEnd) * 10);
	}
	irafhy::viewer::show(retIntervalHulls, {}, time, {0, 1}, irafhy::VIEW_TYPE::PLANE);
}

TEST_F(runODESolverTest, case_1)
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
	std::cout.precision(20);
	std::cout << system << std::endl;
	irafhy::Time					  duration(0, 5);
	capd::C0Rect2Set				  set = irafhy::Condition(this->example_1IntervalHull).set();
	std::vector<irafhy::IntervalHull> retIntervalHulls;
	std::vector<capd::interval>		  time;
	double							  step = 0.2;
	retIntervalHulls.reserve(duration.range() / step + 1);
	time.reserve(duration.range() / step + 1);
	for (int index = 0; index < duration.range() / step; ++index)
	{
		double						curStart = index * step;
		double						curEnd   = (index + 1) * step;
		irafhy::Time				curDuration(curStart, curEnd);
		capd::C0Rect2Set			thisResult = irafhy::ODESolver::solve(system, set, curDuration);
		capd::IVector				thisV(thisResult);
		std::vector<capd::interval> thisConstraints;
		thisConstraints.reserve(thisV.dimension());
		for (int dimIdx = 0; dimIdx < thisV.dimension(); ++dimIdx)
			thisConstraints.emplace_back(thisV[dimIdx] * 50);
		retIntervalHulls.emplace_back(irafhy::IntervalHull(thisConstraints));
		set = thisResult;
		std::cout << curDuration << std::endl;
		time.emplace_back(capd::interval(curStart, curEnd));
	}
	irafhy::viewer::show(retIntervalHulls, {}, time, {3, 5}, irafhy::VIEW_TYPE::PLANE);
}

TEST_F(runODESolverTest, case_2)
{
	antlr4::ANTLRInputStream			  systemAntlrInputStream(this->example_2Ifstream);
	hybridautomatonLexer				  systemLexer(&systemAntlrInputStream);
	antlr4::CommonTokenStream			  systemCommonTokenStream(&systemLexer);
	hybridautomatonParser				  systemParser(&systemCommonTokenStream);
	hybridautomatonParser::SystemContext* systemContext = systemParser.system();
	std::vector<std::string>			  vars			= {"u", "v"};
	irafhy::SystemVisitor				  systemVisitor(vars);
	irafhy::System						  system = systemVisitor.visit(systemContext);
	std::cout.precision(20);
	std::cout << system << std::endl;
	irafhy::Time					  duration(0, 5);
	capd::C0Rect2Set				  set = irafhy::Condition(this->example_2IntervalHull).set();
	std::vector<irafhy::IntervalHull> retIntervalHulls;
	std::vector<capd::interval>		  time;
	double							  step = 0.02;
	retIntervalHulls.reserve(duration.range() / step + 1);
	time.reserve(duration.range() / step + 1);
	for (int index = 0; index < duration.range() / step; ++index)
	{
		double						curStart = index * step;
		double						curEnd   = (index + 1) * step;
		irafhy::Time				curDuration(curStart, curEnd);
		capd::C0Rect2Set			thisResult = irafhy::ODESolver::solve(system, set, curDuration);
		capd::IVector				thisV(thisResult);
		std::vector<capd::interval> thisConstraints;
		thisConstraints.reserve(thisV.dimension());
		for (int dimIdx = 0; dimIdx < thisV.dimension(); ++dimIdx)
			thisConstraints.emplace_back(thisV[dimIdx] * 50);
		retIntervalHulls.emplace_back(irafhy::IntervalHull(thisConstraints));
		set = thisResult;
		std::cout << curDuration << std::endl;
		time.emplace_back(capd::interval(curStart, curEnd) * 10);
	}
	irafhy::viewer::show(retIntervalHulls, {}, time, {0, 1}, irafhy::VIEW_TYPE::PLANE);
}

TEST_F(runODESolverTest, case_3)
{
	antlr4::ANTLRInputStream			  systemAntlrInputStream(this->example_3Ifstream);
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
	capd::C0Rect2Set initCondition = irafhy::Condition(this->example_3IntervalHull).set();
	capd::C0Rect2Set result		   = irafhy::ODESolver::solve(system, initCondition, duration);
	capd::IVector	iVector(result);
	std::cout << iVector << std::endl;
}

TEST_F(runODESolverTest, case_4)
{
	antlr4::ANTLRInputStream			  systemAntlrInputStream(this->example_4Ifstream);
	hybridautomatonLexer				  systemLexer(&systemAntlrInputStream);
	antlr4::CommonTokenStream			  systemCommonTokenStream(&systemLexer);
	hybridautomatonParser				  systemParser(&systemCommonTokenStream);
	hybridautomatonParser::SystemContext* systemContext = systemParser.system();
	std::vector<std::string>			  vars			= {"x", "y", "z"};
	irafhy::SystemVisitor				  systemVisitor(vars);
	irafhy::System						  system = systemVisitor.visit(systemContext);
	std::cout.precision(20);
	std::cout << system << std::endl;
	irafhy::Time							duration(0, 0.8);
	capd::C0Rect2Set						set = irafhy::Condition(this->example_4IntervalHull).set();
	std::vector<irafhy::IntervalHull>		retIntervalHulls;
	std::vector<std::vector<irafhy::Point>> retPoints;
	double									step = 0.001;
	retIntervalHulls.reserve(duration.range() / step + 1);
	retPoints.reserve(retIntervalHulls.size());
	for (int index = 0; index < duration.range() / step; ++index)
	{
		double						curStart = index * step;
		double						curEnd   = (index + 1) * step;
		irafhy::Time				curDuration(curStart, curEnd);
		capd::C0Rect2Set			thisResult = irafhy::ODESolver::solve(system, set, curDuration);
		capd::IVector				thisV(thisResult);
		std::vector<capd::interval> thisConstraints;
		thisConstraints.reserve(thisV.dimension());
		for (int dimIdx = 0; dimIdx < thisV.dimension(); ++dimIdx)
			thisConstraints.emplace_back(thisV[dimIdx]);
		retIntervalHulls.emplace_back(irafhy::IntervalHull(thisConstraints));
		retPoints.emplace_back(irafhy::IntervalHull(thisConstraints).extremeVertices());
		set = thisResult;
	}
	irafhy::viewer::show(retIntervalHulls, retPoints, {}, {0, 1, 2}, irafhy::VIEW_TYPE::PLANE);
}