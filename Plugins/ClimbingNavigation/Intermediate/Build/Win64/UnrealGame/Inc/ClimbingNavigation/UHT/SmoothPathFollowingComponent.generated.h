// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmoothPathFollowingComponent.h"

#ifdef CLIMBINGNAVIGATION_SmoothPathFollowingComponent_generated_h
#error "SmoothPathFollowingComponent.generated.h already included, missing '#pragma once' in SmoothPathFollowingComponent.h"
#endif
#define CLIMBINGNAVIGATION_SmoothPathFollowingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USmoothPathFollowingComponent ********************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisableRoundingPath); \
	DECLARE_FUNCTION(execCalculateTangentCircle); \
	DECLARE_FUNCTION(execResumePausedMove); \
	DECLARE_FUNCTION(execPauseCurrentMove);


CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_USmoothPathFollowingComponent_NoRegister();

#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmoothPathFollowingComponent(); \
	friend struct Z_Construct_UClass_USmoothPathFollowingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_USmoothPathFollowingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USmoothPathFollowingComponent, UPathFollowingComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClimbingNavigation"), Z_Construct_UClass_USmoothPathFollowingComponent_NoRegister) \
	DECLARE_SERIALIZER(USmoothPathFollowingComponent)


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USmoothPathFollowingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USmoothPathFollowingComponent(USmoothPathFollowingComponent&&) = delete; \
	USmoothPathFollowingComponent(const USmoothPathFollowingComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmoothPathFollowingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmoothPathFollowingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmoothPathFollowingComponent) \
	NO_API virtual ~USmoothPathFollowingComponent();


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h_12_PROLOG
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USmoothPathFollowingComponent;

// ********** End Class USmoothPathFollowingComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_SmoothPathFollowingComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
