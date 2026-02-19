// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnvQueryTest_CustomScore.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_CustomScore() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQuery_CustomScoreDefine_NoRegister();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQueryTest_CustomScore();
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQueryTest_CustomScore_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_ClimbingNavigation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnvQueryTest_CustomScore ************************************************
void UEnvQueryTest_CustomScore::StaticRegisterNativesUEnvQueryTest_CustomScore()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEnvQueryTest_CustomScore;
UClass* UEnvQueryTest_CustomScore::GetPrivateStaticClass()
{
	using TClass = UEnvQueryTest_CustomScore;
	if (!Z_Registration_Info_UClass_UEnvQueryTest_CustomScore.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnvQueryTest_CustomScore"),
			Z_Registration_Info_UClass_UEnvQueryTest_CustomScore.InnerSingleton,
			StaticRegisterNativesUEnvQueryTest_CustomScore,
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
	return Z_Registration_Info_UClass_UEnvQueryTest_CustomScore.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnvQueryTest_CustomScore_NoRegister()
{
	return UEnvQueryTest_CustomScore::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnvQueryTest_CustomScore.h" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_CustomScore.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreModifyClass_MetaData[] = {
		{ "Category", "ScoreLogic" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_CustomScore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharactersContext_MetaData[] = {
		{ "Category", "AddtiveContext" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_CustomScore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteScoreTestOnlyWhen_MetaData[] = {
		{ "Category", "ScoreLogic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Execute Score Test Only When Current Point Have Score Greater That NotValidPointScoreTreshold\n" },
#endif
		{ "ModuleRelativePath", "Public/EnvQueryTest_CustomScore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute Score Test Only When Current Point Have Score Greater That NotValidPointScoreTreshold" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotValidPointScoreTreshold_MetaData[] = {
		{ "Category", "ScoreLogic" },
		{ "EditCondition", "ExecuteScoreTestOnlyWhen" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_CustomScore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebugOnSkippedPoint_MetaData[] = {
		{ "Category", "ScoreLogic" },
		{ "EditCondition", "ExecuteScoreTestOnlyWhen" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_CustomScore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ScoreModifyClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharactersContext;
	static void NewProp_ExecuteScoreTestOnlyWhen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ExecuteScoreTestOnlyWhen;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NotValidPointScoreTreshold;
	static void NewProp_DrawDebugOnSkippedPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDebugOnSkippedPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_CustomScore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::NewProp_ScoreModifyClass = { "ScoreModifyClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_CustomScore, ScoreModifyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQuery_CustomScoreDefine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreModifyClass_MetaData), NewProp_ScoreModifyClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::NewProp_CharactersContext = { "CharactersContext", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_CustomScore, CharactersContext), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharactersContext_MetaData), NewProp_CharactersContext_MetaData) };
void Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::NewProp_ExecuteScoreTestOnlyWhen_SetBit(void* Obj)
{
	((UEnvQueryTest_CustomScore*)Obj)->ExecuteScoreTestOnlyWhen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::NewProp_ExecuteScoreTestOnlyWhen = { "ExecuteScoreTestOnlyWhen", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQueryTest_CustomScore), &Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::NewProp_ExecuteScoreTestOnlyWhen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteScoreTestOnlyWhen_MetaData), NewProp_ExecuteScoreTestOnlyWhen_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::NewProp_NotValidPointScoreTreshold = { "NotValidPointScoreTreshold", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_CustomScore, NotValidPointScoreTreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotValidPointScoreTreshold_MetaData), NewProp_NotValidPointScoreTreshold_MetaData) };
void Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::NewProp_DrawDebugOnSkippedPoint_SetBit(void* Obj)
{
	((UEnvQueryTest_CustomScore*)Obj)->DrawDebugOnSkippedPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::NewProp_DrawDebugOnSkippedPoint = { "DrawDebugOnSkippedPoint", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQueryTest_CustomScore), &Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::NewProp_DrawDebugOnSkippedPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDebugOnSkippedPoint_MetaData), NewProp_DrawDebugOnSkippedPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::NewProp_ScoreModifyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::NewProp_CharactersContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::NewProp_ExecuteScoreTestOnlyWhen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::NewProp_NotValidPointScoreTreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::NewProp_DrawDebugOnSkippedPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingNavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::ClassParams = {
	&UEnvQueryTest_CustomScore::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryTest_CustomScore()
{
	if (!Z_Registration_Info_UClass_UEnvQueryTest_CustomScore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_CustomScore.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_CustomScore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryTest_CustomScore.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_CustomScore);
UEnvQueryTest_CustomScore::~UEnvQueryTest_CustomScore() {}
// ********** End Class UEnvQueryTest_CustomScore **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_CustomScore_h__Script_ClimbingNavigation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_CustomScore, UEnvQueryTest_CustomScore::StaticClass, TEXT("UEnvQueryTest_CustomScore"), &Z_Registration_Info_UClass_UEnvQueryTest_CustomScore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_CustomScore), 121857495U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_CustomScore_h__Script_ClimbingNavigation_2980600306(TEXT("/Script/ClimbingNavigation"),
	Z_CompiledInDeferFile_FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_CustomScore_h__Script_ClimbingNavigation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_CustomScore_h__Script_ClimbingNavigation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
