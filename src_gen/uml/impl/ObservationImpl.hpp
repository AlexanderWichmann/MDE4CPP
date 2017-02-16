//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_OBSERVATIONOBSERVATIONIMPL_HPP
#define UML_OBSERVATIONOBSERVATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../Observation.hpp"

#include "impl/PackageableElementImpl.hpp"


//*********************************
namespace uml 
{
	class ObservationImpl :virtual public PackageableElementImpl, virtual public Observation
	{
		public: 
			ObservationImpl(const ObservationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ObservationImpl& operator=(ObservationImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ObservationImpl();

		public:
			//destructor
			virtual ~ObservationImpl();
			
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
#endif /* end of include guard: UML_OBSERVATIONOBSERVATIONIMPL_HPP */

