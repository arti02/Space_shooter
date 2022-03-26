// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef NATIVIZEDASSETS_bpGameMod__pf1380491225_generated_h
#error "bpGameMod__pf1380491225.generated.h already included, missing '#pragma once' in bpGameMod__pf1380491225.h"
#endif
#define NATIVIZEDASSETS_bpGameMod__pf1380491225_generated_h

#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_SPARSE_DATA
#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__SpawnIsland__pf); \
	DECLARE_FUNCTION(execbpf__AddScore__pf); \
	DECLARE_FUNCTION(execbpf__SaveCoins__pf); \
	DECLARE_FUNCTION(execbpf__LoadCoins__pf); \
	DECLARE_FUNCTION(execbpf__AddCoin__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveEndPlay__pf); \
	DECLARE_FUNCTION(execbpf__CallCameShake__pf); \
	DECLARE_FUNCTION(execbpf__AllEnemiesDefetead__pf);


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__SpawnIsland__pf); \
	DECLARE_FUNCTION(execbpf__AddScore__pf); \
	DECLARE_FUNCTION(execbpf__SaveCoins__pf); \
	DECLARE_FUNCTION(execbpf__LoadCoins__pf); \
	DECLARE_FUNCTION(execbpf__AddCoin__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveEndPlay__pf); \
	DECLARE_FUNCTION(execbpf__CallCameShake__pf); \
	DECLARE_FUNCTION(execbpf__AllEnemiesDefetead__pf);


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_EVENT_PARMS \
	struct bpGameMod_C__pf1380491225_eventbpf__ReceiveEndPlay__pf_Parms \
	{ \
		TEnumAsByte<EEndPlayReason::Type> bpp__EndPlayReason__pf; \
	};


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveEndPlay__pf(EEndPlayReason::Type bpp__EndPlayReason__pf); \



#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAbpGameMod_C__pf1380491225(); \
	friend struct Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics; \
public: \
	DECLARE_CLASS(AbpGameMod_C__pf1380491225, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Misc/bpGameMod"), NO_API) \
	DECLARE_SERIALIZER(AbpGameMod_C__pf1380491225)


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAbpGameMod_C__pf1380491225(); \
	friend struct Z_Construct_UClass_AbpGameMod_C__pf1380491225_Statics; \
public: \
	DECLARE_CLASS(AbpGameMod_C__pf1380491225, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Misc/bpGameMod"), NO_API) \
	DECLARE_SERIALIZER(AbpGameMod_C__pf1380491225)


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AbpGameMod_C__pf1380491225(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AbpGameMod_C__pf1380491225) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AbpGameMod_C__pf1380491225); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AbpGameMod_C__pf1380491225); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AbpGameMod_C__pf1380491225(AbpGameMod_C__pf1380491225&&); \
	NO_API AbpGameMod_C__pf1380491225(const AbpGameMod_C__pf1380491225&); \
public:


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AbpGameMod_C__pf1380491225(AbpGameMod_C__pf1380491225&&); \
	NO_API AbpGameMod_C__pf1380491225(const AbpGameMod_C__pf1380491225&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AbpGameMod_C__pf1380491225); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AbpGameMod_C__pf1380491225); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AbpGameMod_C__pf1380491225)


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_PRIVATE_PROPERTY_OFFSET
#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_13_PROLOG \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_EVENT_PARMS


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_PRIVATE_PROPERTY_OFFSET \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_SPARSE_DATA \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_RPC_WRAPPERS \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_CALLBACK_WRAPPERS \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_INCLASS \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_PRIVATE_PROPERTY_OFFSET \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_SPARSE_DATA \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_CALLBACK_WRAPPERS \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_INCLASS_NO_PURE_DECLS \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class AbpGameMod_C__pf1380491225>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_bpGameMod__pf1380491225_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
