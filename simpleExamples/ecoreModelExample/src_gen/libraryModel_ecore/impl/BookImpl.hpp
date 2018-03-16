//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef LIBRARYMODEL_ECORE_BOOKBOOKIMPL_HPP
#define LIBRARYMODEL_ECORE_BOOKBOOKIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Book.hpp"

#include "libraryModel_ecore/impl/NamedElementImpl.hpp"

//*********************************
namespace libraryModel_ecore 
{
	class BookImpl :virtual public NamedElementImpl, virtual public Book 
	{
		public: 
			BookImpl(const BookImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			BookImpl& operator=(BookImpl const&) = delete;

		protected:
			friend class LibraryModel_ecoreFactoryImpl;
			BookImpl();
			virtual std::shared_ptr<Book> getThisBookPtr();
			virtual void setThisBookPtr(std::weak_ptr<Book> thisBookPtr);

			//Additional constructors for the containments back reference
			BookImpl(std::weak_ptr<libraryModel_ecore::LibraryModel > par_library);




		public:
			//destructor
			virtual ~BookImpl();
			
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
			 */
			virtual std::shared_ptr<Bag<libraryModel_ecore::Author>> getAuthors() const ;
			
			/*!
			 */
			virtual std::weak_ptr<libraryModel_ecore::LibraryModel > getLibrary() const ;
			
			/*!
			 */
			virtual void setLibrary(std::shared_ptr<libraryModel_ecore::LibraryModel> _library_library) ;
			/*!
			 */
			virtual std::shared_ptr<Bag<libraryModel_ecore::Picture>> getPictures() const ;
			
							
			
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
			virtual void load(std::shared_ptr<persistence::interface::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interface::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interface::XLoadHandler> loadHandler, std::shared_ptr<libraryModel_ecore::LibraryModel_ecoreFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interface::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interface::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, boost::any newValue) ;

		private:
			std::weak_ptr<Book> m_thisBookPtr;
	};
}
#endif /* end of include guard: LIBRARYMODEL_ECORE_BOOKBOOKIMPL_HPP */
