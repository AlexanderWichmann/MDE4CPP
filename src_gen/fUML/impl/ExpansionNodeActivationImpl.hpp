//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_EXPANSIONNODEACTIVATIONEXPANSIONNODEACTIVATIONIMPL_HPP
#define FUML_EXPANSIONNODEACTIVATIONEXPANSIONNODEACTIVATIONIMPL_HPP

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
#include "../ExpansionNodeActivation.hpp"

#include "impl/ObjectNodeActivationImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace fUML 
{
	class ExpansionNodeActivationImpl :virtual public ObjectNodeActivationImpl, virtual public ExpansionNodeActivation 
	{
		public: 
			ExpansionNodeActivationImpl(const ExpansionNodeActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ExpansionNodeActivationImpl& operator=(ExpansionNodeActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ExpansionNodeActivationImpl();



		public:
			//destructor
			virtual ~ExpansionNodeActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::ExpansionRegionActivation> getExpansionRegionActivation()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
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
#endif /* end of include guard: FUML_EXPANSIONNODEACTIVATIONEXPANSIONNODEACTIVATIONIMPL_HPP */

