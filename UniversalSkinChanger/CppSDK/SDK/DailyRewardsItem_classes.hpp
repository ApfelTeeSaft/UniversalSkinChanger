#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyRewardsItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DailyRewardsItem.DailyRewardsItem_C
// 0x0070 (0x02B8 - 0x0248)
class UDailyRewardsItem_C final : public UFortDailyRewardsItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 CheckCheckMark;                                    // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CheckMarkShadow;                                   // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Day;                                               // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          DayBorder;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                 FortItemCard;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Claim_Surpress;                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Current_Highlight;                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageEmptyBackground;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          ItemBorder;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayTransform;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxMainContent;                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsDummyWidget;                                     // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          IsClaimed;                                         // 0x02B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          IsCurrentWidget;                                   // 0x02B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_DailyRewardsItem(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DailyRewardsItem_C">();
	}
	static class UDailyRewardsItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDailyRewardsItem_C>();
	}
};
static_assert(alignof(UDailyRewardsItem_C) == 0x000008, "Wrong alignment on UDailyRewardsItem_C");
static_assert(sizeof(UDailyRewardsItem_C) == 0x0002B8, "Wrong size on UDailyRewardsItem_C");
static_assert(offsetof(UDailyRewardsItem_C, UberGraphFrame) == 0x000248, "Member 'UDailyRewardsItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDailyRewardsItem_C, CheckCheckMark) == 0x000250, "Member 'UDailyRewardsItem_C::CheckCheckMark' has a wrong offset!");
static_assert(offsetof(UDailyRewardsItem_C, CheckMarkShadow) == 0x000258, "Member 'UDailyRewardsItem_C::CheckMarkShadow' has a wrong offset!");
static_assert(offsetof(UDailyRewardsItem_C, Day) == 0x000260, "Member 'UDailyRewardsItem_C::Day' has a wrong offset!");
static_assert(offsetof(UDailyRewardsItem_C, DayBorder) == 0x000268, "Member 'UDailyRewardsItem_C::DayBorder' has a wrong offset!");
static_assert(offsetof(UDailyRewardsItem_C, FortItemCard) == 0x000270, "Member 'UDailyRewardsItem_C::FortItemCard' has a wrong offset!");
static_assert(offsetof(UDailyRewardsItem_C, Image_0) == 0x000278, "Member 'UDailyRewardsItem_C::Image_0' has a wrong offset!");
static_assert(offsetof(UDailyRewardsItem_C, Image_Claim_Surpress) == 0x000280, "Member 'UDailyRewardsItem_C::Image_Claim_Surpress' has a wrong offset!");
static_assert(offsetof(UDailyRewardsItem_C, Image_Current_Highlight) == 0x000288, "Member 'UDailyRewardsItem_C::Image_Current_Highlight' has a wrong offset!");
static_assert(offsetof(UDailyRewardsItem_C, ImageEmptyBackground) == 0x000290, "Member 'UDailyRewardsItem_C::ImageEmptyBackground' has a wrong offset!");
static_assert(offsetof(UDailyRewardsItem_C, ItemBorder) == 0x000298, "Member 'UDailyRewardsItem_C::ItemBorder' has a wrong offset!");
static_assert(offsetof(UDailyRewardsItem_C, OverlayTransform) == 0x0002A0, "Member 'UDailyRewardsItem_C::OverlayTransform' has a wrong offset!");
static_assert(offsetof(UDailyRewardsItem_C, VerticalBoxMainContent) == 0x0002A8, "Member 'UDailyRewardsItem_C::VerticalBoxMainContent' has a wrong offset!");
static_assert(offsetof(UDailyRewardsItem_C, IsDummyWidget) == 0x0002B0, "Member 'UDailyRewardsItem_C::IsDummyWidget' has a wrong offset!");
static_assert(offsetof(UDailyRewardsItem_C, IsClaimed) == 0x0002B1, "Member 'UDailyRewardsItem_C::IsClaimed' has a wrong offset!");
static_assert(offsetof(UDailyRewardsItem_C, IsCurrentWidget) == 0x0002B2, "Member 'UDailyRewardsItem_C::IsCurrentWidget' has a wrong offset!");

}
