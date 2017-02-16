//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_WRITEVARIABLEACTIONWRITEVARIABLEACTIONIMPL_HPP
#define UML_WRITEVARIABLEACTIONWRITEVARIABLEACTIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../WriteVariableAction.hpp"

#include "impl/VariableActionImpl.hpp"


//*********************************
namespace uml 
{
	class WriteVariableActionImpl :virtual public VariableActionImpl, virtual public WriteVariableAction
	{
		public: 
			WriteVariableActionImpl(const WriteVariableActionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			WriteVariableActionImpl& operator=(WriteVariableActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			WriteVariableActionImpl();

		public:
			//destructor
			virtual ~WriteVariableActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The type of the value InputPin must conform to the type of the variable.
			value <> null implies value.type.conformsTo(variable.type) */ 
			virtual bool value_type(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The multiplicity of the value InputPin is 1..1.
			value<>null implies value.is(1,1) */ 
			virtual bool multiplicity(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The InputPin that gives the value to be added or removed from the Variable.
			<p>From package UML::Actions.</p> */
			virtual uml::InputPin *  getValue() const ;
			
			/*!
			 The InputPin that gives the value to be added or removed from the Variable.
			<p>From package UML::Actions.</p> */
			virtual void setValue(uml::InputPin *  _value) ;
			
							
			
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
#endif /* end of include guard: UML_WRITEVARIABLEACTIONWRITEVARIABLEACTIONIMPL_HPP */

