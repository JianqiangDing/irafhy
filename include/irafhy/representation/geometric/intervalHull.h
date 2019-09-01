#ifndef REPRESENTATION_GEOMETRIC_INTERVAL_HULL_H
#define REPRESENTATION_GEOMETRIC_INTERVAL_HULL_H

#include <capd/capdlib.h>
#include <vector>
#include <iostream>
#include <irafhy/representation/geometric/basic/point.h>
#include <irafhy/representation/geometric/geometry.h>

namespace irafhy
{
	class IntervalHull : public Geometry<IntervalHull>
	{
	private:
		std::vector<capd::interval> constraints_;

	public:
		static IntervalHull Empty(std::size_t dimension = 0);

	public:
		IntervalHull();
		IntervalHull(const IntervalHull& intervalHull)	 = default;
		IntervalHull(IntervalHull&& intervalHull) noexcept = default;
		explicit IntervalHull(const std::vector<capd::interval>& constraints);
		explicit IntervalHull(const std::vector<Point>& points);
		IntervalHull(const Point& center, double radius);
		IntervalHull(const capd::C0Rect2Set& set);
		IntervalHull(const Eigen::VectorXd& center, double radius);
		~IntervalHull() override = default;
		std::vector<capd::interval> constraints() const;
		bool						empty() const override;
		int							dimension() const override;
		std::vector<Point>			extremVertices() const;
		Point						randInnerPoint() const;
		Point						centroid() const;
		bool						intersect(const IntervalHull& rhs, IntervalHull& result) const override;
		IntervalHull				unite(const IntervalHull& rhs) const override;
		bool						contains(const Point& point) const override;
		bool						contains(const Eigen::VectorXd& coordinate) const override;
		bool						contains(const IntervalHull& rhs) const;
		capd::interval&				operator[](std::size_t index);
		const capd::interval&		operator[](std::size_t index) const;
		bool						operator==(const IntervalHull& rhs) const;
		bool						operator!=(const IntervalHull& rhs) const;
		bool						operator<(const IntervalHull& rhs) const;
		bool						operator<=(const IntervalHull& rhs) const;
		bool						operator>(const IntervalHull& rhs) const;
		bool						operator>=(const IntervalHull& rhs) const;
		IntervalHull&				operator=(const IntervalHull& rhs) = default;
		IntervalHull&				operator=(IntervalHull&& rhs) = default;
	};
	std::ostream& operator<<(std::ostream& out, const IntervalHull& rhs);
} // namespace irafhy
#endif //REPRESENTATION_GEOMETRIC_INTERVAL_HULL_H