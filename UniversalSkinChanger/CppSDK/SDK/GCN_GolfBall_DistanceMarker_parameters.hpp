#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_GolfBall_DistanceMarker

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_GolfBall_DistanceMarker.GCN_GolfBall_DistanceMarker_C.OnStartParticleSystemSpawned
// 0x00E8 (0x00E8 - 0x0000)
struct GCN_GolfBall_DistanceMarker_C_OnStartParticleSystemSpawned final
{
public:
	class UParticleSystemComponent*               SpawnedParticleSysComponent;                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerStateAthena*                 K2Node_DynamicCast_AsFort_Player_State_Athena;     // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetPinColor_ReturnValue;                  // 0x00D4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_GolfBall_DistanceMarker_C_OnStartParticleSystemSpawned) == 0x000008, "Wrong alignment on GCN_GolfBall_DistanceMarker_C_OnStartParticleSystemSpawned");
static_assert(sizeof(GCN_GolfBall_DistanceMarker_C_OnStartParticleSystemSpawned) == 0x0000E8, "Wrong size on GCN_GolfBall_DistanceMarker_C_OnStartParticleSystemSpawned");
static_assert(offsetof(GCN_GolfBall_DistanceMarker_C_OnStartParticleSystemSpawned, SpawnedParticleSysComponent) == 0x000000, "Member 'GCN_GolfBall_DistanceMarker_C_OnStartParticleSystemSpawned::SpawnedParticleSysComponent' has a wrong offset!");
static_assert(offsetof(GCN_GolfBall_DistanceMarker_C_OnStartParticleSystemSpawned, Parameters) == 0x000008, "Member 'GCN_GolfBall_DistanceMarker_C_OnStartParticleSystemSpawned::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_GolfBall_DistanceMarker_C_OnStartParticleSystemSpawned, CallFunc_GetOwner_ReturnValue) == 0x0000C0, "Member 'GCN_GolfBall_DistanceMarker_C_OnStartParticleSystemSpawned::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_GolfBall_DistanceMarker_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_AsFort_Player_State_Athena) == 0x0000C8, "Member 'GCN_GolfBall_DistanceMarker_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_AsFort_Player_State_Athena' has a wrong offset!");
static_assert(offsetof(GCN_GolfBall_DistanceMarker_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'GCN_GolfBall_DistanceMarker_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_GolfBall_DistanceMarker_C_OnStartParticleSystemSpawned, CallFunc_GetPinColor_ReturnValue) == 0x0000D4, "Member 'GCN_GolfBall_DistanceMarker_C_OnStartParticleSystemSpawned::CallFunc_GetPinColor_ReturnValue' has a wrong offset!");

}
