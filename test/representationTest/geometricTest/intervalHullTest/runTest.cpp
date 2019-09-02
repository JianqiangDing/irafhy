#include <gtest/gtest.h>
#include <vector>
#include <capd/capdlib.h>
#include <random>
#include <irafhy/representation/geometric/intervalHull.h>
#include <irafhy/representation/geometric/basic/point.h>

class IntervalHullTest : public ::testing::Test
{
protected:
	void SetUp() override
	{
		dimension = 5;
		constraints.clear();
		std::random_device				 rd;
		std::mt19937					 gen(rd());
		std::uniform_real_distribution<> dist(0, dimension - 1);
		for (int index = 0; index < dimension; ++index)
		{
			double lowerBound = dist(gen);
			double upperBound = dist(gen);
			if (lowerBound > upperBound)
				std::swap(lowerBound, upperBound);
			constraints.emplace_back(capd::interval(lowerBound, upperBound));
		}
		coordinate.resize(dimension);
		for (int index = 0; index < dimension; ++index)
			coordinate(index) = dist(gen);
		radius	 = 0.5;
		samplesCnt = 50;
		points.clear();
		for (int index = 0; index < samplesCnt; ++index)
		{
			Eigen::VectorXd thisCoordinate(dimension);
			for (int dimIdx = 0; dimIdx < dimension; ++dimIdx)
			{
				thisCoordinate(dimIdx) = dist(gen);
			}
			points.emplace_back(irafhy::Point(thisCoordinate));
		}
	}
	void TearDown() override
	{
		// constraints.clear();
		// points.clear();
	}
	int							dimension;
	int							samplesCnt;
	std::vector<capd::interval> constraints;
	Eigen::VectorXd				coordinate;
	double						radius;
	std::vector<irafhy::Point>  points;
};

TEST_F(IntervalHullTest, constructor)
{
	irafhy::IntervalHull intervalHull;
	irafhy::IntervalHull intervalHull1(intervalHull);
	irafhy::IntervalHull intervalHull2(this->constraints);
	irafhy::IntervalHull intervalHull3 = intervalHull2;
	irafhy::IntervalHull intervalHull5(this->points);
}

TEST_F(IntervalHullTest, memberFunctions)
{
	irafhy::IntervalHull intervalHull(this->points);
	irafhy::IntervalHull intervalHull1(this->constraints);
	irafhy::IntervalHull intersection;
	bool				 nullSet;
	nullSet = intervalHull.intersect(intervalHull1, intersection);
	irafhy::IntervalHull intervalHull2;
	irafhy::IntervalHull intervalHull3 = intervalHull.unite(intervalHull1);
	EXPECT_EQ(intervalHull.dimension(), this->dimension);
	EXPECT_TRUE(intervalHull2.empty());
}

TEST_F(IntervalHullTest, operations)
{
	irafhy::IntervalHull intervalHull(this->constraints);
	irafhy::Point		 point(this->coordinate);
	std::cout << (intervalHull.contains(point)) << std::endl;
}

TEST_F(IntervalHullTest, outStream)
{
	irafhy::IntervalHull intervalHull(this->constraints);
	std::cout << intervalHull << std::endl;
}