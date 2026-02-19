// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JakubCablePhysic.h"

#ifdef JAKUBCABLECOMPONENT_JakubCablePhysic_generated_h
#error "JakubCablePhysic.generated.h already included, missing '#pragma once' in JakubCablePhysic.h"
#endif
#define JAKUBCABLECOMPONENT_JakubCablePhysic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class USceneComponent;
struct FCableAttachPoint;
struct FExposedCableParticle;

// ********** Begin ScriptStruct FCableAttachPoint *************************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCableAttachPoint_Statics; \
	JAKUBCABLECOMPONENT_API static class UScriptStruct* StaticStruct();


struct FCableAttachPoint;
// ********** End ScriptStruct FCableAttachPoint ***************************************************

// ********** Begin ScriptStruct FExposedCableParticle *********************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExposedCableParticle_Statics; \
	JAKUBCABLECOMPONENT_API static class UScriptStruct* StaticStruct();


struct FExposedCableParticle;
// ********** End ScriptStruct FExposedCableParticle ***********************************************

// ********** Begin Class UJakubCablePhysic ********************************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_66_RPC_WRAPPERS \
	DECLARE_FUNCTION(execReduceForceForParticles); \
	DECLARE_FUNCTION(execUseForceToTightenTheRope); \
	DECLARE_FUNCTION(execGetAnyPointIsColliding); \
	DECLARE_FUNCTION(execBreakAttachIfSegmentIsStretched); \
	DECLARE_FUNCTION(execGetStretchTolleranceValuePerSegment); \
	DECLARE_FUNCTION(execUpdateCableLength); \
	DECLARE_FUNCTION(execSetParticleLocation); \
	DECLARE_FUNCTION(execGetCableSpaceLenghtForSwinging); \
	DECLARE_FUNCTION(execApplyConstForceToParticle); \
	DECLARE_FUNCTION(execAddImpulseToParticle); \
	DECLARE_FUNCTION(execUpdateSubstepTime); \
	DECLARE_FUNCTION(execGetIndicesOfAttachedPoints); \
	DECLARE_FUNCTION(execGetCableCurrentSegmentsLength); \
	DECLARE_FUNCTION(execGetCableInitSegmentsLength); \
	DECLARE_FUNCTION(execGetCableParticlesStructure); \
	DECLARE_FUNCTION(execGetCableParticleLocations); \
	DECLARE_FUNCTION(execDetachParticleFrom); \
	DECLARE_FUNCTION(execGetAttachStructure); \
	DECLARE_FUNCTION(execGetAttachedActors); \
	DECLARE_FUNCTION(execSetAttachIndexToActor); \
	DECLARE_FUNCTION(execSetAttachIndexToComponent);


JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UJakubCablePhysic_NoRegister();

#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUJakubCablePhysic(); \
	friend struct Z_Construct_UClass_UJakubCablePhysic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UJakubCablePhysic_NoRegister(); \
public: \
	DECLARE_CLASS2(UJakubCablePhysic, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JakubCableComponent"), Z_Construct_UClass_UJakubCablePhysic_NoRegister) \
	DECLARE_SERIALIZER(UJakubCablePhysic)


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJakubCablePhysic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJakubCablePhysic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJakubCablePhysic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJakubCablePhysic); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UJakubCablePhysic(UJakubCablePhysic&&) = delete; \
	UJakubCablePhysic(const UJakubCablePhysic&) = delete; \
	NO_API virtual ~UJakubCablePhysic();


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_63_PROLOG
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_66_RPC_WRAPPERS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_66_INCLASS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UJakubCablePhysic;

// ********** End Class UJakubCablePhysic **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
