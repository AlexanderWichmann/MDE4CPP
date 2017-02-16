//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CLAUSE_HPP
#define UML_CLAUSE_HPP

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
	class Clause;
}

namespace uml 
{
	class Comment;
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
	class ExecutableNode;
}

namespace uml 
{
	class OutputPin;
}

// base class includes
#include "Element.hpp"

// enum includes


//*********************************
namespace uml 
{
	/*!
	 A Clause is an Element that represents a single branch of a ConditionalNode, including a test and a body section. The body section is executed only if (but not necessarily if) the test section evaluates to true.
	<p>From package UML::Actions.</p> */
	class Clause:virtual public Element	{
		public:
 			Clause(const Clause &) {}
			Clause& operator=(Clause const&) = delete;
	
		protected:
			Clause(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~Clause() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The bodyOutput Pins are OutputPins on Actions in the body of the Clause.
			_'body'.oclAsType(Action).allActions().output->includesAll(bodyOutput) */ 
			virtual bool body_output_pins(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 The decider Pin must be on an Action in the test section of the Clause and must be of type Boolean with multiplicity 1..1.
			test.oclAsType(Action).allActions().output->includes(decider) and
			decider.type = Boolean and
			decider.is(1,1) */ 
			virtual bool decider_output(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 The test and body parts of a ConditionalNode must be disjoint with each other.
			test->intersection(_'body')->isEmpty() */ 
			virtual bool test_and_body(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The set of ExecutableNodes that are executed if the test evaluates to true and the Clause is chosen over other Clauses within the ConditionalNode that also have tests that evaluate to true.
			<p>From package UML::Actions.</p> */
			virtual std::vector<uml::ExecutableNode * > *  getBody() const = 0;
			
			/*!
			 The OutputPins on Actions within the body section whose values are moved to the result OutputPins of the containing ConditionalNode after execution of the body.
			<p>From package UML::Actions.</p> */
			virtual std::vector<uml::OutputPin * > *  getBodyOutput() const = 0;
			
			/*!
			 An OutputPin on an Action in the test section whose Boolean value determines the result of the test.
			<p>From package UML::Actions.</p> */
			virtual uml::OutputPin *  getDecider() const = 0;
			
			/*!
			 An OutputPin on an Action in the test section whose Boolean value determines the result of the test.
			<p>From package UML::Actions.</p> */
			virtual void setDecider(uml::OutputPin *  _decider) = 0;
			
			/*!
			 A set of Clauses whose tests must all evaluate to false before this Clause can evaluate its test.
			<p>From package UML::Actions.</p> */
			virtual std::vector<uml::Clause * > *  getPredecessorClause() const = 0;
			
			/*!
			 A set of Clauses that may not evaluate their tests unless the test for this Clause evaluates to false.
			<p>From package UML::Actions.</p> */
			virtual std::vector<uml::Clause * > *  getSuccessorClause() const = 0;
			
			/*!
			 The set of ExecutableNodes that are executed in order to provide a test result for the Clause.
			<p>From package UML::Actions.</p> */
			virtual std::vector<uml::ExecutableNode * > *  getTest() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The set of ExecutableNodes that are executed if the test evaluates to true and the Clause is chosen over other Clauses within the ConditionalNode that also have tests that evaluate to true.
			<p>From package UML::Actions.</p> */
			std::vector<uml::ExecutableNode * > *  m_body =  nullptr ;
			/*!
			 The OutputPins on Actions within the body section whose values are moved to the result OutputPins of the containing ConditionalNode after execution of the body.
			<p>From package UML::Actions.</p> */
			std::vector<uml::OutputPin * > *  m_bodyOutput =  nullptr ;
			/*!
			 An OutputPin on an Action in the test section whose Boolean value determines the result of the test.
			<p>From package UML::Actions.</p> */
			uml::OutputPin *  m_decider =  nullptr ;
			/*!
			 A set of Clauses whose tests must all evaluate to false before this Clause can evaluate its test.
			<p>From package UML::Actions.</p> */
			std::vector<uml::Clause * > *  m_predecessorClause =  nullptr ;
			/*!
			 A set of Clauses that may not evaluate their tests unless the test for this Clause evaluates to false.
			<p>From package UML::Actions.</p> */
			std::vector<uml::Clause * > *  m_successorClause =  nullptr ;
			/*!
			 The set of ExecutableNodes that are executed in order to provide a test result for the Clause.
			<p>From package UML::Actions.</p> */
			std::vector<uml::ExecutableNode * > *  m_test =  nullptr ;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getOwnedElement() const = 0; 
	};

}
#endif /* end of include guard: UML_CLAUSE_HPP */

