//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_TOKENTOKENIMPL_HPP
#define FUML_TOKENTOKENIMPL_HPP

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
#include "../Token.hpp"


#include "impl/EObjectImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace fUML 
{
	class TokenImpl :virtual public ecore::EObjectImpl,
virtual public Token 
	{
		public: 
			TokenImpl(const TokenImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			TokenImpl& operator=(TokenImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			TokenImpl();



		public:
			//destructor
			virtual ~TokenImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool equals(std::shared_ptr<fUML::Token>  other)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value> getValue()  const  ;
			
			/*!
			 */ 
			virtual bool isControl()  ;
			
			/*!
			 */ 
			virtual bool isWithdrawn()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Token> transfer(std::shared_ptr<fUML::ActivityNodeActivation>  holder)  ;
			
			/*!
			 */ 
			virtual void withdraw()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::weak_ptr<fUML::ActivityNodeActivation > getHolder() const ;
			
			/*!
			 */
			virtual void setHolder(std::shared_ptr<fUML::ActivityNodeActivation> _holder_holder) ;
							
			
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
#endif /* end of include guard: FUML_TOKENTOKENIMPL_HPP */

