#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LocalPlayerBannerEditor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C
// 0x00D8 (0x03C8 - 0x02F0)
class UBP_LocalPlayerBannerEditor_C final : public UFortPlayerProfileBannerEditor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                      ApplyButton;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CategoryText;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      CloseEditorButton;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                   ColorBangWrapper;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTileView*                        CommonTileView_0;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      EditColorButton;                                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      EditIconButton;                                    // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       FoundersNoteText;                                  // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                        HomebaseBanner;                                    // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HomebaseImage;                                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                   IconBangWrapper;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      LeftArrowButton;                                   // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                   LeftCategoryBang;                                  // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    LeftTriggerAction;                                 // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      RightArrowButton;                                  // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                   RightCategoryBang;                                 // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    RightTriggerAction;                                // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   CloseBannerEditor;                                 // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         IconCategoryIndex;                                 // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ColorCategoryIndex;                                // 0x0394(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CurrentCategory;                                   // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bViewingIcons;                                     // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bPickingTile;                                      // 0x03A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A2[0x2];                                      // 0x03A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   TempChosenIcon;                                    // 0x03A4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TempChosenColor;                                   // 0x03AC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B4[0x4];                                      // 0x03B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonGroup*                     ButtonGroup;                                       // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           UpdateBangTimerHandle;                             // 0x03C0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void CloseBannerEditor__DelegateSignature(class FName IconId, class FName ColorId);
	void ExecuteUbergraph_BP_LocalPlayerBannerEditor(int32 EntryPoint);
	void OnShowNextCategory();
	void OnShowPreviousCategory();
	void Handle_Bang_State_Changed();
	void BannerTileBangUpdated_Event_0();
	void BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_363_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleInputMethodChanged(bool bUsingGamepad);
	void BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected);
	void BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void RefreshBannerEditor();
	void BndEvt__CloseEditorButton_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__EditColorButton_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__EditIconButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__EditColorButton_K2Node_ComponentBoundEvent_319_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__EditIconButton_K2Node_ComponentBoundEvent_302_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void OnWidgetActivated();
	void Setup_Tileview_For_Icons(class FName CategoryRowName);
	void Setup_Tileview_For_Colorswatches(class FName& CategoryRowName);
	void Set_Current_Category(class FName CurrentCategory_0);
	void Next_Category();
	void Previous_Category();
	void Decrement_Icon_Category_Index();
	void Decrement_Color_Category_Index();
	void Increment_Icon_Category_Index();
	void Increment_Color_Category_Index();
	void Update_Banner_Color_Tileview(class FName CurrentCategory_0);
	void Update_Banner_Icon_Tileview(class FName CurrentCategory_0);
	void OnWidgetDeactivated();
	void Navigate_to_Chosen_Icon();
	void Navigate_to_Chosen_Color();
	void Attempt_Leave_Picker(bool* Left);
	void Set_Picking_Tile_State(bool bPickingTile_0);
	void Apply_Chosen_Item();
	void Refresh_Apply_Button_State();
	void Update_Temp_State_On_Item_Selected(class UObject* Item);
	void Reset_for_Keyboard_and_Mouse();
	void Reset_Pickers_and_Views();
	void FoundsPackTextUpdate();
	void Update_Bang_States();
	void Update_Icon_Button_Bang_State();
	void Update_Color_Button_Bang_State();
	int32 Get_Next_Icon_Category_Index();
	int32 Get_Prev_Icon_Category_Index();
	int32 Get_Next_Color_Category_Index();
	int32 Get_Prev_Color_Category_Index();
	void Update_Left_Icon_Category_Button_Bang_State();
	void Update_Right_Icon_Category_Button_Bang_State();
	void Update_Left_Color_Category_Button_Bang_State();
	void Update_Right_Color_Category_Button_Bang_State();
	void Reset_Icon_Category_Index();
	void Reset_Color_Category_Index();
	void Update_Category_Navigation_Visibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LocalPlayerBannerEditor_C">();
	}
	static class UBP_LocalPlayerBannerEditor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_LocalPlayerBannerEditor_C>();
	}
};
static_assert(alignof(UBP_LocalPlayerBannerEditor_C) == 0x000008, "Wrong alignment on UBP_LocalPlayerBannerEditor_C");
static_assert(sizeof(UBP_LocalPlayerBannerEditor_C) == 0x0003C8, "Wrong size on UBP_LocalPlayerBannerEditor_C");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, UberGraphFrame) == 0x0002F0, "Member 'UBP_LocalPlayerBannerEditor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, ApplyButton) == 0x0002F8, "Member 'UBP_LocalPlayerBannerEditor_C::ApplyButton' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, CategoryText) == 0x000300, "Member 'UBP_LocalPlayerBannerEditor_C::CategoryText' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, CloseEditorButton) == 0x000308, "Member 'UBP_LocalPlayerBannerEditor_C::CloseEditorButton' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, ColorBangWrapper) == 0x000310, "Member 'UBP_LocalPlayerBannerEditor_C::ColorBangWrapper' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, CommonTileView_0) == 0x000318, "Member 'UBP_LocalPlayerBannerEditor_C::CommonTileView_0' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, EditColorButton) == 0x000320, "Member 'UBP_LocalPlayerBannerEditor_C::EditColorButton' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, EditIconButton) == 0x000328, "Member 'UBP_LocalPlayerBannerEditor_C::EditIconButton' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, FoundersNoteText) == 0x000330, "Member 'UBP_LocalPlayerBannerEditor_C::FoundersNoteText' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, HomebaseBanner) == 0x000338, "Member 'UBP_LocalPlayerBannerEditor_C::HomebaseBanner' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, HomebaseImage) == 0x000340, "Member 'UBP_LocalPlayerBannerEditor_C::HomebaseImage' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, IconBangWrapper) == 0x000348, "Member 'UBP_LocalPlayerBannerEditor_C::IconBangWrapper' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, LeftArrowButton) == 0x000350, "Member 'UBP_LocalPlayerBannerEditor_C::LeftArrowButton' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, LeftCategoryBang) == 0x000358, "Member 'UBP_LocalPlayerBannerEditor_C::LeftCategoryBang' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, LeftTriggerAction) == 0x000360, "Member 'UBP_LocalPlayerBannerEditor_C::LeftTriggerAction' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, RightArrowButton) == 0x000368, "Member 'UBP_LocalPlayerBannerEditor_C::RightArrowButton' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, RightCategoryBang) == 0x000370, "Member 'UBP_LocalPlayerBannerEditor_C::RightCategoryBang' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, RightTriggerAction) == 0x000378, "Member 'UBP_LocalPlayerBannerEditor_C::RightTriggerAction' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, CloseBannerEditor) == 0x000380, "Member 'UBP_LocalPlayerBannerEditor_C::CloseBannerEditor' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, IconCategoryIndex) == 0x000390, "Member 'UBP_LocalPlayerBannerEditor_C::IconCategoryIndex' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, ColorCategoryIndex) == 0x000394, "Member 'UBP_LocalPlayerBannerEditor_C::ColorCategoryIndex' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, CurrentCategory) == 0x000398, "Member 'UBP_LocalPlayerBannerEditor_C::CurrentCategory' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, bViewingIcons) == 0x0003A0, "Member 'UBP_LocalPlayerBannerEditor_C::bViewingIcons' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, bPickingTile) == 0x0003A1, "Member 'UBP_LocalPlayerBannerEditor_C::bPickingTile' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, TempChosenIcon) == 0x0003A4, "Member 'UBP_LocalPlayerBannerEditor_C::TempChosenIcon' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, TempChosenColor) == 0x0003AC, "Member 'UBP_LocalPlayerBannerEditor_C::TempChosenColor' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, ButtonGroup) == 0x0003B8, "Member 'UBP_LocalPlayerBannerEditor_C::ButtonGroup' has a wrong offset!");
static_assert(offsetof(UBP_LocalPlayerBannerEditor_C, UpdateBangTimerHandle) == 0x0003C0, "Member 'UBP_LocalPlayerBannerEditor_C::UpdateBangTimerHandle' has a wrong offset!");

}
