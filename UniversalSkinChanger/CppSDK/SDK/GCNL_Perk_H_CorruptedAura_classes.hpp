#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Perk_H_CorruptedAura

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_Perk_H_CorruptedAura.GCNL_Perk_H_CorruptedAura_C
// 0x0018 (0x0898 - 0x0880)
class AGCNL_Perk_H_CorruptedAura_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               CorruptedAura_Handle;                              // 0x0888(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        P_CorruptedAura;                                   // 0x0890(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCNL_Perk_H_CorruptedAura(int32 EntryPoint);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Perk_H_CorruptedAura_C">();
	}
	static class AGCNL_Perk_H_CorruptedAura_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Perk_H_CorruptedAura_C>();
	}
};
static_assert(alignof(AGCNL_Perk_H_CorruptedAura_C) == 0x000008, "Wrong alignment on AGCNL_Perk_H_CorruptedAura_C");
static_assert(sizeof(AGCNL_Perk_H_CorruptedAura_C) == 0x000898, "Wrong size on AGCNL_Perk_H_CorruptedAura_C");
static_assert(offsetof(AGCNL_Perk_H_CorruptedAura_C, UberGraphFrame) == 0x000880, "Member 'AGCNL_Perk_H_CorruptedAura_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Perk_H_CorruptedAura_C, CorruptedAura_Handle) == 0x000888, "Member 'AGCNL_Perk_H_CorruptedAura_C::CorruptedAura_Handle' has a wrong offset!");
static_assert(offsetof(AGCNL_Perk_H_CorruptedAura_C, P_CorruptedAura) == 0x000890, "Member 'AGCNL_Perk_H_CorruptedAura_C::P_CorruptedAura' has a wrong offset!");

}
