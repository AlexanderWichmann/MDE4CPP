//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_FEATUREFEATUREIMPL_HPP
#define UML_FEATUREFEATUREIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../Feature.hpp"

#include "impl/RedefinableElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class FeatureImpl :virtual public RedefinableElementImpl, virtual public Feature 
	{
		public: 
			FeatureImpl(const FeatureImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			FeatureImpl& operator=(FeatureImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			FeatureImpl();

		public:
			//destructor
			virtual ~FeatureImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies whether this Feature characterizes individual instances classified by the Classifier (false) or the Classifier itself (true).
			<p>From package UML::Classification.</p> */ 
			virtual bool getIsStatic() const ;
			
			/*!
			 Specifies whether this Feature characterizes individual instances classified by the Classifier (false) or the Classifier itself (true).
			<p>From package UML::Classification.</p> */ 
			virtual void setIsStatic (bool _isStatic); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 The Classifiers that have this Feature as a feature.
			<p>From package UML::Classification.</p> */
			virtual 		std::shared_ptr<Union<uml::Classifier> > getFeaturingClassifier() const ;/*!
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
#endif /* end of include guard: UML_FEATUREFEATUREIMPL_HPP */

