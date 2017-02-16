//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ACTORACTORIMPL_HPP
#define UML_ACTORACTORIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../Actor.hpp"

#include "impl/BehavioredClassifierImpl.hpp"


//*********************************
namespace uml 
{
	class ActorImpl :virtual public BehavioredClassifierImpl, virtual public Actor
	{
		public: 
			ActorImpl(const ActorImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ActorImpl& operator=(ActorImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ActorImpl();

		public:
			//destructor
			virtual ~ActorImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 An Actor can only have Associations to UseCases, Components, and Classes. Furthermore these Associations must be binary.
			Association.allInstances()->forAll( a |
			  a.memberEnd->collect(type)->includes(self) implies
			  (
			    a.memberEnd->size() = 2 and
			    let actorEnd : Property = a.memberEnd->any(type = self) in
			      actorEnd.opposite.class.oclIsKindOf(UseCase) or
			      ( actorEnd.opposite.class.oclIsKindOf(Class) and not
			         actorEnd.opposite.class.oclIsKindOf(Behavior))
			      )
			  ) */ 
			virtual bool associations(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 An Actor must have a name.
			name->notEmpty() */ 
			virtual bool must_have_name(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
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
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::NamedElement * > *  getMember() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::Namespace *  getNamespace() const ;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::vector<uml::Feature * > *  getFeature() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::vector<uml::RedefinableElement * > *  getRedefinedElement() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::NamedElement * > *  getOwnedMember() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual ecore::EClass* eStaticClass() const;
	};
}
#endif /* end of include guard: UML_ACTORACTORIMPL_HPP */

