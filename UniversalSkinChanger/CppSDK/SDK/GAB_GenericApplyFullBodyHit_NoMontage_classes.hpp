#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_GenericApplyFullBodyHit_NoMontage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C
// 0x0038 (0x0970 - 0x0938)
class UGAB_GenericApplyFullBodyHit_NoMontage_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0938(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 GE_TransferFullBodyHit;                            // 0x0940(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_FullBodyHitActiveEffect;                        // 0x0948(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_RestoreControlResistance;                       // 0x0950(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            ActiveImpactImmunity;                              // 0x0958(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_ImpactImmunity;                                 // 0x0960(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            ActiveFullBodyHit;                                 // 0x0968(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_GenericApplyFullBodyHit_NoMontage(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnCompleted_A0357285499905489D05F7AAD5DC6FEC();
	void OnBlendOut_A0357285499905489D05F7AAD5DC6FEC();
	void OnInterrupted_A0357285499905489D05F7AAD5DC6FEC();
	void OnCancelled_A0357285499905489D05F7AAD5DC6FEC();

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_GenericApplyFullBodyHit_NoMontage_C">();
	}
	static class UGAB_GenericApplyFullBodyHit_NoMontage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_GenericApplyFullBodyHit_NoMontage_C>();
	}
};
static_assert(alignof(UGAB_GenericApplyFullBodyHit_NoMontage_C) == 0x000008, "Wrong alignment on UGAB_GenericApplyFullBodyHit_NoMontage_C");
static_assert(sizeof(UGAB_GenericApplyFullBodyHit_NoMontage_C) == 0x000970, "Wrong size on UGAB_GenericApplyFullBodyHit_NoMontage_C");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_NoMontage_C, UberGraphFrame) == 0x000938, "Member 'UGAB_GenericApplyFullBodyHit_NoMontage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_NoMontage_C, GE_TransferFullBodyHit) == 0x000940, "Member 'UGAB_GenericApplyFullBodyHit_NoMontage_C::GE_TransferFullBodyHit' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_NoMontage_C, GE_FullBodyHitActiveEffect) == 0x000948, "Member 'UGAB_GenericApplyFullBodyHit_NoMontage_C::GE_FullBodyHitActiveEffect' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_NoMontage_C, GE_RestoreControlResistance) == 0x000950, "Member 'UGAB_GenericApplyFullBodyHit_NoMontage_C::GE_RestoreControlResistance' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_NoMontage_C, ActiveImpactImmunity) == 0x000958, "Member 'UGAB_GenericApplyFullBodyHit_NoMontage_C::ActiveImpactImmunity' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_NoMontage_C, GE_ImpactImmunity) == 0x000960, "Member 'UGAB_GenericApplyFullBodyHit_NoMontage_C::GE_ImpactImmunity' has a wrong offset!");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_NoMontage_C, ActiveFullBodyHit) == 0x000968, "Member 'UGAB_GenericApplyFullBodyHit_NoMontage_C::ActiveFullBodyHit' has a wrong offset!");

}
