#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemDetailsStackCounter

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemDetailsStackCounter.ItemDetailsStackCounter_C
// 0x05A0 (0x0820 - 0x0280)
class UItemDetailsStackCounter_C final : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               _SizeBox_;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BorderBase;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextCounter;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortMultiSizeBrush                    MultiSizeBase;                                     // 0x02A0(0x0330)(Edit, BlueprintVisible)
	struct FFortMultiSizeFont                     MultiSizeFont;                                     // 0x05D0(0x01E0)(Edit, BlueprintVisible)
	struct FFortMultiSizeMargin                   MultiSizeMargin;                                   // 0x07B0(0x0060)(Edit, BlueprintVisible, NoDestructor)
	EFortBrushSize                                Brush_Size;                                        // 0x0810(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_811[0x3];                                      // 0x0811(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Count;                                             // 0x0814(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AlwaysVisible;                                     // 0x0818(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TruncateValue;                                     // 0x0819(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_ItemDetailsStackCounter(int32 EntryPoint);
	void HandleQuantityOverrideChanged();
	void HandleOnItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandlePostDifferentItemToDetailSet();
	void HandlePreDifferentItemToDetailSet();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Update_Stack_Count();
	void Refresh_Visibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemDetailsStackCounter_C">();
	}
	static class UItemDetailsStackCounter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemDetailsStackCounter_C>();
	}
};
static_assert(alignof(UItemDetailsStackCounter_C) == 0x000008, "Wrong alignment on UItemDetailsStackCounter_C");
static_assert(sizeof(UItemDetailsStackCounter_C) == 0x000820, "Wrong size on UItemDetailsStackCounter_C");
static_assert(offsetof(UItemDetailsStackCounter_C, UberGraphFrame) == 0x000280, "Member 'UItemDetailsStackCounter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemDetailsStackCounter_C, _SizeBox_) == 0x000288, "Member 'UItemDetailsStackCounter_C::_SizeBox_' has a wrong offset!");
static_assert(offsetof(UItemDetailsStackCounter_C, BorderBase) == 0x000290, "Member 'UItemDetailsStackCounter_C::BorderBase' has a wrong offset!");
static_assert(offsetof(UItemDetailsStackCounter_C, TextCounter) == 0x000298, "Member 'UItemDetailsStackCounter_C::TextCounter' has a wrong offset!");
static_assert(offsetof(UItemDetailsStackCounter_C, MultiSizeBase) == 0x0002A0, "Member 'UItemDetailsStackCounter_C::MultiSizeBase' has a wrong offset!");
static_assert(offsetof(UItemDetailsStackCounter_C, MultiSizeFont) == 0x0005D0, "Member 'UItemDetailsStackCounter_C::MultiSizeFont' has a wrong offset!");
static_assert(offsetof(UItemDetailsStackCounter_C, MultiSizeMargin) == 0x0007B0, "Member 'UItemDetailsStackCounter_C::MultiSizeMargin' has a wrong offset!");
static_assert(offsetof(UItemDetailsStackCounter_C, Brush_Size) == 0x000810, "Member 'UItemDetailsStackCounter_C::Brush_Size' has a wrong offset!");
static_assert(offsetof(UItemDetailsStackCounter_C, Count) == 0x000814, "Member 'UItemDetailsStackCounter_C::Count' has a wrong offset!");
static_assert(offsetof(UItemDetailsStackCounter_C, AlwaysVisible) == 0x000818, "Member 'UItemDetailsStackCounter_C::AlwaysVisible' has a wrong offset!");
static_assert(offsetof(UItemDetailsStackCounter_C, TruncateValue) == 0x000819, "Member 'UItemDetailsStackCounter_C::TruncateValue' has a wrong offset!");

}
