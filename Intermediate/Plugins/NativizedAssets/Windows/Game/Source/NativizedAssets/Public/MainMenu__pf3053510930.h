#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UTextBlock;
#include "MainMenu__pf3053510930.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/UI/MainMenu.MainMenu_C", OverrideNativeName="MainMenu_C"))
class UMainMenu_C__pf3053510930 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Level 1", Category="MainMenu", OverrideNativeName="Level1"))
	UButton* bpv__Level1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Level 2", Category="MainMenu", OverrideNativeName="Level2"))
	UButton* bpv__Level2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Level Select Title", Category="MainMenu", OverrideNativeName="LevelSelectTitle"))
	UTextBlock* bpv__LevelSelectTitle__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PlayButton", Category="MainMenu", OverrideNativeName="PlayButton"))
	UButton* bpv__PlayButton__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="QuitButton", Category="MainMenu", OverrideNativeName="QuitButton"))
	UButton* bpv__QuitButton__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Level to Load", Category="Default", MultiLine="true", OverrideNativeName="LevelToLoad"))
	FName bpv__LevelToLoad__pf;
	UMainMenu_C__pf3053510930(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MainMenu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__MainMenu_Level2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__MainMenu_Level2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__MainMenu_Level1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__MainMenu_Level1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__MainMenu_PlayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__MainMenu_PlayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__MainMenu_QuitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__MainMenu_QuitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
