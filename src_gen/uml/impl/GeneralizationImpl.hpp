//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_GENERALIZATIONGENERALIZATIONIMPL_HPP
#define UML_GENERALIZATIONGENERALIZATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../Generalization.hpp"

#include "impl/DirectedRelationshipImpl.hpp"


//*********************************
namespace uml 
{
	class GeneralizationImpl :virtual public DirectedRelationshipImpl, virtual public Generalization
	{
		public: 
			GeneralizationImpl(const GeneralizationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			GeneralizationImpl& operator=(GeneralizationImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			GeneralizationImpl();

		public:
			//destructor
			virtual ~GeneralizationImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Indicates whether the specific Classifier can be used wherever the general Classifier can be used. If true, the execution traces of the specific Classifier shall be a superset of the execution traces of the general Classifier. If false, there is no such constraint on execution traces. If unset, the modeler has not stated whether there is such a constraint or not.
			<p>From package UML::Classification.</p> */ 
			virtual bool getIsSubstitutable() const ;
			
			/*!
			 Indicates whether the specific Classifier can be used wherever the general Classifier can be used. If true, the execution traces of the specific Classifier shall be a superset of the execution traces of the general Classifier. If false, there is no such constraint on execution traces. If unset, the modeler has not stated whether there is such a constraint or not.
			<p>From package UML::Classification.</p> */ 
			virtual void setIsSubstitutable (bool _isSubstitutable); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The general classifier in the Generalization relationship.
			<p>From package UML::Classification.</p> */
			virtual uml::Classifier *  getGeneral() const ;
			
			/*!
			 The general classifier in the Generalization relationship.
			<p>From package UML::Classification.</p> */
			virtual void setGeneral(uml::Classifier *  _general) ;
			
			/*!
			 Represents a set of instances of Generalization.  A Generalization may appear in many GeneralizationSets.
			<p>From package UML::Classification.</p> */
			virtual std::vector<uml::GeneralizationSet * > *  getGeneralizationSet() const ;
			
			/*!
			 The specializing Classifier in the Generalization relationship.
			<p>From package UML::Classification.</p> */
			virtual uml::Classifier *  getSpecific() const ;
			
			/*!
			 The specializing Classifier in the Generalization relationship.
			<p>From package UML::Classification.</p> */
			virtual void setSpecific(uml::Classifier *  _specific) ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getOwnedElement() const ;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getTarget() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::Element *  getOwner() const ;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getSource() const ;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getRelatedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual ecore::EClass* eStaticClass() const;
	};
}
#endif /* end of include guard: UML_GENERALIZATIONGENERALIZATIONIMPL_HPP */

