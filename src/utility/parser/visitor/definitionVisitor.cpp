#include <irafhy/representation/geometric/intervalHull.h>
#include <irafhy/representation/geometric/polytope.h>
#include <irafhy/representation/formal/basic/condition.h>
#include <irafhy/representation/formal/basic/item.h>
#include <irafhy/utility/parser/visitor/definitionVisitor.h>
#include <irafhy/utility/parser/visitor/itemVisitor.h>
#include <boost/lexical_cast.hpp>

namespace irafhy
{
	DefinitionVisitor::DefinitionVisitor(const std::vector<std::string>& vars)
	{
		assert(!vars.empty());
		vars_ = vars;
	}

	double DefinitionVisitor::strToNum(const std::string& numStr) const
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

	antlrcpp::Any DefinitionVisitor::visitCondition(hybridautomatonParser::ConditionContext* ctx)
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

	antlrcpp::Any DefinitionVisitor::visitPolytope(hybridautomatonParser::PolytopeContext* ctx)
	{
		if (!ctx->hpolytope()->isEmpty())
			return visit(ctx->hpolytope());
		return visit(ctx->vpolytope());
	}

	antlrcpp::Any DefinitionVisitor::visitHpolytope(hybridautomatonParser::HpolytopeContext* ctx)
	{
		Eigen::VectorXd offsets = visit(ctx->vector());
		Eigen::MatrixXd norms	= visit(ctx->matrix());
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

	antlrcpp::Any DefinitionVisitor::visitVpolytope(hybridautomatonParser::VpolytopeContext* ctx)
	{
		std::vector<Point> constraints;
		for (const auto& vectorCtx : ctx->vector())
		{
			Eigen::VectorXd coordinate = visit(vectorCtx);
			constraints.emplace_back(Point(coordinate));
		}
		return Polytope(constraints);
	}

	antlrcpp::Any DefinitionVisitor::visitMatrix(hybridautomatonParser::MatrixContext* ctx)
	{
		std::size_t		rowCnt	 = ctx->vector().size();
		Eigen::VectorXd frontVec = visit(ctx->vector(0));
		std::size_t		colCnt	 = static_cast<std::size_t>(frontVec.rows());
		Eigen::MatrixXd retMatrix(rowCnt, colCnt);
		for (std::size_t idx = 0; idx < rowCnt; ++idx)
		{
			Eigen::VectorXd curVector = visit(ctx->vector(idx));
			//DEBUG
			std::cout << curVector << std::endl;
			//DEBUG
			retMatrix.row(idx) = Eigen::RowVectorXd(curVector);
		}
		if (ctx->MAJOR_ORDER->getType() == hybridautomatonParser::KEY_COL_MAJOR_ORDER)
			retMatrix.transposeInPlace();
		return retMatrix;
	}

	antlrcpp::Any DefinitionVisitor::visitVector(hybridautomatonParser::VectorContext* ctx)
	{
		Eigen::VectorXd retVec(ctx->const_expression().size());
		std::size_t		numIdx = 0;
		ItemVisitor		itemVisitor;
		for (const auto& constExpCtx : ctx->const_expression())
		{
			double value   = itemVisitor.visit(constExpCtx);
			retVec(numIdx) = value;
			numIdx++;
		}
		return retVec;
	}

	antlrcpp::Any DefinitionVisitor::visitIntervalhull(hybridautomatonParser::IntervalhullContext* ctx)
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

	antlrcpp::Any DefinitionVisitor::visitInterval(hybridautomatonParser::IntervalContext* ctx)
	{
		std::size_t commaIndex	  = ctx->COMMA()->getSymbol()->getStartIndex();
		std::size_t lowerValIndex = ctx->const_expression(0)->getStart()->getStartIndex();
		std::size_t upperValIndex = ctx->const_expression(1)->getStart()->getStartIndex();
		assert(lowerValIndex < commaIndex && commaIndex < upperValIndex);
		ItemVisitor itemVisitor;
		double		lowerConstraint = itemVisitor.visit(ctx->const_expression(0));
		double		upperConstraint = itemVisitor.visit(ctx->const_expression(1));
		if (!std::isinf(lowerConstraint) && !std::isinf(upperConstraint))
			assert(lowerConstraint <= upperConstraint);
		return capd::interval(lowerConstraint, upperConstraint);
	}
} // namespace irafhy