#ifndef REPRESENTATION_GEOMETRIC_GEOMETRY_H
#define REPRESENTATION_GEOMETRIC_GEOMETRY_H

#include <Eigen/Core>

namespace irafhy
{
	class Point;

	template <typename DerivedGeometry>
	class Geometry
	{
	public:
		virtual ~Geometry()																		 = default;
		virtual int				dimension() const												 = 0;
		virtual bool			empty() const													 = 0;
		virtual bool			intersect(const DerivedGeometry&, DerivedGeometry& result) const = 0;
		virtual DerivedGeometry unite(const DerivedGeometry&) const								 = 0;
		virtual bool			contains(const Point& point) const								 = 0;
		virtual bool			contains(const Eigen::VectorXd& coordinate) const				 = 0;
	};
} // namespace irafhy
#endif //REPRESENTATION_GEOMETRIC_GEOMETRY_H