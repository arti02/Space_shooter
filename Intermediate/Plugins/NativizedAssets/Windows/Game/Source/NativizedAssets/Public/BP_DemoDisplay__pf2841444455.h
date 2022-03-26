#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "BP_DemoDisplay_Enum__pf2841444455.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USceneComponent;
#include "BP_DemoDisplay__pf2841444455.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoDisplay.BP_DemoDisplay_C", OverrideNativeName="BP_DemoDisplay_C"))
class ABP_DemoDisplay_C__pf2841444455 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="BP_DemoDisplay", OverrideNativeName="Scene1"))
	USceneComponent* bpv__Scene1__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Type", Category="Properties", OverrideNativeName="Type"))
	E__BP_DemoDisplay_Enum__pf bpv__Type__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Text", Category="Properties", OverrideNativeName="Text"))
	bool bpv__Text__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Number", Category="Text", OverrideNativeName="Number"))
	FString bpv__Number__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Description", Category="Text", OverrideNativeName="Description"))
	FString bpv__Description__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Description 2nd Line", Category="Text", OverrideNativeName="Description2ndLine"))
	FString bpv__Description2ndLine__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Transform", Category="Text", OverrideNativeName="Transform"))
	float bpv__Transform__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Background Color", Category="Properties", OverrideNativeName="BackgroundColor"))
	FLinearColor bpv__BackgroundColor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Position Bias 1st Line", Category="Default", OverrideNativeName="PositionBias1stLine"))
	FVector bpv__PositionBias1stLine__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Position Bias 1st Line Room", Category="Default", OverrideNativeName="PositionBias1stLineRoom"))
	FVector bpv__PositionBias1stLineRoom__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Position Bias 2nd Line", Category="Default", OverrideNativeName="PositionBias2ndLine"))
	FVector bpv__PositionBias2ndLine__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Position Bias 2nd Line Room", Category="Default", OverrideNativeName="PositionBias2ndLineRoom"))
	FVector bpv__PositionBias2ndLineRoom__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Scale Transform", Category="Default", Tooltip="Fix for wrong scaled Legacy Cotent", OverrideNativeName="ScaleTransform"))
	float bpv__ScaleTransform__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Mesh Scale", Category="Default", Tooltip="Fix for wrong scaled Legacy Cotent", OverrideNativeName="MeshScale"))
	FVector bpv__MeshScale__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Fix Scale", Category="ScaleFix", Tooltip="this should be set to true ", OverrideNativeName="FixScale"))
	bool bpv__FixScale__pf;
	ABP_DemoDisplay_C__pf2841444455(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Add2ndLineDescription"))
	virtual void bpf__Add2ndLineDescription__pf(FTransform bpp__Transform__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Add1stLineDescription"))
	virtual void bpf__Add1stLineDescription__pf(FTransform bpp__Transform__pf, FVector bpp__PositionBias1stLine__pf, FVector bpp__PositionBias2ndLine__pf, /*out*/ FTransform& bpp__2ndLineTransform__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="FixLegacyScale"))
	virtual void bpf__FixLegacyScale__pf();
public:
};
