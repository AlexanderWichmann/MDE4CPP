//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef LIBRARYMODEL_UML_PICTURE__HPP
#define LIBRARYMODEL_UML_PICTURE__HPP





// base class includes
#include "LibraryModel_uml/NamedModelElement.hpp"



namespace LibraryModel_uml
{
	class Picture:virtual public NamedModelElement	{
		private:    
			Picture(const Picture& that) = delete;

		protected:
			Picture(){}

		public:
			//destructor
			virtual ~Picture() {}

			//*********************************
			// Getter Setter
			//*********************************
			virtual int getPageNumber() const  = 0;
			virtual void setPageNumber (int _pageNumber) = 0; 
			
			
			//*********************************
			// Operations
			//*********************************
			
			
		protected:
			//*********************************
			// Members
			//*********************************
			int m_pageNumber;
			
	
	};
}
#endif /* end of include guard: LIBRARYMODEL_UML_PICTURE__HPP */
