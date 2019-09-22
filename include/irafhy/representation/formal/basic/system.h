#ifndef REPRESENTATION_FORMAL_BASIC_SYSTEM_H
#define REPRESENTATION_FORMAL_BASIC_SYSTEM_H

#include <irafhy/representation/formal/basic/formula.h>
#include <capd/capdlib.h>
#include <vector>
#include <functional>

namespace irafhy
{
	class System
	{
	private:
		/**
		 * @brief formulas of the system whihc indicate the vector field
		 */
		std::vector<Formula> formulas_;

	private:
		/**
		 * @brief construct an assign formula
		 * @param f given right hand side function
		 * @param index given left hand side index of the variable which will be assigned the value derived from the right hand side expression
		 * @return
		 */
		static std::function<void(capd::autodiff::Node,
								  capd::autodiff::Node[],
								  int,
								  capd::autodiff::Node[],
								  int,
								  capd::autodiff::Node[],
								  int)>
			assign(const std::function<capd::autodiff::Node(
					   capd::autodiff::Node, capd::autodiff::Node[], int, capd::autodiff::Node[], int)>& f,
				   int																					 index);
		/**
		 * @brief group two functions
		 * @param lhs given left hand side function
		 * @param rhs given right hand side function
		 * @return the resulting functions' group
		 */
		static std::function<void(capd::autodiff::Node,
								  capd::autodiff::Node[],
								  int,
								  capd::autodiff::Node[],
								  int,
								  capd::autodiff::Node[],
								  int)>
			group(const std::function<void(capd::autodiff::Node,
										   capd::autodiff::Node[],
										   int,
										   capd::autodiff::Node[],
										   int,
										   capd::autodiff::Node[],
										   int)>& lhs,
				  const std::function<void(capd::autodiff::Node,
										   capd::autodiff::Node[],
										   int,
										   capd::autodiff::Node[],
										   int,
										   capd::autodiff::Node[],
										   int)>& rhs);

	public:
		/**
		 * @brief constructor
		 */
		System() = default;
		/**
		 * @brief constructor with given formulas
		 * @param formulas given formulas
		 */
		explicit System(const std::vector<Formula>& formulas);
		/**
		 * @brief destructor
		 */
		~System() = default;
		/**
		 * @brief get the arithmetic function of the current vector field
		 * @return the arithmetic function
		 */
		[[nodiscard]] std::function<void(capd::autodiff::Node,
										 capd::autodiff::Node[],
										 int,
										 capd::autodiff::Node[],
										 int,
										 capd::autodiff::Node[],
										 int)>
			odeSystem() const;
		/**
		 * @brief check if the system is empty or not
		 * @return TRUE if the vector of formulas is empty
		 */
		[[nodiscard]] bool empty() const;
		/**
		 * @brief reverse the direction of the vector field
		 */
		void reverse() const;
		/**
		 * @brief out the given system to standard out stream
		 * @param out given out stream
		 * @param rhs given system
		 * @return the resulting out stream
		 */
		friend std::ostream& operator<<(std::ostream& out, const System& rhs);
	};
} // namespace irafhy
#endif //REPRESENTATION_FORMAL_BASIC_SYSTEM_H