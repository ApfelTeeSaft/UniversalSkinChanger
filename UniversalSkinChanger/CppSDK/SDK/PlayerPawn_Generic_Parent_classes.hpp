#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerPawn_Generic_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C
// 0x00E0 (0x21E0 - 0x2100)
#pragma pack(push, 0x1)
class alignas(0x10) APlayerPawn_Generic_Parent_C : public AFortPlayerPawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2100(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UMaterialInterface*>             Default_Weapon_Materials;                          // 0x2108(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnBackpackMaterials;                             // 0x2118(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnHatMaterials;                                  // 0x2128(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnHeadMaterials;                                 // 0x2138(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnBodyMaterials;                                 // 0x2148(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnCharmMaterials;                                // 0x2158(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnFaceMaterials;                                 // 0x2168(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>             PawnLegsMaterials;                                 // 0x2178(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>             PawnTorsoMaterials;                                // 0x2188(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPostProcessComponent*                  PlayerPostProcessFX;                               // 0x2198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>         SkeletalMeshes;                                    // 0x21A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnMaterials_ALL;                                 // 0x21B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         WaterCounter;                                      // 0x21C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21C4[0x4];                                     // 0x21C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CurrentWaterMeshActor;                             // 0x21C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInWater;                                         // 0x21D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21D1[0x3];                                     // 0x21D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Time_when_you_ll_be_able_to_splash_again;          // 0x21D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PlayerPawn_Generic_Parent(int32 EntryPoint);
	void Entered_Water_Volume();
	void Player_Creates_a_Splash(const struct FTransform& NewTransform);
	void ReceiveBeginPlay();
	void ReinitializeWeaponMaterials();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerPawn_Generic_Parent_C">();
	}
	static class APlayerPawn_Generic_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerPawn_Generic_Parent_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(APlayerPawn_Generic_Parent_C) == 0x000010, "Wrong alignment on APlayerPawn_Generic_Parent_C");
static_assert(sizeof(APlayerPawn_Generic_Parent_C) == 0x0021E0, "Wrong size on APlayerPawn_Generic_Parent_C");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, UberGraphFrame) == 0x002100, "Member 'APlayerPawn_Generic_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, Default_Weapon_Materials) == 0x002108, "Member 'APlayerPawn_Generic_Parent_C::Default_Weapon_Materials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnBackpackMaterials) == 0x002118, "Member 'APlayerPawn_Generic_Parent_C::PawnBackpackMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnHatMaterials) == 0x002128, "Member 'APlayerPawn_Generic_Parent_C::PawnHatMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnHeadMaterials) == 0x002138, "Member 'APlayerPawn_Generic_Parent_C::PawnHeadMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnBodyMaterials) == 0x002148, "Member 'APlayerPawn_Generic_Parent_C::PawnBodyMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnCharmMaterials) == 0x002158, "Member 'APlayerPawn_Generic_Parent_C::PawnCharmMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnFaceMaterials) == 0x002168, "Member 'APlayerPawn_Generic_Parent_C::PawnFaceMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnLegsMaterials) == 0x002178, "Member 'APlayerPawn_Generic_Parent_C::PawnLegsMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnTorsoMaterials) == 0x002188, "Member 'APlayerPawn_Generic_Parent_C::PawnTorsoMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PlayerPostProcessFX) == 0x002198, "Member 'APlayerPawn_Generic_Parent_C::PlayerPostProcessFX' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, SkeletalMeshes) == 0x0021A0, "Member 'APlayerPawn_Generic_Parent_C::SkeletalMeshes' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnMaterials_ALL) == 0x0021B0, "Member 'APlayerPawn_Generic_Parent_C::PawnMaterials_ALL' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, WaterCounter) == 0x0021C0, "Member 'APlayerPawn_Generic_Parent_C::WaterCounter' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, CurrentWaterMeshActor) == 0x0021C8, "Member 'APlayerPawn_Generic_Parent_C::CurrentWaterMeshActor' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, IsInWater) == 0x0021D0, "Member 'APlayerPawn_Generic_Parent_C::IsInWater' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, Time_when_you_ll_be_able_to_splash_again) == 0x0021D4, "Member 'APlayerPawn_Generic_Parent_C::Time_when_you_ll_be_able_to_splash_again' has a wrong offset!");

}
