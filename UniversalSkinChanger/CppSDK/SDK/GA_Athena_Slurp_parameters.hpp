#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Slurp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_Slurp.GA_Athena_Slurp_C.ExecuteUbergraph_GA_Athena_Slurp
// 0x00E8 (0x00E8 - 0x0000)
struct GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1; // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDBNO_ReturnValue;                       // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetHealth_ReturnValue;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxHealth_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0030(0x0040)(ContainsInstancedReference)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0090(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x0098(0x0020)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x00B8(0x0010)(ZeroConstructor, ReferenceParm)
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult;          // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;              // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult1;         // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EvaluateCurveTableRow_OutXY1;             // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum1_CmpSuccess;                     // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DA[0x2];                                       // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp) == 0x000008, "Wrong alignment on GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp");
static_assert(sizeof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp) == 0x0000E8, "Wrong size on GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, EntryPoint) == 0x000000, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, K2Node_Event_bWasCancelled) == 0x000004, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000008, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1) == 0x000010, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, CallFunc_K2_CommitAbility_ReturnValue) == 0x000018, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, CallFunc_IsDBNO_ReturnValue) == 0x000019, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::CallFunc_IsDBNO_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, CallFunc_GetHealth_ReturnValue) == 0x00001C, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::CallFunc_GetHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, CallFunc_GetMaxHealth_ReturnValue) == 0x000020, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::CallFunc_GetMaxHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, CallFunc_Less_FloatFloat_ReturnValue) == 0x000024, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, CallFunc_GetActorInfo_ReturnValue) == 0x000030, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, K2Node_CreateDelegate_OutputDelegate) == 0x000070, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000080, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000090, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000098, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x0000B8, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, CallFunc_EvaluateCurveTableRow_OutResult) == 0x0000C8, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::CallFunc_EvaluateCurveTableRow_OutResult' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, CallFunc_EvaluateCurveTableRow_OutXY) == 0x0000CC, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, CallFunc_EvaluateCurveTableRow_OutResult1) == 0x0000D0, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::CallFunc_EvaluateCurveTableRow_OutResult1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, CallFunc_EvaluateCurveTableRow_OutXY1) == 0x0000D4, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::CallFunc_EvaluateCurveTableRow_OutXY1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, K2Node_SwitchEnum_CmpSuccess) == 0x0000D8, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, K2Node_SwitchEnum1_CmpSuccess) == 0x0000D9, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::K2Node_SwitchEnum1_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, Temp_int_Variable) == 0x0000DC, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, CallFunc_FTrunc_ReturnValue) == 0x0000E0, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, CallFunc_Greater_IntInt_ReturnValue) == 0x0000E4, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp, CallFunc_Less_IntInt_ReturnValue) == 0x0000E5, "Member 'GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function GA_Athena_Slurp.GA_Athena_Slurp_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Athena_Slurp_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_Slurp_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Athena_Slurp_C_K2_OnEndAbility");
static_assert(sizeof(GA_Athena_Slurp_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Athena_Slurp_C_K2_OnEndAbility");
static_assert(offsetof(GA_Athena_Slurp_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Athena_Slurp_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}
