#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_TriggeredAbility

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.ExecuteUbergraph_GAT_TriggeredAbility
// 0x00B0 (0x00B0 - 0x0000)
struct GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0008(0x00A8)(ConstParm)
};
static_assert(alignof(GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility) == 0x000008, "Wrong alignment on GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility");
static_assert(sizeof(GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility) == 0x0000B0, "Wrong size on GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility");
static_assert(offsetof(GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility, EntryPoint) == 0x000000, "Member 'GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility, K2Node_Event_EventData) == 0x000008, "Member 'GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility::K2Node_Event_EventData' has a wrong offset!");

// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.TriggeredAbilitySetup
// 0x0010 (0x0010 - 0x0000)
struct GAT_TriggeredAbility_C_TriggeredAbilitySetup final
{
public:
	class UAbilitySystemComponent*                AbilitySystemIn;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                AbilitySystemOut;                                  // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAT_TriggeredAbility_C_TriggeredAbilitySetup) == 0x000008, "Wrong alignment on GAT_TriggeredAbility_C_TriggeredAbilitySetup");
static_assert(sizeof(GAT_TriggeredAbility_C_TriggeredAbilitySetup) == 0x000010, "Wrong size on GAT_TriggeredAbility_C_TriggeredAbilitySetup");
static_assert(offsetof(GAT_TriggeredAbility_C_TriggeredAbilitySetup, AbilitySystemIn) == 0x000000, "Member 'GAT_TriggeredAbility_C_TriggeredAbilitySetup::AbilitySystemIn' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_TriggeredAbilitySetup, AbilitySystemOut) == 0x000008, "Member 'GAT_TriggeredAbility_C_TriggeredAbilitySetup::AbilitySystemOut' has a wrong offset!");

// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.SetHolsterWeaponWithName
// 0x0030 (0x0030 - 0x0000)
struct GAT_TriggeredAbility_C_SetHolsterWeaponWithName final
{
public:
	class AFortPawn*                              Target_Fort_Pawn;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldHolster;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PlayEquipAnim;                                     // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ShowDebugPrintName;                                // 0x000A(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsWeaponHolstered;                                 // 0x000B(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OperationSuccessful;                               // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bOperationSuccessful;                              // 0x000D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanXOR_ReturnValue;                   // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F[0x1];                                        // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetClassDisplayName_ReturnValue;          // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName) == 0x000008, "Wrong alignment on GAT_TriggeredAbility_C_SetHolsterWeaponWithName");
static_assert(sizeof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName) == 0x000030, "Wrong size on GAT_TriggeredAbility_C_SetHolsterWeaponWithName");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, Target_Fort_Pawn) == 0x000000, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::Target_Fort_Pawn' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, ShouldHolster) == 0x000008, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::ShouldHolster' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, PlayEquipAnim) == 0x000009, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::PlayEquipAnim' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, ShowDebugPrintName) == 0x00000A, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::ShowDebugPrintName' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, IsWeaponHolstered) == 0x00000B, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::IsWeaponHolstered' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, OperationSuccessful) == 0x00000C, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::OperationSuccessful' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, bOperationSuccessful) == 0x00000D, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::bOperationSuccessful' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, CallFunc_BooleanXOR_ReturnValue) == 0x00000E, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::CallFunc_BooleanXOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, CallFunc_GetObjectClass_ReturnValue) == 0x000010, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, CallFunc_GetClassDisplayName_ReturnValue) == 0x000018, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::CallFunc_GetClassDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, CallFunc_Conv_StringToName_ReturnValue) == 0x000028, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");

}
