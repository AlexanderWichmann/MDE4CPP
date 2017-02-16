#include "ActivityImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
ActivityImpl::ActivityImpl()
{
	//*********************************
	// Reference Members
	//*********************************
	if( m_edge == nullptr)
	{
		m_edge = new std::vector<uml::ActivityEdge * >();
	}
	if( m_group == nullptr)
	{
		m_group = new std::vector<uml::ActivityGroup * >();
	}
	if( m_node == nullptr)
	{
		m_node = new std::vector<uml::ActivityNode * >();
	}
	if( m_ownedGroup == nullptr)
	{
		m_ownedGroup = new std::vector<uml::ActivityGroup * >();
	}
	if( m_ownedNode == nullptr)
	{
		m_ownedNode = new std::vector<uml::ActivityNode * >();
	}
	if( m_partition == nullptr)
	{
		m_partition = new std::vector<uml::ActivityPartition * >();
	}
	if( m_structuredNode == nullptr)
	{
		m_structuredNode = new std::vector<uml::StructuredActivityNode * >();
	}
	if( m_variable == nullptr)
	{
		m_variable = new std::vector<uml::Variable * >();
	}
}

ActivityImpl::~ActivityImpl()
{
	if(m_ownedGroup!=nullptr)
	{
		for(auto c :*m_ownedGroup)
		{
			delete(c);
			c = 0;
		}
	}
	if(m_edge!=nullptr)
	{
		for(auto c :*m_edge)
		{
			delete(c);
			c = 0;
		}
	}
	if(m_node!=nullptr)
	{
		delete(m_node);
	 	m_node = nullptr;
	}
	if(m_variable!=nullptr)
	{
		for(auto c :*m_variable)
		{
			delete(c);
			c = 0;
		}
	}
	if(m_group!=nullptr)
	{
		delete(m_group);
	 	m_group = nullptr;
	}
	if(m_ownedNode!=nullptr)
	{
		for(auto c :*m_ownedNode)
		{
			delete(c);
			c = 0;
		}
	}
	if(m_partition!=nullptr)
	{
		delete(m_partition);
	 	m_partition = nullptr;
	}
	if(m_structuredNode!=nullptr)
	{
		for(auto c :*m_structuredNode)
		{
			delete(c);
			c = 0;
		}
	}
	
}

