#include "InvocationActionImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
InvocationActionImpl::InvocationActionImpl()
{
	//*********************************
	// Reference Members
	//*********************************
	if( m_argument == nullptr)
	{
		m_argument = new std::vector<uml::InputPin * >();
	}
	
}

InvocationActionImpl::~InvocationActionImpl()
{
	if(m_argument!=nullptr)
	{
		for(auto c :*m_argument)
		{
			delete(c);
			c = 0;
		}
	}
	
}

InvocationActionImpl::InvocationActionImpl(const InvocationActionImpl & obj)
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

	m_onPort  = obj.getOnPort();

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
	for(uml::InputPin * 	_argument : *obj.getArgument())
	{
		this->getArgument()->push_back(dynamic_cast<uml::InputPin * >(_argument->copy()));
	}
	for(ecore::EAnnotation * 	_eAnnotations : *obj.getEAnnotations())
	{
		this->getEAnnotations()->push_back(dynamic_cast<ecore::EAnnotation * >(_eAnnotations->copy()));
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

ecore::EObject *  InvocationActionImpl::copy() const
{
	return new InvocationActionImpl(*this);
}

ecore::EClass* InvocationActionImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getInvocationAction();
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
std::vector<uml::InputPin * > *  InvocationActionImpl::getArgument() const
{
	
	return m_argument;
}


uml::Port *  InvocationActionImpl::getOnPort() const
{
	
	return m_onPort;
}
void InvocationActionImpl::setOnPort(uml::Port *  _onPort)
{
	m_onPort = _onPort;
}

//*********************************
// Union Getter
//*********************************
std::vector<uml::RedefinableElement * > *  InvocationActionImpl::getRedefinedElement() const
{
	std::vector<uml::RedefinableElement * > *  _redefinedElement =  new std::vector<uml::RedefinableElement * >() ;
	
	std::vector<uml::RedefinableElement * > *  redefinedNode = (std::vector<uml::RedefinableElement * > * ) getRedefinedNode();
	_redefinedElement->insert(_redefinedElement->end(), redefinedNode->begin(), redefinedNode->end());


	return _redefinedElement;
}
uml::Element *  InvocationActionImpl::getOwner() const
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
std::vector<uml::Element * > *  InvocationActionImpl::getOwnedElement() const
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
std::vector<uml::InputPin * > *  InvocationActionImpl::getInput() const
{
	std::vector<uml::InputPin * > *  _input =  new std::vector<uml::InputPin * >() ;
	
	std::vector<uml::InputPin * > *  argument = (std::vector<uml::InputPin * > * ) getArgument();
	_input->insert(_input->end(), argument->begin(), argument->end());


	return _input;
}
std::vector<uml::ActivityGroup * > *  InvocationActionImpl::getInGroup() const
{
	std::vector<uml::ActivityGroup * > *  _inGroup =  new std::vector<uml::ActivityGroup * >() ;
	
	std::vector<uml::ActivityGroup * > *  inInterruptibleRegion = (std::vector<uml::ActivityGroup * > * ) getInInterruptibleRegion();
	_inGroup->insert(_inGroup->end(), inInterruptibleRegion->begin(), inInterruptibleRegion->end());

	std::vector<uml::ActivityGroup * > *  inPartition = (std::vector<uml::ActivityGroup * > * ) getInPartition();
	_inGroup->insert(_inGroup->end(), inPartition->begin(), inPartition->end());

	_inGroup->push_back(getInStructuredNode());

	return _inGroup;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any InvocationActionImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::ACTIVITYNODE_ACTIVITY:
			return getActivity(); //13813
		case UmlPackage::INVOCATIONACTION_ARGUMENT:
			return getArgument(); //13828
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //1384
		case UmlPackage::ACTION_CONTEXT:
			return getContext(); //13822
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //1380
		case UmlPackage::EXECUTABLENODE_HANDLER:
			return getHandler(); //13821
		case UmlPackage::ACTIVITYNODE_INGROUP:
			return getInGroup(); //13814
		case UmlPackage::ACTIVITYNODE_ININTERRUPTIBLEREGION:
			return getInInterruptibleRegion(); //13815
		case UmlPackage::ACTIVITYNODE_INPARTITION:
			return getInPartition(); //13820
		case UmlPackage::ACTIVITYNODE_INSTRUCTUREDNODE:
			return getInStructuredNode(); //13816
		case UmlPackage::ACTIVITYNODE_INCOMING:
			return getIncoming(); //13817
		case UmlPackage::ACTION_INPUT:
			return getInput(); //13823
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //13810
		case UmlPackage::ACTION_ISLOCALLYREENTRANT:
			return getIsLocallyReentrant(); //13824
		case UmlPackage::ACTION_LOCALPOSTCONDITION:
			return getLocalPostcondition(); //13825
		case UmlPackage::ACTION_LOCALPRECONDITION:
			return getLocalPrecondition(); //13826
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //1385
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //1386
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //1387
		case UmlPackage::INVOCATIONACTION_ONPORT:
			return getOnPort(); //13829
		case UmlPackage::ACTIVITYNODE_OUTGOING:
			return getOutgoing(); //13818
		case UmlPackage::ACTION_OUTPUT:
			return getOutput(); //13827
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //1381
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //1382
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //1383
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //1388
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //13811
		case UmlPackage::ACTIVITYNODE_REDEFINEDNODE:
			return getRedefinedNode(); //13819
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //13812
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //1389
	}
	return boost::any();
}
