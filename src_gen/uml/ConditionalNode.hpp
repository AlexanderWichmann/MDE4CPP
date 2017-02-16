//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CONDITIONALNODE_HPP
#define UML_CONDITIONALNODE_HPP

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
	class Clause;
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
	class NamedElement;
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
	class PackageImport;
}

namespace uml 
{
	class PackageableElement;
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

// base class includes
#include "StructuredActivityNode.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A ConditionalNode is a StructuredActivityNode that chooses one among some number of alternative collections of ExecutableNodes to execute.
	<p>From package UML::Actions.</p> */
	class ConditionalNode:virtual public StructuredActivityNode	{
		public:
 			ConditionalNode(const ConditionalNode &) {}
			ConditionalNode& operator=(ConditionalNode const&) = delete;
	
		protected:
			ConditionalNode(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~ConditionalNode() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The result OutputPins have no incoming edges.
			result.incoming->isEmpty() */ 
			virtual bool result_no_incoming(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 A ConditionalNode has no InputPins.
			input->isEmpty() */ 
			virtual bool no_input_pins(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 No ExecutableNode in the ConditionNode may appear in the test or body part of more than one clause of a ConditionalNode.
			node->select(oclIsKindOf(ExecutableNode)).oclAsType(ExecutableNode)->forAll(n | 
				self.clause->select(test->union(_'body')->includes(n))->size()=1) */ 
			virtual bool one_clause_with_executable_node(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 Each clause of a ConditionalNode must have the same number of bodyOutput pins as the ConditionalNode has result OutputPins, and each clause bodyOutput Pin must be compatible with the corresponding result OutputPin (by positional order) in type, multiplicity, ordering, and uniqueness.
			clause->forAll(
				bodyOutput->size()=self.result->size() and
				Sequence{1..self.result->size()}->forAll(i |
					bodyOutput->at(i).type.conformsTo(result->at(i).type) and
					bodyOutput->at(i).isOrdered = result->at(i).isOrdered and
					bodyOutput->at(i).isUnique = result->at(i).isUnique and
					bodyOutput->at(i).compatibleWith(result->at(i)))) */ 
			virtual bool matching_output_pins(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 The union of the ExecutableNodes in the test and body parts of all clauses must be the same as the subset of nodes contained in the ConditionalNode (considered as a StructuredActivityNode) that are ExecutableNodes.
			clause.test->union(clause._'body') = node->select(oclIsKindOf(ExecutableNode)).oclAsType(ExecutableNode) */ 
			virtual bool executable_nodes(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 No two clauses within a ConditionalNode may be predecessorClauses of each other, either directly or indirectly.
			clause->closure(predecessorClause)->intersection(clause)->isEmpty() */ 
			virtual bool clause_no_predecessor(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 If true, the modeler asserts that the test for at least one Clause of the ConditionalNode will succeed.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsAssured() const = 0;
			
			/*!
			 If true, the modeler asserts that the test for at least one Clause of the ConditionalNode will succeed.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsAssured (bool _isAssured)= 0; 
			
			/*!
			 If true, the modeler asserts that the test for at most one Clause of the ConditionalNode will succeed.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsDeterminate() const = 0;
			
			/*!
			 If true, the modeler asserts that the test for at most one Clause of the ConditionalNode will succeed.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsDeterminate (bool _isDeterminate)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The set of Clauses composing the ConditionalNode.
			<p>From package UML::Actions.</p> */
			virtual std::vector<uml::Clause * > *  getClause() const = 0;
			
			/*!
			 The OutputPins that onto which are moved values from the bodyOutputs of the Clause selected for execution.
			<p>From package UML::Actions.</p> */
			virtual std::vector<uml::OutputPin * > *  getResult() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 If true, the modeler asserts that the test for at least one Clause of the ConditionalNode will succeed.
			<p>From package UML::Actions.</p> */ 
			bool m_isAssured =  false;
			/*!
			 If true, the modeler asserts that the test for at most one Clause of the ConditionalNode will succeed.
			<p>From package UML::Actions.</p> */ 
			bool m_isDeterminate =  false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The set of Clauses composing the ConditionalNode.
			<p>From package UML::Actions.</p> */
			std::vector<uml::Clause * > *  m_clause =  nullptr ;
			/*!
			 The OutputPins that onto which are moved values from the bodyOutputs of the Clause selected for execution.
			<p>From package UML::Actions.</p> */
			std::vector<uml::OutputPin * > *  m_result =  nullptr ;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::vector<uml::InputPin * > *  getInput() const = 0;/*!
			 ActivityEdges immediately contained in the ActivityGroup.
			<p>From package UML::Activities.</p> */
			virtual std::vector<uml::ActivityEdge * > *  getContainedEdge() const = 0;/*!
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
			 ActivityNodes immediately contained in the ActivityGroup.
			<p>From package UML::Activities.</p> */
			virtual std::vector<uml::ActivityNode * > *  getContainedNode() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::vector<uml::RedefinableElement * > *  getRedefinedElement() const = 0;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::NamedElement * > *  getMember() const = 0;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::NamedElement * > *  getOwnedMember() const = 0; 
	};

}
#endif /* end of include guard: UML_CONDITIONALNODE_HPP */

