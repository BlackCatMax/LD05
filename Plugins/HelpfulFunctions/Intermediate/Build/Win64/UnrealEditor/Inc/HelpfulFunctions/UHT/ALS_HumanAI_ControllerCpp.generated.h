// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ALS_HumanAI_ControllerCpp.h"

#ifdef HELPFULFUNCTIONS_ALS_HumanAI_ControllerCpp_generated_h
#error "ALS_HumanAI_ControllerCpp.generated.h already included, missing '#pragma once' in ALS_HumanAI_ControllerCpp.h"
#endif
#define HELPFULFUNCTIONS_ALS_HumanAI_ControllerCpp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class ACharacter;

// ********** Begin Class AALS_HumanAI_ControllerCpp ***********************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTheAverageValueOfSpottedEnemiesFast); \
	DECLARE_FUNCTION(execGetEnemyFromOtherAIs); \
	DECLARE_FUNCTION(execSetFocusActorTransformFast); \
	DECLARE_FUNCTION(execChooseEnemyActor); \
	DECLARE_FUNCTION(execFindOtherComrate); \
	DECLARE_FUNCTION(execUseTraceSightPercept); \
	DECLARE_FUNCTION(execCheckIsInFoliage); \
	DECLARE_FUNCTION(execGetBestEnemyFromSight); \
	DECLARE_FUNCTION(execSightPerceptionByTraceFast); \
	DECLARE_FUNCTION(execSightPerceptionByMeshFast); \
	DECLARE_FUNCTION(execInterfaceTest);


HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AALS_HumanAI_ControllerCpp_NoRegister();

#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAALS_HumanAI_ControllerCpp(); \
	friend struct Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AALS_HumanAI_ControllerCpp_NoRegister(); \
public: \
	DECLARE_CLASS2(AALS_HumanAI_ControllerCpp, AAIController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), Z_Construct_UClass_AALS_HumanAI_ControllerCpp_NoRegister) \
	DECLARE_SERIALIZER(AALS_HumanAI_ControllerCpp)


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AALS_HumanAI_ControllerCpp(AALS_HumanAI_ControllerCpp&&) = delete; \
	AALS_HumanAI_ControllerCpp(const AALS_HumanAI_ControllerCpp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AALS_HumanAI_ControllerCpp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AALS_HumanAI_ControllerCpp); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AALS_HumanAI_ControllerCpp) \
	NO_API virtual ~AALS_HumanAI_ControllerCpp();


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h_19_PROLOG
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h_22_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AALS_HumanAI_ControllerCpp;

// ********** End Class AALS_HumanAI_ControllerCpp *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
