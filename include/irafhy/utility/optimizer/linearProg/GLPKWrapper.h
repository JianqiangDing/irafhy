#ifndef UTILITY_OPTIMIZER_LINEAR_PROG_GLPK_WRAPPER_H
#define UTILITY_OPTIMIZER_LINEAR_PROG_GLPK_WRAPPER_H

#include <glpk.h>
#include <cassert>
#include <iostream>
#include <vector>
#include <capd/capdlib.h>
#include <irafhy/utility/definition/enum.h>
#include <irafhy/utility/optimizer/linearProg/evaluation.hpp>

namespace irafhy
{
	class GLPKWrapper
	{
	private:
		/**
		 * @brief pointer to the GLPK problem
		 */
		glp_prob* glpProb_ = nullptr;
		/**
		 * @brief GLPK related parameters
		 */
		glp_smcp param_;
		/**
		 * @brief pointer to the ia array of GLPK problem
		 */
		int* ia_ = nullptr;
		/**
		 * @brief pointer to the ja array of GLPK problem
		 */
		int* ja_ = nullptr;
		/**
		 * @brief number of the rows of constraints
		 */
		std::size_t rowCnt_;
		/**
		 * @brief number of the variables
		 */
		std::size_t colCnt_;
		/**
		 * @brief GLPK data array
		 */
		double* array_ = nullptr;
		/**
		 * @brief solve LP problem in exact arithmetic or not
		 */
		bool isExact_;
		/**
		 * @brief optimizing direction of the problem
		 */
		LINEPROG_DIRECTION direction_;
		/**
		 * @brief is data prepared
		 */
		mutable bool isReady_;
		/**
		 * @brief is the problem solved by GLPK
		 */
		mutable bool solved_;
		/**
		 * @brief is the GLPK array created
		 */
		mutable bool isArrayCreated_ = false;

	private:
		/**
		 * @brief allocate memory for the GLPK array
		 * @param size size of the array
		 */
		void createArrays(std::size_t size);
		/**
		 * @brief fill the GLPK array with given information
		 * @param objectCoefficients coefficients of the object function
		 * @param objectConstantTerm constant item of the object function
		 * @param constraintMatrix linear constraints
		 * @param constraintRowBounds bounds of the linear constraints
		 * @param constraintColBounds bounds of variables
		 */
		void fillArrays(const Eigen::VectorXd&			   objectCoefficients,
						double							   objectConstantTerm,
						const Eigen::MatrixXd&			   constraintMatrix,
						const std::vector<capd::interval>& constraintRowBounds,
						const std::vector<capd::interval>& constraintColBounds);
		/**
		 * @brief release the memory
		 */
		void deleteArrays();

	public:
		/**
		 * @brief constructor
		 */
		GLPKWrapper()
			: glpProb_(nullptr)
			, param_()
			, ia_(nullptr)
			, ja_(nullptr)
			, rowCnt_(0)
			, colCnt_(0)
			, array_(nullptr)
			, isExact_(true)
			, direction_(LINEPROG_DIRECTION::MAX)
			, isReady_(false)
			, solved_(false)
		{}
		/**
		 * @brief initialize the problem with given information
		 * @param objectCoefficients coefficients of object function
		 * @param objectConstantTerm constant term of object function
		 * @param constraintMatrix linear constraints
		 * @param constraintRowBounds bounds of linear constraints
		 * @param constraintColBounds bounds of variables
		 * @param direction direction of the linear programming
		 */
		void init(const Eigen::VectorXd&			 objectCoefficients,
				  double							 objectConstantTerm,
				  const Eigen::MatrixXd&			 constraintMatrix,
				  const std::vector<capd::interval>& constraintRowBounds,
				  const std::vector<capd::interval>& constraintColBounds,
				  LINEPROG_DIRECTION				 direction);
		/**
		 * @brief destructor
		 */
		~GLPKWrapper();
		/**
		 * @brief solve the problem with wrapped GLPK library
		 * @param isExact using exact arithmetic or not
		 */
		void solve(bool isExact);
		/**
		 * @brief get the resulting of the solving
		 * @param objectCoefficients coefficients of object function
		 * @param constraintMatrix linear constraints
		 * @param constraintRowBounds bounds of linear constraints
		 * @return result of the linear programming
		 */
		Evaluation result(const Eigen::VectorXd&			 objectCoefficients,
						  const Eigen::MatrixXd&			 constraintMatrix,
						  const std::vector<capd::interval>& constraintRowBounds) const;
	};
} // namespace irafhy
#endif //UTILITY_OPTIMIZER_LINEAR_PROG_GLPK_WRAPPER_H