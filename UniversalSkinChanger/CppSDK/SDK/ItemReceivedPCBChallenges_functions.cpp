#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemReceivedPCBChallenges

#include "Basic.hpp"

#include "ItemReceivedPCBChallenges_classes.hpp"
#include "ItemReceivedPCBChallenges_parameters.hpp"


namespace SDK
{

// Function ItemReceivedPCBChallenges.ItemReceivedPCBChallenges_C.ExecuteUbergraph_ItemReceivedPCBChallenges
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedPCBChallenges_C::ExecuteUbergraph_ItemReceivedPCBChallenges(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceivedPCBChallenges_C", "ExecuteUbergraph_ItemReceivedPCBChallenges");

	Params::ItemReceivedPCBChallenges_C_ExecuteUbergraph_ItemReceivedPCBChallenges Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemReceivedPCBChallenges.ItemReceivedPCBChallenges_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemReceivedPCBChallenges_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceivedPCBChallenges_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
