#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Loop_ColdBreath

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_Loop_ColdBreath.GCN_Loop_ColdBreath_C.ExecuteUbergraph_GCN_Loop_ColdBreath
// 0x0288 (0x0288 - 0x0000)
struct GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* OverlappedActor, class AActor* OtherActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_OverlappedActor1;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherActor1;                    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OverlappedActor;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherActor;                     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue1;              // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue1;           // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0068(0x00B8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;                   // 0x0120(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;                      // 0x0130(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           K2Node_Event_BurstCameraShakeInstance;             // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;                   // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* OverlappedActor, class AActor* OtherActor)> K2Node_CreateDelegate_OutputDelegate1;             // 0x0150(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_169[0x3];                                      // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* OverlappedActor, class AActor* OtherActor)> K2Node_CreateDelegate_OutputDelegate2;             // 0x016C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_17C[0x4];                                      // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget1;                            // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters1;                          // 0x0188(0x00B8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents1;                  // 0x0240(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents1;                     // 0x0250(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena1;          // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x026A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26B[0x5];                                      // 0x026B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0270(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* OverlappedActor, class AActor* OtherActor)> K2Node_CreateDelegate_OutputDelegate3;             // 0x0278(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath) == 0x000008, "Wrong alignment on GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath");
static_assert(sizeof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath) == 0x000288, "Wrong size on GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, EntryPoint) == 0x000000, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_CustomEvent_OverlappedActor1) == 0x000018, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_CustomEvent_OverlappedActor1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_CustomEvent_OtherActor1) == 0x000020, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_CustomEvent_OtherActor1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_CustomEvent_OverlappedActor) == 0x000028, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_CustomEvent_OverlappedActor' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_CustomEvent_OtherActor) == 0x000030, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_CustomEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, CallFunc_GetDisplayName_ReturnValue) == 0x000038, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, CallFunc_GetDisplayName_ReturnValue1) == 0x000048, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::CallFunc_GetDisplayName_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000058, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, CallFunc_EqualEqual_StrStr_ReturnValue1) == 0x000059, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::CallFunc_EqualEqual_StrStr_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_Event_MyTarget) == 0x000060, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_Event_Parameters) == 0x000068, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_Event_ParticleComponents) == 0x000120, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_Event_AudioComponents) == 0x000130, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_Event_BurstCameraShakeInstance) == 0x000140, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_Event_BurstDecalInstance) == 0x000148, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_CreateDelegate_OutputDelegate1) == 0x000150, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x000160, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_DynamicCast_bSuccess) == 0x000168, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_CreateDelegate_OutputDelegate2) == 0x00016C, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_Event_MyTarget1) == 0x000180, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_Event_MyTarget1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_Event_Parameters1) == 0x000188, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_Event_Parameters1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_Event_ParticleComponents1) == 0x000240, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_Event_ParticleComponents1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_Event_AudioComponents1) == 0x000250, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_Event_AudioComponents1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_DynamicCast_AsPlayer_Pawn_Athena1) == 0x000260, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_DynamicCast_AsPlayer_Pawn_Athena1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_DynamicCast_bSuccess1) == 0x000268, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, CallFunc_IsValid_ReturnValue) == 0x000269, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, CallFunc_IsLocallyControlled_ReturnValue) == 0x00026A, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000270, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath, K2Node_CreateDelegate_OutputDelegate3) == 0x000278, "Member 'GCN_Loop_ColdBreath_C_ExecuteUbergraph_GCN_Loop_ColdBreath::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");

// Function GCN_Loop_ColdBreath.GCN_Loop_ColdBreath_C.End Overlap
// 0x0010 (0x0010 - 0x0000)
struct GCN_Loop_ColdBreath_C_End_Overlap final
{
public:
	class AActor*                                 OverlappedActor;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Loop_ColdBreath_C_End_Overlap) == 0x000008, "Wrong alignment on GCN_Loop_ColdBreath_C_End_Overlap");
