#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TournamentRoundUnlocked

#include "Basic.hpp"


namespace SDK::Params
{

// Function TournamentRoundUnlocked.TournamentRoundUnlocked_C.ExecuteUbergraph_TournamentRoundUnlocked
// 0x0060 (0x0060 - 0x0000)
struct TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_TryGetParamString_OutValue;               // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetParamString_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_TryGetParamString_OutValue1;              // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetParamString_ReturnValue1;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked) == 0x000008, "Wrong alignment on TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked");
static_assert(sizeof(TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked) == 0x000060, "Wrong size on TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked");
static_assert(offsetof(TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked, EntryPoint) == 0x000000, "Member 'TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked::EntryPoint' has a wrong offset!");
static_assert(offsetof(TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked, K2Node_ComponentBoundEvent_Button) == 0x000010, "Member 'TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000018, "Member 'TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked, CallFunc_GetUINavigationManager_ReturnValue) == 0x000020, "Member 'TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked, CallFunc_TryGetParamString_OutValue) == 0x000030, "Member 'TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked::CallFunc_TryGetParamString_OutValue' has a wrong offset!");
static_assert(offsetof(TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked, CallFunc_TryGetParamString_ReturnValue) == 0x000040, "Member 'TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked::CallFunc_TryGetParamString_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked, CallFunc_TryGetParamString_OutValue1) == 0x000048, "Member 'TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked::CallFunc_TryGetParamString_OutValue1' has a wrong offset!");
static_assert(offsetof(TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked, CallFunc_TryGetParamString_ReturnValue1) == 0x000058, "Member 'TournamentRoundUnlocked_C_ExecuteUbergraph_TournamentRoundUnlocked::CallFunc_TryGetParamString_ReturnValue1' has a wrong offset!");

// Function TournamentRoundUnlocked.TournamentRoundUnlocked_C.BndEvt__ShowNextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct TournamentRoundUnlocked_C_BndEvt__ShowNextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TournamentRoundUnlocked_C_BndEvt__ShowNextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on TournamentRoundUnlocked_C_BndEvt__ShowNextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(TournamentRoundUnlocked_C_BndEvt__ShowNextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on TournamentRoundUnlocked_C_BndEvt__ShowNextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(TournamentRoundUnlocked_C_BndEvt__ShowNextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'TournamentRoundUnlocked_C_BndEvt__ShowNextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

}
