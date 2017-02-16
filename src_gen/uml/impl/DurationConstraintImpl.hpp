//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DURATIONCONSTRAINTDURATIONCONSTRAINTIMPL_HPP
#define UML_DURATIONCONSTRAINTDURATIONCONSTRAINTIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../DurationConstraint.hpp"

#include "impl/IntervalConstraintImpl.hpp"


//*********************************
namespace uml 
{
	class DurationConstraintImpl :virtual public IntervalConstraintImpl, virtual public DurationConstraint
	{
		public: 
			DurationConstraintImpl(const DurationConstraintImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			DurationConstraintImpl& operator=(DurationConstraintImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			DurationConstraintImpl();

		public:
			//destructor
			virtual ~DurationConstraintImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The multiplicity of firstEvent must be 2 if the multiplicity of constrainedElement is 2. Otherwise the multiplicity of firstEvent is 0.
			if (constrainedElement->size() = 2)
			  then (firstEvent->size() = 2) else (firstEvent->size() = 0) 
			endif */ 
			virtual bool first_event_multiplicity(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 A DurationConstraint has either one or two constrainedElements.
			constrainedElement->size() = 1 or constrainedElement->size()=2 */ 
			virtual bool has_one_or_two_constrainedElements(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 The value of firstEvent[i] is related to constrainedElement[i] (where i is 1 or 2). If firstEvent[i] is true, then the corresponding observation event is the first time instant the execution enters constrainedElement[i]. If firstEvent[i] is false, then the corresponding observation event is the last time instant the execution is within constrainedElement[i].
			<p>From package UML::Values.</p> */ 
			virtual std::vector<bool> *  getFirstEvent() const ;
			
			/*!
			 The value of firstEvent[i] is related to constrainedElement[i] (where i is 1 or 2). If firstEvent[i] is true, then the corresponding observation event is the first time instant the execution enters constrainedElement[i]. If firstEvent[i] is false, then the corresponding observation event is the last time instant the execution is within constrainedElement[i].
			<p>From package UML::Values.</p> */ 
			virtual void setFirstEvent (std::vector<bool> *  _firstEvent); 
			
			
			
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
#endif /* end of include guard: UML_DURATIONCONSTRAINTDURATIONCONSTRAINTIMPL_HPP */

