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
		glp_prob*		   glpProb_ = nullptr;
		glp_smcp		   param_;
		int*			   ia_ = nullptr;
		int*			   ja_ = nullptr;
		std::size_t		   rowCnt_;
		std::size_t		   colCnt_;
		double*			   array_ = nullptr;
		bool			   isExact_;
		LINEPROG_DIRECTION direction_;
		mutable bool	   isReady_;
		mutable bool	   solved_;
		mutable bool	   isArrayCreated_ = false;

	private:
		void createArrays(std::size_t size);
		void fillArrays(const Eigen::VectorXd&			   objectCoefficients,
						double							   objectConstantTerm,
						const Eigen::MatrixXd&			   constraintMatrix,
						const std::vector<capd::interval>& constraintRowBounds,
						const std::vector<capd::interval>& constraintColBounds);
		void deleteArrays();

	public:
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

		void init(const Eigen::VectorXd&			 objectCoefficients,
				  double							 objectConstantTerm,
				  const Eigen::MatrixXd&			 constraintMatrix,
				  const std::vector<capd::interval>& constraintRowBounds,
				  const std::vector<capd::interval>& constraintColBounds,
				  LINEPROG_DIRECTION				 direction);
		~GLPKWrapper();
		void	   solve(bool isExact);
		Evaluation result(const Eigen::VectorXd&			 objectCoefficients,
						  const Eigen::MatrixXd&			 constraintMatrix,
						  const std::vector<capd::interval>& constraintRowBounds) const;
	};
} // namespace irafhy
#endif //UTILITY_OPTIMIZER_LINEAR_PROG_GLPK_WRAPPER_H