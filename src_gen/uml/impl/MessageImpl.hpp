//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_MESSAGEMESSAGEIMPL_HPP
#define UML_MESSAGEMESSAGEIMPL_HPP

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
#include "../Message.hpp"

#include "uml/impl/NamedElementImpl.hpp"



//*********************************
namespace uml 
{
	class MessageImpl :virtual public NamedElementImpl, virtual public Message 
	{
		public: 
			MessageImpl(const MessageImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			MessageImpl& operator=(MessageImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			MessageImpl();

			//Additional constructors for the containments back reference
			MessageImpl(std::weak_ptr<uml::Interaction > par_interaction);


			//Additional constructors for the containments back reference
			MessageImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			MessageImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~MessageImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 Arguments of a Message must only be: i) attributes of the sending lifeline, ii) constants, iii) symbolic values (which are wildcard values representing any legal value), iv) explicit parameters of the enclosing Interaction, v) attributes of the class owning the Interaction. */ 
			virtual bool arguments(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 Messages cannot cross boundaries of CombinedFragments or their operands.  This is true if and only if both MessageEnds are enclosed within the same InteractionFragment (i.e., an InteractionOperand or an Interaction).
			sendEvent->notEmpty() and receiveEvent->notEmpty() implies
			let sendEnclosingFrag : Set(InteractionFragment) = 
			sendEvent->asOrderedSet()->first().enclosingFragment()
			in 
			let receiveEnclosingFrag : Set(InteractionFragment) = 
			receiveEvent->asOrderedSet()->first().enclosingFragment()
			in  sendEnclosingFrag = receiveEnclosingFrag */ 
			virtual bool cannot_cross_boundaries(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 This query returns the MessageKind value for this Message.
			result = (messageKind)
			<p>From package UML::Interactions.</p> */ 
			virtual MessageKind getMessageKind()  ;
			
			/*!
			 If the MessageEnds are both OccurrenceSpecifications, then the connector must go between the Parts represented by the Lifelines of the two MessageEnds. */ 
			virtual bool occurrence_specifications(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 If the sendEvent and the receiveEvent of the same Message are on the same Lifeline, the sendEvent must be ordered before the receiveEvent.
			receiveEvent.oclIsKindOf(MessageOccurrenceSpecification)
			implies
			let f :  Lifeline = sendEvent->select(oclIsKindOf(MessageOccurrenceSpecification)).oclAsType(MessageOccurrenceSpecification)->asOrderedSet()->first().covered in
			f = receiveEvent->select(oclIsKindOf(MessageOccurrenceSpecification)).oclAsType(MessageOccurrenceSpecification)->asOrderedSet()->first().covered  implies
			f.events->indexOf(sendEvent.oclAsType(MessageOccurrenceSpecification)->asOrderedSet()->first() ) < 
			f.events->indexOf(receiveEvent.oclAsType(MessageOccurrenceSpecification)->asOrderedSet()->first() ) */ 
			virtual bool sending_receiving_message_event(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 In the case when a Message with messageSort reply has a non empty Operation signature, the arguments of the Message must correspond to the out, inout, and return parameters of the Operation. A Parameter corresponds to an Argument if the Argument is of the same Class or a specialization of that of the Parameter.
			(messageSort = MessageSort::reply) and signature.oclIsKindOf(Operation) implies 
			 let replyParms : OrderedSet(Parameter) = signature.oclAsType(Operation).ownedParameter->
			select(direction = ParameterDirectionKind::inout or direction = ParameterDirectionKind::out or direction = ParameterDirectionKind::return)
			in replyParms->size() = self.argument->size() and
			self.argument->forAll( o: ValueSpecification | o.oclIsKindOf(Expression) and let e : Expression = o.oclAsType(Expression) in
			e.operand->notEmpty()  implies 
			let p : Parameter = replyParms->at(self.argument->indexOf(o)) in
			e.operand->asSequence()->first().type.oclAsType(Classifier).conformsTo(p.type.oclAsType(Classifier))
			) */ 
			virtual bool signature_is_operation_reply(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 In the case when a Message with messageSort synchCall or asynchCall has a non empty Operation signature, the arguments of the Message must correspond to the in and inout parameters of the Operation. A Parameter corresponds to an Argument if the Argument is of the same Class or a specialization of that of the Parameter.
			(messageSort = MessageSort::asynchCall or messageSort = MessageSort::synchCall) and signature.oclIsKindOf(Operation)  implies 
			 let requestParms : OrderedSet(Parameter) = signature.oclAsType(Operation).ownedParameter->
			 select(direction = ParameterDirectionKind::inout or direction = ParameterDirectionKind::_'in'  )
			in requestParms->size() = self.argument->size() and
			self.argument->forAll( o: ValueSpecification | 
			not (o.oclIsKindOf(Expression) and o.oclAsType(Expression).symbol->size()=0 and o.oclAsType(Expression).operand->isEmpty() ) implies 
			let p : Parameter = requestParms->at(self.argument->indexOf(o)) in
			o.type.oclAsType(Classifier).conformsTo(p.type.oclAsType(Classifier))
			) */ 
			virtual bool signature_is_operation_request(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 In the case when the Message signature is a Signal, the arguments of the Message must correspond to the attributes of the Signal. A Message Argument corresponds to a Signal Attribute if the Argument is of the same Class or a specialization of that of the Attribute.
			(messageSort = MessageSort::asynchSignal ) and signature.oclIsKindOf(Signal) implies
			   let signalAttributes : OrderedSet(Property) = signature.oclAsType(Signal).inheritedMember()->
			             select(n:NamedElement | n.oclIsTypeOf(Property))->collect(oclAsType(Property))->asOrderedSet()
			   in signalAttributes->size() = self.argument->size()
			   and self.argument->forAll( o: ValueSpecification |
			          not (o.oclIsKindOf(Expression)
			          and o.oclAsType(Expression).symbol->size()=0
			          and o.oclAsType(Expression).operand->isEmpty() ) implies
			              let p : Property = signalAttributes->at(self.argument->indexOf(o))
			              in o.type.oclAsType(Classifier).conformsTo(p.type.oclAsType(Classifier))) */ 
			virtual bool signature_is_signal(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The signature must either refer an Operation (in which case messageSort is either synchCall or asynchCall or reply) or a Signal (in which case messageSort is asynchSignal). The name of the NamedElement referenced by signature must be the same as that of the Message.
			signature->notEmpty() implies 
			((signature.oclIsKindOf(Operation) and 
			(messageSort = MessageSort::asynchCall or messageSort = MessageSort::synchCall or messageSort = MessageSort::reply) 
			) or (signature.oclIsKindOf(Signal)  and messageSort = MessageSort::asynchSignal )
			 ) and name = signature.name */ 
			virtual bool signature_refer_to(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 The derived kind of the Message (complete, lost, found, or unknown).
			<p>From package UML::Interactions.</p> */ 
			virtual MessageKind getMessageKind() const ;
			
			/*!
			 The sort of communication reflected by the Message.
			<p>From package UML::Interactions.</p> */ 
			virtual MessageSort getMessageSort() const ;
			
			/*!
			 The sort of communication reflected by the Message.
			<p>From package UML::Interactions.</p> */ 
			virtual void setMessageSort (MessageSort _messageSort); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The arguments of the Message.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<Subset<uml::ValueSpecification, uml::Element > > getArgument() const ;
			
			/*!
			 The Connector on which this Message is sent.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<uml::Connector > getConnector() const ;
			
			/*!
			 The Connector on which this Message is sent.
			<p>From package UML::Interactions.</p> */
			virtual void setConnector(std::shared_ptr<uml::Connector> _connector_connector) ;
			/*!
			 The enclosing Interaction owning the Message.
			<p>From package UML::Interactions.</p> */
			virtual std::weak_ptr<uml::Interaction > getInteraction() const ;
			
			/*!
			 The enclosing Interaction owning the Message.
			<p>From package UML::Interactions.</p> */
			virtual void setInteraction(std::shared_ptr<uml::Interaction> _interaction_interaction) ;
			/*!
			 References the Receiving of the Message.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<uml::MessageEnd > getReceiveEvent() const ;
			
			/*!
			 References the Receiving of the Message.
			<p>From package UML::Interactions.</p> */
			virtual void setReceiveEvent(std::shared_ptr<uml::MessageEnd> _receiveEvent_receiveEvent) ;
			/*!
			 References the Sending of the Message.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<uml::MessageEnd > getSendEvent() const ;
			
			/*!
			 References the Sending of the Message.
			<p>From package UML::Interactions.</p> */
			virtual void setSendEvent(std::shared_ptr<uml::MessageEnd> _sendEvent_sendEvent) ;
			/*!
			 The signature of the Message is the specification of its content. It refers either an Operation or a Signal.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<uml::NamedElement > getSignature() const ;
			
			/*!
			 The signature of the Message is the specification of its content. It refers either an Operation or a Signal.
			<p>From package UML::Interactions.</p> */
			virtual void setSignature(std::shared_ptr<uml::NamedElement> _signature_signature) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ; 
			 
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
#endif /* end of include guard: UML_MESSAGEMESSAGEIMPL_HPP */

