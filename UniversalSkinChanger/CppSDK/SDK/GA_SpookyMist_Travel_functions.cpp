#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SpookyMist_Travel

#include "Basic.hpp"

#include "GA_SpookyMist_Travel_classes.hpp"
#include "GA_SpookyMist_Travel_parameters.hpp"


namespace SDK
{

// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.ExecuteUbergraph_GA_SpookyMist_Travel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpookyMist_Travel_C::ExecuteUbergraph_GA_SpookyMist_Travel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpookyMist_Travel_C", "ExecuteUbergraph_GA_SpookyMist_Travel");

	Params::GA_SpookyMist_Travel_C_ExecuteUbergraph_GA_SpookyMist_Travel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.DestroyObjects
// (BlueprintCallable, BlueprintEvent)

void UGA_SpookyMist_Travel_C::DestroyObjects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpookyMist_Travel_C", "DestroyObjects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.On DBNO
// (BlueprintCallable, BlueprintEvent)

void UGA_SpookyMist_Travel_C::On_DBNO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpookyMist_Travel_C", "On DBNO");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.CheckIfStillColliding
// (BlueprintCallable, BlueprintEvent)

void UGA_SpookyMist_Travel_C::CheckIfStillColliding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpookyMist_Travel_C", "CheckIfStillColliding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_SpookyMist_Travel_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpookyMist_Travel_C", "K2_OnEndAbility");

	Params::GA_SpookyMist_Travel_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_SpookyMist_Travel_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpookyMist_Travel_C", "K2_ActivateAbilityFromEvent");

	Params::GA_SpookyMist_Travel_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.EventReceived_76DD035A4216DFB29C5E0DB3261B6CD8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpookyMist_Travel_C::EventReceived_76DD035A4216DFB29C5E0DB3261B6CD8(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpookyMist_Travel_C", "EventReceived_76DD035A4216DFB29C5E0DB3261B6CD8");

	Params::GA_SpookyMist_Travel_C_EventReceived_76DD035A4216DFB29C5E0DB3261B6CD8 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.Triggered_BA1318F5441CE862ADFAB5BA78450BAF
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_SpookyMist_Travel_C::Triggered_BA1318F5441CE862ADFAB5BA78450BAF(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpookyMist_Travel_C", "Triggered_BA1318F5441CE862ADFAB5BA78450BAF");

	Params::GA_SpookyMist_Travel_C_Triggered_BA1318F5441CE862ADFAB5BA78450BAF Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.Cancelled_BA1318F5441CE862ADFAB5BA78450BAF
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_SpookyMist_Travel_C::Cancelled_BA1318F5441CE862ADFAB5BA78450BAF(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpookyMist_Travel_C", "Cancelled_BA1318F5441CE862ADFAB5BA78450BAF");

	Params::GA_SpookyMist_Travel_C_Cancelled_BA1318F5441CE862ADFAB5BA78450BAF Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.Completed_BA1318F5441CE862ADFAB5BA78450BAF
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_SpookyMist_Travel_C::Completed_BA1318F5441CE862ADFAB5BA78450BAF(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpookyMist_Travel_C", "Completed_BA1318F5441CE862ADFAB5BA78450BAF");

	Params::GA_SpookyMist_Travel_C_Completed_BA1318F5441CE862ADFAB5BA78450BAF Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.OnFinish_7DCB8EEB464593BB57421A868DAD3B3E
// (BlueprintCallable, BlueprintEvent)

void UGA_SpookyMist_Travel_C::OnFinish_7DCB8EEB464593BB57421A868DAD3B3E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpookyMist_Travel_C", "OnFinish_7DCB8EEB464593BB57421A868DAD3B3E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.HandlePawnDetachRC
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_SpookyMist_Travel_C::HandlePawnDetachRC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpookyMist_Travel_C", "HandlePawnDetachRC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.SetDashStartEndAndDirection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          StartPoint                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          EndPoint                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Direction                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpookyMist_Travel_C::SetDashStartEndAndDirection(struct FVector* StartPoint, struct FVector* EndPoint, struct FVector* Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpookyMist_Travel_C", "SetDashStartEndAndDirection");

	Params::GA_SpookyMist_Travel_C_SetDashStartEndAndDirection Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StartPoint != nullptr)
		*StartPoint = std::move(Parms.StartPoint);

	if (EndPoint != nullptr)
		*EndPoint = std::move(Parms.EndPoint);

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.PlayerCapsuleSizes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Radius                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HalfHeight                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpookyMist_Travel_C::PlayerCapsuleSizes(float* Radius, float* HalfHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpookyMist_Travel_C", "PlayerCapsuleSizes");

	Params::GA_SpookyMist_Travel_C_PlayerCapsuleSizes Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

	if (HalfHeight != nullptr)
		*HalfHeight = Parms.HalfHeight;
}

}
