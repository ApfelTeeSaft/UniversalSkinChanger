#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_GM_OnDeath_AllieDmgBuff

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCNL_GM_OnDeath_AllieDmgBuff.GCNL_GM_OnDeath_AllieDmgBuff_C.ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff
// 0x0148 (0x0148 - 0x0000)
struct GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable1;                             // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0030(0x00B8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;                   // 0x00E8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;                      // 0x00F8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           K2Node_Event_BurstCameraShakeInstance;             // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;                   // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0118(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x0128(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AEnemyPawn_Parent_C*                    K2Node_DynamicCast_AsEnemy_Pawn_Parent;            // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff) == 0x000008, "Wrong alignment on GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff");
static_assert(sizeof(GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff) == 0x000148, "Wrong size on GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff, EntryPoint) == 0x000000, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff, Temp_bool_Variable) == 0x000004, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff, Temp_struct_Variable) == 0x000008, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff, Temp_struct_Variable1) == 0x000018, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff, K2Node_Event_MyTarget) == 0x000028, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff, K2Node_Event_Parameters) == 0x000030, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff, K2Node_Event_ParticleComponents) == 0x0000E8, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff, K2Node_Event_AudioComponents) == 0x0000F8, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff, K2Node_Event_BurstCameraShakeInstance) == 0x000108, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff, K2Node_Event_BurstDecalInstance) == 0x000110, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff, K2Node_Select_Default) == 0x000118, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff, CallFunc_Conv_LinearColorToVector_ReturnValue) == 0x000128, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff::CallFunc_Conv_LinearColorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff, K2Node_DynamicCast_AsEnemy_Pawn_Parent) == 0x000138, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff::K2Node_DynamicCast_AsEnemy_Pawn_Parent' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff, K2Node_DynamicCast_bSuccess) == 0x000140, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function GCNL_GM_OnDeath_AllieDmgBuff.GCNL_GM_OnDeath_AllieDmgBuff_C.OnRemoval
// 0x00F0 (0x00F0 - 0x0000)
struct GCNL_GM_OnDeath_AllieDmgBuff_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           BurstCameraShakeInstance;                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnRemoval) == 0x000008, "Wrong alignment on GCNL_GM_OnDeath_AllieDmgBuff_C_OnRemoval");
static_assert(sizeof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnRemoval) == 0x0000F0, "Wrong size on GCNL_GM_OnDeath_AllieDmgBuff_C_OnRemoval");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnRemoval, Parameters) == 0x000008, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnRemoval, ParticleComponents) == 0x0000C0, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnRemoval, AudioComponents) == 0x0000D0, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnRemoval, BurstCameraShakeInstance) == 0x0000E0, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnRemoval, BurstDecalInstance) == 0x0000E8, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

// Function GCNL_GM_OnDeath_AllieDmgBuff.GCNL_GM_OnDeath_AllieDmgBuff_C.OnActive
// 0x0190 (0x0190 - 0x0000)
struct GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AEnemyPawn_Parent_C*                    K2Node_DynamicCast_AsEnemy_Pawn_Parent;            // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0xF];                                       // 0x00D1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam;                // 0x00E0(0x0080)(IsPlainOldData, NoDestructor)
	TArray<struct FParticleSysParam>              K2Node_MakeArray_Array;                            // 0x0160(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue1;        // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_172[0x6];                                      // 0x0172(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue2;        // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_181[0x3];                                      // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetVisualEffectQuality_ReturnValue;       // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive) == 0x000010, "Wrong alignment on GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive");
static_assert(sizeof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive) == 0x000190, "Wrong size on GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive, MyTarget) == 0x000000, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive, Parameters) == 0x000008, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive, ReturnValue) == 0x0000C0, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive, K2Node_DynamicCast_AsEnemy_Pawn_Parent) == 0x0000C8, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive::K2Node_DynamicCast_AsEnemy_Pawn_Parent' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive, K2Node_MakeStruct_ParticleSysParam) == 0x0000E0, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive::K2Node_MakeStruct_ParticleSysParam' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive, K2Node_MakeArray_Array) == 0x000160, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000170, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive, CallFunc_K2_AttachToComponent_ReturnValue1) == 0x000171, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive::CallFunc_K2_AttachToComponent_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive, CallFunc_GetGameUserSettings_ReturnValue) == 0x000178, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive, CallFunc_K2_AttachToComponent_ReturnValue2) == 0x000180, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive::CallFunc_K2_AttachToComponent_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive, CallFunc_GetVisualEffectQuality_ReturnValue) == 0x000184, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive::CallFunc_GetVisualEffectQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive, K2Node_SwitchInteger_CmpSuccess) == 0x000188, "Member 'GCNL_GM_OnDeath_AllieDmgBuff_C_OnActive::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

}
