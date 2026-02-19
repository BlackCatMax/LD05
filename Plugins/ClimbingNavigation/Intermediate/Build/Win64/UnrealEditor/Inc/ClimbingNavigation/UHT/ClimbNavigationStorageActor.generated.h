// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClimbNavigationStorageActor.h"

#ifdef CLIMBINGNAVIGATION_ClimbNavigationStorageActor_generated_h
#error "ClimbNavigationStorageActor.generated.h already included, missing '#pragma once' in ClimbNavigationStorageActor.h"
#endif
#define CLIMBINGNAVIGATION_ClimbNavigationStorageActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FClimbNav_SingleClimbPoint;

// ********** Begin Class AClimbNavigationStorageActor *********************************************
#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLastBuildedPath); \
	DECLARE_FUNCTION(execFindNearestNavLedge); \
	DECLARE_FUNCTION(execFindPathBetweenClimbPoints);


CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_AClimbNavigationStorageActor_NoRegister();

#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClimbNavigationStorageActor(); \
	friend struct Z_Construct_UClass_AClimbNavigationStorageActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_AClimbNavigationStorageActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AClimbNavigationStorageActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClimbingNavigation"), Z_Construct_UClass_AClimbNavigationStorageActor_NoRegister) \
	DECLARE_SERIALIZER(AClimbNavigationStorageActor)


#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AClimbNavigationStorageActor(AClimbNavigationStorageActor&&) = delete; \
	AClimbNavigationStorageActor(const AClimbNavigationStorageActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClimbNavigationStorageActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClimbNavigationStorageActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AClimbNavigationStorageActor) \
	NO_API virtual ~AClimbNavigationStorageActor();


#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h_10_PROLOG
#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AClimbNavigationStorageActor;

// ********** End Class AClimbNavigationStorageActor ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbNavigationStorageActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
