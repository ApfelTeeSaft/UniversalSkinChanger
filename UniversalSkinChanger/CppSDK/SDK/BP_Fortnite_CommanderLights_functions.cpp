#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Fortnite_CommanderLights

#include "Basic.hpp"

#include "BP_Fortnite_CommanderLights_classes.hpp"
#include "BP_Fortnite_CommanderLights_parameters.hpp"


namespace SDK
{

// Function BP_Fortnite_CommanderLights.BP_Fortnite_CommanderLights_C.ExecuteUbergraph_BP_Fortnite_CommanderLights
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Fortnite_CommanderLights_C::ExecuteUbergraph_BP_Fortnite_CommanderLights(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fortnite_CommanderLights_C", "ExecuteUbergraph_BP_Fortnite_CommanderLights");

	Params::BP_Fortnite_CommanderLights_C_ExecuteUbergraph_BP_Fortnite_CommanderLights Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fortnite_CommanderLights.BP_Fortnite_CommanderLights_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Fortnite_CommanderLights_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fortnite_CommanderLights_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fortnite_CommanderLights.BP_Fortnite_CommanderLights_C.EnableLobbySetLighting
// (BlueprintCallable, BlueprintEvent)

void ABP_Fortnite_CommanderLights_C::EnableLobbySetLighting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fortnite_CommanderLights_C", "EnableLobbySetLighting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fortnite_CommanderLights.BP_Fortnite_CommanderLights_C.UpdateSettings
// (BlueprintCallable, BlueprintEvent)

void ABP_Fortnite_CommanderLights_C::UpdateSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fortnite_CommanderLights_C", "UpdateSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fortnite_CommanderLights.BP_Fortnite_CommanderLights_C.DisableLobbySetLighting
// (BlueprintCallable, BlueprintEvent)

void ABP_Fortnite_CommanderLights_C::DisableLobbySetLighting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fortnite_CommanderLights_C", "DisableLobbySetLighting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fortnite_CommanderLights.BP_Fortnite_CommanderLights_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Fortnite_CommanderLights_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fortnite_CommanderLights_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fortnite_CommanderLights.BP_Fortnite_CommanderLights_C.SetVisiblityofSceneLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Activate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Fortnite_CommanderLights_C::SetVisiblityofSceneLighting(bool Activate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fortnite_CommanderLights_C", "SetVisiblityofSceneLighting");

	Params::BP_Fortnite_CommanderLights_C_SetVisiblityofSceneLighting Parms{};

	Parms.Activate = Activate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fortnite_CommanderLights.BP_Fortnite_CommanderLights_C.SetVisiblityofDetailSpecificMeshes
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Fortnite_CommanderLights_C::SetVisiblityofDetailSpecificMeshes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fortnite_CommanderLights_C", "SetVisiblityofDetailSpecificMeshes");

	UObject::ProcessEvent(Func, nullptr);
}

}
