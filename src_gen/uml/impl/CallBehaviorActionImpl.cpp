#include "CallBehaviorActionImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
CallBehaviorActionImpl::CallBehaviorActionImpl()
{
	//*********************************
	// Reference Members
	//*********************************
	
}

CallBehaviorActionImpl::~CallBehaviorActionImpl()
{
	
}

CallBehaviorActionImpl::CallBehaviorActionImpl(const CallBehaviorActionImpl & obj)
{
	//create copy of all Attributes
	m_isLeaf = obj.getIsLeaf();
	m_isLocallyReentrant = obj.getIsLocallyReentrant();
	m_isSynchronous = obj.getIsSynchronous();
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
	m_activity  = obj.getActivity();

	m_behavior  = obj.getBehavior();

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
	for(uml::OutputPin * 	_result : *obj.getResult())
	{
		this->getResult()->push_back(dynamic_cast<uml::OutputPin * >(_result->copy()));
	}
}

ecore::EObject *  CallBehaviorActionImpl::copy() const
{
	return new CallBehaviorActionImpl(*this);
}

ecore::EClass* CallBehaviorActionImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getCallBehaviorAction();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************
bool CallBehaviorActionImpl::no_onport(boost::any diagnostics,std::map <   boost::any, boost::any > * context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
uml::Behavior *  CallBehaviorActionImpl::getBehavior() const
{
	//assert(m_behavior);
	return m_behavior;
}
void CallBehaviorActionImpl::setBehavior(uml::Behavior *  _behavior)
{
	m_behavior = _behavior;
}

//*********************************
// Union Getter
//*********************************
std::vector<uml::OutputPin * > *  CallBehaviorActionImpl::getOutput() const
{
	std::vector<uml::OutputPin * > *  _output =  new std::vector<uml::OutputPin * >() ;
	
	std::vector<uml::OutputPin * > *  result = (std::vector<uml::OutputPin * > * ) getResult();
	_output->insert(_output->end(), result->begin(), result->end());


	return _output;
}
std::vector<uml::Element * > *  CallBehaviorActionImpl::getOwnedElement() const
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
uml::Element *  CallBehaviorActionImpl::getOwner() const
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
std::vector<uml::InputPin * > *  CallBehaviorActionImpl::getInput() const
{
	std::vector<uml::InputPin * > *  _input =  new std::vector<uml::InputPin * >() ;
	
	std::vector<uml::InputPin * > *  argument = (std::vector<uml::InputPin * > * ) getArgument();
	_input->insert(_input->end(), argument->begin(), argument->end());


	return _input;
}
std::vector<uml::ActivityGroup * > *  CallBehaviorActionImpl::getInGroup() const
{
	std::vector<uml::ActivityGroup * > *  _inGroup =  new std::vector<uml::ActivityGroup * >() ;
	
	std::vector<uml::ActivityGroup * > *  inInterruptibleRegion = (std::vector<uml::ActivityGroup * > * ) getInInterruptibleRegion();
	_inGroup->insert(_inGroup->end(), inInterruptibleRegion->begin(), inInterruptibleRegion->end());

	std::vector<uml::ActivityGroup * > *  inPartition = (std::vector<uml::ActivityGroup * > * ) getInPartition();
	_inGroup->insert(_inGroup->end(), inPartition->begin(), inPartition->end());

	_inGroup->push_back(getInStructuredNode());

	return _inGroup;
}
std::vector<uml::RedefinableElement * > *  CallBehaviorActionImpl::getRedefinedElement() const
{
	std::vector<uml::RedefinableElement * > *  _redefinedElement =  new std::vector<uml::RedefinableElement * >() ;
	
	std::vector<uml::RedefinableElement * > *  redefinedNode = (std::vector<uml::RedefinableElement * > * ) getRedefinedNode();
	_redefinedElement->insert(_redefinedElement->end(), redefinedNode->begin(), redefinedNode->end());


	return _redefinedElement;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any CallBehaviorActionImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::ACTIVITYNODE_ACTIVITY:
			return getActivity(); //14013
		case UmlPackage::INVOCATIONACTION_ARGUMENT:
			return getArgument(); //14028
		case UmlPackage::CALLBEHAVIORACTION_BEHAVIOR:
			return getBehavior(); //14032
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //1404
		case UmlPackage::ACTION_CONTEXT:
			return getContext(); //14022
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //1400
		case UmlPackage::EXECUTABLENODE_HANDLER:
			return getHandler(); //14021
		case UmlPackage::ACTIVITYNODE_INGROUP:
			return getInGroup(); //14014
		case UmlPackage::ACTIVITYNODE_ININTERRUPTIBLEREGION:
			return getInInterruptibleRegion(); //14015
		case UmlPackage::ACTIVITYNODE_INPARTITION:
			return getInPartition(); //14020
		case UmlPackage::ACTIVITYNODE_INSTRUCTUREDNODE:
			return getInStructuredNode(); //14016
		case UmlPackage::ACTIVITYNODE_INCOMING:
			return getIncoming(); //14017
		case UmlPackage::ACTION_INPUT:
			return getInput(); //14023
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //14010
		case UmlPackage::ACTION_ISLOCALLYREENTRANT:
			return getIsLocallyReentrant(); //14024
		case UmlPackage::CALLACTION_ISSYNCHRONOUS:
			return getIsSynchronous(); //14030
		case UmlPackage::ACTION_LOCALPOSTCONDITION:
			return getLocalPostcondition(); //14025
		case UmlPackage::ACTION_LOCALPRECONDITION:
			return getLocalPrecondition(); //14026
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //1405
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //1406
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //1407
		case UmlPackage::INVOCATIONACTION_ONPORT:
			return getOnPort(); //14029
		case UmlPackage::ACTIVITYNODE_OUTGOING:
			return getOutgoing(); //14018
		case UmlPackage::ACTION_OUTPUT:
			return getOutput(); //14027
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //1401
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //1402
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //1403
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //1408
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //14011
		case UmlPackage::ACTIVITYNODE_REDEFINEDNODE:
			return getRedefinedNode(); //14019
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //14012
		case UmlPackage::CALLACTION_RESULT:
			return getResult(); //14031
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //1409
	}
	return boost::any();
}
