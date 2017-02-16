#include "StructuredClassifierImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
StructuredClassifierImpl::StructuredClassifierImpl()
{
	//*********************************
	// Reference Members
	//*********************************
	if( m_ownedAttribute == nullptr)
	{
		m_ownedAttribute = new std::vector<uml::Property * >();
	}
	if( m_ownedConnector == nullptr)
	{
		m_ownedConnector = new std::vector<uml::Connector * >();
	}
	if( m_part == nullptr)
	{
		m_part = new std::vector<uml::Property * >();
	}
	if( m_role == nullptr)
	{
		m_role = new std::vector<uml::ConnectableElement * >();
	}
}

StructuredClassifierImpl::~StructuredClassifierImpl()
{
	if(m_ownedAttribute!=nullptr)
	{
		for(auto c :*m_ownedAttribute)
		{
			delete(c);
			c = 0;
		}
	}
	if(m_ownedConnector!=nullptr)
	{
		for(auto c :*m_ownedConnector)
		{
			delete(c);
			c = 0;
		}
	}
	if(m_part!=nullptr)
	{
		delete(m_part);
	 	m_part = nullptr;
	}
	if(m_role!=nullptr)
	{
		delete(m_role);
	 	m_role = nullptr;
	}
	
}

StructuredClassifierImpl::StructuredClassifierImpl(const StructuredClassifierImpl & obj)
{
	//create copy of all Attributes
	m_isAbstract = obj.getIsAbstract();
	m_isFinalSpecialization = obj.getIsFinalSpecialization();
	m_isLeaf = obj.getIsLeaf();
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
	std::vector<uml::Property * > *  _attribute = obj.getAttribute();
	this->getAttribute()->insert(this->getAttribute()->end(), _attribute->begin(), _attribute->end());
	delete(_attribute);

	std::vector<uml::Dependency * > *  _clientDependency = obj.getClientDependency();
	this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

	std::vector<uml::Feature * > *  _feature = obj.getFeature();
	this->getFeature()->insert(this->getFeature()->end(), _feature->begin(), _feature->end());
	delete(_feature);

	std::vector<uml::Classifier * > *  _general = obj.getGeneral();
	this->getGeneral()->insert(this->getGeneral()->end(), _general->begin(), _general->end());

	std::vector<uml::PackageableElement * > *  _importedMember = obj.getImportedMember();
	this->getImportedMember()->insert(this->getImportedMember()->end(), _importedMember->begin(), _importedMember->end());

	std::vector<uml::NamedElement * > *  _inheritedMember = obj.getInheritedMember();
	this->getInheritedMember()->insert(this->getInheritedMember()->end(), _inheritedMember->begin(), _inheritedMember->end());

	std::vector<uml::NamedElement * > *  _member = obj.getMember();
	this->getMember()->insert(this->getMember()->end(), _member->begin(), _member->end());
	delete(_member);

	m_namespace  = obj.getNamespace();

	std::vector<uml::Element * > *  _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());
	delete(_ownedElement);

	std::vector<uml::NamedElement * > *  _ownedMember = obj.getOwnedMember();
	this->getOwnedMember()->insert(this->getOwnedMember()->end(), _ownedMember->begin(), _ownedMember->end());
	delete(_ownedMember);

	m_owner  = obj.getOwner();

	m_owningTemplateParameter  = obj.getOwningTemplateParameter();

	m_package  = obj.getPackage();

	std::vector<uml::Property * > *  _part = obj.getPart();
	this->getPart()->insert(this->getPart()->end(), _part->begin(), _part->end());

	std::vector<uml::GeneralizationSet * > *  _powertypeExtent = obj.getPowertypeExtent();
	this->getPowertypeExtent()->insert(this->getPowertypeExtent()->end(), _powertypeExtent->begin(), _powertypeExtent->end());

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
	for(uml::ElementImport * 	_elementImport : *obj.getElementImport())
	{
		this->getElementImport()->push_back(dynamic_cast<uml::ElementImport * >(_elementImport->copy()));
	}
	for(uml::Generalization * 	_generalization : *obj.getGeneralization())
	{
		this->getGeneralization()->push_back(dynamic_cast<uml::Generalization * >(_generalization->copy()));
	}
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression = dynamic_cast<uml::StringExpression * >(obj.getNameExpression()->copy());
	}
	for(uml::Property * 	_ownedAttribute : *obj.getOwnedAttribute())
	{
		this->getOwnedAttribute()->push_back(dynamic_cast<uml::Property * >(_ownedAttribute->copy()));
	}
	for(uml::Comment * 	_ownedComment : *obj.getOwnedComment())
	{
		this->getOwnedComment()->push_back(dynamic_cast<uml::Comment * >(_ownedComment->copy()));
	}
	for(uml::Connector * 	_ownedConnector : *obj.getOwnedConnector())
	{
		this->getOwnedConnector()->push_back(dynamic_cast<uml::Connector * >(_ownedConnector->copy()));
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
	for(uml::Substitution * 	_substitution : *obj.getSubstitution())
	{
		this->getSubstitution()->push_back(dynamic_cast<uml::Substitution * >(_substitution->copy()));
	}
	for(uml::TemplateBinding * 	_templateBinding : *obj.getTemplateBinding())
	{
		this->getTemplateBinding()->push_back(dynamic_cast<uml::TemplateBinding * >(_templateBinding->copy()));
	}
}

