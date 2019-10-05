#ifndef UTILITY_PRINTER_H
#define UTILITY_PRINTER_H

#include <fmt/format.h>
#include <vector>
#include <irafhy/representation/geometric/intervalHull.h>

namespace irafhy
{
	class Printer
	{
	public:
		/**
		 * @brief write out the given data to specified file
		 * @param timeSequence given time sequence
		 * @param intervalHulls given interval hulls
		 * @param fileName name of the output file
		 */
		static void write(const std::vector<capd::interval>& timeSequence  = {},
						  const std::vector<IntervalHull>&	 intervalHulls = {},
						  const std::string&				 fileName	   = "defaultOut.txt");
	};
} // namespace irafhy
#endif //UTILITY_PRINTER_H