//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_CLEARASSOCIATIONACTIONACTIVATIONCLEARASSOCIATIONACTIONACTIVATIONIMPL_HPP
#define FUML_CLEARASSOCIATIONACTIONACTIVATIONCLEARASSOCIATIONACTIONACTIVATIONIMPL_HPP

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
#include "../ClearAssociationActionActivation.hpp"

#include "impl/ActionActivationImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace fUML 
{
	class ClearAssociationActionActivationImpl :virtual public ActionActivationImpl, virtual public ClearAssociationActionActivation 
	{
		public: 
			ClearAssociationActionActivationImpl(const ClearAssociationActionActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ClearAssociationActionActivationImpl& operator=(ClearAssociationActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ClearAssociationActionActivationImpl();



		public:
			//destructor
			virtual ~ClearAssociationActionActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
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
#endif /* end of include guard: FUML_CLEARASSOCIATIONACTIONACTIVATIONCLEARASSOCIATIONACTIONACTIVATIONIMPL_HPP */

