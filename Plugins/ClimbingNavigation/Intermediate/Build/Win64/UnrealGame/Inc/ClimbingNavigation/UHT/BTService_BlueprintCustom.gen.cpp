// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTService_BlueprintCustom.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTService_BlueprintCustom() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlueprintBase();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UBTService_BlueprintCustom();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UBTService_BlueprintCustom_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTService_BlueprintCustom ***********************************************
void UBTService_BlueprintCustom::StaticRegisterNativesUBTService_BlueprintCustom()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTService_BlueprintCustom;
UClass* UBTService_BlueprintCustom::GetPrivateStaticClass()
{
	using TClass = UBTService_BlueprintCustom;
	if (!Z_Registration_Info_UClass_UBTService_BlueprintCustom.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BTService_BlueprintCustom"),
			Z_Registration_Info_UClass_UBTService_BlueprintCustom.InnerSingleton,
			StaticRegisterNativesUBTService_BlueprintCustom,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UBTService_BlueprintCustom.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTService_BlueprintCustom_NoRegister()
{
	return UBTService_BlueprintCustom::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTService_BlueprintCustom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTService_BlueprintCustom.h" },
		{ "ModuleRelativePath", "Public/BTService_BlueprintCustom.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_BlueprintCustom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTService_BlueprintCustom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService_BlueprintBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_BlueprintCustom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_BlueprintCustom_Statics::ClassParams = {
	&UBTService_BlueprintCustom::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_BlueprintCustom_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_BlueprintCustom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_BlueprintCustom()
{
	if (!Z_Registration_Info_UClass_UBTService_BlueprintCustom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_BlueprintCustom.OuterSingleton, Z_Construct_UClass_UBTService_BlueprintCustom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_BlueprintCustom.OuterSingleton;
}
UBTService_BlueprintCustom::UBTService_BlueprintCustom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_BlueprintCustom);
UBTService_BlueprintCustom::~UBTService_BlueprintCustom() {}
// ********** End Class UBTService_BlueprintCustom *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_BTService_BlueprintCustom_h__Script_ClimbingNavigation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_BlueprintCustom, UBTService_BlueprintCustom::StaticClass, TEXT("UBTService_BlueprintCustom"), &Z_Registration_Info_UClass_UBTService_BlueprintCustom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_BlueprintCustom), 3984554648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_BTService_BlueprintCustom_h__Script_ClimbingNavigation_446807965(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_BTService_BlueprintCustom_h__Script_ClimbingNavigation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_BTService_BlueprintCustom_h__Script_ClimbingNavigation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
