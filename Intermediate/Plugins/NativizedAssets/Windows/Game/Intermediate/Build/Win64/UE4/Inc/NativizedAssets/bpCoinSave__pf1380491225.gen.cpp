// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/bpCoinSave__pf1380491225.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebpCoinSave__pf1380491225() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UbpCoinSave_C__pf1380491225_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UbpCoinSave_C__pf1380491225();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
// End Cross Module References
	void UbpCoinSave_C__pf1380491225::StaticRegisterNativesUbpCoinSave_C__pf1380491225()
	{
	}
	UClass* Z_Construct_UClass_UbpCoinSave_C__pf1380491225_NoRegister()
	{
		return UbpCoinSave_C__pf1380491225::StaticClass();
	}
	struct Z_Construct_UClass_UbpCoinSave_C__pf1380491225_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CoinCount__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__CoinCount__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UbpCoinSave_C__pf1380491225_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UbpCoinSave_C__pf1380491225_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "bpCoinSave__pf1380491225.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/bpCoinSave__pf1380491225.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "bpCoinSave_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Misc/bpCoinSave.bpCoinSave_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UbpCoinSave_C__pf1380491225_Statics::NewProp_bpv__CoinCount__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Coin Count" },
		{ "ModuleRelativePath", "Public/bpCoinSave__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "CoinCount" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UbpCoinSave_C__pf1380491225_Statics::NewProp_bpv__CoinCount__pf = { "CoinCount", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UbpCoinSave_C__pf1380491225, bpv__CoinCount__pf), METADATA_PARAMS(Z_Construct_UClass_UbpCoinSave_C__pf1380491225_Statics::NewProp_bpv__CoinCount__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UbpCoinSave_C__pf1380491225_Statics::NewProp_bpv__CoinCount__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UbpCoinSave_C__pf1380491225_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UbpCoinSave_C__pf1380491225_Statics::NewProp_bpv__CoinCount__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UbpCoinSave_C__pf1380491225_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UbpCoinSave_C__pf1380491225>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UbpCoinSave_C__pf1380491225_Statics::ClassParams = {
		&UbpCoinSave_C__pf1380491225::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UbpCoinSave_C__pf1380491225_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UbpCoinSave_C__pf1380491225_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UbpCoinSave_C__pf1380491225_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UbpCoinSave_C__pf1380491225_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UbpCoinSave_C__pf1380491225()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Misc/bpCoinSave"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("bpCoinSave_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UbpCoinSave_C__pf1380491225_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UbpCoinSave_C__pf1380491225, TEXT("bpCoinSave_C"), 1174734138);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UbpCoinSave_C__pf1380491225>()
	{
		return UbpCoinSave_C__pf1380491225::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UbpCoinSave_C__pf1380491225(Z_Construct_UClass_UbpCoinSave_C__pf1380491225, &UbpCoinSave_C__pf1380491225::StaticClass, TEXT("/Game/Blueprints/Misc/bpCoinSave"), TEXT("bpCoinSave_C"), true, TEXT("/Game/Blueprints/Misc/bpCoinSave"), TEXT("/Game/Blueprints/Misc/bpCoinSave.bpCoinSave_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UbpCoinSave_C__pf1380491225);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
