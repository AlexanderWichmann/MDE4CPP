//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CREATELINKACTIONCREATELINKACTIONIMPL_HPP
#define UML_CREATELINKACTIONCREATELINKACTIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../CreateLinkAction.hpp"

#include "impl/WriteLinkActionImpl.hpp"


//*********************************
namespace uml 
{
	class CreateLinkActionImpl :virtual public WriteLinkActionImpl, virtual public CreateLinkAction
	{
		public: 
			CreateLinkActionImpl(const CreateLinkActionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			CreateLinkActionImpl& operator=(CreateLinkActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			CreateLinkActionImpl();

		public:
			//destructor
			virtual ~CreateLinkActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The Association cannot be an abstract Classifier.
			not self.association().isAbstract */ 
			virtual bool association_not_abstract(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			
			
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
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::vector<uml::ActivityGroup * > *  getInGroup() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::Element *  getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::vector<uml::RedefinableElement * > *  getRedefinedElement() const ;/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::vector<uml::InputPin * > *  getInput() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual ecore::EClass* eStaticClass() const;
	};
}
#endif /* end of include guard: UML_CREATELINKACTIONCREATELINKACTIONIMPL_HPP */

