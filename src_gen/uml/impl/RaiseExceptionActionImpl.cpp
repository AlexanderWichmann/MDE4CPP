#include "RaiseExceptionActionImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
RaiseExceptionActionImpl::RaiseExceptionActionImpl()
{
	//*********************************
	// Reference Members
	//*********************************
	
}

RaiseExceptionActionImpl::~RaiseExceptionActionImpl()
{
	if(m_exception!=nullptr)
	{
		if(m_exception)
		{
			delete(m_exception);
			m_exception = nullptr;
		}
	}
	
}

RaiseExceptionActionImpl::RaiseExceptionActionImpl(const RaiseExceptionActionImpl & obj)
{
	//create copy of all Attributes
	m_isLeaf = obj.getIsLeaf();
	m_isLocallyReentrant = obj.getIsLocallyReentrant();
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
	m_activity  = obj.getActivity();

	std::vector<uml::Dependency * > *  _clientDependency = obj.getClientDependency();
	this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

	m_context  = obj.getContext();

	std::vector<uml::ActivityGroup * > *  _inGroup = obj.getInGroup();
	this->getInGroup()->insert(this->getInGroup()->end(), _inGroup->begin(), _inGroup->end());
	delete(_inGroup);

	std::vector<uml::InterruptibleActivityRegion * > *  _inInterruptibleRegion = obj.getInInterruptibleRegion();
	this->getInInterruptibleRegion()->insert(this->getInInterruptibleRegion()->end(), _inInterruptibleRegion->begin(), _inInterruptibleRegion->end());

	std::vector<uml::ActivityPartition * > *  _inPartition = obj.getInPartition();
	this->getInPartition()->insert(this->getInPartition()->end(), _inPartition->begin(), _inPartition->end());

	m_inStructuredNode  = obj.getInStructuredNode();

	std::vector<uml::ActivityEdge * > *  _incoming = obj.getIncoming();
	this->getIncoming()->insert(this->getIncoming()->end(), _incoming->begin(), _incoming->end());

	std::vector<uml::InputPin * > *  _input = obj.getInput();
	this->getInput()->insert(this->getInput()->end(), _input->begin(), _input->end());
	delete(_input);

	m_namespace  = obj.getNamespace();

	std::vector<uml::ActivityEdge * > *  _outgoing = obj.getOutgoing();
	this->getOutgoing()->insert(this->getOutgoing()->end(), _outgoing->begin(), _outgoing->end());

	std::vector<uml::OutputPin * > *  _output = obj.getOutput();
	this->getOutput()->insert(this->getOutput()->end(), _output->begin(), _output->end());
	delete(_output);

	std::vector<uml::Element * > *  _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());
	delete(_ownedElement);

	m_owner  = obj.getOwner();

	std::vector<uml::RedefinableElement * > *  _redefinedElement = obj.getRedefinedElement();
	this->getRedefinedElement()->insert(this->getRedefinedElement()->end(), _redefinedElement->begin(), _redefinedElement->end());
	delete(_redefinedElement);

	std::vector<uml::ActivityNode * > *  _redefinedNode = obj.getRedefinedNode();
	this->getRedefinedNode()->insert(this->getRedefinedNode()->end(), _redefinedNode->begin(), _redefinedNode->end());

	std::vector<uml::Classifier * > *  _redefinitionContext = obj.getRedefinitionContext();
	this->getRedefinitionContext()->insert(this->getRedefinitionContext()->end(), _redefinitionContext->begin(), _redefinitionContext->end());
	delete(_redefinitionContext);


	//clone containt lists
	for(ecore::EAnnotation * 	_eAnnotations : *obj.getEAnnotations())
	{
		this->getEAnnotations()->push_back(dynamic_cast<ecore::EAnnotation * >(_eAnnotations->copy()));
	}
	if(obj.getException()!=nullptr)
	{
		m_exception = dynamic_cast<uml::InputPin * >(obj.getException()->copy());
	}
	for(uml::ExceptionHandler * 	_handler : *obj.getHandler())
	{
		this->getHandler()->push_back(dynamic_cast<uml::ExceptionHandler * >(_handler->copy()));
	}
	for(uml::Constraint * 	_localPostcondition : *obj.getLocalPostcondition())
	{
		this->getLocalPostcondition()->push_back(dynamic_cast<uml::Constraint * >(_localPostcondition->copy()));
	}
	for(uml::Constraint * 	_localPrecondition : *obj.getLocalPrecondition())
	{
		this->getLocalPrecondition()->push_back(dynamic_cast<uml::Constraint * >(_localPrecondition->copy()));
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

ecore::EObject *  RaiseExceptionActionImpl::copy() const
{
	return new RaiseExceptionActionImpl(*this);
}

ecore::EClass* RaiseExceptionActionImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getRaiseExceptionAction();
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
uml::InputPin *  RaiseExceptionActionImpl::getException() const
{
	//assert(m_exception);
	return m_exception;
}
void RaiseExceptionActionImpl::setException(uml::InputPin *  _exception)
{
	m_exception = _exception;
}

//*********************************
// Union Getter
//*********************************
std::vector<uml::InputPin * > *  RaiseExceptionActionImpl::getInput() const
{
	std::vector<uml::InputPin * > *  _input =  new std::vector<uml::InputPin * >() ;
	
	_input->push_back(getException());

	return _input;
}
std::vector<uml::RedefinableElement * > *  RaiseExceptionActionImpl::getRedefinedElement() const
{
	std::vector<uml::RedefinableElement * > *  _redefinedElement =  new std::vector<uml::RedefinableElement * >() ;
	
	std::vector<uml::RedefinableElement * > *  redefinedNode = (std::vector<uml::RedefinableElement * > * ) getRedefinedNode();
	_redefinedElement->insert(_redefinedElement->end(), redefinedNode->begin(), redefinedNode->end());


	return _redefinedElement;
}
uml::Element *  RaiseExceptionActionImpl::getOwner() const
{
	uml::Element *  _owner =   nullptr ;
	
	if(getActivity()!=nullptr)
	{
		_owner = getActivity();
	}
	if(getInStructuredNode()!=nullptr)
	{
		_owner = getInStructuredNode();
	}
	if(getNamespace()!=nullptr)
	{
		_owner = getNamespace();
	}

	return _owner;
}
std::vector<uml::ActivityGroup * > *  RaiseExceptionActionImpl::getInGroup() const
{
	std::vector<uml::ActivityGroup * > *  _inGroup =  new std::vector<uml::ActivityGroup * >() ;
	
	std::vector<uml::ActivityGroup * > *  inInterruptibleRegion = (std::vector<uml::ActivityGroup * > * ) getInInterruptibleRegion();
	_inGroup->insert(_inGroup->end(), inInterruptibleRegion->begin(), inInterruptibleRegion->end());

	std::vector<uml::ActivityGroup * > *  inPartition = (std::vector<uml::ActivityGroup * > * ) getInPartition();
	_inGroup->insert(_inGroup->end(), inPartition->begin(), inPartition->end());

	_inGroup->push_back(getInStructuredNode());

	return _inGroup;
}
std::vector<uml::Element * > *  RaiseExceptionActionImpl::getOwnedElement() const
{
	std::vector<uml::Element * > *  _ownedElement =  new std::vector<uml::Element * >() ;
	
	std::vector<uml::Element * > *  handler = (std::vector<uml::Element * > * ) getHandler();
	_ownedElement->insert(_ownedElement->end(), handler->begin(), handler->end());

	std::vector<uml::Element * > *  input = (std::vector<uml::Element * > * ) getInput();
	_ownedElement->insert(_ownedElement->end(), input->begin(), input->end());

	delete(input);
	std::vector<uml::Element * > *  localPostcondition = (std::vector<uml::Element * > * ) getLocalPostcondition();
	_ownedElement->insert(_ownedElement->end(), localPostcondition->begin(), localPostcondition->end());

	std::vector<uml::Element * > *  localPrecondition = (std::vector<uml::Element * > * ) getLocalPrecondition();
	_ownedElement->insert(_ownedElement->end(), localPrecondition->begin(), localPrecondition->end());

	_ownedElement->push_back(getNameExpression());
	std::vector<uml::Element * > *  output = (std::vector<uml::Element * > * ) getOutput();
	_ownedElement->insert(_ownedElement->end(), output->begin(), output->end());

	delete(output);
	std::vector<uml::Element * > *  ownedComment = (std::vector<uml::Element * > * ) getOwnedComment();
	_ownedElement->insert(_ownedElement->end(), ownedComment->begin(), ownedComment->end());


	return _ownedElement;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any RaiseExceptionActionImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::ACTIVITYNODE_ACTIVITY:
			return getActivity(); //15813
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //1584
		case UmlPackage::ACTION_CONTEXT:
			return getContext(); //15822
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //1580
		case UmlPackage::RAISEEXCEPTIONACTION_EXCEPTION:
			return getException(); //15828
		case UmlPackage::EXECUTABLENODE_HANDLER:
			return getHandler(); //15821
		case UmlPackage::ACTIVITYNODE_INGROUP:
			return getInGroup(); //15814
		case UmlPackage::ACTIVITYNODE_ININTERRUPTIBLEREGION:
			return getInInterruptibleRegion(); //15815
		case UmlPackage::ACTIVITYNODE_INPARTITION:
			return getInPartition(); //15820
		case UmlPackage::ACTIVITYNODE_INSTRUCTUREDNODE:
			return getInStructuredNode(); //15816
		case UmlPackage::ACTIVITYNODE_INCOMING:
			return getIncoming(); //15817
		case UmlPackage::ACTION_INPUT:
			return getInput(); //15823
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //15810
		case UmlPackage::ACTION_ISLOCALLYREENTRANT:
			return getIsLocallyReentrant(); //15824
		case UmlPackage::ACTION_LOCALPOSTCONDITION:
			return getLocalPostcondition(); //15825
		case UmlPackage::ACTION_LOCALPRECONDITION:
			return getLocalPrecondition(); //15826
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //1585
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //1586
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //1587
		case UmlPackage::ACTIVITYNODE_OUTGOING:
			return getOutgoing(); //15818
		case UmlPackage::ACTION_OUTPUT:
			return getOutput(); //15827
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //1581
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //1582
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //1583
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //1588
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //15811
		case UmlPackage::ACTIVITYNODE_REDEFINEDNODE:
			return getRedefinedNode(); //15819
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //15812
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //1589
	}
	return boost::any();
}
