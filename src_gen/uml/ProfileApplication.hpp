//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_PROFILEAPPLICATION_HPP
#define UML_PROFILEAPPLICATION_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#include <string>
#include <map>
#include <vector>
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace uml 
{
	class Comment;
}

namespace uml 
{
	class DirectedRelationship;
}

namespace ecore 
{
	class EAnnotation;
}

namespace ecore 
{
	class ENamedElement;
}

namespace ecore 
{
	class EPackage;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class NamedElement;
}

namespace uml 
{
	class Package;
}

namespace uml 
{
	class Profile;
}

// base class includes
#include "DirectedRelationship.hpp"

// enum includes


//*********************************
namespace uml 
{
	/*!
	 A profile application is used to show which profiles have been applied to a package.
	<p>From package UML::Packages.</p> */
	class ProfileApplication:virtual public DirectedRelationship	{
		public:
 			ProfileApplication(const ProfileApplication &) {}
			ProfileApplication& operator=(ProfileApplication const&) = delete;
	
		protected:
			ProfileApplication(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~ProfileApplication() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 Retrieves the definition (Ecore representation) of the profile associated with this profile application. */ 
			virtual ecore::EPackage *  getAppliedDefinition()  = 0;
			
			/*!
			 Retrieves the definition (Ecore representation) of the specified named element in the profile associated with this profile application. */ 
			virtual ecore::ENamedElement *  getAppliedDefinition(uml::NamedElement *  namedElement)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies that the Profile filtering rules for the metaclasses of the referenced metamodel shall be strictly applied.
			<p>From package UML::Packages.</p> */ 
			virtual bool getIsStrict() const = 0;
			
			/*!
			 Specifies that the Profile filtering rules for the metaclasses of the referenced metamodel shall be strictly applied.
			<p>From package UML::Packages.</p> */ 
			virtual void setIsStrict (bool _isStrict)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 References the Profiles that are applied to a Package through this ProfileApplication.
			<p>From package UML::Packages.</p> */
			virtual uml::Profile *  getAppliedProfile() const = 0;
			
			/*!
			 References the Profiles that are applied to a Package through this ProfileApplication.
			<p>From package UML::Packages.</p> */
			virtual void setAppliedProfile(uml::Profile *  _appliedProfile) = 0;
			
			/*!
			 The package that owns the profile application.
			<p>From package UML::Packages.</p> */
			virtual uml::Package *  getApplyingPackage() const = 0;
			
			/*!
			 The package that owns the profile application.
			<p>From package UML::Packages.</p> */
			virtual void setApplyingPackage(uml::Package *  _applyingPackage) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 Specifies that the Profile filtering rules for the metaclasses of the referenced metamodel shall be strictly applied.
			<p>From package UML::Packages.</p> */ 
			bool m_isStrict =  false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 References the Profiles that are applied to a Package through this ProfileApplication.
			<p>From package UML::Packages.</p> */
			uml::Profile *  m_appliedProfile =  nullptr ;
			/*!
			 The package that owns the profile application.
			<p>From package UML::Packages.</p> */
			uml::Package *  m_applyingPackage =  nullptr ;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual uml::Element *  getOwner() const = 0;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getTarget() const = 0;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getSource() const = 0;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::vector<uml::Element * > *  getRelatedElement() const = 0; 
	};

}
#endif /* end of include guard: UML_PROFILEAPPLICATION_HPP */

