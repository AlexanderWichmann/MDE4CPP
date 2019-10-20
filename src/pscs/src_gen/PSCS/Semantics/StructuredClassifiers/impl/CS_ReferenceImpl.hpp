//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_REFERENCECS_REFERENCEIMPL_HPP
#define PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_REFERENCECS_REFERENCEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../CS_Reference.hpp"

#include "PSCS/impl/PSCSFactoryImpl.hpp"

#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace PSCS::Semantics::StructuredClassifiers 
{
	class CS_ReferenceImpl :virtual public ecore::EObjectImpl,
virtual public CS_Reference 
	{
		public: 
			CS_ReferenceImpl(const CS_ReferenceImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			CS_ReferenceImpl& operator=(CS_ReferenceImpl const&) = delete;

		protected:
			friend class PSCS::PSCSFactoryImpl;
			CS_ReferenceImpl();
			virtual std::shared_ptr<CS_Reference> getThisCS_ReferencePtr() const;
			virtual void setThisCS_ReferencePtr(std::weak_ptr<CS_Reference> thisCS_ReferencePtr);



		public:
			//destructor
			virtual ~CS_ReferenceImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual Any copy() ;
			
			/*!
			 */ 
			virtual Any dispatchIn(std::shared_ptr<uml::Operation>  operation,std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_InteractionPoint>  interactionPoint) ;
			
			/*!
			 */ 
			virtual Any dispatchIn(std::shared_ptr<uml::Operation>  operation,std::shared_ptr<uml::Port>  onPort) ;
			
			/*!
			 */ 
			virtual Any dispatchOut(std::shared_ptr<uml::Operation>  operation,std::shared_ptr<uml::Port>  onPort) ;
			
			/*!
			 */ 
			virtual Any dispatchOut(std::shared_ptr<uml::Operation>  operation,std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_InteractionPoint>  interactionPoint) ;
			
			/*!
			 */ 
			virtual void sendIn(Any eventOccurrence,std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_InteractionPoint>  interactionPoint) ;
			
			/*!
			 */ 
			virtual void sendIn(Any eventOccurrence,std::shared_ptr<uml::Port>  onPort) ;
			
			/*!
			 */ 
			virtual void sendOut(Any eventOccurrence,std::shared_ptr<uml::Port>  onPort) ;
			
			/*!
			 */ 
			virtual void sendOut(Any eventOccurrence,std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_InteractionPoint>  interactionPoint) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Object > getCompositeReferent() const ;
			
			/*!
			 */
			virtual void setCompositeReferent(std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Object> _compositeReferent_compositeReferent) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSCS::PSCSFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<CS_Reference> m_thisCS_ReferencePtr;
	};
}
#endif /* end of include guard: PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_REFERENCECS_REFERENCEIMPL_HPP */