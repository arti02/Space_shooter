#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "bpCoinSave__pf1380491225.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Misc/bpCoinSave.bpCoinSave_C", OverrideNativeName="bpCoinSave_C"))
class UbpCoinSave_C__pf1380491225 : public USaveGame
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Coin Count", Category="Default", MultiLine="true", OverrideNativeName="CoinCount"))
	int32 bpv__CoinCount__pf;
	UbpCoinSave_C__pf1380491225(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
