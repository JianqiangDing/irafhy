#ifndef REPRESENTATION_FORMAL_BASIC_CONSTRAINT_H
#define REPRESENTATION_FORMAL_BASIC_CONSTRAINT_H

#include <irafhy/utility/definition/enum.h>
#include <irafhy/representation/formal/basic/item.h>

namespace irafhy
{
	class Constraint
	{
	private:
		/**
		 * @brief left hand side expression of the constraint
		 */
		Item lhsExpression_;
		/**
		 * @brief right hand side expression of the constraint
		 */
		Item rhsExpression_;
		/**
		 * @brief relation between two expressions
		 */
		RELATION relation_ = RELATION::EQUAL_TO;

	public:
		/**
		 * @brief default constructor
		 */
		Constraint() = default;
		/**
		 * @brief constructor with given expressions and relation
		 * @param lhsExpression left hand side expression
		 * @param rhsExpression right hand side expression
		 * @param relation relation between two expressions
		 */
		Constraint(const Item& lhsExpression, const Item& rhsExpression, RELATION relation);
		/**
		 * @brief destructor
		 */
		~Constraint() = default;
		/**
		 * @brief check the given values can hold the relation of the constraint or not
		 * @param t current time interval
		 * @param in input values
		 * @param params parameters necessary
		 * @return TRUE if the given values hold the relation of the constraint
		 */
		[[nodiscard]] bool isSatisfy(const capd::interval&				t,
									 const std::vector<capd::interval>& in,
									 const std::vector<capd::interval>& params) const;
		/**
		 * @brief get the value of the left hand side expression
		 * @param t current time interval
		 * @param in input values
		 * @param params parameters necessary
		 * @return value of the left hand sid expression
		 */
		capd::interval lhsValue(const capd::interval&			   t,
								const std::vector<capd::interval>& in,
								const std::vector<capd::interval>& params) const;
		/**
		 * @brief get the value of the right hand side expression
		 * @param t current time interval
		 * @param in input values
		 * @param params parameters necessary
		 * @return value of the right hand side expression
		 */
		capd::interval rhsValue(const capd::interval&			   t,
								const std::vector<capd::interval>& in,
								const std::vector<capd::interval>& params) const;
		/**
		 * @brief get the relation of the constraint
		 * @return the relation of the constraint
		 */
		[[nodiscard]] RELATION relation() const;
		/**
		 * @brief out the given constraint to standard stream
		 * @param out given out stream
		 * @param rhs given constraint object
		 * @return resulting out stream
		 */
		friend std::ostream& operator<<(std::ostream& out, const Constraint& rhs);
	};
} // namespace irafhy
#endif //REPRESENTATION_FORMAL_BASIC_CONSTRAINT_H