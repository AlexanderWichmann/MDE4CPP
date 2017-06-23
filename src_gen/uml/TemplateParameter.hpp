//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TEMPLATEPARAMETER_HPP
#define UML_TEMPLATEPARAMETER_HPP

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
	class TemplateSignature;
}

// base class includes
#include "Element.hpp"

// enum includes


//*********************************
namespace uml 
{
	/*!
	 A TemplateParameter exposes a ParameterableElement as a formal parameter of a template.
	<p>From package UML::CommonStructure.</p> */
	class TemplateParameter:virtual public Element	{
		public:
 			TemplateParameter(const TemplateParameter &) {}
			TemplateParameter& operator=(TemplateParameter const&) = delete;
	
		protected:
			TemplateParameter(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~TemplateParameter() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The default must be compatible with the formal TemplateParameter.
			default <> null implies default.isCompatibleWith(parameteredElement) */ 
			virtual bool
			 must_be_compatible(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The ParameterableElement that is the default for this formal TemplateParameter.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::ParameterableElement > getDefault() const = 0;
			
			/*!
			 The ParameterableElement that is the default for this formal TemplateParameter.
			<p>From package UML::CommonStructure.</p> */
			virtual void setDefault(std::shared_ptr<uml::ParameterableElement> _default_default) = 0;
			/*!
			 The ParameterableElement that is owned by this TemplateParameter for the purpose of providing a default.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::ParameterableElement > getOwnedDefault() const = 0;
			
			/*!
			 The ParameterableElement that is owned by this TemplateParameter for the purpose of providing a default.
			<p>From package UML::CommonStructure.</p> */
			virtual void setOwnedDefault(std::shared_ptr<uml::ParameterableElement> _ownedDefault_ownedDefault) = 0;
			/*!
			 The ParameterableElement exposed by this TemplateParameter.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::ParameterableElement > getParameteredElement() const = 0;
			
			/*!
			 The ParameterableElement exposed by this TemplateParameter.
			<p>From package UML::CommonStructure.</p> */
			virtual void setParameteredElement(std::shared_ptr<uml::ParameterableElement> _parameteredElement_parameteredElement) = 0;
			/*!
			 The TemplateSignature that owns this TemplateParameter.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::TemplateSignature > getSignature() const = 0;
			
			/*!
			 The TemplateSignature that owns this TemplateParameter.
			<p>From package UML::CommonStructure.</p> */
			virtual void setSignature(std::shared_ptr<uml::TemplateSignature> _signature_signature) = 0;
			/*!
			 The ParameterableElement that is owned by this TemplateParameter for the purpose of exposing it as the parameteredElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::ParameterableElement > getOwnedParameteredElement() const = 0;
			
			/*!
			 The ParameterableElement that is owned by this TemplateParameter for the purpose of exposing it as the parameteredElement.
			<p>From package UML::CommonStructure.</p> */
			virtual void setOwnedParameteredElement(std::shared_ptr<uml::ParameterableElement> _ownedParameteredElement_ownedParameteredElement) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The ParameterableElement that is the default for this formal TemplateParameter.
			<p>From package UML::CommonStructure.</p> */
			std::shared_ptr<uml::ParameterableElement > m_default;
			/*!
			 The ParameterableElement that is owned by this TemplateParameter for the purpose of providing a default.
			<p>From package UML::CommonStructure.</p> */
			std::shared_ptr<uml::ParameterableElement > m_ownedDefault;
			/*!
			 The ParameterableElement exposed by this TemplateParameter.
			<p>From package UML::CommonStructure.</p> */
			std::shared_ptr<uml::ParameterableElement > m_parameteredElement;
			/*!
			 The TemplateSignature that owns this TemplateParameter.
			<p>From package UML::CommonStructure.</p> */
			std::shared_ptr<uml::TemplateSignature > m_signature;
			/*!
			 The ParameterableElement that is owned by this TemplateParameter for the purpose of exposing it as the parameteredElement.
			<p>From package UML::CommonStructure.</p> */
			std::shared_ptr<uml::ParameterableElement > m_ownedParameteredElement;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element > getOwner() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getOwnedElement() const = 0; 
	};

}
#endif /* end of include guard: UML_TEMPLATEPARAMETER_HPP */

