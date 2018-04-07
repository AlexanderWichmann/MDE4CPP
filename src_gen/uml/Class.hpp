//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CLASS_HPP
#define UML_CLASS_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag;
template<class T, class ... U> class Subset;


namespace boost
{
	class any;
}

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
	class Behavior;
}

namespace uml 
{
	class BehavioredClassifier;
}

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
	class CollaborationUse;
}

namespace uml 
{
	class Comment;
}

namespace uml 
{
	class ConnectableElement;
}

namespace uml 
{
	class Connector;
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
	class EAnnotation;
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
	class EncapsulatedClassifier;
}

namespace uml 
{
	class Extension;
}

namespace uml 
{
	class Feature;
}

namespace uml 
{
	class Generalization;
}

namespace uml 
{
	class GeneralizationSet;
}

namespace uml 
{
	class InterfaceRealization;
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
	class Operation;
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
	class PackageableElement;
}

namespace uml 
{
	class Port;
}

namespace uml 
{
	class Property;
}

namespace uml 
{
	class Reception;
}

namespace uml 
{
	class RedefinableElement;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class Substitution;
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

namespace uml 
{
	class UseCase;
}

// base class includes
#include "uml/BehavioredClassifier.hpp"

#include "uml/EncapsulatedClassifier.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A Class classifies a set of objects and specifies the features that characterize the structure and behavior of those objects.  A Class may have an internal structure and Ports.
	<p>From package UML::StructuredClassifiers.</p> */
	class Class:virtual public BehavioredClassifier,virtual public EncapsulatedClassifier
	{
		public:
 			Class(const Class &) {}
			Class& operator=(Class const&) = delete;

		protected:
			Class(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Class() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 Creates an operation with the specified name, parameter names, parameter types, and return type (or null) as an owned operation of this class. */ 
			virtual std::shared_ptr<uml::Operation> createOwnedOperation(std::string name,std::shared_ptr<Bag<std::string> >  parameterNames,std::shared_ptr<Bag<uml::Type> >  parameterTypes,std::shared_ptr<uml::Type>  returnType)  = 0;
			
			/*!
			 Derivation for Class::/extension : Extension
			result = (Extension.allInstances()->select(ext | 
			  let endTypes : Sequence(Classifier) = ext.memberEnd->collect(type.oclAsType(Classifier)) in
			  endTypes->includes(self) or endTypes.allParents()->includes(self) ))
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual std::shared_ptr<Bag<uml::Extension> > getExtensions()  = 0;
			
			/*!
			 Derivation for Class::/superClass : Class
			result = (self.general()->select(oclIsKindOf(Class))->collect(oclAsType(Class))->asSet())
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual std::shared_ptr<Bag<uml::Class> > getSuperClasses()  = 0;
			
			/*!
			 Determines whether this class is a metaclass. */ 
			virtual bool isMetaclass()  = 0;
			
			/*!
			 Only an active Class may own Receptions and have a classifierBehavior.
			not isActive implies (ownedReception->isEmpty() and classifierBehavior = null) */ 
			virtual bool passive_class(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Determines whether an object specified by this Class is active or not. If true, then the owning Class is referred to as an active Class. If false, then such a Class is referred to as a passive Class.
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual bool getIsActive() const = 0;
			
			/*!
			 Determines whether an object specified by this Class is active or not. If true, then the owning Class is referred to as an active Class. If false, then such a Class is referred to as a passive Class.
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual void setIsActive (bool _isActive)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 This property is used when the Class is acting as a metaclass. It references the Extensions that specify additional properties of the metaclass. The property is derived from the Extensions whose memberEnds are typed by the Class.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Bag<uml::Extension>> getExtension() const = 0;
			
			/*!
			 The Classifiers owned by the Class that are not ownedBehaviors.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::Classifier, uml::NamedElement>> getNestedClassifier() const = 0;
			
			/*!
			 The Operations owned by the Class.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::Operation, uml::Feature,uml::NamedElement>> getOwnedOperation() const = 0;
			
			/*!
			 The Receptions owned by the Class.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::Reception, uml::Feature,uml::NamedElement>> getOwnedReception() const = 0;
			
			/*!
			 The superclasses of a Class, derived from its Generalizations.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Bag<uml::Class>> getSuperClass() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 Determines whether an object specified by this Class is active or not. If true, then the owning Class is referred to as an active Class. If false, then such a Class is referred to as a passive Class.
			<p>From package UML::StructuredClassifiers.</p> */ 
			bool m_isActive = false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 This property is used when the Class is acting as a metaclass. It references the Extensions that specify additional properties of the metaclass. The property is derived from the Extensions whose memberEnds are typed by the Class.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<Bag<uml::Extension>> m_extension;
			/*!
			 The Classifiers owned by the Class that are not ownedBehaviors.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<Subset<uml::Classifier, uml::NamedElement>> m_nestedClassifier;
			/*!
			 The Operations owned by the Class.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<Subset<uml::Operation, uml::Feature,uml::NamedElement>> m_ownedOperation;
			/*!
			 The Receptions owned by the Class.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<Subset<uml::Reception, uml::Feature,uml::NamedElement>> m_ownedReception;
			/*!
			 The superclasses of a Class, derived from its Generalizations.
			<p>From package UML::StructuredClassifiers.</p> */
			std::shared_ptr<Bag<uml::Class>> m_superClass;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::Feature>> getAttribute() const = 0;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement>> getFeature() const = 0;/*!
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
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const = 0;/*!
			 The roles that instances may play in this StructuredClassifier.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::ConnectableElement, uml::NamedElement>> getRole() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_CLASS_HPP */
