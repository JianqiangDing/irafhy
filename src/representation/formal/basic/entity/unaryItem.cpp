#include <irafhy/representation/formal/basic/entity/unaryItem.h>
#include <irafhy/representation/formal/basic/item.h>

namespace irafhy
{
	UnaryItem::UnaryItem(const Item& operand, const UNARY& unaryOperator)
	{
		operand_  = std::make_shared<Item>(operand);
		operator_ = unaryOperator;
	}

	std::function<capd::autodiff::Node(capd::autodiff::Node, capd::autodiff::Node[], int, capd::autodiff::Node[], int)>
		UnaryItem::arithmetic() const
	{
		auto thisArithmetic = this->operand_->arithmetic();
		switch (operator_)
		{
			case UNARY::OPPOSITE:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return capd::autodiff::Node(-1.0) * thisArithmetic(t, in, dimIn, params, nParams);
				};
			}
			case UNARY::SIN:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return sin(thisArithmetic(t, in, dimIn, params, nParams));
				};
			}
			case UNARY::ASIN:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return asin(thisArithmetic(t, in, dimIn, params, nParams));
				};
			}
			case UNARY::COS:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return cos(thisArithmetic(t, in, dimIn, params, nParams));
				};
			}
			case UNARY::ACOS:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return acos(thisArithmetic(t, in, dimIn, params, nParams));
				};
			}
			case UNARY::TAN:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return sin(thisArithmetic(t, in, dimIn, params, nParams))
						   / cos(thisArithmetic(t, in, dimIn, params, nParams));
				};
			}
			case UNARY::ATAN:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return atan(thisArithmetic(t, in, dimIn, params, nParams));
				};
			}
			case UNARY::COT:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return cos(thisArithmetic(t, in, dimIn, params, nParams))
						   / sin(thisArithmetic(t, in, dimIn, params, nParams));
				};
			}
			case UNARY::ACOT:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return (acos(capd::autodiff::Node(-1.0)) / capd::autodiff::Node(2.0))
						   - atan(thisArithmetic(t, in, dimIn, params, nParams));
				};
			}
			case UNARY::LN:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return log(thisArithmetic(t, in, dimIn, params, nParams));
				};
			}
			case UNARY::LOG:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return log(thisArithmetic(t, in, dimIn, params, nParams)) / log(capd::autodiff::Node(10.0));
				};
			}
			case UNARY::NEXP:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return exp(thisArithmetic(t, in, dimIn, params, nParams));
				};
			}
			case UNARY::SINH:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return (exp(thisArithmetic(t, in, dimIn, params, nParams))
							- exp(capd::autodiff::Node(-1.0) * thisArithmetic(t, in, dimIn, params, nParams)))
						   / capd::autodiff::Node(2.0);
				};
			}
			case UNARY::ASINH:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return log(thisArithmetic(t, in, dimIn, params, nParams)
							   + sqrt(sqr(thisArithmetic(t, in, dimIn, params, nParams)) + capd::autodiff::Node(1.0)));
				};
			}
			case UNARY::COSH:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return (exp(thisArithmetic(t, in, dimIn, params, nParams))
							+ exp(capd::autodiff::Node(-1.0)) * thisArithmetic(t, in, dimIn, params, nParams))
						   / capd::autodiff::Node(2.0);
				};
			}
			case UNARY::ACOSH:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return log(thisArithmetic(t, in, dimIn, params, nParams)
							   + sqrt(sqr(thisArithmetic(t, in, dimIn, params, nParams)) - capd::autodiff::Node(1.0)));
				};
			}
			case UNARY::TANH:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return (exp(thisArithmetic(t, in, dimIn, params, nParams))
							- exp(capd::autodiff::Node(-1.0) * thisArithmetic(t, in, dimIn, params, nParams)))
						   / (exp(thisArithmetic(t, in, dimIn, params, nParams))
							  + exp(capd::autodiff::Node(-1.0) * thisArithmetic(t, in, dimIn, params, nParams)));
				};
			}
			case UNARY::ATANH:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return log((capd::autodiff::Node(1.0) + thisArithmetic(t, in, dimIn, params, nParams))
							   / (capd::autodiff::Node(1.0) - thisArithmetic(t, in, dimIn, params, nParams)))
						   / capd::autodiff::Node(2.0);
				};
			}
			case UNARY::COTH:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return log((capd::autodiff::Node(1.0) + thisArithmetic(t, in, dimIn, params, nParams))
							   / (capd::autodiff::Node(1.0) - thisArithmetic(t, in, dimIn, params, nParams)))
						   / capd::autodiff::Node(2.0);
				};
			}
			case UNARY::ACOTH:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return log((thisArithmetic(t, in, dimIn, params, nParams) + capd::autodiff::Node(1.0))
							   / (thisArithmetic(t, in, dimIn, params, nParams) - capd::autodiff::Node(1.0)))
						   / capd::autodiff::Node(2.0);
				};
			}
			case UNARY::SQR:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return sqr(thisArithmetic(t, in, dimIn, params, nParams));
				};
			}
			case UNARY::SQRT:
			{
				return [thisArithmetic](capd::autodiff::Node t,
										capd::autodiff::Node in[],
										int					 dimIn,
										capd::autodiff::Node params[],
										int					 nParams) -> capd::autodiff::Node {
					return sqrt(thisArithmetic(t, in, dimIn, params, nParams));
				};
			}
			default:
				exit(EXIT_FAILURE);
		}
	}

	capd::interval UnaryItem::value(const capd::interval&			   t,
									const std::vector<capd::interval>& in,
									const std::vector<capd::interval>& params)
	{
		capd::interval val = operand_->value(t, in, params);
		switch (operator_)
		{
			case UNARY::OPPOSITE:
				return capd::interval(-1.0) * val;
			case UNARY::SIN:
				return sin(val);
			case UNARY::ASIN:
				return asin(val);
			case UNARY::COS:
				return cos(val);
			case UNARY::ACOS:
				return acos(val);
			case UNARY::TAN:
				return sin(val) / cos(val);
			case UNARY::ATAN:
				return atan(val);
			case UNARY::COT:
				return cos(val) / sin(val);
			case UNARY::ACOT:
				return (acos(-1.0) / capd::interval(2.0)) - atan(val);
			case UNARY::LN:
				return log(val);
			case UNARY::LOG:
				return log(val) / log(capd::interval(10.0));
			case UNARY::NEXP:
				return exp(val);
			case UNARY::SINH:
				return (exp(val) - exp(capd::interval(-1.0) * val)) / capd::interval(2.0);
			case UNARY::ASINH:
				return log(val + sqrt(sqr(val) + capd::interval(1.0)));
			case UNARY::COSH:
				return (exp(val) + exp(capd::interval(-1.0) * val)) / capd::interval(2.0);
			case UNARY::ACOSH:
				return log(val + sqrt(sqr(val) - capd::interval(1.0)));
			case UNARY::TANH:
				return (exp(val) - exp(capd::interval(-1.0) * val)) / (exp(val) + exp(capd::interval(-1.0) * val));
			case UNARY::ATANH:
				return log((capd::interval(1.0) + val) / (capd::interval(1.0) - val)) / capd::interval(2.0);
			case UNARY::COTH:
				return (exp(val) + exp(capd::interval(-1.0) * val)) / (exp(val) - exp(capd::interval(-1.0) * val));
			case UNARY::ACOTH:
				return log((val + capd::interval(1.0)) / (val - capd::interval(1.0))) / capd::interval(2.0);
			case UNARY::SQR:
				return sqr(val);
			case UNARY::SQRT:
				return sqrt(val);
			default:
				exit(EXIT_FAILURE);
		}
	}

	std::ostream& operator<<(std::ostream& out, const UnaryItem& rhs)
	{
		switch (rhs.operator_)
		{
			case UNARY::OPPOSITE:
			{
				out << "-";
				break;
			}
			case UNARY::SIN:
			{
				out << "sin";
				break;
			}
			case UNARY::COS:
			{
				out << "cos";
				break;
			}
			case UNARY::ASIN:
			{
				out << "asin";
				break;
			}
			case UNARY::ACOS:
			{
				out << "acos";
				break;
			}
			case UNARY::TAN:
			{
				out << "tan";
				break;
			}
			case UNARY::COT:
			{
				out << "cot";
				break;
			}
			case UNARY::ATAN:
			{
				out << "atan";
				break;
			}
			case UNARY::ACOT:
			{
				out << "acot";
				break;
			}
			case UNARY::SINH:
			{
				out << "sinh";
				break;
			}
			case UNARY::COSH:
			{
				out << "cosh";
				break;
			}
			case UNARY::ASINH:
			{
				out << "asinh";
				break;
			}
			case UNARY::ACOSH:
			{
				out << "acosh";
				break;
			}
			case UNARY::TANH:
			{
				out << "tanh";
				break;
			}
			case UNARY::COTH:
			{
				out << "coth";
				break;
			}
			case UNARY::ATANH:
			{
				out << "atanh";
				break;
			}
			case UNARY::ACOTH:
			{
				out << "acoth";
				break;
			}
			case UNARY::LN:
			{
				out << "ln";
				break;
			}
			case UNARY::LOG:
			{
				out << "log";
				break;
			}
			case UNARY::NEXP:
			{
				out << "e^";
				break;
			}
			case UNARY::SQR:
			{
				out << "sqr";
				break;
			}
			case UNARY::SQRT:
			{
				out << "sqrt";
				break;
			}
			default:
				exit(EXIT_FAILURE);
		}
		out << "(" << *rhs.operand_ << ")";
		return out;
	}
} // namespace irafhy