static_assert(sizeof(GCN_Loop_ColdBreath_C_End_Overlap) == 0x000010, "Wrong size on GCN_Loop_ColdBreath_C_End_Overlap");
static_assert(offsetof(GCN_Loop_ColdBreath_C_End_Overlap, OverlappedActor) == 0x000000, "Member 'GCN_Loop_ColdBreath_C_End_Overlap::OverlappedActor' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_End_Overlap, OtherActor) == 0x000008, "Member 'GCN_Loop_ColdBreath_C_End_Overlap::OtherActor' has a wrong offset!");

// Function GCN_Loop_ColdBreath.GCN_Loop_ColdBreath_C.Begin Overlap
// 0x0010 (0x0010 - 0x0000)
struct GCN_Loop_ColdBreath_C_Begin_Overlap final
{
public:
	class AActor*                                 OverlappedActor;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Loop_ColdBreath_C_Begin_Overlap) == 0x000008, "Wrong alignment on GCN_Loop_ColdBreath_C_Begin_Overlap");
static_assert(sizeof(GCN_Loop_ColdBreath_C_Begin_Overlap) == 0x000010, "Wrong size on GCN_Loop_ColdBreath_C_Begin_Overlap");
static_assert(offsetof(GCN_Loop_ColdBreath_C_Begin_Overlap, OverlappedActor) == 0x000000, "Member 'GCN_Loop_ColdBreath_C_Begin_Overlap::OverlappedActor' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_Begin_Overlap, OtherActor) == 0x000008, "Member 'GCN_Loop_ColdBreath_C_Begin_Overlap::OtherActor' has a wrong offset!");

// Function GCN_Loop_ColdBreath.GCN_Loop_ColdBreath_C.OnRemoval
// 0x00F0 (0x00F0 - 0x0000)
struct GCN_Loop_ColdBreath_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           BurstCameraShakeInstance;                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Loop_ColdBreath_C_OnRemoval) == 0x000008, "Wrong alignment on GCN_Loop_ColdBreath_C_OnRemoval");
static_assert(sizeof(GCN_Loop_ColdBreath_C_OnRemoval) == 0x0000F0, "Wrong size on GCN_Loop_ColdBreath_C_OnRemoval");
static_assert(offsetof(GCN_Loop_ColdBreath_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCN_Loop_ColdBreath_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_OnRemoval, Parameters) == 0x000008, "Member 'GCN_Loop_ColdBreath_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_OnRemoval, ParticleComponents) == 0x0000C0, "Member 'GCN_Loop_ColdBreath_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_OnRemoval, AudioComponents) == 0x0000D0, "Member 'GCN_Loop_ColdBreath_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_OnRemoval, BurstCameraShakeInstance) == 0x0000E0, "Member 'GCN_Loop_ColdBreath_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_OnRemoval, BurstDecalInstance) == 0x0000E8, "Member 'GCN_Loop_ColdBreath_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

// Function GCN_Loop_ColdBreath.GCN_Loop_ColdBreath_C.OnLoopingStart
// 0x00E0 (0x00E0 - 0x0000)
struct GCN_Loop_ColdBreath_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(GCN_Loop_ColdBreath_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCN_Loop_ColdBreath_C_OnLoopingStart");
static_assert(sizeof(GCN_Loop_ColdBreath_C_OnLoopingStart) == 0x0000E0, "Wrong size on GCN_Loop_ColdBreath_C_OnLoopingStart");
static_assert(offsetof(GCN_Loop_ColdBreath_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCN_Loop_ColdBreath_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCN_Loop_ColdBreath_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_OnLoopingStart, ParticleComponents) == 0x0000C0, "Member 'GCN_Loop_ColdBreath_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_ColdBreath_C_OnLoopingStart, AudioComponents) == 0x0000D0, "Member 'GCN_Loop_ColdBreath_C_OnLoopingStart::AudioComponents' has a wrong offset!");

}
