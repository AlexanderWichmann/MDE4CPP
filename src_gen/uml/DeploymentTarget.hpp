//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DEPLOYMENTTARGET_HPP
#define UML_DEPLOYMENTTARGET_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#include <string>
#include <map>
#include <vector>
#include "SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace uml 
{
	class Comment;
}

namespace uml 
{
	class Dependency;
}

namespace uml 
{
	class Deployment;
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
	class StringExpression;
}

// base class includes
#include "NamedElement.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A deployment target is the location for a deployed artifact.
	<p>From package UML::Deployments.</p> */
	class DeploymentTarget:virtual public NamedElement	{
		public:
 			DeploymentTarget(const DeploymentTarget &) {}
			DeploymentTarget& operator=(DeploymentTarget const&) = delete;
	
		protected:
			DeploymentTarget(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~DeploymentTarget() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 Derivation for DeploymentTarget::/deployedElement
			result = (deployment.deployedArtifact->select(oclIsKindOf(Artifact))->collect(oclAsType(Artifact).manifestation)->collect(utilizedElement)->asSet())
			<p>From package UML::Deployments.</p> */ 
			virtual std::shared_ptr<Bag<uml::PackageableElement> >
			 getDeployedElements()  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The set of elements that are manifested in an Artifact that is involved in Deployment to a DeploymentTarget.
			<p>From package UML::Deployments.</p> */
			virtual 	std::shared_ptr< Bag<uml::PackageableElement> >
			 getDeployedElement() const = 0;
			
			/*!
			 The set of Deployments for a DeploymentTarget.
			<p>From package UML::Deployments.</p> */
			virtual 		std::shared_ptr<Subset<uml::Deployment, uml::Element > >
			 getDeployment() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The set of elements that are manifested in an Artifact that is involved in Deployment to a DeploymentTarget.
			<p>From package UML::Deployments.</p> */
				std::shared_ptr< Bag<uml::PackageableElement> >
			 m_deployedElement;
			/*!
			 The set of Deployments for a DeploymentTarget.
			<p>From package UML::Deployments.</p> */
					std::shared_ptr<Subset<uml::Deployment, uml::Element > >
			 m_deployment;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element > getOwner() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getOwnedElement() const = 0; 
	};

}
#endif /* end of include guard: UML_DEPLOYMENTTARGET_HPP */

