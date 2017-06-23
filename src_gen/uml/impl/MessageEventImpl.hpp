//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_MESSAGEEVENTMESSAGEEVENTIMPL_HPP
#define UML_MESSAGEEVENTMESSAGEEVENTIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../MessageEvent.hpp"

#include "impl/EventImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class MessageEventImpl :virtual public EventImpl, virtual public MessageEvent 
	{
		public: 
			MessageEventImpl(const MessageEventImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			MessageEventImpl& operator=(MessageEventImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			MessageEventImpl();

		public:
			//destructor
			virtual ~MessageEventImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
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
#endif /* end of include guard: UML_MESSAGEEVENTMESSAGEEVENTIMPL_HPP */

