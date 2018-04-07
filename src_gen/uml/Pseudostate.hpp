//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_PSEUDOSTATE_HPP
#define UML_PSEUDOSTATE_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T, class ... U> class Subset;


namespace boost
{
	class any;
}

//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace uml
{
	class UmlFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Comment;
}

namespace uml 
{
	class Dependency;
}

namespace ecore 
{
	class EAnnotation;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class Region;
}

namespace uml 
{
	class State;
}

namespace uml 
{
	class StateMachine;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class Transition;
}

namespace uml 
{
	class Vertex;
}

// base class includes
#include "uml/Vertex.hpp"

// enum includes
#include "uml/PseudostateKind.hpp"

#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A Pseudostate is an abstraction that encompasses different types of transient Vertices in the StateMachine graph. A StateMachine instance never comes to rest in a Pseudostate, instead, it will exit and enter the Pseudostate within a single run-to-completion step.
	<p>From package UML::StateMachines.</p> */
	class Pseudostate:virtual public Vertex
	{
		public:
 			Pseudostate(const Pseudostate &) {}
			Pseudostate& operator=(Pseudostate const&) = delete;

		protected:
			Pseudostate(){}


			//Additional constructors for the containments back reference

			Pseudostate(std::weak_ptr<uml::Region > par_container);

			//Additional constructors for the containments back reference

			Pseudostate(std::weak_ptr<uml::Namespace > par_namespace);

			//Additional constructors for the containments back reference

			Pseudostate(std::weak_ptr<uml::Element > par_owner);

			//Additional constructors for the containments back reference

			Pseudostate(std::weak_ptr<uml::State > par_state);

			//Additional constructors for the containments back reference

			Pseudostate(std::weak_ptr<uml::StateMachine > par_stateMachine);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Pseudostate() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 In a complete statemachine, a choice Vertex must have at least one incoming and one outgoing Transition.
			(kind = PseudostateKind::choice) implies (incoming->size() >= 1 and outgoing->size() >= 1) */ 
			virtual bool choice_vertex(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 In a complete StateMachine, a fork Vertex must have at least two outgoing Transitions and exactly one incoming Transition.
			(kind = PseudostateKind::fork) implies (incoming->size() = 1 and outgoing->size() >= 2) */ 
			virtual bool fork_vertex(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 History Vertices can have at most one outgoing Transition.
			((kind = PseudostateKind::deepHistory) or (kind = PseudostateKind::shallowHistory)) implies (outgoing->size() <= 1) */ 
			virtual bool history_vertices(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 An initial Vertex can have at most one outgoing Transition.
			(kind = PseudostateKind::initial) implies (outgoing->size() <= 1) */ 
			virtual bool initial_vertex(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 In a complete StateMachine, a join Vertex must have at least two incoming Transitions and exactly one outgoing Transition.
			(kind = PseudostateKind::join) implies (outgoing->size() = 1 and incoming->size() >= 2) */ 
			virtual bool join_vertex(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 In a complete StateMachine, a junction Vertex must have at least one incoming and one outgoing Transition.
			(kind = PseudostateKind::junction) implies (incoming->size() >= 1 and outgoing->size() >= 1) */ 
			virtual bool junction_vertex(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The outgoing Transition from an initial vertex may have a behavior, but not a trigger or a guard.
			(kind = PseudostateKind::initial) implies (outgoing.guard = null and outgoing.trigger->isEmpty()) */ 
			virtual bool outgoing_from_initial(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 All Transitions incoming a join Vertex must originate in different Regions of an orthogonal State.
			(kind = PseudostateKind::join) implies
			
			-- for any pair of incoming transitions there exists an orthogonal state which contains the source vetices of these transitions 
			-- such that these source vertices belong to different regions of that orthogonal state 
			
			incoming->forAll(t1:Transition, t2:Transition | let contState:State = containingStateMachine().LCAState(t1.source, t2.source) in
				((contState <> null) and (contState.region
					->exists(r1:Region, r2: Region | (r1 <> r2) and t1.source.isContainedInRegion(r1) and t2.source.isContainedInRegion(r2))))) */ 
			virtual bool transitions_incoming(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 All transitions outgoing a fork vertex must target states in different regions of an orthogonal state.
			(kind = PseudostateKind::fork) implies
			
			-- for any pair of outgoing transitions there exists an orthogonal state which contains the targets of these transitions 
			-- such that these targets belong to different regions of that orthogonal state 
			
			outgoing->forAll(t1:Transition, t2:Transition | let contState:State = containingStateMachine().LCAState(t1.target, t2.target) in
				((contState <> null) and (contState.region
					->exists(r1:Region, r2: Region | (r1 <> r2) and t1.target.isContainedInRegion(r1) and t2.target.isContainedInRegion(r2))))) */ 
			virtual bool transitions_outgoing(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Determines the precise type of the Pseudostate and can be one of: entryPoint, exitPoint, initial, deepHistory, shallowHistory, join, fork, junction, terminate or choice.
			<p>From package UML::StateMachines.</p> */ 
			virtual PseudostateKind getKind() const = 0;
			
			/*!
			 Determines the precise type of the Pseudostate and can be one of: entryPoint, exitPoint, initial, deepHistory, shallowHistory, join, fork, junction, terminate or choice.
			<p>From package UML::StateMachines.</p> */ 
			virtual void setKind (PseudostateKind _kind)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The State that owns this Pseudostate and in which it appears.
			<p>From package UML::StateMachines.</p> */
			virtual std::weak_ptr<uml::State > getState() const = 0;
			
			/*!
			 The State that owns this Pseudostate and in which it appears.
			<p>From package UML::StateMachines.</p> */
			virtual void setState(std::shared_ptr<uml::State> _state_state) = 0;
			/*!
			 The StateMachine in which this Pseudostate is defined. This only applies to Pseudostates of the kind entryPoint or exitPoint.
			<p>From package UML::StateMachines.</p> */
			virtual std::weak_ptr<uml::StateMachine > getStateMachine() const = 0;
			
			/*!
			 The StateMachine in which this Pseudostate is defined. This only applies to Pseudostates of the kind entryPoint or exitPoint.
			<p>From package UML::StateMachines.</p> */
			virtual void setStateMachine(std::shared_ptr<uml::StateMachine> _stateMachine_stateMachine) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 Determines the precise type of the Pseudostate and can be one of: entryPoint, exitPoint, initial, deepHistory, shallowHistory, join, fork, junction, terminate or choice.
			<p>From package UML::StateMachines.</p> */ 
			PseudostateKind m_kind = PseudostateKind::INITIAL;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The State that owns this Pseudostate and in which it appears.
			<p>From package UML::StateMachines.</p> */
			std::weak_ptr<uml::State > m_state;
			/*!
			 The StateMachine in which this Pseudostate is defined. This only applies to Pseudostates of the kind entryPoint or exitPoint.
			<p>From package UML::StateMachines.</p> */
			std::weak_ptr<uml::StateMachine > m_stateMachine;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_PSEUDOSTATE_HPP */
