#ifndef REPRESENTATION_GEOMETRIC_BASIC_HALFSPACE_H
#define REPRESENTATION_GEOMETRIC_BASIC_HALFSPACE_H

#include <irafhy/representation/geometric/basic/point.h>

namespace irafhy
{
	class HalfSpace
	{
	private:
		/**
		 * @brief normal of the half space which defined by normal * x + offset <= 0
		 */
		Eigen::VectorXd normal_;
		/**
		 * @brief offset used to define the half space
		 */
		double offset_;

	public:
		/**
		 * @brief static constructor of Empty half space object
		 * @param dimension dimension of the half space
		 * @return Empty half space object in given dimension space
		 */
		static HalfSpace Empty(std::size_t dimension = 0);

	public:
		/**
		 * @brief default constructor
		 */
		HalfSpace();
		/**
		 * @brief copy constructor
		 * @param halfSpace given half space
		 */
		HalfSpace(const HalfSpace& halfSpace) = default;
		/**
		 * @brief move constructor
		 * @param halfSpace given half space
		 */
		HalfSpace(HalfSpace&& halfSpace) = default;
		/**
		 * @brief constructor with given normal and offset
		 * @param normal given normal
		 * @param offset given offset
		 */
		HalfSpace(const Eigen::VectorXd& normal, double offset);
		/**
		 * @brief constructor with given normal and offset
		 * @param normal given normal
		 * @param offset given offset
		 */
		HalfSpace(Eigen::VectorXd&& normal, double&& offset);
		/**
		 * @brief destructor
		 */
		virtual ~HalfSpace() = default;
		/**
		 * @brief get the dimension of the half space
		 * @return the dimension of the half space
		 */
		[[nodiscard]] int dimension() const;
		/**
		 * @brief get the normal of the half space
		 * @return the normal of the half space
		 */
		[[nodiscard]] Eigen::VectorXd normal() const;
		/**
		 * @brief get the offset of the half space
		 * @return the offset of the half space
		 */
		[[nodiscard]] double offset() const;
		/**
		 * @brief check if the given point inside the half space or not
		 * @param point given point
		 * @return TRUE if the given point inside the half space
		 */
		[[nodiscard]] bool contains(const Point& point) const;
		/**
		 * @brief check the given coordinate inside the half space or not
		 * @param coordinate given coordinate
		 * @return TRUE if the given coordinate inside the half space
		 */
		[[nodiscard]] bool contains(const Eigen::VectorXd& coordinate) const;
		/**
		 * @brief check if the given point on the boundary of the half space or not
		 * @param point given point
		 * @return TRUE if the given coordinate hold the constraint which defines the half space
		 */
		[[nodiscard]] bool holds(const Point& point) const;
		/**
		 * @brief check if the given coordinate on the boundary of the half space
		 * @param coordinate given coordinate
		 * @return TRUE if the given coordinate hold the constraint which defines the half space
		 */
		[[nodiscard]] bool holds(const Eigen::VectorXd& coordinate) const;
		/**
		 * @brief check if the line segment between two points intersect with the half space or not
		 * @param lhsEndPoint left hand side point of the line segment
		 * @param rhsEndPoint right hand side point of the line segment
		 * @param intersection intersection of the line segment with the half space
		 * @return TRUE if the line segment intersect with the half space
		 */
		bool intersect(const Eigen::VectorXd& lhsEndPoint,
					   const Eigen::VectorXd& rhsEndPoint,
					   Eigen::VectorXd&		  intersection) const;
		/**
		 * @brief assignment operator
		 * @param halfSpace right hand side half space object
		 * @return resulting half space
		 */
		HalfSpace& operator=(const HalfSpace& halfSpace) = default;
		/**
		 * @brief assignment operator
		 * @param halfSpace right hand side half space object
		 * @return resulting half space
		 */
		HalfSpace& operator=(HalfSpace&& halfSpace) noexcept = default;
		/**
		 * @brief reverse the normal of the half space
		 * @return resulting half space
		 */
		HalfSpace& operator-();
		/**
		 * @brief reverse the normal the of the half space
		 * @return resulting half space
		 */
		HalfSpace& reverse();
	};

	/**
	 * @brief out the right hand side half space to standard out stream
	 * @param out given out stream
	 * @param halfSpace right hand side half space
	 * @return resulting out stream
	 */
	std::ostream& operator<<(std::ostream& out, const HalfSpace& halfSpace);
	/**
	 * @brief get a half space which has opposite normal
	 * @param halfSpace given half space
	 * @return resulting half space
	 */
	const HalfSpace operator-(const HalfSpace& halfSpace);
} // namespace irafhy
#endif //REPRESENTATION_GEOMETRIC_BASIC_HALFSPACE_H