#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TNT_Bundle_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "TNT_Bundle_Skeleton_AnimBlueprint_classes.hpp"
#include "TNT_Bundle_Skeleton_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function TNT_Bundle_Skeleton_AnimBlueprint.TNT_Bundle_Skeleton_AnimBlueprint_C.ExecuteUbergraph_TNT_Bundle_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTNT_Bundle_Skeleton_AnimBlueprint_C::ExecuteUbergraph_TNT_Bundle_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TNT_Bundle_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_TNT_Bundle_Skeleton_AnimBlueprint");

	Params::TNT_Bundle_Skeleton_AnimBlueprint_C_ExecuteUbergraph_TNT_Bundle_Skeleton_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
