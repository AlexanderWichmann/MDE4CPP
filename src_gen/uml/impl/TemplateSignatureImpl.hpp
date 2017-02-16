//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TEMPLATESIGNATURETEMPLATESIGNATUREIMPL_HPP
#define UML_TEMPLATESIGNATURETEMPLATESIGNATUREIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../TemplateSignature.hpp"

#include "impl/ElementImpl.hpp"


//*********************************
namespace uml 
{
	class TemplateSignatureImpl :virtual public ElementImpl, virtual public TemplateSignature
	{
		public: 
			TemplateSignatureImpl(const TemplateSignatureImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			TemplateSignatureImpl& operator=(TemplateSignatureImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			TemplateSignatureImpl();

		public:
			//destructor
			virtual ~TemplateSignatureImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 Parameters must own the ParameterableElements they parameter or those ParameterableElements must be owned by the TemplateableElement being templated.
			template.ownedElement->includesAll(parameter.parameteredElement->asSet() - parameter.ownedParameteredElement->asSet()) */ 
			virtual bool own_elements(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The names of the parameters of a TemplateSignature are unique.
			parameter->forAll( p1, p2 | (p1 <> p2 and p1.parameteredElement.oclIsKindOf(NamedElement) and p2.parameteredElement.oclIsKindOf(NamedElement) ) implies
			   p1.parameteredElement.oclAsType(NamedElement).name <> p2.parameteredElement.oclAsType(NamedElement).name) */ 
			virtual bool unique_parameters(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The ordered set of all formal TemplateParameters for this TemplateSignature.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::TemplateParameter * > *  getParameter() const ;
			
			/*!
			 The TemplateableElement that owns this TemplateSignature.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::TemplateableElement *  getTemplate() const ;
			
			/*!
			 The TemplateableElement that owns this TemplateSignature.
			<p>From package UML::CommonStructure.</p> */
			virtual void setTemplate(uml::TemplateableElement *  _template) ;
			
			/*!
			 The formal parameters that are owned by this TemplateSignature.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::TemplateParameter * > *  getOwnedParameter() const ;
			
							
			
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
#endif /* end of include guard: UML_TEMPLATESIGNATURETEMPLATESIGNATUREIMPL_HPP */

