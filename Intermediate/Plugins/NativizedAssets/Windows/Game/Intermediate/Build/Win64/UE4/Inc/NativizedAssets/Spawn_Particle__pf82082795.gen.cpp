// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Spawn_Particle__pf82082795.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawn_Particle__pf82082795() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ASpawn_Particle_C__pf82082795_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ASpawn_Particle_C__pf82082795();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASpawn_Particle_C__pf82082795::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpawn_Particle_C__pf82082795::execbpf__ExecuteUbergraph_Spawn_Particle__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_Spawn_Particle__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_ASpawn_Particle_C__pf82082795_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ASpawn_Particle_C__pf82082795::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASpawn_Particle_C__pf82082795_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void ASpawn_Particle_C__pf82082795::StaticRegisterNativesASpawn_Particle_C__pf82082795()
	{
		UClass* Class = ASpawn_Particle_C__pf82082795::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_Spawn_Particle_0", &ASpawn_Particle_C__pf82082795::execbpf__ExecuteUbergraph_Spawn_Particle__pf_0 },
			{ "ReceiveBeginPlay", &ASpawn_Particle_C__pf82082795::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpawn_Particle_C__pf82082795_bpf__ExecuteUbergraph_Spawn_Particle__pf_0_Statics
	{
		struct Spawn_Particle_C__pf82082795_eventbpf__ExecuteUbergraph_Spawn_Particle__pf_0_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpawn_Particle_C__pf82082795_bpf__ExecuteUbergraph_Spawn_Particle__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Spawn_Particle_C__pf82082795_eventbpf__ExecuteUbergraph_Spawn_Particle__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawn_Particle_C__pf82082795_bpf__ExecuteUbergraph_Spawn_Particle__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawn_Particle_C__pf82082795_bpf__ExecuteUbergraph_Spawn_Particle__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawn_Particle_C__pf82082795_bpf__ExecuteUbergraph_Spawn_Particle__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Spawn_Particle__pf82082795.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_Spawn_Particle_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawn_Particle_C__pf82082795_bpf__ExecuteUbergraph_Spawn_Particle__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawn_Particle_C__pf82082795, nullptr, "ExecuteUbergraph_Spawn_Particle_0", nullptr, nullptr, sizeof(Spawn_Particle_C__pf82082795_eventbpf__ExecuteUbergraph_Spawn_Particle__pf_0_Parms), Z_Construct_UFunction_ASpawn_Particle_C__pf82082795_bpf__ExecuteUbergraph_Spawn_Particle__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawn_Particle_C__pf82082795_bpf__ExecuteUbergraph_Spawn_Particle__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpawn_Particle_C__pf82082795_bpf__ExecuteUbergraph_Spawn_Particle__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawn_Particle_C__pf82082795_bpf__ExecuteUbergraph_Spawn_Particle__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpawn_Particle_C__pf82082795_bpf__ExecuteUbergraph_Spawn_Particle__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_ASpawn_Particle_C__pf82082795();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_Spawn_Particle_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpawn_Particle_C__pf82082795_bpf__ExecuteUbergraph_Spawn_Particle__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpawn_Particle_C__pf82082795_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawn_Particle_C__pf82082795_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/Spawn_Particle__pf82082795.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawn_Particle_C__pf82082795_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawn_Particle_C__pf82082795, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpawn_Particle_C__pf82082795_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawn_Particle_C__pf82082795_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpawn_Particle_C__pf82082795_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ASpawn_Particle_C__pf82082795();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpawn_Particle_C__pf82082795_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpawn_Particle_C__pf82082795_NoRegister()
	{
		return ASpawn_Particle_C__pf82082795::StaticClass();
	}
	struct Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__VFX__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__VFX__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__interval__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__interval__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__isLoop__pf_MetaData[];
#endif
		static void NewProp_bpv__isLoop__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__isLoop__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawn_Particle_C__pf82082795_bpf__ExecuteUbergraph_Spawn_Particle__pf_0, "ExecuteUbergraph_Spawn_Particle_0" }, // 226694324
		{ &Z_Construct_UFunction_ASpawn_Particle_C__pf82082795_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3100013070
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Spawn_Particle__pf82082795.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Spawn_Particle__pf82082795.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Spawn_Particle_C" },
		{ "ReplaceConverted", "/Game/Realistic_Starter_VFX_Pack_Vol2/Blueprints/Spawn_Particle.Spawn_Particle_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__VFX__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Spawn_Particle__pf82082795.h" },
		{ "OverrideNativeName", "VFX" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__VFX__pf = { "VFX", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawn_Particle_C__pf82082795, bpv__VFX__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__VFX__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__VFX__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Spawn_Particle__pf82082795.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawn_Particle_C__pf82082795, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__interval__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Interval" },
		{ "ModuleRelativePath", "Public/Spawn_Particle__pf82082795.h" },
		{ "OverrideNativeName", "interval" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__interval__pf = { "interval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawn_Particle_C__pf82082795, bpv__interval__pf), METADATA_PARAMS(Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__interval__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__interval__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__isLoop__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Loop" },
		{ "ModuleRelativePath", "Public/Spawn_Particle__pf82082795.h" },
		{ "OverrideNativeName", "isLoop" },
	};
#endif
	void Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__isLoop__pf_SetBit(void* Obj)
	{
		((ASpawn_Particle_C__pf82082795*)Obj)->bpv__isLoop__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__isLoop__pf = { "isLoop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpawn_Particle_C__pf82082795), &Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__isLoop__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__isLoop__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__isLoop__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__VFX__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__interval__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::NewProp_bpv__isLoop__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawn_Particle_C__pf82082795>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::ClassParams = {
		&ASpawn_Particle_C__pf82082795::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawn_Particle_C__pf82082795()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Blueprints/Spawn_Particle"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Spawn_Particle_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawn_Particle_C__pf82082795_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ASpawn_Particle_C__pf82082795, TEXT("Spawn_Particle_C"), 1153251051);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ASpawn_Particle_C__pf82082795>()
	{
		return ASpawn_Particle_C__pf82082795::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawn_Particle_C__pf82082795(Z_Construct_UClass_ASpawn_Particle_C__pf82082795, &ASpawn_Particle_C__pf82082795::StaticClass, TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Blueprints/Spawn_Particle"), TEXT("Spawn_Particle_C"), true, TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Blueprints/Spawn_Particle"), TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Blueprints/Spawn_Particle.Spawn_Particle_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawn_Particle_C__pf82082795);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
