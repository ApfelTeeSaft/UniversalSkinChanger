#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImportFriends

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImportFriends.ImportFriends_C
// 0x0160 (0x0518 - 0x03B8)
class UImportFriends_C final : public UFortSocialImportPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro_V2;                                          // 0x03C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ArrowPulse;                                        // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       AddFriendsDescription;                             // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_0;                                 // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_AddFriendsDescription;                          // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_ChangeInSettingsText;                           // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_LimitedTimeHeader;                              // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_TakenToLauncher;                                // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoWidget_C*                      ItemInfoWidget;                                    // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              SBox_AddFriendButtonScaleBox;                      // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBoxDescription;                               // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBoxHeader;                                    // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFrontEndCamera                               DesiredFrontEndCamera;                             // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_439[0x7];                                      // 0x0439(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemDefinition*                    PreviewItemDef;                                    // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeartbeatDelayIntroAnimation;                      // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         DebugSocialImportType;                             // 0x044C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasReward;                                        // 0x044D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44E[0x2];                                      // 0x044E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   FacebookHeader;                                    // 0x0450(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   VKHeader;                                          // 0x0468(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   SteamHeader;                                       // 0x0480(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PlaystationHeader;                                 // 0x0498(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   XboxHeader;                                        // 0x04B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESocialImportPanelPlatform                    SocialPlatform;                                    // 0x04C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C9[0x3];                                      // 0x04C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WrapHeaderAt;                                      // 0x04CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   XboxDescriptionText;                               // 0x04D0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PSNDescriptionText;                                // 0x04E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   SwitchDescriptionText;                             // 0x0500(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_ImportFriends(int32 EntryPoint);
	void OnInputModeChanged(bool bUsingGamepad);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnActivated();
	void OnIncentivizedSet(bool bIncentivized);
	void BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnPanelTypeSet(ESocialImportPanelType NewType);
	void HandleDescriptionText();
	void HandleHeaderText();
	void PreConstruct(bool IsDesignTime);
	void ScaleTextboxWithWrappingWorkaround(class UScaleBox* ContainingScaleBox, int32 CharLimitThreshold, class UCommonTextBlock* TargetText, int32 WrapAtHorrizontal);
	void ScaleTextButton(int32 CharThreshold, class UScaleBox* ContainingScaleBox, class UIconTextButton_C* Button);
	void SetupNav();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImportFriends_C">();
	}
	static class UImportFriends_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImportFriends_C>();
	}
};
static_assert(alignof(UImportFriends_C) == 0x000008, "Wrong alignment on UImportFriends_C");
static_assert(sizeof(UImportFriends_C) == 0x000518, "Wrong size on UImportFriends_C");
static_assert(offsetof(UImportFriends_C, UberGraphFrame) == 0x0003B8, "Member 'UImportFriends_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, Intro_V2) == 0x0003C0, "Member 'UImportFriends_C::Intro_V2' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, ArrowPulse) == 0x0003C8, "Member 'UImportFriends_C::ArrowPulse' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, Intro) == 0x0003D0, "Member 'UImportFriends_C::Intro' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, AddFriendsDescription) == 0x0003D8, "Member 'UImportFriends_C::AddFriendsDescription' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, CommonTextBlock_0) == 0x0003E0, "Member 'UImportFriends_C::CommonTextBlock_0' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, CT_AddFriendsDescription) == 0x0003E8, "Member 'UImportFriends_C::CT_AddFriendsDescription' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, CT_ChangeInSettingsText) == 0x0003F0, "Member 'UImportFriends_C::CT_ChangeInSettingsText' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, CT_LimitedTimeHeader) == 0x0003F8, "Member 'UImportFriends_C::CT_LimitedTimeHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, CT_TakenToLauncher) == 0x000400, "Member 'UImportFriends_C::CT_TakenToLauncher' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, Image_1) == 0x000408, "Member 'UImportFriends_C::Image_1' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, ItemInfoWidget) == 0x000410, "Member 'UImportFriends_C::ItemInfoWidget' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, SafeZone_0) == 0x000418, "Member 'UImportFriends_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, SBox_AddFriendButtonScaleBox) == 0x000420, "Member 'UImportFriends_C::SBox_AddFriendButtonScaleBox' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, ScaleBoxDescription) == 0x000428, "Member 'UImportFriends_C::ScaleBoxDescription' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, ScaleBoxHeader) == 0x000430, "Member 'UImportFriends_C::ScaleBoxHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, DesiredFrontEndCamera) == 0x000438, "Member 'UImportFriends_C::DesiredFrontEndCamera' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, PreviewItemDef) == 0x000440, "Member 'UImportFriends_C::PreviewItemDef' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, HeartbeatDelayIntroAnimation) == 0x000448, "Member 'UImportFriends_C::HeartbeatDelayIntroAnimation' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, DebugSocialImportType) == 0x00044C, "Member 'UImportFriends_C::DebugSocialImportType' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, bHasReward) == 0x00044D, "Member 'UImportFriends_C::bHasReward' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, FacebookHeader) == 0x000450, "Member 'UImportFriends_C::FacebookHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, VKHeader) == 0x000468, "Member 'UImportFriends_C::VKHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, SteamHeader) == 0x000480, "Member 'UImportFriends_C::SteamHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, PlaystationHeader) == 0x000498, "Member 'UImportFriends_C::PlaystationHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, XboxHeader) == 0x0004B0, "Member 'UImportFriends_C::XboxHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, SocialPlatform) == 0x0004C8, "Member 'UImportFriends_C::SocialPlatform' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, WrapHeaderAt) == 0x0004CC, "Member 'UImportFriends_C::WrapHeaderAt' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, XboxDescriptionText) == 0x0004D0, "Member 'UImportFriends_C::XboxDescriptionText' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, PSNDescriptionText) == 0x0004E8, "Member 'UImportFriends_C::PSNDescriptionText' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, SwitchDescriptionText) == 0x000500, "Member 'UImportFriends_C::SwitchDescriptionText' has a wrong offset!");

}
