//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_PACKAGEABLEELEMENTPACKAGEABLEELEMENTIMPL_HPP
#define UML_PACKAGEABLEELEMENTPACKAGEABLEELEMENTIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../PackageableElement.hpp"

#include "impl/NamedElementImpl.hpp"
#include "impl/ParameterableElementImpl.hpp"


//*********************************
namespace uml 
{
	class PackageableElementImpl :virtual public NamedElementImpl, virtual public ParameterableElementImpl, virtual public PackageableElement
	{
		public: 
			PackageableElementImpl(const PackageableElementImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			PackageableElementImpl& operator=(PackageableElementImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			PackageableElementImpl();

		public:
			//destructor
			virtual ~PackageableElementImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 A PackageableElement owned by a Namespace must have a visibility.
			visibility = null implies namespace = null */ 
			virtual bool namespace_needs_visibility(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			
			
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
#endif /* end of include guard: UML_PACKAGEABLEELEMENTPACKAGEABLEELEMENTIMPL_HPP */

