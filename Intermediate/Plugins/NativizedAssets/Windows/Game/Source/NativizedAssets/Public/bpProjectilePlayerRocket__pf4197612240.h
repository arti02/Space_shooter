#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "bpProjectilePlayerBase__pf4197612240.h"
class UBoxComponent;
class ABpEnemyBase_C__pf2680686903;
class UPrimitiveComponent;
class AActor;
#include "bpProjectilePlayerRocket__pf4197612240.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Projectiles/bpProjectilePlayerRocket.bpProjectilePlayerRocket_C", OverrideNativeName="bpProjectilePlayerRocket_C"))
class AbpProjectilePlayerRocket_C__pf4197612240 : public AbpProjectilePlayerBase_C__pf4197612240
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="HomingBox"))
	UBoxComponent* bpv__HomingBox__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enemy", Category="Default", MultiLine="true", OverrideNativeName="Enemy"))
	ABpEnemyBase_C__pf2680686903* bpv__Enemy__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Increased Speed", Category="Default", MultiLine="true", OverrideNativeName="IncreasedSpeed"))
	float bpv__IncreasedSpeed__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b1l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b1l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b1l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b1l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b1l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBp_Enemy_Base"))
	ABpEnemyBase_C__pf2680686903* b1l__K2Node_DynamicCast_AsBp_Enemy_Base__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	AbpProjectilePlayerRocket_C__pf4197612240(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_bpProjectilePlayerRocket__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_bpProjectilePlayerRocket__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__bpProjectilePlayerRocket_HomingBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
public:
};
