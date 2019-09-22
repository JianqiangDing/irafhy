#ifndef UTILITY_VIEWER_H
#define UTILITY_VIEWER_H

#include <irafhy/representation/geometric/basic/point.h>
#include <irafhy/representation/formal/basic/condition.h>
#include <irafhy/utility/definition/enum.h>
#include <vector>
#include <set>
#include <igl/opengl/glfw/Viewer.h>
#include <igl/opengl/glfw/imgui/ImGuiHelpers.h>
#include <igl/opengl/glfw/imgui/ImGuiTraits.h>
#include <igl/opengl/glfw/imgui/ImGuiMenu.h>
#include <imgui/imgui.h>

namespace irafhy
{
	struct IntervalHullStruct
	{
		/**
		 * @brief extreme vertices of the interval hull
		 */
		Eigen::MatrixXd _V;
		/**
		 * @brief indexes of the vertices relate to each facet
		 */
		Eigen::MatrixXi _F;
		/**
		 * @brief indexes of the vertices relate to each edge
		 */
		Eigen::MatrixXi _E;
		/**
		 * @brief constructor with given vertices, facets and edges
		 * @param V given vertices
		 * @param F given facets
		 * @param E given edges
		 */
		IntervalHullStruct(Eigen::MatrixXd& V, Eigen::MatrixXi F, Eigen::MatrixXi E)
			: _V(V)
			, _F(F)
			, _E(E)
		{}
		/**
		 * @brief constructor with given vertices, facets and edges
		 * @param V given vertices
		 * @param F given facets
		 * @param E given edges
		 */
		IntervalHullStruct(const Eigen::MatrixXd& V, const Eigen::MatrixXi& F, const Eigen::MatrixXi& E)
		{
			_V = V;
			_F = F;
			_E = E;
		}
	};

	class viewer
	{
	private:
		/**
		 * @brief construct the matrices which define the given inetrval hull
		 * @param intervalHulls given inetrval hull
		 * @param time related time in interval form
		 * @param dimension the dimension of the space which the given interval hull in
		 * @return resulting interval hull struct
		 */
		static IntervalHullStruct intervalHullMatrix(const IntervalHull&	 intervalHulls,
													 const capd::interval&   time,
													 const std::vector<int>& dimension);
		/**
		 * @brief construct the coordinate matix of given point set
		 * @param point given point set
		 * @param time related time in interval form
		 * @param dimension the dimension of the sapce which the given interval hull in
		 * @return resulting coordinate matrix
		 */
		static Eigen::MatrixXd pointMatrix(const std::vector<Point>& point,
										   const capd::interval&	 time,
										   const std::vector<int>&   dimension);
		/**
		 * @brief draw the axes and adaptive markers
		 * @param viewer viewer which shall show the axes
		 * @param ranges ranges of each showing dimension
		 * @param vars related variable of each dimension
		 */
		static void drawAxes(igl::opengl::glfw::Viewer&			viewer,
							 const std::vector<capd::interval>& ranges,
							 const std::vector<std::string>&	vars);

	public:
		/**
		 * @brief show the given interval hulls, point set using the wrapped viewer
		 * @param intervalHulls given interval hulls
		 * @param points given point set
		 * @param time time sequence
		 * @param dimension dimensions specify the values shall be showed
		 * @param viewType style of interval hulls' showing
		 */
		static void show(const std::vector<IntervalHull>&		intervalHulls = {},
						 const std::vector<std::vector<Point>>& points		  = {},
						 const std::vector<capd::interval>&		time		  = {},
						 const std::vector<int>&				dimension	 = {},
						 VIEW_TYPE								viewType	  = VIEW_TYPE::PLANE);
		/**
		 * @brief show the given conditions, point set using wrapped viewer
		 * @param conditions given condition
		 * @param points given point set
		 * @param time time sequence
		 * @param dimension dimensions specify the values shall be showed
		 * @param viewType style of conditions' showing
		 */
		static void show(const std::vector<Condition>&			conditions = {},
						 const std::vector<std::vector<Point>>& points	 = {},
						 const std::vector<capd::interval>&		time	   = {},
						 const std::vector<int>&				dimension  = {},
						 VIEW_TYPE								viewType   = VIEW_TYPE::PLANE);
	};
} // namespace irafhy
#endif //UTILITY_VIEWER_H