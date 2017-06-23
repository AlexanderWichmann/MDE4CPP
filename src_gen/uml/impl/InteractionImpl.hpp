//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INTERACTIONINTERACTIONIMPL_HPP
#define UML_INTERACTIONINTERACTIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../Interaction.hpp"

#include "impl/BehaviorImpl.hpp"
#include "impl/InteractionFragmentImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class InteractionImpl :virtual public BehaviorImpl, virtual public InteractionFragmentImpl, virtual public Interaction 
	{
		public: 
			InteractionImpl(const InteractionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			InteractionImpl& operator=(InteractionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			InteractionImpl();

		public:
			//destructor
			virtual ~InteractionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 An Interaction instance must not be contained within another Interaction instance.
			enclosingInteraction->isEmpty() */ 
			virtual bool
			 not_contained(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Specifies the participants in this Interaction.
			<p>From package UML::Interactions.</p> */
			virtual 		std::shared_ptr<Subset<uml::Lifeline, uml::NamedElement > >
			 getLifeline() const ;
			
			/*!
			 The ordered set of fragments in the Interaction.
			<p>From package UML::Interactions.</p> */
			virtual 		std::shared_ptr<Subset<uml::InteractionFragment, uml::NamedElement > >
			 getFragment() const ;
			
			/*!
			 Actions owned by the Interaction.
			<p>From package UML::Interactions.</p> */
			virtual 		std::shared_ptr<Subset<uml::Action, uml::Element > >
			 getAction() const ;
			
			/*!
			 Specifies the gates that form the message interface between this Interaction and any InteractionUses which reference it.
			<p>From package UML::Interactions.</p> */
			virtual 		std::shared_ptr<Subset<uml::Gate, uml::NamedElement > >
			 getFormalGate() const ;
			
			/*!
			 The Messages contained in this Interaction.
			<p>From package UML::Interactions.</p> */
			virtual 		std::shared_ptr<Subset<uml::Message, uml::NamedElement > >
			 getMessage() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p> */
			virtual 		std::shared_ptr<SubsetUnion<uml::Property, uml::Feature > >
			 getAttribute() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element
					,uml::NamedElement > >
			 getOwnedMember() const ;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::NamedElement> > getMember() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual 		std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement > >
			 getFeature() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual 		std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const ;/*!
			 The contexts that this element may be redefined from.
			<p>From package UML::Classification.</p> */
			virtual 		std::shared_ptr<Union<uml::Classifier> > getRedefinitionContext() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace > getNamespace() const ;/*!
			 The roles that instances may play in this StructuredClassifier.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual 		std::shared_ptr<SubsetUnion<uml::ConnectableElement, uml::NamedElement > >
			 getRole() const ;/*!
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
#endif /* end of include guard: UML_INTERACTIONINTERACTIONIMPL_HPP */

