#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemReceivedEpicMakeGoodHeader

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ItemReceivedHeaderSubWidgetBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemReceivedEpicMakeGoodHeader.ItemReceivedEpicMakeGoodHeader_C
// 0x0088 (0x02F0 - 0x0268)
class UItemReceivedEpicMakeGoodHeader_C final : public UItemReceivedHeaderSubWidgetBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_ItemReceivedEpicMakeGoodHeader_C;   // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       AssetString;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Sender;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextName;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       UserMessage;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Text;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, class FText>              AssetStrings;                                      // 0x02A0(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_ItemReceivedEpicMakeGoodHeader(int32 EntryPoint);
	void InitFromGiftBoxItem_BP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemReceivedEpicMakeGoodHeader_C">();
	}
	static class UItemReceivedEpicMakeGoodHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemReceivedEpicMakeGoodHeader_C>();
	}
};
static_assert(alignof(UItemReceivedEpicMakeGoodHeader_C) == 0x000008, "Wrong alignment on UItemReceivedEpicMakeGoodHeader_C");
static_assert(sizeof(UItemReceivedEpicMakeGoodHeader_C) == 0x0002F0, "Wrong size on UItemReceivedEpicMakeGoodHeader_C");
static_assert(offsetof(UItemReceivedEpicMakeGoodHeader_C, UberGraphFrame_ItemReceivedEpicMakeGoodHeader_C) == 0x000268, "Member 'UItemReceivedEpicMakeGoodHeader_C::UberGraphFrame_ItemReceivedEpicMakeGoodHeader_C' has a wrong offset!");
static_assert(offsetof(UItemReceivedEpicMakeGoodHeader_C, AssetString) == 0x000270, "Member 'UItemReceivedEpicMakeGoodHeader_C::AssetString' has a wrong offset!");
static_assert(offsetof(UItemReceivedEpicMakeGoodHeader_C, Image_0) == 0x000278, "Member 'UItemReceivedEpicMakeGoodHeader_C::Image_0' has a wrong offset!");
static_assert(offsetof(UItemReceivedEpicMakeGoodHeader_C, Sender) == 0x000280, "Member 'UItemReceivedEpicMakeGoodHeader_C::Sender' has a wrong offset!");
static_assert(offsetof(UItemReceivedEpicMakeGoodHeader_C, TextName) == 0x000288, "Member 'UItemReceivedEpicMakeGoodHeader_C::TextName' has a wrong offset!");
static_assert(offsetof(UItemReceivedEpicMakeGoodHeader_C, UserMessage) == 0x000290, "Member 'UItemReceivedEpicMakeGoodHeader_C::UserMessage' has a wrong offset!");
static_assert(offsetof(UItemReceivedEpicMakeGoodHeader_C, VerticalBox_Text) == 0x000298, "Member 'UItemReceivedEpicMakeGoodHeader_C::VerticalBox_Text' has a wrong offset!");
static_assert(offsetof(UItemReceivedEpicMakeGoodHeader_C, AssetStrings) == 0x0002A0, "Member 'UItemReceivedEpicMakeGoodHeader_C::AssetStrings' has a wrong offset!");

}
