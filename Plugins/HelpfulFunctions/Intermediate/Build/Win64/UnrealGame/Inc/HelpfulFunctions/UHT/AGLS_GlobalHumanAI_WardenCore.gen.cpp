// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGLS_GlobalHumanAI_WardenCore.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAGLS_GlobalHumanAI_WardenCore() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_NoRegister();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAGLS_GlobalHumanAI_WardenCore Function GetAgressiveModeBiasForPerception 
struct Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetAgressiveModeBiasForPerception_Statics
{
	struct AGLS_GlobalHumanAI_WardenCore_eventGetAgressiveModeBiasForPerception_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI Group" },
		{ "Keywords", "HumanAI,AI" },
		{ "ModuleRelativePath", "Public/AGLS_GlobalHumanAI_WardenCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetAgressiveModeBiasForPerception_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_GlobalHumanAI_WardenCore_eventGetAgressiveModeBiasForPerception_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetAgressiveModeBiasForPerception_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetAgressiveModeBiasForPerception_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetAgressiveModeBiasForPerception_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetAgressiveModeBiasForPerception_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore, nullptr, "GetAgressiveModeBiasForPerception", Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetAgressiveModeBiasForPerception_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetAgressiveModeBiasForPerception_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetAgressiveModeBiasForPerception_Statics::AGLS_GlobalHumanAI_WardenCore_eventGetAgressiveModeBiasForPerception_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetAgressiveModeBiasForPerception_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetAgressiveModeBiasForPerception_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetAgressiveModeBiasForPerception_Statics::AGLS_GlobalHumanAI_WardenCore_eventGetAgressiveModeBiasForPerception_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetAgressiveModeBiasForPerception()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetAgressiveModeBiasForPerception_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_GlobalHumanAI_WardenCore::execGetAgressiveModeBiasForPerception)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAgressiveModeBiasForPerception();
	P_NATIVE_END;
}
// ********** End Class AAGLS_GlobalHumanAI_WardenCore Function GetAgressiveModeBiasForPerception **

// ********** Begin Class AAGLS_GlobalHumanAI_WardenCore Function GetNotSilentModeBiasForPerception 
struct Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetNotSilentModeBiasForPerception_Statics
{
	struct AGLS_GlobalHumanAI_WardenCore_eventGetNotSilentModeBiasForPerception_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human AI Group" },
		{ "Keywords", "HumanAI,AI" },
		{ "ModuleRelativePath", "Public/AGLS_GlobalHumanAI_WardenCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetNotSilentModeBiasForPerception_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_GlobalHumanAI_WardenCore_eventGetNotSilentModeBiasForPerception_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetNotSilentModeBiasForPerception_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetNotSilentModeBiasForPerception_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetNotSilentModeBiasForPerception_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetNotSilentModeBiasForPerception_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore, nullptr, "GetNotSilentModeBiasForPerception", Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetNotSilentModeBiasForPerception_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetNotSilentModeBiasForPerception_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetNotSilentModeBiasForPerception_Statics::AGLS_GlobalHumanAI_WardenCore_eventGetNotSilentModeBiasForPerception_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetNotSilentModeBiasForPerception_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetNotSilentModeBiasForPerception_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetNotSilentModeBiasForPerception_Statics::AGLS_GlobalHumanAI_WardenCore_eventGetNotSilentModeBiasForPerception_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetNotSilentModeBiasForPerception()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetNotSilentModeBiasForPerception_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_GlobalHumanAI_WardenCore::execGetNotSilentModeBiasForPerception)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetNotSilentModeBiasForPerception();
	P_NATIVE_END;
}
// ********** End Class AAGLS_GlobalHumanAI_WardenCore Function GetNotSilentModeBiasForPerception **

// ********** Begin Class AAGLS_GlobalHumanAI_WardenCore *******************************************
void AAGLS_GlobalHumanAI_WardenCore::StaticRegisterNativesAAGLS_GlobalHumanAI_WardenCore()
{
	UClass* Class = AAGLS_GlobalHumanAI_WardenCore::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAgressiveModeBiasForPerception", &AAGLS_GlobalHumanAI_WardenCore::execGetAgressiveModeBiasForPerception },
		{ "GetNotSilentModeBiasForPerception", &AAGLS_GlobalHumanAI_WardenCore::execGetNotSilentModeBiasForPerception },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAGLS_GlobalHumanAI_WardenCore;
UClass* AAGLS_GlobalHumanAI_WardenCore::GetPrivateStaticClass()
{
	using TClass = AAGLS_GlobalHumanAI_WardenCore;
	if (!Z_Registration_Info_UClass_AAGLS_GlobalHumanAI_WardenCore.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AGLS_GlobalHumanAI_WardenCore"),
			Z_Registration_Info_UClass_AAGLS_GlobalHumanAI_WardenCore.InnerSingleton,
			StaticRegisterNativesAAGLS_GlobalHumanAI_WardenCore,
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
	return Z_Registration_Info_UClass_AAGLS_GlobalHumanAI_WardenCore.InnerSingleton;
}
UClass* Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_NoRegister()
{
	return AAGLS_GlobalHumanAI_WardenCore::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AGLS_GlobalHumanAI_WardenCore.h" },
		{ "ModuleRelativePath", "Public/AGLS_GlobalHumanAI_WardenCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharactersIncludedInGroup_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "1) HumanAI Group Config" },
		{ "ModuleRelativePath", "Public/AGLS_GlobalHumanAI_WardenCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommanderCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "1) HumanAI Group Config" },
		{ "ModuleRelativePath", "Public/AGLS_GlobalHumanAI_WardenCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhenAnyoneSeeReactionBias_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "1) HumanAI Group Config" },
		{ "ModuleRelativePath", "Public/AGLS_GlobalHumanAI_WardenCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhenAnyoneAttackedPerceptionBias_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "1) HumanAI Group Config" },
		{ "ModuleRelativePath", "Public/AGLS_GlobalHumanAI_WardenCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArenaFightRangeOuter_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "1) HumanAI Group Config" },
		{ "ModuleRelativePath", "Public/AGLS_GlobalHumanAI_WardenCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArenaFightRangeInnerBias_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "1) HumanAI Group Config" },
		{ "ModuleRelativePath", "Public/AGLS_GlobalHumanAI_WardenCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharactersIncludedInGroup_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CharactersIncludedInGroup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommanderCharacter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WhenAnyoneSeeReactionBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WhenAnyoneAttackedPerceptionBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArenaFightRangeOuter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArenaFightRangeInnerBias;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetAgressiveModeBiasForPerception, "GetAgressiveModeBiasForPerception" }, // 4063122915
		{ &Z_Construct_UFunction_AAGLS_GlobalHumanAI_WardenCore_GetNotSilentModeBiasForPerception, "GetNotSilentModeBiasForPerception" }, // 3197130478
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAGLS_GlobalHumanAI_WardenCore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::NewProp_CharactersIncludedInGroup_Inner = { "CharactersIncludedInGroup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::NewProp_CharactersIncludedInGroup = { "CharactersIncludedInGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_GlobalHumanAI_WardenCore, CharactersIncludedInGroup), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharactersIncludedInGroup_MetaData), NewProp_CharactersIncludedInGroup_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::NewProp_CommanderCharacter = { "CommanderCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_GlobalHumanAI_WardenCore, CommanderCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommanderCharacter_MetaData), NewProp_CommanderCharacter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::NewProp_WhenAnyoneSeeReactionBias = { "WhenAnyoneSeeReactionBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_GlobalHumanAI_WardenCore, WhenAnyoneSeeReactionBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhenAnyoneSeeReactionBias_MetaData), NewProp_WhenAnyoneSeeReactionBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::NewProp_WhenAnyoneAttackedPerceptionBias = { "WhenAnyoneAttackedPerceptionBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_GlobalHumanAI_WardenCore, WhenAnyoneAttackedPerceptionBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhenAnyoneAttackedPerceptionBias_MetaData), NewProp_WhenAnyoneAttackedPerceptionBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::NewProp_ArenaFightRangeOuter = { "ArenaFightRangeOuter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_GlobalHumanAI_WardenCore, ArenaFightRangeOuter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArenaFightRangeOuter_MetaData), NewProp_ArenaFightRangeOuter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::NewProp_ArenaFightRangeInnerBias = { "ArenaFightRangeInnerBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_GlobalHumanAI_WardenCore, ArenaFightRangeInnerBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArenaFightRangeInnerBias_MetaData), NewProp_ArenaFightRangeInnerBias_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::NewProp_CharactersIncludedInGroup_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::NewProp_CharactersIncludedInGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::NewProp_CommanderCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::NewProp_WhenAnyoneSeeReactionBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::NewProp_WhenAnyoneAttackedPerceptionBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::NewProp_ArenaFightRangeOuter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::NewProp_ArenaFightRangeInnerBias,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::ClassParams = {
	&AAGLS_GlobalHumanAI_WardenCore::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::Class_MetaDataParams), Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore()
{
	if (!Z_Registration_Info_UClass_AAGLS_GlobalHumanAI_WardenCore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAGLS_GlobalHumanAI_WardenCore.OuterSingleton, Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAGLS_GlobalHumanAI_WardenCore.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAGLS_GlobalHumanAI_WardenCore);
AAGLS_GlobalHumanAI_WardenCore::~AAGLS_GlobalHumanAI_WardenCore() {}
// ********** End Class AAGLS_GlobalHumanAI_WardenCore *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_GlobalHumanAI_WardenCore_h__Script_HelpfulFunctions_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAGLS_GlobalHumanAI_WardenCore, AAGLS_GlobalHumanAI_WardenCore::StaticClass, TEXT("AAGLS_GlobalHumanAI_WardenCore"), &Z_Registration_Info_UClass_AAGLS_GlobalHumanAI_WardenCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAGLS_GlobalHumanAI_WardenCore), 4118994109U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_GlobalHumanAI_WardenCore_h__Script_HelpfulFunctions_2401879169(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_GlobalHumanAI_WardenCore_h__Script_HelpfulFunctions_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_GlobalHumanAI_WardenCore_h__Script_HelpfulFunctions_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
