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
		double			  supportValue_;
		Eigen::VectorXd   optimalCoordinate_;
		LINEPROG_SOLUTION solution_;

	public:
		Evaluation()
			: supportValue_(0.0)
			, optimalCoordinate_(Eigen::VectorXd::Zero(0))
			, solution_(LINEPROG_SOLUTION::INFEASIBLE)
		{}
		explicit Evaluation(const LINEPROG_SOLUTION& solution)
			: supportValue_(0.0)
			, optimalCoordinate_(Eigen::VectorXd::Zero(0))
			, solution_(solution)
		{}
		Evaluation(Eigen::VectorXd optimalCoordinate, const LINEPROG_SOLUTION& solution)
			: supportValue_(0.0)
			, optimalCoordinate_(std::move(optimalCoordinate))
			, solution_(solution)
		{}
		Evaluation(const double& supportValue, Eigen::VectorXd optimalCoordinate, const LINEPROG_SOLUTION& solution)
			: supportValue_(supportValue)
			, optimalCoordinate_(std::move(optimalCoordinate))
			, solution_(solution)
		{}
		[[nodiscard]] double supportValue() const { return supportValue_; }
		Eigen::VectorXd		 optimalCoordinate() const { return optimalCoordinate_; }
		LINEPROG_SOLUTION	solution() const { return solution_; }

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