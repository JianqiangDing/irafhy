#include <gtest/gtest.h>
#include <Eigen/Core>
#include <irafhy/representation/geometric/basic/halfSpace.h>

class HalfSpaceTest : public ::testing::Test
{
protected:
	void SetUp() override
	{
		dimension = 5;
		normal.resize(dimension);
		normal << 0.1, 0.2, 0.3, 0.4, 0.5;
		offset = 0.6;
		coordinate.resize(dimension);
		coordinate << -1, 0, 0, 0, -1;
	}
	void TearDown() override
	{
		//TODO
	}
	int				dimension;
	Eigen::VectorXd normal;
	double			offset;
	Eigen::VectorXd coordinate;
};

TEST_F(HalfSpaceTest, constructor)
{
	irafhy::HalfSpace halfSpace;
	irafhy::HalfSpace halfSpace1 = irafhy::HalfSpace::Empty(this->dimension);
	irafhy::HalfSpace halfSpace2(halfSpace);
	irafhy::HalfSpace halfSpace3 = halfSpace;
	irafhy::HalfSpace halfSpace4(this->normal, this->offset);
	irafhy::HalfSpace halfSpace5 = halfSpace4;
}

TEST_F(HalfSpaceTest, memberFunctions)
{
	irafhy::HalfSpace halfSpace(this->normal, this->offset);
	EXPECT_EQ(halfSpace.dimension(), this->dimension);
	EXPECT_EQ(halfSpace.normal(), this->normal);
	EXPECT_EQ(halfSpace.offset(), this->offset);
	EXPECT_TRUE(halfSpace.contains(irafhy::Point(this->coordinate)));
	EXPECT_TRUE(halfSpace.contains(this->coordinate));
	EXPECT_TRUE(halfSpace.holds(irafhy::Point(this->coordinate)));
	EXPECT_TRUE(halfSpace.holds(this->coordinate));
}

TEST_F(HalfSpaceTest, operations)
{
	irafhy::HalfSpace halfSpace(this->normal, this->offset);
	irafhy::HalfSpace halfSpace1 = -halfSpace;
}

TEST_F(HalfSpaceTest, outStream)
{
	irafhy::HalfSpace halfSpace(this->normal, this->offset);
	std::cout << halfSpace << std::endl;
}