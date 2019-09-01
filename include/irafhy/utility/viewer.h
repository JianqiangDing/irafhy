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
		Eigen::MatrixXd _V;
		Eigen::MatrixXi _F;
		Eigen::MatrixXi _E;
		IntervalHullStruct(Eigen::MatrixXd& V, Eigen::MatrixXi F, Eigen::MatrixXi E)
			: _V(V)
			, _F(F)
			, _E(E)
		{}
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
		static IntervalHullStruct intervalHullMatrix(const IntervalHull&	 intervalHulls,
													 const capd::interval&   time,
													 const std::vector<int>& dimension);
		static Eigen::MatrixXd	pointMatrix(const std::vector<Point>& point,
											  const capd::interval&		time,
											  const std::vector<int>&   dimension);
		static void				  drawAxes(igl::opengl::glfw::Viewer&		  viewer,
										   const std::vector<capd::interval>& ranges,
										   const std::vector<std::string>&	vars);

	public:
		static void show(const std::vector<IntervalHull>&		intervalHulls = {},
						 const std::vector<std::vector<Point>>& points		  = {},
						 const std::vector<capd::interval>&		time		  = {},
						 const std::vector<int>&				dimension	 = {},
						 VIEW_TYPE								viewType	  = VIEW_TYPE::PLANE);
		static void show(const std::vector<Condition>&			conditions = {},
						 const std::vector<std::vector<Point>>& points	 = {},
						 const std::vector<capd::interval>&		time	   = {},
						 const std::vector<int>&				dimension  = {},
						 VIEW_TYPE								viewType   = VIEW_TYPE::PLANE);
	};
} // namespace irafhy
#endif //UTILITY_VIEWER_H