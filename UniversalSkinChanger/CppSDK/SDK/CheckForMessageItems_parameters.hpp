#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CheckForMessageItems

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function CheckForMessageItems.CheckForMessageItems_C.ExecuteUbergraph_CheckForMessageItems
// 0x0048 (0x0048 - 0x0000)
struct CheckForMessageItems_C_ExecuteUbergraph_CheckForMessageItems final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortScriptedActionParams              K2Node_Event_Params;                               // 0x0008(0x0030)(ConstParm, NoDestructor)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPendingLogout_ReturnValue;              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CheckForMessageItems_C_ExecuteUbergraph_CheckForMessageItems) == 0x000008, "Wrong alignment on CheckForMessageItems_C_ExecuteUbergraph_CheckForMessageItems");
static_assert(sizeof(CheckForMessageItems_C_ExecuteUbergraph_CheckForMessageItems) == 0x000048, "Wrong size on CheckForMessageItems_C_ExecuteUbergraph_CheckForMessageItems");
static_assert(offsetof(CheckForMessageItems_C_ExecuteUbergraph_CheckForMessageItems, EntryPoint) == 0x000000, "Member 'CheckForMessageItems_C_ExecuteUbergraph_CheckForMessageItems::EntryPoint' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ExecuteUbergraph_CheckForMessageItems, K2Node_Event_Params) == 0x000008, "Member 'CheckForMessageItems_C_ExecuteUbergraph_CheckForMessageItems::K2Node_Event_Params' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ExecuteUbergraph_CheckForMessageItems, CallFunc_GetContext_ReturnValue) == 0x000038, "Member 'CheckForMessageItems_C_ExecuteUbergraph_CheckForMessageItems::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ExecuteUbergraph_CheckForMessageItems, CallFunc_IsPendingLogout_ReturnValue) == 0x000040, "Member 'CheckForMessageItems_C_ExecuteUbergraph_CheckForMessageItems::CallFunc_IsPendingLogout_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ExecuteUbergraph_CheckForMessageItems, CallFunc_Not_PreBool_ReturnValue) == 0x000041, "Member 'CheckForMessageItems_C_ExecuteUbergraph_CheckForMessageItems::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function CheckForMessageItems.CheckForMessageItems_C.Execute
// 0x0030 (0x0030 - 0x0000)
struct CheckForMessageItems_C_Execute final
{
public:
	struct FFortScriptedActionParams              Params_0;                                          // 0x0000(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(CheckForMessageItems_C_Execute) == 0x000008, "Wrong alignment on CheckForMessageItems_C_Execute");
static_assert(sizeof(CheckForMessageItems_C_Execute) == 0x000030, "Wrong size on CheckForMessageItems_C_Execute");
static_assert(offsetof(CheckForMessageItems_C_Execute, Params_0) == 0x000000, "Member 'CheckForMessageItems_C_Execute::Params_0' has a wrong offset!");

// Function CheckForMessageItems.CheckForMessageItems_C.ShowMessage
// 0x0080 (0x0080 - 0x0000)
struct CheckForMessageItems_C_ShowMessage final
{
public:
	class UFortGiftBoxItemDefinition*             CallFunc_GetGiftBoxDefinition_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGiftBoxItemDefinition*             CallFunc_GetGiftBoxDefinition_ReturnValue1;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortActivatablePanel*                  K2Node_DynamicCast_AsFort_Activatable_Panel;       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UCommonActivatablePanel* Panel)> K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInZone_ReturnValue;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue1;                  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue2;                  // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue1;          // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGiftBoxItem*                       CallFunc_GetNextMessage_ReturnValue;               // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasActiveModalWidget_ReturnValue;         // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInViewport_ReturnValue;                 // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CheckForMessageItems_C_ShowMessage) == 0x000008, "Wrong alignment on CheckForMessageItems_C_ShowMessage");
static_assert(sizeof(CheckForMessageItems_C_ShowMessage) == 0x000080, "Wrong size on CheckForMessageItems_C_ShowMessage");
static_assert(offsetof(CheckForMessageItems_C_ShowMessage, CallFunc_GetGiftBoxDefinition_ReturnValue) == 0x000000, "Member 'CheckForMessageItems_C_ShowMessage::CallFunc_GetGiftBoxDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ShowMessage, CallFunc_GetGiftBoxDefinition_ReturnValue1) == 0x000008, "Member 'CheckForMessageItems_C_ShowMessage::CallFunc_GetGiftBoxDefinition_ReturnValue1' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ShowMessage, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'CheckForMessageItems_C_ShowMessage::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ShowMessage, CallFunc_Create_ReturnValue) == 0x000018, "Member 'CheckForMessageItems_C_ShowMessage::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ShowMessage, K2Node_DynamicCast_AsFort_Activatable_Panel) == 0x000020, "Member 'CheckForMessageItems_C_ShowMessage::K2Node_DynamicCast_AsFort_Activatable_Panel' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ShowMessage, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CheckForMessageItems_C_ShowMessage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ShowMessage, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'CheckForMessageItems_C_ShowMessage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ShowMessage, CallFunc_GetContext_ReturnValue) == 0x000040, "Member 'CheckForMessageItems_C_ShowMessage::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ShowMessage, CallFunc_IsInZone_ReturnValue) == 0x000048, "Member 'CheckForMessageItems_C_ShowMessage::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ShowMessage, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000050, "Member 'CheckForMessageItems_C_ShowMessage::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ShowMessage, CallFunc_GetContext_ReturnValue1) == 0x000058, "Member 'CheckForMessageItems_C_ShowMessage::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ShowMessage, CallFunc_GetContext_ReturnValue2) == 0x000060, "Member 'CheckForMessageItems_C_ShowMessage::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ShowMessage, CallFunc_GetUIManagerWidget_ReturnValue1) == 0x000068, "Member 'CheckForMessageItems_C_ShowMessage::CallFunc_GetUIManagerWidget_ReturnValue1' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ShowMessage, CallFunc_GetNextMessage_ReturnValue) == 0x000070, "Member 'CheckForMessageItems_C_ShowMessage::CallFunc_GetNextMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ShowMessage, CallFunc_HasActiveModalWidget_ReturnValue) == 0x000078, "Member 'CheckForMessageItems_C_ShowMessage::CallFunc_HasActiveModalWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ShowMessage, CallFunc_Not_PreBool_ReturnValue) == 0x000079, "Member 'CheckForMessageItems_C_ShowMessage::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ShowMessage, CallFunc_IsInViewport_ReturnValue) == 0x00007A, "Member 'CheckForMessageItems_C_ShowMessage::CallFunc_IsInViewport_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ShowMessage, CallFunc_BooleanOR_ReturnValue) == 0x00007B, "Member 'CheckForMessageItems_C_ShowMessage::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckForMessageItems_C_ShowMessage, CallFunc_IsValid_ReturnValue) == 0x00007C, "Member 'CheckForMessageItems_C_ShowMessage::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CheckForMessageItems.CheckForMessageItems_C.Closed
// 0x0008 (0x0008 - 0x0000)
struct CheckForMessageItems_C_Closed final
{
public:
	class UCommonActivatablePanel*                Closed_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CheckForMessageItems_C_Closed) == 0x000008, "Wrong alignment on CheckForMessageItems_C_Closed");
static_assert(sizeof(CheckForMessageItems_C_Closed) == 0x000008, "Wrong size on CheckForMessageItems_C_Closed");
static_assert(offsetof(CheckForMessageItems_C_Closed, Closed_0) == 0x000000, "Member 'CheckForMessageItems_C_Closed::Closed_0' has a wrong offset!");

}
