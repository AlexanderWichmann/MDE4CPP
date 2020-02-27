//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSCS_SEMANTICS_CLASSIFICATIONPACKAGE_HPP
#define PSCS_SEMANTICS_CLASSIFICATIONPACKAGE_HPP

#include "ecore/EPackage.hpp"

namespace ecore 
{
	class EAnnotation;
	class EClass;
	class EGenericType;
	class EOperation;
	class EStringToStringMapEntry;
}

namespace Classification 
{
	/*!
	The Metamodel Package for the Classification metamodel. This package is used to enable the reflection of model elements. It contains all model elements
	which were described in an ecore file.
	*/
	/*!
	 */
	class ClassificationPackage : virtual public ecore::EPackage 
	{
		private:    
			ClassificationPackage(ClassificationPackage const&) = delete;
			ClassificationPackage& operator=(ClassificationPackage const&) = delete;

		protected:
			ClassificationPackage(){}

		public:
			//static variables
			static const std::string eNAME;
			static const std::string eNS_URI;
			static const std::string eNS_PREFIX;

			// Begin Class CS_InstanceValueEvaluation
			//Class and Feature IDs 
			static const unsigned int CS_INSTANCEVALUEEVALUATION_CLASS = 16;
			static const unsigned int CS_INSTANCEVALUEEVALUATION_CLASS_FEATURE_COUNT = 2;
			static const unsigned int CS_INSTANCEVALUEEVALUATION_CLASS_OPERATION_COUNT = 5;
			
			
			static const int CS_INSTANCEVALUEEVALUATION_OPERATION_EVALUATE = 1606;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getCS_InstanceValueEvaluation_Class() const = 0;
			
			
			
			virtual std::shared_ptr<ecore::EOperation> getCS_InstanceValueEvaluation_Operation_evaluate() const = 0;
			
			// End Class CS_InstanceValueEvaluation

			
			

			//Singleton Instance and Getter
			private:
				static std::shared_ptr<ClassificationPackage> instance;
			public:
				static std::shared_ptr<ClassificationPackage> eInstance();
	};
}
#endif /* end of include guard: PSCS_SEMANTICS_CLASSIFICATIONPACKAGE_HPP */