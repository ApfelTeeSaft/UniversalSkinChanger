#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RootProfileStatsScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RootProfileStatsScreen.RootProfileStatsScreen_C
// 0x0080 (0x03F8 - 0x0378)
class URootProfileStatsScreen_C final : public UAthenaProfileStatsBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                      CircularThrobber_0;                                // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  ContentWidgetSwitcher;                             // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         LoadingState;                                      // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         NoDataState;                                       // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      PlaylistChangBtn;                                  // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_2;                                        // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_3;                                        // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_4;                                        // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ScreenStateSwitcher;                               // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         StatSetLeftBtn;                                    // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       StatSetName;                                       // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         StatSetRightBtn;                                   // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalTabList_C*                   TopTabList;                                        // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    BackAction;                                        // 0x03E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_RootProfileStatsScreen(int32 EntryPoint);
	void OnDataRecieved();
	void OnNoData();
	void OnStartFetchingData();
	void OnActivated();
	void BndEvt__TopTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void OnStatSetChanged();
	void BndEvt__PlaylistBucketChanger_K2Node_ComponentBoundEvent_147_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__StatSetLeftBtn_K2Node_ComponentBoundEvent_104_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__StatSetRightBtn_K2Node_ComponentBoundEvent_87_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnDeactivated();
	void Construct();
	void HandleBack(bool* PassThrough);
	void UpdatePlaylist();
	void UpdateStatSet();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RootProfileStatsScreen_C">();
	}
	static class URootProfileStatsScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URootProfileStatsScreen_C>();
	}
};
static_assert(alignof(URootProfileStatsScreen_C) == 0x000008, "Wrong alignment on URootProfileStatsScreen_C");
static_assert(sizeof(URootProfileStatsScreen_C) == 0x0003F8, "Wrong size on URootProfileStatsScreen_C");
static_assert(offsetof(URootProfileStatsScreen_C, UberGraphFrame) == 0x000378, "Member 'URootProfileStatsScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URootProfileStatsScreen_C, CircularThrobber_0) == 0x000380, "Member 'URootProfileStatsScreen_C::CircularThrobber_0' has a wrong offset!");
static_assert(offsetof(URootProfileStatsScreen_C, ContentWidgetSwitcher) == 0x000388, "Member 'URootProfileStatsScreen_C::ContentWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(URootProfileStatsScreen_C, LoadingState) == 0x000390, "Member 'URootProfileStatsScreen_C::LoadingState' has a wrong offset!");
static_assert(offsetof(URootProfileStatsScreen_C, NoDataState) == 0x000398, "Member 'URootProfileStatsScreen_C::NoDataState' has a wrong offset!");
static_assert(offsetof(URootProfileStatsScreen_C, PlaylistChangBtn) == 0x0003A0, "Member 'URootProfileStatsScreen_C::PlaylistChangBtn' has a wrong offset!");
static_assert(offsetof(URootProfileStatsScreen_C, SafeZone_2) == 0x0003A8, "Member 'URootProfileStatsScreen_C::SafeZone_2' has a wrong offset!");
static_assert(offsetof(URootProfileStatsScreen_C, SafeZone_3) == 0x0003B0, "Member 'URootProfileStatsScreen_C::SafeZone_3' has a wrong offset!");
static_assert(offsetof(URootProfileStatsScreen_C, SafeZone_4) == 0x0003B8, "Member 'URootProfileStatsScreen_C::SafeZone_4' has a wrong offset!");
static_assert(offsetof(URootProfileStatsScreen_C, ScreenStateSwitcher) == 0x0003C0, "Member 'URootProfileStatsScreen_C::ScreenStateSwitcher' has a wrong offset!");
static_assert(offsetof(URootProfileStatsScreen_C, StatSetLeftBtn) == 0x0003C8, "Member 'URootProfileStatsScreen_C::StatSetLeftBtn' has a wrong offset!");
static_assert(offsetof(URootProfileStatsScreen_C, StatSetName) == 0x0003D0, "Member 'URootProfileStatsScreen_C::StatSetName' has a wrong offset!");
static_assert(offsetof(URootProfileStatsScreen_C, StatSetRightBtn) == 0x0003D8, "Member 'URootProfileStatsScreen_C::StatSetRightBtn' has a wrong offset!");
static_assert(offsetof(URootProfileStatsScreen_C, TopTabList) == 0x0003E0, "Member 'URootProfileStatsScreen_C::TopTabList' has a wrong offset!");
static_assert(offsetof(URootProfileStatsScreen_C, BackAction) == 0x0003E8, "Member 'URootProfileStatsScreen_C::BackAction' has a wrong offset!");

}
