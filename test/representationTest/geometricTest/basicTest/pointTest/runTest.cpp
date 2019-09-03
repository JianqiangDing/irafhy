#include <gtest/gtest.h>
#include <Eigen/Core>
#include <random>
#include <vector>
#include <irafhy/representation/geometric/basic/point.h>

class PointTest : public ::testing::Test
{
protected:
	void SetUp() override
	{
		dimension = 5;
		coordinate_0.resize(dimension);
		coordinate_1.resize(dimension);
		std::random_device				 rd;
		std::mt19937					 gen(rd());
		std::uniform_real_distribution<> dist(0, dimension - 1);
		for (int index = 0; index < dimension; ++index)
			coordinate_0(index) = dist(gen);
		for (int index = 0; index < dimension; ++index)
			coordinate_1[index] = dist(gen);
	}

	void TearDown() override
	{
		//TODO
	}
	int					dimension;
	Eigen::VectorXd		coordinate_0;
	std::vector<double> coordinate_1;
};

TEST_F(PointTest, constructor)
{
	irafhy::Point point;
	irafhy::Point point1(point);
	irafhy::Point point2 = point1;
	irafhy::Point point3(this->coordinate_0);
	irafhy::Point point4(this->coordinate_1);
	irafhy::Point point5 = irafhy::Point::one(this->dimension);
	irafhy::Point point6 = irafhy::Point::zero(this->dimension);
}

TEST_F(PointTest, memberFunctions)
{
	irafhy::Point point(this->coordinate_0);
	EXPECT_EQ(point.dimension(), this->dimension);
	EXPECT_FALSE(point.empty());
	irafhy::Point point1;
	EXPECT_TRUE(point1.empty());
	EXPECT_EQ(point1.dimension(), 0);
	EXPECT_EQ(this->coordinate_0, point.coordinate());
	for (int index = 0; index < point.dimension(); ++index)
		EXPECT_EQ(point[index], this->coordinate_0(index));
}

TEST_F(PointTest, operations)
{
	irafhy::Point point(this->coordinate_0);
	irafhy::Point point1(this->coordinate_1);
	irafhy::Point point2 = point + point1;
	irafhy::Point point3 = point - point1;
	irafhy::Point point4 = point / 0.2;
	irafhy::Point point5 = point * 0.3;
	irafhy::Point point6 = -point;
	std::cout << point[this->dimension - 1] << std::endl;
}

TEST_F(PointTest, comparisons)
{
	irafhy::Point point(this->coordinate_0);
	irafhy::Point point1(this->coordinate_1);
	std::cout << (point < point1) << std::endl;
	std::cout << (point <= point1) << std::endl;
	std::cout << (point > point1) << std::endl;
	std::cout << (point >= point1) << std::endl;
	std::cout << (point == point1) << std::endl;
	std::cout << (point != point1) << std::endl;
}

TEST_F(PointTest, outStream)
{
	irafhy::Point point(this->coordinate_0);
	std::cout << point << std::endl;
}