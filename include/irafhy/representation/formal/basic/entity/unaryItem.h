#ifndef REPRESENTATION_FORMAL_BASIC_ENTITY_UNARY_ITEM_H
#define REPRESENTATION_FORMAL_BASIC_ENTITY_UNARY_ITEM_H

#include <memory>
#include <capd/capdlib.h>
#include <irafhy/utility/definition/enum.h>

namespace irafhy
{
	class Item;

	class UnaryItem
	{
	private:
		/**
		 * @brief pointer to the operand
		 */
		std::shared_ptr<Item> operand_;
		/**
		 * @brief what kind of operation of the unary item indicates
		 */
		UNARY operator_;

	public:
		/**
		 * @brief constructor
		 */
		UnaryItem() = default;
		/**
		 * @brief constructor with given operand and operator
		 * @param operand given operand
		 * @param unaryOperator given operator
		 */
		UnaryItem(const Item& operand, const UNARY& unaryOperator);
		/**
		 * @brief destructor
		 */
		~UnaryItem() = default;
		/**
		 * @brief get the arithmetic function of the unary item
		 * @return the arithmetic function of the unary item
		 */
		[[nodiscard]] std::function<
			capd::autodiff::Node(capd::autodiff::Node, capd::autodiff::Node[], int, capd::autodiff::Node[], int)>
			arithmetic() const;
		/**
		 * @brief get the value of the current unary item
		 * @param t time variable
		 * @param in values of the given variables
		 * @param params other necessary parameters
		 * @return the value of the current unary item
		 */
		capd::interval value(const capd::interval&				t,
							 const std::vector<capd::interval>& in,
							 const std::vector<capd::interval>& params);
		/**
		 * @brief out the given unary item to standard out stream
		 * @param out given out stream
		 * @param rhs given unary item
		 * @return resulting out stream
		 */
		friend std::ostream& operator<<(std::ostream& out, const UnaryItem& rhs);
	};
} // namespace irafhy
#endif //REPRESENTATION_FORMAL_BASIC_ENTITY_UNARY_ITEM_H