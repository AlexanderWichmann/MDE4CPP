//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TEMPLATEBINDINGTEMPLATEBINDINGIMPL_HPP
#define UML_TEMPLATEBINDINGTEMPLATEBINDINGIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../TemplateBinding.hpp"

#include "impl/DirectedRelationshipImpl.hpp"


//*********************************
namespace uml 
{
	class TemplateBindingImpl :virtual public DirectedRelationshipImpl, virtual public TemplateBinding
	{
		public: 
			TemplateBindingImpl(const TemplateBindingImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			TemplateBindingImpl& operator=(TemplateBindingImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			TemplateBindingImpl();

		public:
			//destructor
			virtual ~TemplateBindingImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 Each parameterSubstitution must refer to a formal TemplateParameter of the target TemplateSignature.
			parameterSubstitution->forAll(b | signature.parameter->includes(b.formal)) */ 
			virtual bool parameter_substitution_formal(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 A TemplateBiinding contains at most one TemplateParameterSubstitution for each formal TemplateParameter of the target TemplateSignature.
			signature.parameter->forAll(p | parameterSubstitution->select(b | b.formal = p)->size() <= 1) */ 
			virtual bool one_parameter_substitution(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The TemplateParameterSubstitutions owned by this TemplateBinding.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::TemplateParameterSubstitution * > *  getParameterSubstitution() const ;
			
			/*!
			 The TemplateSignature for the template that is the target of this TemplateBinding.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::TemplateSignature *  getSignature() const ;
			
			/*!
			 The TemplateSignature for the template that is the target of this TemplateBinding.
			<p>From package UML::CommonStructure.</p> */
			virtual void setSignature(uml::TemplateSignature *  _signature) ;
			
			/*!
			 The TemplateableElement that is bound by this TemplateBinding.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::TemplateableElement *  getBoundElement() const ;
			
			/*!
			 The TemplateableElement that is bound by this TemplateBinding.
			<p>From package UML::CommonStructure.</p> */
			virtual void setBoundElement(uml::TemplateableElement *  _boundElement) ;
			
							
			
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
#endif /* end of include guard: UML_TEMPLATEBINDINGTEMPLATEBINDINGIMPL_HPP */

