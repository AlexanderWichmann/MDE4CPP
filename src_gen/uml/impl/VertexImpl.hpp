//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_VERTEXVERTEXIMPL_HPP
#define UML_VERTEXVERTEXIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../Vertex.hpp"

#include "impl/NamedElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class VertexImpl :virtual public NamedElementImpl, virtual public Vertex 
	{
		public: 
			VertexImpl(const VertexImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			VertexImpl& operator=(VertexImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			VertexImpl();

		public:
			//destructor
			virtual ~VertexImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The operation containingStateMachine() returns the StateMachine in which this Vertex is defined.
			result = (if container <> null
			then
			-- the container is a region
			   container.containingStateMachine()
			else 
			   if (self.oclIsKindOf(Pseudostate)) and ((self.oclAsType(Pseudostate).kind = PseudostateKind::entryPoint) or (self.oclAsType(Pseudostate).kind = PseudostateKind::exitPoint)) then
			      self.oclAsType(Pseudostate).stateMachine
			   else 
			      if (self.oclIsKindOf(ConnectionPointReference)) then
			          self.oclAsType(ConnectionPointReference).state.containingStateMachine() -- no other valid cases possible
			      else 
			          null
			      endif
			   endif
			endif
			)
			<p>From package UML::StateMachines.</p> */ 
			virtual std::shared_ptr<uml::StateMachine> 
			 containingStateMachine()  ;
			
			/*!
			 Derivation for Vertex::/incoming.
			result = (Transition.allInstances()->select(target=self))
			<p>From package UML::StateMachines.</p> */ 
			virtual std::shared_ptr<Bag<uml::Transition> >
			 getIncomings()  ;
			
			/*!
			 Derivation for Vertex::/outgoing
			result = (Transition.allInstances()->select(source=self))
			<p>From package UML::StateMachines.</p> */ 
			virtual std::shared_ptr<Bag<uml::Transition> >
			 getOutgoings()  ;
			
			/*!
			 This utility operation returns true if the Vertex is contained in the State s (input argument).
			result = (if not s.isComposite() or container->isEmpty() then
				false
			else
				if container.state = s then 
					true
				else
					container.state.isContainedInState(s)
				endif
			endif)
			<p>From package UML::StateMachines.</p> */ 
			virtual bool
			 isContainedInState(std::shared_ptr<uml::State>  s)  ;
			
			/*!
			 This utility query returns true if the Vertex is contained in the Region r (input argument).
			result = (if (container = r) then
				true
			else
				if (r.state->isEmpty()) then
					false
				else
					container.state.isContainedInRegion(r)
				endif
			endif)
			<p>From package UML::StateMachines.</p> */ 
			virtual bool
			 isContainedInRegion(std::shared_ptr<uml::Region>  r)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Region that contains this Vertex.
			<p>From package UML::StateMachines.</p> */
			virtual std::shared_ptr<uml::Region > getContainer() const ;
			
			/*!
			 The Region that contains this Vertex.
			<p>From package UML::StateMachines.</p> */
			virtual void setContainer(std::shared_ptr<uml::Region> _container_container) ;
			/*!
			 Specifies the Transitions entering this Vertex.
			<p>From package UML::StateMachines.</p> */
			virtual 	std::shared_ptr< Bag<uml::Transition> >
			 getIncoming() const ;
			
			/*!
			 Specifies the Transitions departing from this Vertex.
			<p>From package UML::StateMachines.</p> */
			virtual 	std::shared_ptr< Bag<uml::Transition> >
			 getOutgoing() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element > getOwner() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_VERTEXVERTEXIMPL_HPP */

