//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_PROTOCOLCONFORMANCEPROTOCOLCONFORMANCEIMPL_HPP
#define UML_PROTOCOLCONFORMANCEPROTOCOLCONFORMANCEIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../ProtocolConformance.hpp"

#include "impl/DirectedRelationshipImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class ProtocolConformanceImpl :virtual public DirectedRelationshipImpl, virtual public ProtocolConformance 
	{
		public: 
			ProtocolConformanceImpl(const ProtocolConformanceImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ProtocolConformanceImpl& operator=(ProtocolConformanceImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ProtocolConformanceImpl();

		public:
			//destructor
			virtual ~ProtocolConformanceImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Specifies the ProtocolStateMachine to which the specific ProtocolStateMachine conforms.
			<p>From package UML::StateMachines.</p> */
			virtual std::shared_ptr<uml::ProtocolStateMachine > getGeneralMachine() const ;
			
			/*!
			 Specifies the ProtocolStateMachine to which the specific ProtocolStateMachine conforms.
			<p>From package UML::StateMachines.</p> */
			virtual void setGeneralMachine(std::shared_ptr<uml::ProtocolStateMachine> _generalMachine_generalMachine) ;
			/*!
			 Specifies the ProtocolStateMachine which conforms to the general ProtocolStateMachine.
			<p>From package UML::StateMachines.</p> */
			virtual std::shared_ptr<uml::ProtocolStateMachine > getSpecificMachine() const ;
			
			/*!
			 Specifies the ProtocolStateMachine which conforms to the general ProtocolStateMachine.
			<p>From package UML::StateMachines.</p> */
			virtual void setSpecificMachine(std::shared_ptr<uml::ProtocolStateMachine> _specificMachine_specificMachine) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getRelatedElement() const ;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<SubsetUnion<uml::Element, uml::Element > >
			 getTarget() const ;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<SubsetUnion<uml::Element, uml::Element > >
			 getSource() const ;/*!
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
#endif /* end of include guard: UML_PROTOCOLCONFORMANCEPROTOCOLCONFORMANCEIMPL_HPP */

