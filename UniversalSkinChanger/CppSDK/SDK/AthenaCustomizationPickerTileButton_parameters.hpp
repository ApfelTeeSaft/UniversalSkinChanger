#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCustomizationPickerTileButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.ExecuteUbergraph_AthenaCustomizationPickerTileButton
// 0x0030 (0x0030 - 0x0000)
struct AthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNullItem_Is_Null_Item;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton) == 0x000008, "Wrong alignment on AthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton");
static_assert(sizeof(AthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton) == 0x000030, "Wrong size on AthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton");
static_assert(offsetof(AthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton, EntryPoint) == 0x000000, "Member 'AthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton, Temp_bool_Variable) == 0x000004, "Member 'AthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'AthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton, K2Node_Event_ListItemObject) == 0x000010, "Member 'AthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton, CallFunc_IsNullItem_Is_Null_Item) == 0x000018, "Member 'AthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton::CallFunc_IsNullItem_Is_Null_Item' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton, K2Node_Select_Default) == 0x000020, "Member 'AthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000028, "Member 'AthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct AthenaCustomizationPickerTileButton_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaCustomizationPickerTileButton_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on AthenaCustomizationPickerTileButton_C_OnListItemObjectSet");
static_assert(sizeof(AthenaCustomizationPickerTileButton_C_OnListItemObjectSet) == 0x000008, "Wrong size on AthenaCustomizationPickerTileButton_C_OnListItemObjectSet");
static_assert(offsetof(AthenaCustomizationPickerTileButton_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'AthenaCustomizationPickerTileButton_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.UpdateBangState
// 0x0010 (0x0010 - 0x0000)
struct AthenaCustomizationPickerTileButton_C_UpdateBangState final
{
public:
	class UFortAccountItem*                       K2Node_DynamicCast_AsFort_Account_Item;            // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasBeenSeenLocally_ReturnValue;           // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaCustomizationPickerTileButton_C_UpdateBangState) == 0x000008, "Wrong alignment on AthenaCustomizationPickerTileButton_C_UpdateBangState");
static_assert(sizeof(AthenaCustomizationPickerTileButton_C_UpdateBangState) == 0x000010, "Wrong size on AthenaCustomizationPickerTileButton_C_UpdateBangState");
static_assert(offsetof(AthenaCustomizationPickerTileButton_C_UpdateBangState, K2Node_DynamicCast_AsFort_Account_Item) == 0x000000, "Member 'AthenaCustomizationPickerTileButton_C_UpdateBangState::K2Node_DynamicCast_AsFort_Account_Item' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationPickerTileButton_C_UpdateBangState, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'AthenaCustomizationPickerTileButton_C_UpdateBangState::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationPickerTileButton_C_UpdateBangState, CallFunc_HasBeenSeenLocally_ReturnValue) == 0x000009, "Member 'AthenaCustomizationPickerTileButton_C_UpdateBangState::CallFunc_HasBeenSeenLocally_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationPickerTileButton_C_UpdateBangState, CallFunc_Not_PreBool_ReturnValue) == 0x00000A, "Member 'AthenaCustomizationPickerTileButton_C_UpdateBangState::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.MarkCosmeticAsSeen
// 0x0010 (0x0010 - 0x0000)
struct AthenaCustomizationPickerTileButton_C_MarkCosmeticAsSeen final
{
public:
	class UFortAccountItem*                       K2Node_DynamicCast_AsFort_Account_Item;            // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaCustomizationPickerTileButton_C_MarkCosmeticAsSeen) == 0x000008, "Wrong alignment on AthenaCustomizationPickerTileButton_C_MarkCosmeticAsSeen");
static_assert(sizeof(AthenaCustomizationPickerTileButton_C_MarkCosmeticAsSeen) == 0x000010, "Wrong size on AthenaCustomizationPickerTileButton_C_MarkCosmeticAsSeen");
static_assert(offsetof(AthenaCustomizationPickerTileButton_C_MarkCosmeticAsSeen, K2Node_DynamicCast_AsFort_Account_Item) == 0x000000, "Member 'AthenaCustomizationPickerTileButton_C_MarkCosmeticAsSeen::K2Node_DynamicCast_AsFort_Account_Item' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationPickerTileButton_C_MarkCosmeticAsSeen, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'AthenaCustomizationPickerTileButton_C_MarkCosmeticAsSeen::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
