//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CREATELINKOBJECTACTIONCREATELINKOBJECTACTIONIMPL_HPP
#define UML_CREATELINKOBJECTACTIONCREATELINKOBJECTACTIONIMPL_HPP

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
#include "../CreateLinkObjectAction.hpp"

#include "uml/impl/CreateLinkActionImpl.hpp"



//*********************************
namespace uml 
{
	class CreateLinkObjectActionImpl :virtual public CreateLinkActionImpl, virtual public CreateLinkObjectAction 
	{
		public: 
			CreateLinkObjectActionImpl(const CreateLinkObjectActionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			CreateLinkObjectActionImpl& operator=(CreateLinkObjectActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			CreateLinkObjectActionImpl();

			//Additional constructors for the containments back reference
			CreateLinkObjectActionImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			CreateLinkObjectActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			CreateLinkObjectActionImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			CreateLinkObjectActionImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~CreateLinkObjectActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The Association must be an AssociationClass.
			self.association().oclIsKindOf(AssociationClass) */ 
			virtual bool association_class(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The multiplicity of the OutputPin is 1..1.
			result.is(1,1) */ 
			virtual bool multiplicity(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The type of the result OutputPin must be the same as the Association of the CreateLinkObjectAction.
			result.type = association() */ 
			virtual bool type_of_result(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The output pin on which the newly created link object is placed.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::OutputPin > getResult() const ;
			
			/*!
			 The output pin on which the newly created link object is placed.
			<p>From package UML::Actions.</p> */
			virtual void setResult(std::shared_ptr<uml::OutputPin> _result_result) ;
							
			
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
#endif /* end of include guard: UML_CREATELINKOBJECTACTIONCREATELINKOBJECTACTIONIMPL_HPP */

