//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DIRECTEDRELATIONSHIPDIRECTEDRELATIONSHIPIMPL_HPP
#define UML_DIRECTEDRELATIONSHIPDIRECTEDRELATIONSHIPIMPL_HPP

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

//#include "util/ProfileCallCount.hpp"

//*********************************
// generated Includes

//Model includes
#include "../DirectedRelationship.hpp"

#include "uml/impl/RelationshipImpl.hpp"



//*********************************
namespace uml 
{
	class DirectedRelationshipImpl :virtual public RelationshipImpl, virtual public DirectedRelationship 
	{
		public: 
			DirectedRelationshipImpl(const DirectedRelationshipImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			DirectedRelationshipImpl& operator=(DirectedRelationshipImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			DirectedRelationshipImpl();

			//Additional constructors for the containments back reference
			DirectedRelationshipImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~DirectedRelationshipImpl();
			
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
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getRelatedElement() const ;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element > > getSource() const ;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element > > getTarget() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual void eSet(int featureID, boost::any newValue) ;

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_DIRECTEDRELATIONSHIPDIRECTEDRELATIONSHIPIMPL_HPP */

