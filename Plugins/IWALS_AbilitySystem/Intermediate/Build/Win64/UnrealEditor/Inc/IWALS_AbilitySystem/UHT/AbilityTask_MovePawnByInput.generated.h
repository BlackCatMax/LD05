// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityTask_MovePawnByInput.h"

#ifdef IWALS_ABILITYSYSTEM_AbilityTask_MovePawnByInput_generated_h
#error "AbilityTask_MovePawnByInput.generated.h already included, missing '#pragma once' in AbilityTask_MovePawnByInput.h"
#endif
#define IWALS_ABILITYSYSTEM_AbilityTask_MovePawnByInput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAbilityTask_MovePawnByInput;
class UGameplayAbility;

// ********** Begin Delegate FOnDurningMove ********************************************************
#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_12_DELEGATE \
IWALS_ABILITYSYSTEM_API void FOnDurningMove_DelegateWrapper(const FMulticastScriptDelegate& OnDurningMove, float Time);


// ********** End Delegate FOnDurningMove **********************************************************

// ********** Begin Delegate FOnTargetLocationReached **********************************************
#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_13_DELEGATE \
IWALS_ABILITYSYSTEM_API void FOnTargetLocationReached_DelegateWrapper(const FMulticastScriptDelegate& OnTargetLocationReached, float Time);


// ********** End Delegate FOnTargetLocationReached ************************************************

// ********** Begin Delegate FOnFailed *************************************************************
#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_14_DELEGATE \
IWALS_ABILITYSYSTEM_API void FOnFailed_DelegateWrapper(const FMulticastScriptDelegate& OnFailed, float Time);


// ********** End Delegate FOnFailed ***************************************************************

// ********** Begin Class UAbilityTask_MovePawnByInput *********************************************
#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMovePawnByInput);


IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UAbilityTask_MovePawnByInput_NoRegister();

#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_MovePawnByInput(); \
	friend struct Z_Construct_UClass_UAbilityTask_MovePawnByInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UAbilityTask_MovePawnByInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_MovePawnByInput, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IWALS_AbilitySystem"), Z_Construct_UClass_UAbilityTask_MovePawnByInput_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_MovePawnByInput)


#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_MovePawnByInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_MovePawnByInput(UAbilityTask_MovePawnByInput&&) = delete; \
	UAbilityTask_MovePawnByInput(const UAbilityTask_MovePawnByInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_MovePawnByInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_MovePawnByInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_MovePawnByInput) \
	NO_API virtual ~UAbilityTask_MovePawnByInput();


#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_16_PROLOG
#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_19_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_MovePawnByInput;

// ********** End Class UAbilityTask_MovePawnByInput ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
