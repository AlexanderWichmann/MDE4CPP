//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_EXTENSIONEXTENSIONIMPL_HPP
#define UML_EXTENSIONEXTENSIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Extension.hpp"

#include "uml/impl/AssociationImpl.hpp"

//*********************************
namespace uml 
{
	class ExtensionImpl :virtual public AssociationImpl, virtual public Extension 
	{
		public: 
			ExtensionImpl(const ExtensionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ExtensionImpl& operator=(ExtensionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ExtensionImpl();
			virtual std::shared_ptr<Extension> getThisExtensionPtr();
			virtual void setThisExtensionPtr(std::weak_ptr<Extension> thisExtensionPtr);

			//Additional constructors for the containments back reference
			ExtensionImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ExtensionImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			ExtensionImpl(std::weak_ptr<uml::Package > par_Package, const int reference_id);


			//Additional constructors for the containments back reference
			ExtensionImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);


			//Additional constructors for the containments back reference




		public:
			//destructor
			virtual ~ExtensionImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			/*!
			 Retrieves the stereotype that extends a metaclass through this extension. */ 
			virtual std::shared_ptr<uml::Stereotype> getStereotype()  ;
			
			/*!
			 Retrieves the extension end that is typed by a stereotype (as opposed to a metaclass). */ 
			virtual std::shared_ptr<uml::Property> getStereotypeEnd()  ;
			
			/*!
			 The query isRequired() is true if the owned end has a multiplicity with the lower bound of 1.
			result = (ownedEnd.lowerBound() = 1)
			<p>From package UML::Packages.</p> */ 
			virtual bool isRequired()  ;
			
			/*!
			 An Extension is binary, i.e., it has only two memberEnds.
			memberEnd->size() = 2 */ 
			virtual bool is_binary(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The query metaclassEnd() returns the Property that is typed by a metaclass (as opposed to a stereotype).
			result = (memberEnd->reject(p | ownedEnd->includes(p.oclAsType(ExtensionEnd)))->any(true))
			<p>From package UML::Packages.</p> */ 
			virtual std::shared_ptr<uml::Property> metaclassEnd()  ;
			
			/*!
			 The non-owned end of an Extension is typed by a Class.
			metaclassEnd()->notEmpty() and metaclassEnd().type.oclIsKindOf(Class) */ 
			virtual bool non_owned_end(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Indicates whether an instance of the extending stereotype must be created when an instance of the extended class is created. The attribute value is derived from the value of the lower property of the ExtensionEnd referenced by Extension::ownedEnd; a lower value of 1 means that isRequired is true, but otherwise it is false. Since the default value of ExtensionEnd::lower is 0, the default value of isRequired is false.
			<p>From package UML::Packages.</p> */ 
			virtual bool getIsRequired() const ;
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 References the Class that is extended through an Extension. The property is derived from the type of the memberEnd that is not the ownedEnd.
			<p>From package UML::Packages.</p> */
			virtual std::shared_ptr<uml::Class > getMetaclass() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement>> getFeature() const ;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement>> getMember() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement>> getOwnedMember() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const ;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getRelatedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<uml::UmlFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, boost::any newValue) ;

		private:
			std::weak_ptr<Extension> m_thisExtensionPtr;
	};
}
#endif /* end of include guard: UML_EXTENSIONEXTENSIONIMPL_HPP */
