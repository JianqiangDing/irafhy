#pragma once

#include <irafhy/analyser.h>
#include <irafhy/representation/geometric/intervalHull.h>
#include <irafhy/representation/geometric/polytope.h>
#include "../settings/settings.h"
#include <omp.h>

namespace irafhy
{
	class UABPAnalyser : public Analyser
	{
	private:
		[[nodiscard]] std::vector<IntervalHull> boundary(const Condition& condition, double epsilon) const;
		[[nodiscard]] std::vector<IntervalHull> simulate(const Time&					  duration,
														 const System&					  system,
														 const std::vector<IntervalHull>& boundaryIntervalHulls) const;
		[[nodiscard]] Polytope					constructPolytope(const std::vector<IntervalHull>& boundary) const;
		[[nodiscard]] Polytope					contraction(const Polytope&					 polytope,
															const std::vector<IntervalHull>& boundary,
															bool							 isExact) const;

	public:
		[[nodiscard]] capd::C0Rect2Set compute(const Time&			   duration,
											   const System&		   system,
											   const capd::C0Rect2Set& initCondition,
											   const Settings&		   settings) const override;
	};
} // namespace irafhy