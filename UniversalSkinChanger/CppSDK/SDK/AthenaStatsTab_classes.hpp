#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaStatsTab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaStatsTab.AthenaStatsTab_C
// 0x00C8 (0x0528 - 0x0460)
class UAthenaStatsTab_C final : public UAthenaStatsScreenBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Entrance;                                          // 0x0468(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Tabs_Paginate;                                     // 0x0470(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       AccountLevelLabel;                                 // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         BacchusClose2Button;                               // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         BacchusClose3Button;                               // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         BacchusCloseButton;                                // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_0;                            // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Divider;                                           // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Divider1;                                          // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Divider2;                                          // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       FriendMatchXpBoostPointsLabel;                     // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxNoStats;                                       // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  HiddenSwitcher;                                    // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         LastUpdatedTimeBox;                                // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       MatchXpBoostPointsLabel;                           // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       NoStatsText;                                       // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerRankEmblem_C*                    PlayerRankEmblem;                                  // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressSpinner;                                   // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SeasonLabel;                                       // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         UpdatingBox;                                       // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBoxbannerstats;                                   // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBoxStats;                                         // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    Back_Action;                                       // 0x0518(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_AthenaStatsTab(int32 EntryPoint);
	void OnInputMethodChanged_Event_0(ECommonInputType bNewInputType);
	void BndEvt__BacchusClose3Button_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void OnDeactivated();
	void OnQueryStarted();
	void BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId);
	void OnQueryFinished(bool bWasSuccessful);
	void OnActivated();
	void CanShowStats(bool* bCanShowStats);
	void HandleBack(bool* PassThrough);
	void Init_Back_Action();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaStatsTab_C">();
	}
	static class UAthenaStatsTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaStatsTab_C>();
	}
};
static_assert(alignof(UAthenaStatsTab_C) == 0x000008, "Wrong alignment on UAthenaStatsTab_C");
static_assert(sizeof(UAthenaStatsTab_C) == 0x000528, "Wrong size on UAthenaStatsTab_C");
static_assert(offsetof(UAthenaStatsTab_C, UberGraphFrame) == 0x000460, "Member 'UAthenaStatsTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, Entrance) == 0x000468, "Member 'UAthenaStatsTab_C::Entrance' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, Tabs_Paginate) == 0x000470, "Member 'UAthenaStatsTab_C::Tabs_Paginate' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, AccountLevelLabel) == 0x000478, "Member 'UAthenaStatsTab_C::AccountLevelLabel' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, BacchusClose2Button) == 0x000480, "Member 'UAthenaStatsTab_C::BacchusClose2Button' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, BacchusClose3Button) == 0x000488, "Member 'UAthenaStatsTab_C::BacchusClose3Button' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, BacchusCloseButton) == 0x000490, "Member 'UAthenaStatsTab_C::BacchusCloseButton' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, CommonWidgetSwitcher_0) == 0x000498, "Member 'UAthenaStatsTab_C::CommonWidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, Divider) == 0x0004A0, "Member 'UAthenaStatsTab_C::Divider' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, Divider1) == 0x0004A8, "Member 'UAthenaStatsTab_C::Divider1' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, Divider2) == 0x0004B0, "Member 'UAthenaStatsTab_C::Divider2' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, FriendMatchXpBoostPointsLabel) == 0x0004B8, "Member 'UAthenaStatsTab_C::FriendMatchXpBoostPointsLabel' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, HBoxNoStats) == 0x0004C0, "Member 'UAthenaStatsTab_C::HBoxNoStats' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, HiddenSwitcher) == 0x0004C8, "Member 'UAthenaStatsTab_C::HiddenSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, LastUpdatedTimeBox) == 0x0004D0, "Member 'UAthenaStatsTab_C::LastUpdatedTimeBox' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, MatchXpBoostPointsLabel) == 0x0004D8, "Member 'UAthenaStatsTab_C::MatchXpBoostPointsLabel' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, NoStatsText) == 0x0004E0, "Member 'UAthenaStatsTab_C::NoStatsText' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, PlayerRankEmblem) == 0x0004E8, "Member 'UAthenaStatsTab_C::PlayerRankEmblem' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, ProgressSpinner) == 0x0004F0, "Member 'UAthenaStatsTab_C::ProgressSpinner' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, SeasonLabel) == 0x0004F8, "Member 'UAthenaStatsTab_C::SeasonLabel' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, UpdatingBox) == 0x000500, "Member 'UAthenaStatsTab_C::UpdatingBox' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, VBoxbannerstats) == 0x000508, "Member 'UAthenaStatsTab_C::VBoxbannerstats' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, VBoxStats) == 0x000510, "Member 'UAthenaStatsTab_C::VBoxStats' has a wrong offset!");
static_assert(offsetof(UAthenaStatsTab_C, Back_Action) == 0x000518, "Member 'UAthenaStatsTab_C::Back_Action' has a wrong offset!");

}
