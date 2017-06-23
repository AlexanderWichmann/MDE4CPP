#include "ExpressionImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
ExpressionImpl::ExpressionImpl()
{
	//*********************************
	// Attribute Members
	//*********************************
	
	//*********************************
	// Reference Members
	//*********************************
		/*Subset*/
		m_operand.reset(new Subset<uml::ValueSpecification, uml::Element >(m_ownedElement));//(m_ownedElement));
	
	
}

ExpressionImpl::~ExpressionImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete Expression "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

ExpressionImpl::ExpressionImpl(const ExpressionImpl & obj)
{
	//create copy of all Attributes
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_symbol = obj.getSymbol();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
		std::shared_ptr< Bag<uml::Dependency> >
	 _clientDependency = obj.getClientDependency();
	m_clientDependency.reset(new 	 Bag<uml::Dependency> 
	(*(obj.getClientDependency().get())));// this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

	m_namespace  = obj.getNamespace();

			std::shared_ptr<Union<uml::Element> > _ownedElement = obj.getOwnedElement();
	m_ownedElement.reset(new 		Union<uml::Element> (*(obj.getOwnedElement().get())));// this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());

	m_owner  = obj.getOwner();

	m_owningTemplateParameter  = obj.getOwningTemplateParameter();

	m_templateParameter  = obj.getTemplateParameter();

	m_type  = obj.getType();


	//clone containt lists
	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
	}
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression.reset(dynamic_cast<uml::StringExpression*>(obj.getNameExpression()->copy()));
	}
	std::shared_ptr<Bag<uml::ValueSpecification>> _operandList = obj.getOperand();
	for(std::shared_ptr<uml::ValueSpecification> _operand : *_operandList)
	{
		this->getOperand()->add(std::shared_ptr<uml::ValueSpecification>(dynamic_cast<uml::ValueSpecification*>(_operand->copy())));
	}
	std::shared_ptr<Bag<uml::Comment>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->add(std::shared_ptr<uml::Comment>(dynamic_cast<uml::Comment*>(_ownedComment->copy())));
	}
}

ecore::EObject *  ExpressionImpl::copy() const
{
	return new ExpressionImpl(*this);
}

std::shared_ptr<ecore::EClass> ExpressionImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getExpression();
}

//*********************************
// Attribute Setter Gettter
//*********************************
void ExpressionImpl::setSymbol (std::string _symbol)
{
	m_symbol = _symbol;
} 

std::string ExpressionImpl::getSymbol() const 
{
	return m_symbol;
}

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************
		std::shared_ptr<Subset<uml::ValueSpecification, uml::Element > >
 ExpressionImpl::getOperand() const
{

    return m_operand;
}


//*********************************
// Union Getter
//*********************************
		std::shared_ptr<Union<uml::Element> > ExpressionImpl::getOwnedElement() const
{
	

	return m_ownedElement;
}
std::shared_ptr<uml::Element > ExpressionImpl::getOwner() const
{
	

	return m_owner;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ExpressionImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //884
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //880
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //885
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //886
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //887
		case UmlPackage::EXPRESSION_OPERAND:
			return getOperand(); //8813
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //881
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //882
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //883
		case UmlPackage::PARAMETERABLEELEMENT_OWNINGTEMPLATEPARAMETER:
			return getOwningTemplateParameter(); //884
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //888
		case UmlPackage::EXPRESSION_SYMBOL:
			return getSymbol(); //8814
		case UmlPackage::PARAMETERABLEELEMENT_TEMPLATEPARAMETER:
			return getTemplateParameter(); //885
		case UmlPackage::TYPEDELEMENT_TYPE:
			return getType(); //8810
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //889
	}
	return boost::any();
}
