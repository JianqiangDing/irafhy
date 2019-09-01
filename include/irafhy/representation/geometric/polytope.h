#ifndef REPRESENTATION_GEOMETRIC_POLYTOPE_H
#define REPRESENTATION_GEOMETRIC_POLYTOPE_H

#include <vector>
#include <iostream>
#include <capd/capdlib.h>
#include <irafhy/representation/geometric/geometry.h>
#include <irafhy/representation/geometric/basic/point.h>
#include <irafhy/representation/geometric/basic/halfSpace.h>
#include <irafhy/utility/compGeometry/convexHull.hpp>

namespace irafhy
{
	class Polytope : public Geometry<Polytope>
	{
	private:
		std::vector<Point>	 pointConstraints_;
		std::vector<HalfSpace> halfSpaceConstraints_;
		double				   volume_	= 0.0;
		int					   dimension_ = 0;

	private:
		Polytope(const std::vector<Point>&	 pointConstraints,
				 const std::vector<HalfSpace>& halfSpaceConstraints,
				 double						   volume,
				 int						   dimension);
		void			   init(const convexConstraints& constraints);
		std::vector<Point> verticesEnumerationDualPly(const std::vector<HalfSpace>& halfSpaces);
		std::vector<Point> verticesEnumerationIntersect(const std::vector<HalfSpace>& halfSpaces);
		std::vector<Point> verticesEnumeration(const std::vector<capd::interval>& constraints);
		std::vector<Point> verticesEnumeration(const Eigen::VectorXd& center, double radius);

	public:
		static Polytope Empty(std::size_t dimension = 0);

	public:
		Polytope();
		Polytope(const Polytope& polytope)	 = default;
		Polytope(Polytope&& polytope) noexcept = default;
		explicit Polytope(const std::vector<Point>& points);
		explicit Polytope(const std::vector<HalfSpace>& halfSpaces);
		explicit Polytope(const std::vector<capd::interval>& constraints);
		explicit Polytope(const capd::C0Rect2Set& set);
		Polytope(const Point& center, double radius);
		Polytope(const Eigen::VectorXd& center, double radius);
		~Polytope() override = default;
		std::vector<Point>			pointConstraints() const;
		std::vector<HalfSpace>		halfSpaceConstraints() const;
		Point						centroid() const;
		std::vector<capd::interval> constraints() const;
		std::vector<capd::interval> inscribedConstraints(const Point& centroid) const;
		bool						empty() const override;
		int							dimension() const override;
		double						volume() const;
		bool						intersect(const Polytope& rhs, Polytope& result) const override;
		Polytope					unite(const Polytope& rhs) const override;
		bool						contains(const Point& point) const override;
		bool						contains(const Eigen::VectorXd& coordinate) const override;
		Polytope&					operator=(const Polytope& rhs) = default;
		Polytope&					operator=(Polytope&& rhs) noexcept = default;
	};
	std::ostream& operator<<(std::ostream& out, const Polytope& rhs);
} // namespace irafhy
#endif //REPRESENTATION_GEOMETRIC_POLYTOPE_H