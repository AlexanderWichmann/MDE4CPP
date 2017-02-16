//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DATATYPE_HPP
#define UML_DATATYPE_HPP

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
	class Classifier;
}

namespace uml 
{
	class CollaborationUse;
}

namespace uml 
{
	class Comment;
}

namespace uml 
{
	class Constraint;
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
	class ElementImport;
}

namespace uml 
{
	class Feature;
}

namespace uml 
{
	class Generalization;
}

namespace uml 
{
	class GeneralizationSet;
}

namespace uml 
{
	class NamedElement;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class Operation;
}

namespace uml 
{
	class Package;
}

namespace uml 
{
	class PackageImport;
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
	class Substitution;
}

namespace uml 
{
	class TemplateBinding;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class TemplateSignature;
}

namespace uml 
{
	class Type;
}

namespace uml 
{
	class UseCase;
}

// base class includes
#include "Classifier.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A DataType is a type whose instances are identified only by their value.
	<p>From package UML::SimpleClassifiers.</p> */
	class DataType:virtual public Classifier	{
		public:
 			DataType(const DataType &) {}
			DataType& operator=(DataType const&) = delete;
	
		protected:
			DataType(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~DataType() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 Creates a property with the specified name, type, lower bound, and upper bound as an owned attribute of this data type. */ 
			virtual uml::Property *  createOwnedAttribute(std::string name,uml::Type *  type,int lower,int upper)  = 0;
			
			/*!
			 Creates an operation with the specified name, parameter names, parameter types, and return type (or null) as an owned operation of this data type. */ 
			virtual uml::Operation *  createOwnedOperation(std::string name,std::vector<std::string> *  parameterNames,std::vector<uml::Type * > *  parameterTypes,uml::Type *  returnType)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The attributes owned by the DataType.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::vector<uml::Property * > *  getOwnedAttribute() const = 0;
			
			/*!
			 The Operations owned by the DataType.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::vector<uml::Operation * > *  getOwnedOperation() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The attributes owned by the DataType.
			<p>From package UML::SimpleClassifiers.</p> */
			std::vector<uml::Property * > *  m_ownedAttribute =  nullptr ;
			/*!
			 The Operations owned by the DataType.
			<p>From package UML::SimpleClassifiers.</p> */
			std::vector<uml::Operation * > *  m_ownedOperation =  nullptr ;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::Element *  getOwner() const = 0;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::vector<uml::Feature * > *  getFeature() const = 0;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::Namespace *  getNamespace() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::vector<uml::RedefinableElement * > *  getRedefinedElement() const = 0;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::NamedElement * > *  getMember() const = 0;/*!
			 All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::vector<uml::Property * > *  getAttribute() const = 0;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::NamedElement * > *  getOwnedMember() const = 0; 
	};

}
#endif /* end of include guard: UML_DATATYPE_HPP */

