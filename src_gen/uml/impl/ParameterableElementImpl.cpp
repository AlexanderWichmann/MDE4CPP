#include "ParameterableElementImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
ParameterableElementImpl::ParameterableElementImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	
	
}

ParameterableElementImpl::~ParameterableElementImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ParameterableElement "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

ParameterableElementImpl::ParameterableElementImpl(const ParameterableElementImpl & obj)
{
	//create copy of all Attributes

	//copy references with now containment
	
			std::shared_ptr<Union<uml::Element> > _ownedElement = obj.getOwnedElement();
	m_ownedElement.reset(new 		Union<uml::Element> (*(obj.getOwnedElement().get())));// this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());

	m_owner  = obj.getOwner();

	m_owningTemplateParameter  = obj.getOwningTemplateParameter();

	m_templateParameter  = obj.getTemplateParameter();


	//clone containt lists
	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
	}
	std::shared_ptr<Bag<uml::Comment>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->add(std::shared_ptr<uml::Comment>(dynamic_cast<uml::Comment*>(_ownedComment->copy())));
	}
}

ecore::EObject *  ParameterableElementImpl::copy() const
{
	return new ParameterableElementImpl(*this);
}

std::shared_ptr<ecore::EClass> ParameterableElementImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getParameterableElement();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************
bool
 ParameterableElementImpl::isCompatibleWith(std::shared_ptr<uml::ParameterableElement>  p) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool
 ParameterableElementImpl::isTemplateParameter() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<uml::TemplateParameter > ParameterableElementImpl::getOwningTemplateParameter() const
{

    return m_owningTemplateParameter;
}
void ParameterableElementImpl::setOwningTemplateParameter(std::shared_ptr<uml::TemplateParameter> _owningTemplateParameter)
{
    m_owningTemplateParameter = _owningTemplateParameter;
}

std::shared_ptr<uml::TemplateParameter > ParameterableElementImpl::getTemplateParameter() const
{

    return m_templateParameter;
}
void ParameterableElementImpl::setTemplateParameter(std::shared_ptr<uml::TemplateParameter> _templateParameter)
{
    m_templateParameter = _templateParameter;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<uml::Element > ParameterableElementImpl::getOwner() const
{
	

	return m_owner;
}
		std::shared_ptr<Union<uml::Element> > ParameterableElementImpl::getOwnedElement() const
{
	

	return m_ownedElement;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ParameterableElementImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //150
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //151
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //152
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //153
		case UmlPackage::PARAMETERABLEELEMENT_OWNINGTEMPLATEPARAMETER:
			return getOwningTemplateParameter(); //154
		case UmlPackage::PARAMETERABLEELEMENT_TEMPLATEPARAMETER:
			return getTemplateParameter(); //155
	}
	return boost::any();
}
