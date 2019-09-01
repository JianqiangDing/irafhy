#ifndef REPRESENTATION_FORMAL_BASIC_ENTITY_CONSTANT_H
#define REPRESENTATION_FORMAL_BASIC_ENTITY_CONSTANT_H

#include <functional>
#include <capd/capdlib.h>

namespace irafhy
{
	class Constant
	{
	private:
		/**
		 * @brief value of the current constrant
		 */
		double value_;

	public:
		/**
		 * @brief constructor
		 */
		Constant();
		/**
		 * @brief constructor with given value
		 * @param value the value of the constant
		 */
		explicit Constant(double value);
		/**
		 * @brief destructor
		 */
		~Constant() = default;
		/**
		 * @brief get the arithmetic function of the constant item
		 * @return the arithmetic function of the constant item
		 */
		[[nodiscard]] std::function<
			capd::autodiff::Node(capd::autodiff::Node, capd::autodiff::Node[], int, capd::autodiff::Node[], int)>
			arithmetic() const;
		/**
		 * @brief get the value of the current constant
		 * @param t time variable
		 * @param in values of the given variables
		 * @param params other necessary parameters
		 * @return the value of the current constant
		 */
		capd::interval value(const capd::interval&				t,
							 const std::vector<capd::interval>& in,
							 const std::vector<capd::interval>& params);
		/**
		 * @brief out the given constant to the standard out stream
		 * @param out given out stream
		 * @param rhs given constant
		 * @return resulting out stream
		 */
		friend std::ostream& operator<<(std::ostream& out, const Constant& rhs);
	};
} // namespace irafhy
#endif //REPRESENTATION_FORMAL_BASIC_ENTITY_CONSTANT_H