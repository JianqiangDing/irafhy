#include <irafhy/utility/viewer.h>

namespace irafhy
{
	IntervalHullStruct viewer::intervalHullMatrix(const IntervalHull&	 intervalHulls,
												  const capd::interval&   time,
												  const std::vector<int>& dimension)
	{
		Eigen::MatrixXd V(0, 3);
		Eigen::MatrixXi F(0, 3);
		Eigen::MatrixXi E(0, 2);
		if (intervalHulls.empty())
			return IntervalHullStruct(V, F, E);
		std::vector<capd::interval> dataConstraints;
		dataConstraints.reserve(3);
		if (time.leftBound() >= 0 && time.rightBound() >= 0)
			dataConstraints.emplace_back(time);
		for (int index : dimension)
			dataConstraints.emplace_back(intervalHulls[index]);
		while (dataConstraints.size() < 3)
		{
			dataConstraints.emplace_back(capd::interval(0.0, 0.0));
		}
		V.resize(8, 3);
		F.resize(12, 3);
		E.resize(12, 2);
		V.row(0) = Eigen::RowVector3d(
			dataConstraints[0].leftBound(), dataConstraints[1].leftBound(), dataConstraints[2].leftBound());
		V.row(1) = Eigen::RowVector3d(
			dataConstraints[0].leftBound(), dataConstraints[1].leftBound(), dataConstraints[2].rightBound());
		V.row(2) = Eigen::RowVector3d(
			dataConstraints[0].leftBound(), dataConstraints[1].rightBound(), dataConstraints[2].leftBound());
		V.row(3) = Eigen::RowVector3d(
			dataConstraints[0].leftBound(), dataConstraints[1].rightBound(), dataConstraints[2].rightBound());
		V.row(4) = Eigen::RowVector3d(
			dataConstraints[0].rightBound(), dataConstraints[1].leftBound(), dataConstraints[2].leftBound());
		V.row(5) = Eigen::RowVector3d(
			dataConstraints[0].rightBound(), dataConstraints[1].leftBound(), dataConstraints[2].rightBound());
		V.row(6) = Eigen::RowVector3d(
			dataConstraints[0].rightBound(), dataConstraints[1].rightBound(), dataConstraints[2].leftBound());
		V.row(7) = Eigen::RowVector3d(
			dataConstraints[0].rightBound(), dataConstraints[1].rightBound(), dataConstraints[2].rightBound());
		F = (Eigen::MatrixXi(12, 3) << 1,
			 7,
			 5,
			 1,
			 3,
			 7,
			 1,
			 4,
			 3,
			 1,
			 2,
			 4,
			 3,
			 8,
			 7,
			 3,
			 4,
			 8,
			 5,
			 7,
			 8,
			 5,
			 8,
			 6,
			 1,
			 5,
			 6,
			 1,
			 6,
			 2,
			 2,
			 6,
			 8,
			 2,
			 8,
			 4)
				.finished()
				.array()
			- 1;
		E = (Eigen::MatrixXi(12, 2) << 1, 2, 2, 6, 6, 5, 5, 1, 4, 8, 8, 7, 7, 3, 3, 4, 2, 4, 6, 8, 5, 7, 1, 3)
				.finished()
				.array()
			- 1;
		return IntervalHullStruct(V, F, E);
	}

	Eigen::MatrixXd viewer::pointMatrix(const std::vector<Point>& point,
										const capd::interval&	 time,
										const std::vector<int>&   dimension)
	{
		Eigen::MatrixXd V = Eigen::MatrixXd::Zero(point.size(), 3);
		for (std::size_t index = 0; index < point.size(); ++index)
		{
			int curDimIdx = 0;
			if (time.leftBound() >= 0 && time.rightBound() >= 0)
			{
				V(index, curDimIdx) = (time.leftBound() + time.rightBound()) / 2.0;
				curDimIdx++;
			}
			for (const auto& thisDim : dimension)
			{
				V(index, curDimIdx) = point[index][thisDim];
				curDimIdx++;
			}
		}
		return V;
	}

