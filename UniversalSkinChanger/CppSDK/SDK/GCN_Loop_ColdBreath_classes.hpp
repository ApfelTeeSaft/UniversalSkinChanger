#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Loop_ColdBreath

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Loop_ColdBreath.GCN_Loop_ColdBreath_C
// 0x0018 (0x0898 - 0x0880)
class AGCN_Loop_ColdBreath_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystem*                        LoopingSnow;                                       // 0x0888(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ActiveLoopingSnow;                                 // 0x0890(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCN_Loop_ColdBreath(int32 EntryPoint);
	void End_Overlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void Begin_Overlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Loop_ColdBreath_C">();
	}
	static class AGCN_Loop_ColdBreath_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Loop_ColdBreath_C>();
	}
};
static_assert(alignof(AGCN_Loop_ColdBreath_C) == 0x000008, "Wrong alignment on AGCN_Loop_ColdBreath_C");
static_assert(sizeof(AGCN_Loop_ColdBreath_C) == 0x000898, "Wrong size on AGCN_Loop_ColdBreath_C");
static_assert(offsetof(AGCN_Loop_ColdBreath_C, UberGraphFrame) == 0x000880, "Member 'AGCN_Loop_ColdBreath_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_ColdBreath_C, LoopingSnow) == 0x000888, "Member 'AGCN_Loop_ColdBreath_C::LoopingSnow' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_ColdBreath_C, ActiveLoopingSnow) == 0x000890, "Member 'AGCN_Loop_ColdBreath_C::ActiveLoopingSnow' has a wrong offset!");

}
