#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Trap_MountedTurret

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Trap_MountedTurret.GA_Trap_MountedTurret_C
// 0x0020 (0x0958 - 0x0938)
class UGA_Trap_MountedTurret_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0938(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortWeaponItemDefinition*              MountedTurretWeapon;                               // 0x0940(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                            PreviousWeapon;                                    // 0x0948(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        FortPawn;                                          // 0x0950(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Trap_MountedTurret(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void Removed_5AEF8B64474E58FA96707F8A7FD72F76();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Trap_MountedTurret_C">();
	}
	static class UGA_Trap_MountedTurret_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Trap_MountedTurret_C>();
	}
};
static_assert(alignof(UGA_Trap_MountedTurret_C) == 0x000008, "Wrong alignment on UGA_Trap_MountedTurret_C");
static_assert(sizeof(UGA_Trap_MountedTurret_C) == 0x000958, "Wrong size on UGA_Trap_MountedTurret_C");
static_assert(offsetof(UGA_Trap_MountedTurret_C, UberGraphFrame) == 0x000938, "Member 'UGA_Trap_MountedTurret_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Trap_MountedTurret_C, MountedTurretWeapon) == 0x000940, "Member 'UGA_Trap_MountedTurret_C::MountedTurretWeapon' has a wrong offset!");
static_assert(offsetof(UGA_Trap_MountedTurret_C, PreviousWeapon) == 0x000948, "Member 'UGA_Trap_MountedTurret_C::PreviousWeapon' has a wrong offset!");
static_assert(offsetof(UGA_Trap_MountedTurret_C, FortPawn) == 0x000950, "Member 'UGA_Trap_MountedTurret_C::FortPawn' has a wrong offset!");

}
