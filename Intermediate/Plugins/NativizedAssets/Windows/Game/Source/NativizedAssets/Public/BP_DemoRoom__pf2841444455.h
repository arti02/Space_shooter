#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "BP_DemoRoom_Enum__pf2841444455.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USceneComponent;
class UStaticMesh;
#include "BP_DemoRoom__pf2841444455.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoRoom.BP_DemoRoom_C", OverrideNativeName="BP_DemoRoom_C"))
class ABP_DemoRoom_C__pf2841444455 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="BP_DemoRoom", OverrideNativeName="Scene1"))
	USceneComponent* bpv__Scene1__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Room Size", Category="RoomProperties", UIMin="1", UIMax="30", OverrideNativeName="RoomSize"))
	int32 bpv__RoomSize__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Section Width", Category="Sizes", OverrideNativeName="SectionWidth"))
	FVector bpv__SectionWidth__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Trim Width", Category="Sizes", OverrideNativeName="TrimWidth"))
	FVector bpv__TrimWidth__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mirror Room", Category="RoomProperties", OverrideNativeName="MirrorRoom"))
	bool bpv__MirrorRoom__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Lights", Category="RoomProperties", OverrideNativeName="Lights"))
	bool bpv__Lights__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Light Radius", Category="LightProperties", OverrideNativeName="LightRadius"))
	float bpv__LightRadius__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Brightness", Category="LightProperties", OverrideNativeName="Brightness"))
	float bpv__Brightness__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Double Height", Category="RoomProperties", OverrideNativeName="DoubleHeight"))
	bool bpv__DoubleHeight__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Loop Mesh", Category="meshes", OverrideNativeName="LoopMesh"))
	UStaticMesh* bpv__LoopMesh__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Open Roof", Category="RoomProperties", OverrideNativeName="OpenRoof"))
	bool bpv__OpenRoof__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Numberof Rooms", Category="RoomProperties", UIMin="1", UIMax="30", OverrideNativeName="NumberofRooms"))
	int32 bpv__NumberofRooms__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Switch Color", Category="RoomProperties", OverrideNativeName="SwitchColor"))
	bool bpv__SwitchColor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Glass Walls", Category="RoomProperties", OverrideNativeName="GlassWalls"))
	bool bpv__GlassWalls__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Room Names", Category="RoomProperties", OverrideNativeName="RoomNames"))
	TArray<FString> bpv__RoomNames__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Room Type", Category="RoomProperties", OverrideNativeName="RoomType"))
	TArray<E__BP_DemoRoom_Enum__pf> bpv__RoomType__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Front Door", Category="RoomProperties", OverrideNativeName="FrontDoor"))
	bool bpv__FrontDoor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Open Back", Category="RoomProperties", OverrideNativeName="OpenBack"))
	bool bpv__OpenBack__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Cast Shadows", Category="LightProperties", Tooltip="You may want to disable shadows for extremely large rooms or if lots of other lights are used nearby.", OverrideNativeName="CastShadows"))
	bool bpv__CastShadows__pf;
	ABP_DemoRoom_C__pf2841444455(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddLoopSections"))
	virtual void bpf__AddLoopSections__pf(FVector bpp__Scale__pf, float bpp__Offset__pf, int32 bpp__Index__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddBackWall"))
	virtual void bpf__AddBackWall__pf(float bpp__Offset__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddClamp"))
	virtual void bpf__AddClamp__pf(float bpp__Offset__pf, int32 bpp__Index__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddTrim"))
	virtual void bpf__AddTrim__pf(FVector bpp__Scale__pf, int32 bpp__Index__pf, float bpp__Offset__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddWall"))
	virtual void bpf__AddWall__pf(FVector bpp__Scale__pf, float bpp__Offset__pf, int32 bpp__Index__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddLights"))
	virtual void bpf__AddLights__pf(int32 bpp__Index__pf, float bpp__Offset__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddOpenTrim"))
	virtual void bpf__AddOpenTrim__pf(FVector bpp__Scale__pf, float bpp__Offset__pf, int32 bpp__Index__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddRoomNames"))
	virtual void bpf__AddRoomNames__pf(int32 bpp__Index__pf, float bpp__Offset__pf);
public:
};
