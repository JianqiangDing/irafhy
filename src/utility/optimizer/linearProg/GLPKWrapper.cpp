#include <irafhy/utility/optimizer/linearProg/GLPKWrapper.h>
#include <Eigen/Core>
#include <Eigen/Dense>

namespace irafhy
{
	void GLPKWrapper::createArrays(std::size_t size)
	{
		if (isArrayCreated_)
			deleteArrays();
		ia_				= new int[size + 1];
		ja_				= new int[size + 1];
		array_			= new double[size + 1];
		isArrayCreated_ = true;
	}

	void GLPKWrapper::fillArrays(const Eigen::VectorXd&				objectCoefficients,
								 double								objectConstantTerm,
								 const Eigen::MatrixXd&				constraintMatrix,
								 const std::vector<capd::interval>& constraintRowBounds,
								 const std::vector<capd::interval>& constraintColBounds)
	{
		assert(constraintMatrix.rows() == constraintRowBounds.size()
			   && constraintMatrix.cols() == constraintColBounds.size() && isArrayCreated_);
		//set inner parameters
		rowCnt_ = static_cast<std::size_t>(constraintMatrix.rows());
		colCnt_ = static_cast<std::size_t>(constraintMatrix.cols());
		//set the rows related bounds
		std::size_t rowConstraintBoundsCnt = static_cast<std::size_t>(constraintMatrix.rows());
		glp_add_rows(glpProb_, static_cast<int>(rowConstraintBoundsCnt));
		for (std::size_t index = 0; index < rowConstraintBoundsCnt; ++index)
		{
			//   *     Type           Bounds        Comments
			//   *     ------------------------------------------------------
			// 	 *     GLP_FR   -inf <  x <  +inf   Free variable
			//   *     GLP_LO     lb <= x <  +inf   Variable with lower bound
			//   *     GLP_UP   -inf <  x <=  ub    Variable with upper bound
			//   *     GLP_DB     lb <= x <=  ub    Double-bounded variable
			//   *     GLP_FX           x  =  lb    Fixed variable
			if (std::isinf(constraintRowBounds[index].leftBound())
				&& std::isinf(constraintRowBounds[index].rightBound()))
			{
				glp_set_row_bnds(glpProb_, static_cast<int>(index + 1), GLP_FR, 0.0, 0.0);
			}
			else if (!std::isinf(constraintRowBounds[index].leftBound())
					 && std::isinf(constraintRowBounds[index].rightBound()))
			{
				glp_set_row_bnds(
					glpProb_, static_cast<int>(index + 1), GLP_LO, constraintRowBounds[index].leftBound(), 0.0);
			}
			else if (std::isinf(constraintRowBounds[index].leftBound())
					 && !std::isinf(constraintRowBounds[index].rightBound()))
			{
				glp_set_row_bnds(
					glpProb_, static_cast<int>(index + 1), GLP_UP, 0.0, constraintRowBounds[index].rightBound());
			}
			else if (!std::isinf(constraintRowBounds[index].leftBound())
					 && !std::isinf(constraintRowBounds[index].rightBound()))
			{
				glp_set_row_bnds(glpProb_,
								 static_cast<int>(index + 1),
								 GLP_DB,
								 constraintRowBounds[index].leftBound(),
								 constraintRowBounds[index].rightBound());
			}
		}
		//set the colums related bounds
		std::size_t colConstraintBoundsCnt = static_cast<std::size_t>(constraintMatrix.cols());
		glp_add_cols(glpProb_, static_cast<int>(colConstraintBoundsCnt));
		for (std::size_t index = 0; index < colConstraintBoundsCnt; ++index)
		{
			//   *     Type           Bounds        Comments
			//   *     ------------------------------------------------------
			// 	 *     GLP_FR   -inf <  x <  +inf   Free variable
			//   *     GLP_LO     lb <= x <  +inf   Variable with lower bound
			//   *     GLP_UP   -inf <  x <=  ub    Variable with upper bound
			//   *     GLP_DB     lb <= x <=  ub    Double-bounded variable
			//   *     GLP_FX           x  =  lb    Fixed variable
			if (std::isinf(constraintColBounds[index].leftBound())
				&& std::isinf(constraintColBounds[index].rightBound()))
			{
				glp_set_col_bnds(glpProb_, static_cast<int>(index + 1), GLP_FR, 0.0, 0.0);
			}
			else if (!std::isinf(constraintColBounds[index].leftBound())
					 && std::isinf(constraintColBounds[index].rightBound()))
			{
				glp_set_col_bnds(
					glpProb_, static_cast<int>(index + 1), GLP_LO, constraintColBounds[index].leftBound(), 0.0);
			}
			else if (std::isinf(constraintColBounds[index].leftBound())
					 && !std::isinf(constraintColBounds[index].rightBound()))
			{
				glp_set_col_bnds(
					glpProb_, static_cast<int>(index + 1), GLP_UP, 0.0, constraintColBounds[index].rightBound());
			}
			else if (!std::isinf(constraintColBounds[index].leftBound())
					 && !std::isinf(constraintColBounds[index].rightBound()))
			{
				glp_set_col_bnds(glpProb_,
								 static_cast<int>(index + 1),
								 GLP_DB,
								 constraintColBounds[index].leftBound(),
								 constraintColBounds[index].rightBound());
			}
			//set the coefficient of the object function
			glp_set_obj_coef(glpProb_, static_cast<int>(index + 1), objectCoefficients(index));
		}
		//set the constant term of the object function
		glp_set_obj_coef(glpProb_, static_cast<int>(0), objectConstantTerm);
		ia_[0]			= 0;
		ja_[0]			= 0;
		array_[0]		= 0;
		std::size_t pos = 1;
		for (std::size_t rowIndex = 0; rowIndex < rowConstraintBoundsCnt; ++rowIndex)
		{
			for (std::size_t colIndex = 0; colIndex < colConstraintBoundsCnt; ++colIndex)
			{
				ia_[pos]	= static_cast<int>(rowIndex + 1);
				ja_[pos]	= static_cast<int>(colIndex + 1);
				array_[pos] = constraintMatrix(rowIndex, colIndex);
				++pos;
			}
		}
	}

