#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CMSImageSlideShow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CMSImageSlideShow.CMSImageSlideShow_C
// 0x0018 (0x0248 - 0x0230)
class UCMSImageSlideShow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonWidgetCarousel*                  Images;                                            // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         ScrollInterview;                                   // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CMSImageSlideShow(int32 EntryPoint);
	void SetMediaURLs(const TArray<class FString>& MediaURLs);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CMSImageSlideShow_C">();
	}
	static class UCMSImageSlideShow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCMSImageSlideShow_C>();
	}
};
static_assert(alignof(UCMSImageSlideShow_C) == 0x000008, "Wrong alignment on UCMSImageSlideShow_C");
static_assert(sizeof(UCMSImageSlideShow_C) == 0x000248, "Wrong size on UCMSImageSlideShow_C");
static_assert(offsetof(UCMSImageSlideShow_C, UberGraphFrame) == 0x000230, "Member 'UCMSImageSlideShow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCMSImageSlideShow_C, Images) == 0x000238, "Member 'UCMSImageSlideShow_C::Images' has a wrong offset!");
static_assert(offsetof(UCMSImageSlideShow_C, ScrollInterview) == 0x000240, "Member 'UCMSImageSlideShow_C::ScrollInterview' has a wrong offset!");

}
