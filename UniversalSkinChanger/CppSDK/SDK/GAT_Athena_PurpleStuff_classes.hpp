#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_Athena_PurpleStuff

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GAT_TriggeredAbility_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C
// 0x0010 (0x0960 - 0x0950)
class UGAT_Athena_PurpleStuff_C final : public UGAT_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAT_Athena_PurpleStuff_C;           // 0x0950(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0958(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAT_Athena_PurpleStuff(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_Athena_PurpleStuff_C">();
	}
	static class UGAT_Athena_PurpleStuff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_Athena_PurpleStuff_C>();
	}
};
static_assert(alignof(UGAT_Athena_PurpleStuff_C) == 0x000008, "Wrong alignment on UGAT_Athena_PurpleStuff_C");
static_assert(sizeof(UGAT_Athena_PurpleStuff_C) == 0x000960, "Wrong size on UGAT_Athena_PurpleStuff_C");
static_assert(offsetof(UGAT_Athena_PurpleStuff_C, UberGraphFrame_GAT_Athena_PurpleStuff_C) == 0x000950, "Member 'UGAT_Athena_PurpleStuff_C::UberGraphFrame_GAT_Athena_PurpleStuff_C' has a wrong offset!");
static_assert(offsetof(UGAT_Athena_PurpleStuff_C, PlayerPawn) == 0x000958, "Member 'UGAT_Athena_PurpleStuff_C::PlayerPawn' has a wrong offset!");

}
