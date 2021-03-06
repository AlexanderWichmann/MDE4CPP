//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_OBJECTFLOWOBJECTFLOWIMPL_HPP
#define UML_OBJECTFLOWOBJECTFLOWIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ObjectFlow.hpp"

#include "uml/impl/ActivityEdgeImpl.hpp"

//*********************************
namespace uml 
{
	class ObjectFlowImpl :virtual public ActivityEdgeImpl, virtual public ObjectFlow 
	{
		public: 
			ObjectFlowImpl(const ObjectFlowImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ObjectFlowImpl& operator=(ObjectFlowImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ObjectFlowImpl();
			virtual std::shared_ptr<ObjectFlow> getThisObjectFlowPtr() const;
			virtual void setThisObjectFlowPtr(std::weak_ptr<ObjectFlow> thisObjectFlowPtr);

			//Additional constructors for the containments back reference
			ObjectFlowImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			ObjectFlowImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			ObjectFlowImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ObjectFlowImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~ObjectFlowImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 ObjectNodes connected by an ObjectFlow, with optionally intervening ControlNodes, must have compatible types. In particular, the downstream ObjectNode type must be the same or a supertype of the upstream ObjectNode type. */ 
			virtual bool compatible_types(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 A selection Behavior has one input Parameter and one output Parameter. The input Parameter must have the same as or a supertype of the type of the source ObjectNode, be non-unique and have multiplicity 0..*. The output Parameter must be the same or a subtype of the type of source ObjectNode. The Behavior cannot have side effects.
			selection<>null implies
				selection.inputParameters()->size()=1 and
				selection.inputParameters()->forAll(not isUnique and is(0,*)) and
				selection.outputParameters()->size()=1 */ 
			virtual bool input_and_output_parameter(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 isMulticast and isMultireceive cannot both be true.
			not (isMulticast and isMultireceive) */ 
			virtual bool is_multicast_or_is_multireceive(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 ObjectFlows may not have ExecutableNodes at either end.
			not (source.oclIsKindOf(ExecutableNode) or target.oclIsKindOf(ExecutableNode)) */ 
			virtual bool no_executable_nodes(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 ObjectNodes connected by an ObjectFlow, with optionally intervening ControlNodes, must have the same upperBounds. */ 
			virtual bool same_upper_bounds(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 An ObjectFlow may have a selection Behavior only if it has an ObjectNode as its source.
			selection<>null implies source.oclIsKindOf(ObjectNode) */ 
			virtual bool selection_behavior(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 An ObjectFlow with a constant weight may not target an ObjectNode, with optionally intervening ControlNodes, that has an upper bound less than the weight. */ 
			virtual bool target(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 A transformation Behavior has one input Parameter and one output Parameter. The input Parameter must be the same as or a supertype of the type of object token coming from the source end. The output Parameter must be the same or a subtype of the type of object token expected downstream. The Behavior cannot have side effects.
			transformation<>null implies
				transformation.inputParameters()->size()=1 and
				transformation.outputParameters()->size()=1 */ 
			virtual bool transformation_behavior(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Indicates whether the objects in the ObjectFlow are passed by multicasting.
			<p>From package UML::Activities.</p> */ 
			virtual bool getIsMulticast() const ;
			
			/*!
			 Indicates whether the objects in the ObjectFlow are passed by multicasting.
			<p>From package UML::Activities.</p> */ 
			virtual void setIsMulticast (bool _isMulticast); 
			
			/*!
			 Indicates whether the objects in the ObjectFlow are gathered from respondents to multicasting.
			<p>From package UML::Activities.</p> */ 
			virtual bool getIsMultireceive() const ;
			
			/*!
			 Indicates whether the objects in the ObjectFlow are gathered from respondents to multicasting.
			<p>From package UML::Activities.</p> */ 
			virtual void setIsMultireceive (bool _isMultireceive); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 A Behavior used to select tokens from a source ObjectNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<uml::Behavior > getSelection() const ;
			
			/*!
			 A Behavior used to select tokens from a source ObjectNode.
			<p>From package UML::Activities.</p> */
			virtual void setSelection(std::shared_ptr<uml::Behavior> _selection_selection) ;
			/*!
			 A Behavior used to change or replace object tokens flowing along the ObjectFlow.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<uml::Behavior > getTransformation() const ;
			
			/*!
			 A Behavior used to change or replace object tokens flowing along the ObjectFlow.
			<p>From package UML::Activities.</p> */
			virtual void setTransformation(std::shared_ptr<uml::Behavior> _transformation_transformation) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityEdge.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<uml::UmlFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<ObjectFlow> m_thisObjectFlowPtr;
	};
}
#endif /* end of include guard: UML_OBJECTFLOWOBJECTFLOWIMPL_HPP */
