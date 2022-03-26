// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/bpPickUpBase__pf407142385.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebpPickUpBase__pf407142385() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpPickUpBase_C__pf407142385_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpPickUpBase_C__pf407142385();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpPlayer_C__pf1380491225_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AbpPickUpBase_C__pf407142385::execbpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf);
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__OtherBodyIndex__pf);
		P_GET_UBOOL(Z_Param_bpp__bFromSweep__pf);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__SweepResult__pf__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf,Z_Param_bpp__bFromSweep__pf,Z_Param_Out_bpp__SweepResult__pf__const);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpPickUpBase_C__pf407142385::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	static FName NAME_AbpPickUpBase_C__pf407142385_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AbpPickUpBase_C__pf407142385::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		bpPickUpBase_C__pf407142385_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AbpPickUpBase_C__pf407142385_bpf__ReceiveTick__pf),&Parms);
	}
	void AbpPickUpBase_C__pf407142385::StaticRegisterNativesAbpPickUpBase_C__pf407142385()
	{
		UClass* Class = AbpPickUpBase_C__pf407142385::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature", &AbpPickUpBase_C__pf407142385::execbpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf },
			{ "ReceiveTick", &AbpPickUpBase_C__pf407142385::execbpf__ReceiveTick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics
	{
		struct bpPickUpBase_C__pf407142385_eventbpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf = { "bpp__OverlappedComponent__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPickUpBase_C__pf407142385_eventbpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPickUpBase_C__pf407142385_eventbpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf = { "bpp__OtherComp__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPickUpBase_C__pf407142385_eventbpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherBodyIndex__pf = { "bpp__OtherBodyIndex__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPickUpBase_C__pf407142385_eventbpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherBodyIndex__pf), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf_SetBit(void* Obj)
	{
		((bpPickUpBase_C__pf407142385_eventbpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms*)Obj)->bpp__bFromSweep__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf = { "bpp__bFromSweep__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(bpPickUpBase_C__pf407142385_eventbpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), &Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const = { "bpp__SweepResult__pf__const", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPickUpBase_C__pf407142385_eventbpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__SweepResult__pf__const), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/bpPickUpBase__pf407142385.h" },
		{ "OverrideNativeName", "BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpPickUpBase_C__pf407142385, nullptr, "BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature", nullptr, nullptr, sizeof(bpPickUpBase_C__pf407142385_eventbpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpPickUpBase_C__pf407142385();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPickUpBase_C__pf407142385_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/bpPickUpBase__pf407142385.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpPickUpBase_C__pf407142385, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(bpPickUpBase_C__pf407142385_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpPickUpBase_C__pf407142385();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AbpPickUpBase_C__pf407142385_NoRegister()
	{
		return AbpPickUpBase_C__pf407142385::StaticClass();
	}
	struct Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Box__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Box__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RotatingMovement__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__RotatingMovement__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ProjectileMovement__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ProjectileMovement__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PickUpMesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PickUpMesh__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Scene__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Scene__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bpPlayer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__bpPlayer__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IncreasedSpeed__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__IncreasedSpeed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultxSpeed__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__DefaultxSpeed__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf, "BndEvt__bpPickUpBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature" }, // 649439738
		{ &Z_Construct_UFunction_AbpPickUpBase_C__pf407142385_bpf__ReceiveTick__pf, "ReceiveTick" }, // 2404338709
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "bpPickUpBase__pf407142385.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/bpPickUpBase__pf407142385.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "bpPickUpBase_C" },
		{ "ReplaceConverted", "/Game/Blueprints/PickUps/bpPickUpBase.bpPickUpBase_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__Box__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpPickUpBase__pf407142385.h" },
		{ "OverrideNativeName", "Box" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__Box__pf = { "Box", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPickUpBase_C__pf407142385, bpv__Box__pf), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__Box__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__Box__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__RotatingMovement__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpPickUpBase__pf407142385.h" },
		{ "OverrideNativeName", "RotatingMovement" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__RotatingMovement__pf = { "RotatingMovement", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPickUpBase_C__pf407142385, bpv__RotatingMovement__pf), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__RotatingMovement__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__RotatingMovement__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__ProjectileMovement__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpPickUpBase__pf407142385.h" },
		{ "OverrideNativeName", "ProjectileMovement" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__ProjectileMovement__pf = { "ProjectileMovement", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPickUpBase_C__pf407142385, bpv__ProjectileMovement__pf), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__ProjectileMovement__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__ProjectileMovement__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__PickUpMesh__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpPickUpBase__pf407142385.h" },
		{ "OverrideNativeName", "PickUpMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__PickUpMesh__pf = { "PickUpMesh", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPickUpBase_C__pf407142385, bpv__PickUpMesh__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__PickUpMesh__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__PickUpMesh__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__Scene__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpPickUpBase__pf407142385.h" },
		{ "OverrideNativeName", "Scene" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__Scene__pf = { "Scene", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPickUpBase_C__pf407142385, bpv__Scene__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__Scene__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__Scene__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__bpPlayer__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Bp Player" },
		{ "ModuleRelativePath", "Public/bpPickUpBase__pf407142385.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "bpPlayer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__bpPlayer__pf = { "bpPlayer", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPickUpBase_C__pf407142385, bpv__bpPlayer__pf), Z_Construct_UClass_AbpPlayer_C__pf1380491225_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__bpPlayer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__bpPlayer__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__IncreasedSpeed__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Increased Speed" },
		{ "ModuleRelativePath", "Public/bpPickUpBase__pf407142385.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "IncreasedSpeed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__IncreasedSpeed__pf = { "IncreasedSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPickUpBase_C__pf407142385, bpv__IncreasedSpeed__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__IncreasedSpeed__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__IncreasedSpeed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__DefaultxSpeed__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Default Speed" },
		{ "ModuleRelativePath", "Public/bpPickUpBase__pf407142385.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Default Speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__DefaultxSpeed__pfT = { "Default Speed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPickUpBase_C__pf407142385, bpv__DefaultxSpeed__pfT), METADATA_PARAMS(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__DefaultxSpeed__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__DefaultxSpeed__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPickUpBase__pf407142385.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPickUpBase_C__pf407142385, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpPickUpBase__pf407142385.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OverlappedComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = { "K2Node_ComponentBoundEvent_OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPickUpBase_C__pf407142385, b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPickUpBase__pf407142385.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf = { "K2Node_ComponentBoundEvent_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPickUpBase_C__pf407142385, b0l__K2Node_ComponentBoundEvent_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpPickUpBase__pf407142385.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf = { "K2Node_ComponentBoundEvent_OtherComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPickUpBase_C__pf407142385, b0l__K2Node_ComponentBoundEvent_OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPickUpBase__pf407142385.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherBodyIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = { "K2Node_ComponentBoundEvent_OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPickUpBase_C__pf407142385, b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPickUpBase__pf407142385.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_bFromSweep" },
	};
#endif
	void Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit(void* Obj)
	{
		((AbpPickUpBase_C__pf407142385*)Obj)->b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = { "K2Node_ComponentBoundEvent_bFromSweep", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpPickUpBase_C__pf407142385), &Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPickUpBase__pf407142385.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_SweepResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf = { "K2Node_ComponentBoundEvent_SweepResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPickUpBase_C__pf407142385, b0l__K2Node_ComponentBoundEvent_SweepResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPickUpBase__pf407142385.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBp_Player" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf = { "K2Node_DynamicCast_AsBp_Player", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPickUpBase_C__pf407142385, b0l__K2Node_DynamicCast_AsBp_Player__pf), Z_Construct_UClass_AbpPlayer_C__pf1380491225_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPickUpBase__pf407142385.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AbpPickUpBase_C__pf407142385*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpPickUpBase_C__pf407142385), &Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__Box__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__RotatingMovement__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__ProjectileMovement__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__PickUpMesh__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__Scene__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__bpPlayer__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__IncreasedSpeed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_bpv__DefaultxSpeed__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AbpPickUpBase_C__pf407142385>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::ClassParams = {
		&AbpPickUpBase_C__pf407142385::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AbpPickUpBase_C__pf407142385()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/PickUps/bpPickUpBase"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("bpPickUpBase_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AbpPickUpBase_C__pf407142385_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AbpPickUpBase_C__pf407142385, TEXT("bpPickUpBase_C"), 620356491);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AbpPickUpBase_C__pf407142385>()
	{
		return AbpPickUpBase_C__pf407142385::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AbpPickUpBase_C__pf407142385(Z_Construct_UClass_AbpPickUpBase_C__pf407142385, &AbpPickUpBase_C__pf407142385::StaticClass, TEXT("/Game/Blueprints/PickUps/bpPickUpBase"), TEXT("bpPickUpBase_C"), true, TEXT("/Game/Blueprints/PickUps/bpPickUpBase"), TEXT("/Game/Blueprints/PickUps/bpPickUpBase.bpPickUpBase_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AbpPickUpBase_C__pf407142385);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
