#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemDetailsHeaderRarityTypeText

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C
// 0x0018 (0x0298 - 0x0280)
class UItemDetailsHeaderRarityTypeText_C final : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       RarityTextBlock;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TypeTextBlock;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemDetailsHeaderRarityTypeText(int32 EntryPoint);
	void HandlePostDifferentItemToCompareWithSet();
	void HandlePostDifferentItemToDetailSet();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemDetailsHeaderRarityTypeText_C">();
	}
	static class UItemDetailsHeaderRarityTypeText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemDetailsHeaderRarityTypeText_C>();
	}
};
static_assert(alignof(UItemDetailsHeaderRarityTypeText_C) == 0x000008, "Wrong alignment on UItemDetailsHeaderRarityTypeText_C");
static_assert(sizeof(UItemDetailsHeaderRarityTypeText_C) == 0x000298, "Wrong size on UItemDetailsHeaderRarityTypeText_C");
static_assert(offsetof(UItemDetailsHeaderRarityTypeText_C, UberGraphFrame) == 0x000280, "Member 'UItemDetailsHeaderRarityTypeText_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeaderRarityTypeText_C, RarityTextBlock) == 0x000288, "Member 'UItemDetailsHeaderRarityTypeText_C::RarityTextBlock' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeaderRarityTypeText_C, TypeTextBlock) == 0x000290, "Member 'UItemDetailsHeaderRarityTypeText_C::TypeTextBlock' has a wrong offset!");

}
