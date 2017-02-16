//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_STARTOBJECTBEHAVIORACTION_HPP
#define UML_STARTOBJECTBEHAVIORACTION_HPP

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
	class Activity;
}

namespace uml 
{
	class ActivityEdge;
}

namespace uml 
{
	class ActivityGroup;
}

namespace uml 
{
	class ActivityNode;
}

namespace uml 
{
	class ActivityPartition;
}

namespace uml 
{
	class Behavior;
}

namespace uml 
{
	class CallAction;
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
	class ExceptionHandler;
}

namespace uml 
{
	class InputPin;
}

namespace uml 
{
	class InterruptibleActivityRegion;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class OutputPin;
}

namespace uml 
{
	class Port;
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
	class StructuredActivityNode;
}

// base class includes
#include "CallAction.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A StartObjectBehaviorAction is an InvocationAction that starts the execution either of a directly instantiated Behavior or of the classifierBehavior of an object. Argument values may be supplied for the input Parameters of the Behavior. If the Behavior is invoked synchronously, then output values may be obtained for output Parameters.
	<p>From package UML::Actions.</p> */
	class StartObjectBehaviorAction:virtual public CallAction	{
		public:
 			StartObjectBehaviorAction(const StartObjectBehaviorAction &) {}
			StartObjectBehaviorAction& operator=(StartObjectBehaviorAction const&) = delete;
	
		protected:
			StartObjectBehaviorAction(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~StartObjectBehaviorAction() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The multiplicity of the object InputPin must be 1..1.
			object.is(1,1) */ 
			virtual bool multiplicity_of_object(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 The type of the object InputPin must be either a Behavior or a BehavioredClassifier with a classifierBehavior.
			self.behavior()<>null */ 
			virtual bool type_of_object(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 A StartObjectBehaviorAction may not specify onPort.
			onPort->isEmpty() */ 
			virtual bool no_onport(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 If the type of the object InputPin is a Behavior, then that Behavior. Otherwise, if the type of the object InputPin is a BehavioredClassifier, then the classifierBehavior of that BehavioredClassifier.
			result = (if object.type.oclIsKindOf(Behavior) then
			  object.type.oclAsType(Behavior)
			else if object.type.oclIsKindOf(BehavioredClassifier) then
			  object.type.oclAsType(BehavioredClassifier).classifierBehavior
			else
			  null
			endif
			endif)
			<p>From package UML::Actions.</p> */ 
			virtual uml::Behavior *  behavior()  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 An InputPin that holds the object that is either a Behavior to be started or has a classifierBehavior to be started.
			<p>From package UML::Actions.</p> */
			virtual uml::InputPin *  getObject() const = 0;
			
			/*!
			 An InputPin that holds the object that is either a Behavior to be started or has a classifierBehavior to be started.
			<p>From package UML::Actions.</p> */
			virtual void setObject(uml::InputPin *  _object) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 An InputPin that holds the object that is either a Behavior to be started or has a classifierBehavior to be started.
			<p>From package UML::Actions.</p> */
			uml::InputPin *  m_object =  nullptr ;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::vector<uml::InputPin * > *  getInput() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getOwnedElement() const = 0;/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::vector<uml::ActivityGroup * > *  getInGroup() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::Element *  getOwner() const = 0;/*!
			 The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p> */
			virtual std::vector<uml::OutputPin * > *  getOutput() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::vector<uml::RedefinableElement * > *  getRedefinedElement() const = 0; 
	};

}
#endif /* end of include guard: UML_STARTOBJECTBEHAVIORACTION_HPP */

