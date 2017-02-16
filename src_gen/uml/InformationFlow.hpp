//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INFORMATIONFLOW_HPP
#define UML_INFORMATIONFLOW_HPP

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
	class ActivityEdge;
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
	class Connector;
}

namespace uml 
{
	class Dependency;
}

namespace uml 
{
	class DirectedRelationship;
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
	class Message;
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
	class PackageableElement;
}

namespace uml 
{
	class Relationship;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class TemplateParameter;
}

// base class includes
#include "DirectedRelationship.hpp"

#include "PackageableElement.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 InformationFlows describe circulation of information through a system in a general manner. They do not specify the nature of the information, mechanisms by which it is conveyed, sequences of exchange or any control conditions. During more detailed modeling, representation and realization links may be added to specify which model elements implement an InformationFlow and to show how information is conveyed.  InformationFlows require some kind of “information channel” for unidirectional transmission of information items from sources to targets.  They specify the information channel’s realizations, if any, and identify the information that flows along them.  Information moving along the information channel may be represented by abstract InformationItems and by concrete Classifiers.
	<p>From package UML::InformationFlows.</p> */
	class InformationFlow:virtual public DirectedRelationship,virtual public PackageableElement	{
		public:
 			InformationFlow(const InformationFlow &) {}
			InformationFlow& operator=(InformationFlow const&) = delete;
	
		protected:
			InformationFlow(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~InformationFlow() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The sources and targets of the information flow must conform to the sources and targets or conversely the targets and sources of the realization relationships. */ 
			virtual bool must_conform(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 The sources and targets of the information flow can only be one of the following kind: Actor, Node, UseCase, Artifact, Class, Component, Port, Property, Interface, Package, ActivityNode, ActivityPartition,
			Behavior and InstanceSpecification except when its classifier is a relationship (i.e. it represents a link).
			(self.informationSource->forAll( sis |
			  oclIsKindOf(Actor) or oclIsKindOf(Node) or oclIsKindOf(UseCase) or oclIsKindOf(Artifact) or 
			  oclIsKindOf(Class) or oclIsKindOf(Component) or oclIsKindOf(Port) or oclIsKindOf(Property) or 
			  oclIsKindOf(Interface) or oclIsKindOf(Package) or oclIsKindOf(ActivityNode) or oclIsKindOf(ActivityPartition) or 
			  (oclIsKindOf(InstanceSpecification) and not sis.oclAsType(InstanceSpecification).classifier->exists(oclIsKindOf(Relationship))))) 
			
			and
			
			(self.informationTarget->forAll( sit | 
			  oclIsKindOf(Actor) or oclIsKindOf(Node) or oclIsKindOf(UseCase) or oclIsKindOf(Artifact) or 
			  oclIsKindOf(Class) or oclIsKindOf(Component) or oclIsKindOf(Port) or oclIsKindOf(Property) or 
			  oclIsKindOf(Interface) or oclIsKindOf(Package) or oclIsKindOf(ActivityNode) or oclIsKindOf(ActivityPartition) or 
			(oclIsKindOf(InstanceSpecification) and not sit.oclAsType(InstanceSpecification).classifier->exists(oclIsKindOf(Relationship))))) */ 
			virtual bool sources_and_targets_kind(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 An information flow can only convey classifiers that are allowed to represent an information item.
			self.conveyed->forAll(oclIsKindOf(Class) or oclIsKindOf(Interface)
			  or oclIsKindOf(InformationItem) or oclIsKindOf(Signal) or oclIsKindOf(Component)) */ 
			virtual bool convey_classifiers(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Specifies the information items that may circulate on this information flow.
			<p>From package UML::InformationFlows.</p> */
			virtual std::vector<uml::Classifier * > *  getConveyed() const = 0;
			
			/*!
			 Defines from which source the conveyed InformationItems are initiated.
			<p>From package UML::InformationFlows.</p> */
			virtual std::vector<uml::NamedElement * > *  getInformationSource() const = 0;
			
			/*!
			 Defines to which target the conveyed InformationItems are directed.
			<p>From package UML::InformationFlows.</p> */
			virtual std::vector<uml::NamedElement * > *  getInformationTarget() const = 0;
			
			/*!
			 Determines which Relationship will realize the specified flow.
			<p>From package UML::InformationFlows.</p> */
			virtual std::vector<uml::Relationship * > *  getRealization() const = 0;
			
			/*!
			 Determines which ActivityEdges will realize the specified flow.
			<p>From package UML::InformationFlows.</p> */
			virtual std::vector<uml::ActivityEdge * > *  getRealizingActivityEdge() const = 0;
			
			/*!
			 Determines which Connectors will realize the specified flow.
			<p>From package UML::InformationFlows.</p> */
			virtual std::vector<uml::Connector * > *  getRealizingConnector() const = 0;
			
			/*!
			 Determines which Messages will realize the specified flow.
			<p>From package UML::InformationFlows.</p> */
			virtual std::vector<uml::Message * > *  getRealizingMessage() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 Specifies the information items that may circulate on this information flow.
			<p>From package UML::InformationFlows.</p> */
			std::vector<uml::Classifier * > *  m_conveyed =  nullptr ;
			/*!
			 Defines from which source the conveyed InformationItems are initiated.
			<p>From package UML::InformationFlows.</p> */
			std::vector<uml::NamedElement * > *  m_informationSource =  nullptr ;
			/*!
			 Defines to which target the conveyed InformationItems are directed.
			<p>From package UML::InformationFlows.</p> */
			std::vector<uml::NamedElement * > *  m_informationTarget =  nullptr ;
			/*!
			 Determines which Relationship will realize the specified flow.
			<p>From package UML::InformationFlows.</p> */
			std::vector<uml::Relationship * > *  m_realization =  nullptr ;
			/*!
			 Determines which ActivityEdges will realize the specified flow.
			<p>From package UML::InformationFlows.</p> */
			std::vector<uml::ActivityEdge * > *  m_realizingActivityEdge =  nullptr ;
			/*!
			 Determines which Connectors will realize the specified flow.
			<p>From package UML::InformationFlows.</p> */
			std::vector<uml::Connector * > *  m_realizingConnector =  nullptr ;
			/*!
			 Determines which Messages will realize the specified flow.
			<p>From package UML::InformationFlows.</p> */
			std::vector<uml::Message * > *  m_realizingMessage =  nullptr ;
			

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
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getTarget() const = 0;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getSource() const = 0;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getRelatedElement() const = 0; 
	};

}
#endif /* end of include guard: UML_INFORMATIONFLOW_HPP */

