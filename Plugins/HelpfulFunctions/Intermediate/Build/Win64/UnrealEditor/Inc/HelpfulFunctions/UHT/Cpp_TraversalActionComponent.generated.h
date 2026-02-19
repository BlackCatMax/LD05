// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cpp_TraversalActionComponent.h"

#ifdef HELPFULFUNCTIONS_Cpp_TraversalActionComponent_generated_h
#error "Cpp_TraversalActionComponent.generated.h already included, missing '#pragma once' in Cpp_TraversalActionComponent.h"
#endif
#define HELPFULFUNCTIONS_Cpp_TraversalActionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 struct FTraversalStateEvaluation;
class ACharacter;
class UAnimMontage;
class UCpp_TraversalActionComponent;
class UObject;
class UPrimitiveComponent;
class UTraversalActionsParamsData;
enum class CALS_MantleType : uint8;
struct FCALS_ComponentAndTransform;
struct FTraversalCollisionCheck;
struct FTraversalTraceSettings;

// ********** Begin ScriptStruct FTraversalCollisionCheck ******************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTraversalCollisionCheck_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


struct FTraversalCollisionCheck;
// ********** End ScriptStruct FTraversalCollisionCheck ********************************************

// ********** Begin ScriptStruct FTraversalChooserValues *******************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTraversalChooserValues_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


struct FTraversalChooserValues;
// ********** End ScriptStruct FTraversalChooserValues *********************************************

// ********** Begin ScriptStruct FTraversalTraceSettings *******************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTraversalTraceSettings_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


struct FTraversalTraceSettings;
// ********** End ScriptStruct FTraversalTraceSettings *********************************************

// ********** Begin ScriptStruct FTraversalGroundInfo **********************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTraversalGroundInfo_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


struct FTraversalGroundInfo;
// ********** End ScriptStruct FTraversalGroundInfo ************************************************

// ********** Begin ScriptStruct FTraversalJumpTrajectory ******************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_164_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTraversalJumpTrajectory_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


struct FTraversalJumpTrajectory;
// ********** End ScriptStruct FTraversalJumpTrajectory ********************************************

// ********** Begin ScriptStruct FMantleChooserValues **********************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_194_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMantleChooserValues_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


struct FMantleChooserValues;
// ********** End ScriptStruct FMantleChooserValues ************************************************

// ********** Begin Delegate FOnTraversalActionChanged *********************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_218_DELEGATE \
HELPFULFUNCTIONS_API void FOnTraversalActionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTraversalActionChanged, bool ActionStarted, float ActionDuration);


// ********** End Delegate FOnTraversalActionChanged ***********************************************

// ********** Begin Class UCpp_TraversalActionComponent ********************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_224_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTryGetTraversalComponent); \
	DECLARE_FUNCTION(execUpdateOffsetsForCharacter); \
	DECLARE_FUNCTION(execToCapsuleLocation); \
	DECLARE_FUNCTION(execGetLocationFromBase); \
	DECLARE_FUNCTION(execNormalizeLedgeToObjectCenter); \
	DECLARE_FUNCTION(execChooseTraversalActionState); \
	DECLARE_FUNCTION(execConvertStatesDataAssetToMap); \
	DECLARE_FUNCTION(execMantleStart); \
	DECLARE_FUNCTION(execMantleStop); \
	DECLARE_FUNCTION(execCheckAndStartMantle); \
	DECLARE_FUNCTION(execCheckMantle); \
	DECLARE_FUNCTION(execUpdateTraveralStatesData); \
	DECLARE_FUNCTION(execPredictableJumpStop); \
	DECLARE_FUNCTION(execTryActivatePredictableJump); \
	DECLARE_FUNCTION(execPlayTraversalAnimAction); \
	DECLARE_FUNCTION(execTryActivateTraversalForClimb); \
	DECLARE_FUNCTION(execTryActivateTraversalAction); \
	DECLARE_FUNCTION(execGetPlayerMovementInput); \
	DECLARE_FUNCTION(execGetReachOffset); \
	DECLARE_FUNCTION(execCalculateLandPositionForJump); \
	DECLARE_FUNCTION(execCheckTraversalActionFast); \
	DECLARE_FUNCTION(execCallOnTraversalDeleage);


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_224_CALLBACK_WRAPPERS
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_TraversalActionComponent_NoRegister();

#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_224_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCpp_TraversalActionComponent(); \
	friend struct Z_Construct_UClass_UCpp_TraversalActionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_TraversalActionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCpp_TraversalActionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), Z_Construct_UClass_UCpp_TraversalActionComponent_NoRegister) \
	DECLARE_SERIALIZER(UCpp_TraversalActionComponent)


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_224_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCpp_TraversalActionComponent(UCpp_TraversalActionComponent&&) = delete; \
	UCpp_TraversalActionComponent(const UCpp_TraversalActionComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCpp_TraversalActionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCpp_TraversalActionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCpp_TraversalActionComponent) \
	NO_API virtual ~UCpp_TraversalActionComponent();


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_221_PROLOG
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_224_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_224_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_224_CALLBACK_WRAPPERS \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_224_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h_224_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCpp_TraversalActionComponent;

// ********** End Class UCpp_TraversalActionComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_TraversalActionComponent_h

// ********** Begin Enum CALS_TraversalAction ******************************************************
#define FOREACH_ENUM_CALS_TRAVERSALACTION(op) \
	op(CALS_TraversalAction::None) \
	op(CALS_TraversalAction::Hurdle) \
	op(CALS_TraversalAction::Vault) \
	op(CALS_TraversalAction::Mantle) \
	op(CALS_TraversalAction::HighVault) \
	op(CALS_TraversalAction::ToLedgeHold) 

enum class CALS_TraversalAction : uint8;
template<> struct TIsUEnumClass<CALS_TraversalAction> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_TraversalAction>();
// ********** End Enum CALS_TraversalAction ********************************************************

// ********** Begin Enum CALS_MantleType ***********************************************************
#define FOREACH_ENUM_CALS_MANTLETYPE(op) \
	op(CALS_MantleType::HighMantle) \
	op(CALS_MantleType::LowMantle) \
	op(CALS_MantleType::FallingCatch) \
	op(CALS_MantleType::None) 

enum class CALS_MantleType : uint8;
template<> struct TIsUEnumClass<CALS_MantleType> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_MantleType>();
// ********** End Enum CALS_MantleType *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
