#include "ParameterSetImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
ParameterSetImpl::ParameterSetImpl()
{
	//*********************************
	// Reference Members
	//*********************************
	if( m_condition == nullptr)
	{
		m_condition = new std::vector<uml::Constraint * >();
	}
	if( m_parameter == nullptr)
	{
		m_parameter = new std::vector<uml::Parameter * >();
	}
}

ParameterSetImpl::~ParameterSetImpl()
{
	if(m_condition!=nullptr)
	{
		for(auto c :*m_condition)
		{
			delete(c);
			c = 0;
		}
	}
	if(m_parameter!=nullptr)
	{
		delete(m_parameter);
	 	m_parameter = nullptr;
	}
	
}

ParameterSetImpl::ParameterSetImpl(const ParameterSetImpl & obj)
{
	//create copy of all Attributes
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
	std::vector<uml::Dependency * > *  _clientDependency = obj.getClientDependency();
	this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

	m_namespace  = obj.getNamespace();

	std::vector<uml::Element * > *  _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());
	delete(_ownedElement);

	m_owner  = obj.getOwner();

	std::vector<uml::Parameter * > *  _parameter = obj.getParameter();
	this->getParameter()->insert(this->getParameter()->end(), _parameter->begin(), _parameter->end());


	//clone containt lists
	for(uml::Constraint * 	_condition : *obj.getCondition())
	{
		this->getCondition()->push_back(dynamic_cast<uml::Constraint * >(_condition->copy()));
	}
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

ecore::EObject *  ParameterSetImpl::copy() const
{
	return new ParameterSetImpl(*this);
}

ecore::EClass* ParameterSetImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getParameterSet();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************
bool ParameterSetImpl::input(boost::any diagnostics,std::map <   boost::any, boost::any > * context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool ParameterSetImpl::same_parameterized_entity(boost::any diagnostics,std::map <   boost::any, boost::any > * context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool ParameterSetImpl::two_parameter_sets(boost::any diagnostics,std::map <   boost::any, boost::any > * context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::vector<uml::Constraint * > *  ParameterSetImpl::getCondition() const
{
	
	return m_condition;
}


std::vector<uml::Parameter * > *  ParameterSetImpl::getParameter() const
{
	//assert(m_parameter);
	return m_parameter;
}


//*********************************
// Union Getter
//*********************************
std::vector<uml::Element * > *  ParameterSetImpl::getOwnedElement() const
{
	std::vector<uml::Element * > *  _ownedElement =  new std::vector<uml::Element * >() ;
	
	std::vector<uml::Element * > *  condition = (std::vector<uml::Element * > * ) getCondition();
	_ownedElement->insert(_ownedElement->end(), condition->begin(), condition->end());

	_ownedElement->push_back(getNameExpression());
	std::vector<uml::Element * > *  ownedComment = (std::vector<uml::Element * > * ) getOwnedComment();
	_ownedElement->insert(_ownedElement->end(), ownedComment->begin(), ownedComment->end());


	return _ownedElement;
}
uml::Element *  ParameterSetImpl::getOwner() const
{
	uml::Element *  _owner =   nullptr ;
	
	if(getNamespace()!=nullptr)
	{
		_owner = getNamespace();
	}

	return _owner;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ParameterSetImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //524
		case UmlPackage::PARAMETERSET_CONDITION:
			return getCondition(); //5210
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //520
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //525
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //526
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //527
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //521
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //522
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //523
		case UmlPackage::PARAMETERSET_PARAMETER:
			return getParameter(); //5211
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //528
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //529
	}
	return boost::any();
}
