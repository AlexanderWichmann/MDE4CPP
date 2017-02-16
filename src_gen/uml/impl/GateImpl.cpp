#include "GateImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
GateImpl::GateImpl()
{
	//*********************************
	// Reference Members
	//*********************************

}

GateImpl::~GateImpl()
{
	
}

GateImpl::GateImpl(const GateImpl & obj)
{
	//create copy of all Attributes
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
	std::vector<uml::Dependency * > *  _clientDependency = obj.getClientDependency();
	this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

	m_message  = obj.getMessage();

	m_namespace  = obj.getNamespace();

	std::vector<uml::Element * > *  _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());
	delete(_ownedElement);

	m_owner  = obj.getOwner();


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

ecore::EObject *  GateImpl::copy() const
{
	return new GateImpl(*this);
}

ecore::EClass* GateImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getGate();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************
bool GateImpl::actual_gate_distinguishable(boost::any diagnostics,std::map <   boost::any, boost::any > * context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool GateImpl::actual_gate_matched(boost::any diagnostics,std::map <   boost::any, boost::any > * context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool GateImpl::formal_gate_distinguishable(boost::any diagnostics,std::map <   boost::any, boost::any > * context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::string GateImpl::getName()  const 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

uml::InteractionOperand *  GateImpl::getOperand() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool GateImpl::inside_cf_gate_distinguishable(boost::any diagnostics,std::map <   boost::any, boost::any > * context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool GateImpl::inside_cf_matched(boost::any diagnostics,std::map <   boost::any, boost::any > * context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool GateImpl::isActual() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool GateImpl::isFormal() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool GateImpl::isInsideCF() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool GateImpl::isOutsideCF() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool GateImpl::matches(uml::Gate *  gateToMatch) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool GateImpl::outside_cf_gate_distinguishable(boost::any diagnostics,std::map <   boost::any, boost::any > * context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool GateImpl::outside_cf_matched(boost::any diagnostics,std::map <   boost::any, boost::any > * context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************
std::vector<uml::Element * > *  GateImpl::getOwnedElement() const
{
	std::vector<uml::Element * > *  _ownedElement =  new std::vector<uml::Element * >() ;
	
	_ownedElement->push_back(getNameExpression());
	std::vector<uml::Element * > *  ownedComment = (std::vector<uml::Element * > * ) getOwnedComment();
	_ownedElement->insert(_ownedElement->end(), ownedComment->begin(), ownedComment->end());


	return _ownedElement;
}
uml::Element *  GateImpl::getOwner() const
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
boost::any GateImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //2164
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //2160
		case UmlPackage::MESSAGEEND_MESSAGE:
			return getMessage(); //21610
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //2165
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //2166
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //2167
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //2161
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //2162
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //2163
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //2168
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //2169
	}
	return boost::any();
}
