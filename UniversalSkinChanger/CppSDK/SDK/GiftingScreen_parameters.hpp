#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GiftingScreen

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GiftingScreen.GiftingScreen_C.ExecuteUbergraph_GiftingScreen
// 0x00A0 (0x00A0 - 0x0000)
struct GiftingScreen_C_ExecuteUbergraph_GiftingScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortStoreFrontOfferInfo*               K2Node_Event_NewOfferInfo;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bGiftingToSelf;                       // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button1;                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bSuccess;                             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_ComponentBoundEvent_Item1;                  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsHovered;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_ComponentBoundEvent_Item;                   // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsSelected;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0070(0x0010)(NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue1;           // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen) == 0x000008, "Wrong alignment on GiftingScreen_C_ExecuteUbergraph_GiftingScreen");
static_assert(sizeof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen) == 0x0000A0, "Wrong size on GiftingScreen_C_ExecuteUbergraph_GiftingScreen");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, EntryPoint) == 0x000000, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, Temp_bool_Variable) == 0x000004, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, Temp_byte_Variable) == 0x000005, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, Temp_byte_Variable1) == 0x000006, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, CallFunc_IsMobileGame_ReturnValue) == 0x000010, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, K2Node_Event_NewOfferInfo) == 0x000018, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::K2Node_Event_NewOfferInfo' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, K2Node_Select_Default) == 0x000020, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, K2Node_Event_bGiftingToSelf) == 0x000021, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::K2Node_Event_bGiftingToSelf' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, K2Node_ComponentBoundEvent_Button1) == 0x000028, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::K2Node_ComponentBoundEvent_Button1' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, K2Node_ComponentBoundEvent_Button) == 0x000030, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, CallFunc_RandomFloatInRange_ReturnValue) == 0x000038, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, K2Node_Event_bSuccess) == 0x00003C, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::K2Node_Event_bSuccess' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000048, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00004C, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, K2Node_ComponentBoundEvent_Item1) == 0x000050, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::K2Node_ComponentBoundEvent_Item1' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, K2Node_ComponentBoundEvent_bIsHovered) == 0x000058, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::K2Node_ComponentBoundEvent_bIsHovered' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, K2Node_ComponentBoundEvent_Item) == 0x000060, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::K2Node_ComponentBoundEvent_Item' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, K2Node_ComponentBoundEvent_bIsSelected) == 0x000068, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::K2Node_ComponentBoundEvent_bIsSelected' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, K2Node_MakeStruct_DataTableRowHandle) == 0x000070, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, K2Node_CreateDelegate_OutputDelegate) == 0x000080, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000090, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, CallFunc_Len_ReturnValue) == 0x000098, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ExecuteUbergraph_GiftingScreen, CallFunc_EqualEqual_IntInt_ReturnValue1) == 0x00009C, "Member 'GiftingScreen_C_ExecuteUbergraph_GiftingScreen::CallFunc_EqualEqual_IntInt_ReturnValue1' has a wrong offset!");

// Function GiftingScreen.GiftingScreen_C.BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct GiftingScreen_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature final
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSelected;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GiftingScreen_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature) == 0x000008, "Wrong alignment on GiftingScreen_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature");
static_assert(sizeof(GiftingScreen_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature) == 0x000010, "Wrong size on GiftingScreen_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature");
static_assert(offsetof(GiftingScreen_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature, Item) == 0x000000, "Member 'GiftingScreen_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature::Item' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature, bIsSelected) == 0x000008, "Member 'GiftingScreen_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature::bIsSelected' has a wrong offset!");

// Function GiftingScreen.GiftingScreen_C.BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct GiftingScreen_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature final
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsHovered;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GiftingScreen_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature) == 0x000008, "Wrong alignment on GiftingScreen_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature");
static_assert(sizeof(GiftingScreen_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature) == 0x000010, "Wrong size on GiftingScreen_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature");
static_assert(offsetof(GiftingScreen_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature, Item) == 0x000000, "Member 'GiftingScreen_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature::Item' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature, bIsHovered) == 0x000008, "Member 'GiftingScreen_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature::bIsHovered' has a wrong offset!");

// Function GiftingScreen.GiftingScreen_C.OnEndGiftingSubmission
// 0x0001 (0x0001 - 0x0000)
struct GiftingScreen_C_OnEndGiftingSubmission final
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GiftingScreen_C_OnEndGiftingSubmission) == 0x000001, "Wrong alignment on GiftingScreen_C_OnEndGiftingSubmission");
static_assert(sizeof(GiftingScreen_C_OnEndGiftingSubmission) == 0x000001, "Wrong size on GiftingScreen_C_OnEndGiftingSubmission");
static_assert(offsetof(GiftingScreen_C_OnEndGiftingSubmission, bSuccess) == 0x000000, "Member 'GiftingScreen_C_OnEndGiftingSubmission::bSuccess' has a wrong offset!");

// Function GiftingScreen.GiftingScreen_C.BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct GiftingScreen_C_BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GiftingScreen_C_BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on GiftingScreen_C_BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(GiftingScreen_C_BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on GiftingScreen_C_BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(GiftingScreen_C_BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'GiftingScreen_C_BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function GiftingScreen.GiftingScreen_C.BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct GiftingScreen_C_BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GiftingScreen_C_BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on GiftingScreen_C_BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(GiftingScreen_C_BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on GiftingScreen_C_BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(GiftingScreen_C_BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'GiftingScreen_C_BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function GiftingScreen.GiftingScreen_C.OnMoveToGiftWrapStep
// 0x0001 (0x0001 - 0x0000)
struct GiftingScreen_C_OnMoveToGiftWrapStep final
{
public:
	bool                                          bGiftingToSelf;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GiftingScreen_C_OnMoveToGiftWrapStep) == 0x000001, "Wrong alignment on GiftingScreen_C_OnMoveToGiftWrapStep");
