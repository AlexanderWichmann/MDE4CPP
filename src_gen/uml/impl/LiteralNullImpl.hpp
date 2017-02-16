//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_LITERALNULLLITERALNULLIMPL_HPP
#define UML_LITERALNULLLITERALNULLIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../LiteralNull.hpp"

#include "impl/LiteralSpecificationImpl.hpp"


//*********************************
namespace uml 
{
	class LiteralNullImpl :virtual public LiteralSpecificationImpl, virtual public LiteralNull
	{
		public: 
			LiteralNullImpl(const LiteralNullImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			LiteralNullImpl& operator=(LiteralNullImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			LiteralNullImpl();

		public:
			//destructor
			virtual ~LiteralNullImpl();
			
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
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::Element *  getOwner() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual ecore::EClass* eStaticClass() const;
	};
}
#endif /* end of include guard: UML_LITERALNULLLITERALNULLIMPL_HPP */

