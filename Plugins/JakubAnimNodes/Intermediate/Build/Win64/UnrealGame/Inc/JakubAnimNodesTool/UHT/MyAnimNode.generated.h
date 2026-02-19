// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyAnimNode.h"

#ifdef JAKUBANIMNODESTOOL_MyAnimNode_generated_h
#error "MyAnimNode.generated.h already included, missing '#pragma once' in MyAnimNode.h"
#endif
#define JAKUBANIMNODESTOOL_MyAnimNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNode_LayeredBone *********************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_MyAnimNode_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


struct FAnimNode_LayeredBone;
// ********** End ScriptStruct FAnimNode_LayeredBone ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_MyAnimNode_h

// ********** Begin Enum ELayeredBlendMode *********************************************************
#define FOREACH_ENUM_ELAYEREDBLENDMODE(op) \
	op(ELayeredBlendMode::BranchFilter) \
	op(ELayeredBlendMode::BlendMask) 

enum class ELayeredBlendMode : uint8;
template<> struct TIsUEnumClass<ELayeredBlendMode> { enum { Value = true }; };
template<> JAKUBANIMNODESTOOL_API UEnum* StaticEnum<ELayeredBlendMode>();
// ********** End Enum ELayeredBlendMode ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
