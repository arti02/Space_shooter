// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/bpProjectilePlayerRocket__pf4197612240.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebpProjectilePlayerRocket__pf4197612240() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AbpProjectilePlayerRocket_C__pf4197612240::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpProjectilePlayerRocket_C__pf4197612240::execbpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf);
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__OtherBodyIndex__pf);
		P_GET_UBOOL(Z_Param_bpp__bFromSweep__pf);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__SweepResult__pf__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf,Z_Param_bpp__bFromSweep__pf,Z_Param_Out_bpp__SweepResult__pf__const);
		P_NATIVE_END;
	}
	static FName NAME_AbpProjectilePlayerRocket_C__pf4197612240_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AbpProjectilePlayerRocket_C__pf4197612240::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		bpProjectilePlayerRocket_C__pf4197612240_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AbpProjectilePlayerRocket_C__pf4197612240_bpf__ReceiveTick__pf),&Parms);
	}
	void AbpProjectilePlayerRocket_C__pf4197612240::StaticRegisterNativesAbpProjectilePlayerRocket_C__pf4197612240()
	{
		UClass* Class = AbpProjectilePlayerRocket_C__pf4197612240::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature", &AbpProjectilePlayerRocket_C__pf4197612240::execbpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf },
			{ "ReceiveTick", &AbpProjectilePlayerRocket_C__pf4197612240::execbpf__ReceiveTick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics
	{
		struct bpProjectilePlayerRocket_C__pf4197612240_eventbpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms
		{
			UPrimitiveComponent* bpp__OverlappedComponent__pf;
			AActor* bpp__OtherActor__pf;
			UPrimitiveComponent* bpp__OtherComp__pf;
			int32 bpp__OtherBodyIndex__pf;
			bool bpp__bFromSweep__pf;
			FHitResult bpp__SweepResult__pf__const;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OverlappedComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OverlappedComponent__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherComp__pf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__OtherBodyIndex__pf;
		static void NewProp_bpp__bFromSweep__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__bFromSweep__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__SweepResult__pf__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__SweepResult__pf__const;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf = { "bpp__OverlappedComponent__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpProjectilePlayerRocket_C__pf4197612240_eventbpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpProjectilePlayerRocket_C__pf4197612240_eventbpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf = { "bpp__OtherComp__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpProjectilePlayerRocket_C__pf4197612240_eventbpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherBodyIndex__pf = { "bpp__OtherBodyIndex__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpProjectilePlayerRocket_C__pf4197612240_eventbpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherBodyIndex__pf), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf_SetBit(void* Obj)
	{
		((bpProjectilePlayerRocket_C__pf4197612240_eventbpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms*)Obj)->bpp__bFromSweep__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf = { "bpp__bFromSweep__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(bpProjectilePlayerRocket_C__pf4197612240_eventbpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), &Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const = { "bpp__SweepResult__pf__const", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpProjectilePlayerRocket_C__pf4197612240_eventbpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__SweepResult__pf__const), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/bpProjectilePlayerRocket__pf4197612240.h" },
		{ "OverrideNativeName", "BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240, nullptr, "BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature", nullptr, nullptr, sizeof(bpProjectilePlayerRocket_C__pf4197612240_eventbpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpProjectilePlayerRocket_C__pf4197612240_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/bpProjectilePlayerRocket__pf4197612240.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(bpProjectilePlayerRocket_C__pf4197612240_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_NoRegister()
	{
		return AbpProjectilePlayerRocket_C__pf4197612240::StaticClass();
	}
	struct Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HomingBox__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__HomingBox__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Enemy__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Enemy__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IncreasedSpeed__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__IncreasedSpeed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b1l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData[];
#endif
		static void NewProp_b1l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_ComponentBoundEvent_bFromSweep__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_ComponentBoundEvent_SweepResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_AsBp_Enemy_Base__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_DynamicCast_AsBp_Enemy_Base__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_DynamicCast_bSuccess__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf, "BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature" }, // 3190616355
		{ &Z_Construct_UFunction_AbpProjectilePlayerRocket_C__pf4197612240_bpf__ReceiveTick__pf, "ReceiveTick" }, // 3834454486
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "bpProjectilePlayerRocket__pf4197612240.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/bpProjectilePlayerRocket__pf4197612240.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "bpProjectilePlayerRocket_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Projectiles/bpProjectilePlayerRocket.bpProjectilePlayerRocket_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_bpv__HomingBox__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpProjectilePlayerRocket__pf4197612240.h" },
		{ "OverrideNativeName", "HomingBox" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_bpv__HomingBox__pf = { "HomingBox", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerRocket_C__pf4197612240, bpv__HomingBox__pf), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_bpv__HomingBox__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_bpv__HomingBox__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_bpv__Enemy__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Enemy" },
		{ "ModuleRelativePath", "Public/bpProjectilePlayerRocket__pf4197612240.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Enemy" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_bpv__Enemy__pf = { "Enemy", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerRocket_C__pf4197612240, bpv__Enemy__pf), Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_bpv__Enemy__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_bpv__Enemy__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_bpv__IncreasedSpeed__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Increased Speed" },
		{ "ModuleRelativePath", "Public/bpProjectilePlayerRocket__pf4197612240.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "IncreasedSpeed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_bpv__IncreasedSpeed__pf = { "IncreasedSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerRocket_C__pf4197612240, bpv__IncreasedSpeed__pf), METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_bpv__IncreasedSpeed__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_bpv__IncreasedSpeed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectilePlayerRocket__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerRocket_C__pf4197612240, b1l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpProjectilePlayerRocket__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OverlappedComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = { "K2Node_ComponentBoundEvent_OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerRocket_C__pf4197612240, b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectilePlayerRocket__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf = { "K2Node_ComponentBoundEvent_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerRocket_C__pf4197612240, b1l__K2Node_ComponentBoundEvent_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpProjectilePlayerRocket__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf = { "K2Node_ComponentBoundEvent_OtherComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerRocket_C__pf4197612240, b1l__K2Node_ComponentBoundEvent_OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectilePlayerRocket__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherBodyIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = { "K2Node_ComponentBoundEvent_OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerRocket_C__pf4197612240, b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf), METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectilePlayerRocket__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_bFromSweep" },
	};
#endif
	void Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit(void* Obj)
	{
		((AbpProjectilePlayerRocket_C__pf4197612240*)Obj)->b1l__K2Node_ComponentBoundEvent_bFromSweep__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_bFromSweep__pf = { "K2Node_ComponentBoundEvent_bFromSweep", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpProjectilePlayerRocket_C__pf4197612240), &Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectilePlayerRocket__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_SweepResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_SweepResult__pf = { "K2Node_ComponentBoundEvent_SweepResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerRocket_C__pf4197612240, b1l__K2Node_ComponentBoundEvent_SweepResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_DynamicCast_AsBp_Enemy_Base__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectilePlayerRocket__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBp_Enemy_Base" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_DynamicCast_AsBp_Enemy_Base__pf = { "K2Node_DynamicCast_AsBp_Enemy_Base", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerRocket_C__pf4197612240, b1l__K2Node_DynamicCast_AsBp_Enemy_Base__pf), Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_DynamicCast_AsBp_Enemy_Base__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_DynamicCast_AsBp_Enemy_Base__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectilePlayerRocket__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AbpProjectilePlayerRocket_C__pf4197612240*)Obj)->b1l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpProjectilePlayerRocket_C__pf4197612240), &Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_bpv__HomingBox__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_bpv__Enemy__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_bpv__IncreasedSpeed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_bFromSweep__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_SweepResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_DynamicCast_AsBp_Enemy_Base__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AbpProjectilePlayerRocket_C__pf4197612240>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::ClassParams = {
		&AbpProjectilePlayerRocket_C__pf4197612240::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Projectiles/bpProjectilePlayerRocket"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("bpProjectilePlayerRocket_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AbpProjectilePlayerRocket_C__pf4197612240, TEXT("bpProjectilePlayerRocket_C"), 1428776302);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AbpProjectilePlayerRocket_C__pf4197612240>()
	{
		return AbpProjectilePlayerRocket_C__pf4197612240::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AbpProjectilePlayerRocket_C__pf4197612240(Z_Construct_UClass_AbpProjectilePlayerRocket_C__pf4197612240, &AbpProjectilePlayerRocket_C__pf4197612240::StaticClass, TEXT("/Game/Blueprints/Projectiles/bpProjectilePlayerRocket"), TEXT("bpProjectilePlayerRocket_C"), true, TEXT("/Game/Blueprints/Projectiles/bpProjectilePlayerRocket"), TEXT("/Game/Blueprints/Projectiles/bpProjectilePlayerRocket.bpProjectilePlayerRocket_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AbpProjectilePlayerRocket_C__pf4197612240);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
