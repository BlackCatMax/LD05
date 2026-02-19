// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AGLS_AIsMeleeFightCore.h"

#ifdef HELPFULFUNCTIONS_AGLS_AIsMeleeFightCore_generated_h
#error "AGLS_AIsMeleeFightCore.generated.h already included, missing '#pragma once' in AGLS_AIsMeleeFightCore.h"
#endif
#define HELPFULFUNCTIONS_AGLS_AIsMeleeFightCore_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 struct FAGLS_FinishersDataForAI;
class ACharacter;
struct FAGLS_FinishersDataForAI;
struct FLinearColor;

// ********** Begin Class UAGLS_AIsMeleeFightCore **************************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDebugPath); \
	DECLARE_FUNCTION(execDebugPoint); \
	DECLARE_FUNCTION(execDebugLine); \
	DECLARE_FUNCTION(execDebugSphere); \
	DECLARE_FUNCTION(execGetAllSequencesData); \
	DECLARE_FUNCTION(execChooseBestAnimSeq); \
	DECLARE_FUNCTION(execGetFinisherTimeElapsed); \
	DECLARE_FUNCTION(execTryInterruptFinisherAction); \
	DECLARE_FUNCTION(execDoWhenFinisherAction); \
	DECLARE_FUNCTION(execTryStartFinisherAction); \
	DECLARE_FUNCTION(execCheckCanStartFinisher);


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_15_CALLBACK_WRAPPERS
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_AIsMeleeFightCore_NoRegister();

#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAGLS_AIsMeleeFightCore(); \
	friend struct Z_Construct_UClass_UAGLS_AIsMeleeFightCore_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_AIsMeleeFightCore_NoRegister(); \
public: \
	DECLARE_CLASS2(UAGLS_AIsMeleeFightCore, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), Z_Construct_UClass_UAGLS_AIsMeleeFightCore_NoRegister) \
	DECLARE_SERIALIZER(UAGLS_AIsMeleeFightCore)


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAGLS_AIsMeleeFightCore(UAGLS_AIsMeleeFightCore&&) = delete; \
	UAGLS_AIsMeleeFightCore(const UAGLS_AIsMeleeFightCore&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGLS_AIsMeleeFightCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGLS_AIsMeleeFightCore); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAGLS_AIsMeleeFightCore) \
	NO_API virtual ~UAGLS_AIsMeleeFightCore();


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_12_PROLOG
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_15_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAGLS_AIsMeleeFightCore;

// ********** End Class UAGLS_AIsMeleeFightCore ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AIsMeleeFightCore_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
