//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_READLINKOBJECTENDQUALIFIERACTIONREADLINKOBJECTENDQUALIFIERACTIONIMPL_HPP
#define UML_READLINKOBJECTENDQUALIFIERACTIONREADLINKOBJECTENDQUALIFIERACTIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../ReadLinkObjectEndQualifierAction.hpp"

#include "impl/ActionImpl.hpp"


//*********************************
namespace uml 
{
	class ReadLinkObjectEndQualifierActionImpl :virtual public ActionImpl, virtual public ReadLinkObjectEndQualifierAction
	{
		public: 
			ReadLinkObjectEndQualifierActionImpl(const ReadLinkObjectEndQualifierActionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ReadLinkObjectEndQualifierActionImpl& operator=(ReadLinkObjectEndQualifierActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ReadLinkObjectEndQualifierActionImpl();

		public:
			//destructor
			virtual ~ReadLinkObjectEndQualifierActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The multiplicity of the object InputPin is 1..1.
			object.is(1,1) */ 
			virtual bool multiplicity_of_object(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The type of the object InputPin is the AssociationClass that owns the Association end that has the given qualifier Property.
			object.type = qualifier.associationEnd.association */ 
			virtual bool type_of_object(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The multiplicity of the qualifier Property is 1..1.
			qualifier.is(1,1) */ 
			virtual bool multiplicity_of_qualifier(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The ends of the Association must not be static.
			qualifier.associationEnd.association.memberEnd->forAll(e | not e.isStatic) */ 
			virtual bool ends_of_association(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The multiplicity of the result OutputPin is 1..1.
			result.is(1,1) */ 
			virtual bool multiplicity_of_result(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The type of the result OutputPin is the same as the type of the qualifier Property.
			result.type = qualifier.type */ 
			virtual bool same_type(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The association of the Association end of the qualifier Property must be an AssociationClass.
			qualifier.associationEnd.association.oclIsKindOf(AssociationClass) */ 
			virtual bool association_of_association(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The qualifier Property must be a qualifier of an Association end.
			qualifier.associationEnd <> null */ 
			virtual bool qualifier_attribute(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The InputPin from which the link object is obtained.
			<p>From package UML::Actions.</p> */
			virtual uml::InputPin *  getObject() const ;
			
			/*!
			 The InputPin from which the link object is obtained.
			<p>From package UML::Actions.</p> */
			virtual void setObject(uml::InputPin *  _object) ;
			
			/*!
			 The qualifier Property to be read.
			<p>From package UML::Actions.</p> */
			virtual uml::Property *  getQualifier() const ;
			
			/*!
			 The qualifier Property to be read.
			<p>From package UML::Actions.</p> */
			virtual void setQualifier(uml::Property *  _qualifier) ;
			
			/*!
			 The OutputPin where the result value is placed.
			<p>From package UML::Actions.</p> */
			virtual uml::OutputPin *  getResult() const ;
			
			/*!
			 The OutputPin where the result value is placed.
			<p>From package UML::Actions.</p> */
			virtual void setResult(uml::OutputPin *  _result) ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::vector<uml::ActivityGroup * > *  getInGroup() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::Element *  getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::vector<uml::RedefinableElement * > *  getRedefinedElement() const ;/*!
			 The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p> */
			virtual std::vector<uml::OutputPin * > *  getOutput() const ;/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::vector<uml::InputPin * > *  getInput() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual ecore::EClass* eStaticClass() const;
	};
}
#endif /* end of include guard: UML_READLINKOBJECTENDQUALIFIERACTIONREADLINKOBJECTENDQUALIFIERACTIONIMPL_HPP */

