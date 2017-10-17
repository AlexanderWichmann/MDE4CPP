//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_LINK_HPP
#define FUML_LINK_HPP

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

#include <string>
#include <map>
#include <vector>
#include "SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace uml 
{
	class Association;
}

namespace uml 
{
	class Classifier;
}

namespace fUML 
{
	class ExtensionalValue;
}

namespace fUML 
{
	class FeatureValue;
}

namespace fUML 
{
	class Locus;
}

namespace uml 
{
	class Property;
}

// base class includes
#include "ExtensionalValue.hpp"

// enum includes


//*********************************
namespace fUML 
{
	/*!
	 */
	class Link:virtual public ExtensionalValue
	{
		public:
 			Link(const Link &) {}
			Link& operator=(Link const&) = delete;

		protected:
			Link(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Link() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void addTo(std::shared_ptr<fUML::Locus>  locus)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::FeatureValue> > getOtherFeatureValues(std::shared_ptr<Bag<fUML::ExtensionalValue> >  extent,std::shared_ptr<uml::Property>  end)  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<uml::Classifier> > getTypes()  = 0;
			
			/*!
			 */ 
			virtual bool isMatchingLink(std::shared_ptr<fUML::ExtensionalValue>  link,std::shared_ptr<uml::Property>  end)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<uml::Association > getType() const = 0;
			
			/*!
			 */
			virtual void setType(std::shared_ptr<uml::Association> _type_type) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<uml::Association > m_type;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: FUML_LINK_HPP */

