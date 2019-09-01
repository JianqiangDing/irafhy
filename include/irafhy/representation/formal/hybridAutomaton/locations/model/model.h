#ifndef REPRESENTATION_FORMAL_HYBRID_AUTOMATON_LOCATIONS_MODEL_MODEL_H
#define REPRESENTATION_FORMAL_HYBRID_AUTOMATON_LOCATIONS_MODEL_MODEL_H

#include <memory>
#include <irafhy/settings.h>
#include <irafhy/representation/formal/hybridAutomaton/locations/model/state.h>
#include <irafhy/representation/formal/basic/system.h>
#include <irafhy/utility/definition/metaStructure.h>

namespace irafhy
{
	template <typename Analyser>
	class Jump;

	template <typename Analyser>
	class Model : public Analyser, public std::enable_shared_from_this<Model<Analyser>>
	{
	private:
		std::string					id_;
		System						flows_;
		Condition					invariantCondition_;
		std::vector<Jump<Analyser>> jumps_;

	private:
		capd::C0Rect2Set compute(const Time&			 duration,
								 const System&			 system,
								 const capd::C0Rect2Set& initCondition,
								 const Settings&		 settings) const;

	public:
		Model() = default;
		Model(const std::string& id, const System& flows, const Condition& invariantCondition);
		~Model() = default;
		void							   setJump(const Jump<Analyser>& jump);
		std::shared_ptr<Model<Analyser>>   getModel();
		std::string						   id() const;
		System							   flows() const;
		Condition						   invariantCondition() const;
		const std::vector<Jump<Analyser>>& jumps() const;
		bool							   operator<(const Model<Analyser>& rhs) const;
		Condition						   simulate(const Time&				duration,
													long int&				doneJumps,
													const capd::C0Rect2Set& initCondition,
													const Settings&			settings,
													State<Analyser>&		nextState) const;
	};
	template <typename Analyser>
	std::ostream& operator<<(std::ostream& out, const Model<Analyser>& rhs);
} // namespace irafhy
#ifndef USE_AS_STATIC
#include "../../../../../../../src/representation/formal/hybridAutomaton/locations/model/model.tpp"
#endif
#endif //REPRESENTATION_FORMAL_HYBRID_AUTOMATON_LOCATIONS_MODEL_MODEL_H