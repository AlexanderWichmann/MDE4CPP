//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_SIMPLECLASSIFIERS_REALVALUE_HPP
#define FUML_SEMANTICS_SIMPLECLASSIFIERS_REALVALUE_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations



//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace fUML
{
	class FUMLFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class PrimitiveType;
}

namespace fUML::Semantics::SimpleClassifiers 
{
	class PrimitiveValue;
}

namespace fUML::Semantics::Values 
{
	class Value;
}

namespace uml 
{
	class ValueSpecification;
}

// base class includes
#include "fUML/Semantics/SimpleClassifiers/PrimitiveValue.hpp"

// enum includes


//*********************************
namespace fUML::Semantics::SimpleClassifiers 
{
	/*!
	 */
	class RealValue:virtual public PrimitiveValue
	{
		public:
 			RealValue(const RealValue &) {}
			RealValue& operator=(RealValue const&) = delete;

		protected:
			RealValue(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~RealValue() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool equals(std::shared_ptr<fUML::Semantics::Values::Value>  otherValue) = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::ValueSpecification> specify() = 0;
			
			/*!
			 */ 
			virtual std::string toString() = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual double getValue() const = 0;
			
			/*!
			 */ 
			virtual void setValue (double _value)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 */ 
			double m_value = 0;
			
			
			//*********************************
			// Reference Members
			//*********************************
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: FUML_SEMANTICS_SIMPLECLASSIFIERS_REALVALUE_HPP */
