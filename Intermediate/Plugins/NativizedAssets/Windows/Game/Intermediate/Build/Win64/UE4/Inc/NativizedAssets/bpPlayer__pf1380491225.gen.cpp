// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/bpPlayer__pf1380491225.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebpPlayer__pf1380491225() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpPlayer_C__pf1380491225_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpPlayer_C__pf1380491225();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineDirection();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UHUD_C__pf3053510930_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UQuitGame_C__pf3053510930_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpGameMod_C__pf1380491225_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AbpPlayer_C__pf1380491225::execbpf__RocketFire__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__ShotNum__pf);
		P_GET_OBJECT(USceneComponent,Z_Param_bpp__SpawnLocation__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__RocketFire__pf(Z_Param_bpp__ShotNum__pf,Z_Param_bpp__SpawnLocation__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpPlayer_C__pf1380491225::execbpf__PowerUpFire__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__ShotNum__pf);
		P_GET_OBJECT(USceneComponent,Z_Param_bpp__SpawnLocation__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__PowerUpFire__pf(Z_Param_bpp__ShotNum__pf,Z_Param_bpp__SpawnLocation__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpPlayer_C__pf1380491225::execbpf__PrimaryFire__pf)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_bpp__SpawnLocation__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__PrimaryFire__pf(Z_Param_bpp__SpawnLocation__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpPlayer_C__pf1380491225::execbpf__GetDirection__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__fSpeed__pf);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__fDirection__pf);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_bpp__ReturnDirection__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__GetDirection__pf(Z_Param_bpp__fSpeed__pf,Z_Param_bpp__fDirection__pf,Z_Param_Out_bpp__ReturnDirection__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpPlayer_C__pf1380491225::execbpf__SpawnAnimation__FinishedFunc__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SpawnAnimation__FinishedFunc__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpPlayer_C__pf1380491225::execbpf__SpawnAnimation__UpdateFunc__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SpawnAnimation__UpdateFunc__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpPlayer_C__pf1380491225::execbpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpPlayer_C__pf1380491225::execbpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpPlayer_C__pf1380491225::execbpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpPlayer_C__pf1380491225::execbpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpPlayer_C__pf1380491225::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpPlayer_C__pf1380491225::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpPlayer_C__pf1380491225::execbpf__ReceiveAnyDamage__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__Damage__pf);
		P_GET_OBJECT(UDamageType,Z_Param_bpp__DamageType__pf__const);
		P_GET_OBJECT(AController,Z_Param_bpp__InstigatedBy__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__DamageCauser__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveAnyDamage__pf(Z_Param_bpp__Damage__pf,Z_Param_bpp__DamageType__pf__const,Z_Param_bpp__InstigatedBy__pf,Z_Param_bpp__DamageCauser__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpPlayer_C__pf1380491225::execbpf__FireRateControl__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__FireRateControl__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AbpPlayer_C__pf1380491225::execbpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__HitComponent__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf);
		P_GET_STRUCT(FVector,Z_Param_bpp__NormalImpulse__pf);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__Hit__pf__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf(Z_Param_bpp__HitComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__NormalImpulse__pf,Z_Param_Out_bpp__Hit__pf__const);
		P_NATIVE_END;
	}
	static FName NAME_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf = FName(TEXT("ReceiveAnyDamage"));
	void AbpPlayer_C__pf1380491225::eventbpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf)
	{
		bpPlayer_C__pf1380491225_eventbpf__ReceiveAnyDamage__pf_Parms Parms;
		Parms.bpp__Damage__pf=bpp__Damage__pf;
		Parms.bpp__DamageType__pf__const=bpp__DamageType__pf__const;
		Parms.bpp__InstigatedBy__pf=bpp__InstigatedBy__pf;
		Parms.bpp__DamageCauser__pf=bpp__DamageCauser__pf;
		ProcessEvent(FindFunctionChecked(NAME_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf),&Parms);
	}
	static FName NAME_AbpPlayer_C__pf1380491225_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AbpPlayer_C__pf1380491225::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AbpPlayer_C__pf1380491225_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AbpPlayer_C__pf1380491225_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AbpPlayer_C__pf1380491225::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		bpPlayer_C__pf1380491225_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AbpPlayer_C__pf1380491225_bpf__ReceiveTick__pf),&Parms);
	}
	void AbpPlayer_C__pf1380491225::StaticRegisterNativesAbpPlayer_C__pf1380491225()
	{
		UClass* Class = AbpPlayer_C__pf1380491225::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature", &AbpPlayer_C__pf1380491225::execbpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf },
			{ "FireRateControl", &AbpPlayer_C__pf1380491225::execbpf__FireRateControl__pf },
			{ "GetDirection", &AbpPlayer_C__pf1380491225::execbpf__GetDirection__pf },
			{ "InpActEvt_PtimaryFire_K2Node_InputActionEvent_0", &AbpPlayer_C__pf1380491225::execbpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf },
			{ "InpActEvt_PtimaryFire_K2Node_InputActionEvent_1", &AbpPlayer_C__pf1380491225::execbpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf },
			{ "InpActEvt_RocketFire_K2Node_InputActionEvent_2", &AbpPlayer_C__pf1380491225::execbpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf },
			{ "InpActEvt_RocketFire_K2Node_InputActionEvent_3", &AbpPlayer_C__pf1380491225::execbpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf },
			{ "PowerUpFire", &AbpPlayer_C__pf1380491225::execbpf__PowerUpFire__pf },
			{ "PrimaryFire", &AbpPlayer_C__pf1380491225::execbpf__PrimaryFire__pf },
			{ "ReceiveAnyDamage", &AbpPlayer_C__pf1380491225::execbpf__ReceiveAnyDamage__pf },
			{ "ReceiveBeginPlay", &AbpPlayer_C__pf1380491225::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &AbpPlayer_C__pf1380491225::execbpf__ReceiveTick__pf },
			{ "RocketFire", &AbpPlayer_C__pf1380491225::execbpf__RocketFire__pf },
			{ "SpawnAnimation__FinishedFunc", &AbpPlayer_C__pf1380491225::execbpf__SpawnAnimation__FinishedFunc__pf },
			{ "SpawnAnimation__UpdateFunc", &AbpPlayer_C__pf1380491225::execbpf__SpawnAnimation__UpdateFunc__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics
	{
		struct bpPlayer_C__pf1380491225_eventbpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__HitComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__HitComponent__pf = { "bpp__HitComponent__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Parms, bpp__HitComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__HitComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__HitComponent__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf = { "bpp__OtherComp__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Parms, bpp__OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__NormalImpulse__pf = { "bpp__NormalImpulse__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Parms, bpp__NormalImpulse__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__Hit__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__Hit__pf__const = { "bpp__Hit__pf__const", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Parms, bpp__Hit__pf__const), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__Hit__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__Hit__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__HitComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__NormalImpulse__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__Hit__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpPlayer_C__pf1380491225, nullptr, "BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature", nullptr, nullptr, sizeof(bpPlayer_C__pf1380491225_eventbpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Parms), Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpPlayer_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__FireRateControl__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__FireRateControl__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "FireRateControl" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__FireRateControl__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpPlayer_C__pf1380491225, nullptr, "FireRateControl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__FireRateControl__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__FireRateControl__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__FireRateControl__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpPlayer_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "FireRateControl" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__FireRateControl__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__GetDirection__pf_Statics
	{
		struct bpPlayer_C__pf1380491225_eventbpf__GetDirection__pf_Parms
		{
			float bpp__fSpeed__pf;
			float bpp__fDirection__pf;
			float bpp__ReturnDirection__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__fSpeed__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__fDirection__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__ReturnDirection__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__GetDirection__pf_Statics::NewProp_bpp__fSpeed__pf = { "bpp__fSpeed__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__GetDirection__pf_Parms, bpp__fSpeed__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__GetDirection__pf_Statics::NewProp_bpp__fDirection__pf = { "bpp__fDirection__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__GetDirection__pf_Parms, bpp__fDirection__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__GetDirection__pf_Statics::NewProp_bpp__ReturnDirection__pf = { "bpp__ReturnDirection__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__GetDirection__pf_Parms, bpp__ReturnDirection__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__GetDirection__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__GetDirection__pf_Statics::NewProp_bpp__fSpeed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__GetDirection__pf_Statics::NewProp_bpp__fDirection__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__GetDirection__pf_Statics::NewProp_bpp__ReturnDirection__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__GetDirection__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "GetDirection" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__GetDirection__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpPlayer_C__pf1380491225, nullptr, "GetDirection", nullptr, nullptr, sizeof(bpPlayer_C__pf1380491225_eventbpf__GetDirection__pf_Parms), Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__GetDirection__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__GetDirection__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__GetDirection__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__GetDirection__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__GetDirection__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpPlayer_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "GetDirection" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__GetDirection__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf_Statics
	{
		struct bpPlayer_C__pf1380491225_eventbpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "InpActEvt_PtimaryFire_K2Node_InputActionEvent_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpPlayer_C__pf1380491225, nullptr, "InpActEvt_PtimaryFire_K2Node_InputActionEvent_0", nullptr, nullptr, sizeof(bpPlayer_C__pf1380491225_eventbpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf_Parms), Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpPlayer_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_PtimaryFire_K2Node_InputActionEvent_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf_Statics
	{
		struct bpPlayer_C__pf1380491225_eventbpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "InpActEvt_PtimaryFire_K2Node_InputActionEvent_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpPlayer_C__pf1380491225, nullptr, "InpActEvt_PtimaryFire_K2Node_InputActionEvent_1", nullptr, nullptr, sizeof(bpPlayer_C__pf1380491225_eventbpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf_Parms), Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpPlayer_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_PtimaryFire_K2Node_InputActionEvent_1" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf_Statics
	{
		struct bpPlayer_C__pf1380491225_eventbpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "InpActEvt_RocketFire_K2Node_InputActionEvent_2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpPlayer_C__pf1380491225, nullptr, "InpActEvt_RocketFire_K2Node_InputActionEvent_2", nullptr, nullptr, sizeof(bpPlayer_C__pf1380491225_eventbpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf_Parms), Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpPlayer_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_RocketFire_K2Node_InputActionEvent_2" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf_Statics
	{
		struct bpPlayer_C__pf1380491225_eventbpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "InpActEvt_RocketFire_K2Node_InputActionEvent_3" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpPlayer_C__pf1380491225, nullptr, "InpActEvt_RocketFire_K2Node_InputActionEvent_3", nullptr, nullptr, sizeof(bpPlayer_C__pf1380491225_eventbpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf_Parms), Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpPlayer_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_RocketFire_K2Node_InputActionEvent_3" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PowerUpFire__pf_Statics
	{
		struct bpPlayer_C__pf1380491225_eventbpf__PowerUpFire__pf_Parms
		{
			int32 bpp__ShotNum__pf;
			USceneComponent* bpp__SpawnLocation__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__ShotNum__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__SpawnLocation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__SpawnLocation__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PowerUpFire__pf_Statics::NewProp_bpp__ShotNum__pf = { "bpp__ShotNum__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__PowerUpFire__pf_Parms, bpp__ShotNum__pf), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PowerUpFire__pf_Statics::NewProp_bpp__SpawnLocation__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PowerUpFire__pf_Statics::NewProp_bpp__SpawnLocation__pf = { "bpp__SpawnLocation__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__PowerUpFire__pf_Parms, bpp__SpawnLocation__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PowerUpFire__pf_Statics::NewProp_bpp__SpawnLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PowerUpFire__pf_Statics::NewProp_bpp__SpawnLocation__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PowerUpFire__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PowerUpFire__pf_Statics::NewProp_bpp__ShotNum__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PowerUpFire__pf_Statics::NewProp_bpp__SpawnLocation__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PowerUpFire__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "PowerUpFire" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PowerUpFire__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpPlayer_C__pf1380491225, nullptr, "PowerUpFire", nullptr, nullptr, sizeof(bpPlayer_C__pf1380491225_eventbpf__PowerUpFire__pf_Parms), Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PowerUpFire__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PowerUpFire__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PowerUpFire__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PowerUpFire__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PowerUpFire__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpPlayer_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "PowerUpFire" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PowerUpFire__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PrimaryFire__pf_Statics
	{
		struct bpPlayer_C__pf1380491225_eventbpf__PrimaryFire__pf_Parms
		{
			USceneComponent* bpp__SpawnLocation__pf;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__SpawnLocation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__SpawnLocation__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PrimaryFire__pf_Statics::NewProp_bpp__SpawnLocation__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PrimaryFire__pf_Statics::NewProp_bpp__SpawnLocation__pf = { "bpp__SpawnLocation__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__PrimaryFire__pf_Parms, bpp__SpawnLocation__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PrimaryFire__pf_Statics::NewProp_bpp__SpawnLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PrimaryFire__pf_Statics::NewProp_bpp__SpawnLocation__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PrimaryFire__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PrimaryFire__pf_Statics::NewProp_bpp__SpawnLocation__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PrimaryFire__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "PrimaryFire" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PrimaryFire__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpPlayer_C__pf1380491225, nullptr, "PrimaryFire", nullptr, nullptr, sizeof(bpPlayer_C__pf1380491225_eventbpf__PrimaryFire__pf_Parms), Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PrimaryFire__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PrimaryFire__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PrimaryFire__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PrimaryFire__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PrimaryFire__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpPlayer_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "PrimaryFire" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PrimaryFire__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__Damage__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__DamageType__pf__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__DamageType__pf__const;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__InstigatedBy__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__DamageCauser__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__Damage__pf = { "bpp__Damage__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__ReceiveAnyDamage__pf_Parms, bpp__Damage__pf), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__DamageType__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__DamageType__pf__const = { "bpp__DamageType__pf__const", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__ReceiveAnyDamage__pf_Parms, bpp__DamageType__pf__const), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__DamageType__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__DamageType__pf__const_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__InstigatedBy__pf = { "bpp__InstigatedBy__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__ReceiveAnyDamage__pf_Parms, bpp__InstigatedBy__pf), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__DamageCauser__pf = { "bpp__DamageCauser__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__ReceiveAnyDamage__pf_Parms, bpp__DamageCauser__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__Damage__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__DamageType__pf__const,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__InstigatedBy__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__DamageCauser__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Damage" },
		{ "Comment", "/** Event when this actor takes ANY damage */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "AnyDamage" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "ReceiveAnyDamage" },
		{ "ToolTip", "Event when this actor takes ANY damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpPlayer_C__pf1380491225, nullptr, "ReceiveAnyDamage", nullptr, nullptr, sizeof(bpPlayer_C__pf1380491225_eventbpf__ReceiveAnyDamage__pf_Parms), Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C04, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpPlayer_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveAnyDamage" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpPlayer_C__pf1380491225, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpPlayer_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpPlayer_C__pf1380491225, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(bpPlayer_C__pf1380491225_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpPlayer_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__RocketFire__pf_Statics
	{
		struct bpPlayer_C__pf1380491225_eventbpf__RocketFire__pf_Parms
		{
			int32 bpp__ShotNum__pf;
			USceneComponent* bpp__SpawnLocation__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__ShotNum__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__SpawnLocation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__SpawnLocation__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__RocketFire__pf_Statics::NewProp_bpp__ShotNum__pf = { "bpp__ShotNum__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__RocketFire__pf_Parms, bpp__ShotNum__pf), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__RocketFire__pf_Statics::NewProp_bpp__SpawnLocation__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__RocketFire__pf_Statics::NewProp_bpp__SpawnLocation__pf = { "bpp__SpawnLocation__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(bpPlayer_C__pf1380491225_eventbpf__RocketFire__pf_Parms, bpp__SpawnLocation__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__RocketFire__pf_Statics::NewProp_bpp__SpawnLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__RocketFire__pf_Statics::NewProp_bpp__SpawnLocation__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__RocketFire__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__RocketFire__pf_Statics::NewProp_bpp__ShotNum__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__RocketFire__pf_Statics::NewProp_bpp__SpawnLocation__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__RocketFire__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "RocketFire" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__RocketFire__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpPlayer_C__pf1380491225, nullptr, "RocketFire", nullptr, nullptr, sizeof(bpPlayer_C__pf1380491225_eventbpf__RocketFire__pf_Parms), Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__RocketFire__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__RocketFire__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__RocketFire__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__RocketFire__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__RocketFire__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpPlayer_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "RocketFire" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__RocketFire__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__SpawnAnimation__FinishedFunc__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__SpawnAnimation__FinishedFunc__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "SpawnAnimation__FinishedFunc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__SpawnAnimation__FinishedFunc__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpPlayer_C__pf1380491225, nullptr, "SpawnAnimation__FinishedFunc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__SpawnAnimation__FinishedFunc__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__SpawnAnimation__FinishedFunc__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__SpawnAnimation__FinishedFunc__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpPlayer_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SpawnAnimation__FinishedFunc" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__SpawnAnimation__FinishedFunc__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__SpawnAnimation__UpdateFunc__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__SpawnAnimation__UpdateFunc__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "SpawnAnimation__UpdateFunc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__SpawnAnimation__UpdateFunc__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AbpPlayer_C__pf1380491225, nullptr, "SpawnAnimation__UpdateFunc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__SpawnAnimation__UpdateFunc__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__SpawnAnimation__UpdateFunc__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__SpawnAnimation__UpdateFunc__pf()
	{
		UObject* Outer = Z_Construct_UClass_AbpPlayer_C__pf1380491225();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SpawnAnimation__UpdateFunc" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__SpawnAnimation__UpdateFunc__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AbpPlayer_C__pf1380491225_NoRegister()
	{
		return AbpPlayer_C__pf1380491225::StaticClass();
	}
	struct Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ParticleSystem__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ParticleSystem__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ProjectileSpawn__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ProjectileSpawn__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerCollision__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerCollision__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__playerMesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__playerMesh__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RotationOffset__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__RotationOffset__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpawnAnimation_Spawn_2153BADE47325A13E9CCE8A0C577AC04__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SpawnAnimation_Spawn_2153BADE47325A13E9CCE8A0C577AC04__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpawnAnimation__Direction_2153BADE47325A13E9CCE8A0C577AC04__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__SpawnAnimation__Direction_2153BADE47325A13E9CCE8A0C577AC04__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpawnAnimation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SpawnAnimation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bHasPower__pf_MetaData[];
#endif
		static void NewProp_bpv__bHasPower__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bHasPower__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bMovementEnabled__pf_MetaData[];
#endif
		static void NewProp_bpv__bMovementEnabled__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bMovementEnabled__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bHasRockets__pf_MetaData[];
#endif
		static void NewProp_bpv__bHasRockets__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bHasRockets__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__vSpawnLocation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__vSpawnLocation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MovementSpeed__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__MovementSpeed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CurrentSpeed__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__CurrentSpeed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HorizontalSpeed__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__HorizontalSpeed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__VerticalSpeed__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__VerticalSpeed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Pitch__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Pitch__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MaxHealth__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__MaxHealth__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Health__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Health__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PrimaryFireRateBase__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__PrimaryFireRateBase__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PrimaryFireRate__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__PrimaryFireRate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RocketFireRateBase__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__RocketFireRateBase__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RocketFireRate__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__RocketFireRate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__rSpawnRotation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__rSpawnRotation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimationPitch__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__AnimationPitch__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__iRocketShots__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__iRocketShots__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HUDreference__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__HUDreference__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GameOverReverence__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__GameOverReverence__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_IsClosed_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_IsClosed_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_IsClosed_Variable_1__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_IsClosed_Variable_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_IsClosed_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_1__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_2__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Roll__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Pitch__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Yaw__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_IsClosed_Variable_2__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_IsClosed_Variable_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_IsClosed_Variable_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_Damage__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_Damage__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DamageType__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_DamageType__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_InstigatedBy__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_InstigatedBy__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DamageCauser__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_DamageCauser__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetDirection_ReturnDirection__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_GetDirection_ReturnDirection__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetDirection_ReturnDirection_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_GetDirection_ReturnDirection_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Time__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Distance__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Location__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Normal__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_ElementIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__CallFunc_BreakHitResult_ElementIndex__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_X__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Y__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Z__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBp_Projectile_Enemy__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsBp_Projectile_Enemy__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable_1__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf, "BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature" }, // 3325984587
		{ &Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__FireRateControl__pf, "FireRateControl" }, // 863152004
		{ &Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__GetDirection__pf, "GetDirection" }, // 3215787705
		{ &Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf, "InpActEvt_PtimaryFire_K2Node_InputActionEvent_0" }, // 3136995154
		{ &Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf, "InpActEvt_PtimaryFire_K2Node_InputActionEvent_1" }, // 1143124093
		{ &Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf, "InpActEvt_RocketFire_K2Node_InputActionEvent_2" }, // 1280565236
		{ &Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf, "InpActEvt_RocketFire_K2Node_InputActionEvent_3" }, // 2593825181
		{ &Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PowerUpFire__pf, "PowerUpFire" }, // 2307729714
		{ &Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__PrimaryFire__pf, "PrimaryFire" }, // 2733232075
		{ &Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveAnyDamage__pf, "ReceiveAnyDamage" }, // 2443165891
		{ &Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 971407917
		{ &Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__ReceiveTick__pf, "ReceiveTick" }, // 488594111
		{ &Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__RocketFire__pf, "RocketFire" }, // 1237916666
		{ &Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__SpawnAnimation__FinishedFunc__pf, "SpawnAnimation__FinishedFunc" }, // 1020645810
		{ &Z_Construct_UFunction_AbpPlayer_C__pf1380491225_bpf__SpawnAnimation__UpdateFunc__pf, "SpawnAnimation__UpdateFunc" }, // 878411875
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "bpPlayer__pf1380491225.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "bpPlayer_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Misc/bpPlayer.bpPlayer_C,/Game/Blueprints/bpPlayer.bpPlayer_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__ParticleSystem__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "ParticleSystem" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__ParticleSystem__pf = { "ParticleSystem", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__ParticleSystem__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__ParticleSystem__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__ParticleSystem__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__ProjectileSpawn__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "ProjectileSpawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__ProjectileSpawn__pf = { "ProjectileSpawn", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__ProjectileSpawn__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__ProjectileSpawn__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__ProjectileSpawn__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__PlayerCollision__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "PlayerCollision" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__PlayerCollision__pf = { "PlayerCollision", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__PlayerCollision__pf), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__PlayerCollision__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__PlayerCollision__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__playerMesh__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "playerMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__playerMesh__pf = { "playerMesh", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__playerMesh__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__playerMesh__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__playerMesh__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__RotationOffset__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "RotationOffset" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__RotationOffset__pf = { "RotationOffset", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__RotationOffset__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__RotationOffset__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__RotationOffset__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__SpawnAnimation_Spawn_2153BADE47325A13E9CCE8A0C577AC04__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "SpawnAnimation_Spawn_2153BADE47325A13E9CCE8A0C577AC04" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__SpawnAnimation_Spawn_2153BADE47325A13E9CCE8A0C577AC04__pf = { "SpawnAnimation_Spawn_2153BADE47325A13E9CCE8A0C577AC04", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__SpawnAnimation_Spawn_2153BADE47325A13E9CCE8A0C577AC04__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__SpawnAnimation_Spawn_2153BADE47325A13E9CCE8A0C577AC04__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__SpawnAnimation_Spawn_2153BADE47325A13E9CCE8A0C577AC04__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__SpawnAnimation__Direction_2153BADE47325A13E9CCE8A0C577AC04__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "SpawnAnimation__Direction_2153BADE47325A13E9CCE8A0C577AC04" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__SpawnAnimation__Direction_2153BADE47325A13E9CCE8A0C577AC04__pf = { "SpawnAnimation__Direction_2153BADE47325A13E9CCE8A0C577AC04", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__SpawnAnimation__Direction_2153BADE47325A13E9CCE8A0C577AC04__pf), Z_Construct_UEnum_Engine_ETimelineDirection, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__SpawnAnimation__Direction_2153BADE47325A13E9CCE8A0C577AC04__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__SpawnAnimation__Direction_2153BADE47325A13E9CCE8A0C577AC04__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__SpawnAnimation__pf_MetaData[] = {
		{ "Category", "bpPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "SpawnAnimation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__SpawnAnimation__pf = { "SpawnAnimation", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__SpawnAnimation__pf), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__SpawnAnimation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__SpawnAnimation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__bHasPower__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Has Power" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "bHasPower" },
	};
#endif
	void Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__bHasPower__pf_SetBit(void* Obj)
	{
		((AbpPlayer_C__pf1380491225*)Obj)->bpv__bHasPower__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__bHasPower__pf = { "bHasPower", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpPlayer_C__pf1380491225), &Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__bHasPower__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__bHasPower__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__bHasPower__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__bMovementEnabled__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Movement Enabled" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "bMovementEnabled" },
	};
#endif
	void Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__bMovementEnabled__pf_SetBit(void* Obj)
	{
		((AbpPlayer_C__pf1380491225*)Obj)->bpv__bMovementEnabled__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__bMovementEnabled__pf = { "bMovementEnabled", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpPlayer_C__pf1380491225), &Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__bMovementEnabled__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__bMovementEnabled__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__bMovementEnabled__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__bHasRockets__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Has Rockets" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "bHasRockets" },
	};
#endif
	void Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__bHasRockets__pf_SetBit(void* Obj)
	{
		((AbpPlayer_C__pf1380491225*)Obj)->bpv__bHasRockets__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__bHasRockets__pf = { "bHasRockets", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpPlayer_C__pf1380491225), &Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__bHasRockets__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__bHasRockets__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__bHasRockets__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__vSpawnLocation__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "V Spawn Location" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "vSpawnLocation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__vSpawnLocation__pf = { "vSpawnLocation", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__vSpawnLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__vSpawnLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__vSpawnLocation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__MovementSpeed__pf_MetaData[] = {
		{ "Category", "Floats" },
		{ "DisplayName", "Movement Speed" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "MovementSpeed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__MovementSpeed__pf = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__MovementSpeed__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__MovementSpeed__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__MovementSpeed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__CurrentSpeed__pf_MetaData[] = {
		{ "Category", "Floats" },
		{ "DisplayName", "Current Speed" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "CurrentSpeed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__CurrentSpeed__pf = { "CurrentSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__CurrentSpeed__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__CurrentSpeed__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__CurrentSpeed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__DeltaSeconds__pf_MetaData[] = {
		{ "Category", "Floats" },
		{ "DisplayName", "Delta Seconds" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__DeltaSeconds__pf = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__HorizontalSpeed__pf_MetaData[] = {
		{ "Category", "Floats" },
		{ "DisplayName", "Horizontal Speed" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "HorizontalSpeed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__HorizontalSpeed__pf = { "HorizontalSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__HorizontalSpeed__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__HorizontalSpeed__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__HorizontalSpeed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__VerticalSpeed__pf_MetaData[] = {
		{ "Category", "Floats" },
		{ "DisplayName", "Vertical Speed" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "VerticalSpeed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__VerticalSpeed__pf = { "VerticalSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__VerticalSpeed__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__VerticalSpeed__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__VerticalSpeed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__Pitch__pf_MetaData[] = {
		{ "Category", "Floats" },
		{ "DisplayName", "Pitch" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Pitch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__Pitch__pf = { "Pitch", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__Pitch__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__Pitch__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__Pitch__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__MaxHealth__pf_MetaData[] = {
		{ "Category", "Floats" },
		{ "DisplayName", "Max Health" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "MaxHealth" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__MaxHealth__pf = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__MaxHealth__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__MaxHealth__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__MaxHealth__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__Health__pf_MetaData[] = {
		{ "Category", "Floats" },
		{ "DisplayName", "Health" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Health" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__Health__pf = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__Health__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__Health__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__Health__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__PrimaryFireRateBase__pf_MetaData[] = {
		{ "Category", "Floats" },
		{ "DisplayName", "Primary Fire Rate Base" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "PrimaryFireRateBase" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__PrimaryFireRateBase__pf = { "PrimaryFireRateBase", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__PrimaryFireRateBase__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__PrimaryFireRateBase__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__PrimaryFireRateBase__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__PrimaryFireRate__pf_MetaData[] = {
		{ "Category", "Floats" },
		{ "DisplayName", "Primary Fire Rate" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "PrimaryFireRate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__PrimaryFireRate__pf = { "PrimaryFireRate", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__PrimaryFireRate__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__PrimaryFireRate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__PrimaryFireRate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__RocketFireRateBase__pf_MetaData[] = {
		{ "Category", "Floats" },
		{ "DisplayName", "Rocket Fire Rate Base" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "RocketFireRateBase" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__RocketFireRateBase__pf = { "RocketFireRateBase", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__RocketFireRateBase__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__RocketFireRateBase__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__RocketFireRateBase__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__RocketFireRate__pf_MetaData[] = {
		{ "Category", "Floats" },
		{ "DisplayName", "Rocket Fire Rate" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "RocketFireRate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__RocketFireRate__pf = { "RocketFireRate", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__RocketFireRate__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__RocketFireRate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__RocketFireRate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__rSpawnRotation__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "R Spawn Rotation" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "rSpawnRotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__rSpawnRotation__pf = { "rSpawnRotation", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__rSpawnRotation__pf), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__rSpawnRotation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__rSpawnRotation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__AnimationPitch__pf_MetaData[] = {
		{ "Category", "Floats" },
		{ "DisplayName", "Animation Pitch" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "AnimationPitch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__AnimationPitch__pf = { "AnimationPitch", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__AnimationPitch__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__AnimationPitch__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__AnimationPitch__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__iRocketShots__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "I Rocket Shots" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "iRocketShots" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__iRocketShots__pf = { "iRocketShots", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__iRocketShots__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__iRocketShots__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__iRocketShots__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__HUDreference__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "HUDreference" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "HUDreference" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__HUDreference__pf = { "HUDreference", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__HUDreference__pf), Z_Construct_UClass_UHUD_C__pf3053510930_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__HUDreference__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__HUDreference__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__GameOverReverence__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Game Over Reverence" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "GameOverReverence" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__GameOverReverence__pf = { "GameOverReverence", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, bpv__GameOverReverence__pf), Z_Construct_UClass_UQuitGame_C__pf3053510930_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__GameOverReverence__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__GameOverReverence__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "Temp_bool_Has_Been_Initd_Variable" },
	};
#endif
	void Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit(void* Obj)
	{
		((AbpPlayer_C__pf1380491225*)Obj)->b0l__Temp_bool_Has_Been_Initd_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf = { "Temp_bool_Has_Been_Initd_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpPlayer_C__pf1380491225), &Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "Temp_bool_IsClosed_Variable" },
	};
#endif
	void Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_SetBit(void* Obj)
	{
		((AbpPlayer_C__pf1380491225*)Obj)->b0l__Temp_bool_IsClosed_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf = { "Temp_bool_IsClosed_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpPlayer_C__pf1380491225), &Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf = { "K2Node_InputActionEvent_Key_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__K2Node_InputActionEvent_Key_2__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable" },
	};
#endif
	void Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf_SetBit(void* Obj)
	{
		((AbpPlayer_C__pf1380491225*)Obj)->b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = { "Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpPlayer_C__pf1380491225), &Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_3" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf = { "K2Node_InputActionEvent_Key_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__K2Node_InputActionEvent_Key_3__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "Temp_bool_IsClosed_Variable_1" },
	};
#endif
	void Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_1__pf_SetBit(void* Obj)
	{
		((AbpPlayer_C__pf1380491225*)Obj)->b0l__Temp_bool_IsClosed_Variable_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_1__pf = { "Temp_bool_IsClosed_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpPlayer_C__pf1380491225), &Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "Temp_bool_Has_Been_Initd_Variable_1" },
	};
#endif
	void Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_1__pf_SetBit(void* Obj)
	{
		((AbpPlayer_C__pf1380491225*)Obj)->b0l__Temp_bool_Has_Been_Initd_Variable_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_1__pf = { "Temp_bool_Has_Been_Initd_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpPlayer_C__pf1380491225), &Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "Temp_bool_Has_Been_Initd_Variable_2" },
	};
#endif
	void Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_2__pf_SetBit(void* Obj)
	{
		((AbpPlayer_C__pf1380491225*)Obj)->b0l__Temp_bool_Has_Been_Initd_Variable_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_2__pf = { "Temp_bool_Has_Been_Initd_Variable_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpPlayer_C__pf1380491225), &Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1" },
	};
#endif
	void Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf_SetBit(void* Obj)
	{
		((AbpPlayer_C__pf1380491225*)Obj)->b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf = { "Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpPlayer_C__pf1380491225), &Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Roll" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf = { "CallFunc_BreakRotator_Roll", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_BreakRotator_Roll__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Pitch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf = { "CallFunc_BreakRotator_Pitch", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_BreakRotator_Pitch__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Yaw" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf = { "CallFunc_BreakRotator_Yaw", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_BreakRotator_Yaw__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "Temp_struct_Variable" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_struct_Variable__pf = { "Temp_struct_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__Temp_struct_Variable__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf = { "K2Node_InputActionEvent_Key", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__K2Node_InputActionEvent_Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetRelativeRotation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf = { "CallFunc_K2_SetRelativeRotation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetActorLocation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf = { "CallFunc_K2_SetActorLocation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetActorLocation_SweepHitResult_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf = { "CallFunc_K2_SetActorLocation_SweepHitResult_1", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "Temp_bool_IsClosed_Variable_2" },
	};
#endif
	void Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_2__pf_SetBit(void* Obj)
	{
		((AbpPlayer_C__pf1380491225*)Obj)->b0l__Temp_bool_IsClosed_Variable_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_2__pf = { "Temp_bool_IsClosed_Variable_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpPlayer_C__pf1380491225), &Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_Damage__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_Event_Damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_Damage__pf = { "K2Node_Event_Damage", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__K2Node_Event_Damage__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_Damage__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_Damage__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_DamageType__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_Event_DamageType" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_DamageType__pf = { "K2Node_Event_DamageType", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__K2Node_Event_DamageType__pf), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_DamageType__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_DamageType__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_InstigatedBy__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_Event_InstigatedBy" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_InstigatedBy__pf = { "K2Node_Event_InstigatedBy", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__K2Node_Event_InstigatedBy__pf), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_InstigatedBy__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_InstigatedBy__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_DamageCauser__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_Event_DamageCauser" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_DamageCauser__pf = { "K2Node_Event_DamageCauser", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__K2Node_Event_DamageCauser__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_DamageCauser__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_DamageCauser__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBp_Game_Mod" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf = { "K2Node_DynamicCast_AsBp_Game_Mod", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf), Z_Construct_UClass_AbpGameMod_C__pf1380491225_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AbpPlayer_C__pf1380491225*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpPlayer_C__pf1380491225), &Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_GetDirection_ReturnDirection__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_GetDirection_ReturnDirection" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_GetDirection_ReturnDirection__pf = { "CallFunc_GetDirection_ReturnDirection", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_GetDirection_ReturnDirection__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_GetDirection_ReturnDirection__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_GetDirection_ReturnDirection__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_GetDirection_ReturnDirection_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_GetDirection_ReturnDirection_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_GetDirection_ReturnDirection_1__pf = { "CallFunc_GetDirection_ReturnDirection_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_GetDirection_ReturnDirection_1__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_GetDirection_ReturnDirection_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_GetDirection_ReturnDirection_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetRelativeRotation_SweepHitResult_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult_1__pf = { "CallFunc_K2_SetRelativeRotation_SweepHitResult_1", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult_1__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetActorLocation_SweepHitResult_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult_2__pf = { "CallFunc_K2_SetActorLocation_SweepHitResult_2", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_K2_SetActorLocation_SweepHitResult_2__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf = { "K2Node_InputActionEvent_Key_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__K2Node_InputActionEvent_Key_1__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBp_Game_Mod_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod_1__pf = { "K2Node_DynamicCast_AsBp_Game_Mod_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__K2Node_DynamicCast_AsBp_Game_Mod_1__pf), Z_Construct_UClass_AbpGameMod_C__pf1380491225_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((AbpPlayer_C__pf1380491225*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpPlayer_C__pf1380491225), &Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_HitComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_HitComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_HitComponent__pf = { "K2Node_ComponentBoundEvent_HitComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__K2Node_ComponentBoundEvent_HitComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_HitComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_HitComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf = { "K2Node_ComponentBoundEvent_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__K2Node_ComponentBoundEvent_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf = { "K2Node_ComponentBoundEvent_OtherComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__K2Node_ComponentBoundEvent_OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_NormalImpulse" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf = { "K2Node_ComponentBoundEvent_NormalImpulse", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Hit__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_Hit" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Hit__pf = { "K2Node_ComponentBoundEvent_Hit", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__K2Node_ComponentBoundEvent_Hit__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Hit__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Hit__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_bBlockingHit" },
	};
#endif
	void Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_SetBit(void* Obj)
	{
		((AbpPlayer_C__pf1380491225*)Obj)->b0l__CallFunc_BreakHitResult_bBlockingHit__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf = { "CallFunc_BreakHitResult_bBlockingHit", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpPlayer_C__pf1380491225), &Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_bInitialOverlap" },
	};
#endif
	void Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_SetBit(void* Obj)
	{
		((AbpPlayer_C__pf1380491225*)Obj)->b0l__CallFunc_BreakHitResult_bInitialOverlap__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf = { "CallFunc_BreakHitResult_bInitialOverlap", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpPlayer_C__pf1380491225), &Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf = { "CallFunc_BreakHitResult_Time", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_BreakHitResult_Time__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Distance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf = { "CallFunc_BreakHitResult_Distance", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_BreakHitResult_Distance__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf = { "CallFunc_BreakHitResult_Location", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_BreakHitResult_Location__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_ImpactPoint" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf = { "CallFunc_BreakHitResult_ImpactPoint", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_BreakHitResult_ImpactPoint__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Normal" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf = { "CallFunc_BreakHitResult_Normal", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_BreakHitResult_Normal__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_ImpactNormal" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf = { "CallFunc_BreakHitResult_ImpactNormal", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_BreakHitResult_ImpactNormal__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_PhysMat" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf = { "CallFunc_BreakHitResult_PhysMat", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_BreakHitResult_PhysMat__pf), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf = { "CallFunc_BreakHitResult_HitActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_BreakHitResult_HitActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf = { "CallFunc_BreakHitResult_HitComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_BreakHitResult_HitComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitBoneName" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf = { "CallFunc_BreakHitResult_HitBoneName", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_BreakHitResult_HitBoneName__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitItem" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf = { "CallFunc_BreakHitResult_HitItem", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_BreakHitResult_HitItem__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_ElementIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_ElementIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_ElementIndex__pf = { "CallFunc_BreakHitResult_ElementIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_BreakHitResult_ElementIndex__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_ElementIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_ElementIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_FaceIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf = { "CallFunc_BreakHitResult_FaceIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_BreakHitResult_FaceIndex__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_TraceStart" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf = { "CallFunc_BreakHitResult_TraceStart", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_BreakHitResult_TraceStart__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_TraceEnd" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf = { "CallFunc_BreakHitResult_TraceEnd", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_BreakHitResult_TraceEnd__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_X" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf = { "CallFunc_BreakVector_X", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_BreakVector_X__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Y" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf = { "CallFunc_BreakVector_Y", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_BreakVector_Y__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Z" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf = { "CallFunc_BreakVector_Z", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__CallFunc_BreakVector_Z__pf), METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBp_Enemy_Base" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf = { "K2Node_DynamicCast_AsBp_Enemy_Base", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf), Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_2" },
	};
#endif
	void Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj)
	{
		((AbpPlayer_C__pf1380491225*)Obj)->b0l__K2Node_DynamicCast_bSuccess_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf = { "K2Node_DynamicCast_bSuccess_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpPlayer_C__pf1380491225), &Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Projectile_Enemy__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBp_Projectile_Enemy" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Projectile_Enemy__pf = { "K2Node_DynamicCast_AsBp_Projectile_Enemy", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__K2Node_DynamicCast_AsBp_Projectile_Enemy__pf), Z_Construct_UClass_AbpProjectileEnemy_C__pf4197612240_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Projectile_Enemy__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Projectile_Enemy__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_3" },
	};
#endif
	void Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit(void* Obj)
	{
		((AbpPlayer_C__pf1380491225*)Obj)->b0l__K2Node_DynamicCast_bSuccess_3__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf = { "K2Node_DynamicCast_bSuccess_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbpPlayer_C__pf1380491225), &Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_struct_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/bpPlayer__pf1380491225.h" },
		{ "OverrideNativeName", "Temp_struct_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_struct_Variable_1__pf = { "Temp_struct_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbpPlayer_C__pf1380491225, b0l__Temp_struct_Variable_1__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_struct_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_struct_Variable_1__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__ParticleSystem__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__ProjectileSpawn__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__PlayerCollision__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__playerMesh__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__RotationOffset__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__SpawnAnimation_Spawn_2153BADE47325A13E9CCE8A0C577AC04__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__SpawnAnimation__Direction_2153BADE47325A13E9CCE8A0C577AC04__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__SpawnAnimation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__bHasPower__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__bMovementEnabled__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__bHasRockets__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__vSpawnLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__MovementSpeed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__CurrentSpeed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__HorizontalSpeed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__VerticalSpeed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__Pitch__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__MaxHealth__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__Health__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__PrimaryFireRateBase__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__PrimaryFireRate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__RocketFireRateBase__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__RocketFireRate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__rSpawnRotation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__AnimationPitch__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__iRocketShots__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__HUDreference__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_bpv__GameOverReverence__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Has_Been_Initd_Variable_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_struct_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_bool_IsClosed_Variable_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_Damage__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_DamageType__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_InstigatedBy__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_Event_DamageCauser__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_GetDirection_ReturnDirection__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_GetDirection_ReturnDirection_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_HitComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Hit__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_ElementIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Projectile_Enemy__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::NewProp_b0l__Temp_struct_Variable_1__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AbpPlayer_C__pf1380491225>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::ClassParams = {
		&AbpPlayer_C__pf1380491225::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AbpPlayer_C__pf1380491225()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Misc/bpPlayer"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("bpPlayer_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AbpPlayer_C__pf1380491225, TEXT("bpPlayer_C"), 2689977976);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AbpPlayer_C__pf1380491225>()
	{
		return AbpPlayer_C__pf1380491225::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AbpPlayer_C__pf1380491225(Z_Construct_UClass_AbpPlayer_C__pf1380491225, &AbpPlayer_C__pf1380491225::StaticClass, TEXT("/Game/Blueprints/Misc/bpPlayer"), TEXT("bpPlayer_C"), true, TEXT("/Game/Blueprints/Misc/bpPlayer"), TEXT("/Game/Blueprints/Misc/bpPlayer.bpPlayer_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AbpPlayer_C__pf1380491225);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
