//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_NODENODEIMPL_HPP
#define UML_NODENODEIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../Node.hpp"

#include "impl/ClassImpl.hpp"
#include "impl/DeploymentTargetImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class NodeImpl :virtual public ClassImpl, virtual public DeploymentTargetImpl, virtual public Node 
	{
		public: 
			NodeImpl(const NodeImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			NodeImpl& operator=(NodeImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			NodeImpl();

		public:
			//destructor
			virtual ~NodeImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The internal structure of a Node (if defined) consists solely of parts of type Node.
			part->forAll(oclIsKindOf(Node)) */ 
			virtual bool
			 internal_structure(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 Creates a (binary) communication path between this node and the specified other node, with the specified navigabilities, aggregations, names, lower bounds, and upper bounds, and owned by this node's nearest package. */ 
			virtual std::shared_ptr<uml::CommunicationPath> 
			 createCommunicationPath(bool end1IsNavigable,AggregationKind end1Aggregation,std::string end1Name,int end1Lower,int end1Upper,std::shared_ptr<uml::Node>  end1Node,bool end2IsNavigable,AggregationKind end2Aggregation,std::string end2Name,int end2Lower,int end2Upper)  ;
			
			/*!
			 Retrieves the communication paths in which this node is involved. */ 
			virtual std::shared_ptr<Bag<uml::CommunicationPath> >
			 getCommunicationPaths()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Nodes that are defined (nested) within the Node.
			<p>From package UML::Deployments.</p> */
			virtual 		std::shared_ptr<Subset<uml::Node, uml::NamedElement > >
			 getNestedNode() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p> */
			virtual 		std::shared_ptr<SubsetUnion<uml::Property, uml::Feature > >
			 getAttribute() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element
					,uml::NamedElement > >
			 getOwnedMember() const ;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::NamedElement> > getMember() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual 		std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement > >
			 getFeature() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual 		std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace > getNamespace() const ;/*!
			 The roles that instances may play in this StructuredClassifier.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual 		std::shared_ptr<SubsetUnion<uml::ConnectableElement, uml::NamedElement > >
			 getRole() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element > getOwner() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_NODENODEIMPL_HPP */

