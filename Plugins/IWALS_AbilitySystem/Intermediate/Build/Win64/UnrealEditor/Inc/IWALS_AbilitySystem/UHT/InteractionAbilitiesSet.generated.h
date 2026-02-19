// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionAbilitiesSet.h"

#ifdef IWALS_ABILITYSYSTEM_InteractionAbilitiesSet_generated_h
#error "InteractionAbilitiesSet.generated.h already included, missing '#pragma once' in InteractionAbilitiesSet.h"
#endif
#define IWALS_ABILITYSYSTEM_InteractionAbilitiesSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInteractionAbilitiesSet *************************************************
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UInteractionAbilitiesSet_NoRegister();

#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_InteractionAbilitiesSet_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionAbilitiesSet(); \
	friend struct Z_Construct_UClass_UInteractionAbilitiesSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UInteractionAbilitiesSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractionAbilitiesSet, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IWALS_AbilitySystem"), Z_Construct_UClass_UInteractionAbilitiesSet_NoRegister) \
	DECLARE_SERIALIZER(UInteractionAbilitiesSet)


#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_InteractionAbilitiesSet_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionAbilitiesSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractionAbilitiesSet(UInteractionAbilitiesSet&&) = delete; \
	UInteractionAbilitiesSet(const UInteractionAbilitiesSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionAbilitiesSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionAbilitiesSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionAbilitiesSet) \
	NO_API virtual ~UInteractionAbilitiesSet();


#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_InteractionAbilitiesSet_h_13_PROLOG
#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_InteractionAbilitiesSet_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_InteractionAbilitiesSet_h_16_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_InteractionAbilitiesSet_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractionAbilitiesSet;

// ********** End Class UInteractionAbilitiesSet ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_InteractionAbilitiesSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
