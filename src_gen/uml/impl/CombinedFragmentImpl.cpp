#include "CombinedFragmentImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
CombinedFragmentImpl::CombinedFragmentImpl()
{
	//*********************************
	// Attribute Members
	//*********************************
	
	//*********************************
	// Reference Members
	//*********************************
		/*Subset*/
		m_cfragmentGate.reset(new Subset<uml::Gate, uml::Element >(m_ownedElement));//(m_ownedElement));
	
	
		/*Subset*/
		m_operand.reset(new Subset<uml::InteractionOperand, uml::Element >(m_ownedElement));//(m_ownedElement));
	
	
}

CombinedFragmentImpl::~CombinedFragmentImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete CombinedFragment "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

CombinedFragmentImpl::CombinedFragmentImpl(const CombinedFragmentImpl & obj)
{
	//create copy of all Attributes
	m_interactionOperator = obj.getInteractionOperator();
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
		std::shared_ptr< Bag<uml::Dependency> >
	 _clientDependency = obj.getClientDependency();
	m_clientDependency.reset(new 	 Bag<uml::Dependency> 
	(*(obj.getClientDependency().get())));// this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

		std::shared_ptr< Bag<uml::Lifeline> >
	 _covered = obj.getCovered();
	m_covered.reset(new 	 Bag<uml::Lifeline> 
	(*(obj.getCovered().get())));// this->getCovered()->insert(this->getCovered()->end(), _covered->begin(), _covered->end());

	m_enclosingInteraction  = obj.getEnclosingInteraction();

	m_enclosingOperand  = obj.getEnclosingOperand();

	m_namespace  = obj.getNamespace();

			std::shared_ptr<Union<uml::Element> > _ownedElement = obj.getOwnedElement();
	m_ownedElement.reset(new 		Union<uml::Element> (*(obj.getOwnedElement().get())));// this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());

	m_owner  = obj.getOwner();


	//clone containt lists
	std::shared_ptr<Bag<uml::Gate>> _cfragmentGateList = obj.getCfragmentGate();
	for(std::shared_ptr<uml::Gate> _cfragmentGate : *_cfragmentGateList)
	{
		this->getCfragmentGate()->add(std::shared_ptr<uml::Gate>(dynamic_cast<uml::Gate*>(_cfragmentGate->copy())));
	}
	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
	}
	std::shared_ptr<Bag<uml::GeneralOrdering>> _generalOrderingList = obj.getGeneralOrdering();
	for(std::shared_ptr<uml::GeneralOrdering> _generalOrdering : *_generalOrderingList)
	{
		this->getGeneralOrdering()->add(std::shared_ptr<uml::GeneralOrdering>(dynamic_cast<uml::GeneralOrdering*>(_generalOrdering->copy())));
	}
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression.reset(dynamic_cast<uml::StringExpression*>(obj.getNameExpression()->copy()));
	}
	std::shared_ptr<Bag<uml::InteractionOperand>> _operandList = obj.getOperand();
	for(std::shared_ptr<uml::InteractionOperand> _operand : *_operandList)
	{
		this->getOperand()->add(std::shared_ptr<uml::InteractionOperand>(dynamic_cast<uml::InteractionOperand*>(_operand->copy())));
	}
	std::shared_ptr<Bag<uml::Comment>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->add(std::shared_ptr<uml::Comment>(dynamic_cast<uml::Comment*>(_ownedComment->copy())));
	}
}

ecore::EObject *  CombinedFragmentImpl::copy() const
{
	return new CombinedFragmentImpl(*this);
}

std::shared_ptr<ecore::EClass> CombinedFragmentImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getCombinedFragment();
}

//*********************************
// Attribute Setter Gettter
//*********************************
void CombinedFragmentImpl::setInteractionOperator (InteractionOperatorKind _interactionOperator)
{
	m_interactionOperator = _interactionOperator;
} 

InteractionOperatorKind CombinedFragmentImpl::getInteractionOperator() const 
{
	return m_interactionOperator;
}

//*********************************
// Operations
//*********************************
bool
 CombinedFragmentImpl::break_(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool
 CombinedFragmentImpl::consider_and_ignore(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool
 CombinedFragmentImpl::opt_loop_break_neg(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
		std::shared_ptr<Subset<uml::Gate, uml::Element > >
 CombinedFragmentImpl::getCfragmentGate() const
{

    return m_cfragmentGate;
}


		std::shared_ptr<Subset<uml::InteractionOperand, uml::Element > >
 CombinedFragmentImpl::getOperand() const
{
//assert(m_operand);
    return m_operand;
}


//*********************************
// Union Getter
//*********************************
std::shared_ptr<uml::Element > CombinedFragmentImpl::getOwner() const
{
	

	return m_owner;
}
		std::shared_ptr<Union<uml::Element> > CombinedFragmentImpl::getOwnedElement() const
{
	

	return m_ownedElement;
}
std::shared_ptr<uml::Namespace > CombinedFragmentImpl::getNamespace() const
{
	

	return m_namespace;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any CombinedFragmentImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::COMBINEDFRAGMENT_CFRAGMENTGATE:
			return getCfragmentGate(); //22814
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //2284
		case UmlPackage::INTERACTIONFRAGMENT_COVERED:
			return getCovered(); //22810
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //2280
		case UmlPackage::INTERACTIONFRAGMENT_ENCLOSINGINTERACTION:
			return getEnclosingInteraction(); //22812
		case UmlPackage::INTERACTIONFRAGMENT_ENCLOSINGOPERAND:
			return getEnclosingOperand(); //22811
		case UmlPackage::INTERACTIONFRAGMENT_GENERALORDERING:
			return getGeneralOrdering(); //22813
		case UmlPackage::COMBINEDFRAGMENT_INTERACTIONOPERATOR:
			return getInteractionOperator(); //22815
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //2285
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //2286
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //2287
		case UmlPackage::COMBINEDFRAGMENT_OPERAND:
			return getOperand(); //22816
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //2281
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //2282
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //2283
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //2288
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //2289
	}
	return boost::any();
}
