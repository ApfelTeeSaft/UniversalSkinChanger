#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaReplayBrowserTab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaReplayBrowserTab.AthenaReplayBrowserTab_C
// 0x0040 (0x0400 - 0x03C0)
class UAthenaReplayBrowserTab_C final : public UAthenaReplayBrowserScreenBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ULeaderboardThrobber_C*                 LoadingThrobber;                                   // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          LowerBarBorder;                                    // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      OpenReplayFolder;                                  // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaReplayBrowserRenameDialog_C*     RenameDialog;                                      // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonListView*                        ReplayListView;                                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaReplayBrowserRowProxyInstance*   SelectedRowProxy;                                  // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           LoadingTimerHandle;                                // 0x03F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaReplayBrowserTab(int32 EntryPoint);
	void ShowDeleteInvalidDialog(const class FText& Title, const class FText& MESSAGE);
	void OnActionFinished();
	void OnActionStarted();
	void BndEvt__OpenReplayFolder_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnPlayFailed(const class FText& Reason);
	void BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected);
	void OnSaveFailed(const class FText& Reason);
	void OnRenameFailed(const class FText& Reason);
	void OnDeleteFailed(const class FText& Reason);
	void BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void OnInputModeChanged(bool bUsingGamepad);
	void PlayReplay(const class UAthenaReplayBrowserRowProxyInstance* RowProxy);
	void Construct();
	void BndEvt__CommonListView_0_K2Node_ComponentBoundEvent_2_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void DeleteReplay(const class UAthenaReplayBrowserRowProxyInstance* RowProxy);
	void OnActivated();
	void OnRowsUpdated();
	void DialogResult_5C8831094A522B13254093A66254221F(EFortDialogResult Result, class FName ResultName);
	void DialogResult_F681A46A43F230E95DCC3F994D03E83C(EFortDialogResult Result, class FName ResultName);
	void DialogResult_79A680104EAA90FF10D265808FD512BC(EFortDialogResult Result, class FName ResultName);
	void DialogResult_961693C14B8B2A8E26E2AFB69251D5F8(EFortDialogResult Result, class FName ResultName);
	void DialogResult_00986FB1494FF7EA41F1769EAFB70E83(EFortDialogResult Result, class FName ResultName);
	void DialogResult_E89869AF460753E34CA097BC86722E95(EFortDialogResult Result, class FName ResultName);
	void DialogResult_580DD63848C06A1FCA8D9DABDAF6FF77(EFortDialogResult Result, class FName ResultName);
	void DialogResult_12ECDF8D47346477E6D96B927F5223CE(EFortDialogResult Result, class FName ResultName);
	void SelectReplay(class UObject* ReplayInfoObject);
	void FocusList();
	void HideInputActions();
	void OnConfirmRename(const class FText& NewName);
	void CloseRenameDialog();
	void SetupInputActionHandlers();
	void OnActionStateChanged(bool ActionInProgress);
	void OnShowLoadingThrobber();
	void DoesSupportReplayFolder(bool* IsSupported);
	void RefreshReplayFolderState();
	void StartAthenaLobbyMusic();
	void OnPlayActionExecuted(bool* bPassThrough);
	void OnDeleteActionExecuted(bool* bPassThrough);
	void OnRenameActionExecuted(bool* bPassThrough);
	void OnBackActionExecuted(bool* bPassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaReplayBrowserTab_C">();
	}
	static class UAthenaReplayBrowserTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaReplayBrowserTab_C>();
	}
};
static_assert(alignof(UAthenaReplayBrowserTab_C) == 0x000008, "Wrong alignment on UAthenaReplayBrowserTab_C");
static_assert(sizeof(UAthenaReplayBrowserTab_C) == 0x000400, "Wrong size on UAthenaReplayBrowserTab_C");
static_assert(offsetof(UAthenaReplayBrowserTab_C, UberGraphFrame) == 0x0003C0, "Member 'UAthenaReplayBrowserTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserTab_C, LoadingThrobber) == 0x0003C8, "Member 'UAthenaReplayBrowserTab_C::LoadingThrobber' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserTab_C, LowerBarBorder) == 0x0003D0, "Member 'UAthenaReplayBrowserTab_C::LowerBarBorder' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserTab_C, OpenReplayFolder) == 0x0003D8, "Member 'UAthenaReplayBrowserTab_C::OpenReplayFolder' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserTab_C, RenameDialog) == 0x0003E0, "Member 'UAthenaReplayBrowserTab_C::RenameDialog' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserTab_C, ReplayListView) == 0x0003E8, "Member 'UAthenaReplayBrowserTab_C::ReplayListView' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserTab_C, SelectedRowProxy) == 0x0003F0, "Member 'UAthenaReplayBrowserTab_C::SelectedRowProxy' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserTab_C, LoadingTimerHandle) == 0x0003F8, "Member 'UAthenaReplayBrowserTab_C::LoadingTimerHandle' has a wrong offset!");

}
