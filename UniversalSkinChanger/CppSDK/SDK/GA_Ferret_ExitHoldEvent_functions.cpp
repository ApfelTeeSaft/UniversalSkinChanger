#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Ferret_ExitHoldEvent

#include "Basic.hpp"

#include "GA_Ferret_ExitHoldEvent_classes.hpp"
#include "GA_Ferret_ExitHoldEvent_parameters.hpp"


namespace SDK
{

// Function GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C.ExecuteUbergraph_GA_Ferret_ExitHoldEvent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Ferret_ExitHoldEvent_C::ExecuteUbergraph_GA_Ferret_ExitHoldEvent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ferret_ExitHoldEvent_C", "ExecuteUbergraph_GA_Ferret_ExitHoldEvent");

	Params::GA_Ferret_ExitHoldEvent_C_ExecuteUbergraph_GA_Ferret_ExitHoldEvent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Ferret_ExitHoldEvent_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ferret_ExitHoldEvent_C", "K2_OnEndAbility");

	Params::GA_Ferret_ExitHoldEvent_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C.EventReceived_209BF560404B83EBEAA8DD8090C443AC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Ferret_ExitHoldEvent_C::EventReceived_209BF560404B83EBEAA8DD8090C443AC(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ferret_ExitHoldEvent_C", "EventReceived_209BF560404B83EBEAA8DD8090C443AC");

	Params::GA_Ferret_ExitHoldEvent_C_EventReceived_209BF560404B83EBEAA8DD8090C443AC Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C.EventReceived_7AE1D485464AEC7EB429C3877D33AF69
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Ferret_ExitHoldEvent_C::EventReceived_7AE1D485464AEC7EB429C3877D33AF69(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ferret_ExitHoldEvent_C", "EventReceived_7AE1D485464AEC7EB429C3877D33AF69");

	Params::GA_Ferret_ExitHoldEvent_C_EventReceived_7AE1D485464AEC7EB429C3877D33AF69 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Ferret_ExitHoldEvent_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ferret_ExitHoldEvent_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}
