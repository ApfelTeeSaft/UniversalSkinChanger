#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerReportingCategoryDropdown

#include "Basic.hpp"


namespace SDK::Params
{

// Function PlayerReportingCategoryDropdown.PlayerReportingCategoryDropdown_C.ExecuteUbergraph_PlayerReportingCategoryDropdown
// 0x0078 (0x0078 - 0x0000)
struct PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonUISubsystem*                     CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputManager*                    CallFunc_GetInputManager_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           CallFunc_GetPlayerReportingCategoryLabels_ReturnValue; // 0x0028(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0038(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconTextButton_C*                      CallFunc_Create_ReturnValue;                       // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown) == 0x000008, "Wrong alignment on PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown");
static_assert(sizeof(PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown) == 0x000078, "Wrong size on PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown");
static_assert(offsetof(PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown, EntryPoint) == 0x000000, "Member 'PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown, CallFunc_GetInputManager_ReturnValue) == 0x000010, "Member 'PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown::CallFunc_GetInputManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown, Temp_int_Array_Index_Variable) == 0x000018, "Member 'PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown, CallFunc_GetPlayerReportingCategoryLabels_ReturnValue) == 0x000028, "Member 'PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown::CallFunc_GetPlayerReportingCategoryLabels_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown, CallFunc_Array_Get_Item) == 0x000038, "Member 'PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown, CallFunc_GetPlayerController_ReturnValue) == 0x000058, "Member 'PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown, CallFunc_Create_ReturnValue) == 0x000068, "Member 'PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000070, "Member 'PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

}
