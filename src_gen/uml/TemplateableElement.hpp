//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TEMPLATEABLEELEMENT_HPP
#define UML_TEMPLATEABLEELEMENT_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#include <string>
#include <map>
#include <vector>
#include "SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace uml 
{
	class Comment;
}

namespace ecore 
{
	class EAnnotation;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class ParameterableElement;
}

namespace uml 
{
	class TemplateBinding;
}

namespace uml 
{
	class TemplateSignature;
}

// base class includes
#include "Element.hpp"

// enum includes


//*********************************
namespace uml 
{
	/*!
	 A TemplateableElement is an Element that can optionally be defined as a template and bound to other templates.
	<p>From package UML::CommonStructure.</p> */
	class TemplateableElement:virtual public Element	{
		public:
 			TemplateableElement(const TemplateableElement &) {}
			TemplateableElement& operator=(TemplateableElement const&) = delete;
	
		protected:
			TemplateableElement(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~TemplateableElement() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The query isTemplate() returns whether this TemplateableElement is actually a template.
			result = (ownedTemplateSignature <> null)
			<p>From package UML::CommonStructure.</p> */ 
			virtual bool
			 isTemplate()  = 0;
			
			/*!
			 The query parameterableElements() returns the set of ParameterableElements that may be used as the parameteredElements for a TemplateParameter of this TemplateableElement. By default, this set includes all the ownedElements. Subclasses may override this operation if they choose to restrict the set of ParameterableElements.
			result = (self.allOwnedElements()->select(oclIsKindOf(ParameterableElement)).oclAsType(ParameterableElement)->asSet())
			<p>From package UML::CommonStructure.</p> */ 
			virtual std::shared_ptr<Bag<uml::ParameterableElement> >
			 parameterableElements()  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The optional TemplateBindings from this TemplateableElement to one or more templates.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Subset<uml::TemplateBinding, uml::Element > >
			 getTemplateBinding() const = 0;
			
			/*!
			 The optional TemplateSignature specifying the formal TemplateParameters for this TemplateableElement. If a TemplateableElement has a TemplateSignature, then it is a template.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::TemplateSignature > getOwnedTemplateSignature() const = 0;
			
			/*!
			 The optional TemplateSignature specifying the formal TemplateParameters for this TemplateableElement. If a TemplateableElement has a TemplateSignature, then it is a template.
			<p>From package UML::CommonStructure.</p> */
			virtual void setOwnedTemplateSignature(std::shared_ptr<uml::TemplateSignature> _ownedTemplateSignature_ownedTemplateSignature) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The optional TemplateBindings from this TemplateableElement to one or more templates.
			<p>From package UML::CommonStructure.</p> */
					std::shared_ptr<Subset<uml::TemplateBinding, uml::Element > >
			 m_templateBinding;
			/*!
			 The optional TemplateSignature specifying the formal TemplateParameters for this TemplateableElement. If a TemplateableElement has a TemplateSignature, then it is a template.
			<p>From package UML::CommonStructure.</p> */
			std::shared_ptr<uml::TemplateSignature > m_ownedTemplateSignature;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getOwnedElement() const = 0; 
	};

}
#endif /* end of include guard: UML_TEMPLATEABLEELEMENT_HPP */

