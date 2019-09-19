#include <gtest/gtest.h>
#include <vector>
#include <string>
#include <fstream>
#include <boost/filesystem.hpp>
#include <irafhy/utility/solver/CSPSolver.h>
#include <irafhy/representation/geometric/intervalHull.h>
#include <irafhy/utility/viewer.h>

class runCSPSolverTest : public ::testing::Test
{
protected:
	void SetUp() override
	{
		//construct 2d interval hull
		std::vector<capd::interval> _2dConstraints;
		_2dConstraints.emplace_back(capd::interval(-1.22, 2.57));
		_2dConstraints.emplace_back(capd::interval(-3.2, 5.13));
		_2dIntervalHull = irafhy::IntervalHull(_2dConstraints);
		//construct 3d interval hull
		std::vector<capd::interval> _3dConstraints;
		_3dConstraints.emplace_back(capd::interval(2.19, 3.37));
		_3dConstraints.emplace_back(capd::interval(1.11, 5.96));
		_3dConstraints.emplace_back(capd::interval(-3.22, 7.23));
		_3dIntervalHull = irafhy::IntervalHull(_3dConstraints);
		//construct 7d interval hull
		std::vector<capd::interval> _5dConstraints;
		_5dConstraints.emplace_back(capd::interval(1.11, 2.35));
		_5dConstraints.emplace_back(capd::interval(0.25, 9.44));
		_5dConstraints.emplace_back(capd::interval(-3.44, -0.13));
		_5dConstraints.emplace_back(capd::interval(0.0, 0.0));
		_5dConstraints.emplace_back(capd::interval(-2.35, 4.4));
		_5dIntervalHull = irafhy::IntervalHull(_5dConstraints);
	}
	void TearDown() override
	{
		//TODO
	}
	int					 sampleCnt;
	irafhy::IntervalHull _2dIntervalHull;
	irafhy::IntervalHull _3dIntervalHull;
	irafhy::IntervalHull _5dIntervalHull;
};

TEST_F(runCSPSolverTest, case_0)
{
	double							  curEpsilon = 0.5;
	std::vector<irafhy::IntervalHull> boundaryIntervalHulls
		= irafhy::CSPSolver::solve(this->_2dIntervalHull, curEpsilon);
	boundaryIntervalHulls.emplace_back(this->_2dIntervalHull);
	for (const auto& intervalHull : boundaryIntervalHulls)
		std::cout << intervalHull << std::endl;
	irafhy::viewer::show(boundaryIntervalHulls, {}, {}, {0, 1}, irafhy::VIEW_TYPE::LINE);
}

TEST_F(runCSPSolverTest, case_1)
{
	double							  curEpsilon = 0.25;
	std::vector<irafhy::IntervalHull> boundaryIntervalHulls
		= irafhy::CSPSolver::solve(this->_3dIntervalHull, curEpsilon);
	boundaryIntervalHulls.emplace_back(this->_3dIntervalHull);
	irafhy::viewer::show(boundaryIntervalHulls, {}, {}, {0, 1, 2}, irafhy::VIEW_TYPE::LINE);
}

TEST_F(runCSPSolverTest, case_2)
{
	// double							  curEpsilon = 0.5;
	// std::vector<irafhy::IntervalHull> boundaryIntervalHulls
	// 	= irafhy::CSPSolver::solve(this->_5dIntervalHull, curEpsilon);
	// irafhy::viewer::show(boundaryIntervalHulls, {}, {}, {0, 1, 2}, irafhy::VIEW_TYPE::PLANE);
	// comment out the code cause the complexity ofg showing
}