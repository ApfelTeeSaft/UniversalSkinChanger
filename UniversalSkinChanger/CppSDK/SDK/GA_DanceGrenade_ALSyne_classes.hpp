#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DanceGrenade_ALSyne

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_DanceGrenade_ALSyne.GA_DanceGrenade_ALSyne_C
// 0x0028 (0x0960 - 0x0938)
class UGA_DanceGrenade_ALSyne_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0938(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FActiveGameplayEffectHandle            EffectHandle;                                      // 0x0940(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           AnimMontage;                                       // 0x0948(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldUseSharedAnim;                               // 0x0950(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_951[0x3];                                      // 0x0951(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DanceGrenadeHolsterId;                             // 0x0954(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_DanceGrenade_ALSyne(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void InvalidHandle_B5171FC24972C9187F9F1CA732D2527C(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void K2_ActivateAbility();
	void OnRemoved_B5171FC24972C9187F9F1CA732D2527C(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_DanceGrenade_ALSyne_C">();
	}
	static class UGA_DanceGrenade_ALSyne_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_DanceGrenade_ALSyne_C>();
	}
};
static_assert(alignof(UGA_DanceGrenade_ALSyne_C) == 0x000008, "Wrong alignment on UGA_DanceGrenade_ALSyne_C");
static_assert(sizeof(UGA_DanceGrenade_ALSyne_C) == 0x000960, "Wrong size on UGA_DanceGrenade_ALSyne_C");
static_assert(offsetof(UGA_DanceGrenade_ALSyne_C, UberGraphFrame) == 0x000938, "Member 'UGA_DanceGrenade_ALSyne_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_DanceGrenade_ALSyne_C, EffectHandle) == 0x000940, "Member 'UGA_DanceGrenade_ALSyne_C::EffectHandle' has a wrong offset!");
static_assert(offsetof(UGA_DanceGrenade_ALSyne_C, AnimMontage) == 0x000948, "Member 'UGA_DanceGrenade_ALSyne_C::AnimMontage' has a wrong offset!");
static_assert(offsetof(UGA_DanceGrenade_ALSyne_C, ShouldUseSharedAnim) == 0x000950, "Member 'UGA_DanceGrenade_ALSyne_C::ShouldUseSharedAnim' has a wrong offset!");
static_assert(offsetof(UGA_DanceGrenade_ALSyne_C, DanceGrenadeHolsterId) == 0x000954, "Member 'UGA_DanceGrenade_ALSyne_C::DanceGrenadeHolsterId' has a wrong offset!");

}
