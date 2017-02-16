//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_REMOVEVARIABLEVALUEACTION_HPP
#define UML_REMOVEVARIABLEVALUEACTION_HPP

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

namespace uml 
{
	class Variable;
}

namespace uml 
{
	class WriteVariableAction;
}

// base class includes
#include "WriteVariableAction.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A RemoveVariableValueAction is a WriteVariableAction that removes values from a Variables.
	<p>From package UML::Actions.</p> */
	class RemoveVariableValueAction:virtual public WriteVariableAction	{
		public:
 			RemoveVariableValueAction(const RemoveVariableValueAction &) {}
			RemoveVariableValueAction& operator=(RemoveVariableValueAction const&) = delete;
	
		protected:
			RemoveVariableValueAction(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~RemoveVariableValueAction() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 ReadVariableActions removing a value from ordered, non-unique Variables must have a single removeAt InputPin and no value InputPin, if isRemoveDuplicates is false. The removeAt InputPin must be of type Unlimited Natural with multiplicity 1..1. Otherwise, the Action has a value InputPin and no removeAt InputPin.
			if  variable.isOrdered and not variable.isUnique and not isRemoveDuplicates then 
			  value = null and
			  removeAt <> null and
			  removeAt.type = UnlimitedNatural and
			  removeAt.is(1,1)
			else
			  removeAt = null and value <> null
			endif */ 
			virtual bool removeAt_and_value(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies whether to remove duplicates of the value in nonunique Variables.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsRemoveDuplicates() const = 0;
			
			/*!
			 Specifies whether to remove duplicates of the value in nonunique Variables.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsRemoveDuplicates (bool _isRemoveDuplicates)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 An InputPin that provides the position of an existing value to remove in ordered, nonunique Variables. The type of the removeAt InputPin is UnlimitedNatural, but the value cannot be zero or unlimited.
			<p>From package UML::Actions.</p> */
			virtual uml::InputPin *  getRemoveAt() const = 0;
			
			/*!
			 An InputPin that provides the position of an existing value to remove in ordered, nonunique Variables. The type of the removeAt InputPin is UnlimitedNatural, but the value cannot be zero or unlimited.
			<p>From package UML::Actions.</p> */
			virtual void setRemoveAt(uml::InputPin *  _removeAt) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 Specifies whether to remove duplicates of the value in nonunique Variables.
			<p>From package UML::Actions.</p> */ 
			bool m_isRemoveDuplicates =  false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 An InputPin that provides the position of an existing value to remove in ordered, nonunique Variables. The type of the removeAt InputPin is UnlimitedNatural, but the value cannot be zero or unlimited.
			<p>From package UML::Actions.</p> */
			uml::InputPin *  m_removeAt =  nullptr ;
			

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
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::vector<uml::RedefinableElement * > *  getRedefinedElement() const = 0; 
	};

}
#endif /* end of include guard: UML_REMOVEVARIABLEVALUEACTION_HPP */

