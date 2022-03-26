#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UProgressBar;
class UTextBlock;
class AbpPlayer_C__pf1380491225;
class AbpGameMod_C__pf1380491225;
#include "HUD__pf3053510930.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/UI/HUD.HUD_C", OverrideNativeName="HUD_C"))
class UHUD_C__pf3053510930 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="HealthBar", Category="HUD", OverrideNativeName="HealthBar"))
	UProgressBar* bpv__HealthBar__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_1", OverrideNativeName="TextBlock_1"))
	UTextBlock* bpv__TextBlock_1__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_97", OverrideNativeName="TextBlock_97"))
	UTextBlock* bpv__TextBlock_97__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Bp Player", Category="Default", MultiLine="true", OverrideNativeName="Bp Player"))
	AbpPlayer_C__pf1380491225* bpv__BpxPlayer__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Bp Game Mod", Category="Default", MultiLine="true", OverrideNativeName="Bp Game Mod"))
	AbpGameMod_C__pf1380491225* bpv__BpxGamexMod__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="HP", Category="Default", MultiLine="true", OverrideNativeName="HP"))
	float bpv__HP__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Coins", Category="Default", MultiLine="true", OverrideNativeName="CurrentCoins"))
	int32 bpv__CurrentCoins__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Score", Category="Default", MultiLine="true", OverrideNativeName="CurrentScore"))
	int32 bpv__CurrentScore__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBp_Game_Mod"))
	AbpGameMod_C__pf1380491225* b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBp_Player"))
	AbpPlayer_C__pf1380491225* b0l__K2Node_DynamicCast_AsBp_Player__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UHUD_C__pf3053510930(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_HUD__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="HealthBind"))
	virtual float  bpf__HealthBind__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="CoinBind"))
	virtual FText  bpf__CoinBind__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="ScoreBind"))
	virtual FText  bpf__ScoreBind__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
