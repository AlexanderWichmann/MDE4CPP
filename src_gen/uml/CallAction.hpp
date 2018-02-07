//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CALLACTION_HPP
#define UML_CALLACTION_HPP

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
	class InvocationAction;
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
	class Parameter;
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
#include "uml/InvocationAction.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 CallAction is an abstract class for Actions that invoke a Behavior with given argument values and (if the invocation is synchronous) receive reply values.
	<p>From package UML::Actions.</p> */
	class CallAction:virtual public InvocationAction
	{
		public:
 			CallAction(const CallAction &) {}
			CallAction& operator=(CallAction const&) = delete;

		protected:
			CallAction(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~CallAction() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The number of argument InputPins must be the same as the number of input (in and inout) ownedParameters of the called Behavior or Operation. The type, ordering and multiplicity of each argument InputPin must be consistent with the corresponding input Parameter.
			let parameter: OrderedSet(Parameter) = self.inputParameters() in
			argument->size() = parameter->size() and
			Sequence{1..argument->size()}->forAll(i | 
				argument->at(i).type.conformsTo(parameter->at(i).type) and 
				argument->at(i).isOrdered = parameter->at(i).isOrdered and
				argument->at(i).compatibleWith(parameter->at(i))) */ 
			virtual bool argument_pins(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 Return the in and inout ownedParameters of the Behavior or Operation being called. (This operation is abstract and should be overridden by subclasses of CallAction.)
			<p>From package UML::Actions.</p> */ 
			virtual std::shared_ptr<Bag<uml::Parameter> > inputParameters()  = 0;
			
			/*!
			 Return the inout, out and return ownedParameters of the Behavior or Operation being called. (This operation is abstract and should be overridden by subclasses of CallAction.)
			<p>From package UML::Actions.</p> */ 
			virtual std::shared_ptr<Bag<uml::Parameter> > outputParameters()  = 0;
			
			/*!
			 The number of result OutputPins must be the same as the number of output (inout, out and return) ownedParameters of the called Behavior or Operation. The type, ordering and multiplicity of each result OutputPin must be consistent with the corresponding input Parameter.
			let parameter: OrderedSet(Parameter) = self.outputParameters() in
			result->size() = parameter->size() and
			Sequence{1..result->size()}->forAll(i | 
				parameter->at(i).type.conformsTo(result->at(i).type) and 
				parameter->at(i).isOrdered = result->at(i).isOrdered and
				parameter->at(i).compatibleWith(result->at(i))) */ 
			virtual bool result_pins(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 Only synchronous CallActions can have result OutputPins.
			result->notEmpty() implies isSynchronous */ 
			virtual bool synchronous_call(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 If true, the call is synchronous and the caller waits for completion of the invoked Behavior. If false, the call is asynchronous and the caller proceeds immediately and cannot receive return values.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsSynchronous() const = 0;
			
			/*!
			 If true, the call is synchronous and the caller waits for completion of the invoked Behavior. If false, the call is asynchronous and the caller proceeds immediately and cannot receive return values.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsSynchronous (bool _isSynchronous)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The OutputPins on which the reply values from the invocation are placed (if the call is synchronous).
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<Subset<uml::OutputPin, uml::OutputPin > > getResult() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 If true, the call is synchronous and the caller waits for completion of the invoked Behavior. If false, the call is asynchronous and the caller proceeds immediately and cannot receive return values.
			<p>From package UML::Actions.</p> */ 
			bool m_isSynchronous =  true;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The OutputPins on which the reply values from the invocation are placed (if the call is synchronous).
			<p>From package UML::Actions.</p> */
			std::shared_ptr<Subset<uml::OutputPin, uml::OutputPin > > m_result;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup> > getInGroup() const = 0;/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element > > getInput() const = 0;/*!
			 The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::OutputPin, uml::Element > > getOutput() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
	};

}
#endif /* end of include guard: UML_CALLACTION_HPP */

