#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Frontend_CommanderNew_Camera1

#include "Basic.hpp"

#include "Frontend_CommanderNew_Camera1_classes.hpp"
#include "Frontend_CommanderNew_Camera1_parameters.hpp"


namespace SDK
{

// Function Frontend_CommanderNew_Camera1.Frontend_CommanderNew_Camera1_C.ExecuteUbergraph_Frontend_CommanderNew_Camera1
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_CommanderNew_Camera1_C::ExecuteUbergraph_Frontend_CommanderNew_Camera1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_CommanderNew_Camera1_C", "ExecuteUbergraph_Frontend_CommanderNew_Camera1");

	Params::Frontend_CommanderNew_Camera1_C_ExecuteUbergraph_Frontend_CommanderNew_Camera1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Frontend_CommanderNew_Camera1.Frontend_CommanderNew_Camera1_C.OnActivated
// (Event, Public, BlueprintEvent)

void AFrontend_CommanderNew_Camera1_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_CommanderNew_Camera1_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Frontend_CommanderNew_Camera1.Frontend_CommanderNew_Camera1_C.OnDeactivated
// (Event, Public, BlueprintEvent)

void AFrontend_CommanderNew_Camera1_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_CommanderNew_Camera1_C", "OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Frontend_CommanderNew_Camera1.Frontend_CommanderNew_Camera1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFrontend_CommanderNew_Camera1_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_CommanderNew_Camera1_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
