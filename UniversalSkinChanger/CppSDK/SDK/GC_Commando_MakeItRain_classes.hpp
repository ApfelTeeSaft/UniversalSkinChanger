#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Commando_MakeItRain

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Commando_MakeItRain.GC_Commando_MakeItRain_C
// 0x0008 (0x0430 - 0x0428)
class AGC_Commando_MakeItRain_C final : public AFortGameplayCueNotify_Looping
{
public:
	class UParticleSystemComponent*               Spawned_Looping;                                   // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Commando_MakeItRain_C">();
	}
	static class AGC_Commando_MakeItRain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Commando_MakeItRain_C>();
	}
};
static_assert(alignof(AGC_Commando_MakeItRain_C) == 0x000008, "Wrong alignment on AGC_Commando_MakeItRain_C");
static_assert(sizeof(AGC_Commando_MakeItRain_C) == 0x000430, "Wrong size on AGC_Commando_MakeItRain_C");
static_assert(offsetof(AGC_Commando_MakeItRain_C, Spawned_Looping) == 0x000428, "Member 'AGC_Commando_MakeItRain_C::Spawned_Looping' has a wrong offset!");

}
