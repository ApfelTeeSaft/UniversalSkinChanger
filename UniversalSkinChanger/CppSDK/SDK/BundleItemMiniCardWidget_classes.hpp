#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BundleItemMiniCardWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BundleItemMiniCardWidget.BundleItemMiniCardWidget_C
// 0x0028 (0x0268 - 0x0240)
class UBundleItemMiniCardWidget_C final : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Show;                                              // 0x0248(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                 FortMultiSizeItemCard_0;                           // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoundBase*                             SoundOnItemCardShow;                               // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              Fort_Item;                                         // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BundleItemMiniCardWidget(int32 EntryPoint);
	void Construct();
	void Play_Anim_Minus_Show();

	class UObject* GetListItemObject() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BundleItemMiniCardWidget_C">();
	}
	static class UBundleItemMiniCardWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBundleItemMiniCardWidget_C>();
	}
};
static_assert(alignof(UBundleItemMiniCardWidget_C) == 0x000008, "Wrong alignment on UBundleItemMiniCardWidget_C");
static_assert(sizeof(UBundleItemMiniCardWidget_C) == 0x000268, "Wrong size on UBundleItemMiniCardWidget_C");
static_assert(offsetof(UBundleItemMiniCardWidget_C, UberGraphFrame) == 0x000240, "Member 'UBundleItemMiniCardWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBundleItemMiniCardWidget_C, Show) == 0x000248, "Member 'UBundleItemMiniCardWidget_C::Show' has a wrong offset!");
static_assert(offsetof(UBundleItemMiniCardWidget_C, FortMultiSizeItemCard_0) == 0x000250, "Member 'UBundleItemMiniCardWidget_C::FortMultiSizeItemCard_0' has a wrong offset!");
static_assert(offsetof(UBundleItemMiniCardWidget_C, SoundOnItemCardShow) == 0x000258, "Member 'UBundleItemMiniCardWidget_C::SoundOnItemCardShow' has a wrong offset!");
static_assert(offsetof(UBundleItemMiniCardWidget_C, Fort_Item) == 0x000260, "Member 'UBundleItemMiniCardWidget_C::Fort_Item' has a wrong offset!");

}
