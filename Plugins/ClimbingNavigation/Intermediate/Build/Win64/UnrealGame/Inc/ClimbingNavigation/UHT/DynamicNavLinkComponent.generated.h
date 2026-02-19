// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicNavLinkComponent.h"

#ifdef CLIMBINGNAVIGATION_DynamicNavLinkComponent_generated_h
#error "DynamicNavLinkComponent.generated.h already included, missing '#pragma once' in DynamicNavLinkComponent.h"
#endif
#define CLIMBINGNAVIGATION_DynamicNavLinkComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class NavLink_NavAreaMode : uint8;
struct FNavigationLink;

// ********** Begin Class UDynamicNavLinkComponent *************************************************
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_DynamicNavLinkComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddNewNavLink); \
	DECLARE_FUNCTION(execRebuildNavLinks);


CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UDynamicNavLinkComponent_NoRegister();

#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_DynamicNavLinkComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicNavLinkComponent(); \
	friend struct Z_Construct_UClass_UDynamicNavLinkComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UDynamicNavLinkComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicNavLinkComponent, UNavLinkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClimbingNavigation"), Z_Construct_UClass_UDynamicNavLinkComponent_NoRegister) \
	DECLARE_SERIALIZER(UDynamicNavLinkComponent)


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_DynamicNavLinkComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicNavLinkComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicNavLinkComponent(UDynamicNavLinkComponent&&) = delete; \
	UDynamicNavLinkComponent(const UDynamicNavLinkComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicNavLinkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicNavLinkComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicNavLinkComponent) \
	NO_API virtual ~UDynamicNavLinkComponent();


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_DynamicNavLinkComponent_h_19_PROLOG
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_DynamicNavLinkComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_DynamicNavLinkComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_DynamicNavLinkComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_DynamicNavLinkComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicNavLinkComponent;

// ********** End Class UDynamicNavLinkComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_DynamicNavLinkComponent_h

// ********** Begin Enum NavLink_NavAreaMode *******************************************************
#define FOREACH_ENUM_NAVLINK_NAVAREAMODE(op) \
	op(NavLink_NavAreaMode::Default) \
	op(NavLink_NavAreaMode::LowHeight) \
	op(NavLink_NavAreaMode::Null) \
	op(NavLink_NavAreaMode::Obstacle) 

enum class NavLink_NavAreaMode : uint8;
template<> struct TIsUEnumClass<NavLink_NavAreaMode> { enum { Value = true }; };
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<NavLink_NavAreaMode>();
// ********** End Enum NavLink_NavAreaMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
