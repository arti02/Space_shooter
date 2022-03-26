#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class URotatingMovementComponent;
class UStaticMeshComponent;
class UPrimitiveComponent;
class AActor;
class AbpPlayer_C__pf1380491225;
class AbpGameMod_C__pf1380491225;
#include "bpProjectileEnemy__pf4197612240.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Projectiles/bpProjectileEnemy.bpProjectileEnemy_C", OverrideNativeName="bpProjectileEnemy_C"))
class AbpProjectileEnemy_C__pf4197612240 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="RotatingMovement"))
	URotatingMovementComponent* bpv__RotatingMovement__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Damage", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="Damage"))
	float bpv__Damage__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Speed", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="Speed"))
	FVector bpv__Speed__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Scale", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="Scale"))
	FVector bpv__Scale__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_HitComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_NormalImpulse"))
	FVector b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Hit"))
	FHitResult b0l__K2Node_ComponentBoundEvent_Hit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBp_Player"))
	AbpPlayer_C__pf1380491225* b0l__K2Node_DynamicCast_AsBp_Player__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddActorLocalOffset_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_AddActorLocalOffset_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBp_Game_Mod"))
	AbpGameMod_C__pf1380491225* b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	AbpProjectileEnemy_C__pf4197612240(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_bpProjectileEnemy__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_bpProjectileEnemy__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature"))
	virtual void bpf__BndEvt__bpProjectileEnemy_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__HitComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, FHitResult const& bpp__Hit__pf__const);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
