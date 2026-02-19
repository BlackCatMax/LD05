// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavLinksAutoGenerator.h"

#ifdef CLIMBINGNAVIGATION_NavLinksAutoGenerator_generated_h
#error "NavLinksAutoGenerator.generated.h already included, missing '#pragma once' in NavLinksAutoGenerator.h"
#endif
#define CLIMBINGNAVIGATION_NavLinksAutoGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNavLinks_SingleLine **********************************************
#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksAutoGenerator_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavLinks_SingleLine_Statics; \
	CLIMBINGNAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FNavLinks_SingleLine;
// ********** End ScriptStruct FNavLinks_SingleLine ************************************************

// ********** Begin ScriptStruct FNavLinks_FloorEdges **********************************************
#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksAutoGenerator_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavLinks_FloorEdges_Statics; \
	CLIMBINGNAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FNavLinks_FloorEdges;
// ********** End ScriptStruct FNavLinks_FloorEdges ************************************************

// ********** Begin Class ANavLinksAutoGenerator ***************************************************
#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksAutoGenerator_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateNavLinks);


CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_ANavLinksAutoGenerator_NoRegister();

#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksAutoGenerator_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavLinksAutoGenerator(); \
	friend struct Z_Construct_UClass_ANavLinksAutoGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_ANavLinksAutoGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(ANavLinksAutoGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClimbingNavigation"), Z_Construct_UClass_ANavLinksAutoGenerator_NoRegister) \
	DECLARE_SERIALIZER(ANavLinksAutoGenerator)


#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksAutoGenerator_h_53_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANavLinksAutoGenerator(ANavLinksAutoGenerator&&) = delete; \
	ANavLinksAutoGenerator(const ANavLinksAutoGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavLinksAutoGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavLinksAutoGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANavLinksAutoGenerator) \
	NO_API virtual ~ANavLinksAutoGenerator();


#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksAutoGenerator_h_50_PROLOG
#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksAutoGenerator_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksAutoGenerator_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksAutoGenerator_h_53_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksAutoGenerator_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANavLinksAutoGenerator;

// ********** End Class ANavLinksAutoGenerator *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksAutoGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
