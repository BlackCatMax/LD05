// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JWAN_PoseSnapShotGraph.h"
#include "JWAN_PoseSnapShotLogic.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeJWAN_PoseSnapShotGraph() {}

// ********** Begin Cross Module References ********************************************************
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
JAKUBANIMNODES_API UClass* Z_Construct_UClass_UJWAN_PoseSnapShotGraph();
JAKUBANIMNODES_API UClass* Z_Construct_UClass_UJWAN_PoseSnapShotGraph_NoRegister();
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic();
UPackage* Z_Construct_UPackage__Script_JakubAnimNodes();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UJWAN_PoseSnapShotGraph **************************************************
void UJWAN_PoseSnapShotGraph::StaticRegisterNativesUJWAN_PoseSnapShotGraph()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UJWAN_PoseSnapShotGraph;
UClass* UJWAN_PoseSnapShotGraph::GetPrivateStaticClass()
{
	using TClass = UJWAN_PoseSnapShotGraph;
	if (!Z_Registration_Info_UClass_UJWAN_PoseSnapShotGraph.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("JWAN_PoseSnapShotGraph"),
			Z_Registration_Info_UClass_UJWAN_PoseSnapShotGraph.InnerSingleton,
			StaticRegisterNativesUJWAN_PoseSnapShotGraph,
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
	return Z_Registration_Info_UClass_UJWAN_PoseSnapShotGraph.InnerSingleton;
}
UClass* Z_Construct_UClass_UJWAN_PoseSnapShotGraph_NoRegister()
{
	return UJWAN_PoseSnapShotGraph::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This will be displayed in the AnimGraph\n" },
#endif
		{ "IncludePath", "JWAN_PoseSnapShotGraph.h" },
		{ "ModuleRelativePath", "Public/JWAN_PoseSnapShotGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will be displayed in the AnimGraph" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/JWAN_PoseSnapShotGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJWAN_PoseSnapShotGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJWAN_PoseSnapShotGraph, Node), Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 2116317404
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::NewProp_Node,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::ClassParams = {
	&UJWAN_PoseSnapShotGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJWAN_PoseSnapShotGraph()
{
	if (!Z_Registration_Info_UClass_UJWAN_PoseSnapShotGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJWAN_PoseSnapShotGraph.OuterSingleton, Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJWAN_PoseSnapShotGraph.OuterSingleton;
}
UJWAN_PoseSnapShotGraph::UJWAN_PoseSnapShotGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJWAN_PoseSnapShotGraph);
UJWAN_PoseSnapShotGraph::~UJWAN_PoseSnapShotGraph() {}
// ********** End Class UJWAN_PoseSnapShotGraph ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_PoseSnapShotGraph_h__Script_JakubAnimNodes_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJWAN_PoseSnapShotGraph, UJWAN_PoseSnapShotGraph::StaticClass, TEXT("UJWAN_PoseSnapShotGraph"), &Z_Registration_Info_UClass_UJWAN_PoseSnapShotGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJWAN_PoseSnapShotGraph), 3458661462U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_PoseSnapShotGraph_h__Script_JakubAnimNodes_2987066675(TEXT("/Script/JakubAnimNodes"),
	Z_CompiledInDeferFile_FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_PoseSnapShotGraph_h__Script_JakubAnimNodes_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_PoseSnapShotGraph_h__Script_JakubAnimNodes_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
