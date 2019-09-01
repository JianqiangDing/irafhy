#include <irafhy/representation/formal/basic/entity/binaryItem.h>
#include <irafhy/representation/formal/basic/item.h>

namespace irafhy
{
	BinaryItem::BinaryItem(const irafhy::Item&   lhsOperand,
						   const irafhy::Item&   rhsOperand,
						   const irafhy::BINARY& binaryOperator)
	{
		lhsOperand_ = std::make_shared<Item>(lhsOperand);
		rhsOperand_ = std::make_shared<Item>(rhsOperand);
		operator_   = binaryOperator;
	}

	std::function<capd::autodiff::Node(capd::autodiff::Node, capd::autodiff::Node[], int, capd::autodiff::Node[], int)>
		BinaryItem::arithmetic() const
	{
		auto lhsArithmetic = this->lhsOperand_->arithmetic();
		auto rhsArithmetic = this->rhsOperand_->arithmetic();
		switch (operator_)
		{
			case BINARY::PLUS:
				return [lhsArithmetic, rhsArithmetic](capd::autodiff::Node t,
													  capd::autodiff::Node in[],
													  int				   dimIn,
													  capd::autodiff::Node params[],
													  int				   nParams) -> capd::autodiff::Node {
					return lhsArithmetic(t, in, dimIn, params, nParams) + rhsArithmetic(t, in, dimIn, params, nParams);
				};
			case BINARY::MINUS:
				return [lhsArithmetic, rhsArithmetic](capd::autodiff::Node t,
													  capd::autodiff::Node in[],
													  int				   dimIn,
													  capd::autodiff::Node params[],
													  int				   nParams) -> capd::autodiff::Node {
					return lhsArithmetic(t, in, dimIn, params, nParams) - rhsArithmetic(t, in, dimIn, params, nParams);
				};
			case BINARY::MULTIPLY:
				return [lhsArithmetic, rhsArithmetic](capd::autodiff::Node t,
													  capd::autodiff::Node in[],
													  int				   dimIn,
													  capd::autodiff::Node params[],
													  int				   nParams) -> capd::autodiff::Node {
					return lhsArithmetic(t, in, dimIn, params, nParams) * rhsArithmetic(t, in, dimIn, params, nParams);
				};
			case BINARY::DIVIDE:
				return [lhsArithmetic, rhsArithmetic](capd::autodiff::Node t,
													  capd::autodiff::Node in[],
													  int				   dimIn,
													  capd::autodiff::Node params[],
													  int				   nParams) -> capd::autodiff::Node {
					return lhsArithmetic(t, in, dimIn, params, nParams) / rhsArithmetic(t, in, dimIn, params, nParams);
				};
			case BINARY::POWER:
				return [lhsArithmetic, rhsArithmetic](capd::autodiff::Node t,
													  capd::autodiff::Node in[],
													  int				   dimIn,
													  capd::autodiff::Node params[],
													  int				   nParams) -> capd::autodiff::Node {
					return lhsArithmetic(t, in, dimIn, params, nParams)
						   ^ (rhsArithmetic(t, in, dimIn, params, nParams)).val;
				};
			default:
				exit(EXIT_FAILURE);
		}
	}

	capd::interval BinaryItem::value(const capd::interval&				t,
									 const std::vector<capd::interval>& in,
									 const std::vector<capd::interval>& params)
	{
		capd::interval lhsVal = lhsOperand_->value(t, in, params);
		capd::interval rhsVal = rhsOperand_->value(t, in, params);
		switch (operator_)
		{
			case BINARY::PLUS:
				return lhsVal + rhsVal;
			case BINARY::MINUS:
				return lhsVal - rhsVal;
			case BINARY::MULTIPLY:
				return lhsVal * rhsVal;
			case BINARY::DIVIDE:
				return lhsVal / rhsVal;
			case BINARY ::POWER:
				return lhsVal ^ rhsVal;
			default:
				exit(EXIT_FAILURE);
		}
	}

	std::ostream& operator<<(std::ostream& out, const BinaryItem& rhs)
	{
		out << "(" << *rhs.lhsOperand_ << ")";
		switch (rhs.operator_)
		{
			case BINARY::PLUS:
			{
				out << "+";
				break;
			}
			case BINARY::MINUS:
			{
				out << "-";
				break;
			}
			case BINARY::MULTIPLY:
			{
				out << "*";
				break;
			}
			case BINARY::DIVIDE:
			{
				out << "/";
				break;
			}
			case BINARY::POWER:
			{
				out << "^";
				break;
			}
			default:
				exit(EXIT_FAILURE);
		}
		out << "(" << *rhs.rhsOperand_ << ")";
		return out;
	}
} // namespace irafhy