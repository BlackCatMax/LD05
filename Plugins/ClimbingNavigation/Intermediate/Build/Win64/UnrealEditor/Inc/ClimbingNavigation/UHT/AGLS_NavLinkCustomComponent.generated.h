// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AGLS_NavLinkCustomComponent.h"

#ifdef CLIMBINGNAVIGATION_AGLS_NavLinkCustomComponent_generated_h
#error "AGLS_NavLinkCustomComponent.generated.h already included, missing '#pragma once' in AGLS_NavLinkCustomComponent.h"
#endif
#define CLIMBINGNAVIGATION_AGLS_NavLinkCustomComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAGLS_NavLinkCustomComponent *********************************************
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UAGLS_NavLinkCustomComponent_NoRegister();

#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AGLS_NavLinkCustomComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAGLS_NavLinkCustomComponent(); \
	friend struct Z_Construct_UClass_UAGLS_NavLinkCustomComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UAGLS_NavLinkCustomComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAGLS_NavLinkCustomComponent, UNavLinkCustomComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClimbingNavigation"), Z_Construct_UClass_UAGLS_NavLinkCustomComponent_NoRegister) \
	DECLARE_SERIALIZER(UAGLS_NavLinkCustomComponent)


#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AGLS_NavLinkCustomComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAGLS_NavLinkCustomComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAGLS_NavLinkCustomComponent(UAGLS_NavLinkCustomComponent&&) = delete; \
	UAGLS_NavLinkCustomComponent(const UAGLS_NavLinkCustomComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGLS_NavLinkCustomComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGLS_NavLinkCustomComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAGLS_NavLinkCustomComponent) \
	NO_API virtual ~UAGLS_NavLinkCustomComponent();


#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AGLS_NavLinkCustomComponent_h_12_PROLOG
#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AGLS_NavLinkCustomComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AGLS_NavLinkCustomComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AGLS_NavLinkCustomComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAGLS_NavLinkCustomComponent;

// ********** End Class UAGLS_NavLinkCustomComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_AGLS_NavLinkCustomComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
