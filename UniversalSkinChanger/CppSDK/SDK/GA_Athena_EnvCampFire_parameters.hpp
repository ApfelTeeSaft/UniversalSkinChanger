#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_EnvCampFire

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.ExecuteUbergraph_GA_Athena_EnvCampFire
// 0x01A0 (0x01A0 - 0x0000)
struct GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0008(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable1;                             // 0x0048(0x0020)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectContainer_ReturnValue; // 0x0068(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class UFortAbilityTask_WaitTargetSelection*   CallFunc_WaitTargetSelection_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86[0x2];                                       // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData1;                    // 0x0090(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag1;                // 0x00B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AB_BGA_Athena_EnvCampFire_C*            K2Node_DynamicCast_AsB_BGA_Athena_Env_Camp_Fire;   // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x2];                                       // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x00C4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D5[0x3];                                       // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00D8(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x00E8(0x00A8)(ConstParm)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0190(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire) == 0x000008, "Wrong alignment on GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire");
static_assert(sizeof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire) == 0x0001A0, "Wrong size on GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, EntryPoint) == 0x000000, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, K2Node_CustomEvent_TargetData) == 0x000008, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, K2Node_CustomEvent_ApplicationTag) == 0x000028, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, Temp_struct_Variable) == 0x000040, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, Temp_struct_Variable1) == 0x000048, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, CallFunc_ApplyGameplayEffectContainer_ReturnValue) == 0x000068, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::CallFunc_ApplyGameplayEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, CallFunc_WaitTargetSelection_ReturnValue) == 0x000078, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::CallFunc_WaitTargetSelection_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, Temp_int_Variable) == 0x000080, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, CallFunc_IsValid_ReturnValue) == 0x000084, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, K2Node_Event_bWasCancelled) == 0x000085, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000088, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, K2Node_CustomEvent_TargetData1) == 0x000090, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::K2Node_CustomEvent_TargetData1' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, K2Node_CustomEvent_ApplicationTag1) == 0x0000B0, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::K2Node_CustomEvent_ApplicationTag1' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, K2Node_DynamicCast_AsB_BGA_Athena_Env_Camp_Fire) == 0x0000B8, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::K2Node_DynamicCast_AsB_BGA_Athena_Env_Camp_Fire' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, CallFunc_IsValid_ReturnValue1) == 0x0000C1, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, K2Node_CreateDelegate_OutputDelegate1) == 0x0000C4, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000D4, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000D8, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, CallFunc_Add_IntInt_ReturnValue) == 0x0000E0, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, K2Node_Event_EventData) == 0x0000E8, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire, K2Node_CreateDelegate_OutputDelegate2) == 0x000190, "Member 'GA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GA_Athena_EnvCampFire_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Athena_EnvCampFire_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_Athena_EnvCampFire_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Athena_EnvCampFire_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GA_Athena_EnvCampFire_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Athena_EnvCampFire_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Athena_EnvCampFire_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Athena_EnvCampFire_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_EnvCampFire_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Athena_EnvCampFire_C_K2_OnEndAbility");
static_assert(sizeof(GA_Athena_EnvCampFire_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Athena_EnvCampFire_C_K2_OnEndAbility");
static_assert(offsetof(GA_Athena_EnvCampFire_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Athena_EnvCampFire_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.Targeted_EDAB937443020D47385625B06E892DF0
// 0x0028 (0x0028 - 0x0000)
struct GA_Athena_EnvCampFire_C_Targeted_EDAB937443020D47385625B06E892DF0 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_EnvCampFire_C_Targeted_EDAB937443020D47385625B06E892DF0) == 0x000008, "Wrong alignment on GA_Athena_EnvCampFire_C_Targeted_EDAB937443020D47385625B06E892DF0");
static_assert(sizeof(GA_Athena_EnvCampFire_C_Targeted_EDAB937443020D47385625B06E892DF0) == 0x000028, "Wrong size on GA_Athena_EnvCampFire_C_Targeted_EDAB937443020D47385625B06E892DF0");
static_assert(offsetof(GA_Athena_EnvCampFire_C_Targeted_EDAB937443020D47385625B06E892DF0, TargetData) == 0x000000, "Member 'GA_Athena_EnvCampFire_C_Targeted_EDAB937443020D47385625B06E892DF0::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_Targeted_EDAB937443020D47385625B06E892DF0, ApplicationTag) == 0x000020, "Member 'GA_Athena_EnvCampFire_C_Targeted_EDAB937443020D47385625B06E892DF0::ApplicationTag' has a wrong offset!");

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.Cancelled_EDAB937443020D47385625B06E892DF0
// 0x0028 (0x0028 - 0x0000)
struct GA_Athena_EnvCampFire_C_Cancelled_EDAB937443020D47385625B06E892DF0 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_EnvCampFire_C_Cancelled_EDAB937443020D47385625B06E892DF0) == 0x000008, "Wrong alignment on GA_Athena_EnvCampFire_C_Cancelled_EDAB937443020D47385625B06E892DF0");
static_assert(sizeof(GA_Athena_EnvCampFire_C_Cancelled_EDAB937443020D47385625B06E892DF0) == 0x000028, "Wrong size on GA_Athena_EnvCampFire_C_Cancelled_EDAB937443020D47385625B06E892DF0");
static_assert(offsetof(GA_Athena_EnvCampFire_C_Cancelled_EDAB937443020D47385625B06E892DF0, TargetData) == 0x000000, "Member 'GA_Athena_EnvCampFire_C_Cancelled_EDAB937443020D47385625B06E892DF0::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_Cancelled_EDAB937443020D47385625B06E892DF0, ApplicationTag) == 0x000020, "Member 'GA_Athena_EnvCampFire_C_Cancelled_EDAB937443020D47385625B06E892DF0::ApplicationTag' has a wrong offset!");

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.SetCustomTargetingTrans
// 0x0070 (0x0070 - 0x0000)
struct GA_Athena_EnvCampFire_C_SetCustomTargetingTrans final
{
public:
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_X;                            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0040(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_EnvCampFire_C_SetCustomTargetingTrans) == 0x000010, "Wrong alignment on GA_Athena_EnvCampFire_C_SetCustomTargetingTrans");
static_assert(sizeof(GA_Athena_EnvCampFire_C_SetCustomTargetingTrans) == 0x000070, "Wrong size on GA_Athena_EnvCampFire_C_SetCustomTargetingTrans");
static_assert(offsetof(GA_Athena_EnvCampFire_C_SetCustomTargetingTrans, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000000, "Member 'GA_Athena_EnvCampFire_C_SetCustomTargetingTrans::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_SetCustomTargetingTrans, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'GA_Athena_EnvCampFire_C_SetCustomTargetingTrans::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_SetCustomTargetingTrans, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000014, "Member 'GA_Athena_EnvCampFire_C_SetCustomTargetingTrans::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_SetCustomTargetingTrans, CallFunc_BreakVector_X) == 0x000020, "Member 'GA_Athena_EnvCampFire_C_SetCustomTargetingTrans::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_SetCustomTargetingTrans, CallFunc_BreakVector_Y) == 0x000024, "Member 'GA_Athena_EnvCampFire_C_SetCustomTargetingTrans::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_SetCustomTargetingTrans, CallFunc_BreakVector_Z) == 0x000028, "Member 'GA_Athena_EnvCampFire_C_SetCustomTargetingTrans::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_SetCustomTargetingTrans, CallFunc_Add_FloatFloat_ReturnValue) == 0x00002C, "Member 'GA_Athena_EnvCampFire_C_SetCustomTargetingTrans::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_SetCustomTargetingTrans, CallFunc_MakeVector_ReturnValue) == 0x000030, "Member 'GA_Athena_EnvCampFire_C_SetCustomTargetingTrans::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_SetCustomTargetingTrans, CallFunc_MakeTransform_ReturnValue) == 0x000040, "Member 'GA_Athena_EnvCampFire_C_SetCustomTargetingTrans::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.SetBalanceValues
// 0x000C (0x000C - 0x0000)
struct GA_Athena_EnvCampFire_C_SetBalanceValues final
{
public:
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValueAtLevel_ReturnValue1;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_EnvCampFire_C_SetBalanceValues) == 0x000004, "Wrong alignment on GA_Athena_EnvCampFire_C_SetBalanceValues");
static_assert(sizeof(GA_Athena_EnvCampFire_C_SetBalanceValues) == 0x00000C, "Wrong size on GA_Athena_EnvCampFire_C_SetBalanceValues");
static_assert(offsetof(GA_Athena_EnvCampFire_C_SetBalanceValues, CallFunc_GetValueAtLevel_ReturnValue) == 0x000000, "Member 'GA_Athena_EnvCampFire_C_SetBalanceValues::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_SetBalanceValues, CallFunc_GetValueAtLevel_ReturnValue1) == 0x000004, "Member 'GA_Athena_EnvCampFire_C_SetBalanceValues::CallFunc_GetValueAtLevel_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Athena_EnvCampFire_C_SetBalanceValues, CallFunc_FTrunc_ReturnValue) == 0x000008, "Member 'GA_Athena_EnvCampFire_C_SetBalanceValues::CallFunc_FTrunc_ReturnValue' has a wrong offset!");

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.GetCustomAbilitySourceTransform
// 0x0030 (0x0030 - 0x0000)
struct GA_Athena_EnvCampFire_C_GetCustomAbilitySourceTransform final
{
public:
	struct FTransform                             ReturnValue;                                       // 0x0000(0x0030)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_EnvCampFire_C_GetCustomAbilitySourceTransform) == 0x000010, "Wrong alignment on GA_Athena_EnvCampFire_C_GetCustomAbilitySourceTransform");
static_assert(sizeof(GA_Athena_EnvCampFire_C_GetCustomAbilitySourceTransform) == 0x000030, "Wrong size on GA_Athena_EnvCampFire_C_GetCustomAbilitySourceTransform");
static_assert(offsetof(GA_Athena_EnvCampFire_C_GetCustomAbilitySourceTransform, ReturnValue) == 0x000000, "Member 'GA_Athena_EnvCampFire_C_GetCustomAbilitySourceTransform::ReturnValue' has a wrong offset!");

}
