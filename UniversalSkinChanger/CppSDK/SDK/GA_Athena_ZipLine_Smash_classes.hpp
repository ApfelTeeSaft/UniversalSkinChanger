#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_ZipLine_Smash

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C
// 0x0040 (0x0978 - 0x0938)
class UGA_Athena_ZipLine_Smash_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0938(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0940(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UpdateIntervalForSmashVolume;                      // 0x0948(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94C[0x4];                                      // 0x094C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 StructureDamageGE;                                 // 0x0950(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ZipLine_Athena_Harness_C*           ZiplineHarness;                                    // 0x0958(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Athena_Environmental_ZipLine_C*     Zipline;                                           // 0x0960(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortCustomMovement                           DrivingCustomMovementMode;                         // 0x0968(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_969[0x3];                                      // 0x0969(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            FallImmunityGEFX;                                  // 0x096C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_ZipLine_Smash(int32 EntryPoint);
	void HandleZiplineStateChanged(bool bIsZiplining);
	void RemoveFallDamageImmunity(const struct FHitResult& Hit);
	void SurroundingsCheck();
	void HandleMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void BreakNearbyStructures(class AFortPlayerPawn* PlayerPawn_0);
	void SpawnMotor(class AActor* PlayerPawn_0);
	void CheckMotor();
	void CheckForQuestProgress();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_ZipLine_Smash_C">();
	}
	static class UGA_Athena_ZipLine_Smash_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_ZipLine_Smash_C>();
	}
};
static_assert(alignof(UGA_Athena_ZipLine_Smash_C) == 0x000008, "Wrong alignment on UGA_Athena_ZipLine_Smash_C");
static_assert(sizeof(UGA_Athena_ZipLine_Smash_C) == 0x000978, "Wrong size on UGA_Athena_ZipLine_Smash_C");
static_assert(offsetof(UGA_Athena_ZipLine_Smash_C, UberGraphFrame) == 0x000938, "Member 'UGA_Athena_ZipLine_Smash_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Smash_C, PlayerPawn) == 0x000940, "Member 'UGA_Athena_ZipLine_Smash_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Smash_C, UpdateIntervalForSmashVolume) == 0x000948, "Member 'UGA_Athena_ZipLine_Smash_C::UpdateIntervalForSmashVolume' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Smash_C, StructureDamageGE) == 0x000950, "Member 'UGA_Athena_ZipLine_Smash_C::StructureDamageGE' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Smash_C, ZiplineHarness) == 0x000958, "Member 'UGA_Athena_ZipLine_Smash_C::ZiplineHarness' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Smash_C, Zipline) == 0x000960, "Member 'UGA_Athena_ZipLine_Smash_C::Zipline' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Smash_C, DrivingCustomMovementMode) == 0x000968, "Member 'UGA_Athena_ZipLine_Smash_C::DrivingCustomMovementMode' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Smash_C, FallImmunityGEFX) == 0x00096C, "Member 'UGA_Athena_ZipLine_Smash_C::FallImmunityGEFX' has a wrong offset!");

}
