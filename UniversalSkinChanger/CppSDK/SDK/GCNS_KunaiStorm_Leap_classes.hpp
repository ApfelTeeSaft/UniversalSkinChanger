#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNS_KunaiStorm_Leap

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNS_KunaiStorm_Leap.GCNS_KunaiStorm_Leap_C
// 0x0020 (0x00A0 - 0x0080)
class UGCNS_KunaiStorm_Leap_C final : public UFortGameplayCueNotify_Simple
{
public:
	class FName                                   FootSocketL;                                       // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        KunaiStormLeapEffect;                              // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FootSocketR;                                       // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   KunaiStormLeapForcedFeedback;                      // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNS_KunaiStorm_Leap_C">();
	}
	static class UGCNS_KunaiStorm_Leap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCNS_KunaiStorm_Leap_C>();
	}
};
static_assert(alignof(UGCNS_KunaiStorm_Leap_C) == 0x000008, "Wrong alignment on UGCNS_KunaiStorm_Leap_C");
static_assert(sizeof(UGCNS_KunaiStorm_Leap_C) == 0x0000A0, "Wrong size on UGCNS_KunaiStorm_Leap_C");
static_assert(offsetof(UGCNS_KunaiStorm_Leap_C, FootSocketL) == 0x000080, "Member 'UGCNS_KunaiStorm_Leap_C::FootSocketL' has a wrong offset!");
static_assert(offsetof(UGCNS_KunaiStorm_Leap_C, KunaiStormLeapEffect) == 0x000088, "Member 'UGCNS_KunaiStorm_Leap_C::KunaiStormLeapEffect' has a wrong offset!");
static_assert(offsetof(UGCNS_KunaiStorm_Leap_C, FootSocketR) == 0x000090, "Member 'UGCNS_KunaiStorm_Leap_C::FootSocketR' has a wrong offset!");
static_assert(offsetof(UGCNS_KunaiStorm_Leap_C, KunaiStormLeapForcedFeedback) == 0x000098, "Member 'UGCNS_KunaiStorm_Leap_C::KunaiStormLeapForcedFeedback' has a wrong offset!");

}
