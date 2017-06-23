//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_COMBINEDFRAGMENTCOMBINEDFRAGMENTIMPL_HPP
#define UML_COMBINEDFRAGMENTCOMBINEDFRAGMENTIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../CombinedFragment.hpp"

#include "impl/InteractionFragmentImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class CombinedFragmentImpl :virtual public InteractionFragmentImpl, virtual public CombinedFragment 
	{
		public: 
			CombinedFragmentImpl(const CombinedFragmentImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			CombinedFragmentImpl& operator=(CombinedFragmentImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			CombinedFragmentImpl();

		public:
			//destructor
			virtual ~CombinedFragmentImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 If the interactionOperator is break, the corresponding InteractionOperand must cover all Lifelines covered by the enclosing InteractionFragment.
			interactionOperator=InteractionOperatorKind::break  implies   
			enclosingInteraction.oclAsType(InteractionFragment)->asSet()->union(
			   enclosingOperand.oclAsType(InteractionFragment)->asSet()).covered->asSet() = self.covered->asSet() */ 
			virtual bool
			 break_(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The interaction operators 'consider' and 'ignore' can only be used for the ConsiderIgnoreFragment subtype of CombinedFragment
			((interactionOperator = InteractionOperatorKind::consider) or (interactionOperator =  InteractionOperatorKind::ignore)) implies oclIsKindOf(ConsiderIgnoreFragment) */ 
			virtual bool
			 consider_and_ignore(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 If the interactionOperator is opt, loop, break, assert or neg, there must be exactly one operand.
			(interactionOperator =  InteractionOperatorKind::opt or interactionOperator = InteractionOperatorKind::loop or
			interactionOperator = InteractionOperatorKind::break or interactionOperator = InteractionOperatorKind::assert or
			interactionOperator = InteractionOperatorKind::neg)
			implies operand->size()=1 */ 
			virtual bool
			 opt_loop_break_neg(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies the operation which defines the semantics of this combination of InteractionFragments.
			<p>From package UML::Interactions.</p> */ 
			virtual InteractionOperatorKind getInteractionOperator() const ;
			
			/*!
			 Specifies the operation which defines the semantics of this combination of InteractionFragments.
			<p>From package UML::Interactions.</p> */ 
			virtual void setInteractionOperator (InteractionOperatorKind _interactionOperator); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Specifies the gates that form the interface between this CombinedFragment and its surroundings
			<p>From package UML::Interactions.</p> */
			virtual 		std::shared_ptr<Subset<uml::Gate, uml::Element > >
			 getCfragmentGate() const ;
			
			/*!
			 The set of operands of the combined fragment.
			<p>From package UML::Interactions.</p> */
			virtual 		std::shared_ptr<Subset<uml::InteractionOperand, uml::Element > >
			 getOperand() const ;
			
							
			
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
#endif /* end of include guard: UML_COMBINEDFRAGMENTCOMBINEDFRAGMENTIMPL_HPP */

