#ifndef UTILITY_OPTIMIZER_LINEAR_PROG_EVALUATION_H
#define UTILITY_OPTIMIZER_LINEAR_PROG_EVALUATION_H

#include <Eigen/Core>
#include <utility>
#include <irafhy/utility/definition/enum.h>

namespace irafhy
{
	class Evaluation
	{
	private:
		/**
		 * @brief optimal value of the object function
		 */
		double supportValue_;
		/**
		 * @brief vector which can get the optimal solution of the object function
		 */
		Eigen::VectorXd optimalCoordinate_;
		/**
		 * @brief status of the linear programing
		 */
		LINEPROG_SOLUTION solution_;

	public:
		/**
		 * @brief constructor
		 */
		Evaluation()
			: supportValue_(0.0)
			, optimalCoordinate_(Eigen::VectorXd::Zero(0))
			, solution_(LINEPROG_SOLUTION::INFEASIBLE)
		{}
		/**
		 * @brief constructor with given status of the solution
		 * @param solution status of the solution
		 */
		explicit Evaluation(const LINEPROG_SOLUTION& solution)
			: supportValue_(0.0)
			, optimalCoordinate_(Eigen::VectorXd::Zero(0))
			, solution_(solution)
		{}
		/**
		 * @brief constructor with given information
		 * @param optimalCoordinate vector which can let the object function get the optimal solution
		 * @param solution status of the linear programing
		 */
		Evaluation(Eigen::VectorXd optimalCoordinate, const LINEPROG_SOLUTION& solution)
			: supportValue_(0.0)
			, optimalCoordinate_(std::move(optimalCoordinate))
			, solution_(solution)
		{}
		/**
		 * @brief constructor with given information
		 * @param supportValue optimal value of the object function
		 * @param optimalCoordinate vector which can let the object function get the optimal solution
		 * @param solution status of the linear programing
		 */
		Evaluation(const double& supportValue, Eigen::VectorXd optimalCoordinate, const LINEPROG_SOLUTION& solution)
			: supportValue_(supportValue)
			, optimalCoordinate_(std::move(optimalCoordinate))
			, solution_(solution)
		{}
		/**
		 * @brief get the optimal value of the object function
		 * @return the optimal value of the object function
		 */
		[[nodiscard]] double supportValue() const { return supportValue_; }
		/**
		 * @brief get the optimal solution of the linear programming
		 * @return the optimal solution of the problem
		 */
		[[nodiscard]] Eigen::VectorXd optimalCoordinate() const { return optimalCoordinate_; }
		/**
		 * @brief get the status of the linear programming solution
		 * @return the status of the solution
		 */
		[[nodiscard]] LINEPROG_SOLUTION solution() const { return solution_; }
		/**
		 * @brief out the given evaluation object to the standard out stream
		 * @param out given out stream
		 * @param rhs right hand side out stream
		 * @return resulting out stream
		 */
		friend std::ostream& operator<<(std::ostream& out, const Evaluation& rhs)
		{
			out << "optimal value: " << rhs.supportValue_ << std::endl;
			out << "optimal coordinate: (";
			for (std::size_t index = 0; index < rhs.optimalCoordinate_.rows(); ++index)
				out << rhs.optimalCoordinate_(index) << " ";
			out << ")[";
			switch (rhs.solution_)
			{
				case LINEPROG_SOLUTION::INFEASIBLE:
				{
					out << "INFEASIBLE";
					break;
				}
				case LINEPROG_SOLUTION::FEASIBLE:
				{
					out << "FEASIBLE";
					break;
				}
				case LINEPROG_SOLUTION::NO_FEASIBLE:
				{
					out << "NO FEASIBLE";
					break;
				}
				case LINEPROG_SOLUTION::OPTIMAL:
				{
					out << "OPTIMAL";
					break;
				}
				case LINEPROG_SOLUTION::UNBOUNDED:
				{
					out << "UNBOUNDED";
					break;
				}
				case LINEPROG_SOLUTION::UNDEFINED:
				{
					out << "UNDEFINED";
					break;
				}
				default:
					exit(EXIT_FAILURE);
			}
			out << "]";
			return out;
		}
	};
} // namespace irafhy
#endif //UTILITY_OPTIMIZER_LINEAR_PROG_EVALUATION_H