ActivityImpl::ActivityImpl(const ActivityImpl & obj)
{
	//create copy of all Attributes
	m_isAbstract = obj.getIsAbstract();
	m_isActive = obj.getIsActive();
	m_isFinalSpecialization = obj.getIsFinalSpecialization();
	m_isLeaf = obj.getIsLeaf();
	m_isReadOnly = obj.getIsReadOnly();
	m_isReentrant = obj.getIsReentrant();
	m_isSingleExecution = obj.getIsSingleExecution();
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
	std::vector<uml::Property * > *  _attribute = obj.getAttribute();
	this->getAttribute()->insert(this->getAttribute()->end(), _attribute->begin(), _attribute->end());
	delete(_attribute);

	m_classifierBehavior  = obj.getClassifierBehavior();

	std::vector<uml::Dependency * > *  _clientDependency = obj.getClientDependency();
	this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

	m_context  = obj.getContext();

	std::vector<uml::Extension * > *  _extension = obj.getExtension();
	this->getExtension()->insert(this->getExtension()->end(), _extension->begin(), _extension->end());

	std::vector<uml::Feature * > *  _feature = obj.getFeature();
	this->getFeature()->insert(this->getFeature()->end(), _feature->begin(), _feature->end());
	delete(_feature);

	std::vector<uml::Classifier * > *  _general = obj.getGeneral();
	this->getGeneral()->insert(this->getGeneral()->end(), _general->begin(), _general->end());

	std::vector<uml::ActivityGroup * > *  _group = obj.getGroup();
	this->getGroup()->insert(this->getGroup()->end(), _group->begin(), _group->end());

	std::vector<uml::PackageableElement * > *  _importedMember = obj.getImportedMember();
	this->getImportedMember()->insert(this->getImportedMember()->end(), _importedMember->begin(), _importedMember->end());

	std::vector<uml::NamedElement * > *  _inheritedMember = obj.getInheritedMember();
	this->getInheritedMember()->insert(this->getInheritedMember()->end(), _inheritedMember->begin(), _inheritedMember->end());

	std::vector<uml::NamedElement * > *  _member = obj.getMember();
	this->getMember()->insert(this->getMember()->end(), _member->begin(), _member->end());
	delete(_member);

	m_namespace  = obj.getNamespace();

	std::vector<uml::ActivityNode * > *  _node = obj.getNode();
	this->getNode()->insert(this->getNode()->end(), _node->begin(), _node->end());

	std::vector<uml::Element * > *  _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());
	delete(_ownedElement);

	std::vector<uml::NamedElement * > *  _ownedMember = obj.getOwnedMember();
	this->getOwnedMember()->insert(this->getOwnedMember()->end(), _ownedMember->begin(), _ownedMember->end());
	delete(_ownedMember);

	std::vector<uml::Port * > *  _ownedPort = obj.getOwnedPort();
	this->getOwnedPort()->insert(this->getOwnedPort()->end(), _ownedPort->begin(), _ownedPort->end());

	m_owner  = obj.getOwner();

	m_owningTemplateParameter  = obj.getOwningTemplateParameter();

	m_package  = obj.getPackage();

	std::vector<uml::Property * > *  _part = obj.getPart();
	this->getPart()->insert(this->getPart()->end(), _part->begin(), _part->end());

	std::vector<uml::ActivityPartition * > *  _partition = obj.getPartition();
	this->getPartition()->insert(this->getPartition()->end(), _partition->begin(), _partition->end());

	std::vector<uml::Constraint * > *  _postcondition = obj.getPostcondition();
	this->getPostcondition()->insert(this->getPostcondition()->end(), _postcondition->begin(), _postcondition->end());

	std::vector<uml::GeneralizationSet * > *  _powertypeExtent = obj.getPowertypeExtent();
	this->getPowertypeExtent()->insert(this->getPowertypeExtent()->end(), _powertypeExtent->begin(), _powertypeExtent->end());

	std::vector<uml::Constraint * > *  _precondition = obj.getPrecondition();
	this->getPrecondition()->insert(this->getPrecondition()->end(), _precondition->begin(), _precondition->end());

	std::vector<uml::Behavior * > *  _redefinedBehavior = obj.getRedefinedBehavior();
	this->getRedefinedBehavior()->insert(this->getRedefinedBehavior()->end(), _redefinedBehavior->begin(), _redefinedBehavior->end());

	std::vector<uml::Classifier * > *  _redefinedClassifier = obj.getRedefinedClassifier();
	this->getRedefinedClassifier()->insert(this->getRedefinedClassifier()->end(), _redefinedClassifier->begin(), _redefinedClassifier->end());

	std::vector<uml::RedefinableElement * > *  _redefinedElement = obj.getRedefinedElement();
	this->getRedefinedElement()->insert(this->getRedefinedElement()->end(), _redefinedElement->begin(), _redefinedElement->end());
	delete(_redefinedElement);

	std::vector<uml::Classifier * > *  _redefinitionContext = obj.getRedefinitionContext();
	this->getRedefinitionContext()->insert(this->getRedefinitionContext()->end(), _redefinitionContext->begin(), _redefinitionContext->end());
	delete(_redefinitionContext);

	m_representation  = obj.getRepresentation();

	std::vector<uml::ConnectableElement * > *  _role = obj.getRole();
	this->getRole()->insert(this->getRole()->end(), _role->begin(), _role->end());
	delete(_role);

	m_specification  = obj.getSpecification();

	std::vector<uml::Class * > *  _superClass = obj.getSuperClass();
	this->getSuperClass()->insert(this->getSuperClass()->end(), _superClass->begin(), _superClass->end());

	m_templateParameter  = obj.getTemplateParameter();

	std::vector<uml::UseCase * > *  _useCase = obj.getUseCase();
	this->getUseCase()->insert(this->getUseCase()->end(), _useCase->begin(), _useCase->end());


	//clone containt lists
	for(uml::CollaborationUse * 	_collaborationUse : *obj.getCollaborationUse())
	{
		this->getCollaborationUse()->push_back(dynamic_cast<uml::CollaborationUse * >(_collaborationUse->copy()));
	}
	for(ecore::EAnnotation * 	_eAnnotations : *obj.getEAnnotations())
	{
		this->getEAnnotations()->push_back(dynamic_cast<ecore::EAnnotation * >(_eAnnotations->copy()));
	}
	for(uml::ActivityEdge * 	_edge : *obj.getEdge())
	{
		this->getEdge()->push_back(dynamic_cast<uml::ActivityEdge * >(_edge->copy()));
	}
	for(uml::ElementImport * 	_elementImport : *obj.getElementImport())
	{
		this->getElementImport()->push_back(dynamic_cast<uml::ElementImport * >(_elementImport->copy()));
	}
	for(uml::Generalization * 	_generalization : *obj.getGeneralization())
	{
		this->getGeneralization()->push_back(dynamic_cast<uml::Generalization * >(_generalization->copy()));
	}
	for(uml::InterfaceRealization * 	_interfaceRealization : *obj.getInterfaceRealization())
	{
		this->getInterfaceRealization()->push_back(dynamic_cast<uml::InterfaceRealization * >(_interfaceRealization->copy()));
	}
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression = dynamic_cast<uml::StringExpression * >(obj.getNameExpression()->copy());
	}
	for(uml::Classifier * 	_nestedClassifier : *obj.getNestedClassifier())
	{
		this->getNestedClassifier()->push_back(dynamic_cast<uml::Classifier * >(_nestedClassifier->copy()));
	}
	for(uml::Property * 	_ownedAttribute : *obj.getOwnedAttribute())
	{
		this->getOwnedAttribute()->push_back(dynamic_cast<uml::Property * >(_ownedAttribute->copy()));
	}
	for(uml::Behavior * 	_ownedBehavior : *obj.getOwnedBehavior())
	{
		this->getOwnedBehavior()->push_back(dynamic_cast<uml::Behavior * >(_ownedBehavior->copy()));
	}
	for(uml::Comment * 	_ownedComment : *obj.getOwnedComment())
	{
		this->getOwnedComment()->push_back(dynamic_cast<uml::Comment * >(_ownedComment->copy()));
	}
	for(uml::Connector * 	_ownedConnector : *obj.getOwnedConnector())
	{
		this->getOwnedConnector()->push_back(dynamic_cast<uml::Connector * >(_ownedConnector->copy()));
	}
	for(uml::ActivityGroup * 	_ownedGroup : *obj.getOwnedGroup())
	{
		this->getOwnedGroup()->push_back(dynamic_cast<uml::ActivityGroup * >(_ownedGroup->copy()));
	}
	for(uml::ActivityNode * 	_ownedNode : *obj.getOwnedNode())
	{
		this->getOwnedNode()->push_back(dynamic_cast<uml::ActivityNode * >(_ownedNode->copy()));
	}
	for(uml::Operation * 	_ownedOperation : *obj.getOwnedOperation())
	{
		this->getOwnedOperation()->push_back(dynamic_cast<uml::Operation * >(_ownedOperation->copy()));
	}
	for(uml::Parameter * 	_ownedParameter : *obj.getOwnedParameter())
	{
		this->getOwnedParameter()->push_back(dynamic_cast<uml::Parameter * >(_ownedParameter->copy()));
	}
	for(uml::ParameterSet * 	_ownedParameterSet : *obj.getOwnedParameterSet())
	{
		this->getOwnedParameterSet()->push_back(dynamic_cast<uml::ParameterSet * >(_ownedParameterSet->copy()));
	}
	for(uml::Reception * 	_ownedReception : *obj.getOwnedReception())
	{
		this->getOwnedReception()->push_back(dynamic_cast<uml::Reception * >(_ownedReception->copy()));
	}
	for(uml::Constraint * 	_ownedRule : *obj.getOwnedRule())
	{
		this->getOwnedRule()->push_back(dynamic_cast<uml::Constraint * >(_ownedRule->copy()));
	}
	if(obj.getOwnedTemplateSignature()!=nullptr)
	{
		m_ownedTemplateSignature = dynamic_cast<uml::TemplateSignature * >(obj.getOwnedTemplateSignature()->copy());
	}
	for(uml::UseCase * 	_ownedUseCase : *obj.getOwnedUseCase())
	{
		this->getOwnedUseCase()->push_back(dynamic_cast<uml::UseCase * >(_ownedUseCase->copy()));
	}
	for(uml::PackageImport * 	_packageImport : *obj.getPackageImport())
	{
		this->getPackageImport()->push_back(dynamic_cast<uml::PackageImport * >(_packageImport->copy()));
	}
	for(uml::StructuredActivityNode * 	_structuredNode : *obj.getStructuredNode())
	{
		this->getStructuredNode()->push_back(dynamic_cast<uml::StructuredActivityNode * >(_structuredNode->copy()));
	}
	for(uml::Substitution * 	_substitution : *obj.getSubstitution())
	{
		this->getSubstitution()->push_back(dynamic_cast<uml::Substitution * >(_substitution->copy()));
	}
	for(uml::TemplateBinding * 	_templateBinding : *obj.getTemplateBinding())
	{
		this->getTemplateBinding()->push_back(dynamic_cast<uml::TemplateBinding * >(_templateBinding->copy()));
	}
	for(uml::Variable * 	_variable : *obj.getVariable())
	{
		this->getVariable()->push_back(dynamic_cast<uml::Variable * >(_variable->copy()));
	}
}

