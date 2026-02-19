// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IWALS_GameplayAbilitySet.h"

#ifdef IWALS_ABILITYSYSTEM_IWALS_GameplayAbilitySet_generated_h
#error "IWALS_GameplayAbilitySet.generated.h already included, missing '#pragma once' in IWALS_GameplayAbilitySet.h"
#endif
#define IWALS_ABILITYSYSTEM_IWALS_GameplayAbilitySet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayAbilityBindIWALS *****************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbilitySet_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityBindIWALS_Statics; \
	IWALS_ABILITYSYSTEM_API static class UScriptStruct* StaticStruct();


struct FGameplayAbilityBindIWALS;
// ********** End ScriptStruct FGameplayAbilityBindIWALS *******************************************

// ********** Begin Class UIWALS_GameplayAbilitySet ************************************************
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_GameplayAbilitySet_NoRegister();

#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbilitySet_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUIWALS_GameplayAbilitySet(); \
	friend struct Z_Construct_UClass_UIWALS_GameplayAbilitySet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_GameplayAbilitySet_NoRegister(); \
public: \
	DECLARE_CLASS2(UIWALS_GameplayAbilitySet, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IWALS_AbilitySystem"), Z_Construct_UClass_UIWALS_GameplayAbilitySet_NoRegister) \
	DECLARE_SERIALIZER(UIWALS_GameplayAbilitySet)


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbilitySet_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIWALS_GameplayAbilitySet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIWALS_GameplayAbilitySet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIWALS_GameplayAbilitySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIWALS_GameplayAbilitySet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIWALS_GameplayAbilitySet(UIWALS_GameplayAbilitySet&&) = delete; \
	UIWALS_GameplayAbilitySet(const UIWALS_GameplayAbilitySet&) = delete; \
	NO_API virtual ~UIWALS_GameplayAbilitySet();


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbilitySet_h_56_PROLOG
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbilitySet_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbilitySet_h_59_INCLASS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbilitySet_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIWALS_GameplayAbilitySet;

// ********** End Class UIWALS_GameplayAbilitySet **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbilitySet_h

// ********** Begin Enum EIWALS_AbilityInputBinds **************************************************
#define FOREACH_ENUM_EIWALS_ABILITYINPUTBINDS(op) \
	op(EIWALS_AbilityInputBinds::None0) \
	op(EIWALS_AbilityInputBinds::JumpAction) \
	op(EIWALS_AbilityInputBinds::StanceAction) \
	op(EIWALS_AbilityInputBinds::SprintAction) \
	op(EIWALS_AbilityInputBinds::WalkAction) \
	op(EIWALS_AbilityInputBinds::AimAction) \
	op(EIWALS_AbilityInputBinds::Interaction) \
	op(EIWALS_AbilityInputBinds::Shot) \
	op(EIWALS_AbilityInputBinds::Reload) \
	op(EIWALS_AbilityInputBinds::AimActionType_2) 

namespace EIWALS_AbilityInputBinds { enum Type : int; }
template<> IWALS_ABILITYSYSTEM_API UEnum* StaticEnum<EIWALS_AbilityInputBinds::Type>();
// ********** End Enum EIWALS_AbilityInputBinds ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
