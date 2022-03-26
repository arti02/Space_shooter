// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/bpProjectilePlayerBase__pf4197612240.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebpProjectilePlayerBase__pf4197612240() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpGameMod_C__pf1380491225_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AbpProjectilePlayerBase_C__pf4197612240::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpProjectilePlayerBase_C__pf4197612240::execbpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf);
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__OtherBodyIndex__pf);
		P_GET_UBOOL(Z_Param_bpp__bFromSweep__pf);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__SweepResult__pf__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf,Z_Param_bpp__bFromSweep__pf,Z_Param_Out_bpp__SweepResult__pf__const);
		P_NATIVE_END;
	}
	static FName NAME_AbpProjectilePlayerBase_C__pf4197612240_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AbpProjectilePlayerBase_C__pf4197612240::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AbpProjectilePlayerBase_C__pf4197612240_bpf__UserConstructionScript__pf),NULL);
	}
	void AbpProjectilePlayerBase_C__pf4197612240::StaticRegisterNativesAbpProjectilePlayerBase_C__pf4197612240()
	{
		UClass* Class = AbpProjectilePlayerBase_C__pf4197612240::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature", &AbpProjectilePlayerBase_C__pf4197612240::execbpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf },
			{ "UserConstructionScript", &AbpProjectilePlayerBase_C__pf4197612240::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics
	{
		struct bpProjectilePlayerBase_C__pf4197612240_eventbpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf = { "bpp__OverlappedComponent__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpProjectilePlayerBase_C__pf4197612240_eventbpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpProjectilePlayerBase_C__pf4197612240_eventbpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf = { "bpp__OtherComp__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpProjectilePlayerBase_C__pf4197612240_eventbpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherBodyIndex__pf = { "bpp__OtherBodyIndex__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpProjectilePlayerBase_C__pf4197612240_eventbpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherBodyIndex__pf), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf_SetBit(void* Obj)
	{
		((bpProjectilePlayerBase_C__pf4197612240_eventbpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms*)Obj)->bpp__bFromSweep__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf = { "bpp__bFromSweep__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(bpProjectilePlayerBase_C__pf4197612240_eventbpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), &Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const = { "bpp__SweepResult__pf__const", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpProjectilePlayerBase_C__pf4197612240_eventbpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__SweepResult__pf__const), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/bpProjectilePlayerBase__pf4197612240.h" },
		{ "OverrideNativeName", "BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240, nullptr, "BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature", nullptr, nullptr, sizeof(bpProjectilePlayerBase_C__pf4197612240_eventbpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/bpProjectilePlayerBase__pf4197612240.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_NoRegister()
	{
		return AbpProjectilePlayerBase_C__pf4197612240::StaticClass();
	}
	struct Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ProjectileMovement__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ProjectileMovement__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ProjectileMesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ProjectileMesh__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Speed__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Speed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Damage__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Damage__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Scale__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Scale__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf, "BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature" }, // 533742934
		{ &Z_Construct_UFunction_AbpProjectilePlayerBase_C__pf4197612240_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 2863384569
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "bpProjectilePlayerBase__pf4197612240.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/bpProjectilePlayerBase__pf4197612240.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "bpProjectilePlayerBase_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Projectiles/bpProjectilePlayerBase.bpProjectilePlayerBase_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__ProjectileMovement__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpProjectilePlayerBase__pf4197612240.h" },
		{ "OverrideNativeName", "ProjectileMovement" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__ProjectileMovement__pf = { "ProjectileMovement", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerBase_C__pf4197612240, bpv__ProjectileMovement__pf), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__ProjectileMovement__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__ProjectileMovement__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__ProjectileMesh__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpProjectilePlayerBase__pf4197612240.h" },
		{ "OverrideNativeName", "ProjectileMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__ProjectileMesh__pf = { "ProjectileMesh", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerBase_C__pf4197612240, bpv__ProjectileMesh__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__ProjectileMesh__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__ProjectileMesh__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__Speed__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Speed" },
		{ "ModuleRelativePath", "Public/bpProjectilePlayerBase__pf4197612240.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__Speed__pf = { "Speed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerBase_C__pf4197612240, bpv__Speed__pf), METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__Speed__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__Speed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__Damage__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Damage" },
		{ "ModuleRelativePath", "Public/bpProjectilePlayerBase__pf4197612240.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__Damage__pf = { "Damage", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerBase_C__pf4197612240, bpv__Damage__pf), METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__Damage__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__Damage__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__Scale__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Scale" },
		{ "ModuleRelativePath", "Public/bpProjectilePlayerBase__pf4197612240.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__Scale__pf = { "Scale", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerBase_C__pf4197612240, bpv__Scale__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__Scale__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__Scale__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpProjectilePlayerBase__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OverlappedComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = { "K2Node_ComponentBoundEvent_OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerBase_C__pf4197612240, b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectilePlayerBase__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf = { "K2Node_ComponentBoundEvent_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerBase_C__pf4197612240, b0l__K2Node_ComponentBoundEvent_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpProjectilePlayerBase__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf = { "K2Node_ComponentBoundEvent_OtherComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerBase_C__pf4197612240, b0l__K2Node_ComponentBoundEvent_OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectilePlayerBase__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherBodyIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = { "K2Node_ComponentBoundEvent_OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerBase_C__pf4197612240, b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf), METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectilePlayerBase__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_bFromSweep" },
	};
#endif
	void Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit(void* Obj)
	{
		((AbpProjectilePlayerBase_C__pf4197612240*)Obj)->b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = { "K2Node_ComponentBoundEvent_bFromSweep", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpProjectilePlayerBase_C__pf4197612240), &Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectilePlayerBase__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_SweepResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf = { "K2Node_ComponentBoundEvent_SweepResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerBase_C__pf4197612240, b0l__K2Node_ComponentBoundEvent_SweepResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectilePlayerBase__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBp_Game_Mod" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf = { "K2Node_DynamicCast_AsBp_Game_Mod", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerBase_C__pf4197612240, b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf), Z_Construct_UClass_AbpGameMod_C__pf1380491225_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectilePlayerBase__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AbpProjectilePlayerBase_C__pf4197612240*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpProjectilePlayerBase_C__pf4197612240), &Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectilePlayerBase__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBp_Enemy_Base" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf = { "K2Node_DynamicCast_AsBp_Enemy_Base", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpProjectilePlayerBase_C__pf4197612240, b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf), Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpProjectilePlayerBase__pf4197612240.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((AbpProjectilePlayerBase_C__pf4197612240*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpProjectilePlayerBase_C__pf4197612240), &Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__ProjectileMovement__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__ProjectileMesh__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__Speed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__Damage__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_bpv__Scale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AbpProjectilePlayerBase_C__pf4197612240>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::ClassParams = {
		&AbpProjectilePlayerBase_C__pf4197612240::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Projectiles/bpProjectilePlayerBase"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("bpProjectilePlayerBase_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AbpProjectilePlayerBase_C__pf4197612240, TEXT("bpProjectilePlayerBase_C"), 3958410255);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AbpProjectilePlayerBase_C__pf4197612240>()
	{
		return AbpProjectilePlayerBase_C__pf4197612240::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AbpProjectilePlayerBase_C__pf4197612240(Z_Construct_UClass_AbpProjectilePlayerBase_C__pf4197612240, &AbpProjectilePlayerBase_C__pf4197612240::StaticClass, TEXT("/Game/Blueprints/Projectiles/bpProjectilePlayerBase"), TEXT("bpProjectilePlayerBase_C"), true, TEXT("/Game/Blueprints/Projectiles/bpProjectilePlayerBase"), TEXT("/Game/Blueprints/Projectiles/bpProjectilePlayerBase.bpProjectilePlayerBase_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AbpProjectilePlayerBase_C__pf4197612240);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
