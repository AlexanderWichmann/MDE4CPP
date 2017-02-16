//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CONNECTORCONNECTORIMPL_HPP
#define UML_CONNECTORCONNECTORIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../Connector.hpp"

#include "impl/FeatureImpl.hpp"


//*********************************
namespace uml 
{
	class ConnectorImpl :virtual public FeatureImpl, virtual public Connector
	{
		public: 
			ConnectorImpl(const ConnectorImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ConnectorImpl& operator=(ConnectorImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ConnectorImpl();

		public:
			//destructor
			virtual ~ConnectorImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The types of the ConnectableElements that the ends of a Connector are attached to must conform to the types of the ends of the Association that types the Connector, if any.
			type<>null implies 
			  let noOfEnds : Integer = end->size() in 
			  (type.memberEnd->size() = noOfEnds) and Sequence{1..noOfEnds}->forAll(i | end->at(i).role.type.conformsTo(type.memberEnd->at(i).type)) */ 
			virtual bool types(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The ConnectableElements attached as roles to each ConnectorEnd owned by a Connector must be owned or inherited roles of the Classifier that owned the Connector, or they must be Ports of such roles.
			structuredClassifier <> null
			and
			  end->forAll( e | structuredClassifier.allRoles()->includes(e.role)
			or
			  e.role.oclIsKindOf(Port) and structuredClassifier.allRoles()->includes(e.partWithPort)) */ 
			virtual bool roles(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 Derivation for Connector::/kind : ConnectorKind
			result = (if end->exists(
					role.oclIsKindOf(Port) 
					and partWithPort->isEmpty()
					and not role.oclAsType(Port).isBehavior)
			then ConnectorKind::delegation 
			else ConnectorKind::assembly 
			endif)
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual ConnectorKind getKind()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Indicates the kind of Connector. This is derived: a Connector with one or more ends connected to a Port which is not on a Part and which is not a behavior port is a delegation; otherwise it is an assembly.
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual ConnectorKind getKind() const ;
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The set of Behaviors that specify the valid interaction patterns across the Connector.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::vector<uml::Behavior * > *  getContract() const ;
			
			/*!
			 A Connector has at least two ConnectorEnds, each representing the participation of instances of the Classifiers typing the ConnectableElements attached to the end. The set of ConnectorEnds is ordered.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::vector<uml::ConnectorEnd * > *  getEnd() const ;
			
			/*!
			 A Connector may be redefined when its containing Classifier is specialized. The redefining Connector may have a type that specializes the type of the redefined Connector. The types of the ConnectorEnds of the redefining Connector may specialize the types of the ConnectorEnds of the redefined Connector. The properties of the ConnectorEnds of the redefining Connector may be replaced.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::vector<uml::Connector * > *  getRedefinedConnector() const ;
			
			/*!
			 An optional Association that classifies links corresponding to this Connector.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual uml::Association *  getType() const ;
			
			/*!
			 An optional Association that classifies links corresponding to this Connector.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual void setType(uml::Association *  _type) ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::Element *  getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::vector<uml::RedefinableElement * > *  getRedefinedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual ecore::EClass* eStaticClass() const;
	};
}
#endif /* end of include guard: UML_CONNECTORCONNECTORIMPL_HPP */

