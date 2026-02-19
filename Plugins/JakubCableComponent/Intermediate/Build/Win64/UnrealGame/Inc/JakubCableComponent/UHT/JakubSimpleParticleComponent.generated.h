// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JakubSimpleParticleComponent.h"

#ifdef JAKUBCABLECOMPONENT_JakubSimpleParticleComponent_generated_h
#error "JakubSimpleParticleComponent.generated.h already included, missing '#pragma once' in JakubSimpleParticleComponent.h"
#endif
#define JAKUBCABLECOMPONENT_JakubSimpleParticleComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class USceneComponent;
enum class EAttachmentRule : uint8;

// ********** Begin Class UJakubSimpleParticleComponent ********************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubSimpleParticleComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindBetweenNormals); \
	DECLARE_FUNCTION(execSetAttachToParticleOffset); \
	DECLARE_FUNCTION(execAttachComponentToParticle); \
	DECLARE_FUNCTION(execGetParticleCurrentLocation);


JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UJakubSimpleParticleComponent_NoRegister();

#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubSimpleParticleComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJakubSimpleParticleComponent(); \
	friend struct Z_Construct_UClass_UJakubSimpleParticleComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UJakubSimpleParticleComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UJakubSimpleParticleComponent, UArrowComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JakubCableComponent"), Z_Construct_UClass_UJakubSimpleParticleComponent_NoRegister) \
	DECLARE_SERIALIZER(UJakubSimpleParticleComponent)


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubSimpleParticleComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UJakubSimpleParticleComponent(UJakubSimpleParticleComponent&&) = delete; \
	UJakubSimpleParticleComponent(const UJakubSimpleParticleComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJakubSimpleParticleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJakubSimpleParticleComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UJakubSimpleParticleComponent) \
	NO_API virtual ~UJakubSimpleParticleComponent();


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubSimpleParticleComponent_h_13_PROLOG
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubSimpleParticleComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubSimpleParticleComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubSimpleParticleComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubSimpleParticleComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UJakubSimpleParticleComponent;

// ********** End Class UJakubSimpleParticleComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubSimpleParticleComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
