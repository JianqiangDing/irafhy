#include <irafhy/settings.h>

namespace irafhy
{
	void Settings::help() const
	{
		std::cout << "==========================================================================" << std::endl;
		std::cout << "Settings:" << std::endl;
		std::cout << "duration: the duration of the simulation" << std::endl;
		std::cout << "startModelID: the NAME of the model which start the simulation" << std::endl;
		std::cout << "initCondition: the initial condition of the simulation" << std::endl;
		std::cout << "maxJump: the maximum depth of model level simulation" << std::endl;
		std::cout << "plot: plot the result or not" << std::endl;
		std::cout << "print: write out the result into files or not" << std::endl;
		std::cout << "==========================================================================" << std::endl;
	}

	void Settings::setDuration(const Time& duration)
	{
		assert(duration.range() >= 0);
		this->duration_ = duration;
	}

	void Settings::setStep(double step)
	{
		assert(step > 0);
		step_ = step;
	}

	void Settings::setPlot(bool plot) { this->plot_ = plot; }

	void Settings::setMaxJump(long int maxJump)
	{
		assert(maxJump >= 1);
		this->maxJump_ = maxJump;
	}

	void Settings::setPrint(bool print) { this->print_ = print; }

	void Settings::setAnalysis(ANALYSIS analysis) { this->analysis_ = analysis; }

	void Settings::setGeometry(irafhy::GEOMETRY geometry) { this->geometry_ = geometry; }

	void Settings::setStartModelID(const std::string& startModelID)
	{
		assert(!startModelID.empty());
		this->startModelID_ = startModelID;
	}

	void Settings::setInitCondition(const Condition& initCondition)
	{
		assert(!initCondition.empty());
		this->initCondition_ = initCondition;
	}

	Time Settings::duration() const
	{
		assert(this->duration_.range() >= 0);
		return this->duration_;
	}

	double Settings::step() const
	{
		assert(step_ > 0);
		return step_;
	}

	long int Settings::maxJump() const
	{
		assert(this->maxJump_ >= 1);
		return this->maxJump_;
	}

	bool Settings::print() const { return this->print_; }

	bool Settings::plot() const { return this->plot_; }

	ANALYSIS Settings::analysis() const { return this->analysis_; }

	GEOMETRY Settings::geometry() const { return geometry_; }

	std::string Settings::startModelID() const
	{
		assert(!this->startModelID_.empty());
		return this->startModelID_;
	}

	Condition Settings::initCondition() const
	{
		assert(!this->initCondition_.empty());
		return this->initCondition_;
	}

	std::ostream& operator<<(std::ostream& out, const Settings& rhs)
	{
		out << "duration: " << rhs.duration_ << std::endl;
		out << "step size: " << rhs.step_ << std::endl;
		out << "max jumps: " << rhs.maxJump_ << std::endl;
		out << "plot: " << rhs.plot_ << std::endl;
		out << "print: " << rhs.print_ << std::endl;
		out << "analysis: " << rhs.analysis_ << std::endl;
		out << "start model id: " << rhs.startModelID_ << std::endl;
		out << "initial condition: " << rhs.initCondition_ << std::endl;
		return out;
	}
} // namespace irafhy