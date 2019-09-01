#ifndef REPRESENTATION_FORMAL_BASIC_ENTITY_VARIABLE_H
#define REPRESENTATION_FORMAL_BASIC_ENTITY_VARIABLE_H

#include <capd/capdlib.h>
#include <functional>

namespace irafhy
{
	class Variable
	{
	private:
		/**
		 * @brief index of the variable in the variables' list, default set to -2(meaning invalid variable), -1 refers to the time variable
		 */
		long int index_ = -2;

	public:
		/**
		 * @brief default constructor
		 */
		Variable() = default;
		/**
		 * @brief constructor with given variable's index
		 * @param index index of the variable in the variables' list
		 */
		explicit Variable(long index);
		/**
		 * @brief destructor
		 */
		~Variable() = default;
		/**
		 * @brief get the arithmetic function of the variable item
		 * @return the arithmetic function of the variable item
		 */
		[[nodiscard]] std::function<
			capd::autodiff::Node(capd::autodiff::Node, capd::autodiff::Node[], int, capd::autodiff::Node[], int)>
			arithmetic() const;
		/**
		 * @brief get the value of the current variable
		 * @param t time variable
		 * @param in values of the given variables
		 * @param params other necessary parameters
		 * @return the value of the current variable
		 */
		capd::interval value(const capd::interval&				t,
							 const std::vector<capd::interval>& in,
							 const std::vector<capd::interval>& params);
		/**
		 * @brief out the given variable to the standard out stream
		 * @param out given out stream
		 * @param rhs given variable
		 * @return resulting out stream
		 */
		friend std::ostream& operator<<(std::ostream& out, const Variable& rhs);
	};
} // namespace irafhy
#endif //REPRESENTATION_FORMAL_BASIC_ENTITY_VARIABLE_H