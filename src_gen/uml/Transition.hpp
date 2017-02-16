//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TRANSITION_HPP
#define UML_TRANSITION_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#include <string>
#include <map>
#include <vector>
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace uml 
{
	class Behavior;
}

namespace uml 
{
	class Classifier;
}

namespace uml 
{
	class Comment;
}

namespace uml 
{
	class Constraint;
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
	class ElementImport;
}

namespace uml 
{
	class NamedElement;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class PackageImport;
}

namespace uml 
{
	class PackageableElement;
}

namespace uml 
{
	class RedefinableElement;
}

namespace uml 
{
	class Region;
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
	class Trigger;
}

namespace uml 
{
	class Vertex;
}

// base class includes
#include "Namespace.hpp"

#include "RedefinableElement.hpp"

// enum includes
#include "TransitionKind.hpp"

#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A Transition represents an arc between exactly one source Vertex and exactly one Target vertex (the source and targets may be the same Vertex). It may form part of a compound transition, which takes the StateMachine from one steady State configuration to another, representing the full response of the StateMachine to an occurrence of an Event that triggered it.
	<p>From package UML::StateMachines.</p> */
	class Transition:virtual public Namespace,virtual public RedefinableElement	{
		public:
 			Transition(const Transition &) {}
			Transition& operator=(Transition const&) = delete;
	
		protected:
			Transition(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~Transition() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 A Transition with kind external can source any Vertex except entry points.
			(kind = TransitionKind::external) implies
				not (source.oclIsKindOf(Pseudostate) and source.oclAsType(Pseudostate).kind = PseudostateKind::entryPoint) */ 
			virtual bool state_is_external(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 A join segment must not have Guards or Triggers.
			(target.oclIsKindOf(Pseudostate) and target.oclAsType(Pseudostate).kind = PseudostateKind::join) implies (guard = null and trigger->isEmpty()) */ 
			virtual bool join_segment_guards(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 A Transition with kind internal must have a State as its source, and its source and target must be equal.
			(kind = TransitionKind::internal) implies
					(source.oclIsKindOf (State) and source = target) */ 
			virtual bool state_is_internal(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 Transitions outgoing Pseudostates may not have a Trigger.
			source.oclIsKindOf(Pseudostate) and (source.oclAsType(Pseudostate).kind <> PseudostateKind::initial) implies trigger->isEmpty() */ 
			virtual bool outgoing_pseudostates(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 A join segment must always originate from a State.
			(target.oclIsKindOf(Pseudostate) and target.oclAsType(Pseudostate).kind = PseudostateKind::join) implies (source.oclIsKindOf(State)) */ 
			virtual bool join_segment_state(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 A fork segment must always target a State.
			(source.oclIsKindOf(Pseudostate) and  source.oclAsType(Pseudostate).kind = PseudostateKind::fork) implies (target.oclIsKindOf(State)) */ 
			virtual bool fork_segment_state(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 A Transition with kind local must have a composite State or an entry point as its source.
			(kind = TransitionKind::local) implies
					((source.oclIsKindOf (State) and source.oclAsType(State).isComposite) or
					(source.oclIsKindOf (Pseudostate) and source.oclAsType(Pseudostate).kind = PseudostateKind::entryPoint)) */ 
			virtual bool state_is_local(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 An initial Transition at the topmost level Region of a StateMachine that has no Trigger.
			(source.oclIsKindOf(Pseudostate) and container.stateMachine->notEmpty()) implies
				trigger->isEmpty() */ 
			virtual bool initial_transition(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 A fork segment must not have Guards or Triggers.
			(source.oclIsKindOf(Pseudostate) and source.oclAsType(Pseudostate).kind = PseudostateKind::fork) implies (guard = null and trigger->isEmpty()) */ 
			virtual bool fork_segment_guards(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 The query containingStateMachine() returns the StateMachine that contains the Transition either directly or transitively.
			result = (container.containingStateMachine())
			<p>From package UML::StateMachines.</p> */ 
			virtual uml::StateMachine *  containingStateMachine()  = 0;
			
			/*!
			 The redefinition context of a Transition is the nearest containing StateMachine.
			result = (let sm : StateMachine = containingStateMachine() in
			if sm._'context' = null or sm.general->notEmpty() then
			  sm
			else
			  sm._'context'
			endif)
			<p>From package UML::StateMachines.</p> */ 
			virtual uml::Classifier *  redefinitionContext()  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Indicates the precise type of the Transition.
			<p>From package UML::StateMachines.</p> */ 
			virtual TransitionKind getKind() const = 0;
			
			/*!
			 Indicates the precise type of the Transition.
			<p>From package UML::StateMachines.</p> */ 
			virtual void setKind (TransitionKind _kind)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Specifies an optional behavior to be performed when the Transition fires.
			<p>From package UML::StateMachines.</p> */
			virtual uml::Behavior *  getEffect() const = 0;
			
			/*!
			 Specifies an optional behavior to be performed when the Transition fires.
			<p>From package UML::StateMachines.</p> */
			virtual void setEffect(uml::Behavior *  _effect) = 0;
			
			/*!
			 A guard is a Constraint that provides a fine-grained control over the firing of the Transition. The guard is evaluated when an Event occurrence is dispatched by the StateMachine. If the guard is true at that time, the Transition may be enabled, otherwise, it is disabled. Guards should be pure expressions without side effects. Guard expressions with side effects are ill formed.
			<p>From package UML::StateMachines.</p> */
			virtual uml::Constraint *  getGuard() const = 0;
			
			/*!
			 A guard is a Constraint that provides a fine-grained control over the firing of the Transition. The guard is evaluated when an Event occurrence is dispatched by the StateMachine. If the guard is true at that time, the Transition may be enabled, otherwise, it is disabled. Guards should be pure expressions without side effects. Guard expressions with side effects are ill formed.
			<p>From package UML::StateMachines.</p> */
			virtual void setGuard(uml::Constraint *  _guard) = 0;
			
			/*!
			 The Transition that is redefined by this Transition.
			<p>From package UML::StateMachines.</p> */
			virtual uml::Transition *  getRedefinedTransition() const = 0;
			
			/*!
			 The Transition that is redefined by this Transition.
			<p>From package UML::StateMachines.</p> */
			virtual void setRedefinedTransition(uml::Transition *  _redefinedTransition) = 0;
			
			/*!
			 Designates the originating Vertex (State or Pseudostate) of the Transition.
			<p>From package UML::StateMachines.</p> */
			virtual uml::Vertex *  getSource() const = 0;
			
			/*!
			 Designates the originating Vertex (State or Pseudostate) of the Transition.
			<p>From package UML::StateMachines.</p> */
			virtual void setSource(uml::Vertex *  _source) = 0;
			
			/*!
			 Designates the target Vertex that is reached when the Transition is taken.
			<p>From package UML::StateMachines.</p> */
			virtual uml::Vertex *  getTarget() const = 0;
			
			/*!
			 Designates the target Vertex that is reached when the Transition is taken.
			<p>From package UML::StateMachines.</p> */
			virtual void setTarget(uml::Vertex *  _target) = 0;
			
			/*!
			 Specifies the Triggers that may fire the transition.
			<p>From package UML::StateMachines.</p> */
			virtual std::vector<uml::Trigger * > *  getTrigger() const = 0;
			
			/*!
			 Designates the Region that owns this Transition.
			<p>From package UML::StateMachines.</p> */
			virtual uml::Region *  getContainer() const = 0;
			
			/*!
			 Designates the Region that owns this Transition.
			<p>From package UML::StateMachines.</p> */
			virtual void setContainer(uml::Region *  _container) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 Indicates the precise type of the Transition.
			<p>From package UML::StateMachines.</p> */ 
			TransitionKind m_kind = TransitionKind::EXTERNAL ;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 Specifies an optional behavior to be performed when the Transition fires.
			<p>From package UML::StateMachines.</p> */
			uml::Behavior *  m_effect =  nullptr ;
			/*!
			 A guard is a Constraint that provides a fine-grained control over the firing of the Transition. The guard is evaluated when an Event occurrence is dispatched by the StateMachine. If the guard is true at that time, the Transition may be enabled, otherwise, it is disabled. Guards should be pure expressions without side effects. Guard expressions with side effects are ill formed.
			<p>From package UML::StateMachines.</p> */
			uml::Constraint *  m_guard =  nullptr ;
			/*!
			 The Transition that is redefined by this Transition.
			<p>From package UML::StateMachines.</p> */
			uml::Transition *  m_redefinedTransition =  nullptr ;
			/*!
			 Designates the originating Vertex (State or Pseudostate) of the Transition.
			<p>From package UML::StateMachines.</p> */
			uml::Vertex *  m_source =  nullptr ;
			/*!
			 Designates the target Vertex that is reached when the Transition is taken.
			<p>From package UML::StateMachines.</p> */
			uml::Vertex *  m_target =  nullptr ;
			/*!
			 Specifies the Triggers that may fire the transition.
			<p>From package UML::StateMachines.</p> */
			std::vector<uml::Trigger * > *  m_trigger =  nullptr ;
			/*!
			 Designates the Region that owns this Transition.
			<p>From package UML::StateMachines.</p> */
			uml::Region *  m_container =  nullptr ;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::Element *  getOwner() const = 0;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::Namespace *  getNamespace() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::vector<uml::RedefinableElement * > *  getRedefinedElement() const = 0;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::NamedElement * > *  getMember() const = 0;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::NamedElement * > *  getOwnedMember() const = 0; 
	};

}
#endif /* end of include guard: UML_TRANSITION_HPP */

