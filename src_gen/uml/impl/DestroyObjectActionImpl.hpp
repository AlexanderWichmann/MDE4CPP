//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DESTROYOBJECTACTIONDESTROYOBJECTACTIONIMPL_HPP
#define UML_DESTROYOBJECTACTIONDESTROYOBJECTACTIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../DestroyObjectAction.hpp"

#include "impl/ActionImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class DestroyObjectActionImpl :virtual public ActionImpl, virtual public DestroyObjectAction 
	{
		public: 
			DestroyObjectActionImpl(const DestroyObjectActionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			DestroyObjectActionImpl& operator=(DestroyObjectActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			DestroyObjectActionImpl();

		public:
			//destructor
			virtual ~DestroyObjectActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The multiplicity of the targe IinputPin is 1..1.
			target.is(1,1) */ 
			virtual bool
			 multiplicity(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The target InputPin has no type.
			target.type= null */ 
			virtual bool
			 no_type(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies whether links in which the object participates are destroyed along with the object.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsDestroyLinks() const ;
			
			/*!
			 Specifies whether links in which the object participates are destroyed along with the object.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsDestroyLinks (bool _isDestroyLinks); 
			
			/*!
			 Specifies whether objects owned by the object (via composition) are destroyed along with the object.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsDestroyOwnedObjects() const ;
			
			/*!
			 Specifies whether objects owned by the object (via composition) are destroyed along with the object.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsDestroyOwnedObjects (bool _isDestroyOwnedObjects); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The InputPin providing the object to be destroyed.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getTarget() const ;
			
			/*!
			 The InputPin providing the object to be destroyed.
			<p>From package UML::Actions.</p> */
			virtual void setTarget(std::shared_ptr<uml::InputPin> _target_target) ;
							
			
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
#endif /* end of include guard: UML_DESTROYOBJECTACTIONDESTROYOBJECTACTIONIMPL_HPP */

