#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OptionsMenu.OptionsMenu_C
// 0x0250 (0x0598 - 0x0348)
class UOptionsMenu_C final : public UFortOptionsMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                          BackgroundBorder;                                  // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BorderBackground;                                  // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CurrentTabSwitcher;                                // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          MESSAGE;                                           // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       OverlayText;                                       // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_1;                                        // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             SavingLayer;                                       // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalTabList_C*                   SettingsTabs;                                      // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      VideoSettingsAccept;                               // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      VideoSettingsCancel;                               // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWindowchromebuttons_C*                 Windowchromebuttons;                               // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SelectedOption;                                    // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Current_Tab;                                       // 0x03C4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Accept_Input;                                      // 0x03CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Video_Tab_Selected;                                // 0x03CD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Apply_Visible;                                     // 0x03CE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CF[0x1];                                      // 0x03CF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFortOptionsTab*>                AllTabWidgets;                                     // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UProgressModalWidget_C*                 SavingModal;                                       // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 VideoTabClass;                                     // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 AccountTabClass;                                   // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GamepadTabClass;                                   // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 InputTabClass;                                     // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoadCount;                                         // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40C[0x4];                                      // 0x040C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   TabGamePad;                                        // 0x0410(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   TabAccount;                                        // 0x0438(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   TabVideoOptions;                                   // 0x0460(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   TabInputOptions;                                   // 0x0488(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    ToggleModeAction;                                  // 0x04B0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ApplyAction;                                       // 0x04C0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ResetToDefault;                                    // 0x04D0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    Back;                                              // 0x04E0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                           ResetVideoOptionsTimer;                            // 0x04F0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   TabAccessibilityOptions;                           // 0x04F8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                 AccessibilityTabClass;                             // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   TabBrightnessOptions;                              // 0x0528(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                 BrightnessTabClass;                                // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortTabButtonLabelInfo>        TabLabels;                                         // 0x0558(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FName>                           TabIds;                                            // 0x0568(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                   OnSettingsApplied;                                 // 0x0578(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                    ChoosePreset;                                      // 0x0588(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void OnSettingsApplied__DelegateSignature();
	void ExecuteUbergraph_OptionsMenu(int32 EntryPoint);
	void HandleTabGamePadActionsNeedBinds(TArray<class FText>& ScreenLabels);
	void OnHandleApply();
	void ShowInputReset_DefaultConfirmation();
	void ShowLangaugeConfirmation();
	void ShowResetDefaultConfirmation();
	void BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_20_OnTabSelected__DelegateSignature(class FName TabId);
	void ResetVideoOptionsTimerDelegate();
	void LoadTabClasses();
	void OnDeactivated();
	void HandleSettingsSaveComplete();
	void TabGameOptions_OnActiveWidgetChanged_Bind(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void Construct();
	void BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void OnHandleBack();
	void HandleSettingsErrorMessageClosed();
	void BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleBenchmarkComplete();
	void BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void Gamepad_Changed(bool Gamepad_Enabled);
	void Disable_Overlay_Input();
	void OnActivated();
	void Tab_Setting_Changed();
	void Destruct();
	void BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Disable_Overlay();
	void Enable_Overlay_Video(bool Accept_Input_0);
	void Enable_Overlay_Input(bool Accept_Input_0, const class FText& Overlay_Text);
	void DialogResult_B31FF5BD4C0772716F27509EA83B418E(EFortDialogResult Result, class FName ResultName);
	void DialogResult_826C59EC4C294BC872A644878B35A13B(EFortDialogResult Result, class FName ResultName);
	void DialogResult_BC062FC047B05F5EE0C6A09D64BFEB2A(EFortDialogResult Result, class FName ResultName);
	void DialogResult_505313CB4EC9E510DD07E6B544334958(EFortDialogResult Result, class FName ResultName);
	void DialogResult_865D48E84DB087F08A2C9797E6CB619E(EFortDialogResult Result, class FName ResultName);
	void DialogResult_F3FA83AA4F97C266A3A1C9BB3F66C1C1(EFortDialogResult Result, class FName ResultName);
	void OnLoaded_EF0A182C49925D83A3E55080FA222F7D(class UClass* Loaded);
	void OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD(class UClass* Loaded);
	void OnLoaded_598823E641B8288CD371F0B50BE07C91(class UClass* Loaded);
	void OnLoaded_488EE90943BFF7AA4DB2049A7D72238C(class UClass* Loaded);
	void OnLoaded_56F757014AB176CE2140009FB54D0D23(class UClass* Loaded);
	void OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426(class UClass* Loaded);
	void Initialize();
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void Handle_Apply(bool* PassThrough);
	void HandleResetToDefault(bool* PassThrough);
	void Handle_Reset(bool* PassThrough);
	void HandleBack(bool* PassThrough);
	void Set_Input_Action_Handlers();
	void Handle_Toggle_Mode(bool* PassThrough);
	void HandleCursorModeChanging(bool IsEnabled);
	void AddTab(class UClass* WidgetClass, const class FText& DisplayName, class FName NameId, const struct FSlateBrush& Icon, ESettingTab Tab_Type);
	void SetBackground();
	void CenterOnActiveTab();
	void HandleTabGameOptionsActionHandlerStates(int32 Active_Widget_Index);
	void HandleTabInputOptionsActionHandlerStates(class UTabInputOptions_C* TabInputOptionsActor);
	void HandleResetUnavailableActionHandlerStates(bool ShouldShowApply);
	void HandleTabGamepadConfigActionHandlerStates();
	void DoResetGameOptionsToDefault(class UFortOptionsTab* Tab_To_Reset);
	void DoResetHUDOptionsToDefault();
	void ApplySettings();
	void UpdateBasedOnActiveWidget(class UObject* ActiveWidget, bool ShouldCenterOnTab);
	void ResetActionHandlerStates(bool DisableBack);
	void UpdateAllOptionsTabs();
	void HandleResetCustomGamepadToDefault();
	void DoResetKBMToDefault(int32 Preset_To_Set);
	void Update_Header_Text_by_Tab_ID(class FName TabId);
	void HandleResetAvailableActionHandlerStates();
	void HandleInputResetToDefault(bool* PassThrough);
	void NotifyTabsOfActivationState(class UFortOptionsTab* ActivatedTab);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionsMenu_C">();
	}
	static class UOptionsMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptionsMenu_C>();
	}
};
static_assert(alignof(UOptionsMenu_C) == 0x000008, "Wrong alignment on UOptionsMenu_C");
static_assert(sizeof(UOptionsMenu_C) == 0x000598, "Wrong size on UOptionsMenu_C");
static_assert(offsetof(UOptionsMenu_C, UberGraphFrame) == 0x000348, "Member 'UOptionsMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, BackgroundBorder) == 0x000350, "Member 'UOptionsMenu_C::BackgroundBorder' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, BorderBackground) == 0x000358, "Member 'UOptionsMenu_C::BorderBackground' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, CurrentTabSwitcher) == 0x000360, "Member 'UOptionsMenu_C::CurrentTabSwitcher' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, Image_0) == 0x000368, "Member 'UOptionsMenu_C::Image_0' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, MESSAGE) == 0x000370, "Member 'UOptionsMenu_C::MESSAGE' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, OverlayText) == 0x000378, "Member 'UOptionsMenu_C::OverlayText' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, SafeZone_0) == 0x000380, "Member 'UOptionsMenu_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, SafeZone_1) == 0x000388, "Member 'UOptionsMenu_C::SafeZone_1' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, SavingLayer) == 0x000390, "Member 'UOptionsMenu_C::SavingLayer' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, SettingsTabs) == 0x000398, "Member 'UOptionsMenu_C::SettingsTabs' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, Title) == 0x0003A0, "Member 'UOptionsMenu_C::Title' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, VideoSettingsAccept) == 0x0003A8, "Member 'UOptionsMenu_C::VideoSettingsAccept' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, VideoSettingsCancel) == 0x0003B0, "Member 'UOptionsMenu_C::VideoSettingsCancel' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, Windowchromebuttons) == 0x0003B8, "Member 'UOptionsMenu_C::Windowchromebuttons' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, SelectedOption) == 0x0003C0, "Member 'UOptionsMenu_C::SelectedOption' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, Current_Tab) == 0x0003C4, "Member 'UOptionsMenu_C::Current_Tab' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, Accept_Input) == 0x0003CC, "Member 'UOptionsMenu_C::Accept_Input' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, Video_Tab_Selected) == 0x0003CD, "Member 'UOptionsMenu_C::Video_Tab_Selected' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, Apply_Visible) == 0x0003CE, "Member 'UOptionsMenu_C::Apply_Visible' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, AllTabWidgets) == 0x0003D0, "Member 'UOptionsMenu_C::AllTabWidgets' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, SavingModal) == 0x0003E0, "Member 'UOptionsMenu_C::SavingModal' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, VideoTabClass) == 0x0003E8, "Member 'UOptionsMenu_C::VideoTabClass' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, AccountTabClass) == 0x0003F0, "Member 'UOptionsMenu_C::AccountTabClass' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, GamepadTabClass) == 0x0003F8, "Member 'UOptionsMenu_C::GamepadTabClass' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, InputTabClass) == 0x000400, "Member 'UOptionsMenu_C::InputTabClass' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, LoadCount) == 0x000408, "Member 'UOptionsMenu_C::LoadCount' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, TabGamePad) == 0x000410, "Member 'UOptionsMenu_C::TabGamePad' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, TabAccount) == 0x000438, "Member 'UOptionsMenu_C::TabAccount' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, TabVideoOptions) == 0x000460, "Member 'UOptionsMenu_C::TabVideoOptions' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, TabInputOptions) == 0x000488, "Member 'UOptionsMenu_C::TabInputOptions' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, ToggleModeAction) == 0x0004B0, "Member 'UOptionsMenu_C::ToggleModeAction' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, ApplyAction) == 0x0004C0, "Member 'UOptionsMenu_C::ApplyAction' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, ResetToDefault) == 0x0004D0, "Member 'UOptionsMenu_C::ResetToDefault' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, Back) == 0x0004E0, "Member 'UOptionsMenu_C::Back' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, ResetVideoOptionsTimer) == 0x0004F0, "Member 'UOptionsMenu_C::ResetVideoOptionsTimer' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, TabAccessibilityOptions) == 0x0004F8, "Member 'UOptionsMenu_C::TabAccessibilityOptions' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, AccessibilityTabClass) == 0x000520, "Member 'UOptionsMenu_C::AccessibilityTabClass' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, TabBrightnessOptions) == 0x000528, "Member 'UOptionsMenu_C::TabBrightnessOptions' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, BrightnessTabClass) == 0x000550, "Member 'UOptionsMenu_C::BrightnessTabClass' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, TabLabels) == 0x000558, "Member 'UOptionsMenu_C::TabLabels' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, TabIds) == 0x000568, "Member 'UOptionsMenu_C::TabIds' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, OnSettingsApplied) == 0x000578, "Member 'UOptionsMenu_C::OnSettingsApplied' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, ChoosePreset) == 0x000588, "Member 'UOptionsMenu_C::ChoosePreset' has a wrong offset!");

}
