#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Loop_Ice_Deimos

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Loop_Ice_Deimos.GCN_Loop_Ice_Deimos_C
// 0x0008 (0x0888 - 0x0880)
class AGCN_Loop_Ice_Deimos_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GCN_Loop_Ice_Deimos(int32 EntryPoint);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Loop_Ice_Deimos_C">();
	}
	static class AGCN_Loop_Ice_Deimos_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Loop_Ice_Deimos_C>();
	}
};
static_assert(alignof(AGCN_Loop_Ice_Deimos_C) == 0x000008, "Wrong alignment on AGCN_Loop_Ice_Deimos_C");
static_assert(sizeof(AGCN_Loop_Ice_Deimos_C) == 0x000888, "Wrong size on AGCN_Loop_Ice_Deimos_C");
static_assert(offsetof(AGCN_Loop_Ice_Deimos_C, UberGraphFrame) == 0x000880, "Member 'AGCN_Loop_Ice_Deimos_C::UberGraphFrame' has a wrong offset!");

}
