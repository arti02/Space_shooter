// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/bpEnemyOne__pf2680686903.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebpEnemyOne__pf2680686903() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpEnemyOne_C__pf2680686903();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABpEnemyBase_C__pf2680686903();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AbpEnemyOne_C__pf2680686903::execbpf__ExecuteUbergraph_bpEnemyOne__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_bpEnemyOne__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	void AbpEnemyOne_C__pf2680686903::StaticRegisterNativesAbpEnemyOne_C__pf2680686903()
	{
		UClass* Class = AbpEnemyOne_C__pf2680686903::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_bpEnemyOne_0", &AbpEnemyOne_C__pf2680686903::execbpf__ExecuteUbergraph_bpEnemyOne__pf_0 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AbpEnemyOne_C__pf2680686903_bpf__ExecuteUbergraph_bpEnemyOne__pf_0_Statics
	{
		struct bpEnemyOne_C__pf2680686903_eventbpf__ExecuteUbergraph_bpEnemyOne__pf_0_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AbpEnemyOne_C__pf2680686903_bpf__ExecuteUbergraph_bpEnemyOne__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpEnemyOne_C__pf2680686903_eventbpf__ExecuteUbergraph_bpEnemyOne__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpEnemyOne_C__pf2680686903_bpf__ExecuteUbergraph_bpEnemyOne__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpEnemyOne_C__pf2680686903_bpf__ExecuteUbergraph_bpEnemyOne__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpEnemyOne_C__pf2680686903_bpf__ExecuteUbergraph_bpEnemyOne__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/bpEnemyOne__pf2680686903.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_bpEnemyOne_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpEnemyOne_C__pf2680686903_bpf__ExecuteUbergraph_bpEnemyOne__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpEnemyOne_C__pf2680686903, nullptr, "ExecuteUbergraph_bpEnemyOne_0", nullptr, nullptr, sizeof(bpEnemyOne_C__pf2680686903_eventbpf__ExecuteUbergraph_bpEnemyOne__pf_0_Parms), Z_Construct_UFunction_AbpEnemyOne_C__pf2680686903_bpf__ExecuteUbergraph_bpEnemyOne__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpEnemyOne_C__pf2680686903_bpf__ExecuteUbergraph_bpEnemyOne__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpEnemyOne_C__pf2680686903_bpf__ExecuteUbergraph_bpEnemyOne__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpEnemyOne_C__pf2680686903_bpf__ExecuteUbergraph_bpEnemyOne__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpEnemyOne_C__pf2680686903_bpf__ExecuteUbergraph_bpEnemyOne__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_AbpEnemyOne_C__pf2680686903();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_bpEnemyOne_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpEnemyOne_C__pf2680686903_bpf__ExecuteUbergraph_bpEnemyOne__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_NoRegister()
	{
		return AbpEnemyOne_C__pf2680686903::StaticClass();
	}
	struct Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ProjectileSpawn__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ProjectileSpawn__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__Temp_struct_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__Temp_struct_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__Temp_struct_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__Temp_struct_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b1l__K2Node_Event_DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABpEnemyBase_C__pf2680686903,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AbpEnemyOne_C__pf2680686903_bpf__ExecuteUbergraph_bpEnemyOne__pf_0, "ExecuteUbergraph_bpEnemyOne_0" }, // 8636553
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "bpEnemyOne__pf2680686903.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/bpEnemyOne__pf2680686903.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "bpEnemyOne_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Enemies/bpEnemyOne.bpEnemyOne_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::NewProp_bpv__ProjectileSpawn__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpEnemyOne__pf2680686903.h" },
		{ "OverrideNativeName", "ProjectileSpawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::NewProp_bpv__ProjectileSpawn__pf = { "ProjectileSpawn", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpEnemyOne_C__pf2680686903, bpv__ProjectileSpawn__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::NewProp_bpv__ProjectileSpawn__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::NewProp_bpv__ProjectileSpawn__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::NewProp_b1l__Temp_struct_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpEnemyOne__pf2680686903.h" },
		{ "OverrideNativeName", "Temp_struct_Variable" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::NewProp_b1l__Temp_struct_Variable__pf = { "Temp_struct_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpEnemyOne_C__pf2680686903, b1l__Temp_struct_Variable__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::NewProp_b1l__Temp_struct_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::NewProp_b1l__Temp_struct_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::NewProp_b1l__Temp_struct_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpEnemyOne__pf2680686903.h" },
		{ "OverrideNativeName", "Temp_struct_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::NewProp_b1l__Temp_struct_Variable_1__pf = { "Temp_struct_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpEnemyOne_C__pf2680686903, b1l__Temp_struct_Variable_1__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::NewProp_b1l__Temp_struct_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::NewProp_b1l__Temp_struct_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpEnemyOne__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpEnemyOne_C__pf2680686903, b1l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::NewProp_bpv__ProjectileSpawn__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::NewProp_b1l__Temp_struct_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::NewProp_b1l__Temp_struct_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AbpEnemyOne_C__pf2680686903>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::ClassParams = {
		&AbpEnemyOne_C__pf2680686903::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AbpEnemyOne_C__pf2680686903()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Enemies/bpEnemyOne"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("bpEnemyOne_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AbpEnemyOne_C__pf2680686903_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AbpEnemyOne_C__pf2680686903, TEXT("bpEnemyOne_C"), 1473060668);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AbpEnemyOne_C__pf2680686903>()
	{
		return AbpEnemyOne_C__pf2680686903::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AbpEnemyOne_C__pf2680686903(Z_Construct_UClass_AbpEnemyOne_C__pf2680686903, &AbpEnemyOne_C__pf2680686903::StaticClass, TEXT("/Game/Blueprints/Enemies/bpEnemyOne"), TEXT("bpEnemyOne_C"), true, TEXT("/Game/Blueprints/Enemies/bpEnemyOne"), TEXT("/Game/Blueprints/Enemies/bpEnemyOne.bpEnemyOne_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AbpEnemyOne_C__pf2680686903);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
