#pragma once
#include "BP_DemoDisplay_Enum__pf2841444455.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Realistic_Starter_VFX_Pack_Vol2/Demo_Room/BluePrint/BP_DemoDisplay_Enum.BP_DemoDisplay_Enum", OverrideNativeName="BP_DemoDisplay_Enum", EnumDisplayNameFn="E__BP_DemoDisplay_Enum__pf__GetUserFriendlyName") )
enum class E__BP_DemoDisplay_Enum__pf  : uint8
{
	ROund = 0 UMETA(DisplayName = "ROund",OverrideName = "BP_DemoDisplay_Enum::ROund"),
	SquareL = 1 UMETA(DisplayName = "SquareL",OverrideName = "BP_DemoDisplay_Enum::SquareL"),
	RoomL = 2 UMETA(DisplayName = "RoomL",OverrideName = "BP_DemoDisplay_Enum::RoomL"),
	DescriptionOnly = 3 UMETA(DisplayName = "DescriptionOnly",OverrideName = "BP_DemoDisplay_Enum::DescriptionOnly"),
	NewEnumerator0 = 4 UMETA(DisplayName = "SquareL_FlatWall",OverrideName = "BP_DemoDisplay_Enum::NewEnumerator0"),
	E__BP_DemoDisplay_Enum__pf_MAX = 5 UMETA(OverrideName = "BP_DemoDisplay_Enum::BP_DemoDisplay_MAX"),
};
FText E__BP_DemoDisplay_Enum__pf__GetUserFriendlyName(int32 InValue);
