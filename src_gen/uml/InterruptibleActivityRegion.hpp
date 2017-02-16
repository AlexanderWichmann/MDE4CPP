//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INTERRUPTIBLEACTIVITYREGION_HPP
#define UML_INTERRUPTIBLEACTIVITYREGION_HPP

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

// base class includes
#include "ActivityGroup.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An InterruptibleActivityRegion is an ActivityGroup that supports the termination of tokens flowing in the portions of an activity within it.
	<p>From package UML::Activities.</p> */
	class InterruptibleActivityRegion:virtual public ActivityGroup	{
		public:
 			InterruptibleActivityRegion(const InterruptibleActivityRegion &) {}
			InterruptibleActivityRegion& operator=(InterruptibleActivityRegion const&) = delete;
	
		protected:
			InterruptibleActivityRegion(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~InterruptibleActivityRegion() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The interruptingEdges of an InterruptibleActivityRegion must have their source in the region and their target outside the region, but within the same Activity containing the region.
			interruptingEdge->forAll(edge | 
			  node->includes(edge.source) and node->excludes(edge.target) and edge.target.containingActivity() = inActivity) */ 
			virtual bool interrupting_edges(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The ActivityEdges leaving the InterruptibleActivityRegion on which a traversing token will result in the termination of other tokens flowing in the InterruptibleActivityRegion.
			<p>From package UML::Activities.</p> */
			virtual std::vector<uml::ActivityEdge * > *  getInterruptingEdge() const = 0;
			
			/*!
			 ActivityNodes immediately contained in the InterruptibleActivityRegion.
			<p>From package UML::Activities.</p> */
			virtual std::vector<uml::ActivityNode * > *  getNode() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The ActivityEdges leaving the InterruptibleActivityRegion on which a traversing token will result in the termination of other tokens flowing in the InterruptibleActivityRegion.
			<p>From package UML::Activities.</p> */
			std::vector<uml::ActivityEdge * > *  m_interruptingEdge =  nullptr ;
			/*!
			 ActivityNodes immediately contained in the InterruptibleActivityRegion.
			<p>From package UML::Activities.</p> */
			std::vector<uml::ActivityNode * > *  m_node =  nullptr ;
			

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
			 ActivityNodes immediately contained in the ActivityGroup.
			<p>From package UML::Activities.</p> */
			virtual std::vector<uml::ActivityNode * > *  getContainedNode() const = 0; 
	};

}
#endif /* end of include guard: UML_INTERRUPTIBLEACTIVITYREGION_HPP */

