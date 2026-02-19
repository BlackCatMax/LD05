// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IWALS_AbilityInterface.h"

#ifdef IWALS_ABILITYSYSTEM_IWALS_AbilityInterface_generated_h
#error "IWALS_AbilityInterface.generated.h already included, missing '#pragma once' in IWALS_AbilityInterface.h"
#endif
#define IWALS_ABILITYSYSTEM_IWALS_AbilityInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UIWALS_AbilityInterface **********************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GASBPI_CallToCurrentActivatedAbility_Implementation(int32 EventID) {}; \
	DECLARE_FUNCTION(execGASBPI_CallToCurrentActivatedAbility);


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_CALLBACK_WRAPPERS
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_AbilityInterface_NoRegister();

#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IWALS_ABILITYSYSTEM_API UIWALS_AbilityInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIWALS_AbilityInterface(UIWALS_AbilityInterface&&) = delete; \
	UIWALS_AbilityInterface(const UIWALS_AbilityInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IWALS_ABILITYSYSTEM_API, UIWALS_AbilityInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIWALS_AbilityInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIWALS_AbilityInterface) \
	virtual ~UIWALS_AbilityInterface() = default;


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIWALS_AbilityInterface(); \
	friend struct Z_Construct_UClass_UIWALS_AbilityInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_AbilityInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UIWALS_AbilityInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/IWALS_AbilitySystem"), Z_Construct_UClass_UIWALS_AbilityInterface_NoRegister) \
	DECLARE_SERIALIZER(UIWALS_AbilityInterface)


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIWALS_AbilityInterface() {} \
public: \
	typedef UIWALS_AbilityInterface UClassType; \
	typedef IIWALS_AbilityInterface ThisClass; \
	static void Execute_GASBPI_CallToCurrentActivatedAbility(UObject* O, int32 EventID); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_10_PROLOG
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIWALS_AbilityInterface;

// ********** End Interface UIWALS_AbilityInterface ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
