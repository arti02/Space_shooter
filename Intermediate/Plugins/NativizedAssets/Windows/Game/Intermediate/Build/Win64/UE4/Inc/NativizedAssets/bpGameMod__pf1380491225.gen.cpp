// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/bpGameMod__pf1380491225.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebpGameMod__pf1380491225() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpGameMod_C__pf1380491225_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpGameMod_C__pf1380491225();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UQuitGame_C__pf3053510930_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AbpGameMod_C__pf1380491225::execbpf__SpawnIsland__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SpawnIsland__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpGameMod_C__pf1380491225::execbpf__AddScore__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AddScore__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpGameMod_C__pf1380491225::execbpf__SaveCoins__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SaveCoins__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpGameMod_C__pf1380491225::execbpf__LoadCoins__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__LoadCoins__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpGameMod_C__pf1380491225::execbpf__AddCoin__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AddCoin__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpGameMod_C__pf1380491225::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpGameMod_C__pf1380491225::execbpf__ReceiveEndPlay__pf)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_bpp__EndPlayReason__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveEndPlay__pf(EEndPlayReason::Type(Z_Param_bpp__EndPlayReason__pf));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpGameMod_C__pf1380491225::execbpf__CallCameShake__pf)
	{
		P_GET_OBJECT(UClass,Z_Param_bpp__ShakeType__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__CallCameShake__pf(Z_Param_bpp__ShakeType__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpGameMod_C__pf1380491225::execbpf__AllEnemiesDefetead__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AllEnemiesDefetead__pf();
		P_NATIVE_END;
	}
	static FName NAME_AbpGameMod_C__pf1380491225_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AbpGameMod_C__pf1380491225::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AbpGameMod_C__pf1380491225_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AbpGameMod_C__pf1380491225_bpf__ReceiveEndPlay__pf = FName(TEXT("ReceiveEndPlay"));
	void AbpGameMod_C__pf1380491225::eventbpf__ReceiveEndPlay__pf(EEndPlayReason::Type bpp__EndPlayReason__pf)
	{
		bpGameMod_C__pf1380491225_eventbpf__ReceiveEndPlay__pf_Parms Parms;
		Parms.bpp__EndPlayReason__pf=bpp__EndPlayReason__pf;
		ProcessEvent(FindFunctionChecked(NAME_AbpGameMod_C__pf1380491225_bpf__ReceiveEndPlay__pf),&Parms);
	}
	void AbpGameMod_C__pf1380491225::StaticRegisterNativesAbpGameMod_C__pf1380491225()
	{
		UClass* Class = AbpGameMod_C__pf1380491225::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCoin", &AbpGameMod_C__pf1380491225::execbpf__AddCoin__pf },
			{ "AddScore", &AbpGameMod_C__pf1380491225::execbpf__AddScore__pf },
			{ "AllEnemiesDefetead", &AbpGameMod_C__pf1380491225::execbpf__AllEnemiesDefetead__pf },
			{ "CallCameShake", &AbpGameMod_C__pf1380491225::execbpf__CallCameShake__pf },
			{ "LoadCoins", &AbpGameMod_C__pf1380491225::execbpf__LoadCoins__pf },
			{ "ReceiveBeginPlay", &AbpGameMod_C__pf1380491225::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveEndPlay", &AbpGameMod_C__pf1380491225::execbpf__ReceiveEndPlay__pf },
			{ "SaveCoins", &AbpGameMod_C__pf1380491225::execbpf__SaveCoins__pf },
			{ "SpawnIsland", &AbpGameMod_C__pf1380491225::execbpf__SpawnIsland__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AddCoin__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AddCoin__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "OverrideNativeName", "AddCoin" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AddCoin__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpGameMod_C__pf1380491225, nullptr, "AddCoin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AddCoin__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AddCoin__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AddCoin__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpGameMod_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "AddCoin" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AddCoin__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AddScore__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AddScore__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "OverrideNativeName", "AddScore" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AddScore__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpGameMod_C__pf1380491225, nullptr, "AddScore", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AddScore__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AddScore__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AddScore__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpGameMod_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "AddScore" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AddScore__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AllEnemiesDefetead__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AllEnemiesDefetead__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "OverrideNativeName", "AllEnemiesDefetead" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AllEnemiesDefetead__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpGameMod_C__pf1380491225, nullptr, "AllEnemiesDefetead", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AllEnemiesDefetead__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AllEnemiesDefetead__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AllEnemiesDefetead__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpGameMod_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "AllEnemiesDefetead" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AllEnemiesDefetead__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__CallCameShake__pf_Statics
	{
		struct bpGameMod_C__pf1380491225_eventbpf__CallCameShake__pf_Parms
		{
			UClass* bpp__ShakeType__pf;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpp__ShakeType__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__CallCameShake__pf_Statics::NewProp_bpp__ShakeType__pf = { "bpp__ShakeType__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpGameMod_C__pf1380491225_eventbpf__CallCameShake__pf_Parms, bpp__ShakeType__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__CallCameShake__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__CallCameShake__pf_Statics::NewProp_bpp__ShakeType__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__CallCameShake__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "OverrideNativeName", "CallCameShake" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__CallCameShake__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpGameMod_C__pf1380491225, nullptr, "CallCameShake", nullptr, nullptr, sizeof(bpGameMod_C__pf1380491225_eventbpf__CallCameShake__pf_Parms), Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__CallCameShake__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__CallCameShake__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__CallCameShake__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__CallCameShake__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__CallCameShake__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpGameMod_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "CallCameShake" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__CallCameShake__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__LoadCoins__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__LoadCoins__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "OverrideNativeName", "LoadCoins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__LoadCoins__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpGameMod_C__pf1380491225, nullptr, "LoadCoins", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__LoadCoins__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__LoadCoins__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__LoadCoins__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpGameMod_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "LoadCoins" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__LoadCoins__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpGameMod_C__pf1380491225, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpGameMod_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__ReceiveEndPlay__pf_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpp__EndPlayReason__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__ReceiveEndPlay__pf_Statics::NewProp_bpp__EndPlayReason__pf = { "bpp__EndPlayReason__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpGameMod_C__pf1380491225_eventbpf__ReceiveEndPlay__pf_Parms, bpp__EndPlayReason__pf), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__ReceiveEndPlay__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__ReceiveEndPlay__pf_Statics::NewProp_bpp__EndPlayReason__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__ReceiveEndPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event to notify blueprints this actor is being deleted or removed from a level. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "End Play" },
		{ "Keywords", "delete" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "OverrideNativeName", "ReceiveEndPlay" },
		{ "ToolTip", "Event to notify blueprints this actor is being deleted or removed from a level." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__ReceiveEndPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpGameMod_C__pf1380491225, nullptr, "ReceiveEndPlay", nullptr, nullptr, sizeof(bpGameMod_C__pf1380491225_eventbpf__ReceiveEndPlay__pf_Parms), Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__ReceiveEndPlay__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__ReceiveEndPlay__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__ReceiveEndPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__ReceiveEndPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__ReceiveEndPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpGameMod_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveEndPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__ReceiveEndPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__SaveCoins__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__SaveCoins__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "OverrideNativeName", "SaveCoins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__SaveCoins__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpGameMod_C__pf1380491225, nullptr, "SaveCoins", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__SaveCoins__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__SaveCoins__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__SaveCoins__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpGameMod_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SaveCoins" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__SaveCoins__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__SpawnIsland__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__SpawnIsland__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "OverrideNativeName", "SpawnIsland" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__SpawnIsland__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpGameMod_C__pf1380491225, nullptr, "SpawnIsland", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__SpawnIsland__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__SpawnIsland__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__SpawnIsland__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpGameMod_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SpawnIsland" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__SpawnIsland__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AbpGameMod_C__pf1380491225_NoRegister()
	{
		return AbpGameMod_C__pf1380491225::StaticClass();
	}
	struct Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BGM__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__BGM__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bPlayerDead__pf_MetaData[];
#endif
		static void NewProp_bpv__bPlayerDead__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bPlayerDead__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpawnInerwal__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SpawnInerwal__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LiveEnemies__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__LiveEnemies__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MaxWaves__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__MaxWaves__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ActiveWave__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__ActiveWave__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Score__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__Score__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CoinsEarned__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__CoinsEarned__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Coins__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__Coins__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__EnemySpownLocationMin__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__EnemySpownLocationMin__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__EnemySpownLocationMax__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__EnemySpownLocationMax__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CoinxSavexName__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__CoinxSavexName__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SavexSub__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SavexSub__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GameOverMenuReference__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__GameOverMenuReference__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_EndPlayReason__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__K2Node_Event_EndPlayReason__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_ShakeType__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_b0l__K2Node_CustomEvent_ShakeType__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AddCoin__pf, "AddCoin" }, // 1686158633
		{ &Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AddScore__pf, "AddScore" }, // 2852421798
		{ &Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__AllEnemiesDefetead__pf, "AllEnemiesDefetead" }, // 3421588703
		{ &Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__CallCameShake__pf, "CallCameShake" }, // 1650610870
		{ &Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__LoadCoins__pf, "LoadCoins" }, // 3053755067
		{ &Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3024740412
		{ &Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__ReceiveEndPlay__pf, "ReceiveEndPlay" }, // 2395397683
		{ &Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__SaveCoins__pf, "SaveCoins" }, // 762647135
		{ &Z_Construct_UFunction_AbpGameMod_C__pf1380491225_bpf__SpawnIsland__pf, "SpawnIsland" }, // 1336501766
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "bpGameMod__pf1380491225.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "bpGameMod_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Misc/bpGameMod.bpGameMod_C,/Game/Blueprints/bpGameMod.bpGameMod_C" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__BGM__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "OverrideNativeName", "BGM" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__BGM__pf = { "BGM", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpGameMod_C__pf1380491225, bpv__BGM__pf), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__BGM__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__BGM__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpGameMod_C__pf1380491225, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__bPlayerDead__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Player Dead" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "bPlayerDead" },
	};
#endif
	void Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__bPlayerDead__pf_SetBit(void* Obj)
	{
		((AbpGameMod_C__pf1380491225*)Obj)->bpv__bPlayerDead__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__bPlayerDead__pf = { "bPlayerDead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpGameMod_C__pf1380491225), &Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__bPlayerDead__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__bPlayerDead__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__bPlayerDead__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__SpawnInerwal__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Spawn Inerwal" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SpawnInerwal" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__SpawnInerwal__pf = { "SpawnInerwal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpGameMod_C__pf1380491225, bpv__SpawnInerwal__pf), METADATA_PARAMS(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__SpawnInerwal__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__SpawnInerwal__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__LiveEnemies__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Live Enemies" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "LiveEnemies" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__LiveEnemies__pf = { "LiveEnemies", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpGameMod_C__pf1380491225, bpv__LiveEnemies__pf), METADATA_PARAMS(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__LiveEnemies__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__LiveEnemies__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__MaxWaves__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Max Waves" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "MaxWaves" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__MaxWaves__pf = { "MaxWaves", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpGameMod_C__pf1380491225, bpv__MaxWaves__pf), METADATA_PARAMS(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__MaxWaves__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__MaxWaves__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__ActiveWave__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Active Wave" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ActiveWave" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__ActiveWave__pf = { "ActiveWave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpGameMod_C__pf1380491225, bpv__ActiveWave__pf), METADATA_PARAMS(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__ActiveWave__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__ActiveWave__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__Score__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Score" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Score" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__Score__pf = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpGameMod_C__pf1380491225, bpv__Score__pf), METADATA_PARAMS(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__Score__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__Score__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__CoinsEarned__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Coins Earned" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "CoinsEarned" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__CoinsEarned__pf = { "CoinsEarned", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpGameMod_C__pf1380491225, bpv__CoinsEarned__pf), METADATA_PARAMS(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__CoinsEarned__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__CoinsEarned__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__Coins__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Coins" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Coins" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__Coins__pf = { "Coins", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpGameMod_C__pf1380491225, bpv__Coins__pf), METADATA_PARAMS(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__Coins__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__Coins__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__EnemySpownLocationMin__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Enemy Spown Location Min" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "EnemySpownLocationMin" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__EnemySpownLocationMin__pf = { "EnemySpownLocationMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpGameMod_C__pf1380491225, bpv__EnemySpownLocationMin__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__EnemySpownLocationMin__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__EnemySpownLocationMin__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__EnemySpownLocationMax__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Enemy Spown Location Max" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "EnemySpownLocationMax" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__EnemySpownLocationMax__pf = { "EnemySpownLocationMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpGameMod_C__pf1380491225, bpv__EnemySpownLocationMax__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__EnemySpownLocationMax__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__EnemySpownLocationMax__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__CoinxSavexName__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Coin Save Name" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Coin Save Name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__CoinxSavexName__pfTT = { "Coin Save Name", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpGameMod_C__pf1380491225, bpv__CoinxSavexName__pfTT), METADATA_PARAMS(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__CoinxSavexName__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__CoinxSavexName__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__SavexSub__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Save Sub" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Save Sub" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__SavexSub__pfT = { "Save Sub", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpGameMod_C__pf1380491225, bpv__SavexSub__pfT), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__SavexSub__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__SavexSub__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__GameOverMenuReference__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Game Over Menu Reference" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "GameOverMenuReference" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__GameOverMenuReference__pf = { "GameOverMenuReference", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpGameMod_C__pf1380491225, bpv__GameOverMenuReference__pf), Z_Construct_UClass_UQuitGame_C__pf3053510930_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__GameOverMenuReference__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__GameOverMenuReference__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_EndPlayReason__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_Event_EndPlayReason" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_EndPlayReason__pf = { "K2Node_Event_EndPlayReason", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpGameMod_C__pf1380491225, b0l__K2Node_Event_EndPlayReason__pf), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_EndPlayReason__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_EndPlayReason__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_b0l__K2Node_CustomEvent_ShakeType__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpGameMod__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_ShakeType" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_b0l__K2Node_CustomEvent_ShakeType__pf = { "K2Node_CustomEvent_ShakeType", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpGameMod_C__pf1380491225, b0l__K2Node_CustomEvent_ShakeType__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_b0l__K2Node_CustomEvent_ShakeType__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_b0l__K2Node_CustomEvent_ShakeType__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__BGM__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__bPlayerDead__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__SpawnInerwal__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__LiveEnemies__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__MaxWaves__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__ActiveWave__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__Score__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__CoinsEarned__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__Coins__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__EnemySpownLocationMin__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__EnemySpownLocationMax__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__CoinxSavexName__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__SavexSub__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_bpv__GameOverMenuReference__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_EndPlayReason__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::NewProp_b0l__K2Node_CustomEvent_ShakeType__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AbpGameMod_C__pf1380491225>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::ClassParams = {
		&AbpGameMod_C__pf1380491225::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AbpGameMod_C__pf1380491225()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Misc/bpGameMod"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("bpGameMod_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AbpGameMod_C__pf1380491225, TEXT("bpGameMod_C"), 2904880175);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AbpGameMod_C__pf1380491225>()
	{
		return AbpGameMod_C__pf1380491225::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AbpGameMod_C__pf1380491225(Z_Construct_UClass_AbpGameMod_C__pf1380491225, &AbpGameMod_C__pf1380491225::StaticClass, TEXT("/Game/Blueprints/Misc/bpGameMod"), TEXT("bpGameMod_C"), true, TEXT("/Game/Blueprints/Misc/bpGameMod"), TEXT("/Game/Blueprints/Misc/bpGameMod.bpGameMod_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AbpGameMod_C__pf1380491225);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
