#ifndef UTILITY_EXTENSION_EXT_EIGEN_H
#define UTILITY_EXTENSION_EXT_EIGEN_H

#include <Eigen/Core>

namespace Eigen
{
	/**
	 * @brief relational operator
	 * @param lhs left hand side operand
	 * @param rhs right hand side operand
	 * @return FALSE if two vectors in different space or there exist at least one dimension in which the value of the left hand side one's is greater than or equal to the right hand side one's
	 */
	bool operator<(const Eigen::VectorXd& lhs, const Eigen::VectorXd& rhs);
	/**
	 * @brief relational operator
	 * @param lhs left hand side operand
	 * @param rhs right hand side operand
	 * @return FALSE if two vectors in different space or there exist at least one dimension in which the value of the left hand side one's is greater than the right hand side one's
	 */
	bool operator<=(const Eigen::VectorXd& lhs, const Eigen::VectorXd& rhs);
	/**
	 * @brief relational operator
	 * @param lhs left hand side operand
	 * @param rhs right hand side operand
	 * @return FALSE if two vectors in different space or there exist at least one dimension in which the value of left hand side one's is less than or equal to the right hand side one's
	 */
	bool operator>(const Eigen::VectorXd& lhs, const Eigen::VectorXd& rhs);
	/**
	 * @brief relational operator
	 * @param lhs left hand side operand
	 * @param rhs right hand side operand
	 * @return FALSE if two vectors in different space or there exist at least one dimension in which the value of left hand side one's is less than the right hand side one's
	 */
	bool operator>=(const Eigen::VectorXd& lhs, const Eigen::VectorXd& rhs);
	/**
	 * @brief relational operator
	 * @param lhs left hand side operand
	 * @param rhs right hand side operand
	 * @return FALSE if two vectors in different space or there exist at least one dimension in which the value of left hand side one's isn't equal to the right hand side one's
	 */
	bool operator==(const Eigen::VectorXd& lhs, const Eigen::VectorXd& rhs);
	/**
	 * @brief relational operator
	 * @param lhs left hand side operand
	 * @param rhs right hand side operand
	 * @return TRUE if two vectors in same space and all entries are equal the corresponding one of right hand side one's
	 */
	bool operator!=(const Eigen::VectorXd& lhs, const Eigen::VectorXd& rhs);
	/**
	 * @brief out the right hand side vector to standard out stream
	 * @param out given out stream
	 * @param rhs right hand side vector
	 * @return resulting out stream
	 */
	std::ostream& operator<<(std::ostream& out, const Eigen::VectorXd& rhs);
} // namespace Eigen
#endif //UTILITY_EXTENSION_EXT_EIGEN_H