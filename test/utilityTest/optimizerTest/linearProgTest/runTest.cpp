#include <gtest/gtest.h>
#include <capd/capdlib.h>
#include <irafhy/utility/optimizer/linearProg/GLPKWrapper.h>
#include <limits>

class runLinearProgTest : public ::testing::Test
{
protected:
	void SetUp() override
	{
		/*
		* maximize z=10*x_1+6*x_2+4*x_3+0.0
		* subject to
		* 	1*x_1+1*x_2+1*x_3<=100
		* 	10*x_1+4*x_2+5*x_3<=600
		* 	2*x_1+2*x_2+6*x_3<=300
		* where all variable are non-negative
		* 	x_1>=0, x_2>=0, x_3>=0
		*/
		sampleDimension = 3;
		objectCoefficients.resize(sampleDimension);
		objectCoefficients << 10, 6, 4;
		objectConstant = 0.0;
		constraintMatrix.resize(sampleDimension, sampleDimension);
		constraintMatrix << 1, 1, 1, 10, 4, 5, 2, 2, 6;
		constraintRowBounds.resize(sampleDimension, capd::interval());
		constraintRowBounds[0] = capd::interval(std::numeric_limits<double>::infinity(), 100);
		constraintRowBounds[1] = capd::interval(std::numeric_limits<double>::infinity(), 600);
		constraintRowBounds[2] = capd::interval(std::numeric_limits<double>::infinity(), 300);
		constraintColBounds.resize(sampleDimension, capd::interval());
		constraintColBounds[0] = capd::interval(0, std::numeric_limits<double>::infinity());
		constraintColBounds[1] = capd::interval(0, std::numeric_limits<double>::infinity());
		constraintColBounds[2] = capd::interval(0, std::numeric_limits<double>::infinity());
	}
	void TearDown() override
	{
		//TODO
	}
	std::size_t					sampleDimension;
	Eigen::VectorXd				objectCoefficients;
	double						objectConstant;
	Eigen::MatrixXd				constraintMatrix;
	std::vector<capd::interval> constraintRowBounds;
	std::vector<capd::interval> constraintColBounds;
};

TEST_F(runLinearProgTest, evaluation)
{
	irafhy::GLPKWrapper glpkWrapper;
	glpkWrapper.init(this->objectCoefficients,
					 this->objectConstant,
					 this->constraintMatrix,
					 this->constraintRowBounds,
					 this->constraintColBounds,
					 irafhy::LINEPROG_DIRECTION::MAX);
	glpkWrapper.solve(false);
	irafhy::Evaluation evaluation
		= glpkWrapper.result(this->objectCoefficients, this->constraintMatrix, this->constraintRowBounds);
	std::cout << evaluation << std::endl;
	//------------------------------------------------------result
	// optimal value: 733.333
	// optimal coordinate: (33.3333 66.6667 0 )[OPTIMAL]
}