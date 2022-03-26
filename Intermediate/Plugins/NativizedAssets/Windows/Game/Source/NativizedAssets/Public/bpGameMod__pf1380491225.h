#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
class UAudioComponent;
class USceneComponent;
class USaveGame;
class UQuitGame_C__pf3053510930;
class UCameraShakeBase;
class UClass;
#include "bpGameMod__pf1380491225.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Misc/bpGameMod.bpGameMod_C,/Game/Blueprints/bpGameMod.bpGameMod_C", OverrideNativeName="bpGameMod_C"))
class AbpGameMod_C__pf1380491225 : public AGameModeBase
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BGM"))
	UAudioComponent* bpv__BGM__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Player Dead", Category="Default", MultiLine="true", OverrideNativeName="bPlayerDead"))
	bool bpv__bPlayerDead__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Spawn Inerwal", Category="Default", MultiLine="true", OverrideNativeName="SpawnInerwal"))
	float bpv__SpawnInerwal__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Live Enemies", Category="Default", MultiLine="true", OverrideNativeName="LiveEnemies"))
	int32 bpv__LiveEnemies__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Max Waves", Category="Default", MultiLine="true", OverrideNativeName="MaxWaves"))
	int32 bpv__MaxWaves__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Active Wave", Category="Default", MultiLine="true", OverrideNativeName="ActiveWave"))
	int32 bpv__ActiveWave__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Score", Category="Default", MultiLine="true", OverrideNativeName="Score"))
	int32 bpv__Score__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Coins Earned", Category="Default", MultiLine="true", OverrideNativeName="CoinsEarned"))
	int32 bpv__CoinsEarned__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Coins", Category="Default", MultiLine="true", OverrideNativeName="Coins"))
	int32 bpv__Coins__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Enemy Spown Location Min", Category="Default", MultiLine="true", OverrideNativeName="EnemySpownLocationMin"))
	FVector bpv__EnemySpownLocationMin__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Enemy Spown Location Max", Category="Default", MultiLine="true", OverrideNativeName="EnemySpownLocationMax"))
	FVector bpv__EnemySpownLocationMax__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Coin Save Name", Category="Default", MultiLine="true", OverrideNativeName="Coin Save Name"))
	FString bpv__CoinxSavexName__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Save Sub", Category="Default", MultiLine="true", OverrideNativeName="Save Sub"))
	USaveGame* bpv__SavexSub__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Game Over Menu Reference", Category="Default", MultiLine="true", OverrideNativeName="GameOverMenuReference"))
	UQuitGame_C__pf3053510930* bpv__GameOverMenuReference__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_EndPlayReason"))
	TEnumAsByte<EEndPlayReason::Type> b0l__K2Node_Event_EndPlayReason__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_ShakeType"))
	UClass* b0l__K2Node_CustomEvent_ShakeType__pf;
	AbpGameMod_C__pf1380491225(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_bpGameMod__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_bpGameMod__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_bpGameMod__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_bpGameMod__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AllEnemiesDefetead"))
	virtual void bpf__AllEnemiesDefetead__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CallCameShake"))
	virtual void bpf__CallCameShake__pf(UClass* bpp__ShakeType__pf);
	UFUNCTION(meta=(Comment="/** Event to notify blueprints this actor is being deleted or removed from a level. */", DisplayName="End Play", Keywords="delete", ToolTip="Event to notify blueprints this actor is being deleted or removed from a level.", CppFromBpEvent, OverrideNativeName="ReceiveEndPlay"))
	virtual void bpf__ReceiveEndPlay__pf(EEndPlayReason::Type bpp__EndPlayReason__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddCoin"))
	virtual void bpf__AddCoin__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LoadCoins"))
	virtual void bpf__LoadCoins__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SaveCoins"))
	virtual void bpf__SaveCoins__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddScore"))
	virtual void bpf__AddScore__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SpawnIsland"))
	virtual void bpf__SpawnIsland__pf();
public:
};
