//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_UNLIMITEDNATURALVALUEUNLIMITEDNATURALVALUEIMPL_HPP
#define FUML_UNLIMITEDNATURALVALUEUNLIMITEDNATURALVALUEIMPL_HPP

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
#include "../UnlimitedNaturalValue.hpp"

#include "impl/PrimitiveValueImpl.hpp"

#include "SubsetUnion.hpp"

#include "FUMLFactory.hpp"
#include "UmlFactory.hpp"
#include "LiteralUnlimitedNatural.hpp"
#include "Type.hpp"
#include "PrimitiveType.hpp"


//*********************************
namespace fUML 
{
	class UnlimitedNaturalValueImpl :virtual public PrimitiveValueImpl, virtual public UnlimitedNaturalValue 
	{
		public: 
			UnlimitedNaturalValueImpl(const UnlimitedNaturalValueImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			UnlimitedNaturalValueImpl& operator=(UnlimitedNaturalValueImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			UnlimitedNaturalValueImpl();



		public:
			//destructor
			virtual ~UnlimitedNaturalValueImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool equals(std::shared_ptr<fUML::Value>  otherValue)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::ValueSpecification> specify()  ;
			
			/*!
			 */ 
			virtual std::string toString()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual int getValue() const ;
			
			/*!
			 */ 
			virtual void setValue (int _value); 
			
			
			
			//*********************************
			// Reference
			//*********************************
							
			
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
#endif /* end of include guard: FUML_UNLIMITEDNATURALVALUEUNLIMITEDNATURALVALUEIMPL_HPP */

