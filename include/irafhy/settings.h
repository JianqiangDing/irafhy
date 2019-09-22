#ifndef SETTINGS_H
#define SETTINGS_H

#include <irafhy/utility/definition/metaStructure.h>
#include <irafhy/utility/definition/enum.h>
#include <irafhy/representation/formal/basic/condition.h>
#include <vector>
#include <string>

namespace irafhy
{
	class Settings
	{
	protected:
		/**
		 * @brief duration of the simulation
		 */
		Time duration_ = Time(0.0, 0.0);
		/**
		 * @brief time step size of the iteration
		 */
		double step_ = -1.0;
		/**
		 * @brief max allowed jumps for the specified duration
		 */
		long int maxJump_ = 1;
		/**
		 * @brief plot the results or not
		 */
		bool plot_ = false;
		/**
		 * @brief print the results into files or not
		 */
		bool print_ = false;
		/**
		 * @brief forward or backward
		 */
		ANALYSIS analysis_ = ANALYSIS::FORWARD;
		//TODO order setting
		/**
		 * @brief id of the start mode
		 */
		std::string startModelID_ = std::string();
		/**
		 * @brief initial condition of the start mode
		 */
		Condition initCondition_ = Condition::Empty();
		/**
		 * @brief geometry objects using to hold the states
		 */
		GEOMETRY geometry_ = GEOMETRY::INTERVAL_HULL;

	public:
		/**
		 * @brief destructor
		 */
		virtual ~Settings() = default;
		/**
		 * @brief set the duration of the simulation with given information
		 * @param duration given duration setting
		 */
		virtual void setDuration(const Time& duration);
		/**
		 * @brief set the step size of the simulation
		 * @param step given step size setting
		 */
		virtual void setStep(double step);
		/**
		 * @brief set the max jumps
		 * @param maxJump given max jumps setting
		 */
		virtual void setMaxJump(long int maxJump);
		/**
		 * @brief set the plotting setting
		 * @param plot given plotting setting
		 */
		virtual void setPlot(bool plot);
		/**
		 * @brief set the print setting
		 * @param print given print setting
		 */
		virtual void setPrint(bool print);
		/**
		 * @brief set the analysis type
		 * @param analysis given setting about analysis
		 */
		virtual void setAnalysis(ANALYSIS analysis);
		/**
		 * @brief set the geometry object type used to hold states during computation
		 * @param geometry given geometry object setting
		 */
		virtual void setGeometry(GEOMETRY geometry);
		/**
		 * @brief set the id of the start mode
		 * @param startModelID given start mode
		 */
		virtual void setStartModelID(const std::string& startModelID);
		/**
		 * @brief set the initial condition of the start mode with given condition
		 * @param initCondition given initial condition
		 */
		virtual void setInitCondition(const Condition& initCondition);
		/**
		 * @brief get the duration of the simulation
		 * @return the duration of the simulation
		 */
		[[nodiscard]] virtual Time duration() const;
		/**
		 * @brief get the step size of the simulation
		 * @return step size
		 */
		[[nodiscard]] virtual double step() const;
		/**
		 * @brief get the max allowed jumps for the duration
		 * @return the max allowed jumps
		 */
		[[nodiscard]] virtual long int maxJump() const;
		/**
		 * @brief get the plotting setting of the simulation
		 * @return TRUE if allow to plot all results
		 */
		[[nodiscard]] virtual bool plot() const;
		/**
		 * @brief get the print setting of the simulation
		 * @return TRUE if allow to print all results into files
		 */
		[[nodiscard]] virtual bool print() const;
		/**
		 * @brief get the analysis type
		 * @return type of the analysis, forward or backward
		 */
		[[nodiscard]] virtual ANALYSIS analysis() const;
		/**
		 * @brief get the type of geometry object used to hold states
		 * @return type of the geometry object, interval hull or polytope and so on
		 */
		[[nodiscard]] virtual GEOMETRY geometry() const;
		/**
		 * @brief get the id of the start mode
		 * @return id of the start mode
		 */
		[[nodiscard]] virtual std::string startModelID() const;
		/**
		 * @brief get the initial condition of the start mode
		 * @return initial condition of the simulation
		 */
		[[nodiscard]] virtual Condition initCondition() const;
		/**
		 * @brief help function
		 */
		virtual void help() const;
		/**
		 * @brief out the right hand side settings to standard out stream
		 * @param out given out stream
		 * @param rhs right hand side settings
		 * @return resulting out stream
		 */
		friend std::ostream& operator<<(std::ostream& out, const Settings& rhs);
	};
} // namespace irafhy
#endif //SETTINGS_H