#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Tunneler_TeleportNPC_TunnelSegment

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Tunneler_TeleportNPC_TunnelSegment.GCN_Tunneler_TeleportNPC_TunnelSegment_C
// 0x0010 (0x03B0 - 0x03A0)
class AGCN_Tunneler_TeleportNPC_TunnelSegment_C final : public AGameplayCueNotify_Actor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment(int32 EntryPoint);
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Tunneler_TeleportNPC_TunnelSegment_C">();
	}
	static class AGCN_Tunneler_TeleportNPC_TunnelSegment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Tunneler_TeleportNPC_TunnelSegment_C>();
	}
};
static_assert(alignof(AGCN_Tunneler_TeleportNPC_TunnelSegment_C) == 0x000008, "Wrong alignment on AGCN_Tunneler_TeleportNPC_TunnelSegment_C");
static_assert(sizeof(AGCN_Tunneler_TeleportNPC_TunnelSegment_C) == 0x0003B0, "Wrong size on AGCN_Tunneler_TeleportNPC_TunnelSegment_C");
static_assert(offsetof(AGCN_Tunneler_TeleportNPC_TunnelSegment_C, UberGraphFrame) == 0x0003A0, "Member 'AGCN_Tunneler_TeleportNPC_TunnelSegment_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Tunneler_TeleportNPC_TunnelSegment_C, DefaultSceneRoot) == 0x0003A8, "Member 'AGCN_Tunneler_TeleportNPC_TunnelSegment_C::DefaultSceneRoot' has a wrong offset!");

}
