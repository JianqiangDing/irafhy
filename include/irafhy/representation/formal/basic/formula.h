#ifndef REPRESENTATION_FORMAL_BASIC_FORMULA_H
#define REPRESENTATION_FORMAL_BASIC_FORMULA_H

#include <irafhy/representation/formal/basic/item.h>

namespace irafhy
{
	class Formula
	{
	private:
		/**
		 * @brief expression of the formula
		 */
		Item expression_;
		/**
		 * @brief indicate whether the direction of the vector reversed or not
		 */
		mutable bool isReversed_ = false;

	public:
		/**
		 * @brief constructor
		 */
		Formula() = default;
		/**
		 * @brief constructor with given expression
		 * @param expression given expression
		 */
		explicit Formula(const Item& expression);
		/**
		 * @brief get the arithmetic function of the current formula
		 * @return the arithmetic function of the current formula
		 */
		std::function<
			capd::autodiff::Node(capd::autodiff::Node, capd::autodiff::Node[], int, capd::autodiff::Node[], int)>
			arithmetic() const;
		/**
		 * @brief get the value of the current formula
		 * @param t time variable
		 * @param in values of the given variables
		 * @param params other necessary parameters
		 * @return the value of the current expression
		 */
		capd::interval value(const capd::interval&				t,
							 const std::vector<capd::interval>& in,
							 const std::vector<capd::interval>& params) const;
		/**
		 * @brief check whether the vector was reversed or not
		 * @return TRUE if the vector was reversed
		 */
		bool isReversed() const;
		/**
		 * @brief reverse the direction of the vector
		 */
		void reverse() const;
		/**
		 * @brief out the given formula to standard out stream
		 * @param out given out stream
		 * @param rhs given formula
		 * @return resulting out stream
		 */
		friend std::ostream& operator<<(std::ostream& out, const Formula& rhs);
	};
} // namespace irafhy
#endif //REPRESENTATION_FORMAL_BASIC_FORMULA_H