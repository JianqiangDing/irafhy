#include <irafhy/utility/extension/extEigen.h>

namespace Eigen
{
	bool operator<(const Eigen::VectorXd& lhs, const Eigen::VectorXd& rhs)
	{
		if (lhs.rows() != rhs.rows())
			return false;
		int dimension = lhs.rows();
		for (int index = 0; index < dimension; ++index)
		{
			if (lhs(index) >= rhs(index))
			{
				return false;
			}
			else if (lhs(index) < rhs(index))
			{
				return true;
			}
		}
		return false;
	}
	bool operator<=(const Eigen::VectorXd& lhs, const Eigen::VectorXd& rhs)
	{
		if (lhs.rows() != rhs.rows())
			return false;
		int dimension = lhs.rows();
		for (int index = 0; index < dimension; ++index)
		{
			if (lhs(index) > rhs(index))
			{
				return false;
			}
			else if (lhs(index) <= rhs(index))
			{
				return true;
			}
		}
		return false;
	}
	bool operator>(const Eigen::VectorXd& lhs, const Eigen::VectorXd& rhs) { return rhs < lhs; }

	bool operator>=(const Eigen::VectorXd& lhs, const Eigen::VectorXd& rhs) { return rhs <= lhs; }

	bool operator==(const Eigen::VectorXd& lhs, const Eigen::VectorXd& rhs)
	{
		if (lhs.rows() != rhs.rows())
			return false;
		int dimension = lhs.rows();
		for (int index = 0; index < dimension; ++index)
		{
			if (lhs(index) != rhs(index))
				return false;
		}
		return true;
	}

	bool operator!=(const Eigen::VectorXd& lhs, const Eigen::VectorXd& rhs) { return !(lhs == rhs); }

	std::ostream& operator<<(std::ostream& out, const Eigen::VectorXd& rhs)
	{
		int dimension = rhs.rows();
		for (int index = 0; index < dimension; ++index)
		{
			out << rhs(index) << " ";
		}
		return out;
	}
} // namespace Eigen