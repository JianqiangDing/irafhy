#ifndef UTILITY_EXTENSION_EXT_EIGEN_H
#define UTILITY_EXTENSION_EXT_EIGEN_H

#include <Eigen/Core>

namespace Eigen
{
	bool		  operator<(const Eigen::VectorXd& lhs, const Eigen::VectorXd& rhs);
	bool		  operator<=(const Eigen::VectorXd& lhs, const Eigen::VectorXd& rhs);
	bool		  operator>(const Eigen::VectorXd& lhs, const Eigen::VectorXd& rhs);
	bool		  operator>=(const Eigen::VectorXd& lhs, const Eigen::VectorXd& rhs);
	bool		  operator==(const Eigen::VectorXd& lhs, const Eigen::VectorXd& rhs);
	bool		  operator!=(const Eigen::VectorXd& lhs, const Eigen::VectorXd& rhs);
	std::ostream& operator<<(std::ostream& out, const Eigen::VectorXd& rhs);
} // namespace Eigen
#endif //UTILITY_EXTENSION_EXT_EIGEN_H