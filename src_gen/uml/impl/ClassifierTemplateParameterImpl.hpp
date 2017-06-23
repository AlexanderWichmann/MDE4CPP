//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CLASSIFIERTEMPLATEPARAMETERCLASSIFIERTEMPLATEPARAMETERIMPL_HPP
#define UML_CLASSIFIERTEMPLATEPARAMETERCLASSIFIERTEMPLATEPARAMETERIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../ClassifierTemplateParameter.hpp"

#include "impl/TemplateParameterImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class ClassifierTemplateParameterImpl :virtual public TemplateParameterImpl, virtual public ClassifierTemplateParameter 
	{
		public: 
			ClassifierTemplateParameterImpl(const ClassifierTemplateParameterImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ClassifierTemplateParameterImpl& operator=(ClassifierTemplateParameterImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ClassifierTemplateParameterImpl();

		public:
			//destructor
			virtual ~ClassifierTemplateParameterImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 If allowSubstitutable is true, then there must be a constrainingClassifier.
			allowSubstitutable implies constrainingClassifier->notEmpty() */ 
			virtual bool
			 has_constraining_classifier(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The parameteredElement has no direct features, and if constrainedElement is empty it has no generalizations.
			parameteredElement.feature->isEmpty() and (constrainingClassifier->isEmpty() implies  parameteredElement.allParents()->isEmpty()) */ 
			virtual bool
			 parametered_element_no_features(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 If the parameteredElement is not abstract, then the Classifier used as an argument shall not be abstract.
			(not parameteredElement.isAbstract) implies templateParameterSubstitution.actual->forAll(a | not a.oclAsType(Classifier).isAbstract) */ 
			virtual bool
			 matching_abstract(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The argument to a ClassifierTemplateParameter is a Classifier.
			 templateParameterSubstitution.actual->forAll(a | a.oclIsKindOf(Classifier)) */ 
			virtual bool
			 actual_is_classifier(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 If there are any constrainingClassifiers, then every argument must be the same as or a specialization of them, or if allowSubstitutable is true, then it can also be substitutable.
			templateParameterSubstitution.actual->forAll( a |
			  let arg : Classifier = a.oclAsType(Classifier) in
			    constrainingClassifier->forAll(
			      cc |  
			         arg = cc or arg.conformsTo(cc) or (allowSubstitutable and arg.isSubstitutableFor(cc))
			      )
			) */ 
			virtual bool
			 constraining_classifiers_constrain_args(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 If there are any constrainingClassifiers, then the parameteredElement must be the same as or a specialization of them, or if allowSubstitutable is true, then it can also be substitutable.
			constrainingClassifier->forAll(
			     cc |  parameteredElement = cc or parameteredElement.conformsTo(cc) or (allowSubstitutable and parameteredElement.isSubstitutableFor(cc))
			) */ 
			virtual bool
			 constraining_classifiers_constrain_parametered_element(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Constrains the required relationship between an actual parameter and the parameteredElement for this formal parameter.
			<p>From package UML::Classification.</p> */ 
			virtual bool getAllowSubstitutable() const ;
			
			/*!
			 Constrains the required relationship between an actual parameter and the parameteredElement for this formal parameter.
			<p>From package UML::Classification.</p> */ 
			virtual void setAllowSubstitutable (bool _allowSubstitutable); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The classifiers that constrain the argument that can be used for the parameter. If the allowSubstitutable attribute is true, then any Classifier that is compatible with this constraining Classifier can be substituted; otherwise, it must be either this Classifier or one of its specializations. If this property is empty, there are no constraints on the Classifier that can be used as an argument.
			<p>From package UML::Classification.</p> */
			virtual 	std::shared_ptr< Bag<uml::Classifier> >
			 getConstrainingClassifier() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual 		std::shared_ptr<Union<uml::Element> > getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element > getOwner() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_CLASSIFIERTEMPLATEPARAMETERCLASSIFIERTEMPLATEPARAMETERIMPL_HPP */

