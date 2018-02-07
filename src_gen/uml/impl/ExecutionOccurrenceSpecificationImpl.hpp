//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_EXECUTIONOCCURRENCESPECIFICATIONEXECUTIONOCCURRENCESPECIFICATIONIMPL_HPP
#define UML_EXECUTIONOCCURRENCESPECIFICATIONEXECUTIONOCCURRENCESPECIFICATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

//*********************************
// generated Includes

//Model includes
#include "../ExecutionOccurrenceSpecification.hpp"

#include "uml/impl/OccurrenceSpecificationImpl.hpp"



//*********************************
namespace uml 
{
	class ExecutionOccurrenceSpecificationImpl :virtual public OccurrenceSpecificationImpl, virtual public ExecutionOccurrenceSpecification 
	{
		public: 
			ExecutionOccurrenceSpecificationImpl(const ExecutionOccurrenceSpecificationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ExecutionOccurrenceSpecificationImpl& operator=(ExecutionOccurrenceSpecificationImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ExecutionOccurrenceSpecificationImpl();

			//Additional constructors for the containments back reference
			ExecutionOccurrenceSpecificationImpl(std::weak_ptr<uml::Interaction > par_enclosingInteraction);


			//Additional constructors for the containments back reference
			ExecutionOccurrenceSpecificationImpl(std::weak_ptr<uml::InteractionOperand > par_enclosingOperand);


			//Additional constructors for the containments back reference
			ExecutionOccurrenceSpecificationImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ExecutionOccurrenceSpecificationImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~ExecutionOccurrenceSpecificationImpl();
			
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
			 References the execution specification describing the execution that is started or finished at this execution event.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<uml::ExecutionSpecification > getExecution() const ;
			
			/*!
			 References the execution specification describing the execution that is started or finished at this execution event.
			<p>From package UML::Interactions.</p> */
			virtual void setExecution(std::shared_ptr<uml::ExecutionSpecification> _execution_execution) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual void eSet(int featureID, boost::any newValue) ;

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_EXECUTIONOCCURRENCESPECIFICATIONEXECUTIONOCCURRENCESPECIFICATIONIMPL_HPP */

