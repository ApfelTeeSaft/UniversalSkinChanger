#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CBGA_Blade_Athena

#include "Basic.hpp"

#include "CBGA_Blade_Athena_classes.hpp"
#include "CBGA_Blade_Athena_parameters.hpp"


namespace SDK
{

// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.ExecuteUbergraph_CBGA_Blade_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACBGA_Blade_Athena_C::ExecuteUbergraph_CBGA_Blade_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CBGA_Blade_Athena_C", "ExecuteUbergraph_CBGA_Blade_Athena");

	Params::CBGA_Blade_Athena_C_ExecuteUbergraph_CBGA_Blade_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.OnPullAborted
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACBGA_Blade_Athena_C::OnPullAborted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CBGA_Blade_Athena_C", "OnPullAborted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.OnPullStart
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACBGA_Blade_Athena_C::OnPullStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CBGA_Blade_Athena_C", "OnPullStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACBGA_Blade_Athena_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CBGA_Blade_Athena_C", "ReceiveEndPlay");

	Params::CBGA_Blade_Athena_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACBGA_Blade_Athena_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CBGA_Blade_Athena_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACBGA_Blade_Athena_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CBGA_Blade_Athena_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.SetDrawDistance
// (Public, BlueprintCallable, BlueprintEvent)

void ACBGA_Blade_Athena_C::SetDrawDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CBGA_Blade_Athena_C", "SetDrawDistance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn_0                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ACBGA_Blade_Athena_C::BlueprintCanInteract(const class AFortPawn* InteractingPawn_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CBGA_Blade_Athena_C", "BlueprintCanInteract");

	Params::CBGA_Blade_Athena_C_BlueprintCanInteract Parms{};

	Parms.InteractingPawn_0 = InteractingPawn_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn_0                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText ACBGA_Blade_Athena_C::BlueprintGetInteractionString(const class AFortPawn* InteractingPawn_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CBGA_Blade_Athena_C", "BlueprintGetInteractionString");

	Params::CBGA_Blade_Athena_C_BlueprintGetInteractionString Parms{};

	Parms.InteractingPawn_0 = InteractingPawn_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
