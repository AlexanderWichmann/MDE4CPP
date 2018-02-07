#include "uml/impl/LiteralUnlimitedNaturalImpl.hpp"
#include <iostream>
#include <cassert>

#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"
#include "uml/impl/UmlPackageImpl.hpp"

//Forward declaration includes
#include "uml/Comment.hpp"

#include "uml/Dependency.hpp"

#include "ecore/EAnnotation.hpp"

#include "uml/Element.hpp"

#include "uml/LiteralSpecification.hpp"

#include "uml/Namespace.hpp"

#include "uml/Package.hpp"

#include "uml/Slot.hpp"

#include "uml/StringExpression.hpp"

#include "uml/TemplateParameter.hpp"

#include "uml/Type.hpp"


using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
LiteralUnlimitedNaturalImpl::LiteralUnlimitedNaturalImpl()
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

LiteralUnlimitedNaturalImpl::~LiteralUnlimitedNaturalImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete LiteralUnlimitedNatural "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}


//Additional constructor for the containments back reference
			LiteralUnlimitedNaturalImpl::LiteralUnlimitedNaturalImpl(std::weak_ptr<uml::Namespace > par_namespace)
			:LiteralUnlimitedNaturalImpl()
			{
			    m_namespace = par_namespace;
			}





//Additional constructor for the containments back reference
			LiteralUnlimitedNaturalImpl::LiteralUnlimitedNaturalImpl(std::weak_ptr<uml::Element > par_owner)
			:LiteralUnlimitedNaturalImpl()
			{
			    m_owner = par_owner;
			}





//Additional constructor for the containments back reference
			LiteralUnlimitedNaturalImpl::LiteralUnlimitedNaturalImpl(std::weak_ptr<uml::Package > par_owningPackage)
			:LiteralUnlimitedNaturalImpl()
			{
			    m_owningPackage = par_owningPackage;
			}





//Additional constructor for the containments back reference
			LiteralUnlimitedNaturalImpl::LiteralUnlimitedNaturalImpl(std::weak_ptr<uml::Slot > par_owningSlot)
			:LiteralUnlimitedNaturalImpl()
			{
			    m_owningSlot = par_owningSlot;
			}





//Additional constructor for the containments back reference
			LiteralUnlimitedNaturalImpl::LiteralUnlimitedNaturalImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter)
			:LiteralUnlimitedNaturalImpl()
			{
			    m_owningTemplateParameter = par_owningTemplateParameter;
			}






