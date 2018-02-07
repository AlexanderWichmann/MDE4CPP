//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DESTRUCTIONOCCURRENCESPECIFICATIONDESTRUCTIONOCCURRENCESPECIFICATIONIMPL_HPP
#define UML_DESTRUCTIONOCCURRENCESPECIFICATIONDESTRUCTIONOCCURRENCESPECIFICATIONIMPL_HPP

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
#include "../DestructionOccurrenceSpecification.hpp"

#include "uml/impl/MessageOccurrenceSpecificationImpl.hpp"



//*********************************
namespace uml 
{
	class DestructionOccurrenceSpecificationImpl :virtual public MessageOccurrenceSpecificationImpl, virtual public DestructionOccurrenceSpecification 
	{
		public: 
			DestructionOccurrenceSpecificationImpl(const DestructionOccurrenceSpecificationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			DestructionOccurrenceSpecificationImpl& operator=(DestructionOccurrenceSpecificationImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			DestructionOccurrenceSpecificationImpl();

			//Additional constructors for the containments back reference
			DestructionOccurrenceSpecificationImpl(std::weak_ptr<uml::Interaction > par_enclosingInteraction);


			//Additional constructors for the containments back reference
			DestructionOccurrenceSpecificationImpl(std::weak_ptr<uml::InteractionOperand > par_enclosingOperand);


			//Additional constructors for the containments back reference
			DestructionOccurrenceSpecificationImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			DestructionOccurrenceSpecificationImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~DestructionOccurrenceSpecificationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 No other OccurrenceSpecifications on a given Lifeline in an InteractionOperand may appear below a DestructionOccurrenceSpecification.
			let o : InteractionOperand = enclosingOperand in o->notEmpty() and 
			let peerEvents : OrderedSet(OccurrenceSpecification) = covered.events->select(enclosingOperand = o)
			in peerEvents->last() = self */ 
			virtual bool no_occurrence_specifications_below(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
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
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ; 
			 
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
#endif /* end of include guard: UML_DESTRUCTIONOCCURRENCESPECIFICATIONDESTRUCTIONOCCURRENCESPECIFICATIONIMPL_HPP */

