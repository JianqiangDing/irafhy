#include <irafhy/representation/formal/basic/item.h>

namespace irafhy
{
	Item::Item() { entity_ = Constant(); }

	Item::Item(const irafhy::Entity& entity) { entity_ = entity; }

	std::function<capd::autodiff::Node(capd::autodiff::Node, capd::autodiff::Node[], int, capd::autodiff::Node[], int)>
		Item::arithmetic() const
	{
		auto variant = boost::apply_visitor(entityVisitor(), entity_);
		switch (ITEM_T(variant.which()))
		{
			case ITEM_T::CONSTANT_T:
				return boost::get<Constant>(variant).arithmetic();
			case ITEM_T::VARIABLE_T:
				return boost::get<Variable>(variant).arithmetic();
			case ITEM_T::UNARY_T:
				return boost::get<UnaryItem>(variant).arithmetic();
			case ITEM_T::BINARY_T:
				return boost::get<BinaryItem>(variant).arithmetic();
			default:
				exit(EXIT_FAILURE);
		}
	}

	capd::interval Item::value(const capd::interval&			  t,
							   const std::vector<capd::interval>& in,
							   const std::vector<capd::interval>& params) const
	{
		auto variant = boost::apply_visitor(entityVisitor(), entity_);
		switch (ITEM_T(variant.which()))
		{
			case ITEM_T::CONSTANT_T:
				return boost::get<Constant>(variant).value(t, in, params);
			case ITEM_T::VARIABLE_T:
				return boost::get<Variable>(variant).value(t, in, params);
			case ITEM_T::UNARY_T:
				return boost::get<UnaryItem>(variant).value(t, in, params);
			case ITEM_T::BINARY_T:
				return boost::get<BinaryItem>(variant).value(t, in, params);
			default:
				exit(EXIT_FAILURE);
		}
	}

	std::ostream& operator<<(std::ostream& out, const Item& rhs)
	{
		switch (ITEM_T(rhs.entity_.which()))
		{
			case ITEM_T::CONSTANT_T:
			{
				out << boost::get<Constant>(rhs.entity_);
				break;
			}
			case ITEM_T::VARIABLE_T:
			{
				out << boost::get<Variable>(rhs.entity_);
				break;
			}
			case ITEM_T::UNARY_T:
			{
				out << boost::get<UnaryItem>(rhs.entity_);
				break;
			}
			case ITEM_T::BINARY_T:
			{
				out << boost::get<BinaryItem>(rhs.entity_);
				break;
			}
			default:
				exit(EXIT_FAILURE);
		}
		return out;
	}
} // namespace irafhy