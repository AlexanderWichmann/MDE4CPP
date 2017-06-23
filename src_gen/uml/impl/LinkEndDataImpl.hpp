//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_LINKENDDATALINKENDDATAIMPL_HPP
#define UML_LINKENDDATALINKENDDATAIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../LinkEndData.hpp"

#include "impl/ElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class LinkEndDataImpl :virtual public ElementImpl, virtual public LinkEndData 
	{
		public: 
			LinkEndDataImpl(const LinkEndDataImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			LinkEndDataImpl& operator=(LinkEndDataImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			LinkEndDataImpl();

		public:
			//destructor
			virtual ~LinkEndDataImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The type of the value InputPin conforms to the type of the Association end.
			value<>null implies value.type.conformsTo(end.type) */ 
			virtual bool
			 same_type(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The multiplicity of the value InputPin must be 1..1.
			value<>null implies value.is(1,1) */ 
			virtual bool
			 multiplicity(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The value InputPin is not also the qualifier value InputPin.
			value->excludesAll(qualifier.value) */ 
			virtual bool
			 end_object_input_pin(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The Property must be an Association memberEnd.
			end.association <> null */ 
			virtual bool
			 property_is_association_end(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The qualifiers must be qualifiers of the Association end.
			end.qualifier->includesAll(qualifier.qualifier) */ 
			virtual bool
			 qualifiers(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 Returns all the InputPins referenced by this LinkEndData. By default this includes the value and qualifier InputPins, but subclasses may override the operation to add other InputPins.
			result = (value->asBag()->union(qualifier.value))
			<p>From package UML::Actions.</p> */ 
			virtual std::shared_ptr<Bag<uml::InputPin> >
			 allPins()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Association end for which this LinkEndData specifies values.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::Property > getEnd() const ;
			
			/*!
			 The Association end for which this LinkEndData specifies values.
			<p>From package UML::Actions.</p> */
			virtual void setEnd(std::shared_ptr<uml::Property> _end_end) ;
			/*!
			 A set of QualifierValues used to provide values for the qualifiers of the end.
			<p>From package UML::Actions.</p> */
			virtual 		std::shared_ptr<Subset<uml::QualifierValue, uml::Element > >
			 getQualifier() const ;
			
			/*!
			 The InputPin that provides the specified value for the given end. This InputPin is omitted if the LinkEndData specifies the "open" end for a ReadLinkAction.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getValue() const ;
			
			/*!
			 The InputPin that provides the specified value for the given end. This InputPin is omitted if the LinkEndData specifies the "open" end for a ReadLinkAction.
			<p>From package UML::Actions.</p> */
			virtual void setValue(std::shared_ptr<uml::InputPin> _value_value) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getOwnedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_LINKENDDATALINKENDDATAIMPL_HPP */

