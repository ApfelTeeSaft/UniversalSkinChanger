#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FriendLink

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FriendLink.FriendLink_C
// 0x0078 (0x03C8 - 0x0350)
class UFriendLink_C final : public UFortFriendLinkPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       CopiedToClipboard;                                 // 0x0358(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro_V2;                                          // 0x0360(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ArrowPulse;                                        // 0x0368(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0370(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                      Button_Cancel;                                     // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_AddFriendsDescription;                          // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_LimitedTimeHeader;                              // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_RewardHeader;                                   // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_AddFriends;                               // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFrontEndCamera                               DesiredFrontEndCamera;                             // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B1[0x7];                                      // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemDefinition*                    PreviewItemDef;                                    // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeartbeatDelayIntroAnimation;                      // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasReward;                                        // 0x03C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EShareButtonType                              ShareButtonType;                                   // 0x03C5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FriendLink(int32 EntryPoint);
	void OnActivated();
	void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_826_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void PreConstruct(bool IsDesignTime);
	void OnShareButtonTypeSet(EShareButtonType Type);
	void OnCopiedToClipboard();
	void GetStartingShareText(class FText* Button_Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FriendLink_C">();
	}
	static class UFriendLink_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFriendLink_C>();
	}
};
static_assert(alignof(UFriendLink_C) == 0x000008, "Wrong alignment on UFriendLink_C");
static_assert(sizeof(UFriendLink_C) == 0x0003C8, "Wrong size on UFriendLink_C");
static_assert(offsetof(UFriendLink_C, UberGraphFrame) == 0x000350, "Member 'UFriendLink_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFriendLink_C, CopiedToClipboard) == 0x000358, "Member 'UFriendLink_C::CopiedToClipboard' has a wrong offset!");
static_assert(offsetof(UFriendLink_C, Intro_V2) == 0x000360, "Member 'UFriendLink_C::Intro_V2' has a wrong offset!");
static_assert(offsetof(UFriendLink_C, ArrowPulse) == 0x000368, "Member 'UFriendLink_C::ArrowPulse' has a wrong offset!");
static_assert(offsetof(UFriendLink_C, Intro) == 0x000370, "Member 'UFriendLink_C::Intro' has a wrong offset!");
static_assert(offsetof(UFriendLink_C, Button_Cancel) == 0x000378, "Member 'UFriendLink_C::Button_Cancel' has a wrong offset!");
static_assert(offsetof(UFriendLink_C, CT_AddFriendsDescription) == 0x000380, "Member 'UFriendLink_C::CT_AddFriendsDescription' has a wrong offset!");
static_assert(offsetof(UFriendLink_C, CT_LimitedTimeHeader) == 0x000388, "Member 'UFriendLink_C::CT_LimitedTimeHeader' has a wrong offset!");
static_assert(offsetof(UFriendLink_C, CT_RewardHeader) == 0x000390, "Member 'UFriendLink_C::CT_RewardHeader' has a wrong offset!");
static_assert(offsetof(UFriendLink_C, Image_1) == 0x000398, "Member 'UFriendLink_C::Image_1' has a wrong offset!");
static_assert(offsetof(UFriendLink_C, SafeZone_0) == 0x0003A0, "Member 'UFriendLink_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UFriendLink_C, Switcher_AddFriends) == 0x0003A8, "Member 'UFriendLink_C::Switcher_AddFriends' has a wrong offset!");
static_assert(offsetof(UFriendLink_C, DesiredFrontEndCamera) == 0x0003B0, "Member 'UFriendLink_C::DesiredFrontEndCamera' has a wrong offset!");
static_assert(offsetof(UFriendLink_C, PreviewItemDef) == 0x0003B8, "Member 'UFriendLink_C::PreviewItemDef' has a wrong offset!");
static_assert(offsetof(UFriendLink_C, HeartbeatDelayIntroAnimation) == 0x0003C0, "Member 'UFriendLink_C::HeartbeatDelayIntroAnimation' has a wrong offset!");
static_assert(offsetof(UFriendLink_C, bHasReward) == 0x0003C4, "Member 'UFriendLink_C::bHasReward' has a wrong offset!");
static_assert(offsetof(UFriendLink_C, ShareButtonType) == 0x0003C5, "Member 'UFriendLink_C::ShareButtonType' has a wrong offset!");

}
