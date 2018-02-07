//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INTERFACEINTERFACEIMPL_HPP
#define UML_INTERFACEINTERFACEIMPL_HPP

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
#include "../Interface.hpp"

#include "uml/impl/ClassifierImpl.hpp"



//*********************************
namespace uml 
{
	class InterfaceImpl :virtual public ClassifierImpl, virtual public Interface 
	{
		public: 
			InterfaceImpl(const InterfaceImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			InterfaceImpl& operator=(InterfaceImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			InterfaceImpl();

			//Additional constructors for the containments back reference
			InterfaceImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			InterfaceImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			InterfaceImpl(std::weak_ptr<uml::Package > par_Package, const int reference_id);


			//Additional constructors for the containments back reference
			InterfaceImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);


			//Additional constructors for the containments back reference




		public:
			//destructor
			virtual ~InterfaceImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 Creates a property with the specified name, type, lower bound, and upper bound as an owned attribute of this interface. */ 
			virtual std::shared_ptr<uml::Property> createOwnedAttribute(std::string name,std::shared_ptr<uml::Type>  type,int lower,int upper)  ;
			
			/*!
			 Creates an operation with the specified name, parameter names, parameter types, and return type (or null) as an owned operation of this interface. */ 
			virtual std::shared_ptr<uml::Operation> createOwnedOperation(std::string name,std::shared_ptr<Bag<std::string> >  parameterNames,std::shared_ptr<Bag<uml::Type> >  parameterTypes,std::shared_ptr<uml::Type>  returnType)  ;
			
			/*!
			 The visibility of all Features owned by an Interface must be public.
			feature->forAll(visibility = VisibilityKind::public) */ 
			virtual bool visibility(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 References all the Classifiers that are defined (nested) within the Interface.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::Classifier, uml::NamedElement > > getNestedClassifier() const ;
			
			/*!
			 The attributes (i.e., the Properties) owned by the Interface.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::Property, uml::Property,uml::NamedElement > > getOwnedAttribute() const ;
			
			/*!
			 The Operations owned by the Interface.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::Operation, uml::Feature,uml::NamedElement > > getOwnedOperation() const ;
			
			/*!
			 Receptions that objects providing this Interface are willing to accept.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::Reception, uml::Feature,uml::NamedElement > > getOwnedReception() const ;
			
			/*!
			 References a ProtocolStateMachine specifying the legal sequences of the invocation of the BehavioralFeatures described in the Interface.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::shared_ptr<uml::ProtocolStateMachine > getProtocol() const ;
			
			/*!
			 References a ProtocolStateMachine specifying the legal sequences of the invocation of the BehavioralFeatures described in the Interface.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual void setProtocol(std::shared_ptr<uml::ProtocolStateMachine> _protocol_protocol) ;
			/*!
			 References all the Interfaces redefined by this Interface.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::Interface, uml::Classifier /*Subset does not reference a union*/ > > getRedefinedInterface() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::Feature > > getAttribute() const ;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement > > getFeature() const ;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement> > getMember() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement > > getOwnedMember() const ;/*!
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
#endif /* end of include guard: UML_INTERFACEINTERFACEIMPL_HPP */

