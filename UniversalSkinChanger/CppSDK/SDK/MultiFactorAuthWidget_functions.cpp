#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MultiFactorAuthWidget

#include "Basic.hpp"

#include "MultiFactorAuthWidget_classes.hpp"
#include "MultiFactorAuthWidget_parameters.hpp"


namespace SDK
{

// Function MultiFactorAuthWidget.MultiFactorAuthWidget_C.ExecuteUbergraph_MultiFactorAuthWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMultiFactorAuthWidget_C::ExecuteUbergraph_MultiFactorAuthWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiFactorAuthWidget_C", "ExecuteUbergraph_MultiFactorAuthWidget");

	Params::MultiFactorAuthWidget_C_ExecuteUbergraph_MultiFactorAuthWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MultiFactorAuthWidget.MultiFactorAuthWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMultiFactorAuthWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiFactorAuthWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
