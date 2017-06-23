//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INTERVALINTERVALIMPL_HPP
#define UML_INTERVALINTERVALIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../Interval.hpp"

#include "impl/ValueSpecificationImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class IntervalImpl :virtual public ValueSpecificationImpl, virtual public Interval 
	{
		public: 
			IntervalImpl(const IntervalImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			IntervalImpl& operator=(IntervalImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			IntervalImpl();

		public:
			//destructor
			virtual ~IntervalImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Refers to the ValueSpecification denoting the maximum value of the range.
			<p>From package UML::Values.</p> */
			virtual std::shared_ptr<uml::ValueSpecification > getMax() const ;
			
			/*!
			 Refers to the ValueSpecification denoting the maximum value of the range.
			<p>From package UML::Values.</p> */
			virtual void setMax(std::shared_ptr<uml::ValueSpecification> _max_max) ;
			/*!
			 Refers to the ValueSpecification denoting the minimum value of the range.
			<p>From package UML::Values.</p> */
			virtual std::shared_ptr<uml::ValueSpecification > getMin() const ;
			
			/*!
			 Refers to the ValueSpecification denoting the minimum value of the range.
			<p>From package UML::Values.</p> */
			virtual void setMin(std::shared_ptr<uml::ValueSpecification> _min_min) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
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
#endif /* end of include guard: UML_INTERVALINTERVALIMPL_HPP */

