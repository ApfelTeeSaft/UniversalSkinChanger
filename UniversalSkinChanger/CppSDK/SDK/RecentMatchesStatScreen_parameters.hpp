#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RecentMatchesStatScreen

#include "Basic.hpp"


namespace SDK::Params
{

// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.ExecuteUbergraph_RecentMatchesStatScreen
// 0x0028 (0x0028 - 0x0000)
struct RecentMatchesStatScreen_C_ExecuteUbergraph_RecentMatchesStatScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAthenaMatchStatView*>           CallFunc_GetRecentMatches_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, ReferenceParm)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(RecentMatchesStatScreen_C_ExecuteUbergraph_RecentMatchesStatScreen) == 0x000008, "Wrong alignment on RecentMatchesStatScreen_C_ExecuteUbergraph_RecentMatchesStatScreen");
static_assert(sizeof(RecentMatchesStatScreen_C_ExecuteUbergraph_RecentMatchesStatScreen) == 0x000028, "Wrong size on RecentMatchesStatScreen_C_ExecuteUbergraph_RecentMatchesStatScreen");
static_assert(offsetof(RecentMatchesStatScreen_C_ExecuteUbergraph_RecentMatchesStatScreen, EntryPoint) == 0x000000, "Member 'RecentMatchesStatScreen_C_ExecuteUbergraph_RecentMatchesStatScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(RecentMatchesStatScreen_C_ExecuteUbergraph_RecentMatchesStatScreen, CallFunc_GetRecentMatches_ReturnValue) == 0x000008, "Member 'RecentMatchesStatScreen_C_ExecuteUbergraph_RecentMatchesStatScreen::CallFunc_GetRecentMatches_ReturnValue' has a wrong offset!");
static_assert(offsetof(RecentMatchesStatScreen_C_ExecuteUbergraph_RecentMatchesStatScreen, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'RecentMatchesStatScreen_C_ExecuteUbergraph_RecentMatchesStatScreen::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.HandleBack
// 0x0010 (0x0010 - 0x0000)
struct RecentMatchesStatScreen_C_HandleBack final
{
public:
	bool                                          PassThrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RecentMatchesStatScreen_C_HandleBack) == 0x000008, "Wrong alignment on RecentMatchesStatScreen_C_HandleBack");
static_assert(sizeof(RecentMatchesStatScreen_C_HandleBack) == 0x000010, "Wrong size on RecentMatchesStatScreen_C_HandleBack");
static_assert(offsetof(RecentMatchesStatScreen_C_HandleBack, PassThrough) == 0x000000, "Member 'RecentMatchesStatScreen_C_HandleBack::PassThrough' has a wrong offset!");
static_assert(offsetof(RecentMatchesStatScreen_C_HandleBack, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000008, "Member 'RecentMatchesStatScreen_C_HandleBack::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");

}
