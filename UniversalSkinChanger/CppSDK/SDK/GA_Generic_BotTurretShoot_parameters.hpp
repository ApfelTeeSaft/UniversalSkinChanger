#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Generic_BotTurretShoot

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.ExecuteUbergraph_GA_Generic_BotTurretShoot
// 0x0200 (0x0200 - 0x0000)
struct GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_GetRangeTag_TargetTag;                    // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilityTask_WaitTargetSelection*   CallFunc_WaitTargetSelection_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0030(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0050(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable1;                             // 0x0060(0x0020)()
	struct FHitResult                             CallFunc_GetHitResultFromTargetData_ReturnValue;   // 0x0080(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectContainer_ReturnValue; // 0x0108(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11A[0x2];                                      // 0x011A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0124(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x013C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0148(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_154[0x4];                                      // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0180(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x018C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_199[0x7];                                      // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortAIPawn*                            K2Node_DynamicCast_AsFort_AIPawn;                  // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_BGA_BotTurret_Parent_C*              K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent;      // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C1[0x7];                                      // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData1;                    // 0x01C8(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag1;                // 0x01E8(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1;             // 0x01F0(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot) == 0x000008, "Wrong alignment on GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot");
static_assert(sizeof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot) == 0x000200, "Wrong size on GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, EntryPoint) == 0x000000, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_GetRangeTag_TargetTag) == 0x000004, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_GetRangeTag_TargetTag' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_WaitTargetSelection_ReturnValue) == 0x000010, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_WaitTargetSelection_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, K2Node_CustomEvent_TargetData) == 0x000030, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, K2Node_CustomEvent_ApplicationTag) == 0x000050, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, Temp_struct_Variable) == 0x000058, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, Temp_struct_Variable1) == 0x000060, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_GetHitResultFromTargetData_ReturnValue) == 0x000080, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_GetHitResultFromTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_ApplyGameplayEffectContainer_ReturnValue) == 0x000108, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_ApplyGameplayEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_BreakHitResult_bBlockingHit) == 0x000118, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_BreakHitResult_bInitialOverlap) == 0x000119, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_BreakHitResult_Time) == 0x00011C, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_BreakHitResult_Distance) == 0x000120, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_BreakHitResult_Location) == 0x000124, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_BreakHitResult_ImpactPoint) == 0x000130, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_BreakHitResult_Normal) == 0x00013C, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_BreakHitResult_ImpactNormal) == 0x000148, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_BreakHitResult_PhysMat) == 0x000158, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_BreakHitResult_HitActor) == 0x000160, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_BreakHitResult_HitComponent) == 0x000168, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_BreakHitResult_HitBoneName) == 0x000170, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_BreakHitResult_HitItem) == 0x000178, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_BreakHitResult_FaceIndex) == 0x00017C, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_BreakHitResult_TraceStart) == 0x000180, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_BreakHitResult_TraceEnd) == 0x00018C, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_K2_CommitAbility_ReturnValue) == 0x000198, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, K2Node_DynamicCast_AsFort_AIPawn) == 0x0001A0, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::K2Node_DynamicCast_AsFort_AIPawn' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, K2Node_DynamicCast_bSuccess) == 0x0001A8, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0001B0, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent) == 0x0001B8, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, K2Node_DynamicCast_bSuccess1) == 0x0001C0, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, K2Node_CustomEvent_TargetData1) == 0x0001C8, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::K2Node_CustomEvent_TargetData1' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, K2Node_CustomEvent_ApplicationTag1) == 0x0001E8, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::K2Node_CustomEvent_ApplicationTag1' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot, K2Node_CreateDelegate_OutputDelegate1) == 0x0001F0, "Member 'GA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");

// Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.Targeted_A37C36084B41A1B49DD946A52CACDE45
// 0x0028 (0x0028 - 0x0000)
struct GA_Generic_BotTurretShoot_C_Targeted_A37C36084B41A1B49DD946A52CACDE45 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Generic_BotTurretShoot_C_Targeted_A37C36084B41A1B49DD946A52CACDE45) == 0x000008, "Wrong alignment on GA_Generic_BotTurretShoot_C_Targeted_A37C36084B41A1B49DD946A52CACDE45");
static_assert(sizeof(GA_Generic_BotTurretShoot_C_Targeted_A37C36084B41A1B49DD946A52CACDE45) == 0x000028, "Wrong size on GA_Generic_BotTurretShoot_C_Targeted_A37C36084B41A1B49DD946A52CACDE45");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_Targeted_A37C36084B41A1B49DD946A52CACDE45, TargetData) == 0x000000, "Member 'GA_Generic_BotTurretShoot_C_Targeted_A37C36084B41A1B49DD946A52CACDE45::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_Targeted_A37C36084B41A1B49DD946A52CACDE45, ApplicationTag) == 0x000020, "Member 'GA_Generic_BotTurretShoot_C_Targeted_A37C36084B41A1B49DD946A52CACDE45::ApplicationTag' has a wrong offset!");

// Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.Cancelled_A37C36084B41A1B49DD946A52CACDE45
// 0x0028 (0x0028 - 0x0000)
struct GA_Generic_BotTurretShoot_C_Cancelled_A37C36084B41A1B49DD946A52CACDE45 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Generic_BotTurretShoot_C_Cancelled_A37C36084B41A1B49DD946A52CACDE45) == 0x000008, "Wrong alignment on GA_Generic_BotTurretShoot_C_Cancelled_A37C36084B41A1B49DD946A52CACDE45");
static_assert(sizeof(GA_Generic_BotTurretShoot_C_Cancelled_A37C36084B41A1B49DD946A52CACDE45) == 0x000028, "Wrong size on GA_Generic_BotTurretShoot_C_Cancelled_A37C36084B41A1B49DD946A52CACDE45");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_Cancelled_A37C36084B41A1B49DD946A52CACDE45, TargetData) == 0x000000, "Member 'GA_Generic_BotTurretShoot_C_Cancelled_A37C36084B41A1B49DD946A52CACDE45::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_Cancelled_A37C36084B41A1B49DD946A52CACDE45, ApplicationTag) == 0x000020, "Member 'GA_Generic_BotTurretShoot_C_Cancelled_A37C36084B41A1B49DD946A52CACDE45::ApplicationTag' has a wrong offset!");

// Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.GetRangeTag
// 0x0020 (0x0020 - 0x0000)
struct GA_Generic_BotTurretShoot_C_GetRangeTag final
{
public:
	struct FGameplayTag                           TargetTag;                                         // 0x0000(0x0008)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_BGA_BotTurret_Parent_C*              K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Generic_BotTurretShoot_C_GetRangeTag) == 0x000008, "Wrong alignment on GA_Generic_BotTurretShoot_C_GetRangeTag");
static_assert(sizeof(GA_Generic_BotTurretShoot_C_GetRangeTag) == 0x000020, "Wrong size on GA_Generic_BotTurretShoot_C_GetRangeTag");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_GetRangeTag, TargetTag) == 0x000000, "Member 'GA_Generic_BotTurretShoot_C_GetRangeTag::TargetTag' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_GetRangeTag, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_Generic_BotTurretShoot_C_GetRangeTag::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_GetRangeTag, K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent) == 0x000010, "Member 'GA_Generic_BotTurretShoot_C_GetRangeTag::K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_GetRangeTag, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GA_Generic_BotTurretShoot_C_GetRangeTag::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_GetRangeTag, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000019, "Member 'GA_Generic_BotTurretShoot_C_GetRangeTag::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.GetCustomAbilitySourceTransform
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Generic_BotTurretShoot_C_GetCustomAbilitySourceTransform final
{
public:
	struct FTransform                             ReturnValue;                                       // 0x0000(0x0030)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_BGA_BotTurret_Parent_C*              K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0xE];                                       // 0x0042(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0050(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue1;          // 0x0080(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Generic_BotTurretShoot_C_GetCustomAbilitySourceTransform) == 0x000010, "Wrong alignment on GA_Generic_BotTurretShoot_C_GetCustomAbilitySourceTransform");
static_assert(sizeof(GA_Generic_BotTurretShoot_C_GetCustomAbilitySourceTransform) == 0x0000B0, "Wrong size on GA_Generic_BotTurretShoot_C_GetCustomAbilitySourceTransform");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_GetCustomAbilitySourceTransform, ReturnValue) == 0x000000, "Member 'GA_Generic_BotTurretShoot_C_GetCustomAbilitySourceTransform::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_GetCustomAbilitySourceTransform, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000030, "Member 'GA_Generic_BotTurretShoot_C_GetCustomAbilitySourceTransform::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_GetCustomAbilitySourceTransform, K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent) == 0x000038, "Member 'GA_Generic_BotTurretShoot_C_GetCustomAbilitySourceTransform::K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_GetCustomAbilitySourceTransform, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'GA_Generic_BotTurretShoot_C_GetCustomAbilitySourceTransform::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_GetCustomAbilitySourceTransform, K2Node_SwitchInteger_CmpSuccess) == 0x000041, "Member 'GA_Generic_BotTurretShoot_C_GetCustomAbilitySourceTransform::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_GetCustomAbilitySourceTransform, CallFunc_GetSocketTransform_ReturnValue) == 0x000050, "Member 'GA_Generic_BotTurretShoot_C_GetCustomAbilitySourceTransform::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Generic_BotTurretShoot_C_GetCustomAbilitySourceTransform, CallFunc_GetSocketTransform_ReturnValue1) == 0x000080, "Member 'GA_Generic_BotTurretShoot_C_GetCustomAbilitySourceTransform::CallFunc_GetSocketTransform_ReturnValue1' has a wrong offset!");

}
