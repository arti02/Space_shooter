// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_DemoDisplay_Enum__pf2841444455.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_DemoDisplay_Enum__pf2841444455() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__BP_DemoDisplay_Enum__pf();
// End Cross Module References
	static UEnum* E__BP_DemoDisplay_Enum__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoDisplay_Enum"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("BP_DemoDisplay_Enum")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__BP_DemoDisplay_Enum__pf, EnumPackage, TEXT("BP_DemoDisplay_Enum"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__BP_DemoDisplay_Enum__pf>()
	{
		return E__BP_DemoDisplay_Enum__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__BP_DemoDisplay_Enum__pf(E__BP_DemoDisplay_Enum__pf_StaticEnum, TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoDisplay_Enum"), TEXT("BP_DemoDisplay_Enum"), true, TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoDisplay_Enum"), TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoDisplay_Enum.BP_DemoDisplay_Enum"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__BP_DemoDisplay_Enum__pf_Hash() { return 2557636871U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__BP_DemoDisplay_Enum__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoDisplay_Enum"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("BP_DemoDisplay_Enum"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__BP_DemoDisplay_Enum__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BP_DemoDisplay_Enum::ROund", (int64)E__BP_DemoDisplay_Enum__pf::ROund },
				{ "BP_DemoDisplay_Enum::SquareL", (int64)E__BP_DemoDisplay_Enum__pf::SquareL },
				{ "BP_DemoDisplay_Enum::RoomL", (int64)E__BP_DemoDisplay_Enum__pf::RoomL },
				{ "BP_DemoDisplay_Enum::DescriptionOnly", (int64)E__BP_DemoDisplay_Enum__pf::DescriptionOnly },
				{ "BP_DemoDisplay_Enum::NewEnumerator0", (int64)E__BP_DemoDisplay_Enum__pf::NewEnumerator0 },
				{ "BP_DemoDisplay_Enum::BP_DemoDisplay_MAX", (int64)E__BP_DemoDisplay_Enum__pf::E__BP_DemoDisplay_Enum__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DescriptionOnly.DisplayName", "DescriptionOnly" },
				{ "DescriptionOnly.Name", "E__BP_DemoDisplay_Enum__pf::DescriptionOnly" },
				{ "DescriptionOnly.OverrideName", "BP_DemoDisplay_Enum::DescriptionOnly" },
				{ "E__BP_DemoDisplay_Enum__pf_MAX.Name", "E__BP_DemoDisplay_Enum__pf::E__BP_DemoDisplay_Enum__pf_MAX" },
				{ "E__BP_DemoDisplay_Enum__pf_MAX.OverrideName", "BP_DemoDisplay_Enum::BP_DemoDisplay_MAX" },
				{ "EnumDisplayNameFn", "E__BP_DemoDisplay_Enum__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/BP_DemoDisplay_Enum__pf2841444455.h" },
				{ "NewEnumerator0.DisplayName", "SquareL_FlatWall" },
				{ "NewEnumerator0.Name", "E__BP_DemoDisplay_Enum__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "BP_DemoDisplay_Enum::NewEnumerator0" },
				{ "OverrideNativeName", "BP_DemoDisplay_Enum" },
				{ "ReplaceConverted", "/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoDisplay_Enum.BP_DemoDisplay_Enum" },
				{ "RoomL.DisplayName", "RoomL" },
				{ "RoomL.Name", "E__BP_DemoDisplay_Enum__pf::RoomL" },
				{ "RoomL.OverrideName", "BP_DemoDisplay_Enum::RoomL" },
				{ "ROund.DisplayName", "ROund" },
				{ "ROund.Name", "E__BP_DemoDisplay_Enum__pf::ROund" },
				{ "ROund.OverrideName", "BP_DemoDisplay_Enum::ROund" },
				{ "SquareL.DisplayName", "SquareL" },
				{ "SquareL.Name", "E__BP_DemoDisplay_Enum__pf::SquareL" },
				{ "SquareL.OverrideName", "BP_DemoDisplay_Enum::SquareL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoDisplay_Enum")); },
				E__BP_DemoDisplay_Enum__pf__GetUserFriendlyName,
				"BP_DemoDisplay_Enum",
				"E__BP_DemoDisplay_Enum__pf",
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
