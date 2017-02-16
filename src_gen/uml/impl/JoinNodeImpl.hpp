//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_JOINNODEJOINNODEIMPL_HPP
#define UML_JOINNODEJOINNODEIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../JoinNode.hpp"

#include "impl/ControlNodeImpl.hpp"


//*********************************
namespace uml 
{
	class JoinNodeImpl :virtual public ControlNodeImpl, virtual public JoinNode
	{
		public: 
			JoinNodeImpl(const JoinNodeImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			JoinNodeImpl& operator=(JoinNodeImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			JoinNodeImpl();

		public:
			//destructor
			virtual ~JoinNodeImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 A JoinNode has one outgoing ActivityEdge.
			outgoing->size() = 1 */ 
			virtual bool one_outgoing_edge(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			/*!
			 If one of the incoming ActivityEdges of a JoinNode is an ObjectFlow, then its outgoing ActivityEdge must be an ObjectFlow. Otherwise its outgoing ActivityEdge must be a ControlFlow.
			if incoming->exists(oclIsKindOf(ObjectFlow)) then outgoing->forAll(oclIsKindOf(ObjectFlow))
			else outgoing->forAll(oclIsKindOf(ControlFlow))
			endif */ 
			virtual bool incoming_object_flow(boost::any diagnostics,std::map <   boost::any, boost::any > * context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Indicates whether incoming tokens having objects with the same identity are combined into one by the JoinNode.
			<p>From package UML::Activities.</p> */ 
			virtual bool getIsCombineDuplicate() const ;
			
			/*!
			 Indicates whether incoming tokens having objects with the same identity are combined into one by the JoinNode.
			<p>From package UML::Activities.</p> */ 
			virtual void setIsCombineDuplicate (bool _isCombineDuplicate); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 A ValueSpecification giving the condition under which the JoinNode will offer a token on its outgoing ActivityEdge. If no joinSpec is specified, then the JoinNode will offer an outgoing token if tokens are offered on all of its incoming ActivityEdges (an "and" condition).
			<p>From package UML::Activities.</p> */
			virtual uml::ValueSpecification *  getJoinSpec() const ;
			
			/*!
			 A ValueSpecification giving the condition under which the JoinNode will offer a token on its outgoing ActivityEdge. If no joinSpec is specified, then the JoinNode will offer an outgoing token if tokens are offered on all of its incoming ActivityEdges (an "and" condition).
			<p>From package UML::Activities.</p> */
			virtual void setJoinSpec(uml::ValueSpecification *  _joinSpec) ;
			
							
			
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
			virtual std::vector<uml::RedefinableElement * > *  getRedefinedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual ecore::EClass* eStaticClass() const;
	};
}
#endif /* end of include guard: UML_JOINNODEJOINNODEIMPL_HPP */

