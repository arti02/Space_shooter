#include "NativizedAssets.h"
#include "BP_DemoRoom_Enum__pf2841444455.h"
FText E__BP_DemoRoom_Enum__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__BP_DemoRoom_Enum__pf>(InValue);
	switch(EnumValue)
	{
		case E__BP_DemoRoom_Enum__pf::Standard: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[EA43CBB94FE735F93697888BC6560DB5]\", \"941790E54323AC68C3AB0596E8D0EF2E\", \"Standard\")"), Text); break;
		case E__BP_DemoRoom_Enum__pf::RoofwithHole: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[EA43CBB94FE735F93697888BC6560DB5]\", \"F518C5A7459528B217DC799A0145F21F\", \"RoofwithHole\")"), Text); break;
		case E__BP_DemoRoom_Enum__pf::RoofOpen: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[EA43CBB94FE735F93697888BC6560DB5]\", \"580F70ED42DFF43DDB9DC4B734905715\", \"RoofOpen\")"), Text); break;
		case E__BP_DemoRoom_Enum__pf::E__BP_DemoRoom_Enum__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("BP Demo Room MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