	void viewer::drawAxes(igl::opengl::glfw::Viewer&		 viewer,
						  const std::vector<capd::interval>& ranges,
						  const std::vector<std::string>&	vars)
	{
		assert(!ranges.empty() && ranges.size() == 3 && !vars.empty());
		std::vector<double> stepSize;
		stepSize.reserve(ranges.size());
		std::size_t steps = 10;
		for (const auto& range : ranges)
		{
			double thisStepSize = (range.rightBound() - range.leftBound()) / steps;
			stepSize.emplace_back(thisStepSize);
		}
		//set axes
		Eigen::Vector3d lowerBoundCoordinate = Eigen::Vector3d(ranges[0].leftBound() - stepSize[0],
															   ranges[1].leftBound() - stepSize[1],
															   ranges[2].leftBound() - stepSize[2]);
		Eigen::MatrixXd axesCoordinatesFrom  = Eigen::MatrixXd::Zero(ranges.size(), 3);
		Eigen::MatrixXd axesCoordinatesTo	= Eigen::MatrixXd::Zero(ranges.size(), 3);
		Eigen::MatrixXd axesColors			 = Eigen::MatrixXd::Zero(ranges.size(), 3);
		for (std::size_t dimIdx = 0; dimIdx < vars.size(); ++dimIdx)
		{
			axesCoordinatesFrom.row(dimIdx)		= lowerBoundCoordinate;
			axesCoordinatesTo.row(dimIdx)		= lowerBoundCoordinate;
			axesCoordinatesFrom(dimIdx, dimIdx) = ranges[dimIdx].leftBound() - stepSize[dimIdx];
			axesCoordinatesTo(dimIdx, dimIdx)   = ranges[dimIdx].rightBound() + stepSize[dimIdx];
			axesColors.row(dimIdx)				= Eigen::RowVector3d(0, 0, 0);
		}
		viewer.data().add_edges(axesCoordinatesFrom, axesCoordinatesTo, axesColors);
		//construct markers
		std::size_t totalMarkerCnt = 1 + steps * ranges.size();
		for (std::size_t index = 0; index < vars.size(); ++index)
		{
			Eigen::Vector3d stepCoordinate = Eigen::Vector3d::Zero();
			stepCoordinate(index)		   = 1;
			for (std::size_t stepIdx = 1; stepIdx <= steps + 2; ++stepIdx)
				viewer.data().add_label(lowerBoundCoordinate + stepCoordinate * stepIdx * stepSize[index],
										std::to_string(ranges[index].leftBound() + (stepIdx - 1) * stepSize[index]));
			viewer.data().add_label(lowerBoundCoordinate + stepCoordinate * (steps + 3) * stepSize[index], vars[index]);
		}
		// viewer.data().add_label(lowerBoundCoordinate,
		// 						"[" + std::to_string(lowerBoundCoordinate(0)) + ","
		// 							+ std::to_string(lowerBoundCoordinate(1)) + ","
		// 							+ std::to_string(lowerBoundCoordinate(2)) + "]");
	}

