#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabVideoOptions

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function TabVideoOptions.TabVideoOptions_C.Enable Overlay__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct TabVideoOptions_C_Enable_Overlay__DelegateSignature final
{
public:
	bool                                          Accept_Input;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TabVideoOptions_C_Enable_Overlay__DelegateSignature) == 0x000001, "Wrong alignment on TabVideoOptions_C_Enable_Overlay__DelegateSignature");
static_assert(sizeof(TabVideoOptions_C_Enable_Overlay__DelegateSignature) == 0x000001, "Wrong size on TabVideoOptions_C_Enable_Overlay__DelegateSignature");
static_assert(offsetof(TabVideoOptions_C_Enable_Overlay__DelegateSignature, Accept_Input) == 0x000000, "Member 'TabVideoOptions_C_Enable_Overlay__DelegateSignature::Accept_Input' has a wrong offset!");

// Function TabVideoOptions.TabVideoOptions_C.ExecuteUbergraph_TabVideoOptions
// 0x00F0 (0x00F0 - 0x0000)
struct TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue1;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_ComponentBoundEvent_Widget1;                // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_ComponentBoundEvent_Item;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_ComponentBoundEvent_Widget;                 // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortOptionsMenuSetting*                K2Node_DynamicCast_AsFort_Options_Menu_Setting;    // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortOptionsMenuSetting*                K2Node_DynamicCast_AsFort_Options_Menu_Setting1;   // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UOptionsMenuSetting_C*                  K2Node_DynamicCast_AsOptions_Menu_Setting;         // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue3;         // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsWindowedFullscreen;           // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66[0x2];                                       // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UOptionsMenuRotator_C*                  K2Node_DynamicCast_AsOptions_Menu_Rotator;         // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess3;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72[0x2];                                       // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(float Value)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0074(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(float Value)>                  K2Node_CreateDelegate_OutputDelegate1;             // 0x0084(0x0010)(ZeroConstructor, NoDestructor)
	float                                         K2Node_CustomEvent_Value1;                         // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Value;                          // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsWindowedFullscreen)>    K2Node_CreateDelegate_OutputDelegate2;             // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B3[0x5];                                       // 0x00B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortSettingsContext*                   CallFunc_GetContext_ReturnValue;                   // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortOptionsMenuSetting*>        CallFunc_Map_Values_Values;                        // 0x00C0(0x0010)(ZeroConstructor, ReferenceParm)
	class UFortOptionsMenuSetting*                CallFunc_Array_Get_Item;                           // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DD[0x3];                                       // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x00E0(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions) == 0x000008, "Wrong alignment on TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions");
