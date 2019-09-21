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
		/**
		 * @brief point constraints which define the convex hull entity
		 */
		std::vector<Point> pointConstraints_;
		/**
		 * @brief half spaces constraints which define the convex hull entity
		 */
		std::vector<HalfSpace> halfSpaceConstraints_;
		/**
		 * @brief volume of the convex hull
		 */
		double volume_ = 0.0;
		/**
		 * @brief dimension of the space which current convex hull in
		 */
		int dimension_ = 0;

	private:
		/**
		 * @brief constructor with given constraints and related information
		 * @param pointConstraints point constraints of the convex hull entity
		 * @param halfSpaceConstraints half spaces constraints of the convex hull entity
		 * @param volume volume of the convex hull
		 * @param dimension dimension of the space which the polytope in
		 */
		Polytope(const std::vector<Point>&	   pointConstraints,
				 const std::vector<HalfSpace>& halfSpaceConstraints,
				 double						   volume,
				 int						   dimension);
		/**
		 * @brief initialize the polytope with given convex hull
		 * @param constraints
		 */
		void init(const convexConstraints& constraints);
		/**
		 * @brief enumerate vertices using dual polytope method
		 * @param halfSpaces given half spaces
		 * @return resulting extreme vertices of the target domain defined by the given half spaces
		 */
		std::vector<Point> verticesEnumerationDualPly(const std::vector<HalfSpace>& halfSpaces);
		/**
		 * @brief enumerate vertices using intersection computation
		 * @param halfSpaces given half spaces
		 * @return resulting extreme vertices of the target domain defined by the given half spaces
		 */
		std::vector<Point> verticesEnumerationIntersect(const std::vector<HalfSpace>& halfSpaces);
		/**
		 * @brief enumerate extreme vertices with given constraints in interval form
		 * @param constraints given space constraints
		 * @return resulting extreme vertices of the target domain defined by the given constraints
		 */
		std::vector<Point> verticesEnumeration(const std::vector<capd::interval>& constraints);
		/**
		 * @brief enumerate extreme vertices with given center coordinate and related radius
		 * @param center coordinate of the target domain
		 * @param radius given radius
		 * @return resulting extreme vertices of the target domain defined by the given center and related radius
		 */
		std::vector<Point> verticesEnumeration(const Eigen::VectorXd& center, double radius);

	public:
		static Polytope Empty(std::size_t dimension = 0);

	public:
		Polytope();
		Polytope(const Polytope& polytope)	   = default;
		Polytope(Polytope&& polytope) noexcept = default;
		explicit Polytope(const std::vector<Point>& points);
		explicit Polytope(const std::vector<HalfSpace>& halfSpaces);
		explicit Polytope(const std::vector<capd::interval>& constraints);
		explicit Polytope(const capd::C0Rect2Set& set);
		Polytope(const Point& center, double radius);
		Polytope(const Eigen::VectorXd& center, double radius);
		~Polytope() override = default;
		[[nodiscard]] std::vector<Point>		  pointConstraints() const;
		[[nodiscard]] std::vector<HalfSpace>	  halfSpaceConstraints() const;
		[[nodiscard]] Point						  centroid() const;
		[[nodiscard]] std::vector<capd::interval> constraints() const;
		[[nodiscard]] std::vector<capd::interval> inscribedConstraints(const Point& centroid) const;
		[[nodiscard]] bool						  empty() const override;
		[[nodiscard]] int						  dimension() const override;
		[[nodiscard]] double					  volume() const;
		bool									  intersect(const Polytope& rhs, Polytope& result) const override;
		[[nodiscard]] Polytope					  unite(const Polytope& rhs) const override;
		[[nodiscard]] bool						  contains(const Point& point) const override;
		[[nodiscard]] bool						  contains(const Eigen::VectorXd& coordinate) const override;
		Polytope&								  operator=(const Polytope& rhs) = default;
		Polytope&								  operator=(Polytope&& rhs) noexcept = default;
	};
	std::ostream& operator<<(std::ostream& out, const Polytope& rhs);
} // namespace irafhy
#endif //REPRESENTATION_GEOMETRIC_POLYTOPE_H