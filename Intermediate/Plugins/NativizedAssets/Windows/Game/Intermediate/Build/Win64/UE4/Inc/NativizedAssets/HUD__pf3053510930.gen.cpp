// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/HUD__pf3053510930.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUD__pf3053510930() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UHUD_C__pf3053510930_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UHUD_C__pf3053510930();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpPlayer_C__pf1380491225_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpGameMod_C__pf1380491225_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHUD_C__pf3053510930::execbpf__ScoreBind__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->bpf__ScoreBind__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHUD_C__pf3053510930::execbpf__CoinBind__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->bpf__CoinBind__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHUD_C__pf3053510930::execbpf__HealthBind__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->bpf__HealthBind__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHUD_C__pf3053510930::execbpf__Construct__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Construct__pf();
		P_NATIVE_END;
	}
	static FName NAME_UHUD_C__pf3053510930_bpf__Construct__pf = FName(TEXT("Construct"));
	void UHUD_C__pf3053510930::eventbpf__Construct__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHUD_C__pf3053510930_bpf__Construct__pf),NULL);
	}
	void UHUD_C__pf3053510930::StaticRegisterNativesUHUD_C__pf3053510930()
	{
		UClass* Class = UHUD_C__pf3053510930::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CoinBind", &UHUD_C__pf3053510930::execbpf__CoinBind__pf },
			{ "Construct", &UHUD_C__pf3053510930::execbpf__Construct__pf },
			{ "HealthBind", &UHUD_C__pf3053510930::execbpf__HealthBind__pf },
			{ "ScoreBind", &UHUD_C__pf3053510930::execbpf__ScoreBind__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__CoinBind__pf_Statics
	{
		struct HUD_C__pf3053510930_eventbpf__CoinBind__pf_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__CoinBind__pf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient, 1, STRUCT_OFFSET(HUD_C__pf3053510930_eventbpf__CoinBind__pf_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__CoinBind__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__CoinBind__pf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__CoinBind__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/HUD__pf3053510930.h" },
		{ "OverrideNativeName", "CoinBind" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__CoinBind__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUD_C__pf3053510930, nullptr, "CoinBind", nullptr, nullptr, sizeof(HUD_C__pf3053510930_eventbpf__CoinBind__pf_Parms), Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__CoinBind__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__CoinBind__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__CoinBind__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__CoinBind__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__CoinBind__pf()
	{
		UObject* Outer = Z_Construct_UClass_UHUD_C__pf3053510930();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "CoinBind" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__CoinBind__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__Construct__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__Construct__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**t * Called after the underlying slate widget is constructed.  Depending on how the slate object is usedt * this event may be called multiple times due to adding and removing from the hierarchy.t * If you need a true called-once-when-created event, use OnInitialized.t */" },
		{ "CppFromBpEvent", "" },
		{ "Keywords", "Begin Play" },
		{ "ModuleRelativePath", "Public/HUD__pf3053510930.h" },
		{ "OverrideNativeName", "Construct" },
		{ "ToolTip", "Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__Construct__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUD_C__pf3053510930, nullptr, "Construct", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__Construct__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__Construct__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__Construct__pf()
	{
		UObject* Outer = Z_Construct_UClass_UHUD_C__pf3053510930();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Construct" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__Construct__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__HealthBind__pf_Statics
	{
		struct HUD_C__pf3053510930_eventbpf__HealthBind__pf_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__HealthBind__pf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(HUD_C__pf3053510930_eventbpf__HealthBind__pf_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__HealthBind__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__HealthBind__pf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__HealthBind__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/HUD__pf3053510930.h" },
		{ "OverrideNativeName", "HealthBind" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__HealthBind__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUD_C__pf3053510930, nullptr, "HealthBind", nullptr, nullptr, sizeof(HUD_C__pf3053510930_eventbpf__HealthBind__pf_Parms), Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__HealthBind__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__HealthBind__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__HealthBind__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__HealthBind__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__HealthBind__pf()
	{
		UObject* Outer = Z_Construct_UClass_UHUD_C__pf3053510930();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "HealthBind" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__HealthBind__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__ScoreBind__pf_Statics
	{
		struct HUD_C__pf3053510930_eventbpf__ScoreBind__pf_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__ScoreBind__pf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient, 1, STRUCT_OFFSET(HUD_C__pf3053510930_eventbpf__ScoreBind__pf_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__ScoreBind__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__ScoreBind__pf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__ScoreBind__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/HUD__pf3053510930.h" },
		{ "OverrideNativeName", "ScoreBind" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__ScoreBind__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUD_C__pf3053510930, nullptr, "ScoreBind", nullptr, nullptr, sizeof(HUD_C__pf3053510930_eventbpf__ScoreBind__pf_Parms), Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__ScoreBind__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__ScoreBind__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__ScoreBind__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__ScoreBind__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__ScoreBind__pf()
	{
		UObject* Outer = Z_Construct_UClass_UHUD_C__pf3053510930();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ScoreBind" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__ScoreBind__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHUD_C__pf3053510930_NoRegister()
	{
		return UHUD_C__pf3053510930::StaticClass();
	}
	struct Z_Construct_UClass_UHUD_C__pf3053510930_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HealthBar__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__HealthBar__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_97__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_97__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BpxPlayer__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__BpxPlayer__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BpxGamexMod__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__BpxGamexMod__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HP__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__HP__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CurrentCoins__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__CurrentCoins__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CurrentScore__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__CurrentScore__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHUD_C__pf3053510930_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHUD_C__pf3053510930_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__CoinBind__pf, "CoinBind" }, // 430066008
		{ &Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__Construct__pf, "Construct" }, // 2824477845
		{ &Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__HealthBind__pf, "HealthBind" }, // 505292993
		{ &Z_Construct_UFunction_UHUD_C__pf3053510930_bpf__ScoreBind__pf, "ScoreBind" }, // 1858121539
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUD_C__pf3053510930_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HUD__pf3053510930.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HUD__pf3053510930.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "HUD_C" },
		{ "ReplaceConverted", "/Game/Blueprints/UI/HUD.HUD_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__HealthBar__pf_MetaData[] = {
		{ "Category", "HUD" },
		{ "DisplayName", "HealthBar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD__pf3053510930.h" },
		{ "OverrideNativeName", "HealthBar" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__HealthBar__pf = { "HealthBar", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUD_C__pf3053510930, bpv__HealthBar__pf), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__HealthBar__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__HealthBar__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__TextBlock_1__pf_MetaData[] = {
		{ "DisplayName", "TextBlock_1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD__pf3053510930.h" },
		{ "OverrideNativeName", "TextBlock_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__TextBlock_1__pf = { "TextBlock_1", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUD_C__pf3053510930, bpv__TextBlock_1__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__TextBlock_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__TextBlock_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__TextBlock_97__pf_MetaData[] = {
		{ "DisplayName", "TextBlock_97" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD__pf3053510930.h" },
		{ "OverrideNativeName", "TextBlock_97" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__TextBlock_97__pf = { "TextBlock_97", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUD_C__pf3053510930, bpv__TextBlock_97__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__TextBlock_97__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__TextBlock_97__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__BpxPlayer__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Bp Player" },
		{ "ModuleRelativePath", "Public/HUD__pf3053510930.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Bp Player" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__BpxPlayer__pfT = { "Bp Player", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUD_C__pf3053510930, bpv__BpxPlayer__pfT), Z_Construct_UClass_AbpPlayer_C__pf1380491225_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__BpxPlayer__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__BpxPlayer__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__BpxGamexMod__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Bp Game Mod" },
		{ "ModuleRelativePath", "Public/HUD__pf3053510930.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Bp Game Mod" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__BpxGamexMod__pfTT = { "Bp Game Mod", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUD_C__pf3053510930, bpv__BpxGamexMod__pfTT), Z_Construct_UClass_AbpGameMod_C__pf1380491225_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__BpxGamexMod__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__BpxGamexMod__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__HP__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "HP" },
		{ "ModuleRelativePath", "Public/HUD__pf3053510930.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "HP" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__HP__pf = { "HP", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUD_C__pf3053510930, bpv__HP__pf), METADATA_PARAMS(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__HP__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__HP__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__CurrentCoins__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Current Coins" },
		{ "ModuleRelativePath", "Public/HUD__pf3053510930.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "CurrentCoins" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__CurrentCoins__pf = { "CurrentCoins", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUD_C__pf3053510930, bpv__CurrentCoins__pf), METADATA_PARAMS(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__CurrentCoins__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__CurrentCoins__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__CurrentScore__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Current Score" },
		{ "ModuleRelativePath", "Public/HUD__pf3053510930.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "CurrentScore" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__CurrentScore__pf = { "CurrentScore", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUD_C__pf3053510930, bpv__CurrentScore__pf), METADATA_PARAMS(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__CurrentScore__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__CurrentScore__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HUD__pf3053510930.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBp_Game_Mod" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf = { "K2Node_DynamicCast_AsBp_Game_Mod", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUD_C__pf3053510930, b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf), Z_Construct_UClass_AbpGameMod_C__pf1380491225_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HUD__pf3053510930.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((UHUD_C__pf3053510930*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHUD_C__pf3053510930), &Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HUD__pf3053510930.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBp_Player" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf = { "K2Node_DynamicCast_AsBp_Player", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUD_C__pf3053510930, b0l__K2Node_DynamicCast_AsBp_Player__pf), Z_Construct_UClass_AbpPlayer_C__pf1380491225_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/HUD__pf3053510930.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((UHUD_C__pf3053510930*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHUD_C__pf3053510930), &Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHUD_C__pf3053510930_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__HealthBar__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__TextBlock_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__TextBlock_97__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__BpxPlayer__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__BpxGamexMod__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__HP__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__CurrentCoins__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_bpv__CurrentScore__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUD_C__pf3053510930_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHUD_C__pf3053510930_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHUD_C__pf3053510930>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHUD_C__pf3053510930_Statics::ClassParams = {
		&UHUD_C__pf3053510930::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHUD_C__pf3053510930_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_C__pf3053510930_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHUD_C__pf3053510930()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/UI/HUD"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("HUD_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHUD_C__pf3053510930_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UHUD_C__pf3053510930, TEXT("HUD_C"), 2936876336);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UHUD_C__pf3053510930>()
	{
		return UHUD_C__pf3053510930::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHUD_C__pf3053510930(Z_Construct_UClass_UHUD_C__pf3053510930, &UHUD_C__pf3053510930::StaticClass, TEXT("/Game/Blueprints/UI/HUD"), TEXT("HUD_C"), true, TEXT("/Game/Blueprints/UI/HUD"), TEXT("/Game/Blueprints/UI/HUD.HUD_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHUD_C__pf3053510930);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