	void GLPKWrapper::deleteArrays()
	{
		if (isArrayCreated_)
		{
			delete[] ia_;
			delete[] ja_;
			delete[] array_;
			isArrayCreated_ = false;
		}
	}

	GLPKWrapper::~GLPKWrapper()
	{
		deleteArrays();
		glp_delete_prob(glpProb_);
		glpProb_ = nullptr;
		isReady_ = false;
		solved_  = false;
	}

	void GLPKWrapper::init(const Eigen::VectorXd&			  objectCoefficients,
						   double							  objectConstantTerm,
						   const Eigen::MatrixXd&			  constraintMatrix,
						   const std::vector<capd::interval>& constraintRowBounds,
						   const std::vector<capd::interval>& constraintColBounds,
						   LINEPROG_DIRECTION				  direction)
	{
		glpProb_ = glp_create_prob();
		glp_init_smcp(&param_);
		param_.msg_lev = GLP_MSG_OFF;
		glp_term_out(GLP_OFF);
		direction_ = direction;
		switch (direction_)
		{
			case LINEPROG_DIRECTION::MAX:
			{
				glp_set_obj_dir(glpProb_, GLP_MAX);
				break;
			}
			case LINEPROG_DIRECTION::MIN:
			{
				glp_set_obj_dir(glpProb_, GLP_MIN);
				break;
			}
			default:
				exit(EXIT_FAILURE);
		}
		createArrays(static_cast<std::size_t>(constraintMatrix.rows() * constraintMatrix.cols()));
		fillArrays(objectCoefficients, objectConstantTerm, constraintMatrix, constraintRowBounds, constraintColBounds);
		isReady_ = true;
	}

	void GLPKWrapper::solve(bool isExact)
	{
		assert(isReady_);
		glp_load_matrix(glpProb_, static_cast<int>(rowCnt_ * colCnt_), ia_, ja_, array_);
		if (isExact)
		{
			glp_exact(glpProb_, NULL);
		}
		else
		{
			glp_simplex(glpProb_, NULL);
		}
		solved_ = true;
	}

