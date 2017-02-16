//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_EXCEPTIONHANDLEREXCEPTIONHANDLERIMPL_HPP
#define UML_EXCEPTIONHANDLEREXCEPTIONHANDLERIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../ExceptionHandler.hpp"

#include "impl/ElementImpl.hpp"


//*********************************
namespace uml 
{
	class ExceptionHandlerImpl :virtual public ElementImpl, virtual public ExceptionHandler
	{
		public: 
			ExceptionHandlerImpl(const ExceptionHandlerImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ExceptionHandlerImpl& operator=(ExceptionHandlerImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ExceptionHandlerImpl();

		public:
			//destructor
			virtual ~ExceptionHandlerImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The handlerBody has no incoming or outgoing ActivityEdges and the exceptionInput has no incoming ActivityEdges.
			handlerBody.incoming->isEmpty() and handlerBody.outgoing->isEmpty() and exceptionInput.incoming->isEmpty() */ 
			virtual bool handler_body_edges(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 If the protectedNode is an Action with OutputPins, then the handlerBody must also be an Action with the same number of OutputPins, which are compatible in type, ordering, and multiplicity to those of the protectedNode.
			(protectedNode.oclIsKindOf(Action) and protectedNode.oclAsType(Action).output->notEmpty()) implies
			(
			  handlerBody.oclIsKindOf(Action) and 
			  let protectedNodeOutput : OrderedSet(OutputPin) = protectedNode.oclAsType(Action).output,
			        handlerBodyOutput : OrderedSet(OutputPin) =  handlerBody.oclAsType(Action).output in
			    protectedNodeOutput->size() = handlerBodyOutput->size() and
			    Sequence{1..protectedNodeOutput->size()}->forAll(i |
			    	handlerBodyOutput->at(i).type.conformsTo(protectedNodeOutput->at(i).type) and
			    	handlerBodyOutput->at(i).isOrdered=protectedNodeOutput->at(i).isOrdered and
			    	handlerBodyOutput->at(i).compatibleWith(protectedNodeOutput->at(i)))
			) */ 
			virtual bool output_pins(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The handlerBody is an Action with one InputPin, and that InputPin is the same as the exceptionInput.
			handlerBody.oclIsKindOf(Action) and
			let inputs: OrderedSet(InputPin) = handlerBody.oclAsType(Action).input in
			inputs->size()=1 and inputs->first()=exceptionInput */ 
			virtual bool one_input(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 An ActivityEdge that has a source within the handlerBody of an ExceptionHandler must have its target in the handlerBody also, and vice versa.
			let nodes:Set(ActivityNode) = handlerBody.oclAsType(Action).allOwnedNodes() in
			nodes.outgoing->forAll(nodes->includes(target)) and
			nodes.incoming->forAll(nodes->includes(source)) */ 
			virtual bool edge_source_target(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The handlerBody must have the same owner as the protectedNode.
			handlerBody.owner=protectedNode.owner */ 
			virtual bool handler_body_owner(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 The exceptionInput must either have no type or every exceptionType must conform to the exceptionInput type.
			exceptionInput.type=null or 
			exceptionType->forAll(conformsTo(exceptionInput.type.oclAsType(Classifier))) */ 
			virtual bool exception_input_type(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 An ObjectNode within the handlerBody. When the ExceptionHandler catches an exception, the exception token is placed on this ObjectNode, causing the handlerBody to execute.
			<p>From package UML::Activities.</p> */
			virtual uml::ObjectNode *  getExceptionInput() const ;
			
			/*!
			 An ObjectNode within the handlerBody. When the ExceptionHandler catches an exception, the exception token is placed on this ObjectNode, causing the handlerBody to execute.
			<p>From package UML::Activities.</p> */
			virtual void setExceptionInput(uml::ObjectNode *  _exceptionInput) ;
			
			/*!
			 The Classifiers whose instances the ExceptionHandler catches as exceptions. If an exception occurs whose type is any exceptionType, the ExceptionHandler catches the exception and executes the handlerBody.
			<p>From package UML::Activities.</p> */
			virtual std::vector<uml::Classifier * > *  getExceptionType() const ;
			
			/*!
			 An ExecutableNode that is executed if the ExceptionHandler catches an exception.
			<p>From package UML::Activities.</p> */
			virtual uml::ExecutableNode *  getHandlerBody() const ;
			
			/*!
			 An ExecutableNode that is executed if the ExceptionHandler catches an exception.
			<p>From package UML::Activities.</p> */
			virtual void setHandlerBody(uml::ExecutableNode *  _handlerBody) ;
			
			/*!
			 The ExecutableNode protected by the ExceptionHandler. If an exception propagates out of the protectedNode and has a type matching one of the exceptionTypes, then it is caught by this ExceptionHandler.
			<p>From package UML::Activities.</p> */
			virtual uml::ExecutableNode *  getProtectedNode() const ;
			
			/*!
			 The ExecutableNode protected by the ExceptionHandler. If an exception propagates out of the protectedNode and has a type matching one of the exceptionTypes, then it is caught by this ExceptionHandler.
			<p>From package UML::Activities.</p> */
			virtual void setProtectedNode(uml::ExecutableNode *  _protectedNode) ;
			
							
			
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
#endif /* end of include guard: UML_EXCEPTIONHANDLEREXCEPTIONHANDLERIMPL_HPP */

