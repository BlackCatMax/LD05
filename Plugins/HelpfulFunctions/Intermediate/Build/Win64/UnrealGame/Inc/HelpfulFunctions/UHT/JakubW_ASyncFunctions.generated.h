// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JakubW_ASyncFunctions.h"

#ifdef HELPFULFUNCTIONS_JakubW_ASyncFunctions_generated_h
#error "JakubW_ASyncFunctions.generated.h already included, missing '#pragma once' in JakubW_ASyncFunctions.h"
#endif
#define HELPFULFUNCTIONS_JakubW_ASyncFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UJakubW_ASyncFunctions;
class UObject;

// ********** Begin Delegate FDelayOneFrameOutputPin ***********************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_11_DELEGATE \
HELPFULFUNCTIONS_API void FDelayOneFrameOutputPin_DelegateWrapper(const FMulticastScriptDelegate& DelayOneFrameOutputPin, float InputFloatPlusOne, float InputFloatPlusTwo);


// ********** End Delegate FDelayOneFrameOutputPin *************************************************

// ********** Begin Class UJakubW_ASyncFunctions ***************************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execExecuteAfterOneFrame); \
	DECLARE_FUNCTION(execWaitForOneFrame);


HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UJakubW_ASyncFunctions_NoRegister();

#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUJakubW_ASyncFunctions(); \
	friend struct Z_Construct_UClass_UJakubW_ASyncFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UJakubW_ASyncFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UJakubW_ASyncFunctions, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), Z_Construct_UClass_UJakubW_ASyncFunctions_NoRegister) \
	DECLARE_SERIALIZER(UJakubW_ASyncFunctions)


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJakubW_ASyncFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJakubW_ASyncFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJakubW_ASyncFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJakubW_ASyncFunctions); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UJakubW_ASyncFunctions(UJakubW_ASyncFunctions&&) = delete; \
	UJakubW_ASyncFunctions(const UJakubW_ASyncFunctions&) = delete; \
	NO_API virtual ~UJakubW_ASyncFunctions();


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_13_PROLOG
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_RPC_WRAPPERS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_INCLASS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UJakubW_ASyncFunctions;

// ********** End Class UJakubW_ASyncFunctions *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
