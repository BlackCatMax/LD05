// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomDebugDrawComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCustomDebugDrawComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDebugDrawComponent();
GRAPHDEBBUGER_API UClass* Z_Construct_UClass_UCustomDebugDrawComponent();
GRAPHDEBBUGER_API UClass* Z_Construct_UClass_UCustomDebugDrawComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GraphDebbuger();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCustomDebugDrawComponent ************************************************
void UCustomDebugDrawComponent::StaticRegisterNativesUCustomDebugDrawComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCustomDebugDrawComponent;
UClass* UCustomDebugDrawComponent::GetPrivateStaticClass()
{
	using TClass = UCustomDebugDrawComponent;
	if (!Z_Registration_Info_UClass_UCustomDebugDrawComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CustomDebugDrawComponent"),
			Z_Registration_Info_UClass_UCustomDebugDrawComponent.InnerSingleton,
			StaticRegisterNativesUCustomDebugDrawComponent,
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
	return Z_Registration_Info_UClass_UCustomDebugDrawComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCustomDebugDrawComponent_NoRegister()
{
	return UCustomDebugDrawComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCustomDebugDrawComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Navigation Physics RayTracing Rendering Tags TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "CustomDebugDrawComponent.h" },
		{ "ModuleRelativePath", "Public/CustomDebugDrawComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomDebugDrawComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomDebugDrawComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDebugDrawComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GraphDebbuger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomDebugDrawComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomDebugDrawComponent_Statics::ClassParams = {
	&UCustomDebugDrawComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomDebugDrawComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomDebugDrawComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomDebugDrawComponent()
{
	if (!Z_Registration_Info_UClass_UCustomDebugDrawComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomDebugDrawComponent.OuterSingleton, Z_Construct_UClass_UCustomDebugDrawComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomDebugDrawComponent.OuterSingleton;
}
UCustomDebugDrawComponent::UCustomDebugDrawComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomDebugDrawComponent);
UCustomDebugDrawComponent::~UCustomDebugDrawComponent() {}
// ********** End Class UCustomDebugDrawComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_LD05_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_CustomDebugDrawComponent_h__Script_GraphDebbuger_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomDebugDrawComponent, UCustomDebugDrawComponent::StaticClass, TEXT("UCustomDebugDrawComponent"), &Z_Registration_Info_UClass_UCustomDebugDrawComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomDebugDrawComponent), 1802654781U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LD05_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_CustomDebugDrawComponent_h__Script_GraphDebbuger_1208951794(TEXT("/Script/GraphDebbuger"),
	Z_CompiledInDeferFile_FID_LD05_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_CustomDebugDrawComponent_h__Script_GraphDebbuger_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LD05_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_CustomDebugDrawComponent_h__Script_GraphDebbuger_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
