// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ALS_BaseAI_CharacterCpp.h"

#ifdef HELPFULFUNCTIONS_ALS_BaseAI_CharacterCpp_generated_h
#error "ALS_BaseAI_CharacterCpp.generated.h already included, missing '#pragma once' in ALS_BaseAI_CharacterCpp.h"
#endif
#define HELPFULFUNCTIONS_ALS_BaseAI_CharacterCpp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class CALS_Gait : uint8;
struct FCALSMovementSettings;

// ********** Begin ScriptStruct FCALSMovementSettings *********************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCALSMovementSettings_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


struct FCALSMovementSettings;
// ********** End ScriptStruct FCALSMovementSettings ***********************************************

// ********** Begin Class AALS_BaseAI_CharacterCpp *************************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActualGaitFast); \
	DECLARE_FUNCTION(execGetAllowedGaitFast); \
	DECLARE_FUNCTION(execUpdateMovementSettings); \
	DECLARE_FUNCTION(execCalcCanSprint); \
	DECLARE_FUNCTION(execGetMappedSpeedFast); \
	DECLARE_FUNCTION(execCalcGroundedRotationRate); \
	DECLARE_FUNCTION(execCanUpdateRotation); \
	DECLARE_FUNCTION(execLimitRotationFast); \
	DECLARE_FUNCTION(execSmoothedCharRotation); \
	DECLARE_FUNCTION(execCalculateGroundedRotation); \
	DECLARE_FUNCTION(execCalculateAimingRotatation); \
	DECLARE_FUNCTION(execIsCharacter);


HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AALS_BaseAI_CharacterCpp_NoRegister();

#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAALS_BaseAI_CharacterCpp(); \
	friend struct Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AALS_BaseAI_CharacterCpp_NoRegister(); \
public: \
	DECLARE_CLASS2(AALS_BaseAI_CharacterCpp, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), Z_Construct_UClass_AALS_BaseAI_CharacterCpp_NoRegister) \
	DECLARE_SERIALIZER(AALS_BaseAI_CharacterCpp) \
	virtual UObject* _getUObject() const override { return const_cast<AALS_BaseAI_CharacterCpp*>(this); }


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_39_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AALS_BaseAI_CharacterCpp(AALS_BaseAI_CharacterCpp&&) = delete; \
	AALS_BaseAI_CharacterCpp(const AALS_BaseAI_CharacterCpp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AALS_BaseAI_CharacterCpp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AALS_BaseAI_CharacterCpp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AALS_BaseAI_CharacterCpp) \
	NO_API virtual ~AALS_BaseAI_CharacterCpp();


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_36_PROLOG
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_39_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AALS_BaseAI_CharacterCpp;

// ********** End Class AALS_BaseAI_CharacterCpp ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
