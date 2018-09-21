//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_PACKAGEMERGEPACKAGEMERGEIMPL_HPP
#define UML_PACKAGEMERGEPACKAGEMERGEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../PackageMerge.hpp"

#include "uml/impl/DirectedRelationshipImpl.hpp"

//*********************************
namespace uml 
{
	class PackageMergeImpl :virtual public DirectedRelationshipImpl, virtual public PackageMerge 
	{
		public: 
			PackageMergeImpl(const PackageMergeImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			PackageMergeImpl& operator=(PackageMergeImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			PackageMergeImpl();
			virtual std::shared_ptr<PackageMerge> getThisPackageMergePtr() const;
			virtual void setThisPackageMergePtr(std::weak_ptr<PackageMerge> thisPackageMergePtr);

			//Additional constructors for the containments back reference
			PackageMergeImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			PackageMergeImpl(std::weak_ptr<uml::Package > par_receivingPackage);




		public:
			//destructor
			virtual ~PackageMergeImpl();
			
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
			 References the Package that is to be merged with the receiving package of the PackageMerge.
			<p>From package UML::Packages.</p> */
			virtual std::shared_ptr<uml::Package > getMergedPackage() const ;
			
			/*!
			 References the Package that is to be merged with the receiving package of the PackageMerge.
			<p>From package UML::Packages.</p> */
			virtual void setMergedPackage(std::shared_ptr<uml::Package> _mergedPackage_mergedPackage) ;
			/*!
			 References the Package that is being extended with the contents of the merged package of the PackageMerge.
			<p>From package UML::Packages.</p> */
			virtual std::weak_ptr<uml::Package > getReceivingPackage() const ;
			
			/*!
			 References the Package that is being extended with the contents of the merged package of the PackageMerge.
			<p>From package UML::Packages.</p> */
			virtual void setReceivingPackage(std::shared_ptr<uml::Package> _receivingPackage_receivingPackage) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getRelatedElement() const ;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element>> getSource() const ;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element>> getTarget() const ; 
			 
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
			std::weak_ptr<PackageMerge> m_thisPackageMergePtr;
	};
}
#endif /* end of include guard: UML_PACKAGEMERGEPACKAGEMERGEIMPL_HPP */