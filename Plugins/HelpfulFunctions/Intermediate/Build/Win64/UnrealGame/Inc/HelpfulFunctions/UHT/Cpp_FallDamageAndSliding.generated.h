// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cpp_FallDamageAndSliding.h"

#ifdef HELPFULFUNCTIONS_Cpp_FallDamageAndSliding_generated_h
#error "Cpp_FallDamageAndSliding.generated.h already included, missing '#pragma once' in Cpp_FallDamageAndSliding.h"
#endif
#define HELPFULFUNCTIONS_Cpp_FallDamageAndSliding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ACharacter;
class UCharacterMovementComponent;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin ScriptStruct FCharMovementValues ***********************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharMovementValues_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


struct FCharMovementValues;
// ********** End ScriptStruct FCharMovementValues *************************************************

// ********** Begin ScriptStruct FSlidingConditionData *********************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlidingConditionData_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


struct FSlidingConditionData;
// ********** End ScriptStruct FSlidingConditionData ***********************************************

// ********** Begin Class UCpp_FallDamageAndSliding ************************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PrepareToSlidingC_Implementation(bool CanStart); \
	virtual bool SlidingConditionC_Implementation(); \
	DECLARE_FUNCTION(execPrepareToSlidingC); \
	DECLARE_FUNCTION(execSlidingConditionC); \
	DECLARE_FUNCTION(execCheckCanMantleOnEdge); \
	DECLARE_FUNCTION(execUpdateAngleCorrectDurningSliding); \
	DECLARE_FUNCTION(execUpdateCharWalkAngleDurningSliding); \
	DECLARE_FUNCTION(execUpdateCharFrictionDurningSliding); \
	DECLARE_FUNCTION(execCheckCanStartSlidingC); \
	DECLARE_FUNCTION(execSimpleTrajectoryC);


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_44_CALLBACK_WRAPPERS
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_FallDamageAndSliding_NoRegister();

#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCpp_FallDamageAndSliding(); \
	friend struct Z_Construct_UClass_UCpp_FallDamageAndSliding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_FallDamageAndSliding_NoRegister(); \
public: \
	DECLARE_CLASS2(UCpp_FallDamageAndSliding, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), Z_Construct_UClass_UCpp_FallDamageAndSliding_NoRegister) \
	DECLARE_SERIALIZER(UCpp_FallDamageAndSliding)


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCpp_FallDamageAndSliding(UCpp_FallDamageAndSliding&&) = delete; \
	UCpp_FallDamageAndSliding(const UCpp_FallDamageAndSliding&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCpp_FallDamageAndSliding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCpp_FallDamageAndSliding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCpp_FallDamageAndSliding) \
	NO_API virtual ~UCpp_FallDamageAndSliding();


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_41_PROLOG
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_44_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_44_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCpp_FallDamageAndSliding;

// ********** End Class UCpp_FallDamageAndSliding **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_FallDamageAndSliding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
