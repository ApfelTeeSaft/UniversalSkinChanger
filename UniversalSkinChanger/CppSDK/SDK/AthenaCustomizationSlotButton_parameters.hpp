#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCustomizationSlotButton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.ExecuteUbergraph_AthenaCustomizationSlotButton
// 0x0008 (0x0008 - 0x0000)
struct AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton) == 0x000004, "Wrong alignment on AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton");
static_assert(sizeof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton) == 0x000008, "Wrong size on AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, EntryPoint) == 0x000000, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton, K2Node_Event_IsDesignTime) == 0x000004, "Member 'AthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct AthenaCustomizationSlotButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaCustomizationSlotButton_C_PreConstruct) == 0x000001, "Wrong alignment on AthenaCustomizationSlotButton_C_PreConstruct");
static_assert(sizeof(AthenaCustomizationSlotButton_C_PreConstruct) == 0x000001, "Wrong size on AthenaCustomizationSlotButton_C_PreConstruct");
static_assert(offsetof(AthenaCustomizationSlotButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AthenaCustomizationSlotButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.SetCardSizeAndSlotImage
// 0x0230 (0x0230 - 0x0000)
struct AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage final
{
public:
	EFortItemCardSize                             CardSize;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            SlotImage;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector2D                              Temp_struct_Variable;                              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable1;                             // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable2;                             // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable3;                             // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable4;                             // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortItemCardSize                             Temp_byte_Variable;                                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Temp_struct_Variable5;                             // 0x00BC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable6;                             // 0x00C4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable7;                             // 0x00CC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable8;                             // 0x00D4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable9;                             // 0x00DC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable10;                            // 0x00E4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable11;                            // 0x00EC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortItemCardSize                             Temp_byte_Variable1;                               // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F5[0x3];                                       // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              K2Node_Select_Default;                             // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0100(0x0088)()
	struct FVector2D                              Temp_struct_Variable12;                            // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable13;                            // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortItemCardSize                             Temp_byte_Variable2;                               // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_199[0x3];                                      // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              K2Node_Select1_Default;                            // 0x019C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A4[0x4];                                      // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_Select2_Default;                            // 0x01A8(0x0088)(ConstParm)
};
static_assert(alignof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage");
static_assert(sizeof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage) == 0x000230, "Wrong size on AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, CardSize) == 0x000000, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::CardSize' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, SlotImage) == 0x000008, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::SlotImage' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, Temp_struct_Variable) == 0x000090, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, Temp_struct_Variable1) == 0x000098, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, Temp_struct_Variable2) == 0x0000A0, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, Temp_struct_Variable3) == 0x0000A8, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::Temp_struct_Variable3' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, Temp_struct_Variable4) == 0x0000B0, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::Temp_struct_Variable4' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, Temp_byte_Variable) == 0x0000B8, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, Temp_struct_Variable5) == 0x0000BC, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::Temp_struct_Variable5' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, Temp_struct_Variable6) == 0x0000C4, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::Temp_struct_Variable6' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, Temp_struct_Variable7) == 0x0000CC, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::Temp_struct_Variable7' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, Temp_struct_Variable8) == 0x0000D4, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::Temp_struct_Variable8' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, Temp_struct_Variable9) == 0x0000DC, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::Temp_struct_Variable9' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, Temp_struct_Variable10) == 0x0000E4, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::Temp_struct_Variable10' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, Temp_struct_Variable11) == 0x0000EC, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::Temp_struct_Variable11' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, Temp_byte_Variable1) == 0x0000F4, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, K2Node_Select_Default) == 0x0000F8, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, K2Node_MakeStruct_SlateBrush) == 0x000100, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, Temp_struct_Variable12) == 0x000188, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::Temp_struct_Variable12' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, Temp_struct_Variable13) == 0x000190, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::Temp_struct_Variable13' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, Temp_byte_Variable2) == 0x000198, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, K2Node_Select1_Default) == 0x00019C, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::K2Node_Select1_Default' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage, K2Node_Select2_Default) == 0x0001A8, "Member 'AthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage::K2Node_Select2_Default' has a wrong offset!");

}
