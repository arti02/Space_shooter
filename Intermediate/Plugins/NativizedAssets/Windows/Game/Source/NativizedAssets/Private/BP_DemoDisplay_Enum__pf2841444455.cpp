#include "NativizedAssets.h"
#include "BP_DemoDisplay_Enum__pf2841444455.h"
FText E__BP_DemoDisplay_Enum__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__BP_DemoDisplay_Enum__pf>(InValue);
	switch(EnumValue)
	{
		case E__BP_DemoDisplay_Enum__pf::ROund: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[455D171544FE63898F095CAA2CF02865]\", \"FB2A4FA742C3554DDAF42DA49A0F058B\", \"ROund\")"), Text); break;
		case E__BP_DemoDisplay_Enum__pf::SquareL: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[455D171544FE63898F095CAA2CF02865]\", \"73D852354C21529F180A269BBE56DBA6\", \"SquareL\")"), Text); break;
		case E__BP_DemoDisplay_Enum__pf::RoomL: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[455D171544FE63898F095CAA2CF02865]\", \"EBD55CAA43AE87B8A45059B23086D979\", \"RoomL\")"), Text); break;
		case E__BP_DemoDisplay_Enum__pf::DescriptionOnly: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[455D171544FE63898F095CAA2CF02865]\", \"569963344D472F8342949BA937BB1698\", \"DescriptionOnly\")"), Text); break;
		case E__BP_DemoDisplay_Enum__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[455D171544FE63898F095CAA2CF02865]\", \"1098F1444D337C9BCC38C0805C59ECE8\", \"SquareL_FlatWall\")"), Text); break;
		case E__BP_DemoDisplay_Enum__pf::E__BP_DemoDisplay_Enum__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("BP Demo Display MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
