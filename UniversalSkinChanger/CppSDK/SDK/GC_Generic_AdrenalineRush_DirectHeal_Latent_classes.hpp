#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Generic_AdrenalineRush_DirectHeal_Latent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C
// 0x0090 (0x05E8 - 0x0558)
class AGC_Generic_AdrenalineRush_DirectHeal_Latent_C final : public AFortGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         HealthSweep_SafetyOpacity_AEAC519D4817261537105281CD9192C7; // 0x0560(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HealthSweep_Sweep_AEAC519D4817261537105281CD9192C7; // 0x0564(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            HealthSweep__Direction_AEAC519D4817261537105281CD9192C7; // 0x0568(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_569[0x7];                                      // 0x0569(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     HealthSweep;                                       // 0x0570(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        My_Target;                                         // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       Duplicate_MIDs;                                    // 0x0580(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMeshComponent*                 Duplicate_Head;                                    // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Duplicate_Body;                                    // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Duplicate_Hat;                                     // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Duplicate_Backpack;                                // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Duplicate_Charm;                                   // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Duplicate_Face;                                    // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Adrenaline_Rush_Color_Outer_Direct;                // 0x05C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Adrenaline_Rush_Color_Inner_Direct;                // 0x05D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Adrenaline_Rush_WPO_Offset;                        // 0x05E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GC_Generic_AdrenalineRush_DirectHeal_Latent(int32 EntryPoint);
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void HealthSweep__UpdateFunc();
	void HealthSweep__FinishedFunc();
	void UserConstructionScript();
	void Set_Adrenaline_Rush_Visibility(bool Visible, class AFortPlayerPawn* Player_Pawn);
	void Duplicate_Meshes(class AFortPlayerPawn* Player_Pawn);
	void Destroy_Meshes();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Generic_AdrenalineRush_DirectHeal_Latent_C">();
	}
	static class AGC_Generic_AdrenalineRush_DirectHeal_Latent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Generic_AdrenalineRush_DirectHeal_Latent_C>();
	}
};
static_assert(alignof(AGC_Generic_AdrenalineRush_DirectHeal_Latent_C) == 0x000008, "Wrong alignment on AGC_Generic_AdrenalineRush_DirectHeal_Latent_C");
static_assert(sizeof(AGC_Generic_AdrenalineRush_DirectHeal_Latent_C) == 0x0005E8, "Wrong size on AGC_Generic_AdrenalineRush_DirectHeal_Latent_C");
static_assert(offsetof(AGC_Generic_AdrenalineRush_DirectHeal_Latent_C, UberGraphFrame) == 0x000558, "Member 'AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_DirectHeal_Latent_C, HealthSweep_SafetyOpacity_AEAC519D4817261537105281CD9192C7) == 0x000560, "Member 'AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::HealthSweep_SafetyOpacity_AEAC519D4817261537105281CD9192C7' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_DirectHeal_Latent_C, HealthSweep_Sweep_AEAC519D4817261537105281CD9192C7) == 0x000564, "Member 'AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::HealthSweep_Sweep_AEAC519D4817261537105281CD9192C7' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_DirectHeal_Latent_C, HealthSweep__Direction_AEAC519D4817261537105281CD9192C7) == 0x000568, "Member 'AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::HealthSweep__Direction_AEAC519D4817261537105281CD9192C7' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_DirectHeal_Latent_C, HealthSweep) == 0x000570, "Member 'AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::HealthSweep' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_DirectHeal_Latent_C, My_Target) == 0x000578, "Member 'AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::My_Target' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_DirectHeal_Latent_C, Duplicate_MIDs) == 0x000580, "Member 'AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::Duplicate_MIDs' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_DirectHeal_Latent_C, Duplicate_Head) == 0x000590, "Member 'AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::Duplicate_Head' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_DirectHeal_Latent_C, Duplicate_Body) == 0x000598, "Member 'AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::Duplicate_Body' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_DirectHeal_Latent_C, Duplicate_Hat) == 0x0005A0, "Member 'AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::Duplicate_Hat' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_DirectHeal_Latent_C, Duplicate_Backpack) == 0x0005A8, "Member 'AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::Duplicate_Backpack' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_DirectHeal_Latent_C, Duplicate_Charm) == 0x0005B0, "Member 'AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::Duplicate_Charm' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_DirectHeal_Latent_C, Duplicate_Face) == 0x0005B8, "Member 'AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::Duplicate_Face' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_DirectHeal_Latent_C, Adrenaline_Rush_Color_Outer_Direct) == 0x0005C0, "Member 'AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::Adrenaline_Rush_Color_Outer_Direct' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_DirectHeal_Latent_C, Adrenaline_Rush_Color_Inner_Direct) == 0x0005D0, "Member 'AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::Adrenaline_Rush_Color_Inner_Direct' has a wrong offset!");
static_assert(offsetof(AGC_Generic_AdrenalineRush_DirectHeal_Latent_C, Adrenaline_Rush_WPO_Offset) == 0x0005E0, "Member 'AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::Adrenaline_Rush_WPO_Offset' has a wrong offset!");

}
