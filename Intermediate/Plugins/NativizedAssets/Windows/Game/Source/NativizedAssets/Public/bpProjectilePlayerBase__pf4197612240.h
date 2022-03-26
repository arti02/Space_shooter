#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UProjectileMovementComponent;
class UStaticMeshComponent;
class UPrimitiveComponent;
class AActor;
class AbpGameMod_C__pf1380491225;
class ABpEnemyBase_C__pf2680686903;
#include "bpProjectilePlayerBase__pf4197612240.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Projectiles/bpProjectilePlayerBase.bpProjectilePlayerBase_C", OverrideNativeName="bpProjectilePlayerBase_C"))
class AbpProjectilePlayerBase_C__pf4197612240 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ProjectileMovement"))
	UProjectileMovementComponent* bpv__ProjectileMovement__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ProjectileMesh"))
	UStaticMeshComponent* bpv__ProjectileMesh__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speed", Category="Default", MultiLine="true", OverrideNativeName="Speed"))
	float bpv__Speed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Damage", Category="Default", MultiLine="true", OverrideNativeName="Damage"))
	float bpv__Damage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Scale", Category="Default", MultiLine="true", OverrideNativeName="Scale"))
	FVector bpv__Scale__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBp_Game_Mod"))
	AbpGameMod_C__pf1380491225* b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBp_Enemy_Base"))
	ABpEnemyBase_C__pf2680686903* b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	AbpProjectilePlayerBase_C__pf4197612240(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_bpProjectilePlayerBase__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BaseProjectile_ProjectileMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
