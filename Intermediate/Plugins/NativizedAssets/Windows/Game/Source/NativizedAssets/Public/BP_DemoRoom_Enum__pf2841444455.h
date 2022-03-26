#pragma once
#include "BP_DemoRoom_Enum__pf2841444455.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoRoom_Enum.BP_DemoRoom_Enum", OverrideNativeName="BP_DemoRoom_Enum", EnumDisplayNameFn="E__BP_DemoRoom_Enum__pf__GetUserFriendlyName") )
enum class E__BP_DemoRoom_Enum__pf  : uint8
{
	Standard = 0 UMETA(OverrideName = "BP_DemoRoom_Enum::Standard"),
	RoofwithHole = 1 UMETA(OverrideName = "BP_DemoRoom_Enum::RoofwithHole"),
	RoofOpen = 2 UMETA(OverrideName = "BP_DemoRoom_Enum::RoofOpen"),
	E__BP_DemoRoom_Enum__pf_MAX = 3 UMETA(OverrideName = "BP_DemoRoom_Enum::BP_DemoRoom_MAX"),
};
FText E__BP_DemoRoom_Enum__pf__GetUserFriendlyName(int32 InValue);
