#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProgressModalWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ProgressModalWidget.ProgressModalWidget_C.ExecuteUbergraph_ProgressModalWidget
// 0x0100 (0x0100 - 0x0000)
struct ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_InTitle;                              // 0x0038(0x0018)(ConstParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   K2Node_Event_InDescription;                        // 0x0060(0x0018)(ConstParm)
	struct FSlateBrush                            K2Node_Event_InIcon;                               // 0x0078(0x0088)()
};
static_assert(alignof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget) == 0x000008, "Wrong alignment on ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget");
static_assert(sizeof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget) == 0x000100, "Wrong size on ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget");
static_assert(offsetof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget, EntryPoint) == 0x000000, "Member 'ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget, K2Node_CreateDelegate_OutputDelegate1) == 0x000014, "Member 'ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget, K2Node_CreateDelegate_OutputDelegate2) == 0x000024, "Member 'ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget, K2Node_Event_InTitle) == 0x000038, "Member 'ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget::K2Node_Event_InTitle' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget, K2Node_CreateDelegate_OutputDelegate3) == 0x000050, "Member 'ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget, K2Node_Event_InDescription) == 0x000060, "Member 'ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget::K2Node_Event_InDescription' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget, K2Node_Event_InIcon) == 0x000078, "Member 'ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget::K2Node_Event_InIcon' has a wrong offset!");

// Function ProgressModalWidget.ProgressModalWidget_C.Initialize
// 0x0008 (0x0008 - 0x0000)
struct ProgressModalWidget_C_Initialize final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ProgressModalWidget_C_Initialize) == 0x000008, "Wrong alignment on ProgressModalWidget_C_Initialize");
static_assert(sizeof(ProgressModalWidget_C_Initialize) == 0x000008, "Wrong size on ProgressModalWidget_C_Initialize");
static_assert(offsetof(ProgressModalWidget_C_Initialize, CallFunc_GetUINavigationManager_ReturnValue) == 0x000000, "Member 'ProgressModalWidget_C_Initialize::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");

// Function ProgressModalWidget.ProgressModalWidget_C.OnAnalogValueChanged
// 0x02A0 (0x02A0 - 0x0000)
struct ProgressModalWidget_C_OnAnalogValueChanged final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FAnalogInputEvent                      InAnalogInputEvent;                                // 0x0038(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0078(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0130(0x00B8)()
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x01E8(0x00B8)()
};
static_assert(alignof(ProgressModalWidget_C_OnAnalogValueChanged) == 0x000008, "Wrong alignment on ProgressModalWidget_C_OnAnalogValueChanged");
static_assert(sizeof(ProgressModalWidget_C_OnAnalogValueChanged) == 0x0002A0, "Wrong size on ProgressModalWidget_C_OnAnalogValueChanged");
static_assert(offsetof(ProgressModalWidget_C_OnAnalogValueChanged, MyGeometry) == 0x000000, "Member 'ProgressModalWidget_C_OnAnalogValueChanged::MyGeometry' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_OnAnalogValueChanged, InAnalogInputEvent) == 0x000038, "Member 'ProgressModalWidget_C_OnAnalogValueChanged::InAnalogInputEvent' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_OnAnalogValueChanged, ReturnValue) == 0x000078, "Member 'ProgressModalWidget_C_OnAnalogValueChanged::ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_OnAnalogValueChanged, CallFunc_Unhandled_ReturnValue) == 0x000130, "Member 'ProgressModalWidget_C_OnAnalogValueChanged::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_OnAnalogValueChanged, CallFunc_Handled_ReturnValue) == 0x0001E8, "Member 'ProgressModalWidget_C_OnAnalogValueChanged::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function ProgressModalWidget.ProgressModalWidget_C.SetDescription
// 0x0018 (0x0018 - 0x0000)
struct ProgressModalWidget_C_SetDescription final
{
public:
	class FText                                   InDescription;                                     // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ProgressModalWidget_C_SetDescription) == 0x000008, "Wrong alignment on ProgressModalWidget_C_SetDescription");
static_assert(sizeof(ProgressModalWidget_C_SetDescription) == 0x000018, "Wrong size on ProgressModalWidget_C_SetDescription");
static_assert(offsetof(ProgressModalWidget_C_SetDescription, InDescription) == 0x000000, "Member 'ProgressModalWidget_C_SetDescription::InDescription' has a wrong offset!");

// Function ProgressModalWidget.ProgressModalWidget_C.SetIcon
// 0x0088 (0x0088 - 0x0000)
struct ProgressModalWidget_C_SetIcon final
{
public:
	struct FSlateBrush                            InIcon;                                            // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ProgressModalWidget_C_SetIcon) == 0x000008, "Wrong alignment on ProgressModalWidget_C_SetIcon");
static_assert(sizeof(ProgressModalWidget_C_SetIcon) == 0x000088, "Wrong size on ProgressModalWidget_C_SetIcon");
static_assert(offsetof(ProgressModalWidget_C_SetIcon, InIcon) == 0x000000, "Member 'ProgressModalWidget_C_SetIcon::InIcon' has a wrong offset!");

// Function ProgressModalWidget.ProgressModalWidget_C.SetTitle
// 0x0018 (0x0018 - 0x0000)
struct ProgressModalWidget_C_SetTitle final
{
public:
	class FText                                   InTitle;                                           // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ProgressModalWidget_C_SetTitle) == 0x000008, "Wrong alignment on ProgressModalWidget_C_SetTitle");
static_assert(sizeof(ProgressModalWidget_C_SetTitle) == 0x000018, "Wrong size on ProgressModalWidget_C_SetTitle");
static_assert(offsetof(ProgressModalWidget_C_SetTitle, InTitle) == 0x000000, "Member 'ProgressModalWidget_C_SetTitle::InTitle' has a wrong offset!");

}
