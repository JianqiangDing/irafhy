#ifndef UTILITY_PLOTTER_H
#define UTILITY_PLOTTER_H

#include <irafhy/representation/geometric/intervalHull.h>
#include <vector>
#include <cmath>

namespace irafhy
{
	class Plotter
	{
	public:
		/**
		 * @brief plot the given information
		 * @param timeSequence given time sequence
		 * @param intervalHulls given interval hulls
		 * @param dimensions dimensions which specify the data should be plotted
		 */
		static void plot(const std::vector<capd::interval>& timeSequence  = {},
						 const std::vector<IntervalHull>&   intervalHulls = {},
						 const std::vector<std::size_t>&	dimensions	= {});
	};
} // namespace irafhy
#endif //UTILITY_PLOTTER_H