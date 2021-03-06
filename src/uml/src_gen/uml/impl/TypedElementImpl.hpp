//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TYPEDELEMENTTYPEDELEMENTIMPL_HPP
#define UML_TYPEDELEMENTTYPEDELEMENTIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../TypedElement.hpp"

#include "uml/impl/NamedElementImpl.hpp"

//*********************************
namespace uml 
{
	class TypedElementImpl :virtual public NamedElementImpl, virtual public TypedElement 
	{
		public: 
			TypedElementImpl(const TypedElementImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			TypedElementImpl& operator=(TypedElementImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			TypedElementImpl();
			virtual std::shared_ptr<TypedElement> getThisTypedElementPtr() const;
			virtual void setThisTypedElementPtr(std::weak_ptr<TypedElement> thisTypedElementPtr);

			//Additional constructors for the containments back reference
			TypedElementImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			TypedElementImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~TypedElementImpl();
			
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
			 The type of the TypedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Type > getType() const ;
			
			/*!
			 The type of the TypedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual void setType(std::shared_ptr<uml::Type> _type_type) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<uml::UmlFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<TypedElement> m_thisTypedElementPtr;
	};
}
#endif /* end of include guard: UML_TYPEDELEMENTTYPEDELEMENTIMPL_HPP */
