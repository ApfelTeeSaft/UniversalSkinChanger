#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShowdownEventTileViolator

#include "Basic.hpp"

#include "ShowdownEventTileViolator_classes.hpp"
#include "ShowdownEventTileViolator_parameters.hpp"


namespace SDK
{

// Function ShowdownEventTileViolator.ShowdownEventTileViolator_C.ExecuteUbergraph_ShowdownEventTileViolator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownEventTileViolator_C::ExecuteUbergraph_ShowdownEventTileViolator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTileViolator_C", "ExecuteUbergraph_ShowdownEventTileViolator");

	Params::ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShowdownEventTileViolator.ShowdownEventTileViolator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShowdownEventTileViolator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTileViolator_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShowdownEventTileViolator.ShowdownEventTileViolator_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UShowdownEventTileViolator_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTileViolator_C", "RefreshDataBP");

	UObject::ProcessEvent(Func, nullptr);
}

}