static_assert(sizeof(GiftingScreen_C_OnMoveToGiftWrapStep) == 0x000001, "Wrong size on GiftingScreen_C_OnMoveToGiftWrapStep");
static_assert(offsetof(GiftingScreen_C_OnMoveToGiftWrapStep, bGiftingToSelf) == 0x000000, "Member 'GiftingScreen_C_OnMoveToGiftWrapStep::bGiftingToSelf' has a wrong offset!");

// Function GiftingScreen.GiftingScreen_C.OnOfferSet
// 0x0008 (0x0008 - 0x0000)
struct GiftingScreen_C_OnOfferSet final
{
public:
	class UFortStoreFrontOfferInfo*               NewOfferInfo;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GiftingScreen_C_OnOfferSet) == 0x000008, "Wrong alignment on GiftingScreen_C_OnOfferSet");
static_assert(sizeof(GiftingScreen_C_OnOfferSet) == 0x000008, "Wrong size on GiftingScreen_C_OnOfferSet");
static_assert(offsetof(GiftingScreen_C_OnOfferSet, NewOfferInfo) == 0x000000, "Member 'GiftingScreen_C_OnOfferSet::NewOfferInfo' has a wrong offset!");

// Function GiftingScreen.GiftingScreen_C.HandleBackClicked
// 0x0010 (0x0010 - 0x0000)
struct GiftingScreen_C_HandleBackClicked final
{
public:
	bool                                          bIsHandled;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GiftingScreen_C_HandleBackClicked) == 0x000008, "Wrong alignment on GiftingScreen_C_HandleBackClicked");
static_assert(sizeof(GiftingScreen_C_HandleBackClicked) == 0x000010, "Wrong size on GiftingScreen_C_HandleBackClicked");
static_assert(offsetof(GiftingScreen_C_HandleBackClicked, bIsHandled) == 0x000000, "Member 'GiftingScreen_C_HandleBackClicked::bIsHandled' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_HandleBackClicked, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000008, "Member 'GiftingScreen_C_HandleBackClicked::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");

// Function GiftingScreen.GiftingScreen_C.GetWidgetForFramingViewedItem
// 0x0008 (0x0008 - 0x0000)
struct GiftingScreen_C_GetWidgetForFramingViewedItem final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GiftingScreen_C_GetWidgetForFramingViewedItem) == 0x000008, "Wrong alignment on GiftingScreen_C_GetWidgetForFramingViewedItem");
static_assert(sizeof(GiftingScreen_C_GetWidgetForFramingViewedItem) == 0x000008, "Wrong size on GiftingScreen_C_GetWidgetForFramingViewedItem");
static_assert(offsetof(GiftingScreen_C_GetWidgetForFramingViewedItem, ReturnValue) == 0x000000, "Member 'GiftingScreen_C_GetWidgetForFramingViewedItem::ReturnValue' has a wrong offset!");

// Function GiftingScreen.GiftingScreen_C.ToggleBackAction
// 0x0018 (0x0018 - 0x0000)
struct GiftingScreen_C_ToggleBackAction final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_HasInputActionHandler_ReturnValue;        // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasInputActionHandler_ReturnValue1;       // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GiftingScreen_C_ToggleBackAction) == 0x000004, "Wrong alignment on GiftingScreen_C_ToggleBackAction");
static_assert(sizeof(GiftingScreen_C_ToggleBackAction) == 0x000018, "Wrong size on GiftingScreen_C_ToggleBackAction");
static_assert(offsetof(GiftingScreen_C_ToggleBackAction, bEnable) == 0x000000, "Member 'GiftingScreen_C_ToggleBackAction::bEnable' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ToggleBackAction, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GiftingScreen_C_ToggleBackAction::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ToggleBackAction, CallFunc_HasInputActionHandler_ReturnValue) == 0x000014, "Member 'GiftingScreen_C_ToggleBackAction::CallFunc_HasInputActionHandler_ReturnValue' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_ToggleBackAction, CallFunc_HasInputActionHandler_ReturnValue1) == 0x000015, "Member 'GiftingScreen_C_ToggleBackAction::CallFunc_HasInputActionHandler_ReturnValue1' has a wrong offset!");

// Function GiftingScreen.GiftingScreen_C.HandleMoreInfoClicked
// 0x0010 (0x0010 - 0x0000)
struct GiftingScreen_C_HandleMoreInfoClicked final
{
public:
	bool                                          bPassThrough;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GiftingScreen_C_HandleMoreInfoClicked) == 0x000008, "Wrong alignment on GiftingScreen_C_HandleMoreInfoClicked");
static_assert(sizeof(GiftingScreen_C_HandleMoreInfoClicked) == 0x000010, "Wrong size on GiftingScreen_C_HandleMoreInfoClicked");
static_assert(offsetof(GiftingScreen_C_HandleMoreInfoClicked, bPassThrough) == 0x000000, "Member 'GiftingScreen_C_HandleMoreInfoClicked::bPassThrough' has a wrong offset!");
static_assert(offsetof(GiftingScreen_C_HandleMoreInfoClicked, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000008, "Member 'GiftingScreen_C_HandleMoreInfoClicked::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");

}
