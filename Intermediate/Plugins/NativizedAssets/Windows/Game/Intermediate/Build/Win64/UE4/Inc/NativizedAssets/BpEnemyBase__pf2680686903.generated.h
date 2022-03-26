// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
class UDamageType;
class AController;
#ifdef NATIVIZEDASSETS_BpEnemyBase__pf2680686903_generated_h
#error "BpEnemyBase__pf2680686903.generated.h already included, missing '#pragma once' in BpEnemyBase__pf2680686903.h"
#endif
#define NATIVIZEDASSETS_BpEnemyBase__pf2680686903_generated_h

#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_SPARSE_DATA
#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf); \
	DECLARE_FUNCTION(execbpf__SpawnAnimation__FinishedFunc__pf); \
	DECLARE_FUNCTION(execbpf__SpawnAnimation__UpdateFunc__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveHit__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveAnyDamage__pf);


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf); \
	DECLARE_FUNCTION(execbpf__SpawnAnimation__FinishedFunc__pf); \
	DECLARE_FUNCTION(execbpf__SpawnAnimation__UpdateFunc__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveHit__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveAnyDamage__pf);


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_EVENT_PARMS \
	struct BpEnemyBase_C__pf2680686903_eventbpf__ReceiveAnyDamage__pf_Parms \
	{ \
		float bpp__Damage__pf; \
		const UDamageType* bpp__DamageType__pf__const; \
		AController* bpp__InstigatedBy__pf; \
		AActor* bpp__DamageCauser__pf; \
	}; \
	struct BpEnemyBase_C__pf2680686903_eventbpf__ReceiveHit__pf_Parms \
	{ \
		UPrimitiveComponent* bpp__MyComp__pf; \
		AActor* bpp__Other__pf; \
		UPrimitiveComponent* bpp__OtherComp__pf; \
		bool bpp__bSelfMoved__pf; \
		FVector bpp__HitLocation__pf; \
		FVector bpp__HitNormal__pf; \
		FVector bpp__NormalImpulse__pf; \
		FHitResult bpp__Hit__pf__const; \
	}; \
	struct BpEnemyBase_C__pf2680686903_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf); \
 \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveHit__pf(UPrimitiveComponent* bpp__MyComp__pf, AActor* bpp__Other__pf, UPrimitiveComponent* bpp__OtherComp__pf, bool bpp__bSelfMoved__pf, FVector bpp__HitLocation__pf, FVector bpp__HitNormal__pf, FVector bpp__NormalImpulse__pf, FHitResult const& bpp__Hit__pf__const); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABpEnemyBase_C__pf2680686903(); \
	friend struct Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics; \
public: \
	DECLARE_CLASS(ABpEnemyBase_C__pf2680686903, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Enemies/BpEnemyBase"), NO_API) \
	DECLARE_SERIALIZER(ABpEnemyBase_C__pf2680686903)


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_INCLASS \
private: \
	static void StaticRegisterNativesABpEnemyBase_C__pf2680686903(); \
	friend struct Z_Construct_UClass_ABpEnemyBase_C__pf2680686903_Statics; \
public: \
	DECLARE_CLASS(ABpEnemyBase_C__pf2680686903, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Enemies/BpEnemyBase"), NO_API) \
	DECLARE_SERIALIZER(ABpEnemyBase_C__pf2680686903)


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABpEnemyBase_C__pf2680686903(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABpEnemyBase_C__pf2680686903) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABpEnemyBase_C__pf2680686903); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABpEnemyBase_C__pf2680686903); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABpEnemyBase_C__pf2680686903(ABpEnemyBase_C__pf2680686903&&); \
	NO_API ABpEnemyBase_C__pf2680686903(const ABpEnemyBase_C__pf2680686903&); \
public:


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABpEnemyBase_C__pf2680686903(ABpEnemyBase_C__pf2680686903&&); \
	NO_API ABpEnemyBase_C__pf2680686903(const ABpEnemyBase_C__pf2680686903&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABpEnemyBase_C__pf2680686903); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABpEnemyBase_C__pf2680686903); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABpEnemyBase_C__pf2680686903)


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_PRIVATE_PROPERTY_OFFSET
#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_18_PROLOG \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_EVENT_PARMS


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_PRIVATE_PROPERTY_OFFSET \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_SPARSE_DATA \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_RPC_WRAPPERS \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_CALLBACK_WRAPPERS \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_INCLASS \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_PRIVATE_PROPERTY_OFFSET \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_SPARSE_DATA \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_CALLBACK_WRAPPERS \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_INCLASS_NO_PURE_DECLS \
	Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h_22_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ABpEnemyBase_C__pf2680686903>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Space_shooter_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BpEnemyBase__pf2680686903_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
