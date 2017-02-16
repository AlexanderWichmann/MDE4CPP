//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_PSEUDOSTATEPSEUDOSTATEIMPL_HPP
#define UML_PSEUDOSTATEPSEUDOSTATEIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../Pseudostate.hpp"

#include "impl/VertexImpl.hpp"


//*********************************
namespace uml 
{
	class PseudostateImpl :virtual public VertexImpl, virtual public Pseudostate
	{
		public: 
			PseudostateImpl(const PseudostateImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			PseudostateImpl& operator=(PseudostateImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			PseudostateImpl();

		public:
			//destructor
			virtual ~PseudostateImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 All transitions outgoing a fork vertex must target states in different regions of an orthogonal state.
			(kind = PseudostateKind::fork) implies
			
			-- for any pair of outgoing transitions there exists an orthogonal state which contains the targets of these transitions 
			-- such that these targets belong to different regions of that orthogonal state 
			
			outgoing->forAll(t1:Transition, t2:Transition | let contState:State = containingStateMachine().LCAState(t1.target, t2.target) in
				((contState <> null) and (contState.region
					->exists(r1:Region, r2: Region | (r1 <> r2) and t1.target.isContainedInRegion(r1) and t2.target.isContainedInRegion(r2))))) */ 
			virtual bool transitions_outgoing(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 In a complete statemachine, a choice Vertex must have at least one incoming and one outgoing Transition.
			(kind = PseudostateKind::choice) implies (incoming->size() >= 1 and outgoing->size() >= 1) */ 
			virtual bool choice_vertex(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The outgoing Transition from an initial vertex may have a behavior, but not a trigger or a guard.
			(kind = PseudostateKind::initial) implies (outgoing.guard = null and outgoing.trigger->isEmpty()) */ 
			virtual bool outgoing_from_initial(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 In a complete StateMachine, a join Vertex must have at least two incoming Transitions and exactly one outgoing Transition.
			(kind = PseudostateKind::join) implies (outgoing->size() = 1 and incoming->size() >= 2) */ 
			virtual bool join_vertex(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 In a complete StateMachine, a junction Vertex must have at least one incoming and one outgoing Transition.
			(kind = PseudostateKind::junction) implies (incoming->size() >= 1 and outgoing->size() >= 1) */ 
			virtual bool junction_vertex(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 History Vertices can have at most one outgoing Transition.
			((kind = PseudostateKind::deepHistory) or (kind = PseudostateKind::shallowHistory)) implies (outgoing->size() <= 1) */ 
			virtual bool history_vertices(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 An initial Vertex can have at most one outgoing Transition.
			(kind = PseudostateKind::initial) implies (outgoing->size() <= 1) */ 
			virtual bool initial_vertex(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 In a complete StateMachine, a fork Vertex must have at least two outgoing Transitions and exactly one incoming Transition.
			(kind = PseudostateKind::fork) implies (incoming->size() = 1 and outgoing->size() >= 2) */ 
			virtual bool fork_vertex(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 All Transitions incoming a join Vertex must originate in different Regions of an orthogonal State.
			(kind = PseudostateKind::join) implies
			
			-- for any pair of incoming transitions there exists an orthogonal state which contains the source vetices of these transitions 
			-- such that these source vertices belong to different regions of that orthogonal state 
			
			incoming->forAll(t1:Transition, t2:Transition | let contState:State = containingStateMachine().LCAState(t1.source, t2.source) in
				((contState <> null) and (contState.region
					->exists(r1:Region, r2: Region | (r1 <> r2) and t1.source.isContainedInRegion(r1) and t2.source.isContainedInRegion(r2))))) */ 
			virtual bool transitions_incoming(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Determines the precise type of the Pseudostate and can be one of: entryPoint, exitPoint, initial, deepHistory, shallowHistory, join, fork, junction, terminate or choice.
			<p>From package UML::StateMachines.</p> */ 
			virtual PseudostateKind getKind() const ;
			
			/*!
			 Determines the precise type of the Pseudostate and can be one of: entryPoint, exitPoint, initial, deepHistory, shallowHistory, join, fork, junction, terminate or choice.
			<p>From package UML::StateMachines.</p> */ 
			virtual void setKind (PseudostateKind _kind); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The State that owns this Pseudostate and in which it appears.
			<p>From package UML::StateMachines.</p> */
			virtual uml::State *  getState() const ;
			
			/*!
			 The State that owns this Pseudostate and in which it appears.
			<p>From package UML::StateMachines.</p> */
			virtual void setState(uml::State *  _state) ;
			
			/*!
			 The StateMachine in which this Pseudostate is defined. This only applies to Pseudostates of the kind entryPoint or exitPoint.
			<p>From package UML::StateMachines.</p> */
			virtual uml::StateMachine *  getStateMachine() const ;
			
			/*!
			 The StateMachine in which this Pseudostate is defined. This only applies to Pseudostates of the kind entryPoint or exitPoint.
			<p>From package UML::StateMachines.</p> */
			virtual void setStateMachine(uml::StateMachine *  _stateMachine) ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::Element *  getOwner() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::Namespace *  getNamespace() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual ecore::EClass* eStaticClass() const;
	};
}
#endif /* end of include guard: UML_PSEUDOSTATEPSEUDOSTATEIMPL_HPP */

