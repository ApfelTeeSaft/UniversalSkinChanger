#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trap_Floor_Hoverboard_Speed

#include "Basic.hpp"

#include "Trap_Floor_Hoverboard_Speed_classes.hpp"
#include "Trap_Floor_Hoverboard_Speed_parameters.hpp"


namespace SDK
{

// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.ExecuteUbergraph_Trap_Floor_Hoverboard_Speed
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Floor_Hoverboard_Speed_C::ExecuteUbergraph_Trap_Floor_Hoverboard_Speed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Hoverboard_Speed_C", "ExecuteUbergraph_Trap_Floor_Hoverboard_Speed");

	Params::Trap_Floor_Hoverboard_Speed_C_ExecuteUbergraph_Trap_Floor_Hoverboard_Speed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnWorldReady
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Hoverboard_Speed_C::OnWorldReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Hoverboard_Speed_C", "OnWorldReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Hoverboard_Speed_C::OnFinishedBuilding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Hoverboard_Speed_C", "OnFinishedBuilding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Floor_Hoverboard_Speed_C::OnOutOfDurability()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Hoverboard_Speed_C", "OnOutOfDurability");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnPlaced
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Hoverboard_Speed_C::OnPlaced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Hoverboard_Speed_C", "OnPlaced");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Hoverboard_Speed_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Hoverboard_Speed_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.BP_ShouldTrigger
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>                   TouchingActors                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ATrap_Floor_Hoverboard_Speed_C::BP_ShouldTrigger(const TArray<class AActor*>& TouchingActors) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Hoverboard_Speed_C", "BP_ShouldTrigger");

	Params::Trap_Floor_Hoverboard_Speed_C_BP_ShouldTrigger Parms{};

	Parms.TouchingActors = std::move(TouchingActors);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
