// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveActor.h"

#ifdef HELPFULFUNCTIONS_InteractiveActor_generated_h
#error "InteractiveActor.generated.h already included, missing '#pragma once' in InteractiveActor.h"
#endif
#define HELPFULFUNCTIONS_InteractiveActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AInteractiveActor ********************************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execForceDestroyWidget); \
	DECLARE_FUNCTION(execGetInteractionState); \
	DECLARE_FUNCTION(execUpdateInteractionState);


HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AInteractiveActor_NoRegister();

#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractiveActor(); \
	friend struct Z_Construct_UClass_AInteractiveActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AInteractiveActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AInteractiveActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), Z_Construct_UClass_AInteractiveActor_NoRegister) \
	DECLARE_SERIALIZER(AInteractiveActor) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractiveActor*>(this); }


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInteractiveActor(AInteractiveActor&&) = delete; \
	AInteractiveActor(const AInteractiveActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractiveActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractiveActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractiveActor) \
	NO_API virtual ~AInteractiveActor();


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h_25_PROLOG
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h_28_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInteractiveActor;

// ********** End Class AInteractiveActor **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_InteractiveActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
