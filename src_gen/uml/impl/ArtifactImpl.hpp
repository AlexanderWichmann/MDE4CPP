//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ARTIFACTARTIFACTIMPL_HPP
#define UML_ARTIFACTARTIFACTIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

//*********************************
// generated Includes

//Model includes
#include "../Artifact.hpp"

#include "uml/impl/ClassifierImpl.hpp"
#include "uml/impl/DeployedArtifactImpl.hpp"



//*********************************
namespace uml 
{
	class ArtifactImpl :virtual public ClassifierImpl, virtual public DeployedArtifactImpl, virtual public Artifact 
	{
		public: 
			ArtifactImpl(const ArtifactImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ArtifactImpl& operator=(ArtifactImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ArtifactImpl();

			//Additional constructors for the containments back reference
			ArtifactImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ArtifactImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			ArtifactImpl(std::weak_ptr<uml::Package > par_Package, const int reference_id);


			//Additional constructors for the containments back reference
			ArtifactImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);


			//Additional constructors for the containments back reference




		public:
			//destructor
			virtual ~ArtifactImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 Creates a property with the specified name, type, lower bound, and upper bound as an owned attribute of this artifact. */ 
			virtual std::shared_ptr<uml::Property> createOwnedAttribute(std::string name,std::shared_ptr<uml::Type>  type,int lower,int upper)  ;
			
			/*!
			 Creates an operation with the specified name, parameter names, parameter types, and return type (or null) as an owned operation of this artifact. */ 
			virtual std::shared_ptr<uml::Operation> createOwnedOperation(std::string name,std::shared_ptr<Bag<std::string> >  parameterNames,std::shared_ptr<Bag<uml::Type> >  parameterTypes,std::shared_ptr<uml::Type>  returnType)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 A concrete name that is used to refer to the Artifact in a physical context. Example: file system name, universal resource locator.
			<p>From package UML::Deployments.</p> */ 
			virtual std::string getFileName() const ;
			
			/*!
			 A concrete name that is used to refer to the Artifact in a physical context. Example: file system name, universal resource locator.
			<p>From package UML::Deployments.</p> */ 
			virtual void setFileName (std::string _fileName); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The set of model elements that are manifested in the Artifact. That is, these model elements are utilized in the construction (or generation) of the artifact.
			<p>From package UML::Deployments.</p> */
			virtual std::shared_ptr<Subset<uml::Manifestation, uml::Element > > getManifestation() const ;
			
			/*!
			 The Artifacts that are defined (nested) within the Artifact. The association is a specialization of the ownedMember association from Namespace to NamedElement.
			<p>From package UML::Deployments.</p> */
			virtual std::shared_ptr<Subset<uml::Artifact, uml::NamedElement > > getNestedArtifact() const ;
			
			/*!
			 The attributes or association ends defined for the Artifact. The association is a specialization of the ownedMember association.
			<p>From package UML::Deployments.</p> */
			virtual std::shared_ptr<Subset<uml::Property, uml::Property,uml::NamedElement > > getOwnedAttribute() const ;
			
			/*!
			 The Operations defined for the Artifact. The association is a specialization of the ownedMember association.
			<p>From package UML::Deployments.</p> */
			virtual std::shared_ptr<Subset<uml::Operation, uml::Feature,uml::NamedElement > > getOwnedOperation() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::Feature > > getAttribute() const ;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement > > getFeature() const ;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement> > getMember() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement > > getOwnedMember() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual void eSet(int featureID, boost::any newValue) ;

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_ARTIFACTARTIFACTIMPL_HPP */

