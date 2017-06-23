//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INTERACTIONUSEINTERACTIONUSEIMPL_HPP
#define UML_INTERACTIONUSEINTERACTIONUSEIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../InteractionUse.hpp"

#include "impl/InteractionFragmentImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class InteractionUseImpl :virtual public InteractionFragmentImpl, virtual public InteractionUse 
	{
		public: 
			InteractionUseImpl(const InteractionUseImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			InteractionUseImpl& operator=(InteractionUseImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			InteractionUseImpl();

		public:
			//destructor
			virtual ~InteractionUseImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 Actual Gates of the InteractionUse must match Formal Gates of the referred Interaction. Gates match when their names are equal and their messages correspond.
			actualGate->notEmpty() implies 
			refersTo.formalGate->forAll( fg : Gate | self.actualGate->select(matches(fg))->size()=1) and
			self.actualGate->forAll(ag : Gate | refersTo.formalGate->select(matches(ag))->size()=1) */ 
			virtual bool
			 gates_match(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The arguments must only be constants, parameters of the enclosing Interaction or attributes of the classifier owning the enclosing Interaction. */ 
			virtual bool
			 arguments_are_constants(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The returnValueRecipient must be a Property of a ConnectableElement that is represented by a Lifeline covered by this InteractionUse.
			returnValueRecipient->asSet()->notEmpty() implies
			let covCE : Set(ConnectableElement) = covered.represents->asSet() in 
			covCE->notEmpty() and let classes:Set(Classifier) = covCE.type.oclIsKindOf(Classifier).oclAsType(Classifier)->asSet() in 
			let allProps : Set(Property) = classes.attribute->union(classes.allParents().attribute)->asSet() in 
			allProps->includes(returnValueRecipient) */ 
			virtual bool
			 returnValueRecipient_coverage(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The arguments of the InteractionUse must correspond to parameters of the referred Interaction. */ 
			virtual bool
			 arguments_correspond_to_parameters(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The type of the returnValue must correspond to the type of the returnValueRecipient.
			returnValue.type->asSequence()->notEmpty() implies returnValue.type->asSequence()->first() = returnValueRecipient.type->asSequence()->first() */ 
			virtual bool
			 returnValue_type_recipient_correspondence(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The InteractionUse must cover all Lifelines of the enclosing Interaction that are common with the lifelines covered by the referred Interaction. Lifelines are common if they have the same selector and represents associationEnd values.
			let parentInteraction : Set(Interaction) = enclosingInteraction->asSet()->
			union(enclosingOperand.combinedFragment->closure(enclosingOperand.combinedFragment)->
			collect(enclosingInteraction).oclAsType(Interaction)->asSet()) in
			parentInteraction->size()=1 and let refInteraction : Interaction = refersTo in
			parentInteraction.covered-> forAll(intLifeline : Lifeline | refInteraction.covered->
			forAll( refLifeline : Lifeline | refLifeline.represents = intLifeline.represents and 
			(
			( refLifeline.selector.oclIsKindOf(LiteralString) implies
			  intLifeline.selector.oclIsKindOf(LiteralString) and 
			  refLifeline.selector.oclAsType(LiteralString).value = intLifeline.selector.oclAsType(LiteralString).value ) and
			( refLifeline.selector.oclIsKindOf(LiteralInteger) implies
			  intLifeline.selector.oclIsKindOf(LiteralInteger) and 
			  refLifeline.selector.oclAsType(LiteralInteger).value = intLifeline.selector.oclAsType(LiteralInteger).value )
			)
			 implies self.covered->asSet()->includes(intLifeline))) */ 
			virtual bool
			 all_lifelines(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The actual gates of the InteractionUse.
			<p>From package UML::Interactions.</p> */
			virtual 		std::shared_ptr<Subset<uml::Gate, uml::Element > >
			 getActualGate() const ;
			
			/*!
			 The actual arguments of the Interaction.
			<p>From package UML::Interactions.</p> */
			virtual 		std::shared_ptr<Subset<uml::ValueSpecification, uml::Element > >
			 getArgument() const ;
			
			/*!
			 Refers to the Interaction that defines its meaning.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<uml::Interaction > getRefersTo() const ;
			
			/*!
			 Refers to the Interaction that defines its meaning.
			<p>From package UML::Interactions.</p> */
			virtual void setRefersTo(std::shared_ptr<uml::Interaction> _refersTo_refersTo) ;
			/*!
			 The value of the executed Interaction.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<uml::ValueSpecification > getReturnValue() const ;
			
			/*!
			 The value of the executed Interaction.
			<p>From package UML::Interactions.</p> */
			virtual void setReturnValue(std::shared_ptr<uml::ValueSpecification> _returnValue_returnValue) ;
			/*!
			 The recipient of the return value.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<uml::Property > getReturnValueRecipient() const ;
			
			/*!
			 The recipient of the return value.
			<p>From package UML::Interactions.</p> */
			virtual void setReturnValueRecipient(std::shared_ptr<uml::Property> _returnValueRecipient_returnValueRecipient) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace > getNamespace() const ;/*!
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
#endif /* end of include guard: UML_INTERACTIONUSEINTERACTIONUSEIMPL_HPP */

