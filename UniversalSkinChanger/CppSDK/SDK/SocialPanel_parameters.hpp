#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialPanel

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function SocialPanel.SocialPanel_C.ExecuteUbergraph_SocialPanel
// 0x0048 (0x0048 - 0x0000)
struct SocialPanel_C_ExecuteUbergraph_SocialPanel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonUISubsystem*                     CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputManager*                    CallFunc_GetInputManager_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonActivatablePanel*                CallFunc_GetTopPanel_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USocialPanel_C*                         K2Node_DynamicCast_AsSocial_Panel;                 // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnySlideOutMenuOpen_ReturnValue;        // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SocialPanel_C_ExecuteUbergraph_SocialPanel) == 0x000008, "Wrong alignment on SocialPanel_C_ExecuteUbergraph_SocialPanel");
static_assert(sizeof(SocialPanel_C_ExecuteUbergraph_SocialPanel) == 0x000048, "Wrong size on SocialPanel_C_ExecuteUbergraph_SocialPanel");
static_assert(offsetof(SocialPanel_C_ExecuteUbergraph_SocialPanel, EntryPoint) == 0x000000, "Member 'SocialPanel_C_ExecuteUbergraph_SocialPanel::EntryPoint' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_ExecuteUbergraph_SocialPanel, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'SocialPanel_C_ExecuteUbergraph_SocialPanel::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_ExecuteUbergraph_SocialPanel, CallFunc_GetInputManager_ReturnValue) == 0x000010, "Member 'SocialPanel_C_ExecuteUbergraph_SocialPanel::CallFunc_GetInputManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_ExecuteUbergraph_SocialPanel, K2Node_ComponentBoundEvent_Button) == 0x000018, "Member 'SocialPanel_C_ExecuteUbergraph_SocialPanel::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_ExecuteUbergraph_SocialPanel, CallFunc_GetTopPanel_ReturnValue) == 0x000020, "Member 'SocialPanel_C_ExecuteUbergraph_SocialPanel::CallFunc_GetTopPanel_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_ExecuteUbergraph_SocialPanel, K2Node_DynamicCast_AsSocial_Panel) == 0x000028, "Member 'SocialPanel_C_ExecuteUbergraph_SocialPanel::K2Node_DynamicCast_AsSocial_Panel' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_ExecuteUbergraph_SocialPanel, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'SocialPanel_C_ExecuteUbergraph_SocialPanel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_ExecuteUbergraph_SocialPanel, CallFunc_IsAnySlideOutMenuOpen_ReturnValue) == 0x000031, "Member 'SocialPanel_C_ExecuteUbergraph_SocialPanel::CallFunc_IsAnySlideOutMenuOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_ExecuteUbergraph_SocialPanel, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'SocialPanel_C_ExecuteUbergraph_SocialPanel::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_ExecuteUbergraph_SocialPanel, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000040, "Member 'SocialPanel_C_ExecuteUbergraph_SocialPanel::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");

// Function SocialPanel.SocialPanel_C.BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct SocialPanel_C_BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SocialPanel_C_BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on SocialPanel_C_BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(SocialPanel_C_BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on SocialPanel_C_BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(SocialPanel_C_BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'SocialPanel_C_BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function SocialPanel.SocialPanel_C.OnMouseButtonDown_0
// 0x02D8 (0x02D8 - 0x0000)
struct SocialPanel_C_OnMouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0160(0x00B8)()
	bool                                          CallFunc_IsAnySlideOutMenuOpen_ReturnValue;        // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_219[0x7];                                      // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0220(0x00B8)()
};
static_assert(alignof(SocialPanel_C_OnMouseButtonDown_0) == 0x000008, "Wrong alignment on SocialPanel_C_OnMouseButtonDown_0");
static_assert(sizeof(SocialPanel_C_OnMouseButtonDown_0) == 0x0002D8, "Wrong size on SocialPanel_C_OnMouseButtonDown_0");
static_assert(offsetof(SocialPanel_C_OnMouseButtonDown_0, MyGeometry) == 0x000000, "Member 'SocialPanel_C_OnMouseButtonDown_0::MyGeometry' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_OnMouseButtonDown_0, MouseEvent) == 0x000038, "Member 'SocialPanel_C_OnMouseButtonDown_0::MouseEvent' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_OnMouseButtonDown_0, ReturnValue) == 0x0000A8, "Member 'SocialPanel_C_OnMouseButtonDown_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_OnMouseButtonDown_0, CallFunc_Unhandled_ReturnValue) == 0x000160, "Member 'SocialPanel_C_OnMouseButtonDown_0::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_OnMouseButtonDown_0, CallFunc_IsAnySlideOutMenuOpen_ReturnValue) == 0x000218, "Member 'SocialPanel_C_OnMouseButtonDown_0::CallFunc_IsAnySlideOutMenuOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_OnMouseButtonDown_0, CallFunc_Handled_ReturnValue) == 0x000220, "Member 'SocialPanel_C_OnMouseButtonDown_0::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function SocialPanel.SocialPanel_C.ClosePanelAfterAnimation
// 0x0018 (0x0018 - 0x0000)
struct SocialPanel_C_ClosePanelAfterAnimation final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SocialPanel_C_ClosePanelAfterAnimation) == 0x000008, "Wrong alignment on SocialPanel_C_ClosePanelAfterAnimation");
static_assert(sizeof(SocialPanel_C_ClosePanelAfterAnimation) == 0x000018, "Wrong size on SocialPanel_C_ClosePanelAfterAnimation");
static_assert(offsetof(SocialPanel_C_ClosePanelAfterAnimation, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'SocialPanel_C_ClosePanelAfterAnimation::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_ClosePanelAfterAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'SocialPanel_C_ClosePanelAfterAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function SocialPanel.SocialPanel_C.Play Panel Animation Sound
// 0x0001 (0x0001 - 0x0000)
struct SocialPanel_C_Play_Panel_Animation_Sound final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SocialPanel_C_Play_Panel_Animation_Sound) == 0x000001, "Wrong alignment on SocialPanel_C_Play_Panel_Animation_Sound");
static_assert(sizeof(SocialPanel_C_Play_Panel_Animation_Sound) == 0x000001, "Wrong size on SocialPanel_C_Play_Panel_Animation_Sound");
static_assert(offsetof(SocialPanel_C_Play_Panel_Animation_Sound, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'SocialPanel_C_Play_Panel_Animation_Sound::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

}
