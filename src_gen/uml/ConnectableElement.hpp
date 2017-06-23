//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CONNECTABLEELEMENT_HPP
#define UML_CONNECTABLEELEMENT_HPP

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

namespace uml 
{
	class ConnectorEnd;
}

namespace uml 
{
	class Dependency;
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
	class Namespace;
}

namespace uml 
{
	class ParameterableElement;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class Type;
}

namespace uml 
{
	class TypedElement;
}

// base class includes
#include "ParameterableElement.hpp"

#include "TypedElement.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 ConnectableElement is an abstract metaclass representing a set of instances that play roles of a StructuredClassifier. ConnectableElements may be joined by attached Connectors and specify configurations of linked instances to be created within an instance of the containing StructuredClassifier.
	<p>From package UML::StructuredClassifiers.</p> */
	class ConnectableElement:virtual public ParameterableElement,virtual public TypedElement	{
		public:
 			ConnectableElement(const ConnectableElement &) {}
			ConnectableElement& operator=(ConnectableElement const&) = delete;
	
		protected:
			ConnectableElement(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~ConnectableElement() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 Derivation for ConnectableElement::/end : ConnectorEnd
			result = (ConnectorEnd.allInstances()->select(role = self))
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual std::shared_ptr<Bag<uml::ConnectorEnd> >
			 getEnds()  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 A set of ConnectorEnds that attach to this ConnectableElement.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual 	std::shared_ptr< Bag<uml::ConnectorEnd> >
			 getEnd() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 A set of ConnectorEnds that attach to this ConnectableElement.
			<p>From package UML::StructuredClassifiers.</p> */
				std::shared_ptr< Bag<uml::ConnectorEnd> >
			 m_end;
			

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
#endif /* end of include guard: UML_CONNECTABLEELEMENT_HPP */

