#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_AthenaDBNORevive

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.ExecuteUbergraph_GAB_AthenaDBNORevive
// 0x0418 (0x0418 - 0x0000)
struct GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData3;                    // 0x0018(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag3;                // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData2;                    // 0x0040(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag2;                // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1;             // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0078(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable1;                             // 0x0080(0x0020)()
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData1;                    // 0x00A0(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag1;                // 0x00C0(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate2;             // 0x00C8(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x00D8(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x00F8(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate3;             // 0x0100(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable2;                             // 0x0110(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable3;                             // 0x0118(0x0020)()
	class UFortAbilityTask_WaitTargetSelection*   CallFunc_WaitTargetSelection_ReturnValue;          // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0148(0x00A8)(ConstParm)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F9[0x7];                                      // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortGameplayEffectContainerSpec       CallFunc_MakeGameplayEffectContainerSpec_ReturnValue; // 0x0200(0x0080)()
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0280(0x0040)(ContainsInstancedReference)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C9[0x3];                                      // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x02CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x02DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetSocketRotation_ReturnValue;            // 0x02E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector_NetQuantize10                  K2Node_MakeStruct_Vector_NetQuantize10;            // 0x02F0(0x000C)(NoDestructor)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x02FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X1;                           // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y1;                           // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z1;                           // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_315[0x3];                                      // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector_NetQuantizeNormal              K2Node_MakeStruct_Vector_NetQuantizeNormal;        // 0x0318(0x000C)(NoDestructor)
	uint8                                         Pad_324[0x4];                                      // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 K2Node_MakeStruct_GameplayCueParameters;           // 0x0328(0x00B8)(ContainsInstancedReference)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData4;                    // 0x03E0(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag4;                // 0x0400(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate4;             // 0x0408(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive");
static_assert(sizeof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive) == 0x000418, "Wrong size on GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, EntryPoint) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_TargetData3) == 0x000018, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_TargetData3' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_ApplicationTag3) == 0x000038, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_ApplicationTag3' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_TargetData2) == 0x000040, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_TargetData2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_ApplicationTag2) == 0x000060, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_ApplicationTag2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CreateDelegate_OutputDelegate1) == 0x000068, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, Temp_struct_Variable) == 0x000078, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, Temp_struct_Variable1) == 0x000080, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_TargetData1) == 0x0000A0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_TargetData1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_ApplicationTag1) == 0x0000C0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_ApplicationTag1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CreateDelegate_OutputDelegate2) == 0x0000C8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_TargetData) == 0x0000D8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_ApplicationTag) == 0x0000F8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CreateDelegate_OutputDelegate3) == 0x000100, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, Temp_struct_Variable2) == 0x000110, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, Temp_struct_Variable3) == 0x000118, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::Temp_struct_Variable3' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_WaitTargetSelection_ReturnValue) == 0x000138, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_WaitTargetSelection_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_IsValid_ReturnValue) == 0x000140, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_Event_EventData) == 0x000148, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue) == 0x0001F0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_IsValid_ReturnValue1) == 0x0001F8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_MakeGameplayEffectContainerSpec_ReturnValue) == 0x000200, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_MakeGameplayEffectContainerSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_GetActorInfo_ReturnValue) == 0x000280, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0002C0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_DynamicCast_bSuccess) == 0x0002C8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_GetSocketLocation_ReturnValue) == 0x0002CC, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_BreakVector_X) == 0x0002D8, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_BreakVector_Y) == 0x0002DC, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_BreakVector_Z) == 0x0002E0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_GetSocketRotation_ReturnValue) == 0x0002E4, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_GetSocketRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_MakeStruct_Vector_NetQuantize10) == 0x0002F0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_MakeStruct_Vector_NetQuantize10' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x0002FC, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_BreakVector_X1) == 0x000308, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_BreakVector_X1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_BreakVector_Y1) == 0x00030C, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_BreakVector_Y1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, CallFunc_BreakVector_Z1) == 0x000310, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::CallFunc_BreakVector_Z1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_Event_bWasCancelled) == 0x000314, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_MakeStruct_Vector_NetQuantizeNormal) == 0x000318, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_MakeStruct_Vector_NetQuantizeNormal' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_MakeStruct_GameplayCueParameters) == 0x000328, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_MakeStruct_GameplayCueParameters' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_TargetData4) == 0x0003E0, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_TargetData4' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CustomEvent_ApplicationTag4) == 0x000400, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CustomEvent_ApplicationTag4' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive, K2Node_CreateDelegate_OutputDelegate4) == 0x000408, "Member 'GAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GAB_AthenaDBNORevive_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_AthenaDBNORevive_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GAB_AthenaDBNORevive_C_K2_OnEndAbility");
static_assert(sizeof(GAB_AthenaDBNORevive_C_K2_OnEndAbility) == 0x000001, "Wrong size on GAB_AthenaDBNORevive_C_K2_OnEndAbility");
static_assert(offsetof(GAB_AthenaDBNORevive_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6
// 0x0028 (0x0028 - 0x0000)
struct GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6");
static_assert(sizeof(GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6) == 0x000028, "Wrong size on GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6, TargetData) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6, ApplicationTag) == 0x000020, "Member 'GAB_AthenaDBNORevive_C_Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6::ApplicationTag' has a wrong offset!");

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Cancelled_779E7BAA49FEAD286C5164B83CDFD609
// 0x0028 (0x0028 - 0x0000)
struct GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609");
static_assert(sizeof(GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609) == 0x000028, "Wrong size on GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609, TargetData) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609, ApplicationTag) == 0x000020, "Member 'GAB_AthenaDBNORevive_C_Cancelled_779E7BAA49FEAD286C5164B83CDFD609::ApplicationTag' has a wrong offset!");

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Completed_23712DBC45E68EA0C91A4895CBD8B3A6
// 0x0028 (0x0028 - 0x0000)
struct GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6");
static_assert(sizeof(GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6) == 0x000028, "Wrong size on GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6, TargetData) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6, ApplicationTag) == 0x000020, "Member 'GAB_AthenaDBNORevive_C_Completed_23712DBC45E68EA0C91A4895CBD8B3A6::ApplicationTag' has a wrong offset!");

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Targeted_779E7BAA49FEAD286C5164B83CDFD609
// 0x0028 (0x0028 - 0x0000)
struct GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609");
static_assert(sizeof(GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609) == 0x000028, "Wrong size on GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609, TargetData) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609, ApplicationTag) == 0x000020, "Member 'GAB_AthenaDBNORevive_C_Targeted_779E7BAA49FEAD286C5164B83CDFD609::ApplicationTag' has a wrong offset!");

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Triggered_23712DBC45E68EA0C91A4895CBD8B3A6
// 0x0028 (0x0028 - 0x0000)
struct GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6) == 0x000008, "Wrong alignment on GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6");
static_assert(sizeof(GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6) == 0x000028, "Wrong size on GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6, TargetData) == 0x000000, "Member 'GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6, ApplicationTag) == 0x000020, "Member 'GAB_AthenaDBNORevive_C_Triggered_23712DBC45E68EA0C91A4895CBD8B3A6::ApplicationTag' has a wrong offset!");

}
