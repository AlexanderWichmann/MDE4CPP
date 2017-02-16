//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_UNMARSHALLACTIONUNMARSHALLACTIONIMPL_HPP
#define UML_UNMARSHALLACTIONUNMARSHALLACTIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../UnmarshallAction.hpp"

#include "impl/ActionImpl.hpp"


//*********************************
namespace uml 
{
	class UnmarshallActionImpl :virtual public ActionImpl, virtual public UnmarshallAction
	{
		public: 
			UnmarshallActionImpl(const UnmarshallActionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			UnmarshallActionImpl& operator=(UnmarshallActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			UnmarshallActionImpl();

		public:
			//destructor
			virtual ~UnmarshallActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The unmarshallType must have at least one StructuralFeature.
			unmarshallType.allAttributes()->size() >= 1 */ 
			virtual bool structural_feature(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The number of result outputPins must be the same as the number of attributes of the unmarshallType.
			unmarshallType.allAttributes()->size() = result->size() */ 
			virtual bool number_of_result(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The type, ordering and multiplicity of each attribute of the unmarshallType must be compatible with the type, ordering and multiplicity of the corresponding result OutputPin.
			let attribute:OrderedSet(Property) = unmarshallType.allAttributes() in
			Sequence{1..result->size()}->forAll(i | 
				attribute->at(i).type.conformsTo(result->at(i).type) and
				attribute->at(i).isOrdered=result->at(i).isOrdered and
				attribute->at(i).compatibleWith(result->at(i))) */ 
			virtual bool type_ordering_and_multiplicity(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The multiplicity of the object InputPin is 1..1
			object.is(1,1) */ 
			virtual bool multiplicity_of_object(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The type of the object InputPin conform to the unmarshallType.
			object.type.conformsTo(unmarshallType) */ 
			virtual bool object_type(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The InputPin that gives the object to be unmarshalled.
			<p>From package UML::Actions.</p> */
			virtual uml::InputPin *  getObject() const ;
			
			/*!
			 The InputPin that gives the object to be unmarshalled.
			<p>From package UML::Actions.</p> */
			virtual void setObject(uml::InputPin *  _object) ;
			
			/*!
			 The OutputPins on which are placed the values of the StructuralFeatures of the input object.
			<p>From package UML::Actions.</p> */
			virtual std::vector<uml::OutputPin * > *  getResult() const ;
			
			/*!
			 The type of the object to be unmarshalled.
			<p>From package UML::Actions.</p> */
			virtual uml::Classifier *  getUnmarshallType() const ;
			
			/*!
			 The type of the object to be unmarshalled.
			<p>From package UML::Actions.</p> */
			virtual void setUnmarshallType(uml::Classifier *  _unmarshallType) ;
			
							
			
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
#endif /* end of include guard: UML_UNMARSHALLACTIONUNMARSHALLACTIONIMPL_HPP */

