#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Outlander_GroundWave_Explosion

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Outlander_GroundWave_Explosion.GCN_Outlander_GroundWave_Explosion_C
// 0x0020 (0x00A0 - 0x0080)
class UGCN_Outlander_GroundWave_Explosion_C final : public UFortGameplayCueNotify_Simple
{
public:
	class UParticleSystem*                        FXExplosion;                                       // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundExplosion;                                    // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FXScale;                                           // 0x0090(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Outlander_GroundWave_Explosion_C">();
	}
	static class UGCN_Outlander_GroundWave_Explosion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Outlander_GroundWave_Explosion_C>();
	}
};
static_assert(alignof(UGCN_Outlander_GroundWave_Explosion_C) == 0x000008, "Wrong alignment on UGCN_Outlander_GroundWave_Explosion_C");
static_assert(sizeof(UGCN_Outlander_GroundWave_Explosion_C) == 0x0000A0, "Wrong size on UGCN_Outlander_GroundWave_Explosion_C");
static_assert(offsetof(UGCN_Outlander_GroundWave_Explosion_C, FXExplosion) == 0x000080, "Member 'UGCN_Outlander_GroundWave_Explosion_C::FXExplosion' has a wrong offset!");
static_assert(offsetof(UGCN_Outlander_GroundWave_Explosion_C, SoundExplosion) == 0x000088, "Member 'UGCN_Outlander_GroundWave_Explosion_C::SoundExplosion' has a wrong offset!");
static_assert(offsetof(UGCN_Outlander_GroundWave_Explosion_C, FXScale) == 0x000090, "Member 'UGCN_Outlander_GroundWave_Explosion_C::FXScale' has a wrong offset!");

}
