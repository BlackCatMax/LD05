// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AGLS_ZombieAttacksComponentCore.h"

#ifdef HELPFULFUNCTIONS_AGLS_ZombieAttacksComponentCore_generated_h
#error "AGLS_ZombieAttacksComponentCore.generated.h already included, missing '#pragma once' in AGLS_ZombieAttacksComponentCore.h"
#endif
#define HELPFULFUNCTIONS_AGLS_ZombieAttacksComponentCore_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPairedAttackSeqInteractionAnim ***********************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FPairedAttackSeqInteractionAnim;
// ********** End ScriptStruct FPairedAttackSeqInteractionAnim *************************************

// ********** Begin Delegate FOnAttackStarted ******************************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_37_DELEGATE \
HELPFULFUNCTIONS_API void FOnAttackStarted_DelegateWrapper(const FMulticastScriptDelegate& OnAttackStarted, float ActionDuration);


// ********** End Delegate FOnAttackStarted ********************************************************

// ********** Begin Delegate FOnAttackEnded ********************************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_38_DELEGATE \
HELPFULFUNCTIONS_API void FOnAttackEnded_DelegateWrapper(const FMulticastScriptDelegate& OnAttackEnded, float ActionElapsedTime);


// ********** End Delegate FOnAttackEnded **********************************************************

// ********** Begin Class UAGLS_ZombieAttacksComponentCore *****************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCorrectlySetAttackTimer); \
	DECLARE_FUNCTION(execCallOnAttackEnded); \
	DECLARE_FUNCTION(execCallOnAttackStarted);


HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_NoRegister();

#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAGLS_ZombieAttacksComponentCore(); \
	friend struct Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_NoRegister(); \
public: \
	DECLARE_CLASS2(UAGLS_ZombieAttacksComponentCore, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_NoRegister) \
	DECLARE_SERIALIZER(UAGLS_ZombieAttacksComponentCore)


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_50_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAGLS_ZombieAttacksComponentCore(UAGLS_ZombieAttacksComponentCore&&) = delete; \
	UAGLS_ZombieAttacksComponentCore(const UAGLS_ZombieAttacksComponentCore&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGLS_ZombieAttacksComponentCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGLS_ZombieAttacksComponentCore); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAGLS_ZombieAttacksComponentCore) \
	NO_API virtual ~UAGLS_ZombieAttacksComponentCore();


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_47_PROLOG
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_50_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAGLS_ZombieAttacksComponentCore;

// ********** End Class UAGLS_ZombieAttacksComponentCore *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
