//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_COMPOUNDVALUECOMPOUNDVALUEIMPL_HPP
#define FUML_COMPOUNDVALUECOMPOUNDVALUEIMPL_HPP

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

//*********************************
// generated Includes

//Model includes
#include "../CompoundValue.hpp"

#include "impl/StructuredValueImpl.hpp"

#include "SubsetUnion.hpp"

#include "Classifier.hpp"
#include <FUMLFactory.hpp>
#include <cstdio>

#include "StructuralFeature.hpp"


//*********************************
namespace fUML 
{
	class CompoundValueImpl :virtual public StructuredValueImpl, virtual public CompoundValue 
	{
		public: 
			CompoundValueImpl(const CompoundValueImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			CompoundValueImpl& operator=(CompoundValueImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			CompoundValueImpl();



		public:
			//destructor
			virtual ~CompoundValueImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void assignFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature,std::shared_ptr<Bag<fUML::Value> >  values,int position)  ;
			
			/*!
			 */ 
			virtual bool equals(std::shared_ptr<fUML::Value>  otherValue)  ;
			
			/*!
			 */ 
			virtual void removeFeatureValues(std::shared_ptr<uml::Classifier>  classifier)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::FeatureValue> retrieveFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::FeatureValue> > retrieveFeatureValues()  ;
			
			/*!
			 */ 
			virtual std::string toString()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr< Bag<fUML::FeatureValue> > getFeatureValues() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_COMPOUNDVALUECOMPOUNDVALUEIMPL_HPP */

