// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/bpFloatingIsland__pf1380491225.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebpFloatingIsland__pf1380491225() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpGameMod_C__pf1380491225_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AbpFloatingIsland_C__pf1380491225::execbpf__SpawnTrees__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SpawnTrees__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpFloatingIsland_C__pf1380491225::execbpf__SetSpawnPoints__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SetSpawnPoints__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpFloatingIsland_C__pf1380491225::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpFloatingIsland_C__pf1380491225::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpFloatingIsland_C__pf1380491225::execbpf__ExecuteUbergraph_bpFloatingIsland__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_bpFloatingIsland__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_AbpFloatingIsland_C__pf1380491225_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AbpFloatingIsland_C__pf1380491225::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		bpFloatingIsland_C__pf1380491225_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AbpFloatingIsland_C__pf1380491225_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_AbpFloatingIsland_C__pf1380491225_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AbpFloatingIsland_C__pf1380491225::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AbpFloatingIsland_C__pf1380491225_bpf__UserConstructionScript__pf),NULL);
	}
	void AbpFloatingIsland_C__pf1380491225::StaticRegisterNativesAbpFloatingIsland_C__pf1380491225()
	{
		UClass* Class = AbpFloatingIsland_C__pf1380491225::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_bpFloatingIsland_0", &AbpFloatingIsland_C__pf1380491225::execbpf__ExecuteUbergraph_bpFloatingIsland__pf_0 },
			{ "ReceiveTick", &AbpFloatingIsland_C__pf1380491225::execbpf__ReceiveTick__pf },
			{ "SetSpawnPoints", &AbpFloatingIsland_C__pf1380491225::execbpf__SetSpawnPoints__pf },
			{ "SpawnTrees", &AbpFloatingIsland_C__pf1380491225::execbpf__SpawnTrees__pf },
			{ "UserConstructionScript", &AbpFloatingIsland_C__pf1380491225::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ExecuteUbergraph_bpFloatingIsland__pf_0_Statics
	{
		struct bpFloatingIsland_C__pf1380491225_eventbpf__ExecuteUbergraph_bpFloatingIsland__pf_0_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__EntryPoint__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ExecuteUbergraph_bpFloatingIsland__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpFloatingIsland_C__pf1380491225_eventbpf__ExecuteUbergraph_bpFloatingIsland__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ExecuteUbergraph_bpFloatingIsland__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ExecuteUbergraph_bpFloatingIsland__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ExecuteUbergraph_bpFloatingIsland__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/bpFloatingIsland__pf1380491225.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_bpFloatingIsland_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ExecuteUbergraph_bpFloatingIsland__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225, nullptr, "ExecuteUbergraph_bpFloatingIsland_0", nullptr, nullptr, sizeof(bpFloatingIsland_C__pf1380491225_eventbpf__ExecuteUbergraph_bpFloatingIsland__pf_0_Parms), Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ExecuteUbergraph_bpFloatingIsland__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ExecuteUbergraph_bpFloatingIsland__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ExecuteUbergraph_bpFloatingIsland__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ExecuteUbergraph_bpFloatingIsland__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ExecuteUbergraph_bpFloatingIsland__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_bpFloatingIsland_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ExecuteUbergraph_bpFloatingIsland__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpFloatingIsland_C__pf1380491225_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/bpFloatingIsland__pf1380491225.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(bpFloatingIsland_C__pf1380491225_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__SetSpawnPoints__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__SetSpawnPoints__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/bpFloatingIsland__pf1380491225.h" },
		{ "OverrideNativeName", "SetSpawnPoints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__SetSpawnPoints__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225, nullptr, "SetSpawnPoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__SetSpawnPoints__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__SetSpawnPoints__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__SetSpawnPoints__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SetSpawnPoints" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__SetSpawnPoints__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__SpawnTrees__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__SpawnTrees__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/bpFloatingIsland__pf1380491225.h" },
		{ "OverrideNativeName", "SpawnTrees" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__SpawnTrees__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225, nullptr, "SpawnTrees", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__SpawnTrees__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__SpawnTrees__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__SpawnTrees__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SpawnTrees" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__SpawnTrees__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/bpFloatingIsland__pf1380491225.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_NoRegister()
	{
		return AbpFloatingIsland_C__pf1380491225::StaticClass();
	}
	struct Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Arrow__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Arrow__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Arrow2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Arrow2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Arrow1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Arrow1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Island__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Island__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Scene__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Scene__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__spawnPoints__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__spawnPoints__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__spawnPoints__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Trees__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Trees__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__Trees__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__OffScreenLeft__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__OffScreenLeft__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_X__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Y__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Z__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ExecuteUbergraph_bpFloatingIsland__pf_0, "ExecuteUbergraph_bpFloatingIsland_0" }, // 3018009179
		{ &Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__ReceiveTick__pf, "ReceiveTick" }, // 3801594342
		{ &Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__SetSpawnPoints__pf, "SetSpawnPoints" }, // 4263809133
		{ &Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__SpawnTrees__pf, "SpawnTrees" }, // 3053554380
		{ &Z_Construct_UFunction_AbpFloatingIsland_C__pf1380491225_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 3244992826
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "bpFloatingIsland__pf1380491225.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/bpFloatingIsland__pf1380491225.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "bpFloatingIsland_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Misc/bpFloatingIsland.bpFloatingIsland_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Arrow__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpFloatingIsland__pf1380491225.h" },
		{ "OverrideNativeName", "Arrow" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Arrow__pf = { "Arrow", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpFloatingIsland_C__pf1380491225, bpv__Arrow__pf), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Arrow__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Arrow__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Arrow2__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpFloatingIsland__pf1380491225.h" },
		{ "OverrideNativeName", "Arrow2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Arrow2__pf = { "Arrow2", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpFloatingIsland_C__pf1380491225, bpv__Arrow2__pf), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Arrow2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Arrow2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Arrow1__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpFloatingIsland__pf1380491225.h" },
		{ "OverrideNativeName", "Arrow1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Arrow1__pf = { "Arrow1", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpFloatingIsland_C__pf1380491225, bpv__Arrow1__pf), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Arrow1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Arrow1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Island__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpFloatingIsland__pf1380491225.h" },
		{ "OverrideNativeName", "Island" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Island__pf = { "Island", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpFloatingIsland_C__pf1380491225, bpv__Island__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Island__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Island__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Scene__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpFloatingIsland__pf1380491225.h" },
		{ "OverrideNativeName", "Scene" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Scene__pf = { "Scene", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpFloatingIsland_C__pf1380491225, bpv__Scene__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Scene__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Scene__pf_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__spawnPoints__pf_Inner = { "bpv__spawnPoints__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__spawnPoints__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Spawn Points" },
		{ "ModuleRelativePath", "Public/bpFloatingIsland__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "spawnPoints" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__spawnPoints__pf = { "spawnPoints", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpFloatingIsland_C__pf1380491225, bpv__spawnPoints__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__spawnPoints__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__spawnPoints__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Trees__pf_Inner = { "bpv__Trees__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Trees__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Trees" },
		{ "ModuleRelativePath", "Public/bpFloatingIsland__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Trees" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Trees__pf = { "Trees", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpFloatingIsland_C__pf1380491225, bpv__Trees__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Trees__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Trees__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__OffScreenLeft__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Off Screen Left" },
		{ "ModuleRelativePath", "Public/bpFloatingIsland__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "OffScreenLeft" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__OffScreenLeft__pf = { "OffScreenLeft", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpFloatingIsland_C__pf1380491225, bpv__OffScreenLeft__pf), METADATA_PARAMS(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__OffScreenLeft__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__OffScreenLeft__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpFloatingIsland__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpFloatingIsland_C__pf1380491225, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpFloatingIsland__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_K2_AddActorWorldOffset_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf = { "CallFunc_K2_AddActorWorldOffset_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpFloatingIsland_C__pf1380491225, b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpFloatingIsland__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_X" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf = { "CallFunc_BreakVector_X", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpFloatingIsland_C__pf1380491225, b0l__CallFunc_BreakVector_X__pf), METADATA_PARAMS(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpFloatingIsland__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Y" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf = { "CallFunc_BreakVector_Y", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpFloatingIsland_C__pf1380491225, b0l__CallFunc_BreakVector_Y__pf), METADATA_PARAMS(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpFloatingIsland__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Z" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf = { "CallFunc_BreakVector_Z", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpFloatingIsland_C__pf1380491225, b0l__CallFunc_BreakVector_Z__pf), METADATA_PARAMS(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpFloatingIsland__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBp_Game_Mod" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf = { "K2Node_DynamicCast_AsBp_Game_Mod", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpFloatingIsland_C__pf1380491225, b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf), Z_Construct_UClass_AbpGameMod_C__pf1380491225_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpFloatingIsland__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AbpFloatingIsland_C__pf1380491225*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpFloatingIsland_C__pf1380491225), &Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Arrow__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Arrow2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Arrow1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Island__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Scene__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__spawnPoints__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__spawnPoints__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Trees__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__Trees__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_bpv__OffScreenLeft__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AbpFloatingIsland_C__pf1380491225>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::ClassParams = {
		&AbpFloatingIsland_C__pf1380491225::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Misc/bpFloatingIsland"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("bpFloatingIsland_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AbpFloatingIsland_C__pf1380491225, TEXT("bpFloatingIsland_C"), 1263209257);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AbpFloatingIsland_C__pf1380491225>()
	{
		return AbpFloatingIsland_C__pf1380491225::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AbpFloatingIsland_C__pf1380491225(Z_Construct_UClass_AbpFloatingIsland_C__pf1380491225, &AbpFloatingIsland_C__pf1380491225::StaticClass, TEXT("/Game/Blueprints/Misc/bpFloatingIsland"), TEXT("bpFloatingIsland_C"), true, TEXT("/Game/Blueprints/Misc/bpFloatingIsland"), TEXT("/Game/Blueprints/Misc/bpFloatingIsland.bpFloatingIsland_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AbpFloatingIsland_C__pf1380491225);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
