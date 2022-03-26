#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USceneComponent;
class AbpGameMod_C__pf1380491225;
class ABpEnemyBase_C__pf2680686903;
class UClass;
#include "bpSpawnerEnemy__pf2680686903.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Enemies/bpSpawnerEnemy.bpSpawnerEnemy_C", OverrideNativeName="bpSpawnerEnemy_C"))
class AbpSpawnerEnemy_C__pf2680686903 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Scene"))
	USceneComponent* bpv__Scene__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Wave Ready", Category="Default", MultiLine="true", OverrideNativeName="bWaveReady"))
	bool bpv__bWaveReady__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Bp Game Mod", Category="Default", MultiLine="true", OverrideNativeName="bpGameMod"))
	AbpGameMod_C__pf1380491225* bpv__bpGameMod__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Wave Timer", Category="Default", MultiLine="true", OverrideNativeName="WaveTimer"))
	FTimerHandle bpv__WaveTimer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Wave Active", Category="Waves", MultiLine="true", OverrideNativeName="WaveActive"))
	int32 bpv__WaveActive__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Wave Index", Category="Waves", MultiLine="true", OverrideNativeName="WaveIndex"))
	int32 bpv__WaveIndex__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Wave Enemy Count", Category="Default", MultiLine="true", OverrideNativeName="WaveEnemyCount"))
	TArray<int32> bpv__WaveEnemyCount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Waves Enemies 1", Category="Enemies", MultiLine="true", OverrideNativeName="WavesEnemies1"))
	TArray<UClass*> bpv__WavesEnemies1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Waves Enemies 2", Category="Enemies", MultiLine="true", OverrideNativeName="WavesEnemies2"))
	TArray<UClass*> bpv__WavesEnemies2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Waves Enemies 3", Category="Enemies", MultiLine="true", OverrideNativeName="WavesEnemies3"))
	TArray<UClass*> bpv__WavesEnemies3__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Waves Enemies 4", Category="Enemies", MultiLine="true", OverrideNativeName="WavesEnemies4"))
	TArray<UClass*> bpv__WavesEnemies4__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Waves Enemies 5", Category="Enemies", MultiLine="true", OverrideNativeName="WavesEnemies5"))
	TArray<UClass*> bpv__WavesEnemies5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBp_Game_Mod"))
	AbpGameMod_C__pf1380491225* b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	int32 b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	AbpSpawnerEnemy_C__pf2680686903(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_bpSpawnerEnemy__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_bpSpawnerEnemy__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="WaveCheck"))
	virtual void bpf__WaveCheck__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="BeginWave"))
	virtual void bpf__BeginWave__pf(int32 bpp__WaveTotal__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SpawnWave"))
	virtual void bpf__SpawnWave__pf(int32 bpp__WaveTotal__pf, /*out*/ TArray<UClass*>& bpp__WaveEnemies__pf);
public:
};
