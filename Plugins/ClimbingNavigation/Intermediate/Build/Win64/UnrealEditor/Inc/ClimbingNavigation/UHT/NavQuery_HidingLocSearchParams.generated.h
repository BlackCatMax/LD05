// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavQuery_HidingLocSearchParams.h"

#ifdef CLIMBINGNAVIGATION_NavQuery_HidingLocSearchParams_generated_h
#error "NavQuery_HidingLocSearchParams.generated.h already included, missing '#pragma once' in NavQuery_HidingLocSearchParams.h"
#endif
#define CLIMBINGNAVIGATION_NavQuery_HidingLocSearchParams_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWeightFunction ***************************************************
#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeightFunction_Statics; \
	CLIMBINGNAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FWeightFunction;
// ********** End ScriptStruct FWeightFunction *****************************************************

// ********** Begin Class UNavQuery_HidingLocSearchParams ******************************************
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UNavQuery_HidingLocSearchParams_NoRegister();

#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavQuery_HidingLocSearchParams(); \
	friend struct Z_Construct_UClass_UNavQuery_HidingLocSearchParams_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UNavQuery_HidingLocSearchParams_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavQuery_HidingLocSearchParams, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClimbingNavigation"), Z_Construct_UClass_UNavQuery_HidingLocSearchParams_NoRegister) \
	DECLARE_SERIALIZER(UNavQuery_HidingLocSearchParams)


#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_104_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavQuery_HidingLocSearchParams(UNavQuery_HidingLocSearchParams&&) = delete; \
	UNavQuery_HidingLocSearchParams(const UNavQuery_HidingLocSearchParams&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavQuery_HidingLocSearchParams); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavQuery_HidingLocSearchParams); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNavQuery_HidingLocSearchParams) \
	NO_API virtual ~UNavQuery_HidingLocSearchParams();


#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_101_PROLOG
#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_104_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavQuery_HidingLocSearchParams;

// ********** End Class UNavQuery_HidingLocSearchParams ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavQuery_HidingLocSearchParams_h

// ********** Begin Enum EDistributionFunctionType *************************************************
#define FOREACH_ENUM_EDISTRIBUTIONFUNCTIONTYPE(op) \
	op(EDistributionFunctionType::Linear) \
	op(EDistributionFunctionType::Exp) \
	op(EDistributionFunctionType::Exp2) \
	op(EDistributionFunctionType::Power) \
	op(EDistributionFunctionType::Sin) \
	op(EDistributionFunctionType::Cos) \
	op(EDistributionFunctionType::Sinh) 

enum class EDistributionFunctionType : uint8;
template<> struct TIsUEnumClass<EDistributionFunctionType> { enum { Value = true }; };
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<EDistributionFunctionType>();
// ********** End Enum EDistributionFunctionType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
