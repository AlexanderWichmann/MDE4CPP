//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_USECASE_HPP
#define UML_USECASE_HPP

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
	class Behavior;
}

namespace uml 
{
	class BehavioredClassifier;
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
	class Extend;
}

namespace uml 
{
	class ExtensionPoint;
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
	class Include;
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
	class Property;
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
	class UseCase;
}

// base class includes
#include "BehavioredClassifier.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A UseCase specifies a set of actions performed by its subjects, which yields an observable result that is of value for one or more Actors or other stakeholders of each subject.
	<p>From package UML::UseCases.</p> */
	class UseCase:virtual public BehavioredClassifier	{
		public:
 			UseCase(const UseCase &) {}
			UseCase& operator=(UseCase const&) = delete;
	
		protected:
			UseCase(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~UseCase() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 UseCases can only be involved in binary Associations.
			Association.allInstances()->forAll(a | a.memberEnd.type->includes(self) implies a.memberEnd->size() = 2) */ 
			virtual bool binary_associations(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 UseCases cannot have Associations to UseCases specifying the same subject.
			Association.allInstances()->forAll(a | a.memberEnd.type->includes(self) implies 
			   (
			   let usecases: Set(UseCase) = a.memberEnd.type->select(oclIsKindOf(UseCase))->collect(oclAsType(UseCase))->asSet() in
			   usecases->size() > 1 implies usecases->collect(subject)->size() > 1
			   )
			) */ 
			virtual bool no_association_to_use_case(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 A UseCase cannot include UseCases that directly or indirectly include it.
			not allIncludedUseCases()->includes(self) */ 
			virtual bool cannot_include_self(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 A UseCase must have a name.
			name -> notEmpty () */ 
			virtual bool must_have_name(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  = 0;
			
			/*!
			 The query allIncludedUseCases() returns the transitive closure of all UseCases (directly or indirectly) included by this UseCase.
			result = (self.include.addition->union(self.include.addition->collect(uc | uc.allIncludedUseCases()))->asSet())
			<p>From package UML::UseCases.</p> */ 
			virtual std::vector<uml::UseCase * > *  allIncludedUseCases()  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Extend relationships owned by this UseCase.
			<p>From package UML::UseCases.</p> */
			virtual std::vector<uml::Extend * > *  getExtend() const = 0;
			
			/*!
			 The ExtensionPoints owned by this UseCase.
			<p>From package UML::UseCases.</p> */
			virtual std::vector<uml::ExtensionPoint * > *  getExtensionPoint() const = 0;
			
			/*!
			 The Include relationships owned by this UseCase.
			<p>From package UML::UseCases.</p> */
			virtual std::vector<uml::Include * > *  getInclude() const = 0;
			
			/*!
			 The subjects to which this UseCase applies. Each subject or its parts realize all the UseCases that apply to it.
			<p>From package UML::UseCases.</p> */
			virtual std::vector<uml::Classifier * > *  getSubject() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The Extend relationships owned by this UseCase.
			<p>From package UML::UseCases.</p> */
			std::vector<uml::Extend * > *  m_extend =  nullptr ;
			/*!
			 The ExtensionPoints owned by this UseCase.
			<p>From package UML::UseCases.</p> */
			std::vector<uml::ExtensionPoint * > *  m_extensionPoint =  nullptr ;
			/*!
			 The Include relationships owned by this UseCase.
			<p>From package UML::UseCases.</p> */
			std::vector<uml::Include * > *  m_include =  nullptr ;
			/*!
			 The subjects to which this UseCase applies. Each subject or its parts realize all the UseCases that apply to it.
			<p>From package UML::UseCases.</p> */
			std::vector<uml::Classifier * > *  m_subject =  nullptr ;
			

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
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::vector<uml::Feature * > *  getFeature() const = 0;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::Namespace *  getNamespace() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::vector<uml::RedefinableElement * > *  getRedefinedElement() const = 0;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::NamedElement * > *  getMember() const = 0;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::NamedElement * > *  getOwnedMember() const = 0; 
	};

}
#endif /* end of include guard: UML_USECASE_HPP */

