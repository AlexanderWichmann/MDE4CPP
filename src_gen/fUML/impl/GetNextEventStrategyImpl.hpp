//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_GETNEXTEVENTSTRATEGYGETNEXTEVENTSTRATEGYIMPL_HPP
#define FUML_GETNEXTEVENTSTRATEGYGETNEXTEVENTSTRATEGYIMPL_HPP

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
#include "../GetNextEventStrategy.hpp"

#include "impl/SemanticStrategyImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace fUML 
{
	class GetNextEventStrategyImpl :virtual public SemanticStrategyImpl, virtual public GetNextEventStrategy 
	{
		public: 
			GetNextEventStrategyImpl(const GetNextEventStrategyImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			GetNextEventStrategyImpl& operator=(GetNextEventStrategyImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			GetNextEventStrategyImpl();



		public:
			//destructor
			virtual ~GetNextEventStrategyImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::SignalInstance> retrieveNextEvent(std::shared_ptr<fUML::ObjectActivation>  objectActivation)  ;
			
			
			
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
#endif /* end of include guard: FUML_GETNEXTEVENTSTRATEGYGETNEXTEVENTSTRATEGYIMPL_HPP */

