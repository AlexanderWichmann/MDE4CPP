#include "ActorImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
ActorImpl::ActorImpl()
{
	//*********************************
	// Reference Members
	//*********************************

}

ActorImpl::~ActorImpl()
{
	
}

ActorImpl::ActorImpl(const ActorImpl & obj)
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

	m_classifierBehavior  = obj.getClassifierBehavior();

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
	for(uml::InterfaceRealization * 	_interfaceRealization : *obj.getInterfaceRealization())
	{
		this->getInterfaceRealization()->push_back(dynamic_cast<uml::InterfaceRealization * >(_interfaceRealization->copy()));
	}
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression = dynamic_cast<uml::StringExpression * >(obj.getNameExpression()->copy());
	}
	for(uml::Behavior * 	_ownedBehavior : *obj.getOwnedBehavior())
	{
		this->getOwnedBehavior()->push_back(dynamic_cast<uml::Behavior * >(_ownedBehavior->copy()));
	}
	for(uml::Comment * 	_ownedComment : *obj.getOwnedComment())
	{
		this->getOwnedComment()->push_back(dynamic_cast<uml::Comment * >(_ownedComment->copy()));
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

ecore::EObject *  ActorImpl::copy() const
{
	return new ActorImpl(*this);
}

ecore::EClass* ActorImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getActor();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************
bool ActorImpl::associations(boost::any diagnostics,std::map <   boost::any, boost::any > * context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool ActorImpl::must_have_name(boost::any diagnostics,std::map <   boost::any, boost::any > * context) 
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
std::vector<uml::NamedElement * > *  ActorImpl::getOwnedMember() const
{
	std::vector<uml::NamedElement * > *  _ownedMember =  new std::vector<uml::NamedElement * >() ;
	
	std::vector<uml::NamedElement * > *  ownedBehavior = (std::vector<uml::NamedElement * > * ) getOwnedBehavior();
	_ownedMember->insert(_ownedMember->end(), ownedBehavior->begin(), ownedBehavior->end());

	std::vector<uml::NamedElement * > *  ownedRule = (std::vector<uml::NamedElement * > * ) getOwnedRule();
	_ownedMember->insert(_ownedMember->end(), ownedRule->begin(), ownedRule->end());

	std::vector<uml::NamedElement * > *  ownedUseCase = (std::vector<uml::NamedElement * > * ) getOwnedUseCase();
	_ownedMember->insert(_ownedMember->end(), ownedUseCase->begin(), ownedUseCase->end());


	return _ownedMember;
}
uml::Namespace *  ActorImpl::getNamespace() const
{
	uml::Namespace *  _namespace =   nullptr ;
	
	if(getPackage()!=nullptr)
	{
		_namespace = getPackage();
	}

	return _namespace;
}
uml::Element *  ActorImpl::getOwner() const
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
std::vector<uml::NamedElement * > *  ActorImpl::getMember() const
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

	return _member;
}
std::vector<uml::Element * > *  ActorImpl::getOwnedElement() const
{
	std::vector<uml::Element * > *  _ownedElement =  new std::vector<uml::Element * >() ;
	
	std::vector<uml::Element * > *  collaborationUse = (std::vector<uml::Element * > * ) getCollaborationUse();
	_ownedElement->insert(_ownedElement->end(), collaborationUse->begin(), collaborationUse->end());

	std::vector<uml::Element * > *  elementImport = (std::vector<uml::Element * > * ) getElementImport();
	_ownedElement->insert(_ownedElement->end(), elementImport->begin(), elementImport->end());

	std::vector<uml::Element * > *  generalization = (std::vector<uml::Element * > * ) getGeneralization();
	_ownedElement->insert(_ownedElement->end(), generalization->begin(), generalization->end());

	std::vector<uml::Element * > *  interfaceRealization = (std::vector<uml::Element * > * ) getInterfaceRealization();
	_ownedElement->insert(_ownedElement->end(), interfaceRealization->begin(), interfaceRealization->end());

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
std::vector<uml::Feature * > *  ActorImpl::getFeature() const
{
	std::vector<uml::Feature * > *  _feature =  new std::vector<uml::Feature * >() ;
	
	std::vector<uml::Feature * > *  attribute = (std::vector<uml::Feature * > * ) getAttribute();
	_feature->insert(_feature->end(), attribute->begin(), attribute->end());

	delete(attribute);

	return _feature;
}
std::vector<uml::RedefinableElement * > *  ActorImpl::getRedefinedElement() const
{
	std::vector<uml::RedefinableElement * > *  _redefinedElement =  new std::vector<uml::RedefinableElement * >() ;
	
	std::vector<uml::RedefinableElement * > *  redefinedClassifier = (std::vector<uml::RedefinableElement * > * ) getRedefinedClassifier();
	_redefinedElement->insert(_redefinedElement->end(), redefinedClassifier->begin(), redefinedClassifier->end());


	return _redefinedElement;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ActorImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::CLASSIFIER_ATTRIBUTE:
			return getAttribute(); //24125
		case UmlPackage::BEHAVIOREDCLASSIFIER_CLASSIFIERBEHAVIOR:
			return getClassifierBehavior(); //24138
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //2414
		case UmlPackage::CLASSIFIER_COLLABORATIONUSE:
			return getCollaborationUse(); //24126
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //2410
		case UmlPackage::NAMESPACE_ELEMENTIMPORT:
			return getElementImport(); //24111
		case UmlPackage::CLASSIFIER_FEATURE:
			return getFeature(); //24124
		case UmlPackage::CLASSIFIER_GENERAL:
			return getGeneral(); //24127
		case UmlPackage::CLASSIFIER_GENERALIZATION:
			return getGeneralization(); //24128
		case UmlPackage::NAMESPACE_IMPORTEDMEMBER:
			return getImportedMember(); //24114
		case UmlPackage::CLASSIFIER_INHERITEDMEMBER:
			return getInheritedMember(); //24130
		case UmlPackage::BEHAVIOREDCLASSIFIER_INTERFACEREALIZATION:
			return getInterfaceRealization(); //24139
		case UmlPackage::CLASSIFIER_ISABSTRACT:
			return getIsAbstract(); //24131
		case UmlPackage::CLASSIFIER_ISFINALSPECIALIZATION:
			return getIsFinalSpecialization(); //24132
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //24110
		case UmlPackage::NAMESPACE_MEMBER:
			return getMember(); //24115
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //2415
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //2416
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //2417
		case UmlPackage::BEHAVIOREDCLASSIFIER_OWNEDBEHAVIOR:
			return getOwnedBehavior(); //24140
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //2411
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //2412
		case UmlPackage::NAMESPACE_OWNEDMEMBER:
			return getOwnedMember(); //24113
		case UmlPackage::NAMESPACE_OWNEDRULE:
			return getOwnedRule(); //24110
		case UmlPackage::TEMPLATEABLEELEMENT_OWNEDTEMPLATESIGNATURE:
			return getOwnedTemplateSignature(); //2415
		case UmlPackage::CLASSIFIER_OWNEDUSECASE:
			return getOwnedUseCase(); //24133
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //2413
		case UmlPackage::PARAMETERABLEELEMENT_OWNINGTEMPLATEPARAMETER:
			return getOwningTemplateParameter(); //2414
		case UmlPackage::TYPE_PACKAGE:
			return getPackage(); //24112
		case UmlPackage::NAMESPACE_PACKAGEIMPORT:
			return getPackageImport(); //24112
		case UmlPackage::CLASSIFIER_POWERTYPEEXTENT:
			return getPowertypeExtent(); //24129
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //2418
		case UmlPackage::CLASSIFIER_REDEFINEDCLASSIFIER:
			return getRedefinedClassifier(); //24135
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //24111
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //24112
		case UmlPackage::CLASSIFIER_REPRESENTATION:
			return getRepresentation(); //24136
		case UmlPackage::CLASSIFIER_SUBSTITUTION:
			return getSubstitution(); //24137
		case UmlPackage::TEMPLATEABLEELEMENT_TEMPLATEBINDING:
			return getTemplateBinding(); //2414
		case UmlPackage::PARAMETERABLEELEMENT_TEMPLATEPARAMETER:
			return getTemplateParameter(); //2415
		case UmlPackage::CLASSIFIER_USECASE:
			return getUseCase(); //24134
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //2419
	}
	return boost::any();
}
