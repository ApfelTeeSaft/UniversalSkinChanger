#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsMenuHeader

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function OptionsMenuHeader.OptionsMenuHeader_C.ExecuteUbergraph_OptionsMenuHeader
// 0x0148 (0x0148 - 0x0000)
struct OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent1;                          // 0x0018(0x0070)(ConstParm)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0088(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00C0(0x0070)(ConstParm)
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSettingInfo*                       K2Node_DynamicCast_AsFort_Setting_Info;            // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader) == 0x000008, "Wrong alignment on OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader");
static_assert(sizeof(OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader) == 0x000148, "Wrong size on OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader");
static_assert(offsetof(OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader, EntryPoint) == 0x000000, "Member 'OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader::EntryPoint' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader, K2Node_Event_bIsSelected) == 0x000010, "Member 'OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader, CallFunc_IsUsingGamepad_ReturnValue) == 0x000011, "Member 'OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader, K2Node_Event_MouseEvent1) == 0x000018, "Member 'OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader::K2Node_Event_MouseEvent1' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader, K2Node_Event_MyGeometry) == 0x000088, "Member 'OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader, K2Node_Event_MouseEvent) == 0x0000C0, "Member 'OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader, K2Node_Event_ListItemObject) == 0x000130, "Member 'OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader, K2Node_DynamicCast_AsFort_Setting_Info) == 0x000138, "Member 'OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader::K2Node_DynamicCast_AsFort_Setting_Info' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader, K2Node_DynamicCast_bSuccess) == 0x000140, "Member 'OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader, K2Node_Event_bIsExpanded) == 0x000141, "Member 'OptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader::K2Node_Event_bIsExpanded' has a wrong offset!");

