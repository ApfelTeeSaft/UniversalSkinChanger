#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_DUDEBRO_DBNO_SpawnHuskBolt

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GC_DUDEBRO_DBNO_SpawnHuskBolt.GC_DUDEBRO_DBNO_SpawnHuskBolt_C.K2_HandleGameplayCue
// 0x00C8 (0x00C8 - 0x0000)
struct GC_DUDEBRO_DBNO_SpawnHuskBolt_C_K2_HandleGameplayCue final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameplayCueEvent                             EventType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 Parameters;                                        // 0x0010(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GC_DUDEBRO_DBNO_SpawnHuskBolt_C_K2_HandleGameplayCue) == 0x000008, "Wrong alignment on GC_DUDEBRO_DBNO_SpawnHuskBolt_C_K2_HandleGameplayCue");
static_assert(sizeof(GC_DUDEBRO_DBNO_SpawnHuskBolt_C_K2_HandleGameplayCue) == 0x0000C8, "Wrong size on GC_DUDEBRO_DBNO_SpawnHuskBolt_C_K2_HandleGameplayCue");
static_assert(offsetof(GC_DUDEBRO_DBNO_SpawnHuskBolt_C_K2_HandleGameplayCue, MyTarget) == 0x000000, "Member 'GC_DUDEBRO_DBNO_SpawnHuskBolt_C_K2_HandleGameplayCue::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_DUDEBRO_DBNO_SpawnHuskBolt_C_K2_HandleGameplayCue, EventType) == 0x000008, "Member 'GC_DUDEBRO_DBNO_SpawnHuskBolt_C_K2_HandleGameplayCue::EventType' has a wrong offset!");
static_assert(offsetof(GC_DUDEBRO_DBNO_SpawnHuskBolt_C_K2_HandleGameplayCue, Parameters) == 0x000010, "Member 'GC_DUDEBRO_DBNO_SpawnHuskBolt_C_K2_HandleGameplayCue::Parameters' has a wrong offset!");

}
