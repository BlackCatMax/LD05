// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TraversalActionsParamsData.h"
#include "ALS_StructuresAndEnumsCpp.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTraversalActionsParamsData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UTraversalActionsParamsData();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UTraversalActionsParamsData_NoRegister();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTraversalStateEvaluation();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTraversalActionsParamsData **********************************************
void UTraversalActionsParamsData::StaticRegisterNativesUTraversalActionsParamsData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTraversalActionsParamsData;
UClass* UTraversalActionsParamsData::GetPrivateStaticClass()
{
	using TClass = UTraversalActionsParamsData;
	if (!Z_Registration_Info_UClass_UTraversalActionsParamsData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TraversalActionsParamsData"),
			Z_Registration_Info_UClass_UTraversalActionsParamsData.InnerSingleton,
			StaticRegisterNativesUTraversalActionsParamsData,
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
	return Z_Registration_Info_UClass_UTraversalActionsParamsData.InnerSingleton;
}
UClass* Z_Construct_UClass_UTraversalActionsParamsData_NoRegister()
{
	return UTraversalActionsParamsData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTraversalActionsParamsData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TraversalActionsParamsData.h" },
		{ "ModuleRelativePath", "Public/TraversalActionsParamsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionStates_MetaData[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "Public/TraversalActionsParamsData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionStates_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActionStates_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActionStates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTraversalActionsParamsData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTraversalActionsParamsData_Statics::NewProp_ActionStates_ValueProp = { "ActionStates", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTraversalStateEvaluation, METADATA_PARAMS(0, nullptr) }; // 4053187277
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTraversalActionsParamsData_Statics::NewProp_ActionStates_Key_KeyProp = { "ActionStates_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTraversalActionsParamsData_Statics::NewProp_ActionStates = { "ActionStates", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTraversalActionsParamsData, ActionStates), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionStates_MetaData), NewProp_ActionStates_MetaData) }; // 4053187277
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTraversalActionsParamsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraversalActionsParamsData_Statics::NewProp_ActionStates_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraversalActionsParamsData_Statics::NewProp_ActionStates_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraversalActionsParamsData_Statics::NewProp_ActionStates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTraversalActionsParamsData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTraversalActionsParamsData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTraversalActionsParamsData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTraversalActionsParamsData_Statics::ClassParams = {
	&UTraversalActionsParamsData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTraversalActionsParamsData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTraversalActionsParamsData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTraversalActionsParamsData_Statics::Class_MetaDataParams), Z_Construct_UClass_UTraversalActionsParamsData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTraversalActionsParamsData()
{
	if (!Z_Registration_Info_UClass_UTraversalActionsParamsData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTraversalActionsParamsData.OuterSingleton, Z_Construct_UClass_UTraversalActionsParamsData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTraversalActionsParamsData.OuterSingleton;
}
UTraversalActionsParamsData::UTraversalActionsParamsData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTraversalActionsParamsData);
UTraversalActionsParamsData::~UTraversalActionsParamsData() {}
// ********** End Class UTraversalActionsParamsData ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalActionsParamsData_h__Script_HelpfulFunctions_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTraversalActionsParamsData, UTraversalActionsParamsData::StaticClass, TEXT("UTraversalActionsParamsData"), &Z_Registration_Info_UClass_UTraversalActionsParamsData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTraversalActionsParamsData), 2167002356U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalActionsParamsData_h__Script_HelpfulFunctions_1788113760(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalActionsParamsData_h__Script_HelpfulFunctions_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalActionsParamsData_h__Script_HelpfulFunctions_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
