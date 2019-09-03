#include <capd/capdlib.h>
#include <boost/lexical_cast.hpp>
#include <irafhy/utility/parser/visitor/settingsVisitor.h>
#include <irafhy/representation/geometric/intervalHull.h>
#include <irafhy/representation/geometric/polytope.h>
#include <irafhy/representation/formal/basic/condition.h>
#include <irafhy/utility/definition/metaStructure.h>
#include <irafhy/utility/definition/enum.h>
#include <irafhy/settings.h>

namespace irafhy
{
	SettingsVisitor::SettingsVisitor(const std::vector<std::string>& vars)
	{
		assert(!vars.empty());
		vars_ = vars;
	}

	double SettingsVisitor::strToNum(const std::string& numStr) const
	{
		double retNum;
		try
		{
			retNum = boost::lexical_cast<double>(numStr);
		}
		catch (const boost::bad_lexical_cast& e)
		{
			std::cout << e.what() << std::endl;
			exit(EXIT_FAILURE);
		}
		return retNum;
	}

	antlrcpp::Any SettingsVisitor::visitCondition(settingsParser::ConditionContext* ctx)
	{
		if (ctx->intervalhull() != NULL)
		{
			IntervalHull intervalHull = visit(ctx->intervalhull());
			return Condition(intervalHull);
		}
		if (ctx->polytope() != NULL)
		{
			Polytope polytope = visit(ctx->polytope());
			return Condition(polytope);
		}
		exit(EXIT_FAILURE);
	}

	antlrcpp::Any SettingsVisitor::visitPolytope(settingsParser::PolytopeContext* ctx)
	{
		if (!ctx->hpolytope()->isEmpty())
			return visit(ctx->hpolytope());
		return visit(ctx->vpolytope());
	}

	antlrcpp::Any SettingsVisitor::visitHpolytope(settingsParser::HpolytopeContext* ctx)
	{
		Eigen::VectorXd offsets = visit(ctx->vector());
		Eigen::MatrixXd norms   = visit(ctx->matrix());
		assert(offsets.rows() == norms.rows());
		std::vector<HalfSpace> constraints;
		constraints.reserve(offsets.rows());
		for (std::size_t idx = 0; idx < offsets.rows(); ++idx)
		{
			Eigen::VectorXd thisNorm   = norms.row(idx);
			double			thisOffset = offsets(idx);
			constraints.emplace_back(HalfSpace(thisNorm, thisOffset));
		}
		return Polytope(constraints);
	}

	antlrcpp::Any SettingsVisitor::visitVpolytope(settingsParser::VpolytopeContext* ctx)
	{
		std::vector<Point> constraints;
		for (const auto& vectorCtx : ctx->vector())
		{
			Eigen::VectorXd coordinate = visit(vectorCtx);
			constraints.emplace_back(Point(coordinate));
		}
		return Polytope(constraints);
	}

	antlrcpp::Any SettingsVisitor::visitMatrix(settingsParser::MatrixContext* ctx)
	{
		std::size_t		rowCnt   = ctx->vector().size();
		Eigen::VectorXd frontVec = visit(ctx->vector(0));
		std::size_t		colCnt   = static_cast<std::size_t>(frontVec.rows());
		Eigen::MatrixXd retMatrix(rowCnt, colCnt);
		for (std::size_t idx = 0; idx < rowCnt; ++idx)
		{
			Eigen::VectorXd curVector = visit(ctx->vector(idx));
			retMatrix.row(idx)		  = curVector;
		}
		if (ctx->MAJOR_ORDER->getType() == settingsParser::KEY_COL_MAJOR_ORDER)
			retMatrix.transposeInPlace();
		return retMatrix;
	}

