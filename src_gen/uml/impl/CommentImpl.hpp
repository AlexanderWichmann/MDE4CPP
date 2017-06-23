//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_COMMENTCOMMENTIMPL_HPP
#define UML_COMMENTCOMMENTIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../Comment.hpp"

#include "impl/ElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class CommentImpl :virtual public ElementImpl, virtual public Comment 
	{
		public: 
			CommentImpl(const CommentImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			CommentImpl& operator=(CommentImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			CommentImpl();

		public:
			//destructor
			virtual ~CommentImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies a string that is the comment.
			<p>From package UML::CommonStructure.</p> */ 
			virtual std::string getBody() const ;
			
			/*!
			 Specifies a string that is the comment.
			<p>From package UML::CommonStructure.</p> */ 
			virtual void setBody (std::string _body); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 References the Element(s) being commented.
			<p>From package UML::CommonStructure.</p> */
			virtual 	std::shared_ptr< Bag<uml::Element> >
			 getAnnotatedElement() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getOwnedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_COMMENTCOMMENTIMPL_HPP */

