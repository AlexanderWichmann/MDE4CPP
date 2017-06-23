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

#include "SubsetUnion.hpp"



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
			virtual 		std::shared_ptr<Subset<uml::DeploymentSpecification, uml::Element > >
			 getConfiguration() const ;
			
			/*!
			 The Artifacts that are deployed onto a Node. This association specializes the supplier association.
			<p>From package UML::Deployments.</p> */
			virtual 		std::shared_ptr<Subset<uml::DeployedArtifact, uml::NamedElement /*Subset does not reference a union*/ > >
			 getDeployedArtifact() const ;
			
			/*!
			 The DeployedTarget which is the target of a Deployment.
			<p>From package UML::Deployments.</p> */
			virtual std::shared_ptr<uml::DeploymentTarget > getLocation() const ;
			
			/*!
			 The DeployedTarget which is the target of a Deployment.
			<p>From package UML::Deployments.</p> */
			virtual void setLocation(std::shared_ptr<uml::DeploymentTarget> _location_location) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getRelatedElement() const ;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<SubsetUnion<uml::Element, uml::Element > >
			 getTarget() const ;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<SubsetUnion<uml::Element, uml::Element > >
			 getSource() const ;/*!
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
#endif /* end of include guard: UML_DEPLOYMENTDEPLOYMENTIMPL_HPP */

