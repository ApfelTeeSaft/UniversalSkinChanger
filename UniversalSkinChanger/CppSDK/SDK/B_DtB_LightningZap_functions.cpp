#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_DtB_LightningZap

#include "Basic.hpp"

#include "B_DtB_LightningZap_classes.hpp"
#include "B_DtB_LightningZap_parameters.hpp"


namespace SDK
{

// Function B_DtB_LightningZap.B_DtB_LightningZap_C.ExecuteUbergraph_B_DtB_LightningZap
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_DtB_LightningZap_C::ExecuteUbergraph_B_DtB_LightningZap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DtB_LightningZap_C", "ExecuteUbergraph_B_DtB_LightningZap");

	Params::B_DtB_LightningZap_C_ExecuteUbergraph_B_DtB_LightningZap Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_DtB_LightningZap.B_DtB_LightningZap_C.FireLightning
// (BlueprintCallable, BlueprintEvent)

void AB_DtB_LightningZap_C::FireLightning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DtB_LightningZap_C", "FireLightning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_DtB_LightningZap.B_DtB_LightningZap_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_DtB_LightningZap_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DtB_LightningZap_C", "ReceiveTick");

	Params::B_DtB_LightningZap_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_DtB_LightningZap.B_DtB_LightningZap_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_DtB_LightningZap_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DtB_LightningZap_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
