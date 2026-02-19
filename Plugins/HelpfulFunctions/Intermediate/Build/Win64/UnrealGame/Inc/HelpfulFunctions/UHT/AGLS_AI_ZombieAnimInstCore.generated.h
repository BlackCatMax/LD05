// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AGLS_AI_ZombieAnimInstCore.h"

#ifdef HELPFULFUNCTIONS_AGLS_AI_ZombieAnimInstCore_generated_h
#error "AGLS_AI_ZombieAnimInstCore.generated.h already included, missing '#pragma once' in AGLS_AI_ZombieAnimInstCore.h"
#endif
#define HELPFULFUNCTIONS_AGLS_AI_ZombieAnimInstCore_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class USoundBase;
struct FLinearColor;

// ********** Begin Class UAGLS_AI_ZombieAnimInstCore **********************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_ZombieAnimInstCore_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFootsIK_Alpha); \
	DECLARE_FUNCTION(execGetBaseLayerSlotWeigth); \
	DECLARE_FUNCTION(execGetAddtiveSlotWeight); \
	DECLARE_FUNCTION(execSetAlphaForNearAttackingC); \
	DECLARE_FUNCTION(execSetAimAtEnemyPropertiesC); \
	DECLARE_FUNCTION(execSetCorrectedIsCollideValueC); \
	DECLARE_FUNCTION(execUpdateValuesFromCharacterC); \
	DECLARE_FUNCTION(execSingleFootStepDetectionC); \
	DECLARE_FUNCTION(execFootsStepsPlayerC); \
	DECLARE_FUNCTION(execUpdatePerFrameOnTick);


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_ZombieAnimInstCore_h_17_CALLBACK_WRAPPERS
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_NoRegister();

#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_ZombieAnimInstCore_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAGLS_AI_ZombieAnimInstCore(); \
	friend struct Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_NoRegister(); \
public: \
	DECLARE_CLASS2(UAGLS_AI_ZombieAnimInstCore, UAGLS_AI_AnimInstanceBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), Z_Construct_UClass_UAGLS_AI_ZombieAnimInstCore_NoRegister) \
	DECLARE_SERIALIZER(UAGLS_AI_ZombieAnimInstCore)


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_ZombieAnimInstCore_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAGLS_AI_ZombieAnimInstCore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAGLS_AI_ZombieAnimInstCore(UAGLS_AI_ZombieAnimInstCore&&) = delete; \
	UAGLS_AI_ZombieAnimInstCore(const UAGLS_AI_ZombieAnimInstCore&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGLS_AI_ZombieAnimInstCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGLS_AI_ZombieAnimInstCore); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAGLS_AI_ZombieAnimInstCore) \
	NO_API virtual ~UAGLS_AI_ZombieAnimInstCore();


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_ZombieAnimInstCore_h_14_PROLOG
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_ZombieAnimInstCore_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_ZombieAnimInstCore_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_ZombieAnimInstCore_h_17_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_ZombieAnimInstCore_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_ZombieAnimInstCore_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAGLS_AI_ZombieAnimInstCore;

// ********** End Class UAGLS_AI_ZombieAnimInstCore ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_ZombieAnimInstCore_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
