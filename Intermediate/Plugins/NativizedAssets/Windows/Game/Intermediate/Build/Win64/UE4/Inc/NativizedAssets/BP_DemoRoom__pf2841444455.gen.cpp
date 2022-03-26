// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_DemoRoom__pf2841444455.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_DemoRoom__pf2841444455() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__BP_DemoRoom_Enum__pf();
// End Cross Module References
	DEFINE_FUNCTION(ABP_DemoRoom_C__pf2841444455::execbpf__AddRoomNames__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__Index__pf);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__Offset__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AddRoomNames__pf(Z_Param_bpp__Index__pf,Z_Param_bpp__Offset__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_DemoRoom_C__pf2841444455::execbpf__AddOpenTrim__pf)
	{
		P_GET_STRUCT(FVector,Z_Param_bpp__Scale__pf);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__Offset__pf);
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__Index__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AddOpenTrim__pf(Z_Param_bpp__Scale__pf,Z_Param_bpp__Offset__pf,Z_Param_bpp__Index__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_DemoRoom_C__pf2841444455::execbpf__AddLights__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__Index__pf);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__Offset__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AddLights__pf(Z_Param_bpp__Index__pf,Z_Param_bpp__Offset__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_DemoRoom_C__pf2841444455::execbpf__AddWall__pf)
	{
		P_GET_STRUCT(FVector,Z_Param_bpp__Scale__pf);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__Offset__pf);
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__Index__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AddWall__pf(Z_Param_bpp__Scale__pf,Z_Param_bpp__Offset__pf,Z_Param_bpp__Index__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_DemoRoom_C__pf2841444455::execbpf__AddTrim__pf)
	{
		P_GET_STRUCT(FVector,Z_Param_bpp__Scale__pf);
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__Index__pf);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__Offset__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AddTrim__pf(Z_Param_bpp__Scale__pf,Z_Param_bpp__Index__pf,Z_Param_bpp__Offset__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_DemoRoom_C__pf2841444455::execbpf__AddClamp__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__Offset__pf);
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__Index__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AddClamp__pf(Z_Param_bpp__Offset__pf,Z_Param_bpp__Index__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_DemoRoom_C__pf2841444455::execbpf__AddBackWall__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__Offset__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AddBackWall__pf(Z_Param_bpp__Offset__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_DemoRoom_C__pf2841444455::execbpf__AddLoopSections__pf)
	{
		P_GET_STRUCT(FVector,Z_Param_bpp__Scale__pf);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__Offset__pf);
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__Index__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AddLoopSections__pf(Z_Param_bpp__Scale__pf,Z_Param_bpp__Offset__pf,Z_Param_bpp__Index__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_DemoRoom_C__pf2841444455::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	static FName NAME_ABP_DemoRoom_C__pf2841444455_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_DemoRoom_C__pf2841444455::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_DemoRoom_C__pf2841444455_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_DemoRoom_C__pf2841444455::StaticRegisterNativesABP_DemoRoom_C__pf2841444455()
	{
		UClass* Class = ABP_DemoRoom_C__pf2841444455::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBackWall", &ABP_DemoRoom_C__pf2841444455::execbpf__AddBackWall__pf },
			{ "AddClamp", &ABP_DemoRoom_C__pf2841444455::execbpf__AddClamp__pf },
			{ "AddLights", &ABP_DemoRoom_C__pf2841444455::execbpf__AddLights__pf },
			{ "AddLoopSections", &ABP_DemoRoom_C__pf2841444455::execbpf__AddLoopSections__pf },
			{ "AddOpenTrim", &ABP_DemoRoom_C__pf2841444455::execbpf__AddOpenTrim__pf },
			{ "AddRoomNames", &ABP_DemoRoom_C__pf2841444455::execbpf__AddRoomNames__pf },
			{ "AddTrim", &ABP_DemoRoom_C__pf2841444455::execbpf__AddTrim__pf },
			{ "AddWall", &ABP_DemoRoom_C__pf2841444455::execbpf__AddWall__pf },
			{ "UserConstructionScript", &ABP_DemoRoom_C__pf2841444455::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddBackWall__pf_Statics
	{
		struct BP_DemoRoom_C__pf2841444455_eventbpf__AddBackWall__pf_Parms
		{
			float bpp__Offset__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__Offset__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddBackWall__pf_Statics::NewProp_bpp__Offset__pf = { "bpp__Offset__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoRoom_C__pf2841444455_eventbpf__AddBackWall__pf_Parms, bpp__Offset__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddBackWall__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddBackWall__pf_Statics::NewProp_bpp__Offset__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddBackWall__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "AddBackWall" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddBackWall__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455, nullptr, "AddBackWall", nullptr, nullptr, sizeof(BP_DemoRoom_C__pf2841444455_eventbpf__AddBackWall__pf_Parms), Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddBackWall__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddBackWall__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddBackWall__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddBackWall__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddBackWall__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "AddBackWall" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddBackWall__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddClamp__pf_Statics
	{
		struct BP_DemoRoom_C__pf2841444455_eventbpf__AddClamp__pf_Parms
		{
			float bpp__Offset__pf;
			int32 bpp__Index__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__Offset__pf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__Index__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddClamp__pf_Statics::NewProp_bpp__Offset__pf = { "bpp__Offset__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoRoom_C__pf2841444455_eventbpf__AddClamp__pf_Parms, bpp__Offset__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddClamp__pf_Statics::NewProp_bpp__Index__pf = { "bpp__Index__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoRoom_C__pf2841444455_eventbpf__AddClamp__pf_Parms, bpp__Index__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddClamp__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddClamp__pf_Statics::NewProp_bpp__Offset__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddClamp__pf_Statics::NewProp_bpp__Index__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddClamp__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "AddClamp" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddClamp__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455, nullptr, "AddClamp", nullptr, nullptr, sizeof(BP_DemoRoom_C__pf2841444455_eventbpf__AddClamp__pf_Parms), Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddClamp__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddClamp__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddClamp__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddClamp__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddClamp__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "AddClamp" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddClamp__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLights__pf_Statics
	{
		struct BP_DemoRoom_C__pf2841444455_eventbpf__AddLights__pf_Parms
		{
			int32 bpp__Index__pf;
			float bpp__Offset__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__Index__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__Offset__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLights__pf_Statics::NewProp_bpp__Index__pf = { "bpp__Index__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoRoom_C__pf2841444455_eventbpf__AddLights__pf_Parms, bpp__Index__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLights__pf_Statics::NewProp_bpp__Offset__pf = { "bpp__Offset__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoRoom_C__pf2841444455_eventbpf__AddLights__pf_Parms, bpp__Offset__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLights__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLights__pf_Statics::NewProp_bpp__Index__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLights__pf_Statics::NewProp_bpp__Offset__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLights__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "AddLights" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLights__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455, nullptr, "AddLights", nullptr, nullptr, sizeof(BP_DemoRoom_C__pf2841444455_eventbpf__AddLights__pf_Parms), Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLights__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLights__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLights__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLights__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLights__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "AddLights" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLights__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLoopSections__pf_Statics
	{
		struct BP_DemoRoom_C__pf2841444455_eventbpf__AddLoopSections__pf_Parms
		{
			FVector bpp__Scale__pf;
			float bpp__Offset__pf;
			int32 bpp__Index__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Scale__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__Offset__pf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__Index__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLoopSections__pf_Statics::NewProp_bpp__Scale__pf = { "bpp__Scale__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoRoom_C__pf2841444455_eventbpf__AddLoopSections__pf_Parms, bpp__Scale__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLoopSections__pf_Statics::NewProp_bpp__Offset__pf = { "bpp__Offset__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoRoom_C__pf2841444455_eventbpf__AddLoopSections__pf_Parms, bpp__Offset__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLoopSections__pf_Statics::NewProp_bpp__Index__pf = { "bpp__Index__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoRoom_C__pf2841444455_eventbpf__AddLoopSections__pf_Parms, bpp__Index__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLoopSections__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLoopSections__pf_Statics::NewProp_bpp__Scale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLoopSections__pf_Statics::NewProp_bpp__Offset__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLoopSections__pf_Statics::NewProp_bpp__Index__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLoopSections__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "AddLoopSections" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLoopSections__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455, nullptr, "AddLoopSections", nullptr, nullptr, sizeof(BP_DemoRoom_C__pf2841444455_eventbpf__AddLoopSections__pf_Parms), Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLoopSections__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLoopSections__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLoopSections__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLoopSections__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLoopSections__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "AddLoopSections" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLoopSections__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddOpenTrim__pf_Statics
	{
		struct BP_DemoRoom_C__pf2841444455_eventbpf__AddOpenTrim__pf_Parms
		{
			FVector bpp__Scale__pf;
			float bpp__Offset__pf;
			int32 bpp__Index__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Scale__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__Offset__pf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__Index__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddOpenTrim__pf_Statics::NewProp_bpp__Scale__pf = { "bpp__Scale__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoRoom_C__pf2841444455_eventbpf__AddOpenTrim__pf_Parms, bpp__Scale__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddOpenTrim__pf_Statics::NewProp_bpp__Offset__pf = { "bpp__Offset__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoRoom_C__pf2841444455_eventbpf__AddOpenTrim__pf_Parms, bpp__Offset__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddOpenTrim__pf_Statics::NewProp_bpp__Index__pf = { "bpp__Index__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoRoom_C__pf2841444455_eventbpf__AddOpenTrim__pf_Parms, bpp__Index__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddOpenTrim__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddOpenTrim__pf_Statics::NewProp_bpp__Scale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddOpenTrim__pf_Statics::NewProp_bpp__Offset__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddOpenTrim__pf_Statics::NewProp_bpp__Index__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddOpenTrim__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "AddOpenTrim" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddOpenTrim__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455, nullptr, "AddOpenTrim", nullptr, nullptr, sizeof(BP_DemoRoom_C__pf2841444455_eventbpf__AddOpenTrim__pf_Parms), Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddOpenTrim__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddOpenTrim__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddOpenTrim__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddOpenTrim__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddOpenTrim__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "AddOpenTrim" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddOpenTrim__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddRoomNames__pf_Statics
	{
		struct BP_DemoRoom_C__pf2841444455_eventbpf__AddRoomNames__pf_Parms
		{
			int32 bpp__Index__pf;
			float bpp__Offset__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__Index__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__Offset__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddRoomNames__pf_Statics::NewProp_bpp__Index__pf = { "bpp__Index__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoRoom_C__pf2841444455_eventbpf__AddRoomNames__pf_Parms, bpp__Index__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddRoomNames__pf_Statics::NewProp_bpp__Offset__pf = { "bpp__Offset__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoRoom_C__pf2841444455_eventbpf__AddRoomNames__pf_Parms, bpp__Offset__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddRoomNames__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddRoomNames__pf_Statics::NewProp_bpp__Index__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddRoomNames__pf_Statics::NewProp_bpp__Offset__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddRoomNames__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "AddRoomNames" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddRoomNames__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455, nullptr, "AddRoomNames", nullptr, nullptr, sizeof(BP_DemoRoom_C__pf2841444455_eventbpf__AddRoomNames__pf_Parms), Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddRoomNames__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddRoomNames__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddRoomNames__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddRoomNames__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddRoomNames__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "AddRoomNames" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddRoomNames__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddTrim__pf_Statics
	{
		struct BP_DemoRoom_C__pf2841444455_eventbpf__AddTrim__pf_Parms
		{
			FVector bpp__Scale__pf;
			int32 bpp__Index__pf;
			float bpp__Offset__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Scale__pf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__Index__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__Offset__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddTrim__pf_Statics::NewProp_bpp__Scale__pf = { "bpp__Scale__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoRoom_C__pf2841444455_eventbpf__AddTrim__pf_Parms, bpp__Scale__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddTrim__pf_Statics::NewProp_bpp__Index__pf = { "bpp__Index__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoRoom_C__pf2841444455_eventbpf__AddTrim__pf_Parms, bpp__Index__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddTrim__pf_Statics::NewProp_bpp__Offset__pf = { "bpp__Offset__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoRoom_C__pf2841444455_eventbpf__AddTrim__pf_Parms, bpp__Offset__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddTrim__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddTrim__pf_Statics::NewProp_bpp__Scale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddTrim__pf_Statics::NewProp_bpp__Index__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddTrim__pf_Statics::NewProp_bpp__Offset__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddTrim__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "AddTrim" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddTrim__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455, nullptr, "AddTrim", nullptr, nullptr, sizeof(BP_DemoRoom_C__pf2841444455_eventbpf__AddTrim__pf_Parms), Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddTrim__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddTrim__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddTrim__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddTrim__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddTrim__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "AddTrim" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddTrim__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddWall__pf_Statics
	{
		struct BP_DemoRoom_C__pf2841444455_eventbpf__AddWall__pf_Parms
		{
			FVector bpp__Scale__pf;
			float bpp__Offset__pf;
			int32 bpp__Index__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Scale__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__Offset__pf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__Index__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddWall__pf_Statics::NewProp_bpp__Scale__pf = { "bpp__Scale__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoRoom_C__pf2841444455_eventbpf__AddWall__pf_Parms, bpp__Scale__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddWall__pf_Statics::NewProp_bpp__Offset__pf = { "bpp__Offset__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoRoom_C__pf2841444455_eventbpf__AddWall__pf_Parms, bpp__Offset__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddWall__pf_Statics::NewProp_bpp__Index__pf = { "bpp__Index__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DemoRoom_C__pf2841444455_eventbpf__AddWall__pf_Parms, bpp__Index__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddWall__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddWall__pf_Statics::NewProp_bpp__Scale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddWall__pf_Statics::NewProp_bpp__Offset__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddWall__pf_Statics::NewProp_bpp__Index__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddWall__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "AddWall" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddWall__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455, nullptr, "AddWall", nullptr, nullptr, sizeof(BP_DemoRoom_C__pf2841444455_eventbpf__AddWall__pf_Parms), Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddWall__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddWall__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddWall__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddWall__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddWall__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "AddWall" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddWall__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_NoRegister()
	{
		return ABP_DemoRoom_C__pf2841444455::StaticClass();
	}
	struct Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RoomSize__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__RoomSize__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SectionWidth__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__SectionWidth__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TrimWidth__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__TrimWidth__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MirrorRoom__pf_MetaData[];
#endif
		static void NewProp_bpv__MirrorRoom__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__MirrorRoom__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Lights__pf_MetaData[];
#endif
		static void NewProp_bpv__Lights__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Lights__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LightRadius__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__LightRadius__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Brightness__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Brightness__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DoubleHeight__pf_MetaData[];
#endif
		static void NewProp_bpv__DoubleHeight__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__DoubleHeight__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LoopMesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__LoopMesh__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__OpenRoof__pf_MetaData[];
#endif
		static void NewProp_bpv__OpenRoof__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__OpenRoof__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__NumberofRooms__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__NumberofRooms__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SwitchColor__pf_MetaData[];
#endif
		static void NewProp_bpv__SwitchColor__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__SwitchColor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GlassWalls__pf_MetaData[];
#endif
		static void NewProp_bpv__GlassWalls__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__GlassWalls__pf;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__RoomNames__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RoomNames__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__RoomNames__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__RoomType__pf_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__RoomType__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RoomType__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__RoomType__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FrontDoor__pf_MetaData[];
#endif
		static void NewProp_bpv__FrontDoor__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__FrontDoor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__OpenBack__pf_MetaData[];
#endif
		static void NewProp_bpv__OpenBack__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__OpenBack__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CastShadows__pf_MetaData[];
#endif
		static void NewProp_bpv__CastShadows__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__CastShadows__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddBackWall__pf, "AddBackWall" }, // 1682737992
		{ &Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddClamp__pf, "AddClamp" }, // 616068029
		{ &Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLights__pf, "AddLights" }, // 3344699758
		{ &Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddLoopSections__pf, "AddLoopSections" }, // 2924129557
		{ &Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddOpenTrim__pf, "AddOpenTrim" }, // 4046300381
		{ &Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddRoomNames__pf, "AddRoomNames" }, // 3735314942
		{ &Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddTrim__pf, "AddTrim" }, // 3738217135
		{ &Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__AddWall__pf, "AddWall" }, // 369486609
		{ &Z_Construct_UFunction_ABP_DemoRoom_C__pf2841444455_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 2467930369
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_DemoRoom__pf2841444455.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_DemoRoom_C" },
		{ "ReplaceConverted", "/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoRoom.BP_DemoRoom_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__Scene1__pf_MetaData[] = {
		{ "Category", "BP_DemoRoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "Scene1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__Scene1__pf = { "Scene1", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoRoom_C__pf2841444455, bpv__Scene1__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__Scene1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__Scene1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__RoomSize__pf_MetaData[] = {
		{ "Category", "RoomProperties" },
		{ "DisplayName", "Room Size" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "RoomSize" },
		{ "UIMax", "30" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__RoomSize__pf = { "RoomSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoRoom_C__pf2841444455, bpv__RoomSize__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__RoomSize__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__RoomSize__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__SectionWidth__pf_MetaData[] = {
		{ "Category", "Sizes" },
		{ "DisplayName", "Section Width" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "SectionWidth" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__SectionWidth__pf = { "SectionWidth", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoRoom_C__pf2841444455, bpv__SectionWidth__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__SectionWidth__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__SectionWidth__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__TrimWidth__pf_MetaData[] = {
		{ "Category", "Sizes" },
		{ "DisplayName", "Trim Width" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "TrimWidth" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__TrimWidth__pf = { "TrimWidth", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoRoom_C__pf2841444455, bpv__TrimWidth__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__TrimWidth__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__TrimWidth__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__MirrorRoom__pf_MetaData[] = {
		{ "Category", "RoomProperties" },
		{ "DisplayName", "Mirror Room" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "MirrorRoom" },
	};
#endif
	void Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__MirrorRoom__pf_SetBit(void* Obj)
	{
		((ABP_DemoRoom_C__pf2841444455*)Obj)->bpv__MirrorRoom__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__MirrorRoom__pf = { "MirrorRoom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_DemoRoom_C__pf2841444455), &Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__MirrorRoom__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__MirrorRoom__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__MirrorRoom__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__Lights__pf_MetaData[] = {
		{ "Category", "RoomProperties" },
		{ "DisplayName", "Lights" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "Lights" },
	};
#endif
	void Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__Lights__pf_SetBit(void* Obj)
	{
		((ABP_DemoRoom_C__pf2841444455*)Obj)->bpv__Lights__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__Lights__pf = { "Lights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_DemoRoom_C__pf2841444455), &Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__Lights__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__Lights__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__Lights__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__LightRadius__pf_MetaData[] = {
		{ "Category", "LightProperties" },
		{ "DisplayName", "Light Radius" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "LightRadius" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__LightRadius__pf = { "LightRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoRoom_C__pf2841444455, bpv__LightRadius__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__LightRadius__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__LightRadius__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__Brightness__pf_MetaData[] = {
		{ "Category", "LightProperties" },
		{ "DisplayName", "Brightness" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "Brightness" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__Brightness__pf = { "Brightness", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoRoom_C__pf2841444455, bpv__Brightness__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__Brightness__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__Brightness__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__DoubleHeight__pf_MetaData[] = {
		{ "Category", "RoomProperties" },
		{ "DisplayName", "Double Height" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "DoubleHeight" },
	};
#endif
	void Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__DoubleHeight__pf_SetBit(void* Obj)
	{
		((ABP_DemoRoom_C__pf2841444455*)Obj)->bpv__DoubleHeight__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__DoubleHeight__pf = { "DoubleHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_DemoRoom_C__pf2841444455), &Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__DoubleHeight__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__DoubleHeight__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__DoubleHeight__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__LoopMesh__pf_MetaData[] = {
		{ "Category", "meshes" },
		{ "DisplayName", "Loop Mesh" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "LoopMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__LoopMesh__pf = { "LoopMesh", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoRoom_C__pf2841444455, bpv__LoopMesh__pf), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__LoopMesh__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__LoopMesh__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__OpenRoof__pf_MetaData[] = {
		{ "Category", "RoomProperties" },
		{ "DisplayName", "Open Roof" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "OpenRoof" },
	};
#endif
	void Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__OpenRoof__pf_SetBit(void* Obj)
	{
		((ABP_DemoRoom_C__pf2841444455*)Obj)->bpv__OpenRoof__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__OpenRoof__pf = { "OpenRoof", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_DemoRoom_C__pf2841444455), &Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__OpenRoof__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__OpenRoof__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__OpenRoof__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__NumberofRooms__pf_MetaData[] = {
		{ "Category", "RoomProperties" },
		{ "DisplayName", "Numberof Rooms" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "NumberofRooms" },
		{ "UIMax", "30" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__NumberofRooms__pf = { "NumberofRooms", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoRoom_C__pf2841444455, bpv__NumberofRooms__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__NumberofRooms__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__NumberofRooms__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__SwitchColor__pf_MetaData[] = {
		{ "Category", "RoomProperties" },
		{ "DisplayName", "Switch Color" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "SwitchColor" },
	};
#endif
	void Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__SwitchColor__pf_SetBit(void* Obj)
	{
		((ABP_DemoRoom_C__pf2841444455*)Obj)->bpv__SwitchColor__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__SwitchColor__pf = { "SwitchColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_DemoRoom_C__pf2841444455), &Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__SwitchColor__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__SwitchColor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__SwitchColor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__GlassWalls__pf_MetaData[] = {
		{ "Category", "RoomProperties" },
		{ "DisplayName", "Glass Walls" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "GlassWalls" },
	};
#endif
	void Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__GlassWalls__pf_SetBit(void* Obj)
	{
		((ABP_DemoRoom_C__pf2841444455*)Obj)->bpv__GlassWalls__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__GlassWalls__pf = { "GlassWalls", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_DemoRoom_C__pf2841444455), &Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__GlassWalls__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__GlassWalls__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__GlassWalls__pf_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__RoomNames__pf_Inner = { "bpv__RoomNames__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__RoomNames__pf_MetaData[] = {
		{ "Category", "RoomProperties" },
		{ "DisplayName", "Room Names" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "RoomNames" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__RoomNames__pf = { "RoomNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoRoom_C__pf2841444455, bpv__RoomNames__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__RoomNames__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__RoomNames__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__RoomType__pf_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__RoomType__pf_Inner = { "bpv__RoomType__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_NativizedAssets_E__BP_DemoRoom_Enum__pf, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__RoomType__pf_MetaData[] = {
		{ "Category", "RoomProperties" },
		{ "DisplayName", "Room Type" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "RoomType" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__RoomType__pf = { "RoomType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DemoRoom_C__pf2841444455, bpv__RoomType__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__RoomType__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__RoomType__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__FrontDoor__pf_MetaData[] = {
		{ "Category", "RoomProperties" },
		{ "DisplayName", "Front Door" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "FrontDoor" },
	};
#endif
	void Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__FrontDoor__pf_SetBit(void* Obj)
	{
		((ABP_DemoRoom_C__pf2841444455*)Obj)->bpv__FrontDoor__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__FrontDoor__pf = { "FrontDoor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_DemoRoom_C__pf2841444455), &Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__FrontDoor__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__FrontDoor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__FrontDoor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__OpenBack__pf_MetaData[] = {
		{ "Category", "RoomProperties" },
		{ "DisplayName", "Open Back" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "OpenBack" },
	};
#endif
	void Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__OpenBack__pf_SetBit(void* Obj)
	{
		((ABP_DemoRoom_C__pf2841444455*)Obj)->bpv__OpenBack__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__OpenBack__pf = { "OpenBack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_DemoRoom_C__pf2841444455), &Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__OpenBack__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__OpenBack__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__OpenBack__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__CastShadows__pf_MetaData[] = {
		{ "Category", "LightProperties" },
		{ "DisplayName", "Cast Shadows" },
		{ "ModuleRelativePath", "Public/BP_DemoRoom__pf2841444455.h" },
		{ "OverrideNativeName", "CastShadows" },
		{ "Tooltip", "You may want to disable shadows for extremely large rooms or if lots of other lights are used nearby." },
	};
#endif
	void Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__CastShadows__pf_SetBit(void* Obj)
	{
		((ABP_DemoRoom_C__pf2841444455*)Obj)->bpv__CastShadows__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__CastShadows__pf = { "CastShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_DemoRoom_C__pf2841444455), &Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__CastShadows__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__CastShadows__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__CastShadows__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__Scene1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__RoomSize__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__SectionWidth__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__TrimWidth__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__MirrorRoom__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__Lights__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__LightRadius__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__Brightness__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__DoubleHeight__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__LoopMesh__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__OpenRoof__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__NumberofRooms__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__SwitchColor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__GlassWalls__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__RoomNames__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__RoomNames__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__RoomType__pf_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__RoomType__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__RoomType__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__FrontDoor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__OpenBack__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::NewProp_bpv__CastShadows__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_DemoRoom_C__pf2841444455>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::ClassParams = {
		&ABP_DemoRoom_C__pf2841444455::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoRoom"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_DemoRoom_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_DemoRoom_C__pf2841444455, TEXT("BP_DemoRoom_C"), 4084196341);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_DemoRoom_C__pf2841444455>()
	{
		return ABP_DemoRoom_C__pf2841444455::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_DemoRoom_C__pf2841444455(Z_Construct_UClass_ABP_DemoRoom_C__pf2841444455, &ABP_DemoRoom_C__pf2841444455::StaticClass, TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoRoom"), TEXT("BP_DemoRoom_C"), true, TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoRoom"), TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoRoom.BP_DemoRoom_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_DemoRoom_C__pf2841444455);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
