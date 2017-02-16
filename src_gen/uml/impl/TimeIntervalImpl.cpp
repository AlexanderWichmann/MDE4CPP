#include "TimeIntervalImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
TimeIntervalImpl::TimeIntervalImpl()
{
	//*********************************
	// Reference Members
	//*********************************

}

TimeIntervalImpl::~TimeIntervalImpl()
{
	
}

TimeIntervalImpl::TimeIntervalImpl(const TimeIntervalImpl & obj)
{
	//create copy of all Attributes
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
	std::vector<uml::Dependency * > *  _clientDependency = obj.getClientDependency();
	this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

	m_max  = obj.getMax();

	m_min  = obj.getMin();

	m_namespace  = obj.getNamespace();

	std::vector<uml::Element * > *  _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());
	delete(_ownedElement);

	m_owner  = obj.getOwner();

	m_owningTemplateParameter  = obj.getOwningTemplateParameter();

	m_templateParameter  = obj.getTemplateParameter();

	m_type  = obj.getType();


	//clone containt lists
	for(ecore::EAnnotation * 	_eAnnotations : *obj.getEAnnotations())
	{
		this->getEAnnotations()->push_back(dynamic_cast<ecore::EAnnotation * >(_eAnnotations->copy()));
	}
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression = dynamic_cast<uml::StringExpression * >(obj.getNameExpression()->copy());
	}
	for(uml::Comment * 	_ownedComment : *obj.getOwnedComment())
	{
		this->getOwnedComment()->push_back(dynamic_cast<uml::Comment * >(_ownedComment->copy()));
	}
}

ecore::EObject *  TimeIntervalImpl::copy() const
{
	return new TimeIntervalImpl(*this);
}

ecore::EClass* TimeIntervalImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getTimeInterval();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************
uml::Element *  TimeIntervalImpl::getOwner() const
{
	uml::Element *  _owner =   nullptr ;
	
	if(getNamespace()!=nullptr)
	{
		_owner = getNamespace();
	}
	if(getOwningTemplateParameter()!=nullptr)
	{
		_owner = getOwningTemplateParameter();
	}

	return _owner;
}
std::vector<uml::Element * > *  TimeIntervalImpl::getOwnedElement() const
{
	std::vector<uml::Element * > *  _ownedElement =  new std::vector<uml::Element * >() ;
	
	_ownedElement->push_back(getNameExpression());
	std::vector<uml::Element * > *  ownedComment = (std::vector<uml::Element * > * ) getOwnedComment();
	_ownedElement->insert(_ownedElement->end(), ownedComment->begin(), ownedComment->end());


	return _ownedElement;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any TimeIntervalImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //2564
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //2560
		case UmlPackage::INTERVAL_MAX:
			return getMax(); //25613
		case UmlPackage::INTERVAL_MIN:
			return getMin(); //25614
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //2565
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //2566
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //2567
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //2561
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //2562
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //2563
		case UmlPackage::PARAMETERABLEELEMENT_OWNINGTEMPLATEPARAMETER:
			return getOwningTemplateParameter(); //2564
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //2568
		case UmlPackage::PARAMETERABLEELEMENT_TEMPLATEPARAMETER:
			return getTemplateParameter(); //2565
		case UmlPackage::TYPEDELEMENT_TYPE:
			return getType(); //25610
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //2569
	}
	return boost::any();
}
