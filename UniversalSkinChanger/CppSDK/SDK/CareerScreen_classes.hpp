#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CareerScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CareerScreen.CareerScreen_C
// 0x0028 (0x0348 - 0x0320)
class UCareerScreen_C final : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_2;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULandingPageTile_C*                     LeaderboardsBtn;                                   // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULandingPageTile_C*                     ProfileBtn;                                        // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULandingPageTile_C*                     ReplaysBtn;                                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CareerScreen(int32 EntryPoint);
	void BndEvt__RecentGamesBtn_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ReplaysBtn_K2Node_ComponentBoundEvent_262_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__LeaderboardsBtn_K2Node_ComponentBoundEvent_245_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ProfileBtn_K2Node_ComponentBoundEvent_228_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ProfileStatsBtn_K2Node_ComponentBoundEvent_211_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ShowReplayBrowser();
	void OnDeactivated();
	void OnActivated();
	void Construct();
	void SetupButtonStates();
	void GetFirstInteractableWidget(class UWidget** Widget);
	void ApplyHotfixButtonStates();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CareerScreen_C">();
	}
	static class UCareerScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCareerScreen_C>();
	}
};
static_assert(alignof(UCareerScreen_C) == 0x000008, "Wrong alignment on UCareerScreen_C");
static_assert(sizeof(UCareerScreen_C) == 0x000348, "Wrong size on UCareerScreen_C");
static_assert(offsetof(UCareerScreen_C, UberGraphFrame) == 0x000320, "Member 'UCareerScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCareerScreen_C, HorizontalBox_2) == 0x000328, "Member 'UCareerScreen_C::HorizontalBox_2' has a wrong offset!");
static_assert(offsetof(UCareerScreen_C, LeaderboardsBtn) == 0x000330, "Member 'UCareerScreen_C::LeaderboardsBtn' has a wrong offset!");
static_assert(offsetof(UCareerScreen_C, ProfileBtn) == 0x000338, "Member 'UCareerScreen_C::ProfileBtn' has a wrong offset!");
static_assert(offsetof(UCareerScreen_C, ReplaysBtn) == 0x000340, "Member 'UCareerScreen_C::ReplaysBtn' has a wrong offset!");

}
