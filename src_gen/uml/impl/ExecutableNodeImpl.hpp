//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_EXECUTABLENODEEXECUTABLENODEIMPL_HPP
#define UML_EXECUTABLENODEEXECUTABLENODEIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../ExecutableNode.hpp"

#include "impl/ActivityNodeImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class ExecutableNodeImpl :virtual public ActivityNodeImpl, virtual public ExecutableNode 
	{
		public: 
			ExecutableNodeImpl(const ExecutableNodeImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ExecutableNodeImpl& operator=(ExecutableNodeImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ExecutableNodeImpl();

		public:
			//destructor
			virtual ~ExecutableNodeImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 A set of ExceptionHandlers that are examined if an exception propagates out of the ExceptionNode.
			<p>From package UML::Activities.</p> */
			virtual 		std::shared_ptr<Subset<uml::ExceptionHandler, uml::Element > >
			 getHandler() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
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
#endif /* end of include guard: UML_EXECUTABLENODEEXECUTABLENODEIMPL_HPP */