	void viewer::show(const std::vector<IntervalHull>&		 intervalHulls,
					  const std::vector<std::vector<Point>>& points,
					  const std::vector<capd::interval>&	 time,
					  const std::vector<int>&				 dimension,
					  VIEW_TYPE								 viewType)
	{
		//initialize the viewer
		igl::opengl::glfw::Viewer			viewer;
		igl::opengl::glfw::imgui::ImGuiMenu menu;
		viewer.plugins.push_back(&menu);
		//construct the valid time sequence
		std::vector<capd::interval> validTime;
		bool						withTime = false;
		if (!time.empty())
		{
			if (!intervalHulls.empty())
				assert(intervalHulls.size() == time.size());
			if (!points.empty())
				assert(points.size() == time.size());
			validTime = time;
			withTime  = true;
		}
		else
		{
			validTime.resize(intervalHulls.size(), capd::interval(-1.0, -1.0));
		}
		//construct the valid dimension
		std::vector<int> validDimension;
		for (const int& curDimension : dimension)
		{
			if ((validDimension.size() < 2 && withTime) || (validDimension.size() < 3 && !withTime))
			{
				validDimension.emplace_back(curDimension);
			}
		}
		//construct the interval hull related matrices
		Eigen::MatrixXd V(intervalHulls.size() * 8, 3);
		Eigen::MatrixXi F(intervalHulls.size() * 12, 3), E(intervalHulls.size() * 12, 2);
		for (std::size_t index = 0; index < intervalHulls.size(); ++index)
		{
			IntervalHullStruct curIntervalHullMatrix
				= intervalHullMatrix(intervalHulls[index], validTime[index], validDimension);
			V.block(index * 8, 0, 8, 3) = curIntervalHullMatrix._V;
			Eigen::MatrixXi tempF		= Eigen::MatrixXi::Ones(12, 3) * index * 8;
			tempF += curIntervalHullMatrix._F;
			F.block(index * 12, 0, 12, 3) = tempF;
			Eigen::MatrixXi tempE		  = Eigen::MatrixXi::Ones(12, 2) * index * 8;
			tempE += curIntervalHullMatrix._E;
			E.block(index * 12, 0, 12, 2) = tempE;
		}
		//construct the points related matrices
		Eigen::MatrixXd PV(0, 3), PC(0, 3);
		for (std::size_t index = 0; index < points.size(); ++index)
		{
			Eigen::MatrixXd curPMatrix = pointMatrix(points[index], validTime[index], validDimension);
			Eigen::MatrixXd newPV(PV.rows() + curPMatrix.rows(), 3);
			newPV << PV, curPMatrix;
			PV = newPV;
		}
		PC.resize(PV.rows(), 3);
		PC + Eigen::MatrixXd::Ones(PC.rows(), 3);
		viewer.data().set_mesh(V, F);
		switch (viewType)
		{
			case VIEW_TYPE::POINT:
			{
				viewer.data_list.back().show_faces = false;
				viewer.data_list.back().show_lines = false;
				viewer.data_list.back().point_size = 3;
				viewer.data_list.back().face_based = true;
				break;
			}
			case VIEW_TYPE::LINE:
			{
				viewer.data_list.back().show_faces = false;
				viewer.data_list.back().show_lines = false;
				viewer.data_list.back().face_based = true;
				//set the edges
				Eigen::MatrixXd EC(E.rows(), 3);
				for (std::size_t index = 0; index < EC.rows(); ++index)
					EC.row(index) = Eigen::RowVector3d(0, 0, 0);
				viewer.data().set_edges(V, E, EC);
				viewer.data_list.back().line_width = 3;
				break;
			}
			case VIEW_TYPE::PLANE:
			{
				viewer.data_list.back().show_faces = true;
				viewer.data_list.back().show_lines = false;
				viewer.data_list.back().line_width = 2;
				viewer.data_list.back().face_based = true;
				//set the edges
				Eigen::MatrixXd EC(E.rows(), 3);
				for (std::size_t index = 0; index < EC.rows(); ++index)
					EC.row(index) = Eigen::RowVector3d(0, 0, 0);
				viewer.data().set_edges(V, E, EC);
				viewer.data_list.back().line_width = 3;
				break;
			}
			default:
				exit(EXIT_FAILURE);
		}
		//set the points
		viewer.data().add_points(PV, PC);
		viewer.data_list.back().point_size = 10;
		//align the camera
		{
			if (V.rows() != 0)
				viewer.core().align_camera_center(V);
			if (PV.rows() != 0)
				viewer.core().align_camera_center(PV);
		}
		//draw axes
		std::vector<capd::interval> ranges;
		std::vector<std::string>	vars;
		if (!time.empty())
			vars.emplace_back("Time");
		for (const auto& dimIdx : validDimension)
			vars.emplace_back("Variable_" + std::to_string(dimIdx));
		for (std::size_t dimIdx = 0; dimIdx < 3; ++dimIdx)
		{
			double thisLowerBound = 0.0;
			double thisUpperBound = 0.0;
			if (V.rows() != 0 && PV.rows() != 0)
			{
				thisLowerBound = std::min(V.col(dimIdx).minCoeff(), PV.col(dimIdx).minCoeff());
				thisUpperBound = std::max(V.col(dimIdx).maxCoeff(), PV.col(dimIdx).maxCoeff());
			}
			else if (V.rows() != 0 && PV.rows() == 0)
			{
				thisLowerBound = V.col(dimIdx).minCoeff();
				thisUpperBound = V.col(dimIdx).maxCoeff();
			}
			else if (V.rows() == 0 && PV.rows() != 0)
			{
				thisLowerBound = PV.col(dimIdx).minCoeff();
				thisUpperBound = PV.col(dimIdx).maxCoeff();
			}
			else
			{
				std::exit(EXIT_FAILURE);
			}
			//round the lower bound and upper bound
			{
				//TODO
			}
			ranges.emplace_back(capd::interval(thisLowerBound, thisUpperBound));
		}
		drawAxes(viewer, ranges, vars);
		//modify the viewer
		viewer.core().set_rotation_type(igl::opengl::ViewerCore::RotationType::ROTATION_TYPE_TRACKBALL);
		viewer.launch();
	}

	void viewer::show(const std::vector<irafhy::Condition>&			 conditions,
					  const std::vector<std::vector<irafhy::Point>>& points,
					  const std::vector<capd::interval>&			 time,
					  const std::vector<int>&						 dimension,
					  irafhy::VIEW_TYPE								 viewType)
	{
		//TODO
		exit(EXIT_FAILURE);
	}
} // namespace irafhy