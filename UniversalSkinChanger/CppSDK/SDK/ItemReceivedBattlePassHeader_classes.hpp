#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemReceivedBattlePassHeader

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ItemReceivedHeaderSubWidgetBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemReceivedBattlePassHeader.ItemReceivedBattlePassHeader_C
// 0x0050 (0x02B8 - 0x0268)
class UItemReceivedBattlePassHeader_C final : public UItemReceivedHeaderSubWidgetBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_ItemReceivedBattlePassHeader_C;     // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       BattlepassTier;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       BattlepassUpgraded;                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_ItemCount;                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_Icon;                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_Title;                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageBattlePassIconGold;                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageBattlePassIconSilver;                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemReceivedAccountWidget_C*           ItemReceivedAccountWidget;                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Is_BattlePass;                                     // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ItemReceivedBattlePassHeader(int32 EntryPoint);
	void InitFromGiftBoxItem_BP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemReceivedBattlePassHeader_C">();
	}
	static class UItemReceivedBattlePassHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemReceivedBattlePassHeader_C>();
	}
};
static_assert(alignof(UItemReceivedBattlePassHeader_C) == 0x000008, "Wrong alignment on UItemReceivedBattlePassHeader_C");
static_assert(sizeof(UItemReceivedBattlePassHeader_C) == 0x0002B8, "Wrong size on UItemReceivedBattlePassHeader_C");
static_assert(offsetof(UItemReceivedBattlePassHeader_C, UberGraphFrame_ItemReceivedBattlePassHeader_C) == 0x000268, "Member 'UItemReceivedBattlePassHeader_C::UberGraphFrame_ItemReceivedBattlePassHeader_C' has a wrong offset!");
static_assert(offsetof(UItemReceivedBattlePassHeader_C, BattlepassTier) == 0x000270, "Member 'UItemReceivedBattlePassHeader_C::BattlepassTier' has a wrong offset!");
static_assert(offsetof(UItemReceivedBattlePassHeader_C, BattlepassUpgraded) == 0x000278, "Member 'UItemReceivedBattlePassHeader_C::BattlepassUpgraded' has a wrong offset!");
static_assert(offsetof(UItemReceivedBattlePassHeader_C, CommonTextBlock_ItemCount) == 0x000280, "Member 'UItemReceivedBattlePassHeader_C::CommonTextBlock_ItemCount' has a wrong offset!");
static_assert(offsetof(UItemReceivedBattlePassHeader_C, CommonWidgetSwitcher_Icon) == 0x000288, "Member 'UItemReceivedBattlePassHeader_C::CommonWidgetSwitcher_Icon' has a wrong offset!");
static_assert(offsetof(UItemReceivedBattlePassHeader_C, CommonWidgetSwitcher_Title) == 0x000290, "Member 'UItemReceivedBattlePassHeader_C::CommonWidgetSwitcher_Title' has a wrong offset!");
static_assert(offsetof(UItemReceivedBattlePassHeader_C, ImageBattlePassIconGold) == 0x000298, "Member 'UItemReceivedBattlePassHeader_C::ImageBattlePassIconGold' has a wrong offset!");
static_assert(offsetof(UItemReceivedBattlePassHeader_C, ImageBattlePassIconSilver) == 0x0002A0, "Member 'UItemReceivedBattlePassHeader_C::ImageBattlePassIconSilver' has a wrong offset!");
static_assert(offsetof(UItemReceivedBattlePassHeader_C, ItemReceivedAccountWidget) == 0x0002A8, "Member 'UItemReceivedBattlePassHeader_C::ItemReceivedAccountWidget' has a wrong offset!");
static_assert(offsetof(UItemReceivedBattlePassHeader_C, Is_BattlePass) == 0x0002B0, "Member 'UItemReceivedBattlePassHeader_C::Is_BattlePass' has a wrong offset!");

}
