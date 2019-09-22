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
		Polytope(const std::vector<Point>&	 pointConstraints,
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
		/**
		 * @brief static constructor of Empty polytope
		 * @param dimension dimension of the space which the polytope in
		 * @return resulting Empty polytope
		 */
		static Polytope Empty(std::size_t dimension = 0);

	public:
		/**
		 * @brief constructor
		 */
		Polytope();
		/**
		 * @brief copy constructor
		 * @param polytope given polytope
		 */
		Polytope(const Polytope& polytope) = default;
		/**
		 * @brief move constructor
		 * @param polytope given polytope
		 */
		Polytope(Polytope&& polytope) noexcept = default;
		/**
		 * @brief constructor with given points
		 * @param points given points
		 */
		explicit Polytope(const std::vector<Point>& points);
		/**
		 * @brief constructor with given half spaces
		 * @param halfSpaces given half spaces
		 */
		explicit Polytope(const std::vector<HalfSpace>& halfSpaces);
		/**
		 * @brief constructor with given interval constraints
		 * @param constraints given interval constraints
		 */
		explicit Polytope(const std::vector<capd::interval>& constraints);
		/**
		 * @brief constructor with given state set
		 * @param set given state set
		 */
		explicit Polytope(const capd::C0Rect2Set& set);
		/**
		 * @brief constructor with given center and related radius
		 * @param center center of the polytope
		 * @param radius radius which defines the variance of each dimension
		 */
		Polytope(const Point& center, double radius);
		/**
		 * @brief constructor with given coordinate of the center and related radius
		 * @param center coordinate of the center of the polytope
		 * @param radius radius which defines the variance of each dimension
		 */
		Polytope(const Eigen::VectorXd& center, double radius);
		/**
		 * @brief destructor
		 */
		~Polytope() override = default;
		/**
		 * @brief get the extreme vertices of the polytope
		 * @return extreme vertices of the polytope
		 */
		[[nodiscard]] std::vector<Point> pointConstraints() const;
		/**
		 * @brief get the half space constraints of the polytope
		 * @return half space constraints of the polytope
		 */
		[[nodiscard]] std::vector<HalfSpace> halfSpaceConstraints() const;
		/**
		 * @brief get the centroid of the polytope
		 * @return the centroid of the polytope in Point form
		 */
		[[nodiscard]] Point centroid() const;
		/**
		 * @brief get the variance constraints of all dimensions
		 * @return variance constraints in interval vector form
		 */
		[[nodiscard]] std::vector<capd::interval> constraints() const;
		/**
		 * @brief check if the polytope is empty or not
		 * @return TRUE if the polytope has zero volume or empty convex hull constraints
		 */
		[[nodiscard]] bool empty() const override;
		/**
		 * @brief get the dimension of the space which the polytope in
		 * @return the dimension of the space which the polytope in
		 */
		[[nodiscard]] int dimension() const override;
		/**
		 * @brief get the volume of the polytope
		 * @return the volume of the polytope
		 */
		[[nodiscard]] double volume() const;
		/**
		 * @brief check if the current polytope intersect with the given right hand side one or not
		 * @param rhs right hand side polytope
		 * @param result intersection of two polytope if exist
		 * @return TRUE if the intersection of two polytope isn't empty
		 */
		bool intersect(const Polytope& rhs, Polytope& result) const override;
		/**
		 * @brief get the union of the current polytope and the given right hand side one
		 * @param rhs right hand side polytope
		 * @return resulting union of two polytope
		 */
		[[nodiscard]] Polytope unite(const Polytope& rhs) const override;
		/**
		 * @brief check if the given point inside the domain which defined by the current polytope or not
		 * @param point given point
		 * @return TRUE if the given point inside the domain which defined by the current polytope
		 */
		[[nodiscard]] bool contains(const Point& point) const override;
		/**
		 * @brief check if the given coordinate inside the domain which defined by the current polytope or not
		 * @param coordinate given coordinate
		 * @return TRUE if the given coordinate inside the domain which defined by the current polytope
		 */
		[[nodiscard]] bool contains(const Eigen::VectorXd& coordinate) const override;
		/**
		 * @brief assignment operator
		 * @param rhs right hand side polytope
		 * @return resulting polytope
		 */
		Polytope& operator=(const Polytope& rhs) = default;
		/**
		 * @brief assignment operator
		 * @param rhs right hand side polytope
		 * @return resulting polytope
		 */
		Polytope& operator=(Polytope&& rhs) noexcept = default;
	};

	/**
	 * @brief out the right hand side polytope to standard out stream
	 * @param out given out stream
	 * @param rhs right hand side polytope
	 * @return resulting out stream
	 */
	std::ostream& operator<<(std::ostream& out, const Polytope& rhs);
} // namespace irafhy
#endif //REPRESENTATION_GEOMETRIC_POLYTOPE_H