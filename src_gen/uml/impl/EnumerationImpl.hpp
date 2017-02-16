//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ENUMERATIONENUMERATIONIMPL_HPP
#define UML_ENUMERATIONENUMERATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../Enumeration.hpp"

#include "impl/DataTypeImpl.hpp"


//*********************************
namespace uml 
{
	class EnumerationImpl :virtual public DataTypeImpl, virtual public Enumeration
	{
		public: 
			EnumerationImpl(const EnumerationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			EnumerationImpl& operator=(EnumerationImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			EnumerationImpl();

		public:
			//destructor
			virtual ~EnumerationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 ownedAttribute->forAll(isReadOnly) */ 
			virtual bool immutable(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The ordered set of literals owned by this Enumeration.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::vector<uml::EnumerationLiteral * > *  getOwnedLiteral() const ;
			
							
			
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
			 All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::vector<uml::Property * > *  getAttribute() const ;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::NamedElement * > *  getMember() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::Namespace *  getNamespace() const ;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::vector<uml::Feature * > *  getFeature() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::vector<uml::RedefinableElement * > *  getRedefinedElement() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::NamedElement * > *  getOwnedMember() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual ecore::EClass* eStaticClass() const;
	};
}
#endif /* end of include guard: UML_ENUMERATIONENUMERATIONIMPL_HPP */

