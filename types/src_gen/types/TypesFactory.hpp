//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef TYPESFACTORY_HPP
#define TYPESFACTORY_HPP

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

#include <memory>

#include "ecore/EFactory.hpp"

namespace types 
{
	class TypesPackage;
}

namespace types 
{
	class TypesFactory : virtual public ecore::EFactory 
	{
		private:    
			TypesFactory(TypesFactory const&) = delete;
			TypesFactory& operator=(TypesFactory const&) = delete;
		protected:
			TypesFactory(){}
		
			//Singleton Instance and Getter
			private:
				static std::shared_ptr<TypesFactory> instance;
			public:
				static std::shared_ptr<TypesFactory> eInstance();
		
			//Creator functions
			virtual std::shared_ptr<ecore::EObject> create(std::string _className) const = 0;
			virtual std::shared_ptr<ecore::EObject> create(std::string _className, std::shared_ptr<EObject> _container, 	const unsigned int referenceID = -1) const = 0;
			virtual std::shared_ptr<ecore::EObject> create(const unsigned int classID, std::shared_ptr<EObject> _container = nullptr, 	const unsigned int referenceID = -1) const = 0;

			
			//Package
			virtual std::shared_ptr<TypesPackage> getTypesPackage() const = 0;
	};
}
#endif /* end of include guard: TYPESFACTORY_HPP */