ecore::EObject *  StructuredClassifierImpl::copy() const
{
	return new StructuredClassifierImpl(*this);
}

ecore::EClass* StructuredClassifierImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getStructuredClassifier();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************
std::vector<uml::ConnectableElement * > *  StructuredClassifierImpl::allRoles() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

uml::Property *  StructuredClassifierImpl::createOwnedAttribute(std::string name,uml::Type *  type,int lower,int upper) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::vector<uml::Property * > *  StructuredClassifierImpl::getParts() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::vector<uml::Property * > *  StructuredClassifierImpl::getOwnedAttribute() const
{
	
	return m_ownedAttribute;
}


std::vector<uml::Connector * > *  StructuredClassifierImpl::getOwnedConnector() const
{
	
	return m_ownedConnector;
}


std::vector<uml::Property * > *  StructuredClassifierImpl::getPart() const
{
	
	return m_part;
}





//*********************************
// Union Getter
//*********************************
std::vector<uml::NamedElement * > *  StructuredClassifierImpl::getOwnedMember() const
{
	std::vector<uml::NamedElement * > *  _ownedMember =  new std::vector<uml::NamedElement * >() ;
	
	std::vector<uml::NamedElement * > *  ownedAttribute = (std::vector<uml::NamedElement * > * ) getOwnedAttribute();
	_ownedMember->insert(_ownedMember->end(), ownedAttribute->begin(), ownedAttribute->end());

	std::vector<uml::NamedElement * > *  ownedConnector = (std::vector<uml::NamedElement * > * ) getOwnedConnector();
	_ownedMember->insert(_ownedMember->end(), ownedConnector->begin(), ownedConnector->end());

	std::vector<uml::NamedElement * > *  ownedRule = (std::vector<uml::NamedElement * > * ) getOwnedRule();
	_ownedMember->insert(_ownedMember->end(), ownedRule->begin(), ownedRule->end());

	std::vector<uml::NamedElement * > *  ownedUseCase = (std::vector<uml::NamedElement * > * ) getOwnedUseCase();
	_ownedMember->insert(_ownedMember->end(), ownedUseCase->begin(), ownedUseCase->end());


	return _ownedMember;
}
std::vector<uml::ConnectableElement * > *  StructuredClassifierImpl::getRole() const
{
	std::vector<uml::ConnectableElement * > *  _role =  new std::vector<uml::ConnectableElement * >() ;
	
	std::vector<uml::ConnectableElement * > *  ownedAttribute = (std::vector<uml::ConnectableElement * > * ) getOwnedAttribute();
	_role->insert(_role->end(), ownedAttribute->begin(), ownedAttribute->end());


	return _role;
}
std::vector<uml::Feature * > *  StructuredClassifierImpl::getFeature() const
{
	std::vector<uml::Feature * > *  _feature =  new std::vector<uml::Feature * >() ;
	
	std::vector<uml::Feature * > *  attribute = (std::vector<uml::Feature * > * ) getAttribute();
	_feature->insert(_feature->end(), attribute->begin(), attribute->end());

	delete(attribute);
	std::vector<uml::Feature * > *  ownedConnector = (std::vector<uml::Feature * > * ) getOwnedConnector();
	_feature->insert(_feature->end(), ownedConnector->begin(), ownedConnector->end());


	return _feature;
}
std::vector<uml::Property * > *  StructuredClassifierImpl::getAttribute() const
{
	std::vector<uml::Property * > *  _attribute =  new std::vector<uml::Property * >() ;
	
	std::vector<uml::Property * > *  ownedAttribute = (std::vector<uml::Property * > * ) getOwnedAttribute();
	_attribute->insert(_attribute->end(), ownedAttribute->begin(), ownedAttribute->end());


	return _attribute;
}
uml::Element *  StructuredClassifierImpl::getOwner() const
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
std::vector<uml::RedefinableElement * > *  StructuredClassifierImpl::getRedefinedElement() const
{
	std::vector<uml::RedefinableElement * > *  _redefinedElement =  new std::vector<uml::RedefinableElement * >() ;
	
	std::vector<uml::RedefinableElement * > *  redefinedClassifier = (std::vector<uml::RedefinableElement * > * ) getRedefinedClassifier();
	_redefinedElement->insert(_redefinedElement->end(), redefinedClassifier->begin(), redefinedClassifier->end());


	return _redefinedElement;
}
uml::Namespace *  StructuredClassifierImpl::getNamespace() const
{
	uml::Namespace *  _namespace =   nullptr ;
	
	if(getPackage()!=nullptr)
	{
		_namespace = getPackage();
	}

	return _namespace;
}
std::vector<uml::NamedElement * > *  StructuredClassifierImpl::getMember() const
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
std::vector<uml::Element * > *  StructuredClassifierImpl::getOwnedElement() const
{
	std::vector<uml::Element * > *  _ownedElement =  new std::vector<uml::Element * >() ;
	
	std::vector<uml::Element * > *  collaborationUse = (std::vector<uml::Element * > * ) getCollaborationUse();
	_ownedElement->insert(_ownedElement->end(), collaborationUse->begin(), collaborationUse->end());

	std::vector<uml::Element * > *  elementImport = (std::vector<uml::Element * > * ) getElementImport();
	_ownedElement->insert(_ownedElement->end(), elementImport->begin(), elementImport->end());

	std::vector<uml::Element * > *  generalization = (std::vector<uml::Element * > * ) getGeneralization();
	_ownedElement->insert(_ownedElement->end(), generalization->begin(), generalization->end());

	_ownedElement->push_back(getNameExpression());
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


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any StructuredClassifierImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::CLASSIFIER_ATTRIBUTE:
			return getAttribute(); //9225
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //924
		case UmlPackage::CLASSIFIER_COLLABORATIONUSE:
			return getCollaborationUse(); //9226
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //920
		case UmlPackage::NAMESPACE_ELEMENTIMPORT:
			return getElementImport(); //9211
		case UmlPackage::CLASSIFIER_FEATURE:
			return getFeature(); //9224
		case UmlPackage::CLASSIFIER_GENERAL:
			return getGeneral(); //9227
		case UmlPackage::CLASSIFIER_GENERALIZATION:
			return getGeneralization(); //9228
		case UmlPackage::NAMESPACE_IMPORTEDMEMBER:
			return getImportedMember(); //9214
		case UmlPackage::CLASSIFIER_INHERITEDMEMBER:
			return getInheritedMember(); //9230
		case UmlPackage::CLASSIFIER_ISABSTRACT:
			return getIsAbstract(); //9231
		case UmlPackage::CLASSIFIER_ISFINALSPECIALIZATION:
			return getIsFinalSpecialization(); //9232
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //9210
		case UmlPackage::NAMESPACE_MEMBER:
			return getMember(); //9215
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //925
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //926
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //927
		case UmlPackage::STRUCTUREDCLASSIFIER_OWNEDATTRIBUTE:
			return getOwnedAttribute(); //9238
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //921
		case UmlPackage::STRUCTUREDCLASSIFIER_OWNEDCONNECTOR:
			return getOwnedConnector(); //9239
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //922
		case UmlPackage::NAMESPACE_OWNEDMEMBER:
			return getOwnedMember(); //9213
		case UmlPackage::NAMESPACE_OWNEDRULE:
			return getOwnedRule(); //9210
		case UmlPackage::TEMPLATEABLEELEMENT_OWNEDTEMPLATESIGNATURE:
			return getOwnedTemplateSignature(); //925
		case UmlPackage::CLASSIFIER_OWNEDUSECASE:
			return getOwnedUseCase(); //9233
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //923
		case UmlPackage::PARAMETERABLEELEMENT_OWNINGTEMPLATEPARAMETER:
			return getOwningTemplateParameter(); //924
		case UmlPackage::TYPE_PACKAGE:
			return getPackage(); //9212
		case UmlPackage::NAMESPACE_PACKAGEIMPORT:
			return getPackageImport(); //9212
		case UmlPackage::STRUCTUREDCLASSIFIER_PART:
			return getPart(); //9240
		case UmlPackage::CLASSIFIER_POWERTYPEEXTENT:
			return getPowertypeExtent(); //9229
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //928
		case UmlPackage::CLASSIFIER_REDEFINEDCLASSIFIER:
			return getRedefinedClassifier(); //9235
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //9211
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //9212
		case UmlPackage::CLASSIFIER_REPRESENTATION:
			return getRepresentation(); //9236
		case UmlPackage::STRUCTUREDCLASSIFIER_ROLE:
			return getRole(); //9241
		case UmlPackage::CLASSIFIER_SUBSTITUTION:
			return getSubstitution(); //9237
		case UmlPackage::TEMPLATEABLEELEMENT_TEMPLATEBINDING:
			return getTemplateBinding(); //924
		case UmlPackage::PARAMETERABLEELEMENT_TEMPLATEPARAMETER:
			return getTemplateParameter(); //925
		case UmlPackage::CLASSIFIER_USECASE:
			return getUseCase(); //9234
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //929
	}
	return boost::any();
}
