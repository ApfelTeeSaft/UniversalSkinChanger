#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SquadSlotGroup

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SquadSlotGroup.SquadSlotGroup_C
// 0x0140 (0x0378 - 0x0238)
class USquadSlotGroup_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 GroupIconImage;                                    // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       GroupLabelTextBlock;                               // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               HeadingSizeBox;                                    // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         SquadSlotBox;                                      // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   GroupLabelText;                                    // 0x0268(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FMargin                                SquadSlotPadding;                                  // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	float                                         HeadingWidth;                                      // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowHeader;                                       // 0x0294(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_295[0x3];                                      // 0x0295(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   TooltipDescription;                                // 0x0298(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   TooltipHeader;                                     // 0x02B0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bShowImageInHeader;                                // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2C9[0x7];                                      // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            HeaderImageBrush;                                  // 0x02D0(0x0088)(Edit, BlueprintVisible, ExposeOnSpawn)
	UMulticastDelegateProperty_                   HandleMouseEnter;                                  // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   HandleMouseLeave;                                  // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void HandleMouseEnter__DelegateSignature();
	void HandleMouseLeave__DelegateSignature();
	void ExecuteUbergraph_SquadSlotGroup(int32 EntryPoint);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PreConstruct(bool IsDesignTime);
	void AddSquadSlots(TArray<class UWidget*>& SquadSlots);
	void Update_Squad_Slot_Visibility();
	class UWidget* Get_SquadSlotBox_ToolTipWidget();
	void SelectSquadSlot(int32 SlotIndex);
	void DarkenAllSlotsExceptIndex(int32 Index_0);
	void RemoveDarkeningFromAllSlotsInGroup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SquadSlotGroup_C">();
	}
	static class USquadSlotGroup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USquadSlotGroup_C>();
	}
};
static_assert(alignof(USquadSlotGroup_C) == 0x000008, "Wrong alignment on USquadSlotGroup_C");
static_assert(sizeof(USquadSlotGroup_C) == 0x000378, "Wrong size on USquadSlotGroup_C");
static_assert(offsetof(USquadSlotGroup_C, UberGraphFrame) == 0x000238, "Member 'USquadSlotGroup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USquadSlotGroup_C, GroupIconImage) == 0x000240, "Member 'USquadSlotGroup_C::GroupIconImage' has a wrong offset!");
static_assert(offsetof(USquadSlotGroup_C, GroupLabelTextBlock) == 0x000248, "Member 'USquadSlotGroup_C::GroupLabelTextBlock' has a wrong offset!");
static_assert(offsetof(USquadSlotGroup_C, HeadingSizeBox) == 0x000250, "Member 'USquadSlotGroup_C::HeadingSizeBox' has a wrong offset!");
static_assert(offsetof(USquadSlotGroup_C, Image_0) == 0x000258, "Member 'USquadSlotGroup_C::Image_0' has a wrong offset!");
static_assert(offsetof(USquadSlotGroup_C, SquadSlotBox) == 0x000260, "Member 'USquadSlotGroup_C::SquadSlotBox' has a wrong offset!");
static_assert(offsetof(USquadSlotGroup_C, GroupLabelText) == 0x000268, "Member 'USquadSlotGroup_C::GroupLabelText' has a wrong offset!");
static_assert(offsetof(USquadSlotGroup_C, SquadSlotPadding) == 0x000280, "Member 'USquadSlotGroup_C::SquadSlotPadding' has a wrong offset!");
static_assert(offsetof(USquadSlotGroup_C, HeadingWidth) == 0x000290, "Member 'USquadSlotGroup_C::HeadingWidth' has a wrong offset!");
static_assert(offsetof(USquadSlotGroup_C, bShowHeader) == 0x000294, "Member 'USquadSlotGroup_C::bShowHeader' has a wrong offset!");
static_assert(offsetof(USquadSlotGroup_C, TooltipDescription) == 0x000298, "Member 'USquadSlotGroup_C::TooltipDescription' has a wrong offset!");
static_assert(offsetof(USquadSlotGroup_C, TooltipHeader) == 0x0002B0, "Member 'USquadSlotGroup_C::TooltipHeader' has a wrong offset!");
static_assert(offsetof(USquadSlotGroup_C, bShowImageInHeader) == 0x0002C8, "Member 'USquadSlotGroup_C::bShowImageInHeader' has a wrong offset!");
static_assert(offsetof(USquadSlotGroup_C, HeaderImageBrush) == 0x0002D0, "Member 'USquadSlotGroup_C::HeaderImageBrush' has a wrong offset!");
static_assert(offsetof(USquadSlotGroup_C, HandleMouseEnter) == 0x000358, "Member 'USquadSlotGroup_C::HandleMouseEnter' has a wrong offset!");
static_assert(offsetof(USquadSlotGroup_C, HandleMouseLeave) == 0x000368, "Member 'USquadSlotGroup_C::HandleMouseLeave' has a wrong offset!");

}
