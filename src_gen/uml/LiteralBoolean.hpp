//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_LITERALBOOLEAN_HPP
#define UML_LITERALBOOLEAN_HPP

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
	class LiteralSpecification;
}

namespace uml 
{
	class Namespace;
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

// base class includes
#include "LiteralSpecification.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A LiteralBoolean is a specification of a Boolean value.
	<p>From package UML::Values.</p> */
	class LiteralBoolean:virtual public LiteralSpecification	{
		public:
 			LiteralBoolean(const LiteralBoolean &) {}
			LiteralBoolean& operator=(LiteralBoolean const&) = delete;
	
		protected:
			LiteralBoolean(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~LiteralBoolean() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 The specified Boolean value.
			<p>From package UML::Values.</p> */ 
			virtual bool getValue() const = 0;
			
			/*!
			 The specified Boolean value.
			<p>From package UML::Values.</p> */ 
			virtual void setValue (bool _value)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 The specified Boolean value.
			<p>From package UML::Values.</p> */ 
			bool m_value =  false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			

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
			virtual uml::Element *  getOwner() const = 0; 
	};

}
#endif /* end of include guard: UML_LITERALBOOLEAN_HPP */

