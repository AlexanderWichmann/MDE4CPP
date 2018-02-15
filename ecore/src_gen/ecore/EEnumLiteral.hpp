//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EENUMLITERAL_HPP
#define ECORE_EENUMLITERAL_HPP

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

#include <map>
#include <string>
#include <vector>
#include <memory>
#include <cassert>

#include "abstractDataTypes/SubsetUnion.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace ecore 
{
	class EAnnotation;
}

namespace ecore 
{
	class EEnum;
}

namespace ecore 
{
	class ENamedElement;
}

// base class includes
#include "ecore/ENamedElement.hpp"

// enum includes


//*********************************
namespace ecore 
{
	/*!
	 */
	class EEnumLiteral:virtual public ENamedElement
	{
		public:
 			EEnumLiteral(const EEnumLiteral &) {}
			EEnumLiteral& operator=(EEnumLiteral const&) = delete;

		protected:
			EEnumLiteral(){}


			//Additional constructors for the containments back reference

			EEnumLiteral(std::weak_ptr<ecore::EEnum > par_eEnum);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~EEnumLiteral() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual boost::any getInstance() const = 0;
			
			/*!
			 */ 
			virtual void setInstance (boost::any _instance)= 0; 
			
			/*!
			 */ 
			virtual std::string getLiteral() const = 0;
			
			/*!
			 */ 
			virtual void setLiteral (std::string _literal)= 0; 
			
			/*!
			 */ 
			virtual int getValue() const = 0;
			
			/*!
			 */ 
			virtual void setValue (int _value)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::weak_ptr<ecore::EEnum > getEEnum() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 */ 
			boost::any m_instance ;
			/*!
			 */ 
			std::string m_literal ;
			/*!
			 */ 
			int m_value ;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::weak_ptr<ecore::EEnum > m_eEnum;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
	};

}
#endif /* end of include guard: ECORE_EENUMLITERAL_HPP */

