// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvQuery_CSD_CheckPath.h"

#ifdef CLIMBINGNAVIGATION_EnvQuery_CSD_CheckPath_generated_h
#error "EnvQuery_CSD_CheckPath.generated.h already included, missing '#pragma once' in EnvQuery_CSD_CheckPath.h"
#endif
#define CLIMBINGNAVIGATION_EnvQuery_CSD_CheckPath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnvQuery_CSD_CheckPath **************************************************
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQuery_CSD_CheckPath_NoRegister();

#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CSD_CheckPath_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvQuery_CSD_CheckPath(); \
	friend struct Z_Construct_UClass_UEnvQuery_CSD_CheckPath_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQuery_CSD_CheckPath_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnvQuery_CSD_CheckPath, UEnvQuery_CompositeScoreDefine, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClimbingNavigation"), Z_Construct_UClass_UEnvQuery_CSD_CheckPath_NoRegister) \
	DECLARE_SERIALIZER(UEnvQuery_CSD_CheckPath)


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CSD_CheckPath_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnvQuery_CSD_CheckPath(UEnvQuery_CSD_CheckPath&&) = delete; \
	UEnvQuery_CSD_CheckPath(const UEnvQuery_CSD_CheckPath&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQuery_CSD_CheckPath); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQuery_CSD_CheckPath); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQuery_CSD_CheckPath) \
	NO_API virtual ~UEnvQuery_CSD_CheckPath();


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CSD_CheckPath_h_20_PROLOG
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CSD_CheckPath_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CSD_CheckPath_h_23_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CSD_CheckPath_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnvQuery_CSD_CheckPath;

// ********** End Class UEnvQuery_CSD_CheckPath ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CSD_CheckPath_h

// ********** Begin Enum EPathTestMode *************************************************************
#define FOREACH_ENUM_EPATHTESTMODE(op) \
	op(EPathTestMode::NoCheck) \
	op(EPathTestMode::OnlyAsValid) \
	op(EPathTestMode::WithDistance) 

enum class EPathTestMode : uint8;
template<> struct TIsUEnumClass<EPathTestMode> { enum { Value = true }; };
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<EPathTestMode>();
// ********** End Enum EPathTestMode ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
