//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_LIFELINELIFELINEIMPL_HPP
#define UML_LIFELINELIFELINEIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../Lifeline.hpp"

#include "impl/NamedElementImpl.hpp"


//*********************************
namespace uml 
{
	class LifelineImpl :virtual public NamedElementImpl, virtual public Lifeline
	{
		public: 
			LifelineImpl(const LifelineImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			LifelineImpl& operator=(LifelineImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			LifelineImpl();

		public:
			//destructor
			virtual ~LifelineImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The selector for a Lifeline must only be specified if the referenced Part is multivalued.
			 self.selector->notEmpty() = (self.represents.oclIsKindOf(MultiplicityElement) and self.represents.oclAsType(MultiplicityElement).isMultivalued()) */ 
			virtual bool selector_specified(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 If a lifeline is in an Interaction referred to by an InteractionUse in an enclosing Interaction,  and that lifeline is common with another lifeline in an Interaction referred to by another InteractonUse within that same enclosing Interaction, it must be common to a lifeline within that enclosing Interaction. By common Lifelines we mean Lifelines with the same selector and represents associations.
			let intUses : Set(InteractionUse) = interaction.interactionUse  in 
			intUses->forAll
			( iuse : InteractionUse | 
			let usingInteraction : Set(Interaction)  = iuse.enclosingInteraction->asSet()
			->union(
			iuse.enclosingOperand.combinedFragment->asSet()->closure(enclosingOperand.combinedFragment).enclosingInteraction->asSet()
			               ) 
			in
			let peerUses : Set(InteractionUse) = usingInteraction.fragment->select(oclIsKindOf(InteractionUse)).oclAsType(InteractionUse)->asSet()
			->union(
			usingInteraction.fragment->select(oclIsKindOf(CombinedFragment)).oclAsType(CombinedFragment)->asSet()
			->closure(operand.fragment->select(oclIsKindOf(CombinedFragment)).oclAsType(CombinedFragment)).operand.fragment->
			select(oclIsKindOf(InteractionUse)).oclAsType(InteractionUse)->asSet()
			               )->excluding(iuse)
			 in
			peerUses->forAll( peerUse : InteractionUse |
			 peerUse.refersTo.lifeline->forAll( l : Lifeline | (l.represents = self.represents and 
			 ( self.selector.oclIsKindOf(LiteralString) implies
			  l.selector.oclIsKindOf(LiteralString) and 
			  self.selector.oclAsType(LiteralString).value = l.selector.oclAsType(LiteralString).value )
			  and 
			( self.selector.oclIsKindOf(LiteralInteger) implies
			  l.selector.oclIsKindOf(LiteralInteger) and 
			  self.selector.oclAsType(LiteralInteger).value = l.selector.oclAsType(LiteralInteger).value )
			)  
			implies
			 usingInteraction.lifeline->exists(represents = self.represents and
			 ( self.selector.oclIsKindOf(LiteralString) implies
			  l.selector.oclIsKindOf(LiteralString) and 
			  self.selector.oclAsType(LiteralString).value = l.selector.oclAsType(LiteralString).value )
			and 
			( self.selector.oclIsKindOf(LiteralInteger) implies
			  l.selector.oclIsKindOf(LiteralInteger) and 
			  self.selector.oclAsType(LiteralInteger).value = l.selector.oclAsType(LiteralInteger).value )
			)
			                                                )
			                    )
			) */ 
			virtual bool interaction_uses_share_lifeline(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The classifier containing the referenced ConnectableElement must be the same classifier, or an ancestor, of the classifier that contains the interaction enclosing this lifeline.
			represents.namespace->closure(namespace)->includes(interaction._'context') */ 
			virtual bool same_classifier(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The selector value, if present, must be a LiteralString or a LiteralInteger
			self.selector->notEmpty() implies 
			self.selector.oclIsKindOf(LiteralInteger) or 
			self.selector.oclIsKindOf(LiteralString) */ 
			virtual bool selector_int_or_string(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 References the Interaction that represents the decomposition.
			<p>From package UML::Interactions.</p> */
			virtual uml::PartDecomposition *  getDecomposedAs() const ;
			
			/*!
			 References the Interaction that represents the decomposition.
			<p>From package UML::Interactions.</p> */
			virtual void setDecomposedAs(uml::PartDecomposition *  _decomposedAs) ;
			
			/*!
			 References the Interaction enclosing this Lifeline.
			<p>From package UML::Interactions.</p> */
			virtual uml::Interaction *  getInteraction() const ;
			
			/*!
			 References the Interaction enclosing this Lifeline.
			<p>From package UML::Interactions.</p> */
			virtual void setInteraction(uml::Interaction *  _interaction) ;
			
			/*!
			 References the ConnectableElement within the classifier that contains the enclosing interaction.
			<p>From package UML::Interactions.</p> */
			virtual uml::ConnectableElement *  getRepresents() const ;
			
			/*!
			 References the ConnectableElement within the classifier that contains the enclosing interaction.
			<p>From package UML::Interactions.</p> */
			virtual void setRepresents(uml::ConnectableElement *  _represents) ;
			
			/*!
			 If the referenced ConnectableElement is multivalued, then this specifies the specific individual part within that set.
			<p>From package UML::Interactions.</p> */
			virtual uml::ValueSpecification *  getSelector() const ;
			
			/*!
			 If the referenced ConnectableElement is multivalued, then this specifies the specific individual part within that set.
			<p>From package UML::Interactions.</p> */
			virtual void setSelector(uml::ValueSpecification *  _selector) ;
			
			/*!
			 References the InteractionFragments in which this Lifeline takes part.
			<p>From package UML::Interactions.</p> */
			virtual std::vector<uml::InteractionFragment * > *  getCoveredBy() const ;
			
							
			
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
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::Namespace *  getNamespace() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual ecore::EClass* eStaticClass() const;
	};
}
#endif /* end of include guard: UML_LIFELINELIFELINEIMPL_HPP */

