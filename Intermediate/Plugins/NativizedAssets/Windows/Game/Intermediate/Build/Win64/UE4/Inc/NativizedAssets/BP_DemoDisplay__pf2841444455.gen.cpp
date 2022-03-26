// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_DemoDisplay__pf2841444455.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_DemoDisplay__pf2841444455() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__BP_DemoDisplay_Enum__pf();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(ABP_DemoDisplay_C__pf2841444455::execbpf__FixLegacyScale__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__FixLegacyScale__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_DemoDisplay_C__pf2841444455::execbpf__Add1stLineDescription__pf)
	{
		P_GET_STRUCT(FTransform,Z_Param_bpp__Transform__pf);
		P_GET_STRUCT(FVector,Z_Param_bpp__PositionBias1stLine__pf);
		P_GET_STRUCT(FVector,Z_Param_bpp__PositionBias2ndLine__pf);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_bpp__2ndLineTransform__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Add1stLineDescription__pf(Z_Param_bpp__Transform__pf,Z_Param_bpp__PositionBias1stLine__pf,Z_Param_bpp__PositionBias2ndLine__pf,Z_Param_Out_bpp__2ndLineTransform__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_DemoDisplay_C__pf2841444455::execbpf__Add2ndLineDescription__pf)
	{
		P_GET_STRUCT(FTransform,Z_Param_bpp__Transform__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Add2ndLineDescription__pf(Z_Param_bpp__Transform__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_DemoDisplay_C__pf2841444455::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	static FName NAME_ABP_DemoDisplay_C__pf2841444455_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_DemoDisplay_C__pf2841444455::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_DemoDisplay_C__pf2841444455_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_DemoDisplay_C__pf2841444455::StaticRegisterNativesABP_DemoDisplay_C__pf2841444455()
	{
		UClass* Class = ABP_DemoDisplay_C__pf2841444455::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add1stLineDescription", &ABP_DemoDisplay_C__pf2841444455::execbpf__Add1stLineDescription__pf },
			{ "Add2ndLineDescription", &ABP_DemoDisplay_C__pf2841444455::execbpf__Add2ndLineDescription__pf },
			{ "FixLegacyScale", &ABP_DemoDisplay_C__pf2841444455::execbpf__FixLegacyScale__pf },
			{ "UserConstructionScript", &ABP_DemoDisplay_C__pf2841444455::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add1stLineDescription__pf_Statics
	{
		struct BP_DemoDisplay_C__pf2841444455_eventbpf__Add1stLineDescription__pf_Parms
		{
			FTransform bpp__Transform__pf;
			FVector bpp__PositionBias1stLine__pf;
			FVector bpp__PositionBias2ndLine__pf;
			FTransform bpp__2ndLineTransform__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Transform__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__PositionBias1stLine__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__PositionBias2ndLine__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__2ndLineTransform__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add1stLineDescription__pf_Statics::NewProp_bpp__Transform__pf = { "bpp__Transform__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoDisplay_C__pf2841444455_eventbpf__Add1stLineDescription__pf_Parms, bpp__Transform__pf), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add1stLineDescription__pf_Statics::NewProp_bpp__PositionBias1stLine__pf = { "bpp__PositionBias1stLine__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoDisplay_C__pf2841444455_eventbpf__Add1stLineDescription__pf_Parms, bpp__PositionBias1stLine__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add1stLineDescription__pf_Statics::NewProp_bpp__PositionBias2ndLine__pf = { "bpp__PositionBias2ndLine__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoDisplay_C__pf2841444455_eventbpf__Add1stLineDescription__pf_Parms, bpp__PositionBias2ndLine__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add1stLineDescription__pf_Statics::NewProp_bpp__2ndLineTransform__pf = { "bpp__2ndLineTransform__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoDisplay_C__pf2841444455_eventbpf__Add1stLineDescription__pf_Parms, bpp__2ndLineTransform__pf), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add1stLineDescription__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add1stLineDescription__pf_Statics::NewProp_bpp__Transform__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add1stLineDescription__pf_Statics::NewProp_bpp__PositionBias1stLine__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add1stLineDescription__pf_Statics::NewProp_bpp__PositionBias2ndLine__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add1stLineDescription__pf_Statics::NewProp_bpp__2ndLineTransform__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add1stLineDescription__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/BP_DemoDisplay__pf2841444455.h" },
		{ "OverrideNativeName", "Add1stLineDescription" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add1stLineDescription__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455, nullptr, "Add1stLineDescription", nullptr, nullptr, sizeof(BP_DemoDisplay_C__pf2841444455_eventbpf__Add1stLineDescription__pf_Parms), Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add1stLineDescription__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add1stLineDescription__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add1stLineDescription__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add1stLineDescription__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add1stLineDescription__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Add1stLineDescription" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add1stLineDescription__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add2ndLineDescription__pf_Statics
	{
		struct BP_DemoDisplay_C__pf2841444455_eventbpf__Add2ndLineDescription__pf_Parms
		{
			FTransform bpp__Transform__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Transform__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add2ndLineDescription__pf_Statics::NewProp_bpp__Transform__pf = { "bpp__Transform__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoDisplay_C__pf2841444455_eventbpf__Add2ndLineDescription__pf_Parms, bpp__Transform__pf), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add2ndLineDescription__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add2ndLineDescription__pf_Statics::NewProp_bpp__Transform__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add2ndLineDescription__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_DemoDisplay__pf2841444455.h" },
		{ "OverrideNativeName", "Add2ndLineDescription" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add2ndLineDescription__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455, nullptr, "Add2ndLineDescription", nullptr, nullptr, sizeof(BP_DemoDisplay_C__pf2841444455_eventbpf__Add2ndLineDescription__pf_Parms), Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add2ndLineDescription__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add2ndLineDescription__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add2ndLineDescription__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add2ndLineDescription__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add2ndLineDescription__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Add2ndLineDescription" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add2ndLineDescription__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__FixLegacyScale__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__FixLegacyScale__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_DemoDisplay__pf2841444455.h" },
		{ "OverrideNativeName", "FixLegacyScale" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__FixLegacyScale__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455, nullptr, "FixLegacyScale", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__FixLegacyScale__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__FixLegacyScale__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__FixLegacyScale__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "FixLegacyScale" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__FixLegacyScale__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/BP_DemoDisplay__pf2841444455.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_NoRegister()
	{
		return ABP_DemoDisplay_C__pf2841444455::StaticClass();
	}
	struct Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Scene1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Scene1__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__Type__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Type__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__Type__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Text__pf_MetaData[];
#endif
		static void NewProp_bpv__Text__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Text__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Number__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__Number__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Description__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__Description__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Description2ndLine__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__Description2ndLine__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Transform__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Transform__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BackgroundColor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__BackgroundColor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PositionBias1stLine__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__PositionBias1stLine__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PositionBias1stLineRoom__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__PositionBias1stLineRoom__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PositionBias2ndLine__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__PositionBias2ndLine__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PositionBias2ndLineRoom__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__PositionBias2ndLineRoom__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ScaleTransform__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__ScaleTransform__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MeshScale__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__MeshScale__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FixScale__pf_MetaData[];
#endif
		static void NewProp_bpv__FixScale__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__FixScale__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add1stLineDescription__pf, "Add1stLineDescription" }, // 701568856
		{ &Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__Add2ndLineDescription__pf, "Add2ndLineDescription" }, // 2336635709
		{ &Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__FixLegacyScale__pf, "FixLegacyScale" }, // 2654955808
		{ &Z_Construct_UFunction_ABP_DemoDisplay_C__pf2841444455_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 2128598519
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_DemoDisplay__pf2841444455.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_DemoDisplay__pf2841444455.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_DemoDisplay_C" },
		{ "ReplaceConverted", "/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoDisplay.BP_DemoDisplay_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Scene1__pf_MetaData[] = {
		{ "Category", "BP_DemoDisplay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_DemoDisplay__pf2841444455.h" },
		{ "OverrideNativeName", "Scene1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Scene1__pf = { "Scene1", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoDisplay_C__pf2841444455, bpv__Scene1__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Scene1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Scene1__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Type__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Type__pf_MetaData[] = {
		{ "Category", "Properties" },
		{ "DisplayName", "Type" },
		{ "ModuleRelativePath", "Public/BP_DemoDisplay__pf2841444455.h" },
		{ "OverrideNativeName", "Type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Type__pf = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoDisplay_C__pf2841444455, bpv__Type__pf), Z_Construct_UEnum_NativizedAssets_E__BP_DemoDisplay_Enum__pf, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Type__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Type__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Text__pf_MetaData[] = {
		{ "Category", "Properties" },
		{ "DisplayName", "Text" },
		{ "ModuleRelativePath", "Public/BP_DemoDisplay__pf2841444455.h" },
		{ "OverrideNativeName", "Text" },
	};
#endif
	void Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Text__pf_SetBit(void* Obj)
	{
		((ABP_DemoDisplay_C__pf2841444455*)Obj)->bpv__Text__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Text__pf = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_DemoDisplay_C__pf2841444455), &Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Text__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Text__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Text__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Number__pf_MetaData[] = {
		{ "Category", "Text" },
		{ "DisplayName", "Number" },
		{ "ModuleRelativePath", "Public/BP_DemoDisplay__pf2841444455.h" },
		{ "OverrideNativeName", "Number" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Number__pf = { "Number", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoDisplay_C__pf2841444455, bpv__Number__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Number__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Number__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Description__pf_MetaData[] = {
		{ "Category", "Text" },
		{ "DisplayName", "Description" },
		{ "ModuleRelativePath", "Public/BP_DemoDisplay__pf2841444455.h" },
		{ "OverrideNativeName", "Description" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Description__pf = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoDisplay_C__pf2841444455, bpv__Description__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Description__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Description__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Description2ndLine__pf_MetaData[] = {
		{ "Category", "Text" },
		{ "DisplayName", "Description 2nd Line" },
		{ "ModuleRelativePath", "Public/BP_DemoDisplay__pf2841444455.h" },
		{ "OverrideNativeName", "Description2ndLine" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Description2ndLine__pf = { "Description2ndLine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoDisplay_C__pf2841444455, bpv__Description2ndLine__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Description2ndLine__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Description2ndLine__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Transform__pf_MetaData[] = {
		{ "Category", "Text" },
		{ "DisplayName", "Transform" },
		{ "ModuleRelativePath", "Public/BP_DemoDisplay__pf2841444455.h" },
		{ "OverrideNativeName", "Transform" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Transform__pf = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoDisplay_C__pf2841444455, bpv__Transform__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Transform__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Transform__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__BackgroundColor__pf_MetaData[] = {
		{ "Category", "Properties" },
		{ "DisplayName", "Background Color" },
		{ "ModuleRelativePath", "Public/BP_DemoDisplay__pf2841444455.h" },
		{ "OverrideNativeName", "BackgroundColor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__BackgroundColor__pf = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoDisplay_C__pf2841444455, bpv__BackgroundColor__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__BackgroundColor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__BackgroundColor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__PositionBias1stLine__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Position Bias 1st Line" },
		{ "ModuleRelativePath", "Public/BP_DemoDisplay__pf2841444455.h" },
		{ "OverrideNativeName", "PositionBias1stLine" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__PositionBias1stLine__pf = { "PositionBias1stLine", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoDisplay_C__pf2841444455, bpv__PositionBias1stLine__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__PositionBias1stLine__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__PositionBias1stLine__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__PositionBias1stLineRoom__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Position Bias 1st Line Room" },
		{ "ModuleRelativePath", "Public/BP_DemoDisplay__pf2841444455.h" },
		{ "OverrideNativeName", "PositionBias1stLineRoom" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__PositionBias1stLineRoom__pf = { "PositionBias1stLineRoom", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoDisplay_C__pf2841444455, bpv__PositionBias1stLineRoom__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__PositionBias1stLineRoom__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__PositionBias1stLineRoom__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__PositionBias2ndLine__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Position Bias 2nd Line" },
		{ "ModuleRelativePath", "Public/BP_DemoDisplay__pf2841444455.h" },
		{ "OverrideNativeName", "PositionBias2ndLine" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__PositionBias2ndLine__pf = { "PositionBias2ndLine", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoDisplay_C__pf2841444455, bpv__PositionBias2ndLine__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__PositionBias2ndLine__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__PositionBias2ndLine__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__PositionBias2ndLineRoom__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Position Bias 2nd Line Room" },
		{ "ModuleRelativePath", "Public/BP_DemoDisplay__pf2841444455.h" },
		{ "OverrideNativeName", "PositionBias2ndLineRoom" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__PositionBias2ndLineRoom__pf = { "PositionBias2ndLineRoom", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoDisplay_C__pf2841444455, bpv__PositionBias2ndLineRoom__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__PositionBias2ndLineRoom__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__PositionBias2ndLineRoom__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__ScaleTransform__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Scale Transform" },
		{ "ModuleRelativePath", "Public/BP_DemoDisplay__pf2841444455.h" },
		{ "OverrideNativeName", "ScaleTransform" },
		{ "Tooltip", "Fix for wrong scaled Legacy Cotent" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__ScaleTransform__pf = { "ScaleTransform", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoDisplay_C__pf2841444455, bpv__ScaleTransform__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__ScaleTransform__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__ScaleTransform__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__MeshScale__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Mesh Scale" },
		{ "ModuleRelativePath", "Public/BP_DemoDisplay__pf2841444455.h" },
		{ "OverrideNativeName", "MeshScale" },
		{ "Tooltip", "Fix for wrong scaled Legacy Cotent" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__MeshScale__pf = { "MeshScale", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoDisplay_C__pf2841444455, bpv__MeshScale__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__MeshScale__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__MeshScale__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__FixScale__pf_MetaData[] = {
		{ "Category", "ScaleFix" },
		{ "DisplayName", "Fix Scale" },
		{ "ModuleRelativePath", "Public/BP_DemoDisplay__pf2841444455.h" },
		{ "OverrideNativeName", "FixScale" },
		{ "Tooltip", "this should be set to true" },
	};
#endif
	void Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__FixScale__pf_SetBit(void* Obj)
	{
		((ABP_DemoDisplay_C__pf2841444455*)Obj)->bpv__FixScale__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__FixScale__pf = { "FixScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_DemoDisplay_C__pf2841444455), &Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__FixScale__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__FixScale__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__FixScale__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Scene1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Type__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Type__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Text__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Number__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Description__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Description2ndLine__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__Transform__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__BackgroundColor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__PositionBias1stLine__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__PositionBias1stLineRoom__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__PositionBias2ndLine__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__PositionBias2ndLineRoom__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__ScaleTransform__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__MeshScale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::NewProp_bpv__FixScale__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_DemoDisplay_C__pf2841444455>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::ClassParams = {
		&ABP_DemoDisplay_C__pf2841444455::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoDisplay"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_DemoDisplay_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_DemoDisplay_C__pf2841444455, TEXT("BP_DemoDisplay_C"), 2691548884);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_DemoDisplay_C__pf2841444455>()
	{
		return ABP_DemoDisplay_C__pf2841444455::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_DemoDisplay_C__pf2841444455(Z_Construct_UClass_ABP_DemoDisplay_C__pf2841444455, &ABP_DemoDisplay_C__pf2841444455::StaticClass, TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoDisplay"), TEXT("BP_DemoDisplay_C"), true, TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoDisplay"), TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoDisplay.BP_DemoDisplay_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_DemoDisplay_C__pf2841444455);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
