#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_MountedTurretAthena

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function B_MountedTurretAthena.B_MountedTurretAthena_C.ExecuteUbergraph_B_MountedTurretAthena
// 0x0100 (0x0100 - 0x0000)
struct B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable1;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable1;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetAttachedActors_OutActors;              // 0x0040(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue; // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAthena_Player_SneakySnowman_C*         K2Node_DynamicCast_AsAthena_Player_Sneaky_Snowman; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72[0x6];                                       // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetAttachedActors_OutActors1;             // 0x0078(0x0010)(ZeroConstructor, ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item1;                          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAthena_Player_SneakySnowman_C*         K2Node_DynamicCast_AsAthena_Player_Sneaky_Snowman1; // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_MountedTurretAthena_C*               K2Node_DynamicCast_AsB_Mounted_Turret_Athena;      // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess3;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B3[0x5];                                       // 0x00B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_SneakySnowman_Athena_C*              K2Node_DynamicCast_AsB_Sneaky_Snowman_Athena;      // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess4;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue1;                 // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x00D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00E4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00F8(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena) == 0x000008, "Wrong alignment on B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena");
static_assert(sizeof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena) == 0x000100, "Wrong size on B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, EntryPoint) == 0x000000, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, Temp_int_Loop_Counter_Variable1) == 0x000008, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::Temp_int_Loop_Counter_Variable1' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, CallFunc_Add_IntInt_ReturnValue1) == 0x000010, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::CallFunc_Add_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, Temp_int_Array_Index_Variable) == 0x000014, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, Temp_int_Array_Index_Variable1) == 0x000018, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::Temp_int_Array_Index_Variable1' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, CallFunc_GetInstigator_ReturnValue) == 0x000020, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000028, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000038, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, CallFunc_GetAttachedActors_OutActors) == 0x000040, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::CallFunc_GetAttachedActors_OutActors' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue) == 0x000050, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, CallFunc_Array_Get_Item) == 0x000058, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, K2Node_DynamicCast_AsAthena_Player_Sneaky_Snowman) == 0x000068, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::K2Node_DynamicCast_AsAthena_Player_Sneaky_Snowman' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, K2Node_DynamicCast_bSuccess1) == 0x000070, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, CallFunc_Less_IntInt_ReturnValue) == 0x000071, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, CallFunc_GetAttachedActors_OutActors1) == 0x000078, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::CallFunc_GetAttachedActors_OutActors1' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, CallFunc_Array_Get_Item1) == 0x000088, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::CallFunc_Array_Get_Item1' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000090, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, K2Node_DynamicCast_AsAthena_Player_Sneaky_Snowman1) == 0x000098, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::K2Node_DynamicCast_AsAthena_Player_Sneaky_Snowman1' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, K2Node_DynamicCast_bSuccess2) == 0x0000A0, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, K2Node_DynamicCast_AsB_Mounted_Turret_Athena) == 0x0000A8, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::K2Node_DynamicCast_AsB_Mounted_Turret_Athena' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, K2Node_DynamicCast_bSuccess3) == 0x0000B0, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::K2Node_DynamicCast_bSuccess3' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, CallFunc_BooleanOR_ReturnValue) == 0x0000B1, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, CallFunc_IsValid_ReturnValue) == 0x0000B2, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, K2Node_DynamicCast_AsB_Sneaky_Snowman_Athena) == 0x0000B8, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::K2Node_DynamicCast_AsB_Sneaky_Snowman_Athena' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, K2Node_DynamicCast_bSuccess4) == 0x0000C0, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::K2Node_DynamicCast_bSuccess4' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, CallFunc_Array_Length_ReturnValue1) == 0x0000C4, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::CallFunc_Array_Length_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, CallFunc_Less_IntInt_ReturnValue1) == 0x0000C8, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::CallFunc_Less_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x0000D0, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x0000E0, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, K2Node_CreateDelegate_OutputDelegate) == 0x0000E4, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000F8, "Member 'B_MountedTurretAthena_C_ExecuteUbergraph_B_MountedTurretAthena::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

}
