#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_NotIdling

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GAB_NotIdling.GAB_NotIdling_C.ExecuteUbergraph_GAB_NotIdling
// 0x00B0 (0x00B0 - 0x0000)
struct GAB_NotIdling_C_ExecuteUbergraph_GAB_NotIdling final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0008(0x00A8)(ConstParm)
};
static_assert(alignof(GAB_NotIdling_C_ExecuteUbergraph_GAB_NotIdling) == 0x000008, "Wrong alignment on GAB_NotIdling_C_ExecuteUbergraph_GAB_NotIdling");
static_assert(sizeof(GAB_NotIdling_C_ExecuteUbergraph_GAB_NotIdling) == 0x0000B0, "Wrong size on GAB_NotIdling_C_ExecuteUbergraph_GAB_NotIdling");
static_assert(offsetof(GAB_NotIdling_C_ExecuteUbergraph_GAB_NotIdling, EntryPoint) == 0x000000, "Member 'GAB_NotIdling_C_ExecuteUbergraph_GAB_NotIdling::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_NotIdling_C_ExecuteUbergraph_GAB_NotIdling, CallFunc_K2_CommitAbility_ReturnValue) == 0x000004, "Member 'GAB_NotIdling_C_ExecuteUbergraph_GAB_NotIdling::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_NotIdling_C_ExecuteUbergraph_GAB_NotIdling, K2Node_Event_EventData) == 0x000008, "Member 'GAB_NotIdling_C_ExecuteUbergraph_GAB_NotIdling::K2Node_Event_EventData' has a wrong offset!");

// Function GAB_NotIdling.GAB_NotIdling_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GAB_NotIdling_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GAB_NotIdling_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAB_NotIdling_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAB_NotIdling_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GAB_NotIdling_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAB_NotIdling_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAB_NotIdling_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}
