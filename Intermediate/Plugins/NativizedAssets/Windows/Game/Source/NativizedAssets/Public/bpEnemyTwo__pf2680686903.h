#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "BpEnemyBase__pf2680686903.h"
class USceneComponent;
#include "bpEnemyTwo__pf2680686903.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Enemies/bpEnemyTwo.bpEnemyTwo_C", OverrideNativeName="bpEnemyTwo_C"))
class AbpEnemyTwo_C__pf2680686903 : public ABpEnemyBase_C__pf2680686903
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Bottom"))
	USceneComponent* bpv__Bottom__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Top"))
	USceneComponent* bpv__Top__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FVector b1l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_1"))
	FVector b1l__Temp_struct_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_2"))
	FVector b1l__Temp_struct_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b1l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_3"))
	FVector b1l__Temp_struct_Variable_3__pf;
	AbpEnemyTwo_C__pf2680686903(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_bpEnemyTwo_0"))
	void bpf__ExecuteUbergraph_bpEnemyTwo__pf_0(int32 bpp__EntryPoint__pf);
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf) override;
public:
};
