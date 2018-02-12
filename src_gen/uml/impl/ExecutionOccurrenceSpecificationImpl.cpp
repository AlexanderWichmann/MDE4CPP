#include "uml/impl/ExecutionOccurrenceSpecificationImpl.hpp"
#include <iostream>
#include <cassert>

#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"
#include "uml/impl/UmlPackageImpl.hpp"

//Forward declaration includes
#include "uml/Comment.hpp"

#include "uml/Dependency.hpp"

#include "ecore/EAnnotation.hpp"

#include "uml/Element.hpp"

#include "uml/ExecutionSpecification.hpp"

#include "uml/GeneralOrdering.hpp"

#include "uml/Interaction.hpp"

#include "uml/InteractionOperand.hpp"

#include "uml/Lifeline.hpp"

#include "uml/Namespace.hpp"

#include "uml/OccurrenceSpecification.hpp"

#include "uml/StringExpression.hpp"


using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
ExecutionOccurrenceSpecificationImpl::ExecutionOccurrenceSpecificationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
	

	//Init references
	
}

ExecutionOccurrenceSpecificationImpl::~ExecutionOccurrenceSpecificationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ExecutionOccurrenceSpecification "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}


//Additional constructor for the containments back reference
			ExecutionOccurrenceSpecificationImpl::ExecutionOccurrenceSpecificationImpl(std::weak_ptr<uml::Interaction > par_enclosingInteraction)
			:ExecutionOccurrenceSpecificationImpl()
			{
			    m_enclosingInteraction = par_enclosingInteraction;
			}





//Additional constructor for the containments back reference
			ExecutionOccurrenceSpecificationImpl::ExecutionOccurrenceSpecificationImpl(std::weak_ptr<uml::InteractionOperand > par_enclosingOperand)
			:ExecutionOccurrenceSpecificationImpl()
			{
			    m_enclosingOperand = par_enclosingOperand;
			}





//Additional constructor for the containments back reference
			ExecutionOccurrenceSpecificationImpl::ExecutionOccurrenceSpecificationImpl(std::weak_ptr<uml::Namespace > par_namespace)
			:ExecutionOccurrenceSpecificationImpl()
			{
			    m_namespace = par_namespace;
			}





//Additional constructor for the containments back reference
			ExecutionOccurrenceSpecificationImpl::ExecutionOccurrenceSpecificationImpl(std::weak_ptr<uml::Element > par_owner)
			:ExecutionOccurrenceSpecificationImpl()
			{
			    m_owner = par_owner;
			}






