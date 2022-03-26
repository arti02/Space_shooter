// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BpEnemyBase__pf2680686903.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBpEnemyBase__pf2680686903() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABpEnemyBase_C__pf2680686903();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineDirection();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpGameMod_C__pf1380491225_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AbpPlayer_C__pf1380491225_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(ABpEnemyBase_C__pf2680686903::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABpEnemyBase_C__pf2680686903::execbpf__SpawnAnimation__FinishedFunc__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SpawnAnimation__FinishedFunc__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABpEnemyBase_C__pf2680686903::execbpf__SpawnAnimation__UpdateFunc__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SpawnAnimation__UpdateFunc__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABpEnemyBase_C__pf2680686903::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABpEnemyBase_C__pf2680686903::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABpEnemyBase_C__pf2680686903::execbpf__ReceiveHit__pf)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__MyComp__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__Other__pf);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf);
		P_GET_UBOOL(Z_Param_bpp__bSelfMoved__pf);
		P_GET_STRUCT(FVector,Z_Param_bpp__HitLocation__pf);
		P_GET_STRUCT(FVector,Z_Param_bpp__HitNormal__pf);
		P_GET_STRUCT(FVector,Z_Param_bpp__NormalImpulse__pf);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__Hit__pf__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveHit__pf(Z_Param_bpp__MyComp__pf,Z_Param_bpp__Other__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__bSelfMoved__pf,Z_Param_bpp__HitLocation__pf,Z_Param_bpp__HitNormal__pf,Z_Param_bpp__NormalImpulse__pf,Z_Param_Out_bpp__Hit__pf__const);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABpEnemyBase_C__pf2680686903::execbpf__ReceiveAnyDamage__pf)
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
	static FName NAME_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf = FName(TEXT("ReceiveAnyDamage"));
	void ABpEnemyBase_C__pf2680686903::eventbpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf)
	{
		BpEnemyBase_C__pf2680686903_eventbpf__ReceiveAnyDamage__pf_Parms Parms;
		Parms.bpp__Damage__pf=bpp__Damage__pf;
		Parms.bpp__DamageType__pf__const=bpp__DamageType__pf__const;
		Parms.bpp__InstigatedBy__pf=bpp__InstigatedBy__pf;
		Parms.bpp__DamageCauser__pf=bpp__DamageCauser__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf),&Parms);
	}
	static FName NAME_ABpEnemyBase_C__pf2680686903_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ABpEnemyBase_C__pf2680686903::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABpEnemyBase_C__pf2680686903_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf = FName(TEXT("ReceiveHit"));
	void ABpEnemyBase_C__pf2680686903::eventbpf__ReceiveHit__pf(UPrimitiveComponent* bpp__MyComp__pf, AActor* bpp__Other__pf, UPrimitiveComponent* bpp__OtherComp__pf, bool bpp__bSelfMoved__pf, FVector bpp__HitLocation__pf, FVector bpp__HitNormal__pf, FVector bpp__NormalImpulse__pf, FHitResult const& bpp__Hit__pf__const)
	{
		BpEnemyBase_C__pf2680686903_eventbpf__ReceiveHit__pf_Parms Parms;
		Parms.bpp__MyComp__pf=bpp__MyComp__pf;
		Parms.bpp__Other__pf=bpp__Other__pf;
		Parms.bpp__OtherComp__pf=bpp__OtherComp__pf;
		Parms.bpp__bSelfMoved__pf=bpp__bSelfMoved__pf ? true : false;
		Parms.bpp__HitLocation__pf=bpp__HitLocation__pf;
		Parms.bpp__HitNormal__pf=bpp__HitNormal__pf;
		Parms.bpp__NormalImpulse__pf=bpp__NormalImpulse__pf;
		Parms.bpp__Hit__pf__const=bpp__Hit__pf__const;
		ProcessEvent(FindFunctionChecked(NAME_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf),&Parms);
	}
	static FName NAME_ABpEnemyBase_C__pf2680686903_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ABpEnemyBase_C__pf2680686903::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		BpEnemyBase_C__pf2680686903_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABpEnemyBase_C__pf2680686903_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_ABpEnemyBase_C__pf2680686903_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABpEnemyBase_C__pf2680686903::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABpEnemyBase_C__pf2680686903_bpf__UserConstructionScript__pf),NULL);
	}
	void ABpEnemyBase_C__pf2680686903::StaticRegisterNativesABpEnemyBase_C__pf2680686903()
	{
		UClass* Class = ABpEnemyBase_C__pf2680686903::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveAnyDamage", &ABpEnemyBase_C__pf2680686903::execbpf__ReceiveAnyDamage__pf },
			{ "ReceiveBeginPlay", &ABpEnemyBase_C__pf2680686903::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveHit", &ABpEnemyBase_C__pf2680686903::execbpf__ReceiveHit__pf },
			{ "ReceiveTick", &ABpEnemyBase_C__pf2680686903::execbpf__ReceiveTick__pf },
			{ "SpawnAnimation__FinishedFunc", &ABpEnemyBase_C__pf2680686903::execbpf__SpawnAnimation__FinishedFunc__pf },
			{ "SpawnAnimation__UpdateFunc", &ABpEnemyBase_C__pf2680686903::execbpf__SpawnAnimation__UpdateFunc__pf },
			{ "UserConstructionScript", &ABpEnemyBase_C__pf2680686903::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf_Statics
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__Damage__pf = { "bpp__Damage__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BpEnemyBase_C__pf2680686903_eventbpf__ReceiveAnyDamage__pf_Parms, bpp__Damage__pf), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__DamageType__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__DamageType__pf__const = { "bpp__DamageType__pf__const", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BpEnemyBase_C__pf2680686903_eventbpf__ReceiveAnyDamage__pf_Parms, bpp__DamageType__pf__const), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__DamageType__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__DamageType__pf__const_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__InstigatedBy__pf = { "bpp__InstigatedBy__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BpEnemyBase_C__pf2680686903_eventbpf__ReceiveAnyDamage__pf_Parms, bpp__InstigatedBy__pf), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__DamageCauser__pf = { "bpp__DamageCauser__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BpEnemyBase_C__pf2680686903_eventbpf__ReceiveAnyDamage__pf_Parms, bpp__DamageCauser__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__Damage__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__DamageType__pf__const,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__InstigatedBy__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf_Statics::NewProp_bpp__DamageCauser__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Damage" },
		{ "Comment", "/** Event when this actor takes ANY damage */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "AnyDamage" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "ReceiveAnyDamage" },
		{ "ToolTip", "Event when this actor takes ANY damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABpEnemyBase_C__pf2680686903, nullptr, "ReceiveAnyDamage", nullptr, nullptr, sizeof(BpEnemyBase_C__pf2680686903_eventbpf__ReceiveAnyDamage__pf_Parms), Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C04, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABpEnemyBase_C__pf2680686903();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveAnyDamage" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABpEnemyBase_C__pf2680686903, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABpEnemyBase_C__pf2680686903();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__MyComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__MyComp__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Other__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherComp__pf;
		static void NewProp_bpp__bSelfMoved__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__bSelfMoved__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__HitLocation__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__HitNormal__pf;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__MyComp__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__MyComp__pf = { "bpp__MyComp__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BpEnemyBase_C__pf2680686903_eventbpf__ReceiveHit__pf_Parms, bpp__MyComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__MyComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__MyComp__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__Other__pf = { "bpp__Other__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BpEnemyBase_C__pf2680686903_eventbpf__ReceiveHit__pf_Parms, bpp__Other__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__OtherComp__pf = { "bpp__OtherComp__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BpEnemyBase_C__pf2680686903_eventbpf__ReceiveHit__pf_Parms, bpp__OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData)) };
	void Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__bSelfMoved__pf_SetBit(void* Obj)
	{
		((BpEnemyBase_C__pf2680686903_eventbpf__ReceiveHit__pf_Parms*)Obj)->bpp__bSelfMoved__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__bSelfMoved__pf = { "bpp__bSelfMoved__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(BpEnemyBase_C__pf2680686903_eventbpf__ReceiveHit__pf_Parms), &Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__bSelfMoved__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__HitLocation__pf = { "bpp__HitLocation__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BpEnemyBase_C__pf2680686903_eventbpf__ReceiveHit__pf_Parms, bpp__HitLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__HitNormal__pf = { "bpp__HitNormal__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BpEnemyBase_C__pf2680686903_eventbpf__ReceiveHit__pf_Parms, bpp__HitNormal__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__NormalImpulse__pf = { "bpp__NormalImpulse__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BpEnemyBase_C__pf2680686903_eventbpf__ReceiveHit__pf_Parms, bpp__NormalImpulse__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__Hit__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__Hit__pf__const = { "bpp__Hit__pf__const", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BpEnemyBase_C__pf2680686903_eventbpf__ReceiveHit__pf_Parms, bpp__Hit__pf__const), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__Hit__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__Hit__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__MyComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__Other__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__bSelfMoved__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__HitLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__HitNormal__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__NormalImpulse__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::NewProp_bpp__Hit__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** t * Event when this actor bumps into a blocking object, or blocks another actor that bumps into it.t * This could happen due to things like Character movement, using Set Location with 'sweep' enabled, or physics simulation.t * For events when objects overlap (e.g. walking into a trigger) see the 'Overlap' event.t *t * @note For collisions during physics simulation to generate hit events, 'Simulation Generates Hit Events' must be enabled.t * @note When receiving a hit from another object's movement (bSelfMoved is false), the directions of 'Hit.Normal' and 'Hit.ImpactNormal't * will be adjusted to indicate force from the other object against this object.t * @note NormalImpulse will be filled in for physics-simulating bodies, but will be zero for swept-component blocking collisions.t */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Hit" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "ReceiveHit" },
		{ "ToolTip", "Event when this actor bumps into a blocking object, or blocks another actor that bumps into it.This could happen due to things like Character movement, using Set Location with 'sweep' enabled, or physics simulation.For events when objects overlap (e.g. walking into a trigger) see the 'Overlap' event.@note For collisions during physics simulation to generate hit events, 'Simulation Generates Hit Events' must be enabled.@note When receiving a hit from another object's movement (bSelfMoved is false), the directions of 'Hit.Normal' and 'Hit.ImpactNormal'will be adjusted to indicate force from the other object against this object.@note NormalImpulse will be filled in for physics-simulating bodies, but will be zero for swept-component blocking collisions." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABpEnemyBase_C__pf2680686903, nullptr, "ReceiveHit", nullptr, nullptr, sizeof(BpEnemyBase_C__pf2680686903_eventbpf__ReceiveHit__pf_Parms), Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABpEnemyBase_C__pf2680686903();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveHit" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BpEnemyBase_C__pf2680686903_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABpEnemyBase_C__pf2680686903, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(BpEnemyBase_C__pf2680686903_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABpEnemyBase_C__pf2680686903();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__SpawnAnimation__FinishedFunc__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__SpawnAnimation__FinishedFunc__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "SpawnAnimation__FinishedFunc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__SpawnAnimation__FinishedFunc__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABpEnemyBase_C__pf2680686903, nullptr, "SpawnAnimation__FinishedFunc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__SpawnAnimation__FinishedFunc__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__SpawnAnimation__FinishedFunc__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__SpawnAnimation__FinishedFunc__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABpEnemyBase_C__pf2680686903();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SpawnAnimation__FinishedFunc" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__SpawnAnimation__FinishedFunc__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__SpawnAnimation__UpdateFunc__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__SpawnAnimation__UpdateFunc__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "SpawnAnimation__UpdateFunc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__SpawnAnimation__UpdateFunc__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABpEnemyBase_C__pf2680686903, nullptr, "SpawnAnimation__UpdateFunc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__SpawnAnimation__UpdateFunc__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__SpawnAnimation__UpdateFunc__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__SpawnAnimation__UpdateFunc__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABpEnemyBase_C__pf2680686903();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SpawnAnimation__UpdateFunc" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__SpawnAnimation__UpdateFunc__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABpEnemyBase_C__pf2680686903, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABpEnemyBase_C__pf2680686903();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_NoRegister()
	{
		return ABpEnemyBase_C__pf2680686903::StaticClass();
	}
	struct Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__EnemyMesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__EnemyMesh__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpawnAnimation_Speed_F9D387B84A7CDE5662812BA1B9DEE299__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SpawnAnimation_Speed_F9D387B84A7CDE5662812BA1B9DEE299__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpawnAnimation__Direction_F9D387B84A7CDE5662812BA1B9DEE299__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__SpawnAnimation__Direction_F9D387B84A7CDE5662812BA1B9DEE299__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpawnAnimation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SpawnAnimation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Bp_gameMod__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Bp_gameMod__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Health__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Health__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MaxHealth__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__MaxHealth__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RandomDirection__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__RandomDirection__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MoveSpeed__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__MoveSpeed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FireRate__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__FireRate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SweepIn__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SweepIn__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DropRate__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__DropRate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bMove_direction__pf_MetaData[];
#endif
		static void NewProp_bpv__bMove_direction__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bMove_direction__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BMove_enabled__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__BMove_enabled__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpawnLocation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__SpawnLocation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Move_enabled__pf_MetaData[];
#endif
		static void NewProp_bpv__Move_enabled__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Move_enabled__pf;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__PickUps__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PickUps__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__PickUps__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_MyComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_MyComp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_Other__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_Other__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_OtherComp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_bSelfMoved__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_Event_bSelfMoved__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_Event_bSelfMoved__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_HitLocation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Event_HitLocation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_HitNormal__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Event_HitNormal__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_NormalImpulse__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Event_NormalImpulse__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_Hit__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Event_Hit__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetTransform_ReturnValue__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetTransform_ReturnValue__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveAnyDamage__pf, "ReceiveAnyDamage" }, // 1666712591
		{ &Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 2402522482
		{ &Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveHit__pf, "ReceiveHit" }, // 1305824714
		{ &Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__ReceiveTick__pf, "ReceiveTick" }, // 3473498265
		{ &Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__SpawnAnimation__FinishedFunc__pf, "SpawnAnimation__FinishedFunc" }, // 2110810708
		{ &Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__SpawnAnimation__UpdateFunc__pf, "SpawnAnimation__UpdateFunc" }, // 2944417526
		{ &Z_Construct_UFunction_ABpEnemyBase_C__pf2680686903_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 1458706759
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BpEnemyBase__pf2680686903.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BpEnemyBase_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Enemies/BpEnemyBase.BpEnemyBase_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__EnemyMesh__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "EnemyMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__EnemyMesh__pf = { "EnemyMesh", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, bpv__EnemyMesh__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__EnemyMesh__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__EnemyMesh__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SpawnAnimation_Speed_F9D387B84A7CDE5662812BA1B9DEE299__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "SpawnAnimation_Speed_F9D387B84A7CDE5662812BA1B9DEE299" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SpawnAnimation_Speed_F9D387B84A7CDE5662812BA1B9DEE299__pf = { "SpawnAnimation_Speed_F9D387B84A7CDE5662812BA1B9DEE299", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, bpv__SpawnAnimation_Speed_F9D387B84A7CDE5662812BA1B9DEE299__pf), METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SpawnAnimation_Speed_F9D387B84A7CDE5662812BA1B9DEE299__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SpawnAnimation_Speed_F9D387B84A7CDE5662812BA1B9DEE299__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SpawnAnimation__Direction_F9D387B84A7CDE5662812BA1B9DEE299__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "SpawnAnimation__Direction_F9D387B84A7CDE5662812BA1B9DEE299" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SpawnAnimation__Direction_F9D387B84A7CDE5662812BA1B9DEE299__pf = { "SpawnAnimation__Direction_F9D387B84A7CDE5662812BA1B9DEE299", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, bpv__SpawnAnimation__Direction_F9D387B84A7CDE5662812BA1B9DEE299__pf), Z_Construct_UEnum_Engine_ETimelineDirection, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SpawnAnimation__Direction_F9D387B84A7CDE5662812BA1B9DEE299__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SpawnAnimation__Direction_F9D387B84A7CDE5662812BA1B9DEE299__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SpawnAnimation__pf_MetaData[] = {
		{ "Category", "BpEnemyBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "SpawnAnimation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SpawnAnimation__pf = { "SpawnAnimation", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, bpv__SpawnAnimation__pf), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SpawnAnimation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SpawnAnimation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__Bp_gameMod__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Bp Game Mod" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Bp_gameMod" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__Bp_gameMod__pf = { "Bp_gameMod", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, bpv__Bp_gameMod__pf), Z_Construct_UClass_AbpGameMod_C__pf1380491225_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__Bp_gameMod__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__Bp_gameMod__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__Health__pf_MetaData[] = {
		{ "Category", "Floats" },
		{ "DisplayName", "Health" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Health" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__Health__pf = { "Health", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, bpv__Health__pf), METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__Health__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__Health__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__MaxHealth__pf_MetaData[] = {
		{ "Category", "Floats" },
		{ "DisplayName", "Max Health" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "MaxHealth" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__MaxHealth__pf = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, bpv__MaxHealth__pf), METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__MaxHealth__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__MaxHealth__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__RandomDirection__pf_MetaData[] = {
		{ "Category", "Floats" },
		{ "DisplayName", "Random Direction" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "RandomDirection" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__RandomDirection__pf = { "RandomDirection", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, bpv__RandomDirection__pf), METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__RandomDirection__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__RandomDirection__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__MoveSpeed__pf_MetaData[] = {
		{ "Category", "Floats" },
		{ "DisplayName", "Move Speed" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "MoveSpeed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__MoveSpeed__pf = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, bpv__MoveSpeed__pf), METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__MoveSpeed__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__MoveSpeed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__FireRate__pf_MetaData[] = {
		{ "Category", "Floats" },
		{ "DisplayName", "Fire Rate" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "FireRate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__FireRate__pf = { "FireRate", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, bpv__FireRate__pf), METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__FireRate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__FireRate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SweepIn__pf_MetaData[] = {
		{ "Category", "Floats" },
		{ "DisplayName", "Sweep In" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SweepIn" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SweepIn__pf = { "SweepIn", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, bpv__SweepIn__pf), METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SweepIn__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SweepIn__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__DropRate__pf_MetaData[] = {
		{ "Category", "Floats" },
		{ "DisplayName", "Drop Rate" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "DropRate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__DropRate__pf = { "DropRate", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, bpv__DropRate__pf), METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__DropRate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__DropRate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__bMove_direction__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Move Direction" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "bMove_direction" },
	};
#endif
	void Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__bMove_direction__pf_SetBit(void* Obj)
	{
		((ABpEnemyBase_C__pf2680686903*)Obj)->bpv__bMove_direction__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__bMove_direction__pf = { "bMove_direction", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABpEnemyBase_C__pf2680686903), &Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__bMove_direction__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__bMove_direction__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__bMove_direction__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__BMove_enabled__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "BMove Enabled" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "BMove_enabled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__BMove_enabled__pf = { "BMove_enabled", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, bpv__BMove_enabled__pf), METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__BMove_enabled__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__BMove_enabled__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SpawnLocation__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Spawn Location" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SpawnLocation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SpawnLocation__pf = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, bpv__SpawnLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SpawnLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SpawnLocation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__Move_enabled__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Move Enabled" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Move_enabled" },
	};
#endif
	void Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__Move_enabled__pf_SetBit(void* Obj)
	{
		((ABpEnemyBase_C__pf2680686903*)Obj)->bpv__Move_enabled__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__Move_enabled__pf = { "Move_enabled", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABpEnemyBase_C__pf2680686903), &Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__Move_enabled__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__Move_enabled__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__Move_enabled__pf_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__PickUps__pf_Inner = { "bpv__PickUps__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__PickUps__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Pick Ups" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "PickUps" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__PickUps__pf = { "PickUps", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, bpv__PickUps__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__PickUps__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__PickUps__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBp_Game_Mod" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf = { "K2Node_DynamicCast_AsBp_Game_Mod", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf), Z_Construct_UClass_AbpGameMod_C__pf1380491225_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((ABpEnemyBase_C__pf2680686903*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABpEnemyBase_C__pf2680686903), &Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetActorLocation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf = { "CallFunc_K2_SetActorLocation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_MyComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_Event_MyComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_MyComp__pf = { "K2Node_Event_MyComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, b0l__K2Node_Event_MyComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_MyComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_MyComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_Other__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_Event_Other" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_Other__pf = { "K2Node_Event_Other", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, b0l__K2Node_Event_Other__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_Other__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_Other__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_Event_OtherComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_OtherComp__pf = { "K2Node_Event_OtherComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, b0l__K2Node_Event_OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_OtherComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_bSelfMoved__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_Event_bSelfMoved" },
	};
#endif
	void Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_bSelfMoved__pf_SetBit(void* Obj)
	{
		((ABpEnemyBase_C__pf2680686903*)Obj)->b0l__K2Node_Event_bSelfMoved__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_bSelfMoved__pf = { "K2Node_Event_bSelfMoved", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABpEnemyBase_C__pf2680686903), &Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_bSelfMoved__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_bSelfMoved__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_bSelfMoved__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_HitLocation__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_Event_HitLocation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_HitLocation__pf = { "K2Node_Event_HitLocation", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, b0l__K2Node_Event_HitLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_HitLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_HitLocation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_HitNormal__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_Event_HitNormal" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_HitNormal__pf = { "K2Node_Event_HitNormal", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, b0l__K2Node_Event_HitNormal__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_HitNormal__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_HitNormal__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_NormalImpulse__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_Event_NormalImpulse" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_NormalImpulse__pf = { "K2Node_Event_NormalImpulse", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, b0l__K2Node_Event_NormalImpulse__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_NormalImpulse__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_NormalImpulse__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_Hit__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_Event_Hit" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_Hit__pf = { "K2Node_Event_Hit", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, b0l__K2Node_Event_Hit__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_Hit__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_Hit__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBp_Player" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf = { "K2Node_DynamicCast_AsBp_Player", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, b0l__K2Node_DynamicCast_AsBp_Player__pf), Z_Construct_UClass_AbpPlayer_C__pf1380491225_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((ABpEnemyBase_C__pf2680686903*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABpEnemyBase_C__pf2680686903), &Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBp_Enemy_Base" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf = { "K2Node_DynamicCast_AsBp_Enemy_Base", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf), Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_2" },
	};
#endif
	void Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj)
	{
		((ABpEnemyBase_C__pf2680686903*)Obj)->b0l__K2Node_DynamicCast_bSuccess_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf = { "K2Node_DynamicCast_bSuccess_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABpEnemyBase_C__pf2680686903), &Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_Damage__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_Event_Damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_Damage__pf = { "K2Node_Event_Damage", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, b0l__K2Node_Event_Damage__pf), METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_Damage__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_Damage__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_DamageType__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_Event_DamageType" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_DamageType__pf = { "K2Node_Event_DamageType", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, b0l__K2Node_Event_DamageType__pf), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_DamageType__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_DamageType__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_InstigatedBy__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_Event_InstigatedBy" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_InstigatedBy__pf = { "K2Node_Event_InstigatedBy", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, b0l__K2Node_Event_InstigatedBy__pf), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_InstigatedBy__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_InstigatedBy__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_DamageCauser__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "K2Node_Event_DamageCauser" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_DamageCauser__pf = { "K2Node_Event_DamageCauser", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, b0l__K2Node_Event_DamageCauser__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_DamageCauser__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_DamageCauser__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetActorLocation_SweepHitResult_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf = { "CallFunc_K2_SetActorLocation_SweepHitResult_1", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, b0l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_GetTransform_ReturnValue__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "CallFunc_GetTransform_ReturnValue" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_GetTransform_ReturnValue__pf = { "CallFunc_GetTransform_ReturnValue", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, b0l__CallFunc_GetTransform_ReturnValue__pf), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_GetTransform_ReturnValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_GetTransform_ReturnValue__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BpEnemyBase__pf2680686903.h" },
		{ "OverrideNativeName", "CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = { "CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABpEnemyBase_C__pf2680686903, b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__EnemyMesh__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SpawnAnimation_Speed_F9D387B84A7CDE5662812BA1B9DEE299__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SpawnAnimation__Direction_F9D387B84A7CDE5662812BA1B9DEE299__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SpawnAnimation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__Bp_gameMod__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__Health__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__MaxHealth__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__RandomDirection__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__MoveSpeed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__FireRate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SweepIn__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__DropRate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__bMove_direction__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__BMove_enabled__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__SpawnLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__Move_enabled__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__PickUps__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_bpv__PickUps__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_MyComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_Other__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_bSelfMoved__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_HitLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_HitNormal__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_NormalImpulse__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_Hit__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Player__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_Damage__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_DamageType__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_InstigatedBy__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__K2Node_Event_DamageCauser__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_GetTransform_ReturnValue__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::NewProp_b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABpEnemyBase_C__pf2680686903>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::ClassParams = {
		&ABpEnemyBase_C__pf2680686903::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABpEnemyBase_C__pf2680686903()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Enemies/BpEnemyBase"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BpEnemyBase_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABpEnemyBase_C__pf2680686903, TEXT("BpEnemyBase_C"), 296649847);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABpEnemyBase_C__pf2680686903>()
	{
		return ABpEnemyBase_C__pf2680686903::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABpEnemyBase_C__pf2680686903(Z_Construct_UClass_ABpEnemyBase_C__pf2680686903, &ABpEnemyBase_C__pf2680686903::StaticClass, TEXT("/Game/Blueprints/Enemies/BpEnemyBase"), TEXT("BpEnemyBase_C"), true, TEXT("/Game/Blueprints/Enemies/BpEnemyBase"), TEXT("/Game/Blueprints/Enemies/BpEnemyBase.BpEnemyBase_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABpEnemyBase_C__pf2680686903);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
