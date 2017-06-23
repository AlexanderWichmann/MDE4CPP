//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CLEARVARIABLEACTIONCLEARVARIABLEACTIONIMPL_HPP
#define UML_CLEARVARIABLEACTIONCLEARVARIABLEACTIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../ClearVariableAction.hpp"

#include "impl/VariableActionImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class ClearVariableActionImpl :virtual public VariableActionImpl, virtual public ClearVariableAction 
	{
		public: 
			ClearVariableActionImpl(const ClearVariableActionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ClearVariableActionImpl& operator=(ClearVariableActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ClearVariableActionImpl();

		public:
			//destructor
			virtual ~ClearVariableActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual 		std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const ;/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual 		std::shared_ptr<Union<uml::ActivityGroup> > getInGroup() const ;/*!
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
#endif /* end of include guard: UML_CLEARVARIABLEACTIONCLEARVARIABLEACTIONIMPL_HPP */

