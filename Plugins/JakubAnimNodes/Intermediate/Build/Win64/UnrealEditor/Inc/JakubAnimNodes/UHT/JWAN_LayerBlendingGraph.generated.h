// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JWAN_LayerBlendingGraph.h"

#ifdef JAKUBANIMNODES_JWAN_LayerBlendingGraph_generated_h
#error "JWAN_LayerBlendingGraph.generated.h already included, missing '#pragma once' in JWAN_LayerBlendingGraph.h"
#endif
#define JAKUBANIMNODES_JWAN_LayerBlendingGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UJWAN_LayerBlendingGraph *************************************************
JAKUBANIMNODES_API UClass* Z_Construct_UClass_UJWAN_LayerBlendingGraph_NoRegister();

#define FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_LayerBlendingGraph_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJWAN_LayerBlendingGraph(); \
	friend struct Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend JAKUBANIMNODES_API UClass* Z_Construct_UClass_UJWAN_LayerBlendingGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UJWAN_LayerBlendingGraph, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JakubAnimNodes"), Z_Construct_UClass_UJWAN_LayerBlendingGraph_NoRegister) \
	DECLARE_SERIALIZER(UJWAN_LayerBlendingGraph)


#define FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_LayerBlendingGraph_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJWAN_LayerBlendingGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UJWAN_LayerBlendingGraph(UJWAN_LayerBlendingGraph&&) = delete; \
	UJWAN_LayerBlendingGraph(const UJWAN_LayerBlendingGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJWAN_LayerBlendingGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJWAN_LayerBlendingGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJWAN_LayerBlendingGraph) \
	NO_API virtual ~UJWAN_LayerBlendingGraph();


#define FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_LayerBlendingGraph_h_11_PROLOG
#define FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_LayerBlendingGraph_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_LayerBlendingGraph_h_14_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_LayerBlendingGraph_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UJWAN_LayerBlendingGraph;

// ********** End Class UJWAN_LayerBlendingGraph ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_LayerBlendingGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
