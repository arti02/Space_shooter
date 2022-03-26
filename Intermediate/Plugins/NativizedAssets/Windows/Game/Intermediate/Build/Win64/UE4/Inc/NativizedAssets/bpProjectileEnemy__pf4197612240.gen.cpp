// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/bpProjectileEnemy__pf4197612240.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebpProjectileEnemy__pf4197612240() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpPlayer_C__pf1380491225_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpGameMod_C__pf1380491225_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AbpProjectileEnemy_C__pf4197612240::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpProjectileEnemy_C__pf4197612240::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpProjectileEnemy_C__pf4197612240::execbpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__HitComponent__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf);
		P_GET_STRUCT(FVector,Z_Param_bpp__NormalImpulse__pf);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__Hit__pf__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf(Z_Param_bpp__HitComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__NormalImpulse__pf,Z_Param_Out_bpp__Hit__pf__const);
		P_NATIVE_END;
	}
	static FName NAME_AbpProjectileEnemy_C__pf4197612240_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AbpProjectileEnemy_C__pf4197612240::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		bpProjectileEnemy_C__pf4197612240_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AbpProjectileEnemy_C__pf4197612240_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_AbpProjectileEnemy_C__pf4197612240_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AbpProjectileEnemy_C__pf4197612240::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AbpProjectileEnemy_C__pf4197612240_bpf__UserConstructionScript__pf),NULL);
	}
	void AbpProjectileEnemy_C__pf4197612240::StaticRegisterNativesAbpProjectileEnemy_C__pf4197612240()
	{
		UClass* Class = AbpProjectileEnemy_C__pf4197612240::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature", &AbpProjectileEnemy_C__pf4197612240::execbpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf },
			{ "ReceiveTick", &AbpProjectileEnemy_C__pf4197612240::execbpf__ReceiveTick__pf },
			{ "UserConstructionScript", &AbpProjectileEnemy_C__pf4197612240::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics
	{
		struct bpProjectileEnemy_C__pf4197612240_eventbpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Parms
		{
			UPrimitiveComponent* bpp__HitComponent__pf;
			AActor* bpp__OtherActor__pf;
			UPrimitiveComponent* bpp__OtherComp__pf;
			FVector bpp__NormalImpulse__pf;
			FHitResult bpp__Hit__pf__const;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__HitComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__HitComponent__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherComp__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__NormalImpulse__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__Hit__pf__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Hit__pf__const;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__HitComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__HitComponent__pf = { "bpp__HitComponent__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpProjectileEnemy_C__pf4197612240_eventbpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Parms, bpp__HitComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__HitComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__HitComponent__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpProjectileEnemy_C__pf4197612240_eventbpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf = { "bpp__OtherComp__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpProjectileEnemy_C__pf4197612240_eventbpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Parms, bpp__OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__NormalImpulse__pf = { "bpp__NormalImpulse__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpProjectileEnemy_C__pf4197612240_eventbpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Parms, bpp__NormalImpulse__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__Hit__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__Hit__pf__const = { "bpp__Hit__pf__const", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpProjectileEnemy_C__pf4197612240_eventbpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Parms, bpp__Hit__pf__const), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__Hit__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__Hit__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__HitComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__NormalImpulse__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__Hit__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/bpProjectileEnemy__pf4197612240.h" },
		{ "OverrideNativeName", "BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240, nullptr, "BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature", nullptr, nullptr, sizeof(bpProjectileEnemy_C__pf4197612240_eventbpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Parms), Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpProjectileEnemy_C__pf4197612240_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/bpProjectileEnemy__pf4197612240.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(bpProjectileEnemy_C__pf4197612240_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/bpProjectileEnemy__pf4197612240.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_NoRegister()
	{
		return AbpProjectileEnemy_C__pf4197612240::StaticClass();
	}
	struct Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RotatingMovement__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__RotatingMovement__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StaticMesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__StaticMesh__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Damage__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Damage__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Speed__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Speed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Scale__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Scale__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_HitComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_HitComponent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_Hit__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_Hit__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf, "BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature" }, // 3485319548
		{ &Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__ReceiveTick__pf, "ReceiveTick" }, // 3188640256
		{ &Z_Construct_UFunction_AbpProjectileEnemy_C__pf4197612240_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 4142931678
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "bpProjectileEnemy__pf4197612240.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/bpProjectileEnemy__pf4197612240.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "bpProjectileEnemy_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Projectiles/bpProjectileEnemy.bpProjectileEnemy_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__RotatingMovement__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpProjectileEnemy__pf4197612240.h" },
		{ "OverrideNativeName", "RotatingMovement" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__RotatingMovement__pf = { "RotatingMovement", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectileEnemy_C__pf4197612240, bpv__RotatingMovement__pf), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__RotatingMovement__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__RotatingMovement__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__StaticMesh__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpProjectileEnemy__pf4197612240.h" },
		{ "OverrideNativeName", "StaticMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__StaticMesh__pf = { "StaticMesh", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectileEnemy_C__pf4197612240, bpv__StaticMesh__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__StaticMesh__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__StaticMesh__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__Damage__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Damage" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/bpProjectileEnemy__pf4197612240.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__Damage__pf = { "Damage", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectileEnemy_C__pf4197612240, bpv__Damage__pf), METADATA_PARAMS(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__Damage__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__Damage__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__Speed__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Speed" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/bpProjectileEnemy__pf4197612240.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Speed" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__Speed__pf = { "Speed", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectileEnemy_C__pf4197612240, bpv__Speed__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__Speed__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__Speed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__Scale__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Scale" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/bpProjectileEnemy__pf4197612240.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__Scale__pf = { "Scale", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectileEnemy_C__pf4197612240, bpv__Scale__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__Scale__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__Scale__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_HitComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpProjectileEnemy__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_HitComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_HitComponent__pf = { "K2Node_ComponentBoundEvent_HitComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectileEnemy_C__pf4197612240, b0l__K2Node_ComponentBoundEvent_HitComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_HitComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_HitComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectileEnemy__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf = { "K2Node_ComponentBoundEvent_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectileEnemy_C__pf4197612240, b0l__K2Node_ComponentBoundEvent_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpProjectileEnemy__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf = { "K2Node_ComponentBoundEvent_OtherComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectileEnemy_C__pf4197612240, b0l__K2Node_ComponentBoundEvent_OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectileEnemy__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_NormalImpulse" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf = { "K2Node_ComponentBoundEvent_NormalImpulse", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectileEnemy_C__pf4197612240, b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Hit__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectileEnemy__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_Hit" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Hit__pf = { "K2Node_ComponentBoundEvent_Hit", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectileEnemy_C__pf4197612240, b0l__K2Node_ComponentBoundEvent_Hit__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Hit__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Hit__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectileEnemy__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBp_Player" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf = { "K2Node_DynamicCast_AsBp_Player", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectileEnemy_C__pf4197612240, b0l__K2Node_DynamicCast_AsBp_Player__pf), Z_Construct_UClass_AbpPlayer_C__pf1380491225_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectileEnemy__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AbpProjectileEnemy_C__pf4197612240*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpProjectileEnemy_C__pf4197612240), &Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectileEnemy__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectileEnemy_C__pf4197612240, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectileEnemy__pf4197612240.h" },
		{ "OverrideNativeName", "CallFunc_K2_AddActorLocalOffset_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf = { "CallFunc_K2_AddActorLocalOffset_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectileEnemy_C__pf4197612240, b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectileEnemy__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBp_Game_Mod" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf = { "K2Node_DynamicCast_AsBp_Game_Mod", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectileEnemy_C__pf4197612240, b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf), Z_Construct_UClass_AbpGameMod_C__pf1380491225_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectileEnemy__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((AbpProjectileEnemy_C__pf4197612240*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpProjectileEnemy_C__pf4197612240), &Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__RotatingMovement__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__StaticMesh__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__Damage__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__Speed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_bpv__Scale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_HitComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Hit__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AbpProjectileEnemy_C__pf4197612240>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::ClassParams = {
		&AbpProjectileEnemy_C__pf4197612240::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Projectiles/bpProjectileEnemy"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("bpProjectileEnemy_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AbpProjectileEnemy_C__pf4197612240, TEXT("bpProjectileEnemy_C"), 2897557013);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AbpProjectileEnemy_C__pf4197612240>()
	{
		return AbpProjectileEnemy_C__pf4197612240::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AbpProjectileEnemy_C__pf4197612240(Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240, &AbpProjectileEnemy_C__pf4197612240::StaticClass, TEXT("/Game/Blueprints/Projectiles/bpProjectileEnemy"), TEXT("bpProjectileEnemy_C"), true, TEXT("/Game/Blueprints/Projectiles/bpProjectileEnemy"), TEXT("/Game/Blueprints/Projectiles/bpProjectileEnemy.bpProjectileEnemy_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AbpProjectileEnemy_C__pf4197612240);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
