// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AGLS_Human_ControllerCoreAI.h"

#ifdef HELPFULFUNCTIONS_AGLS_Human_ControllerCoreAI_generated_h
#error "AGLS_Human_ControllerCoreAI.generated.h already included, missing '#pragma once' in AGLS_Human_ControllerCoreAI.h"
#endif
#define HELPFULFUNCTIONS_AGLS_Human_ControllerCoreAI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UNavigationPath;
class UObject;
class UStateTreeAIComponent;
enum class AGLS_HumanAI_FightingMode : uint8;
enum class AGLS_HumanAI_MainBehaviorMode : uint8;
enum class AGLS_HumanAI_PatrolingMode : uint8;

// ********** Begin Class AAGLS_Human_ControllerCoreAI *********************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Human_ControllerCoreAI_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCustomFocalPoint); \
	DECLARE_FUNCTION(execTryToAvoidOtherCharacter); \
	DECLARE_FUNCTION(execCustomDefaultControlRotDirection); \
	DECLARE_FUNCTION(execAdvancedControlRotationForHumanAI); \
	DECLARE_FUNCTION(execCustomUpdateControlRotation); \
	DECLARE_FUNCTION(execPathWeightByNavLinksNumber); \
	DECLARE_FUNCTION(execDoesPathUseNavLink); \
	DECLARE_FUNCTION(execST_SetParameterAsObject); \
	DECLARE_FUNCTION(execBB_SetMainBehaviorMode); \
	DECLARE_FUNCTION(execBB_GetFightingMode); \
	DECLARE_FUNCTION(execBB_GetPatrolingMode); \
	DECLARE_FUNCTION(execBB_GetMainBehaviorMode);


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Human_ControllerCoreAI_h_27_CALLBACK_WRAPPERS
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_NoRegister();

#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Human_ControllerCoreAI_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAGLS_Human_ControllerCoreAI(); \
	friend struct Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_NoRegister(); \
public: \
	DECLARE_CLASS2(AAGLS_Human_ControllerCoreAI, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_NoRegister) \
	DECLARE_SERIALIZER(AAGLS_Human_ControllerCoreAI)


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Human_ControllerCoreAI_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAGLS_Human_ControllerCoreAI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAGLS_Human_ControllerCoreAI(AAGLS_Human_ControllerCoreAI&&) = delete; \
	AAGLS_Human_ControllerCoreAI(const AAGLS_Human_ControllerCoreAI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAGLS_Human_ControllerCoreAI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAGLS_Human_ControllerCoreAI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAGLS_Human_ControllerCoreAI) \
	NO_API virtual ~AAGLS_Human_ControllerCoreAI();


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Human_ControllerCoreAI_h_24_PROLOG
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Human_ControllerCoreAI_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Human_ControllerCoreAI_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Human_ControllerCoreAI_h_27_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Human_ControllerCoreAI_h_27_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Human_ControllerCoreAI_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAGLS_Human_ControllerCoreAI;

// ********** End Class AAGLS_Human_ControllerCoreAI ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Human_ControllerCoreAI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
