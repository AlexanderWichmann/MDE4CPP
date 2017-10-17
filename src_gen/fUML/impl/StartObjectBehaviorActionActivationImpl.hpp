//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_STARTOBJECTBEHAVIORACTIONACTIVATIONSTARTOBJECTBEHAVIORACTIONACTIVATIONIMPL_HPP
#define FUML_STARTOBJECTBEHAVIORACTIONACTIVATIONSTARTOBJECTBEHAVIORACTIONACTIVATIONIMPL_HPP

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
#include "../StartObjectBehaviorActionActivation.hpp"

#include "impl/InvocationActionActivationImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace fUML 
{
	class StartObjectBehaviorActionActivationImpl :virtual public InvocationActionActivationImpl, virtual public StartObjectBehaviorActionActivation 
	{
		public: 
			StartObjectBehaviorActionActivationImpl(const StartObjectBehaviorActionActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			StartObjectBehaviorActionActivationImpl& operator=(StartObjectBehaviorActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			StartObjectBehaviorActionActivationImpl();



		public:
			//destructor
			virtual ~StartObjectBehaviorActionActivationImpl();
			
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
#endif /* end of include guard: FUML_STARTOBJECTBEHAVIORACTIONACTIVATIONSTARTOBJECTBEHAVIORACTIONACTIVATIONIMPL_HPP */

