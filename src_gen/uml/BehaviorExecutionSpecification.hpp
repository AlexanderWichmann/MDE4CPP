//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_BEHAVIOREXECUTIONSPECIFICATION_HPP
#define UML_BEHAVIOREXECUTIONSPECIFICATION_HPP

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
	class Behavior;
}

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
	class ExecutionSpecification;
}

namespace uml 
{
	class GeneralOrdering;
}

namespace uml 
{
	class Interaction;
}

namespace uml 
{
	class InteractionOperand;
}

namespace uml 
{
	class Lifeline;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class OccurrenceSpecification;
}

namespace uml 
{
	class StringExpression;
}

// base class includes
#include "ExecutionSpecification.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A BehaviorExecutionSpecification is a kind of ExecutionSpecification representing the execution of a Behavior.
	<p>From package UML::Interactions.</p> */
	class BehaviorExecutionSpecification:virtual public ExecutionSpecification	{
		public:
 			BehaviorExecutionSpecification(const BehaviorExecutionSpecification &) {}
			BehaviorExecutionSpecification& operator=(BehaviorExecutionSpecification const&) = delete;
	
		protected:
			BehaviorExecutionSpecification(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~BehaviorExecutionSpecification() {}

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
			 Behavior whose execution is occurring.
			<p>From package UML::Interactions.</p> */
			virtual uml::Behavior *  getBehavior() const = 0;
			
			/*!
			 Behavior whose execution is occurring.
			<p>From package UML::Interactions.</p> */
			virtual void setBehavior(uml::Behavior *  _behavior) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 Behavior whose execution is occurring.
			<p>From package UML::Interactions.</p> */
			uml::Behavior *  m_behavior =  nullptr ;
			

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
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::Namespace *  getNamespace() const = 0; 
	};

}
#endif /* end of include guard: UML_BEHAVIOREXECUTIONSPECIFICATION_HPP */