ExecutionOccurrenceSpecificationImpl::ExecutionOccurrenceSpecificationImpl(const ExecutionOccurrenceSpecificationImpl & obj):ExecutionOccurrenceSpecificationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy ExecutionOccurrenceSpecification "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with no containment (soft copy)
	
	std::shared_ptr< Bag<uml::Dependency> > _clientDependency = obj.getClientDependency();
	m_clientDependency.reset(new Bag<uml::Dependency>(*(obj.getClientDependency().get())));

	std::shared_ptr< Bag<uml::Lifeline> > _covered = obj.getCovered();
	m_covered.reset(new Bag<uml::Lifeline>(*(obj.getCovered().get())));

	m_enclosingInteraction  = obj.getEnclosingInteraction();

	m_enclosingOperand  = obj.getEnclosingOperand();

	m_execution  = obj.getExecution();

	m_namespace  = obj.getNamespace();

	m_owner  = obj.getOwner();

	std::shared_ptr< Bag<uml::GeneralOrdering> > _toAfter = obj.getToAfter();
	m_toAfter.reset(new Bag<uml::GeneralOrdering>(*(obj.getToAfter().get())));

	std::shared_ptr< Bag<uml::GeneralOrdering> > _toBefore = obj.getToBefore();
	m_toBefore.reset(new Bag<uml::GeneralOrdering>(*(obj.getToBefore().get())));


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(std::dynamic_pointer_cast<ecore::EAnnotation>(_eAnnotations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eAnnotations" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::GeneralOrdering>> _generalOrderingList = obj.getGeneralOrdering();
	for(std::shared_ptr<uml::GeneralOrdering> _generalOrdering : *_generalOrderingList)
	{
		this->getGeneralOrdering()->add(std::shared_ptr<uml::GeneralOrdering>(std::dynamic_pointer_cast<uml::GeneralOrdering>(_generalOrdering->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_generalOrdering" << std::endl;
	#endif
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression = std::dynamic_pointer_cast<uml::StringExpression>(obj.getNameExpression()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_nameExpression" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Comment>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->add(std::shared_ptr<uml::Comment>(std::dynamic_pointer_cast<uml::Comment>(_ownedComment->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_ownedComment" << std::endl;
	#endif

}

std::shared_ptr<ecore::EObject>  ExecutionOccurrenceSpecificationImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new ExecutionOccurrenceSpecificationImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> ExecutionOccurrenceSpecificationImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getExecutionOccurrenceSpecification_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************
std::shared_ptr<uml::ExecutionSpecification > ExecutionOccurrenceSpecificationImpl::getExecution() const
{
//assert(m_execution);
    return m_execution;
}
void ExecutionOccurrenceSpecificationImpl::setExecution(std::shared_ptr<uml::ExecutionSpecification> _execution)
{
    m_execution = _execution;
}

//*********************************
// Union Getter
//*********************************
std::weak_ptr<uml::Namespace > ExecutionOccurrenceSpecificationImpl::getNamespace() const
{
	return m_namespace;
}
std::shared_ptr<Union<uml::Element> > ExecutionOccurrenceSpecificationImpl::getOwnedElement() const
{
	return m_ownedElement;
}
std::weak_ptr<uml::Element > ExecutionOccurrenceSpecificationImpl::getOwner() const
{
	return m_owner;
}


std::shared_ptr<ecore::EObject> ExecutionOccurrenceSpecificationImpl::eContainer() const
{
	if(auto wp = m_enclosingInteraction.lock())
	{
		return wp;
	}

	if(auto wp = m_enclosingOperand.lock())
	{
		return wp;
	}

	if(auto wp = m_namespace.lock())
	{
		return wp;
	}

	if(auto wp = m_owner.lock())
	{
		return wp;
	}
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ExecutionOccurrenceSpecificationImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::NAMEDELEMENT_EREFERENCE_CLIENTDEPENDENCY:
			return getClientDependency(); //2344
		case UmlPackage::INTERACTIONFRAGMENT_EREFERENCE_COVERED:
			return getCovered(); //23410
		case ecore::EcorePackage::EMODELELEMENT_EREFERENCE_EANNOTATIONS:
			return getEAnnotations(); //2340
		case UmlPackage::INTERACTIONFRAGMENT_EREFERENCE_ENCLOSINGINTERACTION:
			return getEnclosingInteraction(); //23412
		case UmlPackage::INTERACTIONFRAGMENT_EREFERENCE_ENCLOSINGOPERAND:
			return getEnclosingOperand(); //23411
		case UmlPackage::EXECUTIONOCCURRENCESPECIFICATION_EREFERENCE_EXECUTION:
			return getExecution(); //23416
		case UmlPackage::INTERACTIONFRAGMENT_EREFERENCE_GENERALORDERING:
			return getGeneralOrdering(); //23413
		case UmlPackage::NAMEDELEMENT_EATTRIBUTE_NAME:
			return getName(); //2345
		case UmlPackage::NAMEDELEMENT_EREFERENCE_NAMEEXPRESSION:
			return getNameExpression(); //2346
		case UmlPackage::NAMEDELEMENT_EREFERENCE_NAMESPACE:
			return getNamespace(); //2347
		case UmlPackage::ELEMENT_EREFERENCE_OWNEDCOMMENT:
			return getOwnedComment(); //2341
		case UmlPackage::ELEMENT_EREFERENCE_OWNEDELEMENT:
			return getOwnedElement(); //2342
		case UmlPackage::ELEMENT_EREFERENCE_OWNER:
			return getOwner(); //2343
		case UmlPackage::NAMEDELEMENT_EATTRIBUTE_QUALIFIEDNAME:
			return getQualifiedName(); //2348
		case UmlPackage::OCCURRENCESPECIFICATION_EREFERENCE_TOAFTER:
			return getToAfter(); //23414
		case UmlPackage::OCCURRENCESPECIFICATION_EREFERENCE_TOBEFORE:
			return getToBefore(); //23415
		case UmlPackage::NAMEDELEMENT_EATTRIBUTE_VISIBILITY:
			return getVisibility(); //2349
	}
	return boost::any();
}

void ExecutionOccurrenceSpecificationImpl::eSet(int featureID, boost::any newValue)
{
	switch(featureID)
	{
		case UmlPackage::INTERACTIONFRAGMENT_EREFERENCE_ENCLOSINGINTERACTION:
		{
			// BOOST CAST
			std::shared_ptr<uml::Interaction> _enclosingInteraction = boost::any_cast<std::shared_ptr<uml::Interaction>>(newValue);
			setEnclosingInteraction(_enclosingInteraction); //23412
			break;
		}
		case UmlPackage::INTERACTIONFRAGMENT_EREFERENCE_ENCLOSINGOPERAND:
		{
			// BOOST CAST
			std::shared_ptr<uml::InteractionOperand> _enclosingOperand = boost::any_cast<std::shared_ptr<uml::InteractionOperand>>(newValue);
			setEnclosingOperand(_enclosingOperand); //23411
			break;
		}
		case UmlPackage::EXECUTIONOCCURRENCESPECIFICATION_EREFERENCE_EXECUTION:
		{
			// BOOST CAST
			std::shared_ptr<uml::ExecutionSpecification> _execution = boost::any_cast<std::shared_ptr<uml::ExecutionSpecification>>(newValue);
			setExecution(_execution); //23416
			break;
		}
		case UmlPackage::NAMEDELEMENT_EATTRIBUTE_NAME:
		{
			// BOOST CAST
			std::string _name = boost::any_cast<std::string>(newValue);
			setName(_name); //2345
			break;
		}
		case UmlPackage::NAMEDELEMENT_EREFERENCE_NAMEEXPRESSION:
		{
			// BOOST CAST
			std::shared_ptr<uml::StringExpression> _nameExpression = boost::any_cast<std::shared_ptr<uml::StringExpression>>(newValue);
			setNameExpression(_nameExpression); //2346
			break;
		}
		case UmlPackage::NAMEDELEMENT_EATTRIBUTE_VISIBILITY:
		{
			// BOOST CAST
			VisibilityKind _visibility = boost::any_cast<VisibilityKind>(newValue);
			setVisibility(_visibility); //2349
			break;
		}
	}
}
