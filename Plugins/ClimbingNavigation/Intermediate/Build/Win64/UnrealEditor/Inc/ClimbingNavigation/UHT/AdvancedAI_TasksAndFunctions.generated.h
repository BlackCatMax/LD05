// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AdvancedAI_TasksAndFunctions.h"

#ifdef CLIMBINGNAVIGATION_AdvancedAI_TasksAndFunctions_generated_h
#error "AdvancedAI_TasksAndFunctions.generated.h already included, missing '#pragma once' in AdvancedAI_TasksAndFunctions.h"
#endif
#define CLIMBINGNAVIGATION_AdvancedAI_TasksAndFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 
class AActor;
class ACharacter;
class AClimbNavigationStorageActor;
class UHidingLocSearch_EnemyProperties;
class UNavQuery_FullNavPathFinding;
class UNavQuery_HidingLocSearchParams;
struct FClimbNav_FullPathData;

// ********** Begin Class UAdvancedAI_TasksAndFunctions ********************************************
#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrawResultFromTotalNavPath); \
	DECLARE_FUNCTION(execTryFindPathToActorIncludingNavClimb); \
	DECLARE_FUNCTION(execDetectedByFakeSightPerception); \
	DECLARE_FUNCTION(execTryFindHindingPositionSyncAdvanced); \
	DECLARE_FUNCTION(execTryFindHindingPositionSync);


CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_NoRegister();

#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedAI_TasksAndFunctions(); \
	friend struct Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UAdvancedAI_TasksAndFunctions, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClimbingNavigation"), Z_Construct_UClass_UAdvancedAI_TasksAndFunctions_NoRegister) \
	DECLARE_SERIALIZER(UAdvancedAI_TasksAndFunctions)


#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAdvancedAI_TasksAndFunctions(UAdvancedAI_TasksAndFunctions&&) = delete; \
	UAdvancedAI_TasksAndFunctions(const UAdvancedAI_TasksAndFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedAI_TasksAndFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedAI_TasksAndFunctions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAdvancedAI_TasksAndFunctions) \
	NO_API virtual ~UAdvancedAI_TasksAndFunctions();


#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h_40_PROLOG
#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h_43_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAdvancedAI_TasksAndFunctions;

// ********** End Class UAdvancedAI_TasksAndFunctions **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AdvancedAI_TasksAndFunctions_h

// ********** Begin Enum CoverPointFinderWeightDebugMode *******************************************
#define FOREACH_ENUM_COVERPOINTFINDERWEIGHTDEBUGMODE(op) \
	op(CoverPointFinderWeightDebugMode::Default) \
	op(CoverPointFinderWeightDebugMode::Total) \
	op(CoverPointFinderWeightDebugMode::DistanceToPoint) \
	op(CoverPointFinderWeightDebugMode::DistanceToEnemy) \
	op(CoverPointFinderWeightDebugMode::ReachOrigin) \
	op(CoverPointFinderWeightDebugMode::PointAngle) \
	op(CoverPointFinderWeightDebugMode::SimpleWallHit) 

enum class CoverPointFinderWeightDebugMode : uint8;
template<> struct TIsUEnumClass<CoverPointFinderWeightDebugMode> { enum { Value = true }; };
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<CoverPointFinderWeightDebugMode>();
// ********** End Enum CoverPointFinderWeightDebugMode *********************************************

// ********** Begin Enum CoverPointFinderFilterDebugMode *******************************************
#define FOREACH_ENUM_COVERPOINTFINDERFILTERDEBUGMODE(op) \
	op(CoverPointFinderFilterDebugMode::PointWeightOnly) \
	op(CoverPointFinderFilterDebugMode::PointAndPathWeight) \
	op(CoverPointFinderFilterDebugMode::InSightRangeFilter) \
	op(CoverPointFinderFilterDebugMode::DistanceToEnemy) \
	op(CoverPointFinderFilterDebugMode::None) 

enum class CoverPointFinderFilterDebugMode : uint8;
template<> struct TIsUEnumClass<CoverPointFinderFilterDebugMode> { enum { Value = true }; };
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<CoverPointFinderFilterDebugMode>();
// ********** End Enum CoverPointFinderFilterDebugMode *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
