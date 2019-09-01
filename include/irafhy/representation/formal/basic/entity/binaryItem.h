#ifndef REPRESENTATION_FORMAL_BASIC_ENTITY_BINARY_ITEM_H
#define REPRESENTATION_FORMAL_BASIC_ENTITY_BINARY_ITEM_H

#include <memory>
#include <capd/capdlib.h>
#include <irafhy/utility/definition/enum.h>

namespace irafhy
{
	class Item;

	class BinaryItem
	{
	private:
		/**
		 * @brief pointer to the left hand side operand
		 */
		std::shared_ptr<Item> lhsOperand_;
		/**
		 * @brief pointer to the right hand side operand
		 */
		std::shared_ptr<Item> rhsOperand_;
		/**
		 * @brief what kind of operation of the binary item indicates
		 */
		BINARY operator_;

	public:
		/**
		 * @brief constructor
		 */
		BinaryItem() = default;
		/**
		 * @brief constructor with given operands and operator
		 * @param lhsOperand left hand side operand
		 * @param rhsOperand right hand side operand
		 * @param binaryOperator given operator
		 */
		BinaryItem(const Item& lhsOperand, const Item& rhsOperand, const BINARY& binaryOperator);
		/**
		 * @brief destructor
		 */
		~BinaryItem() = default;
		/**
		 * @brief get the arithmetic function of the binary item
		 * @return the arithmetic function of the binary item
		 */
		[[nodiscard]] std::function<
			capd::autodiff::Node(capd::autodiff::Node, capd::autodiff::Node[], int, capd::autodiff::Node[], int)>
			arithmetic() const;
		/**
		 * @brief get the value of the current binary item
		 * @param t time variable
		 * @param in values of the given variables
		 * @param params other necessary parameters
		 * @return the value of the current binary item
		 */
		capd::interval value(const capd::interval&				t,
							 const std::vector<capd::interval>& in,
							 const std::vector<capd::interval>& params);
		/**
		 * @brief out the given binary item to standard out stream
		 * @param out given out stream
		 * @param rhs given binary item
		 * @return resulting out stream
		 */
		friend std::ostream& operator<<(std::ostream& out, const BinaryItem& rhs);
	};
} // namespace irafhy
#endif //REPRESENTATION_FORMAL_BASIC_ENTITY_BINARY_ITEM_H