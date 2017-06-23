//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_REPLYACTIONREPLYACTIONIMPL_HPP
#define UML_REPLYACTIONREPLYACTIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../ReplyAction.hpp"

#include "impl/ActionImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class ReplyActionImpl :virtual public ActionImpl, virtual public ReplyAction 
	{
		public: 
			ReplyActionImpl(const ReplyActionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ReplyActionImpl& operator=(ReplyActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ReplyActionImpl();

		public:
			//destructor
			virtual ~ReplyActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The replyValue InputPins must match the output (return, out, and inout) parameters of the operation of the event of the replyToCall Trigger in number, type, ordering, and multiplicity.
			let parameter:OrderedSet(Parameter) = replyToCall.event.oclAsType(CallEvent).operation.outputParameters() in
			replyValue->size()=parameter->size() and
			Sequence{1..replyValue->size()}->forAll(i |
				replyValue->at(i).type.conformsTo(parameter->at(i).type) and
				replyValue->at(i).isOrdered=parameter->at(i).isOrdered and
				replyValue->at(i).compatibleWith(parameter->at(i))) */ 
			virtual bool
			 pins_match_parameter(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The event of the replyToCall Trigger must be a CallEvent.
			replyToCall.event.oclIsKindOf(CallEvent) */ 
			virtual bool
			 event_on_reply_to_call_trigger(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Trigger specifying the Operation whose call is being replied to.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::Trigger > getReplyToCall() const ;
			
			/*!
			 The Trigger specifying the Operation whose call is being replied to.
			<p>From package UML::Actions.</p> */
			virtual void setReplyToCall(std::shared_ptr<uml::Trigger> _replyToCall_replyToCall) ;
			/*!
			 A list of InputPins providing the values for the output (inout, out, and return) Parameters of the Operation. These values are returned to the caller.
			<p>From package UML::Actions.</p> */
			virtual 		std::shared_ptr<Subset<uml::InputPin, uml::InputPin > >
			 getReplyValue() const ;
			
			/*!
			 An InputPin that holds the return information value produced by an earlier AcceptCallAction.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getReturnInformation() const ;
			
			/*!
			 An InputPin that holds the return information value produced by an earlier AcceptCallAction.
			<p>From package UML::Actions.</p> */
			virtual void setReturnInformation(std::shared_ptr<uml::InputPin> _returnInformation_returnInformation) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual 		std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element > >
			 getInput() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual 		std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const ;/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual 		std::shared_ptr<Union<uml::ActivityGroup> > getInGroup() const ;/*!
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
#endif /* end of include guard: UML_REPLYACTIONREPLYACTIONIMPL_HPP */

