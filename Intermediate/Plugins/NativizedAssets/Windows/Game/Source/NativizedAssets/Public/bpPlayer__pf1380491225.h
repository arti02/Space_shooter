#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
class UParticleSystemComponent;
class USceneComponent;
class UBoxComponent;
class UStaticMeshComponent;
class UTimelineComponent;
class UHUD_C__pf3053510930;
class UQuitGame_C__pf3053510930;
class UDamageType;
class AController;
class AActor;
class AbpGameMod_C__pf1380491225;
class UPrimitiveComponent;
class UPhysicalMaterial;
class ABpEnemyBase_C__pf2680686903;
class AbpProjectileEnemy_C__pf4197612240;
#include "bpPlayer__pf1380491225.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Misc/bpPlayer.bpPlayer_C,/Game/Blueprints/bpPlayer.bpPlayer_C", OverrideNativeName="bpPlayer_C"))
class AbpPlayer_C__pf1380491225 : public APawn
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ParticleSystem"))
	UParticleSystemComponent* bpv__ParticleSystem__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ProjectileSpawn"))
	USceneComponent* bpv__ProjectileSpawn__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PlayerCollision"))
	UBoxComponent* bpv__PlayerCollision__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="playerMesh"))
	UStaticMeshComponent* bpv__playerMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="RotationOffset"))
	USceneComponent* bpv__RotationOffset__pf;
	UPROPERTY(meta=(OverrideNativeName="SpawnAnimation_Spawn_2153BADE47325A13E9CCE8A0C577AC04"))
	float bpv__SpawnAnimation_Spawn_2153BADE47325A13E9CCE8A0C577AC04__pf;
	UPROPERTY(meta=(OverrideNativeName="SpawnAnimation__Direction_2153BADE47325A13E9CCE8A0C577AC04"))
	TEnumAsByte<ETimelineDirection::Type> bpv__SpawnAnimation__Direction_2153BADE47325A13E9CCE8A0C577AC04__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="bpPlayer", OverrideNativeName="SpawnAnimation"))
	UTimelineComponent* bpv__SpawnAnimation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Has Power", Category="Default", MultiLine="true", OverrideNativeName="bHasPower"))
	bool bpv__bHasPower__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Movement Enabled", Category="Default", MultiLine="true", OverrideNativeName="bMovementEnabled"))
	bool bpv__bMovementEnabled__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Has Rockets", Category="Default", MultiLine="true", OverrideNativeName="bHasRockets"))
	bool bpv__bHasRockets__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="V Spawn Location", Category="Default", MultiLine="true", OverrideNativeName="vSpawnLocation"))
	FVector bpv__vSpawnLocation__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Movement Speed", Category="Floats", MultiLine="true", OverrideNativeName="MovementSpeed"))
	float bpv__MovementSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Speed", Category="Floats", MultiLine="true", OverrideNativeName="CurrentSpeed"))
	float bpv__CurrentSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Delta Seconds", Category="Floats", MultiLine="true", OverrideNativeName="DeltaSeconds"))
	float bpv__DeltaSeconds__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Horizontal Speed", Category="Floats", MultiLine="true", OverrideNativeName="HorizontalSpeed"))
	float bpv__HorizontalSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Vertical Speed", Category="Floats", MultiLine="true", OverrideNativeName="VerticalSpeed"))
	float bpv__VerticalSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Pitch", Category="Floats", MultiLine="true", OverrideNativeName="Pitch"))
	float bpv__Pitch__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Max Health", Category="Floats", MultiLine="true", OverrideNativeName="MaxHealth"))
	float bpv__MaxHealth__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Health", Category="Floats", MultiLine="true", OverrideNativeName="Health"))
	float bpv__Health__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Primary Fire Rate Base", Category="Floats", MultiLine="true", OverrideNativeName="PrimaryFireRateBase"))
	float bpv__PrimaryFireRateBase__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Primary Fire Rate", Category="Floats", MultiLine="true", OverrideNativeName="PrimaryFireRate"))
	float bpv__PrimaryFireRate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rocket Fire Rate Base", Category="Floats", MultiLine="true", OverrideNativeName="RocketFireRateBase"))
	float bpv__RocketFireRateBase__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rocket Fire Rate", Category="Floats", MultiLine="true", OverrideNativeName="RocketFireRate"))
	float bpv__RocketFireRate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="R Spawn Rotation", Category="Default", MultiLine="true", OverrideNativeName="rSpawnRotation"))
	FRotator bpv__rSpawnRotation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Animation Pitch", Category="Floats", MultiLine="true", OverrideNativeName="AnimationPitch"))
	float bpv__AnimationPitch__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="I Rocket Shots", Category="Default", MultiLine="true", OverrideNativeName="iRocketShots"))
	int32 bpv__iRocketShots__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="HUDreference", Category="Default", MultiLine="true", OverrideNativeName="HUDreference"))
	UHUD_C__pf3053510930* bpv__HUDreference__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Game Over Reverence", Category="Default", MultiLine="true", OverrideNativeName="GameOverReverence"))
	UQuitGame_C__pf3053510930* bpv__GameOverReverence__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_2"))
	FKey b0l__K2Node_InputActionEvent_Key_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable"))
	bool b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_3"))
	FKey b0l__K2Node_InputActionEvent_Key_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable_1"))
	bool b0l__Temp_bool_IsClosed_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable_1"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable_2"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1"))
	bool b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_SweepHitResult_1"))
	FHitResult b0l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable_2"))
	bool b0l__Temp_bool_IsClosed_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Damage"))
	float b0l__K2Node_Event_Damage__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageType"))
	UDamageType* b0l__K2Node_Event_DamageType__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InstigatedBy"))
	AController* b0l__K2Node_Event_InstigatedBy__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageCauser"))
	AActor* b0l__K2Node_Event_DamageCauser__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBp_Game_Mod"))
	AbpGameMod_C__pf1380491225* b0l__K2Node_DynamicCast_AsBp_Game_Mod__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetDirection_ReturnDirection"))
	float b0l__CallFunc_GetDirection_ReturnDirection__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetDirection_ReturnDirection_1"))
	float b0l__CallFunc_GetDirection_ReturnDirection_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult_1"))
	FHitResult b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_SweepHitResult_2"))
	FHitResult b0l__CallFunc_K2_SetActorLocation_SweepHitResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_1"))
	FKey b0l__K2Node_InputActionEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBp_Game_Mod_1"))
	AbpGameMod_C__pf1380491225* b0l__K2Node_DynamicCast_AsBp_Game_Mod_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_HitComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_NormalImpulse"))
	FVector b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Hit"))
	FHitResult b0l__K2Node_ComponentBoundEvent_Hit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit"))
	bool b0l__CallFunc_BreakHitResult_bBlockingHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap"))
	bool b0l__CallFunc_BreakHitResult_bInitialOverlap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time"))
	float b0l__CallFunc_BreakHitResult_Time__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance"))
	float b0l__CallFunc_BreakHitResult_Distance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location"))
	FVector b0l__CallFunc_BreakHitResult_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint"))
	FVector b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal"))
	FVector b0l__CallFunc_BreakHitResult_Normal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal"))
	FVector b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat"))
	UPhysicalMaterial* b0l__CallFunc_BreakHitResult_PhysMat__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor"))
	AActor* b0l__CallFunc_BreakHitResult_HitActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent"))
	UPrimitiveComponent* b0l__CallFunc_BreakHitResult_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName"))
	FName b0l__CallFunc_BreakHitResult_HitBoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem"))
	int32 b0l__CallFunc_BreakHitResult_HitItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ElementIndex"))
	int32 b0l__CallFunc_BreakHitResult_ElementIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex"))
	int32 b0l__CallFunc_BreakHitResult_FaceIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart"))
	FVector b0l__CallFunc_BreakHitResult_TraceStart__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd"))
	FVector b0l__CallFunc_BreakHitResult_TraceEnd__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBp_Enemy_Base"))
	ABpEnemyBase_C__pf2680686903* b0l__K2Node_DynamicCast_AsBp_Enemy_Base__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBp_Projectile_Enemy"))
	AbpProjectileEnemy_C__pf4197612240* b0l__K2Node_DynamicCast_AsBp_Projectile_Enemy__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_1"))
	FKey b0l__Temp_struct_Variable_1__pf;
	AbpPlayer_C__pf1380491225(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_bpPlayer__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_bpPlayer__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_bpPlayer__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_bpPlayer__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_bpPlayer__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_bpPlayer__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_bpPlayer__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature"))
	virtual void bpf__BndEvt__bpPlayer_PlayerCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__HitComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, FHitResult const& bpp__Hit__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="FireRateControl"))
	virtual void bpf__FireRateControl__pf();
	UFUNCTION(BlueprintAuthorityOnly, meta=(Category="Game|Damage", Comment="/** Event when this actor takes ANY damage */", DisplayName="AnyDamage", ToolTip="Event when this actor takes ANY damage", CppFromBpEvent, OverrideNativeName="ReceiveAnyDamage"))
	virtual void bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_PtimaryFire_K2Node_InputActionEvent_0"))
	virtual void bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_PtimaryFire_K2Node_InputActionEvent_1"))
	virtual void bpf__InpActEvt_PtimaryFire_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_RocketFire_K2Node_InputActionEvent_2"))
	virtual void bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_RocketFire_K2Node_InputActionEvent_3"))
	virtual void bpf__InpActEvt_RocketFire_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="SpawnAnimation__UpdateFunc"))
	virtual void bpf__SpawnAnimation__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="SpawnAnimation__FinishedFunc"))
	virtual void bpf__SpawnAnimation__FinishedFunc__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetDirection"))
	virtual void bpf__GetDirection__pf(float bpp__fSpeed__pf, float bpp__fDirection__pf, /*out*/ float& bpp__ReturnDirection__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PrimaryFire"))
	virtual void bpf__PrimaryFire__pf(USceneComponent* bpp__SpawnLocation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PowerUpFire"))
	virtual void bpf__PowerUpFire__pf(int32 bpp__ShotNum__pf, USceneComponent* bpp__SpawnLocation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RocketFire"))
	virtual void bpf__RocketFire__pf(int32 bpp__ShotNum__pf, USceneComponent* bpp__SpawnLocation__pf);
public:
};
