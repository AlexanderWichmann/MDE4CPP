//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_SEMANTICS_SIMPLECLASSIFIERS_ENUMERATIONVALUE_HPP
#define FUML_SEMANTICS_SIMPLECLASSIFIERS_ENUMERATIONVALUE_HPP

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
	class Classifier;
}

namespace uml 
{
	class Enumeration;
}

namespace uml 
{
	class EnumerationLiteral;
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
#include "fUML/Semantics/Values/Value.hpp"

// enum includes


//*********************************
namespace fUML::Semantics::SimpleClassifiers 
{
	/*!
	 */
	class EnumerationValue:virtual public fUML::Semantics::Values::Value
	{
		public:
 			EnumerationValue(const EnumerationValue &) {}
			EnumerationValue& operator=(EnumerationValue const&) = delete;

		protected:
			EnumerationValue(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~EnumerationValue() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool equals(std::shared_ptr<fUML::Semantics::Values::Value>  otherValue) = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<uml::Classifier> > getTypes() = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Semantics::Values::Value> new_() = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::ValueSpecification> specify() = 0;
			
			/*!
			 */ 
			virtual std::string toString() = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<uml::EnumerationLiteral > getLiteral() const = 0;
			
			/*!
			 */
			virtual void setLiteral(std::shared_ptr<uml::EnumerationLiteral> _literal_literal) = 0;
			/*!
			 */
			virtual std::shared_ptr<uml::Enumeration > getType() const = 0;
			
			/*!
			 */
			virtual void setType(std::shared_ptr<uml::Enumeration> _type_type) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<uml::EnumerationLiteral > m_literal;
			/*!
			 */
			std::shared_ptr<uml::Enumeration > m_type;
			

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
#endif /* end of include guard: FUML_SEMANTICS_SIMPLECLASSIFIERS_ENUMERATIONVALUE_HPP */
