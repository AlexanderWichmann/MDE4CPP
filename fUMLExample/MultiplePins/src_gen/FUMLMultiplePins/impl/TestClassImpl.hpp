//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef FUMLMULTIPLEPINS_TESTCLASS_TESTCLASSIMPL_HPP
#define FUMLMULTIPLEPINS_TESTCLASS_TESTCLASSIMPL_HPP

//Model includes
#include "../TestClass.hpp"
#include "uml/impl/ClassImpl.hpp"
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
namespace fUMLMultiplePins
{
	class TestClassImpl : virtual public uml::ClassImpl, virtual public TestClass
	{
		private:    
			TestClassImpl(TestClassImpl const&) = delete;
			TestClassImpl& operator=(TestClassImpl const&) = delete;

		protected:
			friend class FUMLMultiplePinsFactoryImpl;
			//constructor
			TestClassImpl();
			virtual std::shared_ptr<TestClass> getThisTestClassPtr();
			virtual void setThisTestClassPtr(std::weak_ptr<TestClass> thisTestClassPtr);


		public:
			//destructor
			virtual ~TestClassImpl();

			//*********************************
			// Operations
			//*********************************
			virtual void do1( std::shared_ptr<fUMLMultiplePins::TestClass> input_1,int& param_0,int& param_1,int& param_2,int& param_3,int& param_4,int& param_5,int& param_6,int& param_7,int& param_8,int& param_9 ) ;
			virtual void doAll( int& param_0,int& param_1,int& param_2,int& param_3,int& param_4,int& param_5,int& param_6,int& param_7,int& param_8,int& param_9 ) ;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			

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
			std::weak_ptr<TestClass> m_thisTestClassPtr;
			std::map<std::string,std::function<boost::any()>> m_getterMap;
			std::map<std::string,std::function<void(boost::any)>> m_setterMap;
			std::map<std::string,std::function<void()>> m_unsetterMap;
	};
}
#endif /* end of include guard: FUMLMULTIPLEPINS_TESTCLASS_TESTCLASSIMPL_HPP */