ecore::EObject *  ActivityImpl::copy() const
{
	return new ActivityImpl(*this);
}

ecore::EClass* ActivityImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getActivity();
}

//*********************************
// Attribute Setter Gettter
//*********************************
void ActivityImpl::setIsReadOnly (bool _isReadOnly)
{
	m_isReadOnly = _isReadOnly;
} 

bool ActivityImpl::getIsReadOnly() const 
{
	return m_isReadOnly;
}

void ActivityImpl::setIsSingleExecution (bool _isSingleExecution)
{
	m_isSingleExecution = _isSingleExecution;
} 

bool ActivityImpl::getIsSingleExecution() const 
{
	return m_isSingleExecution;
}

//*********************************
// Operations
//*********************************
bool ActivityImpl::maximum_one_parameter_node(boost::any diagnostics,std::map <   boost::any, boost::any > * context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool ActivityImpl::maximum_two_parameter_nodes(boost::any diagnostics,std::map <   boost::any, boost::any > * context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::vector<uml::ActivityEdge * > *  ActivityImpl::getEdge() const
{
	
	return m_edge;
}


std::vector<uml::ActivityGroup * > *  ActivityImpl::getGroup() const
{
	
	return m_group;
}


std::vector<uml::ActivityNode * > *  ActivityImpl::getNode() const
{
	
	return m_node;
}


std::vector<uml::ActivityGroup * > *  ActivityImpl::getOwnedGroup() const
{
	
	return m_ownedGroup;
}


std::vector<uml::ActivityNode * > *  ActivityImpl::getOwnedNode() const
{
	
	return m_ownedNode;
}


std::vector<uml::ActivityPartition * > *  ActivityImpl::getPartition() const
{
	
	return m_partition;
}


std::vector<uml::StructuredActivityNode * > *  ActivityImpl::getStructuredNode() const
{
	
	return m_structuredNode;
}


std::vector<uml::Variable * > *  ActivityImpl::getVariable() const
{
	
	return m_variable;
}


//*********************************
// Union Getter
//*********************************
std::vector<uml::Feature * > *  ActivityImpl::getFeature() const
{
	std::vector<uml::Feature * > *  _feature =  new std::vector<uml::Feature * >() ;
	
	std::vector<uml::Feature * > *  attribute = (std::vector<uml::Feature * > * ) getAttribute();
	_feature->insert(_feature->end(), attribute->begin(), attribute->end());

	delete(attribute);
	std::vector<uml::Feature * > *  ownedConnector = (std::vector<uml::Feature * > * ) getOwnedConnector();
	_feature->insert(_feature->end(), ownedConnector->begin(), ownedConnector->end());

	std::vector<uml::Feature * > *  ownedOperation = (std::vector<uml::Feature * > * ) getOwnedOperation();
	_feature->insert(_feature->end(), ownedOperation->begin(), ownedOperation->end());

	std::vector<uml::Feature * > *  ownedReception = (std::vector<uml::Feature * > * ) getOwnedReception();
	_feature->insert(_feature->end(), ownedReception->begin(), ownedReception->end());


	return _feature;
}
std::vector<uml::NamedElement * > *  ActivityImpl::getMember() const
{
	std::vector<uml::NamedElement * > *  _member =  new std::vector<uml::NamedElement * >() ;
	
	std::vector<uml::NamedElement * > *  feature = (std::vector<uml::NamedElement * > * ) getFeature();
	_member->insert(_member->end(), feature->begin(), feature->end());

	delete(feature);
	std::vector<uml::NamedElement * > *  importedMember = (std::vector<uml::NamedElement * > * ) getImportedMember();
	_member->insert(_member->end(), importedMember->begin(), importedMember->end());

	std::vector<uml::NamedElement * > *  inheritedMember = (std::vector<uml::NamedElement * > * ) getInheritedMember();
	_member->insert(_member->end(), inheritedMember->begin(), inheritedMember->end());

	std::vector<uml::NamedElement * > *  ownedMember = (std::vector<uml::NamedElement * > * ) getOwnedMember();
	_member->insert(_member->end(), ownedMember->begin(), ownedMember->end());

	delete(ownedMember);
	std::vector<uml::NamedElement * > *  role = (std::vector<uml::NamedElement * > * ) getRole();
	_member->insert(_member->end(), role->begin(), role->end());

	delete(role);

	return _member;
}
std::vector<uml::RedefinableElement * > *  ActivityImpl::getRedefinedElement() const
{
	std::vector<uml::RedefinableElement * > *  _redefinedElement =  new std::vector<uml::RedefinableElement * >() ;
	
	std::vector<uml::RedefinableElement * > *  redefinedClassifier = (std::vector<uml::RedefinableElement * > * ) getRedefinedClassifier();
	_redefinedElement->insert(_redefinedElement->end(), redefinedClassifier->begin(), redefinedClassifier->end());


	return _redefinedElement;
}
std::vector<uml::NamedElement * > *  ActivityImpl::getOwnedMember() const
{
	std::vector<uml::NamedElement * > *  _ownedMember =  new std::vector<uml::NamedElement * >() ;
	
	std::vector<uml::NamedElement * > *  nestedClassifier = (std::vector<uml::NamedElement * > * ) getNestedClassifier();
	_ownedMember->insert(_ownedMember->end(), nestedClassifier->begin(), nestedClassifier->end());

	std::vector<uml::NamedElement * > *  ownedAttribute = (std::vector<uml::NamedElement * > * ) getOwnedAttribute();
	_ownedMember->insert(_ownedMember->end(), ownedAttribute->begin(), ownedAttribute->end());

	std::vector<uml::NamedElement * > *  ownedBehavior = (std::vector<uml::NamedElement * > * ) getOwnedBehavior();
	_ownedMember->insert(_ownedMember->end(), ownedBehavior->begin(), ownedBehavior->end());

	std::vector<uml::NamedElement * > *  ownedConnector = (std::vector<uml::NamedElement * > * ) getOwnedConnector();
	_ownedMember->insert(_ownedMember->end(), ownedConnector->begin(), ownedConnector->end());

	std::vector<uml::NamedElement * > *  ownedOperation = (std::vector<uml::NamedElement * > * ) getOwnedOperation();
	_ownedMember->insert(_ownedMember->end(), ownedOperation->begin(), ownedOperation->end());

	std::vector<uml::NamedElement * > *  ownedParameter = (std::vector<uml::NamedElement * > * ) getOwnedParameter();
	_ownedMember->insert(_ownedMember->end(), ownedParameter->begin(), ownedParameter->end());

	std::vector<uml::NamedElement * > *  ownedParameterSet = (std::vector<uml::NamedElement * > * ) getOwnedParameterSet();
	_ownedMember->insert(_ownedMember->end(), ownedParameterSet->begin(), ownedParameterSet->end());

	std::vector<uml::NamedElement * > *  ownedReception = (std::vector<uml::NamedElement * > * ) getOwnedReception();
	_ownedMember->insert(_ownedMember->end(), ownedReception->begin(), ownedReception->end());

	std::vector<uml::NamedElement * > *  ownedRule = (std::vector<uml::NamedElement * > * ) getOwnedRule();
	_ownedMember->insert(_ownedMember->end(), ownedRule->begin(), ownedRule->end());

	std::vector<uml::NamedElement * > *  ownedUseCase = (std::vector<uml::NamedElement * > * ) getOwnedUseCase();
	_ownedMember->insert(_ownedMember->end(), ownedUseCase->begin(), ownedUseCase->end());

	std::vector<uml::NamedElement * > *  variable = (std::vector<uml::NamedElement * > * ) getVariable();
	_ownedMember->insert(_ownedMember->end(), variable->begin(), variable->end());


	return _ownedMember;
}
std::vector<uml::Element * > *  ActivityImpl::getOwnedElement() const
{
	std::vector<uml::Element * > *  _ownedElement =  new std::vector<uml::Element * >() ;
	
	std::vector<uml::Element * > *  collaborationUse = (std::vector<uml::Element * > * ) getCollaborationUse();
	_ownedElement->insert(_ownedElement->end(), collaborationUse->begin(), collaborationUse->end());

	std::vector<uml::Element * > *  edge = (std::vector<uml::Element * > * ) getEdge();
	_ownedElement->insert(_ownedElement->end(), edge->begin(), edge->end());

	std::vector<uml::Element * > *  elementImport = (std::vector<uml::Element * > * ) getElementImport();
	_ownedElement->insert(_ownedElement->end(), elementImport->begin(), elementImport->end());

	std::vector<uml::Element * > *  generalization = (std::vector<uml::Element * > * ) getGeneralization();
	_ownedElement->insert(_ownedElement->end(), generalization->begin(), generalization->end());

	std::vector<uml::Element * > *  group = (std::vector<uml::Element * > * ) getGroup();
	_ownedElement->insert(_ownedElement->end(), group->begin(), group->end());

	std::vector<uml::Element * > *  interfaceRealization = (std::vector<uml::Element * > * ) getInterfaceRealization();
	_ownedElement->insert(_ownedElement->end(), interfaceRealization->begin(), interfaceRealization->end());

	_ownedElement->push_back(getNameExpression());
	std::vector<uml::Element * > *  node = (std::vector<uml::Element * > * ) getNode();
	_ownedElement->insert(_ownedElement->end(), node->begin(), node->end());

	std::vector<uml::Element * > *  ownedComment = (std::vector<uml::Element * > * ) getOwnedComment();
	_ownedElement->insert(_ownedElement->end(), ownedComment->begin(), ownedComment->end());

	std::vector<uml::Element * > *  ownedMember = (std::vector<uml::Element * > * ) getOwnedMember();
	_ownedElement->insert(_ownedElement->end(), ownedMember->begin(), ownedMember->end());

	delete(ownedMember);
	_ownedElement->push_back(getOwnedTemplateSignature());
	std::vector<uml::Element * > *  packageImport = (std::vector<uml::Element * > * ) getPackageImport();
	_ownedElement->insert(_ownedElement->end(), packageImport->begin(), packageImport->end());

	std::vector<uml::Element * > *  substitution = (std::vector<uml::Element * > * ) getSubstitution();
	_ownedElement->insert(_ownedElement->end(), substitution->begin(), substitution->end());

	std::vector<uml::Element * > *  templateBinding = (std::vector<uml::Element * > * ) getTemplateBinding();
	_ownedElement->insert(_ownedElement->end(), templateBinding->begin(), templateBinding->end());


	return _ownedElement;
}
uml::Element *  ActivityImpl::getOwner() const
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
uml::Namespace *  ActivityImpl::getNamespace() const
{
	uml::Namespace *  _namespace =   nullptr ;
	
	if(getPackage()!=nullptr)
	{
		_namespace = getPackage();
	}

	return _namespace;
}
std::vector<uml::Classifier * > *  ActivityImpl::getRedefinitionContext() const
{
	std::vector<uml::Classifier * > *  _redefinitionContext =  new std::vector<uml::Classifier * >() ;
	
	_redefinitionContext->push_back(getContext());

	return _redefinitionContext;
}
std::vector<uml::Property * > *  ActivityImpl::getAttribute() const
{
	std::vector<uml::Property * > *  _attribute =  new std::vector<uml::Property * >() ;
	
	std::vector<uml::Property * > *  ownedAttribute = (std::vector<uml::Property * > * ) getOwnedAttribute();
	_attribute->insert(_attribute->end(), ownedAttribute->begin(), ownedAttribute->end());


	return _attribute;
}
std::vector<uml::ConnectableElement * > *  ActivityImpl::getRole() const
{
	std::vector<uml::ConnectableElement * > *  _role =  new std::vector<uml::ConnectableElement * >() ;
	
	std::vector<uml::ConnectableElement * > *  ownedAttribute = (std::vector<uml::ConnectableElement * > * ) getOwnedAttribute();
	_role->insert(_role->end(), ownedAttribute->begin(), ownedAttribute->end());


	return _role;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ActivityImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::CLASSIFIER_ATTRIBUTE:
			return getAttribute(); //125
		case UmlPackage::BEHAVIOREDCLASSIFIER_CLASSIFIERBEHAVIOR:
			return getClassifierBehavior(); //138
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //14
		case UmlPackage::CLASSIFIER_COLLABORATIONUSE:
			return getCollaborationUse(); //126
		case UmlPackage::BEHAVIOR_CONTEXT:
			return getContext(); //153
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //10
		case UmlPackage::ACTIVITY_EDGE:
			return getEdge(); //161
		case UmlPackage::NAMESPACE_ELEMENTIMPORT:
			return getElementImport(); //111
		case UmlPackage::CLASS_EXTENSION:
			return getExtension(); //147
		case UmlPackage::CLASSIFIER_FEATURE:
			return getFeature(); //124
		case UmlPackage::CLASSIFIER_GENERAL:
			return getGeneral(); //127
		case UmlPackage::CLASSIFIER_GENERALIZATION:
			return getGeneralization(); //128
		case UmlPackage::ACTIVITY_GROUP:
			return getGroup(); //164
		case UmlPackage::NAMESPACE_IMPORTEDMEMBER:
			return getImportedMember(); //114
		case UmlPackage::CLASSIFIER_INHERITEDMEMBER:
			return getInheritedMember(); //130
		case UmlPackage::BEHAVIOREDCLASSIFIER_INTERFACEREALIZATION:
			return getInterfaceRealization(); //139
		case UmlPackage::CLASSIFIER_ISABSTRACT:
			return getIsAbstract(); //131
		case UmlPackage::CLASS_ISACTIVE:
			return getIsActive(); //148
		case UmlPackage::CLASSIFIER_ISFINALSPECIALIZATION:
			return getIsFinalSpecialization(); //132
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //110
		case UmlPackage::ACTIVITY_ISREADONLY:
			return getIsReadOnly(); //166
		case UmlPackage::BEHAVIOR_ISREENTRANT:
			return getIsReentrant(); //154
		case UmlPackage::ACTIVITY_ISSINGLEEXECUTION:
			return getIsSingleExecution(); //167
		case UmlPackage::NAMESPACE_MEMBER:
			return getMember(); //115
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //15
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //16
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //17
		case UmlPackage::CLASS_NESTEDCLASSIFIER:
			return getNestedClassifier(); //149
		case UmlPackage::ACTIVITY_NODE:
			return getNode(); //162
		case UmlPackage::STRUCTUREDCLASSIFIER_OWNEDATTRIBUTE:
			return getOwnedAttribute(); //138
		case UmlPackage::BEHAVIOREDCLASSIFIER_OWNEDBEHAVIOR:
			return getOwnedBehavior(); //140
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //11
		case UmlPackage::STRUCTUREDCLASSIFIER_OWNEDCONNECTOR:
			return getOwnedConnector(); //139
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //12
		case UmlPackage::ACTIVITY_OWNEDGROUP:
			return getOwnedGroup(); //160
		case UmlPackage::NAMESPACE_OWNEDMEMBER:
			return getOwnedMember(); //113
		case UmlPackage::ACTIVITY_OWNEDNODE:
			return getOwnedNode(); //165
		case UmlPackage::CLASS_OWNEDOPERATION:
			return getOwnedOperation(); //146
		case UmlPackage::BEHAVIOR_OWNEDPARAMETER:
			return getOwnedParameter(); //155
		case UmlPackage::BEHAVIOR_OWNEDPARAMETERSET:
			return getOwnedParameterSet(); //156
		case UmlPackage::ENCAPSULATEDCLASSIFIER_OWNEDPORT:
			return getOwnedPort(); //142
		case UmlPackage::CLASS_OWNEDRECEPTION:
			return getOwnedReception(); //150
		case UmlPackage::NAMESPACE_OWNEDRULE:
			return getOwnedRule(); //110
		case UmlPackage::TEMPLATEABLEELEMENT_OWNEDTEMPLATESIGNATURE:
			return getOwnedTemplateSignature(); //15
		case UmlPackage::CLASSIFIER_OWNEDUSECASE:
			return getOwnedUseCase(); //133
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //13
		case UmlPackage::PARAMETERABLEELEMENT_OWNINGTEMPLATEPARAMETER:
			return getOwningTemplateParameter(); //14
		case UmlPackage::TYPE_PACKAGE:
			return getPackage(); //112
		case UmlPackage::NAMESPACE_PACKAGEIMPORT:
			return getPackageImport(); //112
		case UmlPackage::STRUCTUREDCLASSIFIER_PART:
			return getPart(); //140
		case UmlPackage::ACTIVITY_PARTITION:
			return getPartition(); //168
		case UmlPackage::BEHAVIOR_POSTCONDITION:
			return getPostcondition(); //157
		case UmlPackage::CLASSIFIER_POWERTYPEEXTENT:
			return getPowertypeExtent(); //129
		case UmlPackage::BEHAVIOR_PRECONDITION:
			return getPrecondition(); //158
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //18
		case UmlPackage::BEHAVIOR_REDEFINEDBEHAVIOR:
			return getRedefinedBehavior(); //159
		case UmlPackage::CLASSIFIER_REDEFINEDCLASSIFIER:
			return getRedefinedClassifier(); //135
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //111
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //112
		case UmlPackage::CLASSIFIER_REPRESENTATION:
			return getRepresentation(); //136
		case UmlPackage::STRUCTUREDCLASSIFIER_ROLE:
			return getRole(); //141
		case UmlPackage::BEHAVIOR_SPECIFICATION:
			return getSpecification(); //152
		case UmlPackage::ACTIVITY_STRUCTUREDNODE:
			return getStructuredNode(); //169
		case UmlPackage::CLASSIFIER_SUBSTITUTION:
			return getSubstitution(); //137
		case UmlPackage::CLASS_SUPERCLASS:
			return getSuperClass(); //151
		case UmlPackage::TEMPLATEABLEELEMENT_TEMPLATEBINDING:
			return getTemplateBinding(); //14
		case UmlPackage::PARAMETERABLEELEMENT_TEMPLATEPARAMETER:
			return getTemplateParameter(); //15
		case UmlPackage::CLASSIFIER_USECASE:
			return getUseCase(); //134
		case UmlPackage::ACTIVITY_VARIABLE:
			return getVariable(); //163
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //19
	}
	return boost::any();
}