	antlrcpp::Any SettingsVisitor::visitVector(settingsParser::VectorContext* ctx)
	{
		Eigen::VectorXd retVec(ctx->NUMBER().size());
		std::size_t		numCtxIdx = 0;
		if (ctx->OP.empty())
		{
			for (std::size_t idx = 0; idx < retVec.rows(); ++idx)
			{
				std::string thisNumStr = ctx->NUMBER(idx)->getText();
				double		thisNum	= strToNum(thisNumStr);
				retVec(idx)			   = thisNum;
			}
		}
		else
		{
			for (const auto& thisOPCtx : ctx->OP)
			{
				std::size_t curOPStartIdx  = thisOPCtx->getStartIndex();
				std::size_t curNumStartIdx = ctx->NUMBER(numCtxIdx)->getSymbol()->getStartIndex();
				while (curOPStartIdx >= curNumStartIdx)
				{
					std::string thisNumStr = ctx->NUMBER(numCtxIdx)->getText();
					double		thisNum	= strToNum(thisNumStr);
					retVec(numCtxIdx)	  = thisNum;
					++numCtxIdx;
					curNumStartIdx = ctx->NUMBER(numCtxIdx)->getSymbol()->getStartIndex();
				}
				if (thisOPCtx->getType() == settingsParser::MINUS)
				{
					std::string thisNumStr = ctx->NUMBER(numCtxIdx)->getText();
					double		thisNum	= strToNum(thisNumStr);
					retVec(numCtxIdx)	  = thisNum * -1.0;
					++numCtxIdx;
				}
			}
			while (numCtxIdx < ctx->NUMBER().size())
			{
				std::string thisNumStr = ctx->NUMBER(numCtxIdx)->getText();
				double		thisNum	= strToNum(thisNumStr);
				retVec(numCtxIdx)	  = thisNum;
				++numCtxIdx;
			}
		}
		return retVec;
	}

	antlrcpp::Any SettingsVisitor::visitIntervalhull(settingsParser::IntervalhullContext* ctx)
	{
		std::vector<capd::interval> constraints(0);
		constraints.reserve(ctx->interval().size());
		for (const auto& intervalCtx : ctx->interval())
		{
			capd::interval thisInterval = visit(intervalCtx);
			constraints.emplace_back(thisInterval);
		}
		return IntervalHull(constraints);
	}

	antlrcpp::Any SettingsVisitor::visitInterval(settingsParser::IntervalContext* ctx)
	{
		std::size_t lowerValIndex(0), upperValIndex(0), lowerOpIndex(0), upperOpIndex(0);
		std::size_t commaIndex = ctx->COMMA()->getSymbol()->getStartIndex();
		double		lowerConstraint(0.0), upperConstraint(0.0);
		for (const auto& val : ctx->VAL)
		{
			std::size_t thisValIndex = val->getStartIndex();
			if (thisValIndex < commaIndex)
			{
				lowerValIndex = thisValIndex;
				if (val->getType() == settingsParser::KEY_INFINITY)
				{
					lowerConstraint = std::numeric_limits<double>::infinity() * -1.0;
				}
				else
				{
					lowerConstraint = strToNum(val->getText());
				}
			}
			else
			{
				upperValIndex = thisValIndex;
				if (val->getType() == settingsParser::KEY_INFINITY)
				{
					upperConstraint = std::numeric_limits<double>::infinity();
				}
				else
				{
					upperConstraint = strToNum(val->getText());
				}
			}
		}
		for (const auto& op : ctx->OP)
		{
			std::size_t thisOpIndex = op->getStartIndex();
			if (thisOpIndex < commaIndex && op->getType() == settingsParser::MINUS && !std::isinf(lowerConstraint))
			{
				lowerOpIndex = thisOpIndex;
				assert(lowerOpIndex < lowerValIndex);
				lowerConstraint *= double(-1);
			}
			else if (commaIndex < thisOpIndex && op->getType() == settingsParser::MINUS && !std::isinf(upperConstraint))
			{
				upperOpIndex = thisOpIndex;
				assert(upperOpIndex < upperValIndex);
				upperConstraint *= double(-1);
			}
		}
		if (!std::isinf(lowerConstraint) && !std::isinf(upperConstraint))
			assert(lowerConstraint <= upperConstraint);
		return capd::interval(lowerConstraint, upperConstraint);
	}

	antlrcpp::Any SettingsVisitor::visitTimeHorizonsetting(settingsParser::TimeHorizonsettingContext* ctx)
	{
		assert(!vars_.empty());
		Time retTime(0.0, 0.0);
		if (!ctx->interval()->isEmpty())
		{
			capd::interval thisInterval = visit(ctx->interval());
			retTime						= Time(thisInterval.leftBound(), thisInterval.rightBound());
		}
		return retTime;
	}

	antlrcpp::Any SettingsVisitor::visitStepSetting(settingsParser::StepSettingContext* ctx)
	{
		std::string numStr = ctx->NUMBER()->getText();
		double		num	= strToNum(numStr);
		assert(num >= 0);
		return num;
	}

	antlrcpp::Any SettingsVisitor::visitPlotsetting(settingsParser::PlotsettingContext* ctx)
	{
		switch (ctx->SWITCH->getType())
		{
			case settingsParser::KEY_SWITCH_ON:
			{
				return true;
			}
			case settingsParser::KEY_SWITCH_OFF:
			{
				return false;
			}
			default:
				return false;
		}
	}

