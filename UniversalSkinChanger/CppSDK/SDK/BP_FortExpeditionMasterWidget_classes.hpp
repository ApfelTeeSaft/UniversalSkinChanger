#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortExpeditionMasterWidget

#include "Basic.hpp"

#include "FrontEndRewards_Definition_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C
// 0x00F0 (0x0430 - 0x0340)
class UBP_FortExpeditionMasterWidget_C final : public UFortExpeditionMasterWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_FortExpeditionOverviewWidget_C*     BP_FortExpeditionOverviewWidget;                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortniteDefaultBackgroundBlurWidget_C* FortniteDefaultBackgroundBlurWidget;               // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    BackInputAction;                                   // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    BuildExpeditionAction;                             // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    AbandonExpeditionAction;                           // 0x0378(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    CollectExpeditionAction;                           // 0x0388(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    SortInputAction;                                   // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          bRewardsShowing;                                   // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A9[0x7];                                      // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFrontEndRewards_Widget_C*              RewardsWidget;                                     // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortExpeditionItem*>            CompletedExpeditions;                              // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FFrontEndRewards_Definition            RewardsDefinition;                                 // 0x03C8(0x0060)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	EFortExpeditionListSort                       ExpeditionListSortType;                            // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortExpeditionListSort                       ExpeditionListSortBegin;                           // 0x0429(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortExpeditionListSort                       ExpeditionListSortEnd;                             // 0x042A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BlockedByStorageWarningShown;                      // 0x042B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          BlockedByProfileLockWarningShown;                  // 0x042C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_FortExpeditionMasterWidget(int32 EntryPoint);
	void OnRewardsBlockedByLockedProfile();
	void OnRewardsBlockedByStorage();
	void OnActivated();
	void HACK_OnActivate_UpdateMasterWidget();
	void HandleAllCompletedExpeditionsCollected();
	void Destruct();
	void Construct();
	void DialogResult_39A80A89449E8489E8E81EAECC14DE95(EFortDialogResult Result, class FName ResultName);
	void DialogResult_67CD2E3A4E1A6780703420B1064D5BD1(EFortDialogResult Result, class FName ResultName);
	void DialogResult_99152A754621D0E9A8C9C889926A827D(EFortDialogResult Result, class FName ResultName);
	void Handle_Back(bool* PassThrough);
	void Setup_Input_Action_Handlers();
	void Setup_Bindings();
	void Update_Master_Widget();
	void Hide_Input_Action(const struct FDataTableRowHandle& InputActionRow);
	void Show_Input_Action(const struct FDataTableRowHandle& InputActionRow);
	void Present_Reward_UI();
	void HandleBuildExpeditionAction(bool* PassThrough);
	void HandleAbandonExpeditionAction(bool* PassThrough);
	void HandleCollectExpeditionAction(bool* PassThrough);
	void Disable_Input_Action(const struct FDataTableRowHandle& InputActionRow);
	void HandleSortExpeditionListAction(bool* PassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FortExpeditionMasterWidget_C">();
	}
	static class UBP_FortExpeditionMasterWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FortExpeditionMasterWidget_C>();
	}
};
static_assert(alignof(UBP_FortExpeditionMasterWidget_C) == 0x000008, "Wrong alignment on UBP_FortExpeditionMasterWidget_C");
static_assert(sizeof(UBP_FortExpeditionMasterWidget_C) == 0x000430, "Wrong size on UBP_FortExpeditionMasterWidget_C");
static_assert(offsetof(UBP_FortExpeditionMasterWidget_C, UberGraphFrame) == 0x000340, "Member 'UBP_FortExpeditionMasterWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionMasterWidget_C, BP_FortExpeditionOverviewWidget) == 0x000348, "Member 'UBP_FortExpeditionMasterWidget_C::BP_FortExpeditionOverviewWidget' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionMasterWidget_C, FortniteDefaultBackgroundBlurWidget) == 0x000350, "Member 'UBP_FortExpeditionMasterWidget_C::FortniteDefaultBackgroundBlurWidget' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionMasterWidget_C, BackInputAction) == 0x000358, "Member 'UBP_FortExpeditionMasterWidget_C::BackInputAction' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionMasterWidget_C, BuildExpeditionAction) == 0x000368, "Member 'UBP_FortExpeditionMasterWidget_C::BuildExpeditionAction' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionMasterWidget_C, AbandonExpeditionAction) == 0x000378, "Member 'UBP_FortExpeditionMasterWidget_C::AbandonExpeditionAction' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionMasterWidget_C, CollectExpeditionAction) == 0x000388, "Member 'UBP_FortExpeditionMasterWidget_C::CollectExpeditionAction' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionMasterWidget_C, SortInputAction) == 0x000398, "Member 'UBP_FortExpeditionMasterWidget_C::SortInputAction' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionMasterWidget_C, bRewardsShowing) == 0x0003A8, "Member 'UBP_FortExpeditionMasterWidget_C::bRewardsShowing' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionMasterWidget_C, RewardsWidget) == 0x0003B0, "Member 'UBP_FortExpeditionMasterWidget_C::RewardsWidget' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionMasterWidget_C, CompletedExpeditions) == 0x0003B8, "Member 'UBP_FortExpeditionMasterWidget_C::CompletedExpeditions' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionMasterWidget_C, RewardsDefinition) == 0x0003C8, "Member 'UBP_FortExpeditionMasterWidget_C::RewardsDefinition' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionMasterWidget_C, ExpeditionListSortType) == 0x000428, "Member 'UBP_FortExpeditionMasterWidget_C::ExpeditionListSortType' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionMasterWidget_C, ExpeditionListSortBegin) == 0x000429, "Member 'UBP_FortExpeditionMasterWidget_C::ExpeditionListSortBegin' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionMasterWidget_C, ExpeditionListSortEnd) == 0x00042A, "Member 'UBP_FortExpeditionMasterWidget_C::ExpeditionListSortEnd' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionMasterWidget_C, BlockedByStorageWarningShown) == 0x00042B, "Member 'UBP_FortExpeditionMasterWidget_C::BlockedByStorageWarningShown' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionMasterWidget_C, BlockedByProfileLockWarningShown) == 0x00042C, "Member 'UBP_FortExpeditionMasterWidget_C::BlockedByProfileLockWarningShown' has a wrong offset!");

}
