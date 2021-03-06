//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_PROFILE_HPP
#define UML_PROFILE_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T, class ... U> class Subset;


class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace uml
{
	class UmlFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Class;
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
	class Constraint;
}

namespace uml 
{
	class Dependency;
}

namespace ecore 
{
	class ENamedElement;
}

namespace ecore 
{
	class EObject;
}

namespace ecore 
{
	class EPackage;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class ElementImport;
}

namespace uml 
{
	class Extension;
}

namespace uml 
{
	class Model;
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
	class Package;
}

namespace uml 
{
	class PackageImport;
}

namespace uml 
{
	class PackageMerge;
}

namespace uml 
{
	class PackageableElement;
}

namespace uml 
{
	class ProfileApplication;
}

namespace uml 
{
	class Stereotype;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class TemplateBinding;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class TemplateSignature;
}

namespace uml 
{
	class Type;
}

// base class includes
#include "uml/Package.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A profile defines limited extensions to a reference metamodel with the purpose of adapting the metamodel to a specific platform or domain.
	<p>From package UML::Packages.</p> */
	class Profile:virtual public Package
	{
		public:
 			Profile(const Profile &) {}
			Profile& operator=(Profile const&) = delete;

		protected:
			Profile(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Profile() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 Creates and returns an instance of (the Ecore representation of) the specified classifier defined in this profile. */ 
			virtual std::shared_ptr<ecore::EObject> create(std::shared_ptr<uml::Classifier>  classifier) = 0;
			
			/*!
			 Defines this profile by (re)creating Ecore representations of its current contents. */ 
			virtual std::shared_ptr<ecore::EPackage> define() = 0;
			
			/*!
			 Defines this profile by (re)creating Ecore representations of its current contents, using the specified options, diagnostics, and context. */ 
			virtual std::shared_ptr<ecore::EPackage> define(std::map <   std::string, std::string >  options,Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 Retrieves the current definition (Ecore representation) of this profile. */ 
			virtual std::shared_ptr<ecore::EPackage> getDefinition() = 0;
			
			/*!
			 Retrieves the current definition (Ecore representation) of the specified named element in this profile. */ 
			virtual std::shared_ptr<ecore::ENamedElement> getDefinition(std::shared_ptr<uml::NamedElement>  namedElement) = 0;
			
			/*!
			 Retrieves the extensions owned by this profile, excluding non-required extensions if indicated. */ 
			virtual std::shared_ptr<Bag<uml::Extension> > getOwnedExtensions(bool requiredOnly) = 0;
			
			/*!
			 Retrieves the metaclasses referenced by this profile. */ 
			virtual std::shared_ptr<Bag<uml::Class> > getReferencedMetaclasses() = 0;
			
			/*!
			 Retrieves the metamodels referenced by this profile. */ 
			virtual std::shared_ptr<Bag<uml::Model> > getReferencedMetamodels() = 0;
			
			/*!
			 Determines whether this profile is defined. */ 
			virtual bool isDefined() = 0;
			
			/*!
			 An element imported as a metaclassReference is not specialized or generalized in a Profile.
			metaclassReference.importedElement->
				select(c | c.oclIsKindOf(Classifier) and
					(c.oclAsType(Classifier).allParents()->collect(namespace)->includes(self)))->isEmpty()
			and 
			packagedElement->
			    select(oclIsKindOf(Classifier))->collect(oclAsType(Classifier).allParents())->
			       intersection(metaclassReference.importedElement->select(oclIsKindOf(Classifier))->collect(oclAsType(Classifier)))->isEmpty() */ 
			virtual bool metaclass_reference_not_specialized(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 All elements imported either as metaclassReferences or through metamodelReferences are members of the same base reference metamodel.
			metamodelReference.importedPackage.elementImport.importedElement.allOwningPackages()->
			  union(metaclassReference.importedElement.allOwningPackages() )->notEmpty() */ 
			virtual bool references_same_metamodel(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 References a metaclass that may be extended.
			<p>From package UML::Packages.</p> */
			virtual std::shared_ptr<Subset<uml::ElementImport, uml::ElementImport /*Subset does not reference a union*/>> getMetaclassReference() const = 0;
			
			/*!
			 References a package containing (directly or indirectly) metaclasses that may be extended.
			<p>From package UML::Packages.</p> */
			virtual std::shared_ptr<Subset<uml::PackageImport, uml::PackageImport /*Subset does not reference a union*/>> getMetamodelReference() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 References a metaclass that may be extended.
			<p>From package UML::Packages.</p> */
			std::shared_ptr<Subset<uml::ElementImport, uml::ElementImport /*Subset does not reference a union*/>> m_metaclassReference;
			/*!
			 References a package containing (directly or indirectly) metaclasses that may be extended.
			<p>From package UML::Packages.</p> */
			std::shared_ptr<Subset<uml::PackageImport, uml::PackageImport /*Subset does not reference a union*/>> m_metamodelReference;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement>> getMember() const = 0;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement>> getOwnedMember() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_PROFILE_HPP */