// Function OptionsMenuHeader.OptionsMenuHeader_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct OptionsMenuHeader_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuHeader_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on OptionsMenuHeader_C_OnListItemObjectSet");
static_assert(sizeof(OptionsMenuHeader_C_OnListItemObjectSet) == 0x000008, "Wrong size on OptionsMenuHeader_C_OnListItemObjectSet");
static_assert(offsetof(OptionsMenuHeader_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'OptionsMenuHeader_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function OptionsMenuHeader.OptionsMenuHeader_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct OptionsMenuHeader_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(OptionsMenuHeader_C_OnMouseEnter) == 0x000008, "Wrong alignment on OptionsMenuHeader_C_OnMouseEnter");
static_assert(sizeof(OptionsMenuHeader_C_OnMouseEnter) == 0x0000A8, "Wrong size on OptionsMenuHeader_C_OnMouseEnter");
static_assert(offsetof(OptionsMenuHeader_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'OptionsMenuHeader_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'OptionsMenuHeader_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function OptionsMenuHeader.OptionsMenuHeader_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct OptionsMenuHeader_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(OptionsMenuHeader_C_OnMouseLeave) == 0x000008, "Wrong alignment on OptionsMenuHeader_C_OnMouseLeave");
static_assert(sizeof(OptionsMenuHeader_C_OnMouseLeave) == 0x000070, "Wrong size on OptionsMenuHeader_C_OnMouseLeave");
static_assert(offsetof(OptionsMenuHeader_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'OptionsMenuHeader_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function OptionsMenuHeader.OptionsMenuHeader_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct OptionsMenuHeader_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionsMenuHeader_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on OptionsMenuHeader_C_BP_OnItemSelectionChanged");
static_assert(sizeof(OptionsMenuHeader_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on OptionsMenuHeader_C_BP_OnItemSelectionChanged");
static_assert(offsetof(OptionsMenuHeader_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'OptionsMenuHeader_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function OptionsMenuHeader.OptionsMenuHeader_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct OptionsMenuHeader_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionsMenuHeader_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on OptionsMenuHeader_C_BP_OnItemExpansionChanged");
static_assert(sizeof(OptionsMenuHeader_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on OptionsMenuHeader_C_BP_OnItemExpansionChanged");
static_assert(offsetof(OptionsMenuHeader_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'OptionsMenuHeader_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

// Function OptionsMenuHeader.OptionsMenuHeader_C.UpdateSize
// 0x0040 (0x0040 - 0x0000)
struct OptionsMenuHeader_C_UpdateSize final
{
public:
	struct FVector2D                              LargeSize;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SmallSize;                                         // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable1;                              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Temp_struct_Variable;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable1;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBROnly_ReturnValue;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBROnly_ReturnValue1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x2];                                       // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select1_Default;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuHeader_C_UpdateSize) == 0x000004, "Wrong alignment on OptionsMenuHeader_C_UpdateSize");
static_assert(sizeof(OptionsMenuHeader_C_UpdateSize) == 0x000040, "Wrong size on OptionsMenuHeader_C_UpdateSize");
static_assert(offsetof(OptionsMenuHeader_C_UpdateSize, LargeSize) == 0x000000, "Member 'OptionsMenuHeader_C_UpdateSize::LargeSize' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_UpdateSize, SmallSize) == 0x000008, "Member 'OptionsMenuHeader_C_UpdateSize::SmallSize' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_UpdateSize, Temp_bool_Variable) == 0x000010, "Member 'OptionsMenuHeader_C_UpdateSize::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_UpdateSize, Temp_float_Variable) == 0x000014, "Member 'OptionsMenuHeader_C_UpdateSize::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_UpdateSize, Temp_float_Variable1) == 0x000018, "Member 'OptionsMenuHeader_C_UpdateSize::Temp_float_Variable1' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_UpdateSize, Temp_bool_Variable1) == 0x00001C, "Member 'OptionsMenuHeader_C_UpdateSize::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_UpdateSize, Temp_struct_Variable) == 0x000020, "Member 'OptionsMenuHeader_C_UpdateSize::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_UpdateSize, Temp_struct_Variable1) == 0x000028, "Member 'OptionsMenuHeader_C_UpdateSize::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_UpdateSize, CallFunc_IsBROnly_ReturnValue) == 0x000030, "Member 'OptionsMenuHeader_C_UpdateSize::CallFunc_IsBROnly_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_UpdateSize, CallFunc_IsBROnly_ReturnValue1) == 0x000031, "Member 'OptionsMenuHeader_C_UpdateSize::CallFunc_IsBROnly_ReturnValue1' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_UpdateSize, K2Node_Select_Default) == 0x000034, "Member 'OptionsMenuHeader_C_UpdateSize::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_UpdateSize, K2Node_Select1_Default) == 0x000038, "Member 'OptionsMenuHeader_C_UpdateSize::K2Node_Select1_Default' has a wrong offset!");

// Function OptionsMenuHeader.OptionsMenuHeader_C.HandlePawnSet
// 0x0028 (0x0028 - 0x0000)
struct OptionsMenuHeader_C_HandlePawnSet final
{
public:
	bool                                          bRCPawn;                                           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortRemoteControlledPawnAthena*        K2Node_DynamicCast_AsFort_Remote_Controlled_Pawn_Athena; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionsMenuHeader_C_HandlePawnSet) == 0x000008, "Wrong alignment on OptionsMenuHeader_C_HandlePawnSet");
static_assert(sizeof(OptionsMenuHeader_C_HandlePawnSet) == 0x000028, "Wrong size on OptionsMenuHeader_C_HandlePawnSet");
static_assert(offsetof(OptionsMenuHeader_C_HandlePawnSet, bRCPawn) == 0x000000, "Member 'OptionsMenuHeader_C_HandlePawnSet::bRCPawn' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_HandlePawnSet, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'OptionsMenuHeader_C_HandlePawnSet::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_HandlePawnSet, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'OptionsMenuHeader_C_HandlePawnSet::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_HandlePawnSet, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'OptionsMenuHeader_C_HandlePawnSet::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_HandlePawnSet, CallFunc_K2_GetPawn_ReturnValue) == 0x000010, "Member 'OptionsMenuHeader_C_HandlePawnSet::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_HandlePawnSet, K2Node_DynamicCast_AsFort_Remote_Controlled_Pawn_Athena) == 0x000018, "Member 'OptionsMenuHeader_C_HandlePawnSet::K2Node_DynamicCast_AsFort_Remote_Controlled_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(OptionsMenuHeader_C_HandlePawnSet, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'OptionsMenuHeader_C_HandlePawnSet::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function OptionsMenuHeader.OptionsMenuHeader_C.GetListItemObject
// 0x0008 (0x0008 - 0x0000)
struct OptionsMenuHeader_C_GetListItemObject final
{
public:
	class UObject*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuHeader_C_GetListItemObject) == 0x000008, "Wrong alignment on OptionsMenuHeader_C_GetListItemObject");
static_assert(sizeof(OptionsMenuHeader_C_GetListItemObject) == 0x000008, "Wrong size on OptionsMenuHeader_C_GetListItemObject");
static_assert(offsetof(OptionsMenuHeader_C_GetListItemObject, ReturnValue) == 0x000000, "Member 'OptionsMenuHeader_C_GetListItemObject::ReturnValue' has a wrong offset!");

}
