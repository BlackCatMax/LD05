// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityTask_TimerFunction.h"

#ifdef IWALS_ABILITYSYSTEM_AbilityTask_TimerFunction_generated_h
#error "AbilityTask_TimerFunction.generated.h already included, missing '#pragma once' in AbilityTask_TimerFunction.h"
#endif
#define IWALS_ABILITYSYSTEM_AbilityTask_TimerFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAbilityTask_TimerFunction;
class UGameplayAbility;

// ********** Begin Delegate FExecuteTickDelegate **************************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_11_DELEGATE \
IWALS_ABILITYSYSTEM_API void FExecuteTickDelegate_DelegateWrapper(const FMulticastScriptDelegate& ExecuteTickDelegate);


// ********** End Delegate FExecuteTickDelegate ****************************************************

// ********** Begin Class UAbilityTask_TimerFunction ***********************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRunTimerTask);


IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UAbilityTask_TimerFunction_NoRegister();

#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_TimerFunction(); \
	friend struct Z_Construct_UClass_UAbilityTask_TimerFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UAbilityTask_TimerFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_TimerFunction, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IWALS_AbilitySystem"), Z_Construct_UClass_UAbilityTask_TimerFunction_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_TimerFunction)


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_TimerFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_TimerFunction(UAbilityTask_TimerFunction&&) = delete; \
	UAbilityTask_TimerFunction(const UAbilityTask_TimerFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_TimerFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_TimerFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_TimerFunction) \
	NO_API virtual ~UAbilityTask_TimerFunction();


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_13_PROLOG
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_TimerFunction;

// ********** End Class UAbilityTask_TimerFunction *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_TimerFunction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
