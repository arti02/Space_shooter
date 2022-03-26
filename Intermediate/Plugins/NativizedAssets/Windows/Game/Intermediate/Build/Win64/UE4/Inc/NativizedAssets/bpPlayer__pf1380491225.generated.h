// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
struct FKey;
class UDamageType;
class AController;
class AActor;
class UPrimitiveComponent;
struct FVector;
struct FHitResult;
#ifdef NATIVIZEDASSETS_bpPlayer__pf1380491225_generated_h
#error "bpPlayer__pf1380491225.generated.h already included, missing '#pragma once' in bpPlayer__pf1380491225.h"
#endif
#define NATIVIZEDASSETS_bpPlayer__pf1380491225_generated_h

#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_SPARSE_DATA
#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__RocketFire__pf); \
	DECLARE_FUNCTION(execbpf__PowerUpFire__pf); \
	DECLARE_FUNCTION(execbpf__PrimaryFire__pf); \
	DECLARE_FUNCTION(execbpf__GetDirection__pf); \
	DECLARE_FUNCTION(execbpf__SpawnAnimation__FinishedFunc__pf); \
	DECLARE_FUNCTION(execbpf__SpawnAnimation__UpdateFunc__pf); \
	DECLARE_FUNCTION(execbpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf); \
	DECLARE_FUNCTION(execbpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf); \
	DECLARE_FUNCTION(execbpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf); \
	DECLARE_FUNCTION(execbpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveAnyDamage__pf); \
	DECLARE_FUNCTION(execbpf__FireRateControl__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf);


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__RocketFire__pf); \
	DECLARE_FUNCTION(execbpf__PowerUpFire__pf); \
	DECLARE_FUNCTION(execbpf__PrimaryFire__pf); \
	DECLARE_FUNCTION(execbpf__GetDirection__pf); \
	DECLARE_FUNCTION(execbpf__SpawnAnimation__FinishedFunc__pf); \
	DECLARE_FUNCTION(execbpf__SpawnAnimation__UpdateFunc__pf); \
	DECLARE_FUNCTION(execbpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf); \
	DECLARE_FUNCTION(execbpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf); \
	DECLARE_FUNCTION(execbpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf); \
	DECLARE_FUNCTION(execbpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveAnyDamage__pf); \
	DECLARE_FUNCTION(execbpf__FireRateControl__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf);


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_EVENT_PARMS \
	struct bpPlayer_C__pf1380491225_eventbpf__ReceiveAnyDamage__pf_Parms \
	{ \
		float bpp__Damage__pf; \
		const UDamageType* bpp__DamageType__pf__const; \
		AController* bpp__InstigatedBy__pf; \
		AActor* bpp__DamageCauser__pf; \
	}; \
	struct bpPlayer_C__pf1380491225_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf); \
 \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \



#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAbpPlayer_C__pf1380491225(); \
	friend struct Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics; \
public: \
	DECLARE_CLASS(AbpPlayer_C__pf1380491225, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Misc/bpPlayer"), NO_API) \
	DECLARE_SERIALIZER(AbpPlayer_C__pf1380491225)


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAbpPlayer_C__pf1380491225(); \
	friend struct Z_Construct_UClass_AbpPlayer_C__pf1380491225_Statics; \
public: \
	DECLARE_CLASS(AbpPlayer_C__pf1380491225, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Misc/bpPlayer"), NO_API) \
	DECLARE_SERIALIZER(AbpPlayer_C__pf1380491225)


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AbpPlayer_C__pf1380491225(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AbpPlayer_C__pf1380491225) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AbpPlayer_C__pf1380491225); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AbpPlayer_C__pf1380491225); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AbpPlayer_C__pf1380491225(AbpPlayer_C__pf1380491225&&); \
	NO_API AbpPlayer_C__pf1380491225(const AbpPlayer_C__pf1380491225&); \
public:


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AbpPlayer_C__pf1380491225(AbpPlayer_C__pf1380491225&&); \
	NO_API AbpPlayer_C__pf1380491225(const AbpPlayer_C__pf1380491225&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AbpPlayer_C__pf1380491225); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AbpPlayer_C__pf1380491225); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AbpPlayer_C__pf1380491225)


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_PRIVATE_PROPERTY_OFFSET
#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_24_PROLOG \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_EVENT_PARMS


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_PRIVATE_PROPERTY_OFFSET \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_SPARSE_DATA \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_RPC_WRAPPERS \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_CALLBACK_WRAPPERS \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_INCLASS \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_PRIVATE_PROPERTY_OFFSET \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_SPARSE_DATA \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_CALLBACK_WRAPPERS \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_INCLASS_NO_PURE_DECLS \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h_28_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class AbpPlayer_C__pf1380491225>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpPlayer__pf1380491225_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