	Evaluation GLPKWrapper::result(const Eigen::VectorXd&			  objectCoefficients,
								   const Eigen::MatrixXd&			  constraintMatrix,
								   const std::vector<capd::interval>& constraintRowBounds) const
	{
		assert(solved_);
		switch (glp_get_status(glpProb_))
		{
			// * The routine glp_get_status reports the generic status of the basic
			// *  solution for the specified problem object as follows:
			// *
			// *  GLP_OPT    - solution is optimal;
			// *  GLP_FEAS - solution is feasible;
			// *  GLP_INFEAS - solution is infeasible;
			// *  GLP_NOFEAS - problem has no feasible solution;
			// *  GLP_UNBND - problem has unbounded solution;
			// *  GLP_UNDEF - solution is undefined.
			case GLP_UNDEF:
			{
				return Evaluation(LINEPROG_SOLUTION::UNDEFINED);
			}
			case GLP_INFEAS:
			{
				return Evaluation(LINEPROG_SOLUTION::INFEASIBLE);
			}
			case GLP_NOFEAS:
			{
				return Evaluation(LINEPROG_SOLUTION::NO_FEASIBLE);
			}
			case GLP_OPT:
			{
				Eigen::VectorXd optimalCoordinate(colCnt_);
				for (std::size_t index = 1; index <= colCnt_; ++index)
					optimalCoordinate(index - 1) = glp_get_col_prim(glpProb_, static_cast<int>(index));
				double supportValue = glp_get_obj_val(glpProb_);
				return Evaluation(supportValue, optimalCoordinate, LINEPROG_SOLUTION::OPTIMAL);
			}
			case GLP_FEAS:
			{
				// *  The routine glp_get_row_stat returns current status assigned to the
				// *  auxiliary variable associated with i-th row as follows:
				// *
				// *  GLP_BS - basic variable;
				// *  GLP_NL - non-basic variable on its lower bound;
				// *  GLP_NU - non-basic variable on its upper bound;
				// *  GLP_NF - non-basic free (unbounded) variable;
				// *  GLP_NS - non-basic fixed variable.
				//get the solution by intersecting all the constraints, which are at their objective direction bound
				Eigen::MatrixXd thisConstraintMatrix = Eigen::MatrixXd::Zero(colCnt_, colCnt_);
				Eigen::VectorXd thisConstraintVector = Eigen::VectorXd::Zero(colCnt_);
				for (std::size_t constraintIndex = 1; constraintIndex <= rowCnt_; ++constraintIndex)
				{
					switch (glp_get_obj_dir(glpProb_))
					{
						case GLP_MIN:
						{
							if (glp_get_row_stat(glpProb_, static_cast<int>(constraintIndex)) == GLP_NL)
							{
								thisConstraintMatrix.row(static_cast<int>(constraintIndex - 1))
									= constraintMatrix.row(constraintIndex - 1);
								thisConstraintVector(constraintIndex - 1)
									= constraintRowBounds[constraintIndex - 1].leftBound();
							}
							break;
						}
						case GLP_MAX:
						{
							if (glp_get_row_stat(glpProb_, static_cast<int>(constraintIndex)) == GLP_UP)
							{
								thisConstraintMatrix.row(static_cast<int>(constraintIndex - 1))
									= constraintMatrix.row(constraintIndex - 1);
								thisConstraintVector(constraintIndex - 1)
									= constraintRowBounds[constraintIndex - 1].rightBound();
							}
						}
						default:
							exit(EXIT_FAILURE);
					}
					Eigen::FullPivLU<Eigen::MatrixXd> curLU(thisConstraintMatrix);
					Eigen::VectorXd					  optimalCoordinate = curLU.solve(thisConstraintVector);
					return Evaluation(
						objectCoefficients.dot(optimalCoordinate), optimalCoordinate, LINEPROG_SOLUTION::FEASIBLE);
				}
				break;
			}
			case GLP_UNBND:
			{
				Eigen::VectorXd optimalCoordinate(colCnt_);
				for (std::size_t index = 1; index <= colCnt_; ++index)
					optimalCoordinate(index - 1) = glp_get_col_prim(glpProb_, static_cast<int>(index));
				return Evaluation(0.0, optimalCoordinate, LINEPROG_SOLUTION::UNBOUNDED);
			}
			default:
				exit(EXIT_FAILURE);
		}
		return Evaluation();
	}
} // namespace irafhy