static_assert(sizeof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions) == 0x0000F0, "Wrong size on TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, EntryPoint) == 0x000000, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::EntryPoint' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, Temp_int_Array_Index_Variable) == 0x000004, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, CallFunc_GetGameUserSettings_ReturnValue) == 0x000010, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, CallFunc_GetGameUserSettings_ReturnValue1) == 0x000018, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::CallFunc_GetGameUserSettings_ReturnValue1' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, K2Node_ComponentBoundEvent_Widget1) == 0x000020, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::K2Node_ComponentBoundEvent_Widget1' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, K2Node_ComponentBoundEvent_Item) == 0x000028, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::K2Node_ComponentBoundEvent_Item' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, K2Node_ComponentBoundEvent_Widget) == 0x000030, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::K2Node_ComponentBoundEvent_Widget' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, K2Node_DynamicCast_AsFort_Options_Menu_Setting) == 0x000038, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::K2Node_DynamicCast_AsFort_Options_Menu_Setting' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, K2Node_DynamicCast_AsFort_Options_Menu_Setting1) == 0x000048, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::K2Node_DynamicCast_AsFort_Options_Menu_Setting1' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, K2Node_DynamicCast_bSuccess1) == 0x000050, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000051, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, K2Node_DynamicCast_AsOptions_Menu_Setting) == 0x000058, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::K2Node_DynamicCast_AsOptions_Menu_Setting' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, K2Node_DynamicCast_bSuccess2) == 0x000060, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, CallFunc_EqualEqual_ByteByte_ReturnValue1) == 0x000061, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::CallFunc_EqualEqual_ByteByte_ReturnValue1' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, CallFunc_EqualEqual_ByteByte_ReturnValue2) == 0x000062, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::CallFunc_EqualEqual_ByteByte_ReturnValue2' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, CallFunc_EqualEqual_ByteByte_ReturnValue3) == 0x000063, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::CallFunc_EqualEqual_ByteByte_ReturnValue3' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, CallFunc_BooleanOR_ReturnValue) == 0x000064, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, K2Node_CustomEvent_IsWindowedFullscreen) == 0x000065, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::K2Node_CustomEvent_IsWindowedFullscreen' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, K2Node_DynamicCast_AsOptions_Menu_Rotator) == 0x000068, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::K2Node_DynamicCast_AsOptions_Menu_Rotator' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, K2Node_DynamicCast_bSuccess3) == 0x000070, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::K2Node_DynamicCast_bSuccess3' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, CallFunc_Not_PreBool_ReturnValue) == 0x000071, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, K2Node_CreateDelegate_OutputDelegate) == 0x000074, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, K2Node_CreateDelegate_OutputDelegate1) == 0x000084, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, K2Node_CustomEvent_Value1) == 0x000094, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::K2Node_CustomEvent_Value1' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, K2Node_CustomEvent_Value) == 0x000098, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, Temp_byte_Variable) == 0x00009C, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, K2Node_CreateDelegate_OutputDelegate2) == 0x0000A0, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, Temp_byte_Variable1) == 0x0000B0, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, Temp_bool_Variable) == 0x0000B1, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, K2Node_Select_Default) == 0x0000B2, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, CallFunc_GetContext_ReturnValue) == 0x0000B8, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, CallFunc_Map_Values_Values) == 0x0000C0, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, CallFunc_Array_Length_ReturnValue) == 0x0000D8, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, CallFunc_Less_IntInt_ReturnValue) == 0x0000DC, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions, K2Node_CreateDelegate_OutputDelegate3) == 0x0000E0, "Member 'TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");

// Function TabVideoOptions.TabVideoOptions_C.Setting Value Changed
// 0x0004 (0x0004 - 0x0000)
struct TabVideoOptions_C_Setting_Value_Changed final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TabVideoOptions_C_Setting_Value_Changed) == 0x000004, "Wrong alignment on TabVideoOptions_C_Setting_Value_Changed");
static_assert(sizeof(TabVideoOptions_C_Setting_Value_Changed) == 0x000004, "Wrong size on TabVideoOptions_C_Setting_Value_Changed");
static_assert(offsetof(TabVideoOptions_C_Setting_Value_Changed, Value) == 0x000000, "Member 'TabVideoOptions_C_Setting_Value_Changed::Value' has a wrong offset!");

// Function TabVideoOptions.TabVideoOptions_C.Quality Changed
// 0x0004 (0x0004 - 0x0000)
struct TabVideoOptions_C_Quality_Changed final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TabVideoOptions_C_Quality_Changed) == 0x000004, "Wrong alignment on TabVideoOptions_C_Quality_Changed");
static_assert(sizeof(TabVideoOptions_C_Quality_Changed) == 0x000004, "Wrong size on TabVideoOptions_C_Quality_Changed");
static_assert(offsetof(TabVideoOptions_C_Quality_Changed, Value) == 0x000000, "Member 'TabVideoOptions_C_Quality_Changed::Value' has a wrong offset!");

// Function TabVideoOptions.TabVideoOptions_C.Window Mode Changed
// 0x0001 (0x0001 - 0x0000)
struct TabVideoOptions_C_Window_Mode_Changed final
{
public:
	bool                                          IsWindowedFullscreen;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TabVideoOptions_C_Window_Mode_Changed) == 0x000001, "Wrong alignment on TabVideoOptions_C_Window_Mode_Changed");
