#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FrontendEventVisiblity

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C
// 0x0058 (0x0388 - 0x0330)
class ABP_FrontendEventVisiblity_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SharedRoot;                                        // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         AssetList;                                         // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                          Debug;                                             // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_359[0x7];                                      // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 EventTag;                                          // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class AActor*>                         AssetList_InvisibleonEventActive;                  // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                          EventEnabled;                                      // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_FrontendEventVisiblity(int32 EntryPoint);
	void ReceiveBeginPlay();
	void OnEventActive_D90685A246E0B23B716622898E705932(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void OnEventUpdated_D90685A246E0B23B716622898E705932(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void OnEventEnded_D90685A246E0B23B716622898E705932(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void UserConstructionScript();
	void SetAssetListVisiblity(bool Visibilty);
	void SetAssetListVisiblity_InvisibleonActive(bool Visibilty);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FrontendEventVisiblity_C">();
	}
	static class ABP_FrontendEventVisiblity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FrontendEventVisiblity_C>();
	}
};
static_assert(alignof(ABP_FrontendEventVisiblity_C) == 0x000008, "Wrong alignment on ABP_FrontendEventVisiblity_C");
static_assert(sizeof(ABP_FrontendEventVisiblity_C) == 0x000388, "Wrong size on ABP_FrontendEventVisiblity_C");
static_assert(offsetof(ABP_FrontendEventVisiblity_C, UberGraphFrame) == 0x000330, "Member 'ABP_FrontendEventVisiblity_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FrontendEventVisiblity_C, Billboard) == 0x000338, "Member 'ABP_FrontendEventVisiblity_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_FrontendEventVisiblity_C, SharedRoot) == 0x000340, "Member 'ABP_FrontendEventVisiblity_C::SharedRoot' has a wrong offset!");
static_assert(offsetof(ABP_FrontendEventVisiblity_C, AssetList) == 0x000348, "Member 'ABP_FrontendEventVisiblity_C::AssetList' has a wrong offset!");
static_assert(offsetof(ABP_FrontendEventVisiblity_C, Debug) == 0x000358, "Member 'ABP_FrontendEventVisiblity_C::Debug' has a wrong offset!");
static_assert(offsetof(ABP_FrontendEventVisiblity_C, EventTag) == 0x000360, "Member 'ABP_FrontendEventVisiblity_C::EventTag' has a wrong offset!");
static_assert(offsetof(ABP_FrontendEventVisiblity_C, AssetList_InvisibleonEventActive) == 0x000370, "Member 'ABP_FrontendEventVisiblity_C::AssetList_InvisibleonEventActive' has a wrong offset!");
static_assert(offsetof(ABP_FrontendEventVisiblity_C, EventEnabled) == 0x000380, "Member 'ABP_FrontendEventVisiblity_C::EventEnabled' has a wrong offset!");

}
