#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Fly

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_Fly.GA_Athena_Fly_C.ExecuteUbergraph_GA_Athena_Fly
// 0x0050 (0x0050 - 0x0000)
struct GA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagRemoved*    CallFunc_WaitGameplayTagRemove_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0044(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly) == 0x000008, "Wrong alignment on GA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly");
static_assert(sizeof(GA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly) == 0x000050, "Wrong size on GA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly");
static_assert(offsetof(GA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly, EntryPoint) == 0x000000, "Member 'GA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly, CallFunc_WaitGameplayTagAdd_ReturnValue) == 0x000018, "Member 'GA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly::CallFunc_WaitGameplayTagAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly, K2Node_CreateDelegate_OutputDelegate1) == 0x000020, "Member 'GA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'GA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly, CallFunc_WaitGameplayTagRemove_ReturnValue) == 0x000038, "Member 'GA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly::CallFunc_WaitGameplayTagRemove_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly, CallFunc_IsValid_ReturnValue1) == 0x000040, "Member 'GA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000044, "Member 'GA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");

}
