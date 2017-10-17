//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_CALLACTIONACTIVATIONCALLACTIONACTIVATIONIMPL_HPP
#define FUML_CALLACTIONACTIVATIONCALLACTIONACTIVATIONIMPL_HPP

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
#include "../CallActionActivation.hpp"

#include "impl/InvocationActionActivationImpl.hpp"

#include "SubsetUnion.hpp"

#include "Execution.hpp"
#include "ParameterValue.hpp"
#include "InputPin.hpp"
#include "OutputPin.hpp"
#include "Parameter.hpp"
#include "CallAction.hpp"
#include "Behavior.hpp"
#include "FUMLFactory.hpp"



//*********************************
namespace fUML 
{
	class CallActionActivationImpl :virtual public InvocationActionActivationImpl, virtual public CallActionActivation 
	{
		public: 
			CallActionActivationImpl(const CallActionActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			CallActionActivationImpl& operator=(CallActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			CallActionActivationImpl();



		public:
			//destructor
			virtual ~CallActionActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void doAction()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Execution> getCallExecution()  ;
			
			/*!
			 */ 
			virtual void removeCallExecution(std::shared_ptr<fUML::Execution>  execution)  ;
			
			/*!
			 */ 
			virtual void terminate()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr< Bag<fUML::Execution> > getCallExecutions() const ;
			
							
			
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
#endif /* end of include guard: FUML_CALLACTIONACTIVATIONCALLACTIONACTIVATIONIMPL_HPP */

