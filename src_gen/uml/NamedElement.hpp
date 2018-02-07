//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_NAMEDELEMENT_HPP
#define UML_NAMEDELEMENT_HPP

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

#include "abstractDataTypes/SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
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
	class Dependency;
}

namespace ecore 
{
	class EAnnotation;
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
	class Namespace;
}

namespace uml 
{
	class Package;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class Usage;
}

// base class includes
#include "uml/Element.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A NamedElement is an Element in a model that may have a name. The name may be given directly and/or via the use of a StringExpression.
	<p>From package UML::CommonStructure.</p> */
	class NamedElement:virtual public Element
	{
		public:
 			NamedElement(const NamedElement &) {}
			NamedElement& operator=(NamedElement const&) = delete;

		protected:
			NamedElement(){}


			//Additional constructors for the containments back reference

			NamedElement(std::weak_ptr<uml::Namespace > par_namespace);

			//Additional constructors for the containments back reference

			NamedElement(std::weak_ptr<uml::Element > par_owner);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~NamedElement() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The query allNamespaces() gives the sequence of Namespaces in which the NamedElement is nested, working outwards.
			result = (
			if owner = null
			  then OrderedSet{}
			else
			  let enclosingNamespace : Namespace =
			    if owner.oclIsKindOf(TemplateParameter) and owner.oclAsType(TemplateParameter).signature.template.oclIsKindOf(Namespace)
			      then owner.oclAsType(TemplateParameter).signature.template.oclAsType(Namespace)
			    else
			      namespace
			    endif
			  in enclosingNamespace.allNamespaces()->prepend(enclosingNamespace)
			endif)
			<p>From package UML::CommonStructure.</p> */ 
			virtual std::shared_ptr<Bag<uml::Namespace> > allNamespaces()  const  = 0;
			
			/*!
			 The query allOwningPackages() returns the set of all the enclosing Namespaces of this NamedElement, working outwards, that are Packages, up to but not including the first such Namespace that is not a Package.
			result = (if namespace.oclIsKindOf(Package)
			then
			  let owningPackage : Package = namespace.oclAsType(Package) in
			    owningPackage->union(owningPackage.allOwningPackages())
			else
			  null
			endif)
			<p>From package UML::CommonStructure.</p> */ 
			virtual std::shared_ptr<Bag<uml::Package> > allOwningPackages()  = 0;
			
			/*!
			 Creates a dependency between this named element and the specified supplier, owned by this named element's nearest package. */ 
			virtual std::shared_ptr<uml::Dependency> createDependency(std::shared_ptr<uml::NamedElement>  supplier)  = 0;
			
			/*!
			 Creates a usage between this named element and the specified supplier, owned by this named element's nearest package. */ 
			virtual std::shared_ptr<uml::Usage> createUsage(std::shared_ptr<uml::NamedElement>  supplier)  = 0;
			
			/*!
			 result = (Dependency.allInstances()->select(d | d.client->includes(self)))
			<p>From package UML::CommonStructure.</p> */ 
			virtual std::shared_ptr<Bag<uml::Dependency> > getClientDependencies()  = 0;
			
			/*!
			 Retrieves a localized label for this named element. */ 
			virtual std::string getLabel()  = 0;
			
			/*!
			 Retrieves a label for this named element, localized if indicated. */ 
			virtual std::string getLabel(bool localize)  = 0;
			
			
			
			/*!
			 When a NamedElement has a name, and all of its containing Namespaces have a name, the qualifiedName is constructed from the name of the NamedElement and the names of the containing Namespaces.
			result = (if self.name <> null and self.allNamespaces()->select( ns | ns.name=null )->isEmpty()
			then 
			    self.allNamespaces()->iterate( ns : Namespace; agg: String = self.name | ns.name.concat(self.separator()).concat(agg))
			else
			   null
			endif)
			<p>From package UML::CommonStructure.</p> */ 
			virtual std::string getQualifiedName()  const  = 0;
			
			/*!
			 If there is no name, or one of the containing Namespaces has no name, there is no qualifiedName.
			name=null or allNamespaces()->select( ns | ns.name=null )->notEmpty() implies qualifiedName = null */ 
			virtual bool has_no_qualified_name(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 When there is a name, and all of the containing Namespaces have a name, the qualifiedName is constructed from the name of the NamedElement and the names of the containing Namespaces.
			(name <> null and allNamespaces()->select(ns | ns.name = null)->isEmpty()) implies
			  qualifiedName = allNamespaces()->iterate( ns : Namespace; agg: String = name | ns.name.concat(self.separator()).concat(agg)) */ 
			virtual bool has_qualified_name(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have types neither of which is a kind of the other or (b) they have different names.
			result = ((self.oclIsKindOf(n.oclType()) or n.oclIsKindOf(self.oclType())) implies
			    ns.getNamesOfMember(self)->intersection(ns.getNamesOfMember(n))->isEmpty()
			)
			<p>From package UML::CommonStructure.</p> */ 
			virtual bool isDistinguishableFrom(std::shared_ptr<uml::NamedElement>  n,std::shared_ptr<uml::Namespace>  ns)  = 0;
			
			/*!
			 The query separator() gives the string that is used to separate names when constructing a qualifiedName.
			result = ('::')
			<p>From package UML::CommonStructure.</p> */ 
			virtual std::string separator()  const  = 0;
			
			/*!
			 If a NamedElement is owned by something other than a Namespace, it does not have a visibility. One that is not owned by anything (and hence must be a Package, as this is the only kind of NamedElement that overrides mustBeOwned()) may have a visibility.
			(namespace = null and owner <> null) implies visibility = null */ 
			virtual bool visibility_needs_ownership(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 The name of the NamedElement.
			<p>From package UML::CommonStructure.</p> */ 
			virtual std::string getName() const = 0;
			
			/*!
			 The name of the NamedElement.
			<p>From package UML::CommonStructure.</p> */ 
			virtual void setName (std::string _name)= 0; 
			
			
			/*!
			 Determines whether and how the NamedElement is visible outside its owning Namespace.
			<p>From package UML::CommonStructure.</p> */ 
			virtual VisibilityKind getVisibility() const = 0;
			
			/*!
			 Determines whether and how the NamedElement is visible outside its owning Namespace.
			<p>From package UML::CommonStructure.</p> */ 
			virtual void setVisibility (VisibilityKind _visibility)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Indicates the Dependencies that reference this NamedElement as a client.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr< Bag<uml::Dependency> > getClientDependency() const = 0;
			
			/*!
			 The StringExpression used to define the name of this NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::StringExpression > getNameExpression() const = 0;
			
			/*!
			 The StringExpression used to define the name of this NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual void setNameExpression(std::shared_ptr<uml::StringExpression> _nameExpression_nameExpression) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 The name of the NamedElement.
			<p>From package UML::CommonStructure.</p> */ 
			std::string m_name ;
			/*!
			 A name that allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing Namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
			<p>From package UML::CommonStructure.</p> */ 
			std::string m_qualifiedName ;
			/*!
			 Determines whether and how the NamedElement is visible outside its owning Namespace.
			<p>From package UML::CommonStructure.</p> */ 
			VisibilityKind m_visibility ;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 Indicates the Dependencies that reference this NamedElement as a client.
			<p>From package UML::CommonStructure.</p> */
			std::shared_ptr< Bag<uml::Dependency> > m_clientDependency;
			/*!
			 The StringExpression used to define the name of this NamedElement.
			<p>From package UML::CommonStructure.</p> */
			std::shared_ptr<uml::StringExpression > m_nameExpression;
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			std::weak_ptr<uml::Namespace > m_namespace;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
	};

}
#endif /* end of include guard: UML_NAMEDELEMENT_HPP */