LiteralUnlimitedNaturalImpl::LiteralUnlimitedNaturalImpl(const LiteralUnlimitedNaturalImpl & obj):LiteralUnlimitedNaturalImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy LiteralUnlimitedNatural "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_value = obj.getValue();
	m_visibility = obj.getVisibility();

	//copy references with no containment (soft copy)
	
	std::shared_ptr< Bag<uml::Dependency> > _clientDependency = obj.getClientDependency();
	m_clientDependency.reset(new Bag<uml::Dependency>(*(obj.getClientDependency().get())));

	m_namespace  = obj.getNamespace();

	m_owner  = obj.getOwner();

	m_owningPackage  = obj.getOwningPackage();

	m_owningSlot  = obj.getOwningSlot();

	m_owningTemplateParameter  = obj.getOwningTemplateParameter();

	m_templateParameter  = obj.getTemplateParameter();

	m_type  = obj.getType();


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(std::dynamic_pointer_cast<ecore::EAnnotation>(_eAnnotations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eAnnotations" << std::endl;
	#endif
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression = std::dynamic_pointer_cast<uml::StringExpression>(obj.getNameExpression()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_nameExpression" << std::endl;
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

std::shared_ptr<ecore::EObject>  LiteralUnlimitedNaturalImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new LiteralUnlimitedNaturalImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> LiteralUnlimitedNaturalImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getLiteralUnlimitedNatural();
}

//*********************************
// Attribute Setter Getter
//*********************************
void LiteralUnlimitedNaturalImpl::setValue(int _value)
{
	m_value = _value;
} 

int LiteralUnlimitedNaturalImpl::getValue() const 
{
	return m_value;
}

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************
std::weak_ptr<uml::Namespace > LiteralUnlimitedNaturalImpl::getNamespace() const
{
	return m_namespace;
}
std::shared_ptr<Union<uml::Element> > LiteralUnlimitedNaturalImpl::getOwnedElement() const
{
	return m_ownedElement;
}
std::weak_ptr<uml::Element > LiteralUnlimitedNaturalImpl::getOwner() const
{
	return m_owner;
}


std::shared_ptr<ecore::EObject> LiteralUnlimitedNaturalImpl::eContainer() const
{
	if(auto wp = m_namespace.lock())
	{
		return wp;
	}

	if(auto wp = m_owner.lock())
	{
		return wp;
	}

	if(auto wp = m_owningPackage.lock())
	{
		return wp;
	}

	if(auto wp = m_owningSlot.lock())
	{
		return wp;
	}

	if(auto wp = m_owningTemplateParameter.lock())
	{
		return wp;
	}
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any LiteralUnlimitedNaturalImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //2544
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //2540
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //2545
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //2546
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //2547
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //2541
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //2542
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //2543
		case UmlPackage::PACKAGEABLEELEMENT_OWNINGPACKAGE:
			return getOwningPackage(); //25412
		case UmlPackage::VALUESPECIFICATION_OWNINGSLOT:
			return getOwningSlot(); //25414
		case UmlPackage::PARAMETERABLEELEMENT_OWNINGTEMPLATEPARAMETER:
			return getOwningTemplateParameter(); //2544
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //2548
		case UmlPackage::PARAMETERABLEELEMENT_TEMPLATEPARAMETER:
			return getTemplateParameter(); //2545
		case UmlPackage::TYPEDELEMENT_TYPE:
			return getType(); //25410
		case UmlPackage::LITERALUNLIMITEDNATURAL_VALUE:
			return getValue(); //25415
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //2549
	}
	return boost::any();
}

void LiteralUnlimitedNaturalImpl::eSet(int featureID, boost::any newValue)
{
	switch(featureID)
	{
		case UmlPackage::NAMEDELEMENT_NAME:
		{
			// BOOST CAST
			std::string _name = boost::any_cast<std::string>(newValue);
			setName(_name); //2545
			break;
		}
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
		{
			// BOOST CAST
			std::shared_ptr<uml::StringExpression> _nameExpression = boost::any_cast<std::shared_ptr<uml::StringExpression>>(newValue);
			setNameExpression(_nameExpression); //2546
			break;
		}
		case UmlPackage::PACKAGEABLEELEMENT_OWNINGPACKAGE:
		{
			// BOOST CAST
			std::shared_ptr<uml::Package> _owningPackage = boost::any_cast<std::shared_ptr<uml::Package>>(newValue);
			setOwningPackage(_owningPackage); //25412
			break;
		}
		case UmlPackage::VALUESPECIFICATION_OWNINGSLOT:
		{
			// BOOST CAST
			std::shared_ptr<uml::Slot> _owningSlot = boost::any_cast<std::shared_ptr<uml::Slot>>(newValue);
			setOwningSlot(_owningSlot); //25414
			break;
		}
		case UmlPackage::PARAMETERABLEELEMENT_OWNINGTEMPLATEPARAMETER:
		{
			// BOOST CAST
			std::shared_ptr<uml::TemplateParameter> _owningTemplateParameter = boost::any_cast<std::shared_ptr<uml::TemplateParameter>>(newValue);
			setOwningTemplateParameter(_owningTemplateParameter); //2544
			break;
		}
		case UmlPackage::PARAMETERABLEELEMENT_TEMPLATEPARAMETER:
		{
			// BOOST CAST
			std::shared_ptr<uml::TemplateParameter> _templateParameter = boost::any_cast<std::shared_ptr<uml::TemplateParameter>>(newValue);
			setTemplateParameter(_templateParameter); //2545
			break;
		}
		case UmlPackage::TYPEDELEMENT_TYPE:
		{
			// BOOST CAST
			std::shared_ptr<uml::Type> _type = boost::any_cast<std::shared_ptr<uml::Type>>(newValue);
			setType(_type); //25410
			break;
		}
		case UmlPackage::LITERALUNLIMITEDNATURAL_VALUE:
		{
			// BOOST CAST
			int _value = boost::any_cast<int>(newValue);
			setValue(_value); //25415
			break;
		}
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
		{
			// BOOST CAST
			VisibilityKind _visibility = boost::any_cast<VisibilityKind>(newValue);
			setVisibility(_visibility); //2549
			break;
		}
	}
}
