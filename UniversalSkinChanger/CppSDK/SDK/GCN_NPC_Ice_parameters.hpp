#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_NPC_Ice

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCN_NPC_Ice.GCN_NPC_Ice_C.OnActive
// 0x0240 (0x0240 - 0x0000)
struct GCN_NPC_Ice_C_OnActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x3];                                       // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetVisualEffectQuality_ReturnValue;       // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn_Taker*                        K2Node_DynamicCast_AsFort_Pawn_Taker;              // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn_Flinger*                      K2Node_DynamicCast_AsFort_Pawn_Flinger;            // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x3];                                      // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue1;        // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue1;              // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_114[0x4];                                      // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AEnemyPawn_Parent_C*                    K2Node_DynamicCast_AsEnemy_Pawn_Parent;            // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess3;                      // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_122[0x2];                                      // 0x0122(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue2;        // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue2;              // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_149[0x3];                                      // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam;                // 0x0150(0x0080)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FParticleSysParam>              K2Node_MakeArray_Array;                            // 0x01D8(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x01EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x01ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x01EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1EF[0x1];                                      // 0x01EF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable1;                             // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CallFunc_Map_Find_Value;                           // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21A[0x2];                                      // 0x021A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0228(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x023A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCN_NPC_Ice_C_OnActive) == 0x000010, "Wrong alignment on GCN_NPC_Ice_C_OnActive");
static_assert(sizeof(GCN_NPC_Ice_C_OnActive) == 0x000240, "Wrong size on GCN_NPC_Ice_C_OnActive");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, MyTarget) == 0x000000, "Member 'GCN_NPC_Ice_C_OnActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, Parameters) == 0x000008, "Member 'GCN_NPC_Ice_C_OnActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, ReturnValue) == 0x0000C0, "Member 'GCN_NPC_Ice_C_OnActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_GetGameUserSettings_ReturnValue) == 0x0000C8, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0000D0, "Member 'GCN_NPC_Ice_C_OnActive::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'GCN_NPC_Ice_C_OnActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_GetVisualEffectQuality_ReturnValue) == 0x0000DC, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_GetVisualEffectQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, K2Node_SwitchInteger_CmpSuccess) == 0x0000E0, "Member 'GCN_NPC_Ice_C_OnActive::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, K2Node_DynamicCast_AsFort_Pawn_Taker) == 0x0000E8, "Member 'GCN_NPC_Ice_C_OnActive::K2Node_DynamicCast_AsFort_Pawn_Taker' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, K2Node_DynamicCast_bSuccess1) == 0x0000F0, "Member 'GCN_NPC_Ice_C_OnActive::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, K2Node_DynamicCast_AsFort_Pawn_Flinger) == 0x0000F8, "Member 'GCN_NPC_Ice_C_OnActive::K2Node_DynamicCast_AsFort_Pawn_Flinger' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, K2Node_DynamicCast_bSuccess2) == 0x000100, "Member 'GCN_NPC_Ice_C_OnActive::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000104, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_Add_FloatFloat_ReturnValue) == 0x000108, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_GetGameTimeInSeconds_ReturnValue1) == 0x00010C, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_GetGameTimeInSeconds_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_Add_FloatFloat_ReturnValue1) == 0x000110, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_Add_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, K2Node_DynamicCast_AsEnemy_Pawn_Parent) == 0x000118, "Member 'GCN_NPC_Ice_C_OnActive::K2Node_DynamicCast_AsEnemy_Pawn_Parent' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, K2Node_DynamicCast_bSuccess3) == 0x000120, "Member 'GCN_NPC_Ice_C_OnActive::K2Node_DynamicCast_bSuccess3' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_IsValid_ReturnValue) == 0x000121, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_GetGameTimeInSeconds_ReturnValue2) == 0x000124, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_GetGameTimeInSeconds_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_Add_FloatFloat_ReturnValue2) == 0x000128, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_Add_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_Array_Length_ReturnValue) == 0x00012C, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000130, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, Temp_string_Variable) == 0x000138, "Member 'GCN_NPC_Ice_C_OnActive::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, Temp_bool_Variable) == 0x000148, "Member 'GCN_NPC_Ice_C_OnActive::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, Temp_int_Loop_Counter_Variable) == 0x00014C, "Member 'GCN_NPC_Ice_C_OnActive::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, K2Node_MakeStruct_ParticleSysParam) == 0x000150, "Member 'GCN_NPC_Ice_C_OnActive::K2Node_MakeStruct_ParticleSysParam' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_Less_IntInt_ReturnValue) == 0x0001D0, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, K2Node_MakeArray_Array) == 0x0001D8, "Member 'GCN_NPC_Ice_C_OnActive::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_Add_IntInt_ReturnValue) == 0x0001E8, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, Temp_bool_Variable1) == 0x0001EC, "Member 'GCN_NPC_Ice_C_OnActive::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_IsDedicatedServer_ReturnValue) == 0x0001ED, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_K2_AttachToComponent_ReturnValue) == 0x0001EE, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, Temp_string_Variable1) == 0x0001F0, "Member 'GCN_NPC_Ice_C_OnActive::Temp_string_Variable1' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, K2Node_Select_Default) == 0x000200, "Member 'GCN_NPC_Ice_C_OnActive::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_Map_Find_Value) == 0x000210, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_Map_Find_ReturnValue) == 0x000218, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, Temp_bool_True_if_break_was_hit_Variable) == 0x000219, "Member 'GCN_NPC_Ice_C_OnActive::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, Temp_int_Array_Index_Variable) == 0x00021C, "Member 'GCN_NPC_Ice_C_OnActive::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_Array_Get_Item) == 0x000220, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_Conv_NameToString_ReturnValue) == 0x000228, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_Map_Contains_ReturnValue) == 0x000238, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_Not_PreBool_ReturnValue) == 0x000239, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnActive, CallFunc_BooleanAND_ReturnValue) == 0x00023A, "Member 'GCN_NPC_Ice_C_OnActive::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function GCN_NPC_Ice.GCN_NPC_Ice_C.OnRemove
// 0x0118 (0x0118 - 0x0000)
struct GCN_NPC_Ice_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn_Taker*                        K2Node_DynamicCast_AsFort_Pawn_Taker;              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn_Flinger*                      K2Node_DynamicCast_AsFort_Pawn_Flinger;            // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue1;        // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEnemyPawn_Parent_C*                    K2Node_DynamicCast_AsEnemy_Pawn_Parent;            // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x3];                                       // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue2;        // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FD[0x3];                                       // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_105[0x3];                                      // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;                           // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_NPC_Ice_C_OnRemove) == 0x000008, "Wrong alignment on GCN_NPC_Ice_C_OnRemove");
static_assert(sizeof(GCN_NPC_Ice_C_OnRemove) == 0x000118, "Wrong size on GCN_NPC_Ice_C_OnRemove");
static_assert(offsetof(GCN_NPC_Ice_C_OnRemove, MyTarget) == 0x000000, "Member 'GCN_NPC_Ice_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnRemove, Parameters) == 0x000008, "Member 'GCN_NPC_Ice_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnRemove, ReturnValue) == 0x0000C0, "Member 'GCN_NPC_Ice_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnRemove, CallFunc_IsDedicatedServer_ReturnValue) == 0x0000C1, "Member 'GCN_NPC_Ice_C_OnRemove::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnRemove, K2Node_DynamicCast_AsFort_Pawn_Taker) == 0x0000C8, "Member 'GCN_NPC_Ice_C_OnRemove::K2Node_DynamicCast_AsFort_Pawn_Taker' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnRemove, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'GCN_NPC_Ice_C_OnRemove::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnRemove, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x0000D4, "Member 'GCN_NPC_Ice_C_OnRemove::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnRemove, K2Node_DynamicCast_AsFort_Pawn_Flinger) == 0x0000D8, "Member 'GCN_NPC_Ice_C_OnRemove::K2Node_DynamicCast_AsFort_Pawn_Flinger' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnRemove, K2Node_DynamicCast_bSuccess1) == 0x0000E0, "Member 'GCN_NPC_Ice_C_OnRemove::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnRemove, CallFunc_GetGameTimeInSeconds_ReturnValue1) == 0x0000E4, "Member 'GCN_NPC_Ice_C_OnRemove::CallFunc_GetGameTimeInSeconds_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnRemove, K2Node_DynamicCast_AsEnemy_Pawn_Parent) == 0x0000E8, "Member 'GCN_NPC_Ice_C_OnRemove::K2Node_DynamicCast_AsEnemy_Pawn_Parent' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnRemove, K2Node_DynamicCast_bSuccess2) == 0x0000F0, "Member 'GCN_NPC_Ice_C_OnRemove::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnRemove, CallFunc_Array_Length_ReturnValue) == 0x0000F4, "Member 'GCN_NPC_Ice_C_OnRemove::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnRemove, CallFunc_GetGameTimeInSeconds_ReturnValue2) == 0x0000F8, "Member 'GCN_NPC_Ice_C_OnRemove::CallFunc_GetGameTimeInSeconds_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnRemove, CallFunc_IsValid_ReturnValue) == 0x0000FC, "Member 'GCN_NPC_Ice_C_OnRemove::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnRemove, Temp_int_Loop_Counter_Variable) == 0x000100, "Member 'GCN_NPC_Ice_C_OnRemove::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnRemove, CallFunc_Less_IntInt_ReturnValue) == 0x000104, "Member 'GCN_NPC_Ice_C_OnRemove::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnRemove, CallFunc_Add_IntInt_ReturnValue) == 0x000108, "Member 'GCN_NPC_Ice_C_OnRemove::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnRemove, Temp_int_Array_Index_Variable) == 0x00010C, "Member 'GCN_NPC_Ice_C_OnRemove::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Ice_C_OnRemove, CallFunc_Array_Get_Item) == 0x000110, "Member 'GCN_NPC_Ice_C_OnRemove::CallFunc_Array_Get_Item' has a wrong offset!");

}
