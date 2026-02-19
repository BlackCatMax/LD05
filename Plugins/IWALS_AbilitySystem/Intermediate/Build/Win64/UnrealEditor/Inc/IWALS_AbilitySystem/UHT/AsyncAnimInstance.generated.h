// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncAnimInstance.h"

#ifdef IWALS_ABILITYSYSTEM_AsyncAnimInstance_generated_h
#error "AsyncAnimInstance.generated.h already included, missing '#pragma once' in AsyncAnimInstance.h"
#endif
#define IWALS_ABILITYSYSTEM_AsyncAnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAsyncAnimInstance *******************************************************
#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AsyncAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetNeedsUpdate); \
	DECLARE_FUNCTION(execSetNewCurveValue);


#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AsyncAnimInstance_h_15_CALLBACK_WRAPPERS
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UAsyncAnimInstance_NoRegister();

#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AsyncAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncAnimInstance(); \
	friend struct Z_Construct_UClass_UAsyncAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UAsyncAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IWALS_AbilitySystem"), Z_Construct_UClass_UAsyncAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(UAsyncAnimInstance)


#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AsyncAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncAnimInstance(UAsyncAnimInstance&&) = delete; \
	UAsyncAnimInstance(const UAsyncAnimInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncAnimInstance) \
	NO_API virtual ~UAsyncAnimInstance();


#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AsyncAnimInstance_h_12_PROLOG
#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AsyncAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AsyncAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AsyncAnimInstance_h_15_CALLBACK_WRAPPERS \
	FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AsyncAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AsyncAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncAnimInstance;

// ********** End Class UAsyncAnimInstance *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AsyncAnimInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
