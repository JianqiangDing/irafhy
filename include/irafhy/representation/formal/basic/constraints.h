#ifndef REPRESENTATION_FORMAL_BASIC_CONSTRAINTS_H
#define REPRESENTATION_FORMAL_BASIC_CONSTRAINTS_H

#include <capd/capdlib.h>
#include <irafhy/representation/formal/basic/constraint.h>
#include <vector>

namespace irafhy
{
	class Constraints
	{
	private:
		/**
		 * @brief constraints of the system
		 */
		std::vector<Constraint> inequalities_;
		/**
		 * @brief dimension of the system
		 */
		std::size_t dimension_ = 0;

	public:
		/**
		 * @brief constructor
		 */
		Constraints() = default;
		/**
		 * @brief constructor with given inequalities and dimension
		 * @param inequalities given inequalities
		 * @param dimension dimension of the system
		 */
		Constraints(const std::vector<Constraint>& inequalities, std::size_t dimension);
		/**
		 * @brief destructor
		 */
		~Constraints() = default;
		/**
		 * @brief get the size of the inequalities
		 * @return the size of the inequalities
		 */
		[[nodiscard]] std::size_t size() const;
		/**
		 * @brief get the dimension of the system
		 * @return the dimension of the system
		 */
		[[nodiscard]] std::size_t dimension() const;
		/**
		 * @brief check if the given values inside the target domain defined by the given constraints
		 * @param t given time interval value
		 * @param in input values
		 * @param params parameters necessary
		 * @return TRUE if the given values hold all the relations of the constraints
		 */
		[[nodiscard]] CONSTRAINTS_SOLUTION isSatisfy(const capd::interval&				t,
													 const std::vector<capd::interval>& in,
													 const std::vector<capd::interval>& params) const;
		/**
		 * @brief out the given constraints to standard out stream
		 * @param out given out stream
		 * @param rhs given right hand side constraints
		 * @return resulting out stream
		 */
		friend std::ostream& operator<<(std::ostream& out, const Constraints& rhs);
	};
} // namespace irafhy
#endif //REPRESENTATION_FORMAL_BASIC_CONSTRAINTS_H