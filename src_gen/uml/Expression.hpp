//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_EXPRESSION_HPP
#define UML_EXPRESSION_HPP

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
#include "ValueSpecification.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An Expression represents a node in an expression tree, which may be non-terminal or terminal. It defines a symbol, and has a possibly empty sequence of operands that are ValueSpecifications. It denotes a (possibly empty) set of values when evaluated in a context.
	<p>From package UML::Values.</p> */
	class Expression:virtual public ValueSpecification	{
		public:
 			Expression(const Expression &) {}
			Expression& operator=(Expression const&) = delete;
	
		protected:
			Expression(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~Expression() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 The symbol associated with this node in the expression tree.
			<p>From package UML::Values.</p> */ 
			virtual std::string getSymbol() const = 0;
			
			/*!
			 The symbol associated with this node in the expression tree.
			<p>From package UML::Values.</p> */ 
			virtual void setSymbol (std::string _symbol)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Specifies a sequence of operand ValueSpecifications.
			<p>From package UML::Values.</p> */
			virtual 		std::shared_ptr<Subset<uml::ValueSpecification, uml::Element > >
			 getOperand() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 The symbol associated with this node in the expression tree.
			<p>From package UML::Values.</p> */ 
			std::string m_symbol ;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 Specifies a sequence of operand ValueSpecifications.
			<p>From package UML::Values.</p> */
					std::shared_ptr<Subset<uml::ValueSpecification, uml::Element > >
			 m_operand;
			

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
#endif /* end of include guard: UML_EXPRESSION_HPP */

