//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_BEHAVIOREXECUTIONSPECIFICATIONBEHAVIOREXECUTIONSPECIFICATIONIMPL_HPP
#define UML_BEHAVIOREXECUTIONSPECIFICATIONBEHAVIOREXECUTIONSPECIFICATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../BehaviorExecutionSpecification.hpp"

#include "impl/ExecutionSpecificationImpl.hpp"


//*********************************
namespace uml 
{
	class BehaviorExecutionSpecificationImpl :virtual public ExecutionSpecificationImpl, virtual public BehaviorExecutionSpecification
	{
		public: 
			BehaviorExecutionSpecificationImpl(const BehaviorExecutionSpecificationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			BehaviorExecutionSpecificationImpl& operator=(BehaviorExecutionSpecificationImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			BehaviorExecutionSpecificationImpl();

		public:
			//destructor
			virtual ~BehaviorExecutionSpecificationImpl();
			
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
			 Behavior whose execution is occurring.
			<p>From package UML::Interactions.</p> */
			virtual uml::Behavior *  getBehavior() const ;
			
			/*!
			 Behavior whose execution is occurring.
			<p>From package UML::Interactions.</p> */
			virtual void setBehavior(uml::Behavior *  _behavior) ;
			
							
			
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
#endif /* end of include guard: UML_BEHAVIOREXECUTIONSPECIFICATIONBEHAVIOREXECUTIONSPECIFICATIONIMPL_HPP */

