#include <irafhy/representation/geometric/intervalHull.h>
#include <irafhy/representation/geometric/polytope.h>
#include <irafhy/representation/formal/basic/condition.h>
#include <irafhy/utility/parser/visitor/definitionVisitor.h>
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
		std::size_t		rowCnt   = ctx->vector().size();
		Eigen::VectorXd frontVec = visit(ctx->vector(0));
		std::size_t		colCnt   = static_cast<std::size_t>(frontVec.rows());
		Eigen::MatrixXd retMatrix(rowCnt, colCnt);
		for (std::size_t idx = 0; idx < rowCnt; ++idx)
		{
			Eigen::VectorXd curVector = visit(ctx->vector(idx));
			retMatrix.row(idx)		  = curVector;
		}
		if (ctx->MAJOR_ORDER->getType() == hybridautomatonParser::KEY_COL_MAJOR_ORDER)
			retMatrix.transposeInPlace();
		return retMatrix;
	}

	antlrcpp::Any DefinitionVisitor::visitVector(hybridautomatonParser::VectorContext* ctx)
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
				if (thisOPCtx->getType() == hybridautomatonParser::MINUS)
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
		std::size_t lowerValIndex(0), upperValIndex(0), lowerOpIndex(0), upperOpIndex(0);
		std::size_t commaIndex = ctx->COMMA()->getSymbol()->getStartIndex();
		double		lowerConstraint(0.0), upperConstraint(0.0);
		for (const auto& val : ctx->VAL)
		{
			std::size_t thisValIndex = val->getStartIndex();
			if (thisValIndex < commaIndex)
			{
				lowerValIndex = thisValIndex;
				if (val->getType() == hybridautomatonParser::KEY_INFINITY)
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
				if (val->getType() == hybridautomatonParser::KEY_INFINITY)
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
			if (thisOpIndex < commaIndex && op->getType() == hybridautomatonParser::MINUS
				&& !std::isinf(lowerConstraint))
			{
				lowerOpIndex = thisOpIndex;
				assert(lowerOpIndex < lowerValIndex);
				lowerConstraint *= double(-1);
			}
			else if (commaIndex < thisOpIndex && op->getType() == hybridautomatonParser::MINUS
					 && !std::isinf(upperConstraint))
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
} // namespace irafhy