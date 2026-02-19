// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityTask_MoveByInputComplex.h"

#ifdef IWALS_ABILITYSYSTEM_AbilityTask_MoveByInputComplex_generated_h
#error "AbilityTask_MoveByInputComplex.generated.h already included, missing '#pragma once' in AbilityTask_MoveByInputComplex.h"
#endif
#define IWALS_ABILITYSYSTEM_AbilityTask_MoveByInputComplex_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAbilityTask_MoveByInputComplex;
class UGameplayAbility;

// ********** Begin Delegate FOnDurningMove3 *******************************************************
#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputComplex_h_12_DELEGATE \
IWALS_ABILITYSYSTEM_API void FOnDurningMove3_DelegateWrapper(const FMulticastScriptDelegate& OnDurningMove3, float Time);


// ********** End Delegate FOnDurningMove3 *********************************************************

// ********** Begin Delegate FOnTargetLocationReached3 *********************************************
#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputComplex_h_13_DELEGATE \
IWALS_ABILITYSYSTEM_API void FOnTargetLocationReached3_DelegateWrapper(const FMulticastScriptDelegate& OnTargetLocationReached3, float Time);


// ********** End Delegate FOnTargetLocationReached3 ***********************************************

// ********** Begin Delegate FOnFailed3 ************************************************************
#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputComplex_h_14_DELEGATE \
IWALS_ABILITYSYSTEM_API void FOnFailed3_DelegateWrapper(const FMulticastScriptDelegate& OnFailed3, float Time);


// ********** End Delegate FOnFailed3 **************************************************************

// ********** Begin Delegate FOnStopped3 ***********************************************************
#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputComplex_h_15_DELEGATE \
IWALS_ABILITYSYSTEM_API void FOnStopped3_DelegateWrapper(const FMulticastScriptDelegate& OnStopped3, float Time);


// ********** End Delegate FOnStopped3 *************************************************************

// ********** Begin Class UAbilityTask_MoveByInputComplex ******************************************
#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputComplex_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMovePawnByInputWithStop);


IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UAbilityTask_MoveByInputComplex_NoRegister();

#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputComplex_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_MoveByInputComplex(); \
	friend struct Z_Construct_UClass_UAbilityTask_MoveByInputComplex_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UAbilityTask_MoveByInputComplex_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_MoveByInputComplex, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IWALS_AbilitySystem"), Z_Construct_UClass_UAbilityTask_MoveByInputComplex_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_MoveByInputComplex)


#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputComplex_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_MoveByInputComplex(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_MoveByInputComplex(UAbilityTask_MoveByInputComplex&&) = delete; \
	UAbilityTask_MoveByInputComplex(const UAbilityTask_MoveByInputComplex&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_MoveByInputComplex); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_MoveByInputComplex); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_MoveByInputComplex) \
	NO_API virtual ~UAbilityTask_MoveByInputComplex();


#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputComplex_h_37_PROLOG
#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputComplex_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputComplex_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputComplex_h_40_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputComplex_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_MoveByInputComplex;

// ********** End Class UAbilityTask_MoveByInputComplex ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MoveByInputComplex_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
