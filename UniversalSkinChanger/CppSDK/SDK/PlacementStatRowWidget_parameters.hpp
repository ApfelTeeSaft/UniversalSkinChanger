#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlacementStatRowWidget

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function PlacementStatRowWidget.PlacementStatRowWidget_C.ExecuteUbergraph_PlacementStatRowWidget
// 0x0150 (0x0150 - 0x0000)
struct PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaBaseStatView*                    CallFunc_GetBaseStatView_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetStat_ReturnValue;                      // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortUIStatStyle                       CallFunc_GetStatStyle_ReturnValue;                 // 0x0018(0x00C0)(ConstParm)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00E0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0120(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0130(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget) == 0x000008, "Wrong alignment on PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget");
static_assert(sizeof(PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget) == 0x000150, "Wrong size on PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget");
static_assert(offsetof(PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget, EntryPoint) == 0x000000, "Member 'PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget, CallFunc_GetBaseStatView_ReturnValue) == 0x000008, "Member 'PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget::CallFunc_GetBaseStatView_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget, CallFunc_GetStat_ReturnValue) == 0x000010, "Member 'PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget::CallFunc_GetStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget, CallFunc_GetStatStyle_ReturnValue) == 0x000018, "Member 'PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget::CallFunc_GetStatStyle_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget, CallFunc_Round_ReturnValue) == 0x0000D8, "Member 'PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget, K2Node_MakeStruct_FormatArgumentData) == 0x0000E0, "Member 'PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget, K2Node_MakeArray_Array) == 0x000120, "Member 'PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget, CallFunc_Format_ReturnValue) == 0x000130, "Member 'PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000148, "Member 'PlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}