static_assert(sizeof(TabVideoOptions_C_Window_Mode_Changed) == 0x000001, "Wrong size on TabVideoOptions_C_Window_Mode_Changed");
static_assert(offsetof(TabVideoOptions_C_Window_Mode_Changed, IsWindowedFullscreen) == 0x000000, "Member 'TabVideoOptions_C_Window_Mode_Changed::IsWindowedFullscreen' has a wrong offset!");

// Function TabVideoOptions.TabVideoOptions_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct TabVideoOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature final
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            Widget;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TabVideoOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature) == 0x000008, "Wrong alignment on TabVideoOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature");
static_assert(sizeof(TabVideoOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature) == 0x000010, "Wrong size on TabVideoOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature");
static_assert(offsetof(TabVideoOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature, Item) == 0x000000, "Member 'TabVideoOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature::Item' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature, Widget) == 0x000008, "Member 'TabVideoOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature::Widget' has a wrong offset!");

// Function TabVideoOptions.TabVideoOptions_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct TabVideoOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature final
{
public:
	class UUserWidget*                            Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TabVideoOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature) == 0x000008, "Wrong alignment on TabVideoOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature");
static_assert(sizeof(TabVideoOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature) == 0x000008, "Wrong size on TabVideoOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature");
static_assert(offsetof(TabVideoOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature, Widget) == 0x000000, "Member 'TabVideoOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature::Widget' has a wrong offset!");

// Function TabVideoOptions.TabVideoOptions_C.Update Qualities
// 0x0050 (0x0050 - 0x0000)
struct TabVideoOptions_C_Update_Qualities final
{
public:
	TArray<class FText>                           NewLocalVar_0;                                     // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	class UFortSettingsContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMaxQualityLevel_ReturnValue;           // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESettingType                                  Temp_byte_Variable;                                // 0x002C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortOptionsMenuSetting*                CallFunc_Map_Find_Value;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOptionsMenuRowSelector_C*              K2Node_DynamicCast_AsOptions_Menu_Row_Selector;    // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TabVideoOptions_C_Update_Qualities) == 0x000008, "Wrong alignment on TabVideoOptions_C_Update_Qualities");
static_assert(sizeof(TabVideoOptions_C_Update_Qualities) == 0x000050, "Wrong size on TabVideoOptions_C_Update_Qualities");
static_assert(offsetof(TabVideoOptions_C_Update_Qualities, NewLocalVar_0) == 0x000000, "Member 'TabVideoOptions_C_Update_Qualities::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_Update_Qualities, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'TabVideoOptions_C_Update_Qualities::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_Update_Qualities, Temp_int_Variable) == 0x000018, "Member 'TabVideoOptions_C_Update_Qualities::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_Update_Qualities, CallFunc_GetMaxQualityLevel_ReturnValue) == 0x00001C, "Member 'TabVideoOptions_C_Update_Qualities::CallFunc_GetMaxQualityLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_Update_Qualities, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'TabVideoOptions_C_Update_Qualities::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_Update_Qualities, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'TabVideoOptions_C_Update_Qualities::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_Update_Qualities, CallFunc_Add_IntInt_ReturnValue1) == 0x000028, "Member 'TabVideoOptions_C_Update_Qualities::CallFunc_Add_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_Update_Qualities, Temp_byte_Variable) == 0x00002C, "Member 'TabVideoOptions_C_Update_Qualities::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_Update_Qualities, CallFunc_Map_Find_Value) == 0x000030, "Member 'TabVideoOptions_C_Update_Qualities::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_Update_Qualities, CallFunc_Map_Find_ReturnValue) == 0x000038, "Member 'TabVideoOptions_C_Update_Qualities::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_Update_Qualities, K2Node_DynamicCast_AsOptions_Menu_Row_Selector) == 0x000040, "Member 'TabVideoOptions_C_Update_Qualities::K2Node_DynamicCast_AsOptions_Menu_Row_Selector' has a wrong offset!");
static_assert(offsetof(TabVideoOptions_C_Update_Qualities, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'TabVideoOptions_C_Update_Qualities::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