	antlrcpp::Any SettingsVisitor::visitPrintsetting(settingsParser::PrintsettingContext* ctx)
	{
		switch (ctx->SWITCH->getType())
		{
			case settingsParser::KEY_SWITCH_ON:
			{
				return true;
			}
			case settingsParser::KEY_SWITCH_OFF:
			{
				return false;
			}
			default:
				return false;
		}
	}

	antlrcpp::Any SettingsVisitor::visitGeometrysetting(settingsParser::GeometrysettingContext* ctx)
	{
		switch (ctx->VALUE->getType())
		{
			case settingsParser::KEY_INTERVAL_HULL:
				return GEOMETRY::INTERVAL_HULL;
			case settingsParser::KEY_POLYTOPE:
				return GEOMETRY::POLYTOPE;
			default:
				exit(EXIT_FAILURE);
		}
	}

	antlrcpp::Any SettingsVisitor::visitAnalysissetting(settingsParser::AnalysissettingContext* ctx)
	{
		switch (ctx->ANALYSIS->getType())
		{
			case settingsParser::KEY_ANALYSIS_FORWARD:
			{
				return ANALYSIS::FORWARD;
			}
			case settingsParser::KEY_ANALYSIS_BACKWARD:
			{
				return ANALYSIS::BACKWARD;
			}
			default:
				return ANALYSIS::FORWARD;
		}
	}

	antlrcpp::Any SettingsVisitor::visitMaxjumpsetting(settingsParser::MaxjumpsettingContext* ctx)
	{
		long		maxJump(0);
		std::string maxJumpStr = ctx->NUMBER()->getText();
		double		maxJumpVal = strToNum(maxJumpStr);
		maxJump				   = static_cast<long>(maxJumpVal);
		return maxJump;
	}

	antlrcpp::Any SettingsVisitor::visitStartmodelidsetting(settingsParser::StartmodelidsettingContext* ctx)
	{
		return ctx->VARIABLE()->getText();
	}

	antlrcpp::Any SettingsVisitor::visitInitialconditionsetting(settingsParser::InitialconditionsettingContext* ctx)
	{
		assert(!vars_.empty());
		if (!ctx->condition()->isEmpty())
			return visit(ctx->condition());
		return Condition::Empty();
	}

	antlrcpp::Any SettingsVisitor::visitSetting(settingsParser::SettingContext* ctx)
	{
		Settings settings;
		if (!ctx->timeHorizonsetting().empty())
		{
			for (const auto& timeHorizonCtx : ctx->timeHorizonsetting())
			{
				Time duration = visit(timeHorizonCtx);
				settings.setDuration(duration);
			}
		}
		if (!ctx->geometrysetting().empty())
		{
			for (const auto& geometryCtx : ctx->geometrysetting())
			{
				GEOMETRY geometry = visit(geometryCtx);
				settings.setGeometry(geometry);
			}
		}
		if (!ctx->stepSetting().empty())
		{
			for (const auto& stepCtx : ctx->stepSetting())
			{
				double step = visit(stepCtx);
				settings.setStep(step);
			}
		}
		if (!ctx->plotsetting().empty())
		{
			for (const auto& plotCtx : ctx->plotsetting())
			{
				bool plot = visit(plotCtx);
				settings.setPlot(plot);
			}
		}
		if (!ctx->printsetting().empty())
		{
			for (const auto& printCtx : ctx->printsetting())
			{
				bool print = visit(printCtx);
				settings.setPrint(print);
			}
		}
		if (!ctx->initialconditionsetting().empty())
		{
			for (const auto& initConditionCtx : ctx->initialconditionsetting())
			{
				Condition initCondition = visit(initConditionCtx);
				settings.setInitCondition(initCondition);
			}
		}
		if (!ctx->maxjumpsetting().empty())
		{
			for (const auto& maxJumpCtx : ctx->maxjumpsetting())
			{
				long maxJump = visit(maxJumpCtx);
				settings.setMaxJump(maxJump);
			}
		}
		if (!ctx->startmodelidsetting().empty())
		{
			for (const auto& startModelIDCtx : ctx->startmodelidsetting())
			{
				std::string startModelID = visit(startModelIDCtx);
				settings.setStartModelID(startModelID);
			}
		}
		return settings;
	}
} // namespace irafhy