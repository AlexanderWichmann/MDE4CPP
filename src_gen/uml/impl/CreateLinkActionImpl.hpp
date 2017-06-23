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

#include "SubsetUnion.hpp"



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
			virtual bool
			 association_not_abstract(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
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
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual 		std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element > >
			 getInput() const ;/*!
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
#endif /* end of include guard: UML_CREATELINKACTIONCREATELINKACTIONIMPL_HPP */

