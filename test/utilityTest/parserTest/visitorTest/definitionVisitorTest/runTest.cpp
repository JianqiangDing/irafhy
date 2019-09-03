#include <gtest/gtest.h>
#include <capd/capdlib.h>
#include <vector>
#include <fstream>
#include <boost/filesystem.hpp>
#include <irafhy/representation/formal/basic/condition.h>
#include <irafhy/utility/parser/visitor/definitionVisitor.h>

class runDefinitionVisitorTest : public ::testing::Test
{
protected:
	void SetUp() override
	{
		std::size_t startPos = rootPath.find("IRafhy");
		if (startPos == std::string::npos)
			startPos = rootPath.find("irafhy");
		rootPath		 = rootPath.substr(0, startPos + 6);
		conditionPath	= rootPath + conditionPath;
		hpolytopePath	= rootPath + hpolytopePath;
		vpolytopePath	= rootPath + vpolytopePath;
		matrixPath		 = rootPath + matrixPath;
		vectorPath		 = rootPath + vectorPath;
		intervalHullPath = rootPath + intervalHullPath;
		intervalPath	 = rootPath + intervalPath;
		conditionIfstream.open(conditionPath);
		hpolytopeIfstream.open(hpolytopePath);
		vpolytopeIfstream.open(vpolytopePath);
		matrixIfstream.open(matrixPath);
		vectorIfstream.open(vectorPath);
		intervalHullIfstream.open(intervalHullPath);
		intervalIfstream.open(intervalPath);
	}
	void TearDown() override
	{
		rootPath.clear();
		conditionPath.clear();
		hpolytopePath.clear();
		vpolytopePath.clear();
		matrixPath.clear();
		vectorPath.clear();
		intervalHullPath.clear();
		intervalPath.clear();
	}
	std::string   rootPath		   = boost::filesystem::current_path().string();
	std::string   conditionPath	= "/resource/script/condition.expr";
	std::string   hpolytopePath	= "/resource/script/hpolytope.expr";
	std::string   vpolytopePath	= "/resource/script/vpolytope.expr";
	std::string   matrixPath	   = "/resource/script/matrix.expr";
	std::string   vectorPath	   = "/resource/script/vector.expr";
	std::string   intervalHullPath = "/resource/script/intervalHull.expr";
	std::string   intervalPath	 = "/resource/script/interval.expr";
	std::ifstream conditionIfstream;
	std::ifstream hpolytopeIfstream;
	std::ifstream vpolytopeIfstream;
	std::ifstream matrixIfstream;
	std::ifstream vectorIfstream;
	std::ifstream intervalHullIfstream;
	std::ifstream intervalIfstream;
};

TEST_F(runDefinitionVisitorTest, runDefinitionVisitorTest_condition_Test)
{
	//TODO
}

TEST_F(runDefinitionVisitorTest, runDefinitionVisitorTests_hpolytope_Test)
{
	antlr4::ANTLRInputStream				 hpolytopeAntlrInputStream(this->hpolytopeIfstream);
	hybridautomatonLexer					 hpolytopeLexer(&hpolytopeAntlrInputStream);
	antlr4::CommonTokenStream				 hpolytopeCommonTokenStream(&hpolytopeLexer);
	hybridautomatonParser					 hpolytopeParser(&hpolytopeCommonTokenStream);
	hybridautomatonParser::HpolytopeContext* hpolytopeContext = hpolytopeParser.hpolytope();
	irafhy::DefinitionVisitor				 definitionVisitor;
	irafhy::Polytope						 polytope = definitionVisitor.visit(hpolytopeContext);
	std::cout << polytope << std::endl;
}

TEST_F(runDefinitionVisitorTest, runDefinitionVisitorTests_vpolytope_Test)
{
	antlr4::ANTLRInputStream				 vpolytopeAntlrInputStream(this->vpolytopeIfstream);
	hybridautomatonLexer					 vpolytopeLexer(&vpolytopeAntlrInputStream);
	antlr4::CommonTokenStream				 vpolytopeCommonTokenStream(&vpolytopeLexer);
	hybridautomatonParser					 vpolytopeParser(&vpolytopeCommonTokenStream);
	hybridautomatonParser::VpolytopeContext* vpolytopeContext = vpolytopeParser.vpolytope();
	irafhy::DefinitionVisitor				 definitionVisitor;
	irafhy::Polytope						 polytope = definitionVisitor.visit(vpolytopeContext);
	std::cout << polytope << std::endl;
}

TEST_F(runDefinitionVisitorTest, runDefinitionVisitorTests_matrix_Test)
{
	antlr4::ANTLRInputStream			  matrixAntlrInputStream(this->matrixIfstream);
	hybridautomatonLexer				  matrixLexer(&matrixAntlrInputStream);
	antlr4::CommonTokenStream			  matrixCommonTokenStream(&matrixLexer);
	hybridautomatonParser				  matrixParser(&matrixCommonTokenStream);
	hybridautomatonParser::MatrixContext* matrixContext = matrixParser.matrix();
	irafhy::DefinitionVisitor			  definitionVisitor;
	Eigen::MatrixXd						  matrix = definitionVisitor.visit(matrixContext);
	std::cout << matrix << std::endl;
}

TEST_F(runDefinitionVisitorTest, runDefinitionVisitorTests_vector_Test)
{
	antlr4::ANTLRInputStream			  vectorAntlrInputStream(this->vectorIfstream);
	hybridautomatonLexer				  vectorLexer(&vectorAntlrInputStream);
	antlr4::CommonTokenStream			  vectorCommonTokenStream(&vectorLexer);
	hybridautomatonParser				  vectorParser(&vectorCommonTokenStream);
	hybridautomatonParser::VectorContext* vectorContext = vectorParser.vector();
	irafhy::DefinitionVisitor			  definitionVisitor;
	Eigen::VectorXd						  vector = definitionVisitor.visit(vectorContext);
	std::cout << vector << std::endl;
}

TEST_F(runDefinitionVisitorTest, runDefinitionVisitorTests_intervalHull_Test)
{
	antlr4::ANTLRInputStream					intervalHullAntlrInputStream(this->intervalHullIfstream);
	hybridautomatonLexer						intervalHullLexer(&intervalHullAntlrInputStream);
	antlr4::CommonTokenStream					intervalHullCommonTokenStream(&intervalHullLexer);
	hybridautomatonParser						intervalHullParser(&intervalHullCommonTokenStream);
	hybridautomatonParser::IntervalhullContext* intervalhullContext = intervalHullParser.intervalhull();
	irafhy::DefinitionVisitor					definitionVisitor;
	irafhy::IntervalHull						intervalHull = definitionVisitor.visit(intervalhullContext);
	std::cout << intervalHull << std::endl;
}

TEST_F(runDefinitionVisitorTest, runDefinitionVisitorTests_interval_Test)
{
	antlr4::ANTLRInputStream				intervalAntlrInputStream(this->intervalIfstream);
	hybridautomatonLexer					intervalLexer(&intervalAntlrInputStream);
	antlr4::CommonTokenStream				intervalCommonTokenStream(&intervalLexer);
	hybridautomatonParser					intervalParser(&intervalCommonTokenStream);
	hybridautomatonParser::IntervalContext* intervalContext = intervalParser.interval();
	irafhy::DefinitionVisitor				definitionVisitor;
	capd::interval							interval = definitionVisitor.visit(intervalContext);
	std::cout << interval << std::endl;
}