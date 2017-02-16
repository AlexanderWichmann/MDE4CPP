//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_LINKACTIONLINKACTIONIMPL_HPP
#define UML_LINKACTIONLINKACTIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../LinkAction.hpp"

#include "impl/ActionImpl.hpp"


//*********************************
namespace uml 
{
	class LinkActionImpl :virtual public ActionImpl, virtual public LinkAction
	{
		public: 
			LinkActionImpl(const LinkActionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			LinkActionImpl& operator=(LinkActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			LinkActionImpl();

		public:
			//destructor
			virtual ~LinkActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The inputValue InputPins is the same as the union of all the InputPins referenced by the endData.
			inputValue->asBag()=endData.allPins() */ 
			virtual bool same_pins(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The ends of the endData must all be from the same Association and include all and only the memberEnds of that association.
			endData.end = self.association().memberEnd->asBag() */ 
			virtual bool same_association(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The ends of the endData must not be static.
			endData->forAll(not end.isStatic) */ 
			virtual bool not_static(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 Returns the Association acted on by this LinkAction.
			result = (endData->asSequence()->first().end.association)
			<p>From package UML::Actions.</p> */ 
			virtual uml::Association *  association()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The LinkEndData identifying the values on the ends of the links acting on by this LinkAction.
			<p>From package UML::Actions.</p> */
			virtual std::vector<uml::LinkEndData * > *  getEndData() const ;
			
			/*!
			 InputPins used by the LinkEndData of the LinkAction.
			<p>From package UML::Actions.</p> */
			virtual std::vector<uml::InputPin * > *  getInputValue() const ;
			
							
			
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
#endif /* end of include guard: UML_LINKACTIONLINKACTIONIMPL_HPP */

