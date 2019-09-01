#include <gtest/gtest.h>
#include <capd/capdlib.h>
#include <irafhy/representation/geometric/intervalHull.h>
#include <irafhy/representation/geometric/basic/point.h>
#include <irafhy/utility/viewer.h>
#include <vector>
#include <random>

class ViewerTest : public ::testing::Test
{
private:
	Eigen::RowVectorXd randUniteVector(const int dimension)
	{
		Eigen::RowVectorXd				 unitVector(dimension);
		std::random_device				 rd;
		std::mt19937					 gen(rd());  // mersenne_twister_engine
		std::uniform_real_distribution<> dis(-1, 1); //ensure the sum is not zero
		double							 sqrtSum = 0;
		while (sqrtSum == 0)
		{
			for (std::size_t index = 0; index < dimension; ++index)
			{
				unitVector(index) = dis(gen);
			}
			sqrtSum = std::sqrt(unitVector.dot(unitVector));
		}
		for (std::size_t dimIdx = 0; dimIdx < dimension; ++dimIdx)
		{
			unitVector(dimIdx) /= sqrtSum;
		}
		return unitVector;
	}

protected:
	void SetUp() override
	{
		samplesCnt_ = 50;
		radius_		= 0.1;
		attempt_	= 10;
		time_.reserve(samplesCnt_);
		intervalHulls_.reserve(samplesCnt_);
		points_.reserve(samplesCnt_);
		for (int index = 0; index < samplesCnt_; ++index)
		{
			Eigen::RowVectorXd thisCoordinate(3);
			const double	   ratio = index * 1.0 / samplesCnt_;
			const double	   angle = 21.0 * ratio;
			const double	   c	 = cos(angle);
			const double	   s	 = sin(angle);
			const double	   r1	= 1.0 - 0.8f * ratio;
			const double	   alt   = 0.5f - ratio;
			thisCoordinate << r1 * s, r1 * c, alt;
			time_.emplace_back(capd::interval(ratio, ratio));
			intervalHulls_.emplace_back(irafhy::IntervalHull(thisCoordinate, radius_));
			// points_.emplace_back(irath::Point(thisCoordinate));
			std::vector<irafhy::Point> curPoints;
			curPoints.reserve(attempt_);
			for (int attempIdx = 0; attempIdx < attempt_; ++attempIdx)
			{
				Eigen::RowVectorXd				 shiftCoordinate = randUniteVector(3);
				std::random_device				 rd;						//
				std::mt19937					 gen(rd());					// mersenne_twister_engine
				std::uniform_real_distribution<> dis(radius_, 2 * radius_); //ensure the sum is not zero
				double							 finalRadius = dis(gen);
				Eigen::RowVectorXd				 offsetVec   = shiftCoordinate * finalRadius;
				curPoints.emplace_back(irafhy::Point(thisCoordinate + offsetVec));
			}
			points_.emplace_back(curPoints);
		}
	}
	void TearDown() override
	{
		intervalHulls_.clear();
		points_.clear();
		time_.clear();
	}
	int										samplesCnt_;
	int										attempt_;
	std::vector<irafhy::IntervalHull>		intervalHulls_;
	std::vector<std::vector<irafhy::Point>> points_;
	std::vector<capd::interval>				time_;
	double									radius_;
};

TEST_F(ViewerTest, intervalHullshowTest)
{
	irafhy::viewer::show(this->intervalHulls_, this->points_, this->time_, {0, 1, 2}, irafhy::VIEW_TYPE::LINE);
}