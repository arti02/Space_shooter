#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UArrowComponent;
class UStaticMeshComponent;
class USceneComponent;
class UStaticMesh;
class AbpGameMod_C__pf1380491225;
#include "bpFloatingIsland__pf1380491225.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Misc/bpFloatingIsland.bpFloatingIsland_C", OverrideNativeName="bpFloatingIsland_C"))
class AbpFloatingIsland_C__pf1380491225 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Arrow"))
	UArrowComponent* bpv__Arrow__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Arrow2"))
	UArrowComponent* bpv__Arrow2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Arrow1"))
	UArrowComponent* bpv__Arrow1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Island"))
	UStaticMeshComponent* bpv__Island__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Scene"))
	USceneComponent* bpv__Scene__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Spawn Points", Category="Default", MultiLine="true", OverrideNativeName="spawnPoints"))
	TArray<FTransform> bpv__spawnPoints__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Trees", Category="Default", MultiLine="true", OverrideNativeName="Trees"))
	TArray<UStaticMesh*> bpv__Trees__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Off Screen Left", Category="Default", MultiLine="true", OverrideNativeName="OffScreenLeft"))
	float bpv__OffScreenLeft__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddActorWorldOffset_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBp_Game_Mod"))
	AbpGameMod_C__pf1380491225* b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	AbpFloatingIsland_C__pf1380491225(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_bpFloatingIsland_0"))
	void bpf__ExecuteUbergraph_bpFloatingIsland__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetSpawnPoints"))
	virtual void bpf__SetSpawnPoints__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SpawnTrees"))
	virtual void bpf__SpawnTrees__pf();
public:
};
