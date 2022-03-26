#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class UTimelineComponent;
class AbpGameMod_C__pf1380491225;
class AActor;
class UClass;
class UPrimitiveComponent;
class AbpPlayer_C__pf1380491225;
class ABpEnemyBase_C__pf2680686903;
class UDamageType;
class AController;
#include "BpEnemyBase__pf2680686903.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Enemies/BpEnemyBase.BpEnemyBase_C", OverrideNativeName="BpEnemyBase_C"))
class ABpEnemyBase_C__pf2680686903 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="EnemyMesh"))
	UStaticMeshComponent* bpv__EnemyMesh__pf;
	UPROPERTY(meta=(OverrideNativeName="SpawnAnimation_Speed_F9D387B84A7CDE5662812BA1B9DEE299"))
	float bpv__SpawnAnimation_Speed_F9D387B84A7CDE5662812BA1B9DEE299__pf;
	UPROPERTY(meta=(OverrideNativeName="SpawnAnimation__Direction_F9D387B84A7CDE5662812BA1B9DEE299"))
	TEnumAsByte<ETimelineDirection::Type> bpv__SpawnAnimation__Direction_F9D387B84A7CDE5662812BA1B9DEE299__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="BpEnemyBase", OverrideNativeName="SpawnAnimation"))
	UTimelineComponent* bpv__SpawnAnimation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Bp Game Mod", Category="Default", MultiLine="true", OverrideNativeName="Bp_gameMod"))
	AbpGameMod_C__pf1380491225* bpv__Bp_gameMod__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Health", Category="Floats", MultiLine="true", OverrideNativeName="Health"))
	float bpv__Health__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Max Health", Category="Floats", MultiLine="true", OverrideNativeName="MaxHealth"))
	float bpv__MaxHealth__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Random Direction", Category="Floats", MultiLine="true", OverrideNativeName="RandomDirection"))
	float bpv__RandomDirection__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Move Speed", Category="Floats", MultiLine="true", OverrideNativeName="MoveSpeed"))
	float bpv__MoveSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fire Rate", Category="Floats", MultiLine="true", OverrideNativeName="FireRate"))
	float bpv__FireRate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sweep In", Category="Floats", MultiLine="true", OverrideNativeName="SweepIn"))
	float bpv__SweepIn__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Drop Rate", Category="Floats", MultiLine="true", OverrideNativeName="DropRate"))
	float bpv__DropRate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Move Direction", Category="Default", MultiLine="true", OverrideNativeName="bMove_direction"))
	bool bpv__bMove_direction__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="BMove Enabled", Category="Default", MultiLine="true", OverrideNativeName="BMove_enabled"))
	float bpv__BMove_enabled__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Spawn Location", Category="Default", MultiLine="true", OverrideNativeName="SpawnLocation"))
	FVector bpv__SpawnLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Move Enabled", Category="Default", MultiLine="true", OverrideNativeName="Move_enabled"))
	bool bpv__Move_enabled__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Pick Ups", Category="Default", MultiLine="true", OverrideNativeName="PickUps"))
	TArray<UClass*> bpv__PickUps__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBp_Game_Mod"))
	AbpGameMod_C__pf1380491225* b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyComp"))
	UPrimitiveComponent* b0l__K2Node_Event_MyComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Other"))
	AActor* b0l__K2Node_Event_Other__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_Event_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_bSelfMoved"))
	bool b0l__K2Node_Event_bSelfMoved__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_HitLocation"))
	FVector b0l__K2Node_Event_HitLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_HitNormal"))
	FVector b0l__K2Node_Event_HitNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NormalImpulse"))
	FVector b0l__K2Node_Event_NormalImpulse__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Hit"))
	FHitResult b0l__K2Node_Event_Hit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBp_Player"))
	AbpPlayer_C__pf1380491225* b0l__K2Node_DynamicCast_AsBp_Player__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBp_Enemy_Base"))
	ABpEnemyBase_C__pf2680686903* b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Damage"))
	float b0l__K2Node_Event_Damage__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageType"))
	UDamageType* b0l__K2Node_Event_DamageType__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InstigatedBy"))
	AController* b0l__K2Node_Event_InstigatedBy__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageCauser"))
	AActor* b0l__K2Node_Event_DamageCauser__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_SweepHitResult_1"))
	FHitResult b0l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetTransform_ReturnValue"))
	FTransform b0l__CallFunc_GetTransform_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UClass* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue"))
	AActor* b0l__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf;
	ABpEnemyBase_C__pf2680686903(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BpEnemyBase__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BpEnemyBase__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BpEnemyBase__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BpEnemyBase__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BpEnemyBase__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintAuthorityOnly, meta=(Category="Game|Damage", Comment="/** Event when this actor takes ANY damage */", DisplayName="AnyDamage", ToolTip="Event when this actor takes ANY damage", CppFromBpEvent, OverrideNativeName="ReceiveAnyDamage"))
	virtual void bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf);
	UFUNCTION(meta=(Category="Collision", Comment="/** \t * Event when this actor bumps into a blocking object, or blocks another actor that bumps into it.\t * This could happen due to things like Character movement, using Set Location with \'sweep\' enabled, or physics simulation.\t * For events when objects overlap (e.g. walking into a trigger) see the \'Overlap\' event.\t *\t * @note For collisions during physics simulation to generate hit events, \'Simulation Generates Hit Events\' must be enabled.\t * @note When receiving a hit from another object\'s movement (bSelfMoved is false), the directions of \'Hit.Normal\' and \'Hit.ImpactNormal\'\t * will be adjusted to indicate force from the other object against this object.\t * @note NormalImpulse will be filled in for physics-simulating bodies, but will be zero for swept-component blocking collisions.\t */", DisplayName="Hit", ToolTip="Event when this actor bumps into a blocking object, or blocks another actor that bumps into it.This could happen due to things like Character movement, using Set Location with \'sweep\' enabled, or physics simulation.For events when objects overlap (e.g. walking into a trigger) see the \'Overlap\' event.@note For collisions during physics simulation to generate hit events, \'Simulation Generates Hit Events\' must be enabled.@note When receiving a hit from another object\'s movement (bSelfMoved is false), the directions of \'Hit.Normal\' and \'Hit.ImpactNormal\'will be adjusted to indicate force from the other object against this object.@note NormalImpulse will be filled in for physics-simulating bodies, but will be zero for swept-component blocking collisions.", CppFromBpEvent, OverrideNativeName="ReceiveHit"))
	virtual void bpf__ReceiveHit__pf(UPrimitiveComponent* bpp__MyComp__pf, AActor* bpp__Other__pf, UPrimitiveComponent* bpp__OtherComp__pf, bool bpp__bSelfMoved__pf, FVector bpp__HitLocation__pf, FVector bpp__HitNormal__pf, FVector bpp__NormalImpulse__pf, FHitResult const& bpp__Hit__pf__const);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(OverrideNativeName="SpawnAnimation__UpdateFunc"))
	virtual void bpf__SpawnAnimation__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="SpawnAnimation__FinishedFunc"))
	virtual void bpf__SpawnAnimation__FinishedFunc__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
