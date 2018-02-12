#include "uml/impl/PackageImportImpl.hpp"
#include <iostream>
#include <cassert>

#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"
#include "uml/impl/UmlPackageImpl.hpp"

//Forward declaration includes
#include "uml/Comment.hpp"

#include "uml/DirectedRelationship.hpp"

#include "ecore/EAnnotation.hpp"

#include "uml/Element.hpp"

#include "uml/Namespace.hpp"

#include "uml/Package.hpp"


using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
PackageImportImpl::PackageImportImpl()
{
	//*********************************
	// Attribute Members
	//*********************************
	
	//*********************************
	// Reference Members
	//*********************************
	//References
	

	

	//Init references
	

	
}

PackageImportImpl::~PackageImportImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete PackageImport "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}


//Additional constructor for the containments back reference
			PackageImportImpl::PackageImportImpl(std::weak_ptr<uml::Namespace > par_importingNamespace)
			:PackageImportImpl()
			{
			    m_importingNamespace = par_importingNamespace;
			}





//Additional constructor for the containments back reference
			PackageImportImpl::PackageImportImpl(std::weak_ptr<uml::Element > par_owner)
			:PackageImportImpl()
			{
			    m_owner = par_owner;
			}






PackageImportImpl::PackageImportImpl(const PackageImportImpl & obj):PackageImportImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy PackageImport "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_visibility = obj.getVisibility();

	//copy references with no containment (soft copy)
	
	m_importingNamespace  = obj.getImportingNamespace();

	m_owner  = obj.getOwner();

	std::shared_ptr<Union<uml::Element> > _relatedElement = obj.getRelatedElement();
	m_relatedElement.reset(new Union<uml::Element>(*(obj.getRelatedElement().get())));


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(std::dynamic_pointer_cast<ecore::EAnnotation>(_eAnnotations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eAnnotations" << std::endl;
	#endif
	if(obj.getImportedPackage()!=nullptr)
	{
		m_importedPackage = std::dynamic_pointer_cast<uml::Package>(obj.getImportedPackage()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_importedPackage" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Comment>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->add(std::shared_ptr<uml::Comment>(std::dynamic_pointer_cast<uml::Comment>(_ownedComment->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_ownedComment" << std::endl;
	#endif

}

std::shared_ptr<ecore::EObject>  PackageImportImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new PackageImportImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> PackageImportImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getPackageImport_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************
void PackageImportImpl::setVisibility(VisibilityKind _visibility)
{
	m_visibility = _visibility;
} 

VisibilityKind PackageImportImpl::getVisibility() const 
{
	return m_visibility;
}

//*********************************
// Operations
//*********************************
bool PackageImportImpl::public_or_private(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<uml::Package > PackageImportImpl::getImportedPackage() const
{
//assert(m_importedPackage);
    return m_importedPackage;
}
void PackageImportImpl::setImportedPackage(std::shared_ptr<uml::Package> _importedPackage)
{
    m_importedPackage = _importedPackage;
}

std::weak_ptr<uml::Namespace > PackageImportImpl::getImportingNamespace() const
{
//assert(m_importingNamespace);
    return m_importingNamespace;
}
void PackageImportImpl::setImportingNamespace(std::shared_ptr<uml::Namespace> _importingNamespace)
{
    m_importingNamespace = _importingNamespace;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<Union<uml::Element> > PackageImportImpl::getOwnedElement() const
{
	return m_ownedElement;
}
std::weak_ptr<uml::Element > PackageImportImpl::getOwner() const
{
	return m_owner;
}
std::shared_ptr<Union<uml::Element> > PackageImportImpl::getRelatedElement() const
{
	return m_relatedElement;
}
std::shared_ptr<SubsetUnion<uml::Element, uml::Element > > PackageImportImpl::getSource() const
{
	return m_source;
}
std::shared_ptr<SubsetUnion<uml::Element, uml::Element > > PackageImportImpl::getTarget() const
{
	return m_target;
}


std::shared_ptr<ecore::EObject> PackageImportImpl::eContainer() const
{
	if(auto wp = m_importingNamespace.lock())
	{
		return wp;
	}

	if(auto wp = m_owner.lock())
	{
		return wp;
	}
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any PackageImportImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ecore::EcorePackage::EMODELELEMENT_EREFERENCE_EANNOTATIONS:
			return getEAnnotations(); //830
		case UmlPackage::PACKAGEIMPORT_EREFERENCE_IMPORTEDPACKAGE:
			return getImportedPackage(); //837
		case UmlPackage::PACKAGEIMPORT_EREFERENCE_IMPORTINGNAMESPACE:
			return getImportingNamespace(); //838
		case UmlPackage::ELEMENT_EREFERENCE_OWNEDCOMMENT:
			return getOwnedComment(); //831
		case UmlPackage::ELEMENT_EREFERENCE_OWNEDELEMENT:
			return getOwnedElement(); //832
		case UmlPackage::ELEMENT_EREFERENCE_OWNER:
			return getOwner(); //833
		case UmlPackage::RELATIONSHIP_EREFERENCE_RELATEDELEMENT:
			return getRelatedElement(); //834
		case UmlPackage::DIRECTEDRELATIONSHIP_EREFERENCE_SOURCE:
			return getSource(); //835
		case UmlPackage::DIRECTEDRELATIONSHIP_EREFERENCE_TARGET:
			return getTarget(); //836
		case UmlPackage::PACKAGEIMPORT_EATTRIBUTE_VISIBILITY:
			return getVisibility(); //839
	}
	return boost::any();
}

void PackageImportImpl::eSet(int featureID, boost::any newValue)
{
	switch(featureID)
	{
		case UmlPackage::PACKAGEIMPORT_EREFERENCE_IMPORTEDPACKAGE:
		{
			// BOOST CAST
			std::shared_ptr<uml::Package> _importedPackage = boost::any_cast<std::shared_ptr<uml::Package>>(newValue);
			setImportedPackage(_importedPackage); //837
			break;
		}
		case UmlPackage::PACKAGEIMPORT_EREFERENCE_IMPORTINGNAMESPACE:
		{
			// BOOST CAST
			std::shared_ptr<uml::Namespace> _importingNamespace = boost::any_cast<std::shared_ptr<uml::Namespace>>(newValue);
			setImportingNamespace(_importingNamespace); //838
			break;
		}
		case UmlPackage::PACKAGEIMPORT_EATTRIBUTE_VISIBILITY:
		{
			// BOOST CAST
			VisibilityKind _visibility = boost::any_cast<VisibilityKind>(newValue);
			setVisibility(_visibility); //839
			break;
		}
	}
}
