//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef LIBRARYMODEL_UML_BOOK_BOOKIMPL_HPP
#define LIBRARYMODEL_UML_BOOK_BOOKIMPL_HPP

//Model includes
#include "../Book.hpp"
#include "LibraryModel_uml/impl/NamedModelElementImpl.hpp"
#include "uml/Property.hpp"

namespace boost
{
	class any;
}

namespace uml
{
	class Property;
}

//*********************************
namespace LibraryModel_uml
{
	class BookImpl:virtual public NamedModelElementImpl, virtual public Book
	{
		private:    
			BookImpl(BookImpl const&) = delete;
			BookImpl& operator=(BookImpl const&) = delete;

		protected:
			friend class LibraryModel_umlFactoryImpl;
			//constructor
			BookImpl();
			virtual std::shared_ptr<Book> getThisBookPtr();
			virtual void setThisBookPtr(std::weak_ptr<Book> thisBookPtr);


		public:
			//destructor
			virtual ~BookImpl();

			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			virtual std::shared_ptr<Bag<LibraryModel_uml::Author>> getAuthors() const ;
			
			virtual std::shared_ptr<Bag<LibraryModel_uml::Picture>> getPictures() const ;
			
			

		protected:
			virtual std::shared_ptr<uml::Class> getMetaClass();

		public:
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			virtual boost::any get(std::shared_ptr<uml::Property> _property) const ;
			virtual void set(std::shared_ptr<uml::Property> _property,boost::any value) ;
			virtual void unset(std::shared_ptr<uml::Property> _property) ;
		
		private:
			std::weak_ptr<Book> m_thisBookPtr;
			std::map<std::string,std::function<boost::any()>> m_getterMap;
			std::map<std::string,std::function<void(boost::any)>> m_setterMap;
			std::map<std::string,std::function<void()>> m_unsetterMap;
	};
}
#endif /* end of include guard: LIBRARYMODEL_UML_BOOK_BOOKIMPL_HPP */
