//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_SENDOBJECTACTIONSENDOBJECTACTIONIMPL_HPP
#define UML_SENDOBJECTACTIONSENDOBJECTACTIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../SendObjectAction.hpp"

#include "impl/InvocationActionImpl.hpp"


//*********************************
namespace uml 
{
	class SendObjectActionImpl :virtual public InvocationActionImpl, virtual public SendObjectAction
	{
		public: 
			SendObjectActionImpl(const SendObjectActionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			SendObjectActionImpl& operator=(SendObjectActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			SendObjectActionImpl();

		public:
			//destructor
			virtual ~SendObjectActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 If onPort is not empty, the Port given by onPort must be an owned or inherited feature of the type of the target InputPin.
			onPort<>null implies target.type.oclAsType(Classifier).allFeatures()->includes(onPort) */ 
			virtual bool type_target_pin(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The request object, which is transmitted to the target object. The object may be copied in transmission, so identity might not be preserved.
			<p>From package UML::Actions.</p> */
			virtual uml::InputPin *  getRequest() const ;
			
			/*!
			 The request object, which is transmitted to the target object. The object may be copied in transmission, so identity might not be preserved.
			<p>From package UML::Actions.</p> */
			virtual void setRequest(uml::InputPin *  _request) ;
			
			/*!
			 The target object to which the object is sent.
			<p>From package UML::Actions.</p> */
			virtual uml::InputPin *  getTarget() const ;
			
			/*!
			 The target object to which the object is sent.
			<p>From package UML::Actions.</p> */
			virtual void setTarget(uml::InputPin *  _target) ;
			
							
			
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
#endif /* end of include guard: UML_SENDOBJECTACTIONSENDOBJECTACTIONIMPL_HPP */

