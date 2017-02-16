//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DEPLOYMENTDEPLOYMENTIMPL_HPP
#define UML_DEPLOYMENTDEPLOYMENTIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../Deployment.hpp"

#include "impl/DependencyImpl.hpp"


//*********************************
namespace uml 
{
	class DeploymentImpl :virtual public DependencyImpl, virtual public Deployment
	{
		public: 
			DeploymentImpl(const DeploymentImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			DeploymentImpl& operator=(DeploymentImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			DeploymentImpl();

		public:
			//destructor
			virtual ~DeploymentImpl();
			
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
			 The specification of properties that parameterize the deployment and execution of one or more Artifacts.
			<p>From package UML::Deployments.</p> */
			virtual std::vector<uml::DeploymentSpecification * > *  getConfiguration() const ;
			
			/*!
			 The Artifacts that are deployed onto a Node. This association specializes the supplier association.
			<p>From package UML::Deployments.</p> */
			virtual std::vector<uml::DeployedArtifact * > *  getDeployedArtifact() const ;
			
			/*!
			 The DeployedTarget which is the target of a Deployment.
			<p>From package UML::Deployments.</p> */
			virtual uml::DeploymentTarget *  getLocation() const ;
			
			/*!
			 The DeployedTarget which is the target of a Deployment.
			<p>From package UML::Deployments.</p> */
			virtual void setLocation(uml::DeploymentTarget *  _location) ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getOwnedElement() const ;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getTarget() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::Element *  getOwner() const ;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getSource() const ;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getRelatedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual ecore::EClass* eStaticClass() const;
	};
}
#endif /* end of include guard: UML_DEPLOYMENTDEPLOYMENTIMPL_HPP */

