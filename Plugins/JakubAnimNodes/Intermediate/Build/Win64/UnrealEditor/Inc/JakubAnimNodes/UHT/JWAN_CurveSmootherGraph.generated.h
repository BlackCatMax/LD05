// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JWAN_CurveSmootherGraph.h"

#ifdef JAKUBANIMNODES_JWAN_CurveSmootherGraph_generated_h
#error "JWAN_CurveSmootherGraph.generated.h already included, missing '#pragma once' in JWAN_CurveSmootherGraph.h"
#endif
#define JAKUBANIMNODES_JWAN_CurveSmootherGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UJWAN_CurveSmootherGraph *************************************************
JAKUBANIMNODES_API UClass* Z_Construct_UClass_UJWAN_CurveSmootherGraph_NoRegister();

#define FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_CurveSmootherGraph_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJWAN_CurveSmootherGraph(); \
	friend struct Z_Construct_UClass_UJWAN_CurveSmootherGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend JAKUBANIMNODES_API UClass* Z_Construct_UClass_UJWAN_CurveSmootherGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UJWAN_CurveSmootherGraph, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JakubAnimNodes"), Z_Construct_UClass_UJWAN_CurveSmootherGraph_NoRegister) \
	DECLARE_SERIALIZER(UJWAN_CurveSmootherGraph)


#define FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_CurveSmootherGraph_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJWAN_CurveSmootherGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UJWAN_CurveSmootherGraph(UJWAN_CurveSmootherGraph&&) = delete; \
	UJWAN_CurveSmootherGraph(const UJWAN_CurveSmootherGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJWAN_CurveSmootherGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJWAN_CurveSmootherGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJWAN_CurveSmootherGraph) \
	NO_API virtual ~UJWAN_CurveSmootherGraph();


#define FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_CurveSmootherGraph_h_14_PROLOG
#define FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_CurveSmootherGraph_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_CurveSmootherGraph_h_17_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_CurveSmootherGraph_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UJWAN_CurveSmootherGraph;

// ********** End Class UJWAN_CurveSmootherGraph ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_CurveSmootherGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
