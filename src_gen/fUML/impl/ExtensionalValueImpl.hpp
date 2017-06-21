//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_EXTENSIONALVALUEEXTENSIONALVALUEIMPL_HPP
#define FUML_EXTENSIONALVALUEEXTENSIONALVALUEIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../ExtensionalValue.hpp"

#include "impl/CompoundValueImpl.hpp"

#include "FUMLFactory.hpp"


//*********************************
namespace fUML 
{
	class ExtensionalValueImpl :virtual public CompoundValueImpl, virtual public ExtensionalValue 
	{
		public: 
			ExtensionalValueImpl(const ExtensionalValueImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ExtensionalValueImpl& operator=(ExtensionalValueImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ExtensionalValueImpl();

		public:
			//destructor
			virtual ~ExtensionalValueImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void destroy()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::Locus> getLocus() const ;
			
			/*!
			 */
			virtual void setLocus(std::shared_ptr<fUML::Locus> _locus) ;
							
			
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
#endif /* end of include guard: FUML_EXTENSIONALVALUEEXTENSIONALVALUEIMPL_HPP */
