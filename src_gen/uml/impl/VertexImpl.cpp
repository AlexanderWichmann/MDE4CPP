#include "VertexImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
VertexImpl::VertexImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	
		m_incoming.reset(new Bag<uml::Transition>());
	
	
		m_outgoing.reset(new Bag<uml::Transition>());
	
	
}

VertexImpl::~VertexImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete Vertex "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

VertexImpl::VertexImpl(const VertexImpl & obj)
{
	//create copy of all Attributes
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
		std::shared_ptr< Bag<uml::Dependency> >
	 _clientDependency = obj.getClientDependency();
	m_clientDependency.reset(new 	 Bag<uml::Dependency> 
	(*(obj.getClientDependency().get())));// this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

	m_container  = obj.getContainer();

		std::shared_ptr< Bag<uml::Transition> >
	 _incoming = obj.getIncoming();
	m_incoming.reset(new 	 Bag<uml::Transition> 
	(*(obj.getIncoming().get())));// this->getIncoming()->insert(this->getIncoming()->end(), _incoming->begin(), _incoming->end());

	m_namespace  = obj.getNamespace();

		std::shared_ptr< Bag<uml::Transition> >
	 _outgoing = obj.getOutgoing();
	m_outgoing.reset(new 	 Bag<uml::Transition> 
	(*(obj.getOutgoing().get())));// this->getOutgoing()->insert(this->getOutgoing()->end(), _outgoing->begin(), _outgoing->end());

			std::shared_ptr<Union<uml::Element> > _ownedElement = obj.getOwnedElement();
	m_ownedElement.reset(new 		Union<uml::Element> (*(obj.getOwnedElement().get())));// this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());

	m_owner  = obj.getOwner();


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
	std::shared_ptr<Bag<uml::Comment>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->add(std::shared_ptr<uml::Comment>(dynamic_cast<uml::Comment*>(_ownedComment->copy())));
	}
}

ecore::EObject *  VertexImpl::copy() const
{
	return new VertexImpl(*this);
}

std::shared_ptr<ecore::EClass> VertexImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getVertex();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************
std::shared_ptr<uml::StateMachine> 
 VertexImpl::containingStateMachine() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<Bag<uml::Transition> >
 VertexImpl::getIncomings() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<Bag<uml::Transition> >
 VertexImpl::getOutgoings() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool
 VertexImpl::isContainedInRegion(std::shared_ptr<uml::Region>  r) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool
 VertexImpl::isContainedInState(std::shared_ptr<uml::State>  s) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<uml::Region > VertexImpl::getContainer() const
{

    return m_container;
}
void VertexImpl::setContainer(std::shared_ptr<uml::Region> _container)
{
    m_container = _container;
}

	std::shared_ptr< Bag<uml::Transition> >
 VertexImpl::getIncoming() const
{

    return m_incoming;
}


	std::shared_ptr< Bag<uml::Transition> >
 VertexImpl::getOutgoing() const
{

    return m_outgoing;
}


//*********************************
// Union Getter
//*********************************
		std::shared_ptr<Union<uml::Element> > VertexImpl::getOwnedElement() const
{
	

	return m_ownedElement;
}
std::shared_ptr<uml::Namespace > VertexImpl::getNamespace() const
{
	

	return m_namespace;
}
std::shared_ptr<uml::Element > VertexImpl::getOwner() const
{
	

	return m_owner;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any VertexImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //614
		case UmlPackage::VERTEX_CONTAINER:
			return getContainer(); //6110
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //610
		case UmlPackage::VERTEX_INCOMING:
			return getIncoming(); //6111
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //615
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //616
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //617
		case UmlPackage::VERTEX_OUTGOING:
			return getOutgoing(); //6112
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //611
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //612
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //613
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //618
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //619
	}
	return boost::any();
}
