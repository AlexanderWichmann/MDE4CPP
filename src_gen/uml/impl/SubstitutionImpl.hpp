//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_SUBSTITUTIONSUBSTITUTIONIMPL_HPP
#define UML_SUBSTITUTIONSUBSTITUTIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../Substitution.hpp"

#include "impl/RealizationImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class SubstitutionImpl :virtual public RealizationImpl, virtual public Substitution 
	{
		public: 
			SubstitutionImpl(const SubstitutionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			SubstitutionImpl& operator=(SubstitutionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			SubstitutionImpl();

		public:
			//destructor
			virtual ~SubstitutionImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The contract with which the substituting classifier complies.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<uml::Classifier > getContract() const ;
			
			/*!
			 The contract with which the substituting classifier complies.
			<p>From package UML::Classification.</p> */
			virtual void setContract(std::shared_ptr<uml::Classifier> _contract_contract) ;
			/*!
			 Instances of the substituting classifier are runtime substitutable where instances of the contract classifier are expected.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<uml::Classifier > getSubstitutingClassifier() const ;
			
			/*!
			 Instances of the substituting classifier are runtime substitutable where instances of the contract classifier are expected.
			<p>From package UML::Classification.</p> */
			virtual void setSubstitutingClassifier(std::shared_ptr<uml::Classifier> _substitutingClassifier_substitutingClassifier) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getRelatedElement() const ;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<SubsetUnion<uml::Element, uml::Element > >
			 getTarget() const ;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<SubsetUnion<uml::Element, uml::Element > >
			 getSource() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element > getOwner() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_SUBSTITUTIONSUBSTITUTIONIMPL_HPP */

