#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_C_L_BouncePlayer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCN_C_L_BouncePlayer.GCN_C_L_BouncePlayer_C.OnBurst
// 0x01C8 (0x01C8 - 0x0000)
struct GCN_C_L_BouncePlayer_C_OnBurst final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           BurstCameraShakeInstance;                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ClosestSocket;                                     // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        TargetPlayer;                                      // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;                           // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0128(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0134(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_1BC[0x4];                                      // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_C_L_BouncePlayer_C_OnBurst) == 0x000008, "Wrong alignment on GCN_C_L_BouncePlayer_C_OnBurst");
static_assert(sizeof(GCN_C_L_BouncePlayer_C_OnBurst) == 0x0001C8, "Wrong size on GCN_C_L_BouncePlayer_C_OnBurst");
static_assert(offsetof(GCN_C_L_BouncePlayer_C_OnBurst, MyTarget) == 0x000000, "Member 'GCN_C_L_BouncePlayer_C_OnBurst::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_C_L_BouncePlayer_C_OnBurst, Parameters) == 0x000008, "Member 'GCN_C_L_BouncePlayer_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_C_L_BouncePlayer_C_OnBurst, ParticleComponents) == 0x0000C0, "Member 'GCN_C_L_BouncePlayer_C_OnBurst::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_C_L_BouncePlayer_C_OnBurst, AudioComponents) == 0x0000D0, "Member 'GCN_C_L_BouncePlayer_C_OnBurst::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_C_L_BouncePlayer_C_OnBurst, BurstCameraShakeInstance) == 0x0000E0, "Member 'GCN_C_L_BouncePlayer_C_OnBurst::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_C_L_BouncePlayer_C_OnBurst, BurstDecalInstance) == 0x0000E8, "Member 'GCN_C_L_BouncePlayer_C_OnBurst::BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_C_L_BouncePlayer_C_OnBurst, ClosestSocket) == 0x0000F0, "Member 'GCN_C_L_BouncePlayer_C_OnBurst::ClosestSocket' has a wrong offset!");
static_assert(offsetof(GCN_C_L_BouncePlayer_C_OnBurst, TargetPlayer) == 0x0000F8, "Member 'GCN_C_L_BouncePlayer_C_OnBurst::TargetPlayer' has a wrong offset!");
static_assert(offsetof(GCN_C_L_BouncePlayer_C_OnBurst, CallFunc_Array_Get_Item) == 0x000100, "Member 'GCN_C_L_BouncePlayer_C_OnBurst::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_C_L_BouncePlayer_C_OnBurst, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000108, "Member 'GCN_C_L_BouncePlayer_C_OnBurst::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCN_C_L_BouncePlayer_C_OnBurst, K2Node_DynamicCast_bSuccess) == 0x000110, "Member 'GCN_C_L_BouncePlayer_C_OnBurst::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_C_L_BouncePlayer_C_OnBurst, CallFunc_BreakVector_X) == 0x000114, "Member 'GCN_C_L_BouncePlayer_C_OnBurst::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GCN_C_L_BouncePlayer_C_OnBurst, CallFunc_BreakVector_Y) == 0x000118, "Member 'GCN_C_L_BouncePlayer_C_OnBurst::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GCN_C_L_BouncePlayer_C_OnBurst, CallFunc_BreakVector_Z) == 0x00011C, "Member 'GCN_C_L_BouncePlayer_C_OnBurst::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GCN_C_L_BouncePlayer_C_OnBurst, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000120, "Member 'GCN_C_L_BouncePlayer_C_OnBurst::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_C_L_BouncePlayer_C_OnBurst, CallFunc_MakeVector_ReturnValue) == 0x000128, "Member 'GCN_C_L_BouncePlayer_C_OnBurst::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_C_L_BouncePlayer_C_OnBurst, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000134, "Member 'GCN_C_L_BouncePlayer_C_OnBurst::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GCN_C_L_BouncePlayer_C_OnBurst, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x0001C0, "Member 'GCN_C_L_BouncePlayer_C_OnBurst::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");

}
