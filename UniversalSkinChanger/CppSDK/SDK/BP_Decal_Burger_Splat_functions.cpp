#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Decal_Burger_Splat

#include "Basic.hpp"

#include "BP_Decal_Burger_Splat_classes.hpp"
#include "BP_Decal_Burger_Splat_parameters.hpp"


namespace SDK
{

// Function BP_Decal_Burger_Splat.BP_Decal_Burger_Splat_C.ExecuteUbergraph_BP_Decal_Burger_Splat
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Decal_Burger_Splat_C::ExecuteUbergraph_BP_Decal_Burger_Splat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Decal_Burger_Splat_C", "ExecuteUbergraph_BP_Decal_Burger_Splat");

	Params::BP_Decal_Burger_Splat_C_ExecuteUbergraph_BP_Decal_Burger_Splat Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Decal_Burger_Splat.BP_Decal_Burger_Splat_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Decal_Burger_Splat_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Decal_Burger_Splat_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Decal_Burger_Splat.BP_Decal_Burger_Splat_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Decal_Burger_Splat_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Decal_Burger_Splat_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
