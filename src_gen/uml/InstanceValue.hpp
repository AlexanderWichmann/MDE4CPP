//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INSTANCEVALUE_HPP
#define UML_INSTANCEVALUE_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

#include <map>
#include <string>
#include <vector>

#include "abstractDataTypes/SubsetUnion.hpp"
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
	class InstanceSpecification;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class Package;
}

namespace uml 
{
	class Slot;
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
#include "uml/ValueSpecification.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An InstanceValue is a ValueSpecification that identifies an instance.
	<p>From package UML::Classification.</p> */
	class InstanceValue:virtual public ValueSpecification
	{
		public:
 			InstanceValue(const InstanceValue &) {}
			InstanceValue& operator=(InstanceValue const&) = delete;

		protected:
			InstanceValue(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~InstanceValue() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The InstanceSpecification that represents the specified value.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<uml::InstanceSpecification > getInstance() const = 0;
			
			/*!
			 The InstanceSpecification that represents the specified value.
			<p>From package UML::Classification.</p> */
			virtual void setInstance(std::shared_ptr<uml::InstanceSpecification> _instance_instance) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The InstanceSpecification that represents the specified value.
			<p>From package UML::Classification.</p> */
			std::shared_ptr<uml::InstanceSpecification > m_instance;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
	};

}
#endif /* end of include guard: UML_INSTANCEVALUE_HPP */

