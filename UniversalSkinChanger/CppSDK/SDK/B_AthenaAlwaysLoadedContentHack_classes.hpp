#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_AthenaAlwaysLoadedContentHack

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_AthenaAlwaysLoadedContentHack.B_AthenaAlwaysLoadedContentHack_C
// 0x0028 (0x0358 - 0x0330)
class AB_AthenaAlwaysLoadedContentHack_C final : public AActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                        HardObjectList;                                    // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                         HardClassList;                                     // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_AthenaAlwaysLoadedContentHack_C">();
	}
	static class AB_AthenaAlwaysLoadedContentHack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_AthenaAlwaysLoadedContentHack_C>();
	}
};
static_assert(alignof(AB_AthenaAlwaysLoadedContentHack_C) == 0x000008, "Wrong alignment on AB_AthenaAlwaysLoadedContentHack_C");
static_assert(sizeof(AB_AthenaAlwaysLoadedContentHack_C) == 0x000358, "Wrong size on AB_AthenaAlwaysLoadedContentHack_C");
static_assert(offsetof(AB_AthenaAlwaysLoadedContentHack_C, DefaultSceneRoot) == 0x000330, "Member 'AB_AthenaAlwaysLoadedContentHack_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_AthenaAlwaysLoadedContentHack_C, HardObjectList) == 0x000338, "Member 'AB_AthenaAlwaysLoadedContentHack_C::HardObjectList' has a wrong offset!");
static_assert(offsetof(AB_AthenaAlwaysLoadedContentHack_C, HardClassList) == 0x000348, "Member 'AB_AthenaAlwaysLoadedContentHack_C::HardClassList' has a wrong offset!");

}
