// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyEnvQueryTest_PointsNearEdges.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyEnvQueryTest_PointsNearEdges() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyEnvQueryTest_PointsNearEdges ******************************************
void UMyEnvQueryTest_PointsNearEdges::StaticRegisterNativesUMyEnvQueryTest_PointsNearEdges()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMyEnvQueryTest_PointsNearEdges;
UClass* UMyEnvQueryTest_PointsNearEdges::GetPrivateStaticClass()
{
	using TClass = UMyEnvQueryTest_PointsNearEdges;
	if (!Z_Registration_Info_UClass_UMyEnvQueryTest_PointsNearEdges.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyEnvQueryTest_PointsNearEdges"),
			Z_Registration_Info_UClass_UMyEnvQueryTest_PointsNearEdges.InnerSingleton,
			StaticRegisterNativesUMyEnvQueryTest_PointsNearEdges,
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
	return Z_Registration_Info_UClass_UMyEnvQueryTest_PointsNearEdges.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges_NoRegister()
{
	return UMyEnvQueryTest_PointsNearEdges::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* It involves assessing the distance of current points from the nearest possible edge of the Navigation Mesh.*/" },
#endif
		{ "IncludePath", "MyEnvQueryTest_PointsNearEdges.h" },
		{ "ModuleRelativePath", "Public/MyEnvQueryTest_PointsNearEdges.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "It involves assessing the distance of current points from the nearest possible edge of the Navigation Mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgesFindingRange_MetaData[] = {
		{ "Category", "Edge Test" },
		{ "ModuleRelativePath", "Public/MyEnvQueryTest_PointsNearEdges.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Searching for Nav edges distance per point" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstScoreRange_MetaData[] = {
		{ "Category", "Edge Test" },
		{ "ModuleRelativePath", "Public/MyEnvQueryTest_PointsNearEdges.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance between grid point and nearest nav edge that been set a const score value (EdgeScoreValue)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeScoreValue_MetaData[] = {
		{ "Category", "Edge Test" },
		{ "ModuleRelativePath", "Public/MyEnvQueryTest_PointsNearEdges.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Score value added or multiplied for points near edges." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgesFindingRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstScoreRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeScoreValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyEnvQueryTest_PointsNearEdges>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges_Statics::NewProp_EdgesFindingRange = { "EdgesFindingRange", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyEnvQueryTest_PointsNearEdges, EdgesFindingRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgesFindingRange_MetaData), NewProp_EdgesFindingRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges_Statics::NewProp_ConstScoreRange = { "ConstScoreRange", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyEnvQueryTest_PointsNearEdges, ConstScoreRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstScoreRange_MetaData), NewProp_ConstScoreRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges_Statics::NewProp_EdgeScoreValue = { "EdgeScoreValue", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyEnvQueryTest_PointsNearEdges, EdgeScoreValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeScoreValue_MetaData), NewProp_EdgeScoreValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges_Statics::NewProp_EdgesFindingRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges_Statics::NewProp_ConstScoreRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges_Statics::NewProp_EdgeScoreValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges_Statics::ClassParams = {
	&UMyEnvQueryTest_PointsNearEdges::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges()
{
	if (!Z_Registration_Info_UClass_UMyEnvQueryTest_PointsNearEdges.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyEnvQueryTest_PointsNearEdges.OuterSingleton, Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyEnvQueryTest_PointsNearEdges.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyEnvQueryTest_PointsNearEdges);
UMyEnvQueryTest_PointsNearEdges::~UMyEnvQueryTest_PointsNearEdges() {}
// ********** End Class UMyEnvQueryTest_PointsNearEdges ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_MyEnvQueryTest_PointsNearEdges_h__Script_ClimbingNavigation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyEnvQueryTest_PointsNearEdges, UMyEnvQueryTest_PointsNearEdges::StaticClass, TEXT("UMyEnvQueryTest_PointsNearEdges"), &Z_Registration_Info_UClass_UMyEnvQueryTest_PointsNearEdges, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyEnvQueryTest_PointsNearEdges), 3650332804U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_MyEnvQueryTest_PointsNearEdges_h__Script_ClimbingNavigation_1055363002(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_MyEnvQueryTest_PointsNearEdges_h__Script_ClimbingNavigation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_MyEnvQueryTest_PointsNearEdges_h__Script_ClimbingNavigation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
