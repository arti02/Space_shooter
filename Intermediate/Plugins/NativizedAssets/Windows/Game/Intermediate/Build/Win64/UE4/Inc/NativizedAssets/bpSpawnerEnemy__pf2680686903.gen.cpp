// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/bpSpawnerEnemy__pf2680686903.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebpSpawnerEnemy__pf2680686903() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpGameMod_C__pf1380491225_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(AbpSpawnerEnemy_C__pf2680686903::execbpf__SpawnWave__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__WaveTotal__pf);
		P_GET_TARRAY_REF(UClass*,Z_Param_Out_bpp__WaveEnemies__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SpawnWave__pf(Z_Param_bpp__WaveTotal__pf,Z_Param_Out_bpp__WaveEnemies__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpSpawnerEnemy_C__pf2680686903::execbpf__BeginWave__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__WaveTotal__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BeginWave__pf(Z_Param_bpp__WaveTotal__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpSpawnerEnemy_C__pf2680686903::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpSpawnerEnemy_C__pf2680686903::execbpf__WaveCheck__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__WaveCheck__pf();
		P_NATIVE_END;
	}
	static FName NAME_AbpSpawnerEnemy_C__pf2680686903_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AbpSpawnerEnemy_C__pf2680686903::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AbpSpawnerEnemy_C__pf2680686903_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void AbpSpawnerEnemy_C__pf2680686903::StaticRegisterNativesAbpSpawnerEnemy_C__pf2680686903()
	{
		UClass* Class = AbpSpawnerEnemy_C__pf2680686903::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginWave", &AbpSpawnerEnemy_C__pf2680686903::execbpf__BeginWave__pf },
			{ "ReceiveBeginPlay", &AbpSpawnerEnemy_C__pf2680686903::execbpf__ReceiveBeginPlay__pf },
			{ "SpawnWave", &AbpSpawnerEnemy_C__pf2680686903::execbpf__SpawnWave__pf },
			{ "WaveCheck", &AbpSpawnerEnemy_C__pf2680686903::execbpf__WaveCheck__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__BeginWave__pf_Statics
	{
		struct bpSpawnerEnemy_C__pf2680686903_eventbpf__BeginWave__pf_Parms
		{
			int32 bpp__WaveTotal__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__WaveTotal__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__BeginWave__pf_Statics::NewProp_bpp__WaveTotal__pf = { "bpp__WaveTotal__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpSpawnerEnemy_C__pf2680686903_eventbpf__BeginWave__pf_Parms, bpp__WaveTotal__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__BeginWave__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__BeginWave__pf_Statics::NewProp_bpp__WaveTotal__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__BeginWave__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "OverrideNativeName", "BeginWave" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__BeginWave__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903, nullptr, "BeginWave", nullptr, nullptr, sizeof(bpSpawnerEnemy_C__pf2680686903_eventbpf__BeginWave__pf_Parms), Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__BeginWave__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__BeginWave__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__BeginWave__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__BeginWave__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__BeginWave__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BeginWave" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__BeginWave__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__SpawnWave__pf_Statics
	{
		struct bpSpawnerEnemy_C__pf2680686903_eventbpf__SpawnWave__pf_Parms
		{
			int32 bpp__WaveTotal__pf;
			TArray<UClass*> bpp__WaveEnemies__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__WaveTotal__pf;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpp__WaveEnemies__pf_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpp__WaveEnemies__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__SpawnWave__pf_Statics::NewProp_bpp__WaveTotal__pf = { "bpp__WaveTotal__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpSpawnerEnemy_C__pf2680686903_eventbpf__SpawnWave__pf_Parms, bpp__WaveTotal__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__SpawnWave__pf_Statics::NewProp_bpp__WaveEnemies__pf_Inner = { "bpp__WaveEnemies__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__SpawnWave__pf_Statics::NewProp_bpp__WaveEnemies__pf = { "bpp__WaveEnemies__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpSpawnerEnemy_C__pf2680686903_eventbpf__SpawnWave__pf_Parms, bpp__WaveEnemies__pf), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__SpawnWave__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__SpawnWave__pf_Statics::NewProp_bpp__WaveTotal__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__SpawnWave__pf_Statics::NewProp_bpp__WaveEnemies__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__SpawnWave__pf_Statics::NewProp_bpp__WaveEnemies__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__SpawnWave__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "OverrideNativeName", "SpawnWave" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__SpawnWave__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903, nullptr, "SpawnWave", nullptr, nullptr, sizeof(bpSpawnerEnemy_C__pf2680686903_eventbpf__SpawnWave__pf_Parms), Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__SpawnWave__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__SpawnWave__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__SpawnWave__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__SpawnWave__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__SpawnWave__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SpawnWave" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__SpawnWave__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__WaveCheck__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__WaveCheck__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "OverrideNativeName", "WaveCheck" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__WaveCheck__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903, nullptr, "WaveCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__WaveCheck__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__WaveCheck__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__WaveCheck__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "WaveCheck" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__WaveCheck__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_NoRegister()
	{
		return AbpSpawnerEnemy_C__pf2680686903::StaticClass();
	}
	struct Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Scene__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Scene__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bWaveReady__pf_MetaData[];
#endif
		static void NewProp_bpv__bWaveReady__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bWaveReady__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bpGameMod__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__bpGameMod__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WaveTimer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__WaveTimer__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WaveActive__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__WaveActive__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WaveIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__WaveIndex__pf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__WaveEnemyCount__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WaveEnemyCount__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__WaveEnemyCount__pf;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__WavesEnemies1__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WavesEnemies1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__WavesEnemies1__pf;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__WavesEnemies2__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WavesEnemies2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__WavesEnemies2__pf;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__WavesEnemies3__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WavesEnemies3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__WavesEnemies3__pf;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__WavesEnemies4__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WavesEnemies4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__WavesEnemies4__pf;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__WavesEnemies5__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WavesEnemies5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__WavesEnemies5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__BeginWave__pf, "BeginWave" }, // 1551642208
		{ &Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3980734841
		{ &Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__SpawnWave__pf, "SpawnWave" }, // 3972144202
		{ &Z_Construct_UFunction_AbpSpawnerEnemy_C__pf2680686903_bpf__WaveCheck__pf, "WaveCheck" }, // 3684451674
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "bpSpawnerEnemy__pf2680686903.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "bpSpawnerEnemy_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Enemies/bpSpawnerEnemy.bpSpawnerEnemy_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__Scene__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "OverrideNativeName", "Scene" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__Scene__pf = { "Scene", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpSpawnerEnemy_C__pf2680686903, bpv__Scene__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__Scene__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__Scene__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__bWaveReady__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Wave Ready" },
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "bWaveReady" },
	};
#endif
	void Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__bWaveReady__pf_SetBit(void* Obj)
	{
		((AbpSpawnerEnemy_C__pf2680686903*)Obj)->bpv__bWaveReady__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__bWaveReady__pf = { "bWaveReady", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpSpawnerEnemy_C__pf2680686903), &Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__bWaveReady__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__bWaveReady__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__bWaveReady__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__bpGameMod__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Bp Game Mod" },
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "bpGameMod" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__bpGameMod__pf = { "bpGameMod", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpSpawnerEnemy_C__pf2680686903, bpv__bpGameMod__pf), Z_Construct_UClass_AbpGameMod_C__pf1380491225_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__bpGameMod__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__bpGameMod__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveTimer__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Wave Timer" },
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "WaveTimer" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveTimer__pf = { "WaveTimer", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpSpawnerEnemy_C__pf2680686903, bpv__WaveTimer__pf), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveTimer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveTimer__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveActive__pf_MetaData[] = {
		{ "Category", "Waves" },
		{ "DisplayName", "Wave Active" },
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "WaveActive" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveActive__pf = { "WaveActive", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpSpawnerEnemy_C__pf2680686903, bpv__WaveActive__pf), METADATA_PARAMS(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveActive__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveActive__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveIndex__pf_MetaData[] = {
		{ "Category", "Waves" },
		{ "DisplayName", "Wave Index" },
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "WaveIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveIndex__pf = { "WaveIndex", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpSpawnerEnemy_C__pf2680686903, bpv__WaveIndex__pf), METADATA_PARAMS(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveIndex__pf_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveEnemyCount__pf_Inner = { "bpv__WaveEnemyCount__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveEnemyCount__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Wave Enemy Count" },
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "WaveEnemyCount" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveEnemyCount__pf = { "WaveEnemyCount", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpSpawnerEnemy_C__pf2680686903, bpv__WaveEnemyCount__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveEnemyCount__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveEnemyCount__pf_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies1__pf_Inner = { "bpv__WavesEnemies1__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies1__pf_MetaData[] = {
		{ "Category", "Enemies" },
		{ "DisplayName", "Waves Enemies 1" },
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "WavesEnemies1" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies1__pf = { "WavesEnemies1", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpSpawnerEnemy_C__pf2680686903, bpv__WavesEnemies1__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies1__pf_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies2__pf_Inner = { "bpv__WavesEnemies2__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies2__pf_MetaData[] = {
		{ "Category", "Enemies" },
		{ "DisplayName", "Waves Enemies 2" },
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "WavesEnemies2" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies2__pf = { "WavesEnemies2", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpSpawnerEnemy_C__pf2680686903, bpv__WavesEnemies2__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies2__pf_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies3__pf_Inner = { "bpv__WavesEnemies3__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies3__pf_MetaData[] = {
		{ "Category", "Enemies" },
		{ "DisplayName", "Waves Enemies 3" },
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "WavesEnemies3" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies3__pf = { "WavesEnemies3", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpSpawnerEnemy_C__pf2680686903, bpv__WavesEnemies3__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies3__pf_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies4__pf_Inner = { "bpv__WavesEnemies4__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies4__pf_MetaData[] = {
		{ "Category", "Enemies" },
		{ "DisplayName", "Waves Enemies 4" },
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "WavesEnemies4" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies4__pf = { "WavesEnemies4", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpSpawnerEnemy_C__pf2680686903, bpv__WavesEnemies4__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies4__pf_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies5__pf_Inner = { "bpv__WavesEnemies5__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies5__pf_MetaData[] = {
		{ "Category", "Enemies" },
		{ "DisplayName", "Waves Enemies 5" },
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "WavesEnemies5" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies5__pf = { "WavesEnemies5", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpSpawnerEnemy_C__pf2680686903, bpv__WavesEnemies5__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBp_Game_Mod" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf = { "K2Node_DynamicCast_AsBp_Game_Mod", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpSpawnerEnemy_C__pf2680686903, b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf), Z_Construct_UClass_AbpGameMod_C__pf1380491225_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AbpSpawnerEnemy_C__pf2680686903*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpSpawnerEnemy_C__pf2680686903), &Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_SwitchInteger_CmpSuccess" },
	};
#endif
	void Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_SetBit(void* Obj)
	{
		((AbpSpawnerEnemy_C__pf2680686903*)Obj)->b0l__K2Node_SwitchInteger_CmpSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf = { "K2Node_SwitchInteger_CmpSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpSpawnerEnemy_C__pf2680686903), &Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpSpawnerEnemy_C__pf2680686903, b0l__CallFunc_Array_Get_Item__pf), METADATA_PARAMS(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpSpawnerEnemy__pf2680686903.h" },
		{ "OverrideNativeName", "Temp_int_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__Temp_int_Variable__pf = { "Temp_int_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpSpawnerEnemy_C__pf2680686903, b0l__Temp_int_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__Scene__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__bWaveReady__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__bpGameMod__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveTimer__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveActive__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveEnemyCount__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WaveEnemyCount__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies1__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies2__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies3__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies4__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies5__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_bpv__WavesEnemies5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::NewProp_b0l__Temp_int_Variable__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AbpSpawnerEnemy_C__pf2680686903>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::ClassParams = {
		&AbpSpawnerEnemy_C__pf2680686903::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Enemies/bpSpawnerEnemy"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("bpSpawnerEnemy_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AbpSpawnerEnemy_C__pf2680686903, TEXT("bpSpawnerEnemy_C"), 954380184);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AbpSpawnerEnemy_C__pf2680686903>()
	{
		return AbpSpawnerEnemy_C__pf2680686903::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AbpSpawnerEnemy_C__pf2680686903(Z_Construct_UClass_AbpSpawnerEnemy_C__pf2680686903, &AbpSpawnerEnemy_C__pf2680686903::StaticClass, TEXT("/Game/Blueprints/Enemies/bpSpawnerEnemy"), TEXT("bpSpawnerEnemy_C"), true, TEXT("/Game/Blueprints/Enemies/bpSpawnerEnemy"), TEXT("/Game/Blueprints/Enemies/bpSpawnerEnemy.bpSpawnerEnemy_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AbpSpawnerEnemy_C__pf2680686903);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
