#ifndef REPRESENTATION_GEOMETRIC_BASIC_HALFSPACE_H
#define REPRESENTATION_GEOMETRIC_BASIC_HALFSPACE_H

#include <irafhy/representation/geometric/basic/point.h>

namespace irafhy
{
	class HalfSpace
	{
	private:
		Eigen::VectorXd normal_;
		double			offset_;

	public:
		static HalfSpace Empty(std::size_t dimension = 0);

	public:
		HalfSpace();
		HalfSpace(const HalfSpace& halfSpace) = default;
		HalfSpace(HalfSpace&& halfSpace)	  = default;
		HalfSpace(const Eigen::VectorXd& normal, double offset);
		HalfSpace(Eigen::VectorXd&& normal, double&& offset);
		virtual ~HalfSpace() = default;
		int				dimension() const;
		Eigen::VectorXd normal() const;
		double			offset() const;
		bool			contains(const Point& point) const;
		bool			contains(const Eigen::VectorXd& coordinate) const;
		bool			holds(const Point& point) const;
		bool			holds(const Eigen::VectorXd& coordinate) const;
		bool			intersect(const Eigen::VectorXd& lhsEndPoint,
								  const Eigen::VectorXd& rhsEndPoint,
								  Eigen::VectorXd&		 intersection) const;
		HalfSpace&		operator=(const HalfSpace& halfSpace) = default;
		HalfSpace&		operator=(HalfSpace&& halfSpace) noexcept = default;
		HalfSpace&		operator-();
		HalfSpace&		reverse();
	};
	std::ostream&   operator<<(std::ostream& out, const HalfSpace& halfSpace);
	const HalfSpace operator-(const HalfSpace& halfSpace);
} // namespace irafhy
#endif //REPRESENTATION_GEOMETRIC_BASIC_HALFSPACE_H