//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ACTIONEXECUTIONSPECIFICATIONACTIONEXECUTIONSPECIFICATIONIMPL_HPP
#define UML_ACTIONEXECUTIONSPECIFICATIONACTIONEXECUTIONSPECIFICATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../ActionExecutionSpecification.hpp"

#include "impl/ExecutionSpecificationImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class ActionExecutionSpecificationImpl :virtual public ExecutionSpecificationImpl, virtual public ActionExecutionSpecification 
	{
		public: 
			ActionExecutionSpecificationImpl(const ActionExecutionSpecificationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ActionExecutionSpecificationImpl& operator=(ActionExecutionSpecificationImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ActionExecutionSpecificationImpl();

		public:
			//destructor
			virtual ~ActionExecutionSpecificationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The Action referenced by the ActionExecutionSpecification must be owned by the Interaction owning that ActionExecutionSpecification.
			(enclosingInteraction->notEmpty() or enclosingOperand.combinedFragment->notEmpty()) and
			let parentInteraction : Set(Interaction) = enclosingInteraction.oclAsType(Interaction)->asSet()->union(
			enclosingOperand.combinedFragment->closure(enclosingOperand.combinedFragment)->
			collect(enclosingInteraction).oclAsType(Interaction)->asSet()) in
			(parentInteraction->size() = 1) and self.action.interaction->asSet() = parentInteraction */ 
			virtual bool
			 action_referenced(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Action whose execution is occurring.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<uml::Action > getAction() const ;
			
			/*!
			 Action whose execution is occurring.
			<p>From package UML::Interactions.</p> */
			virtual void setAction(std::shared_ptr<uml::Action> _action_action) ;
							
			
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
#endif /* end of include guard: UML_ACTIONEXECUTIONSPECIFICATIONACTIONEXECUTIONSPECIFICATIONIMPL_HPP */

