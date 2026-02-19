// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JWAN_ModifyLayeringLogic.h"

#ifdef JAKUBANIMNODESTOOL_JWAN_ModifyLayeringLogic_generated_h
#error "JWAN_ModifyLayeringLogic.generated.h already included, missing '#pragma once' in JWAN_ModifyLayeringLogic.h"
#endif
#define JAKUBANIMNODESTOOL_JWAN_ModifyLayeringLogic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLayeringCurvesData ***********************************************
#define FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeringCurvesData_Statics; \
	JAKUBANIMNODESTOOL_API static class UScriptStruct* StaticStruct();


struct FLayeringCurvesData;
// ********** End ScriptStruct FLayeringCurvesData *************************************************

// ********** Begin ScriptStruct FAnimNode_ModifyLayering ******************************************
#define FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


struct FAnimNode_ModifyLayering;
// ********** End ScriptStruct FAnimNode_ModifyLayering ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h

// ********** Begin Enum EModifyLayeringApplyMode **************************************************
#define FOREACH_ENUM_EMODIFYLAYERINGAPPLYMODE(op) \
	op(EModifyLayeringApplyMode::Blend) \
	op(EModifyLayeringApplyMode::Add) \
	op(EModifyLayeringApplyMode::Scale) \
	op(EModifyLayeringApplyMode::RemapCurve) 

enum class EModifyLayeringApplyMode : uint8;
template<> struct TIsUEnumClass<EModifyLayeringApplyMode> { enum { Value = true }; };
template<> JAKUBANIMNODESTOOL_API UEnum* StaticEnum<EModifyLayeringApplyMode>();
// ********** End Enum EModifyLayeringApplyMode ****************************************************

// ********** Begin Enum ELayeringCurvesName *******************************************************
#define FOREACH_ENUM_ELAYERINGCURVESNAME(op) \
	op(ELayeringCurvesName::Layering_Legs) \
	op(ELayeringCurvesName::Layering_Pelvis) \
	op(ELayeringCurvesName::Layering_Spine) \
	op(ELayeringCurvesName::Layering_Spine_Add) \
	op(ELayeringCurvesName::Layering_Arm_L) \
	op(ELayeringCurvesName::Layering_Arm_L_Add) \
	op(ELayeringCurvesName::Layering_Arm_L_LS) \
	op(ELayeringCurvesName::Layering_Hand_L) \
	op(ELayeringCurvesName::Layering_Arm_R) \
	op(ELayeringCurvesName::Layering_Arm_R_Add) \
	op(ELayeringCurvesName::Layering_Arm_R_LS) \
	op(ELayeringCurvesName::Layering_Hand_R) \
	op(ELayeringCurvesName::Layering_Head) \
	op(ELayeringCurvesName::Layering_Head_Add) \
	op(ELayeringCurvesName::Enable_HandIK_L) \
	op(ELayeringCurvesName::Enable_HandIK_R) \
	op(ELayeringCurvesName::Enable_SpineRotation) 

enum class ELayeringCurvesName : uint8;
template<> struct TIsUEnumClass<ELayeringCurvesName> { enum { Value = true }; };
template<> JAKUBANIMNODESTOOL_API UEnum* StaticEnum<ELayeringCurvesName>();
// ********** End Enum ELayeringCurvesName *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
