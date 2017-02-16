//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_EXTENSIONEND_HPP
#define UML_EXTENSIONEND_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#include <string>
#include <map>
#include <vector>
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace uml 
{
	class Association;
}

namespace uml 
{
	class Class;
}

namespace uml 
{
	class Classifier;
}

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
	class DataType;
}

namespace uml 
{
	class Dependency;
}

namespace uml 
{
	class Deployment;
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
	class Interface;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class PackageableElement;
}

namespace uml 
{
	class Property;
}

namespace uml 
{
	class RedefinableElement;
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
	class ValueSpecification;
}

// base class includes
#include "Property.hpp"

// enum includes
#include "AggregationKind.hpp"

#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An extension end is used to tie an extension to a stereotype when extending a metaclass.
	The default multiplicity of an extension end is 0..1.
	<p>From package UML::Packages.</p> */
	class ExtensionEnd:virtual public Property	{
		public:
 			ExtensionEnd(const ExtensionEnd &) {}
			ExtensionEnd& operator=(ExtensionEnd const&) = delete;
	
		protected:
			ExtensionEnd(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~ExtensionEnd() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The multiplicity of ExtensionEnd is 0..1 or 1.
			(lowerBound() = 0 or lowerBound() = 1) and upperBound() = 1 */ 
			virtual bool multiplicity(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 The aggregation of an ExtensionEnd is composite.
			self.aggregation = AggregationKind::composite */ 
			virtual bool aggregation(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The contexts that this element may be redefined from.
			<p>From package UML::Classification.</p> */
			virtual std::vector<uml::Classifier * > *  getRedefinitionContext() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::Element *  getOwner() const = 0;/*!
			 The Classifiers that have this Feature as a feature.
			<p>From package UML::Classification.</p> */
			virtual std::vector<uml::Classifier * > *  getFeaturingClassifier() const = 0;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::Namespace *  getNamespace() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::vector<uml::RedefinableElement * > *  getRedefinedElement() const = 0; 
	};

}
#endif /* end of include guard: UML_EXTENSIONEND_HPP */

