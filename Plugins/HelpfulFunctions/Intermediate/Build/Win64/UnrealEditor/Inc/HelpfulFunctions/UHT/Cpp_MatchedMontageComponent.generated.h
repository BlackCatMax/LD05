// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cpp_MatchedMontageComponent.h"

#ifdef HELPFULFUNCTIONS_Cpp_MatchedMontageComponent_generated_h
#error "Cpp_MatchedMontageComponent.generated.h already included, missing '#pragma once' in Cpp_MatchedMontageComponent.h"
#endif
#define HELPFULFUNCTIONS_Cpp_MatchedMontageComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAnimMontage;
struct FMatchedMontageManyPoints;
struct FMatchedMontageTwoPoints;

// ********** Begin ScriptStruct FMatchedMontageTwoPoints ******************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


struct FMatchedMontageTwoPoints;
// ********** End ScriptStruct FMatchedMontageTwoPoints ********************************************

// ********** Begin ScriptStruct FMatchedMontageManyPoints *****************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


struct FMatchedMontageManyPoints;
// ********** End ScriptStruct FMatchedMontageManyPoints *******************************************

// ********** Begin ScriptStruct FMMEndingEvent ****************************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMMEndingEvent_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


struct FMMEndingEvent;
// ********** End ScriptStruct FMMEndingEvent ******************************************************

// ********** Begin Class UCpp_MatchedMontageComponent *********************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MatchingMotionNormalized_Implementation(float CurrentTime); \
	virtual void FinishMatchedMontageC_Implementation(); \
	DECLARE_FUNCTION(execMatchingMotionNormalized); \
	DECLARE_FUNCTION(execFinishMatchedMontageC); \
	DECLARE_FUNCTION(execExtractedInterpolationC); \
	DECLARE_FUNCTION(execGetCustomCurveValueC); \
	DECLARE_FUNCTION(execGetAnimCurveC); \
	DECLARE_FUNCTION(execPlayMatchedMontageTwoPointsC); \
	DECLARE_FUNCTION(execPlayMatchedMontageManyPointsC); \
	DECLARE_FUNCTION(execMatchingSinglePointsC); \
	DECLARE_FUNCTION(execMatchingMultiplePointsC);


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_120_CALLBACK_WRAPPERS
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_MatchedMontageComponent_NoRegister();

#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_120_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCpp_MatchedMontageComponent(); \
	friend struct Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_MatchedMontageComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCpp_MatchedMontageComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), Z_Construct_UClass_UCpp_MatchedMontageComponent_NoRegister) \
	DECLARE_SERIALIZER(UCpp_MatchedMontageComponent)


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_120_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCpp_MatchedMontageComponent(UCpp_MatchedMontageComponent&&) = delete; \
	UCpp_MatchedMontageComponent(const UCpp_MatchedMontageComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCpp_MatchedMontageComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCpp_MatchedMontageComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCpp_MatchedMontageComponent) \
	NO_API virtual ~UCpp_MatchedMontageComponent();


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_117_PROLOG
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_120_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_120_CALLBACK_WRAPPERS \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_120_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_120_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCpp_MatchedMontageComponent;

// ********** End Class UCpp_MatchedMontageComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
