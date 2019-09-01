#ifndef REPRESENTATION_FORMAL_BASIC_ITEM_H
#define REPRESENTATION_FORMAL_BASIC_ITEM_H

#include <irafhy/representation/formal/basic/entity/constant.h>
#include <irafhy/representation/formal/basic/entity/variable.h>
#include <irafhy/representation/formal/basic/entity/unaryItem.h>
#include <irafhy/representation/formal/basic/entity/binaryItem.h>
#include <boost/variant.hpp>

namespace irafhy
{
	using Entity = boost::variant<Constant, Variable, UnaryItem, BinaryItem>;

	struct entityVisitor : public boost::static_visitor<Entity>
	{
	public:
		Entity operator()(const Entity& entity) const { return entity; }
	};

	class Item
	{
	private:
		/**
		 * entity of the item
		 */
		Entity entity_;

	public:
		/**
		 * @brief constructor
		 */
		Item();
		/**
		 * @brief constructor with given entity
		 * @param entity given entity
		 */
		explicit Item(const Entity& entity);
		/**
		 * @brief destructor
		 */
		~Item() = default;
		/**
		 * @brief get the arithmetic function of the current item
		 * @return the arithmetic function of the current item
		 */
		[[nodiscard]] std::function<
			capd::autodiff::Node(capd::autodiff::Node, capd::autodiff::Node[], int, capd::autodiff::Node[], int)>
			arithmetic() const;
		/**
		 * @brief get the value of the current item
		 * @param t time variable
		 * @param in values of the given variables
		 * @param params other necessary parameters
		 * @return the value of the current item
		 */
		[[nodiscard]] capd::interval value(const capd::interval&			  t,
										   const std::vector<capd::interval>& in,
										   const std::vector<capd::interval>& params) const;
		/**
		 * @brief out the given item to standard out stream
		 * @param out given out stream
		 * @param rhs given item
		 * @return resulting out stream
		 */
		friend std::ostream& operator<<(std::ostream& out, const Item& rhs);
	};
} // namespace irafhy
#endif //REPRESENTATION_FORMAL_BASIC_ITEM_H
