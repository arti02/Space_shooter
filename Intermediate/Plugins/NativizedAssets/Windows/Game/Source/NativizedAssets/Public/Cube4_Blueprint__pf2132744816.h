#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
class UPrimitiveComponent;
class AActor;
#include "Cube4_Blueprint__pf2132744816.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Cube4_Blueprint.Cube4_Blueprint_C", OverrideNativeName="Cube4_Blueprint_C"))
class ACube4_Blueprint_C__pf2132744816 : public AStaticMeshActor
{
public:
	GENERATED_BODY()
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
	ACube4_Blueprint_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Cube4_Blueprint__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Cube4_Blueprint_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Cube4_Blueprint_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
public:
};
