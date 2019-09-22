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
		/**
		 * @brief destructor
		 */
		virtual ~Geometry() = default;
		/**
		 * @brief get the dimension of the space which the geometry object in
		 * @return the dimension of the space which the geometry object in
		 */
		[[nodiscard]] virtual int dimension() const = 0;
		/**
		 * @brief check if the geometry object is empty or not
		 * @return TRUE if the geometry object is empty
		 */
		[[nodiscard]] virtual bool empty() const = 0;
		/**
		 * @brief check if the current geometry object intersect with given geometry object or not
		 * @param result the intersection of two geometry objects if exist
		 * @return TRUE if the intersection of two geometry objects isn't empty
		 */
		virtual bool intersect(const DerivedGeometry&, DerivedGeometry& result) const = 0;
		/**
		 * @brief get the union of the current geometry object and given geometry object
		 * @return the union of two geometry objects
		 */
		virtual DerivedGeometry unite(const DerivedGeometry&) const = 0;
		/**
		 * @brief check if the given point is inside the domain defined by the geometry object or not
		 * @param point the given point
		 * @return TRUE if the given point is inside the domain defined by the geometry object
		 */
		[[nodiscard]] virtual bool contains(const Point& point) const = 0;
		/**
		 * @brief check if the given coordinate is inside the domain defined by the geometry object or not
		 * @param coordinate the given coordinate
		 * @return TRUE if the given point is inside the domain defined by the geometry object
		 */
		[[nodiscard]] virtual bool contains(const Eigen::VectorXd& coordinate) const = 0;
	};
} // namespace irafhy
#endif //REPRESENTATION_GEOMETRIC_GEOMETRY_H