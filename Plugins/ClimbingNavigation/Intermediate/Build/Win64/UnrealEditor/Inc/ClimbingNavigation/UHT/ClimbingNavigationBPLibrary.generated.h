// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClimbingNavigationBPLibrary.h"

#ifdef CLIMBINGNAVIGATION_ClimbingNavigationBPLibrary_generated_h
#error "ClimbingNavigationBPLibrary.generated.h already included, missing '#pragma once' in ClimbingNavigationBPLibrary.h"
#endif
#define CLIMBINGNAVIGATION_ClimbingNavigationBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AClimbNavigationStorageActor;
class UObject;
class UPathFollowingComponent;
struct FClimbNav_SingleClimbPoint;
struct FLinearColor;
struct FNavEdgeParams;

// ********** Begin ScriptStruct FClimbNav_OtherPointParams ****************************************
#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClimbNav_OtherPointParams_Statics; \
	CLIMBINGNAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FClimbNav_OtherPointParams;
// ********** End ScriptStruct FClimbNav_OtherPointParams ******************************************

// ********** Begin ScriptStruct FClimbNav_SingleClimbPoint ****************************************
#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClimbNav_SingleClimbPoint_Statics; \
	CLIMBINGNAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FClimbNav_SingleClimbPoint;
// ********** End ScriptStruct FClimbNav_SingleClimbPoint ******************************************

// ********** Begin ScriptStruct FClimbNav_InitialLedgeParams **************************************
#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClimbNav_InitialLedgeParams_Statics; \
	CLIMBINGNAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FClimbNav_InitialLedgeParams;
// ********** End ScriptStruct FClimbNav_InitialLedgeParams ****************************************

// ********** Begin ScriptStruct FClimbNav_SplineLedgeParams ***************************************
#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClimbNav_SplineLedgeParams_Statics; \
	CLIMBINGNAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FClimbNav_SplineLedgeParams;
// ********** End ScriptStruct FClimbNav_SplineLedgeParams *****************************************

// ********** Begin ScriptStruct FNavEdgeParams ****************************************************
#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavEdgeParams_Statics; \
	CLIMBINGNAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FNavEdgeParams;
// ********** End ScriptStruct FNavEdgeParams ******************************************************

// ********** Begin ScriptStruct FClimbNav_FullPathData ********************************************
#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClimbNav_FullPathData_Statics; \
	CLIMBINGNAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FClimbNav_FullPathData;
// ********** End ScriptStruct FClimbNav_FullPathData **********************************************

// ********** Begin Class UClimbingNavigationBPLibrary *********************************************
#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_194_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetPathFollowingCurrentNavCost); \
	DECLARE_FUNCTION(execGetPathFollowingSegmentIsNavLink); \
	DECLARE_FUNCTION(execGetPathFollowingNavLinkMove); \
	DECLARE_FUNCTION(execGetPathFollowingHasPartialPath); \
	DECLARE_FUNCTION(execGetPathFollowingAcceptanceRadius); \
	DECLARE_FUNCTION(execSetPathFollowingAcceptanceRadius); \
	DECLARE_FUNCTION(execDoesLineIntersectBox); \
	DECLARE_FUNCTION(execFindExternalEdgesInBox); \
	DECLARE_FUNCTION(execFindClosestNavMeshEdge); \
	DECLARE_FUNCTION(execFindClosestEdgeOnNavMesh); \
	DECLARE_FUNCTION(execIsPointOnSegment); \
	DECLARE_FUNCTION(execDrawDebugArc); \
	DECLARE_FUNCTION(execDrawDebugPartCylinder); \
	DECLARE_FUNCTION(execIsPointInsideCylinderSegment); \
	DECLARE_FUNCTION(execTryFindPathForClimbNav);


CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UClimbingNavigationBPLibrary_NoRegister();

#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_194_INCLASS \
private: \
	static void StaticRegisterNativesUClimbingNavigationBPLibrary(); \
	friend struct Z_Construct_UClass_UClimbingNavigationBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UClimbingNavigationBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UClimbingNavigationBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClimbingNavigation"), Z_Construct_UClass_UClimbingNavigationBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UClimbingNavigationBPLibrary)


#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_194_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClimbingNavigationBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClimbingNavigationBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClimbingNavigationBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClimbingNavigationBPLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClimbingNavigationBPLibrary(UClimbingNavigationBPLibrary&&) = delete; \
	UClimbingNavigationBPLibrary(const UClimbingNavigationBPLibrary&) = delete; \
	NO_API virtual ~UClimbingNavigationBPLibrary();


#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_191_PROLOG
#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_194_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_194_RPC_WRAPPERS \
	FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_194_INCLASS \
	FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h_194_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClimbingNavigationBPLibrary;

// ********** End Class UClimbingNavigationBPLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_ClimbingNavigationBPLibrary_h

// ********** Begin Enum EClimbMovementDirection ***************************************************
#define FOREACH_ENUM_ECLIMBMOVEMENTDIRECTION(op) \
	op(EClimbMovementDirection::Up) \
	op(EClimbMovementDirection::Right) \
	op(EClimbMovementDirection::Left) \
	op(EClimbMovementDirection::Down) 

enum class EClimbMovementDirection : uint8;
template<> struct TIsUEnumClass<EClimbMovementDirection> { enum { Value = true }; };
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<EClimbMovementDirection>();
// ********** End Enum EClimbMovementDirection *****************************************************

// ********** Begin Enum ENavClimbActionState ******************************************************
#define FOREACH_ENUM_ENAVCLIMBACTIONSTATE(op) \
	op(ENavClimbActionState::None) \
	op(ENavClimbActionState::WalkCycle) \
	op(ENavClimbActionState::ShortJump) \
	op(ENavClimbActionState::LongJump) \
	op(ENavClimbActionState::StartClimb) \
	op(ENavClimbActionState::JumpBack) 

enum class ENavClimbActionState : uint8;
template<> struct TIsUEnumClass<ENavClimbActionState> { enum { Value = true }; };
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<ENavClimbActionState>();
// ********** End Enum ENavClimbActionState ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
