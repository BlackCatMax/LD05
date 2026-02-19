// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IWALS_BaseAttributeSet.h"

#ifdef IWALS_ABILITYSYSTEM_IWALS_BaseAttributeSet_generated_h
#error "IWALS_BaseAttributeSet.generated.h already included, missing '#pragma once' in IWALS_BaseAttributeSet.h"
#endif
#define IWALS_ABILITYSYSTEM_IWALS_BaseAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayAttributeData;

// ********** Begin Class UIWALS_BaseAttributeSet **************************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Experience); \
	DECLARE_FUNCTION(execOnRep_AttackMultiply); \
	DECLARE_FUNCTION(execOnRep_Armor); \
	DECLARE_FUNCTION(execOnRep_Health);


IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_BaseAttributeSet_NoRegister();

#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIWALS_BaseAttributeSet(); \
	friend struct Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_BaseAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UIWALS_BaseAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IWALS_AbilitySystem"), Z_Construct_UClass_UIWALS_BaseAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UIWALS_BaseAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		Armor, \
		AttackMultiply, \
		Experience, \
		NETFIELD_REP_END=Experience	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UIWALS_BaseAttributeSet) \
public:


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIWALS_BaseAttributeSet(UIWALS_BaseAttributeSet&&) = delete; \
	UIWALS_BaseAttributeSet(const UIWALS_BaseAttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIWALS_BaseAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIWALS_BaseAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIWALS_BaseAttributeSet) \
	NO_API virtual ~UIWALS_BaseAttributeSet();


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h_18_PROLOG
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h_21_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIWALS_BaseAttributeSet;

// ********** End Class UIWALS_BaseAttributeSet ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
