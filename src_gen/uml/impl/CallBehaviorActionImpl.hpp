//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CALLBEHAVIORACTIONCALLBEHAVIORACTIONIMPL_HPP
#define UML_CALLBEHAVIORACTIONCALLBEHAVIORACTIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

//*********************************
// generated Includes

//Model includes
#include "../CallBehaviorAction.hpp"

#include "uml/impl/CallActionImpl.hpp"



//*********************************
namespace uml 
{
	class CallBehaviorActionImpl :virtual public CallActionImpl, virtual public CallBehaviorAction 
	{
		public: 
			CallBehaviorActionImpl(const CallBehaviorActionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			CallBehaviorActionImpl& operator=(CallBehaviorActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			CallBehaviorActionImpl();

			//Additional constructors for the containments back reference
			CallBehaviorActionImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			CallBehaviorActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			CallBehaviorActionImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			CallBehaviorActionImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~CallBehaviorActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 A CallBehaviorAction may not specify onPort.
			onPort=null */ 
			virtual bool no_onport(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Behavior being invoked.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::Behavior > getBehavior() const ;
			
			/*!
			 The Behavior being invoked.
			<p>From package UML::Actions.</p> */
			virtual void setBehavior(std::shared_ptr<uml::Behavior> _behavior_behavior) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup> > getInGroup() const ;/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element > > getInput() const ;/*!
			 The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::OutputPin, uml::Element > > getOutput() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual void eSet(int featureID, boost::any newValue) ;

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_CALLBEHAVIORACTIONCALLBEHAVIORACTIONIMPL_HPP */

