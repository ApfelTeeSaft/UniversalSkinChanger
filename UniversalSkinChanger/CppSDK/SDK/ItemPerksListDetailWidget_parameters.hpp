#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemPerksListDetailWidget

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.ExecuteUbergraph_ItemPerksListDetailWidget
// 0x0018 (0x0018 - 0x0000)
struct ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHero*                              K2Node_DynamicCast_AsFort_Hero;                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHeroLoadoutSystemEnabled_ReturnValue;   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget) == 0x000008, "Wrong alignment on ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget");
static_assert(sizeof(ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget) == 0x000018, "Wrong size on ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget");
static_assert(offsetof(ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget, EntryPoint) == 0x000000, "Member 'ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget, Temp_bool_Variable) == 0x000004, "Member 'ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget, Temp_byte_Variable) == 0x000005, "Member 'ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget, Temp_byte_Variable1) == 0x000006, "Member 'ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget, K2Node_DynamicCast_AsFort_Hero) == 0x000008, "Member 'ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget::K2Node_DynamicCast_AsFort_Hero' has a wrong offset!");
static_assert(offsetof(ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget, CallFunc_IsHeroLoadoutSystemEnabled_ReturnValue) == 0x000011, "Member 'ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget::CallFunc_IsHeroLoadoutSystemEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget, K2Node_Select_Default) == 0x000012, "Member 'ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget::K2Node_Select_Default' has a wrong offset!");

// Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.SetState
// 0x0010 (0x0010 - 0x0000)
struct ItemPerksListDetailWidget_C_SetState final
{
public:
	EFortPerksWidgetState                         InState;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHero*                              InEvolutionOption;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemPerksListDetailWidget_C_SetState) == 0x000008, "Wrong alignment on ItemPerksListDetailWidget_C_SetState");
static_assert(sizeof(ItemPerksListDetailWidget_C_SetState) == 0x000010, "Wrong size on ItemPerksListDetailWidget_C_SetState");
static_assert(offsetof(ItemPerksListDetailWidget_C_SetState, InState) == 0x000000, "Member 'ItemPerksListDetailWidget_C_SetState::InState' has a wrong offset!");
static_assert(offsetof(ItemPerksListDetailWidget_C_SetState, InEvolutionOption) == 0x000008, "Member 'ItemPerksListDetailWidget_C_SetState::InEvolutionOption' has a wrong offset!");

}
