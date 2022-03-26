// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_DemoRoom_Enum__pf2841444455.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_DemoRoom_Enum__pf2841444455() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__BP_DemoRoom_Enum__pf();
// End Cross Module References
	static UEnum* E__BP_DemoRoom_Enum__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoRoom_Enum"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("BP_DemoRoom_Enum")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__BP_DemoRoom_Enum__pf, EnumPackage, TEXT("BP_DemoRoom_Enum"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__BP_DemoRoom_Enum__pf>()
	{
		return E__BP_DemoRoom_Enum__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__BP_DemoRoom_Enum__pf(E__BP_DemoRoom_Enum__pf_StaticEnum, TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoRoom_Enum"), TEXT("BP_DemoRoom_Enum"), true, TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoRoom_Enum"), TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoRoom_Enum.BP_DemoRoom_Enum"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__BP_DemoRoom_Enum__pf_Hash() { return 3282726523U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__BP_DemoRoom_Enum__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoRoom_Enum"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("BP_DemoRoom_Enum"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__BP_DemoRoom_Enum__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BP_DemoRoom_Enum::Standard", (int64)E__BP_DemoRoom_Enum__pf::Standard },
				{ "BP_DemoRoom_Enum::RoofwithHole", (int64)E__BP_DemoRoom_Enum__pf::RoofwithHole },
				{ "BP_DemoRoom_Enum::RoofOpen", (int64)E__BP_DemoRoom_Enum__pf::RoofOpen },
				{ "BP_DemoRoom_Enum::BP_DemoRoom_MAX", (int64)E__BP_DemoRoom_Enum__pf::E__BP_DemoRoom_Enum__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__BP_DemoRoom_Enum__pf_MAX.Name", "E__BP_DemoRoom_Enum__pf::E__BP_DemoRoom_Enum__pf_MAX" },
				{ "E__BP_DemoRoom_Enum__pf_MAX.OverrideName", "BP_DemoRoom_Enum::BP_DemoRoom_MAX" },
				{ "EnumDisplayNameFn", "E__BP_DemoRoom_Enum__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/BP_DemoRoom_Enum__pf2841444455.h" },
				{ "OverrideNativeName", "BP_DemoRoom_Enum" },
				{ "ReplaceConverted", "/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoRoom_Enum.BP_DemoRoom_Enum" },
				{ "RoofOpen.Name", "E__BP_DemoRoom_Enum__pf::RoofOpen" },
				{ "RoofOpen.OverrideName", "BP_DemoRoom_Enum::RoofOpen" },
				{ "RoofwithHole.Name", "E__BP_DemoRoom_Enum__pf::RoofwithHole" },
				{ "RoofwithHole.OverrideName", "BP_DemoRoom_Enum::RoofwithHole" },
				{ "Standard.Name", "E__BP_DemoRoom_Enum__pf::Standard" },
				{ "Standard.OverrideName", "BP_DemoRoom_Enum::Standard" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoRoom_Enum")); },
				E__BP_DemoRoom_Enum__pf__GetUserFriendlyName,
				"BP_DemoRoom_Enum",
				"E__BP_DemoRoom_Enum__pf",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::Dynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
