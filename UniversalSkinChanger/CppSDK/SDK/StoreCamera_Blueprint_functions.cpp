#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreCamera_Blueprint

#include "Basic.hpp"

#include "StoreCamera_Blueprint_classes.hpp"
#include "StoreCamera_Blueprint_parameters.hpp"


namespace SDK
{

// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ExecuteUbergraph_StoreCamera_Blueprint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCamera_Blueprint_C::ExecuteUbergraph_StoreCamera_Blueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "ExecuteUbergraph_StoreCamera_Blueprint");

	Params::StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-In
// (BlueprintCallable, BlueprintEvent)

void AStoreCamera_Blueprint_C::ChoicePackFOVMinusIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "ChoicePackFOV-In");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-Out
// (BlueprintCallable, BlueprintEvent)

void AStoreCamera_Blueprint_C::ChoicePackFOVMinusOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "ChoicePackFOV-Out");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.DarkenBGVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AStoreCamera_Blueprint_C::DarkenBGVisibility(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "DarkenBGVisibility");

	Params::StoreCamera_Blueprint_C_DarkenBGVisibility Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__FinishedFunc
// (BlueprintEvent)

void AStoreCamera_Blueprint_C::ChoicePack__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "ChoicePack__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__UpdateFunc
// (BlueprintEvent)

void AStoreCamera_Blueprint_C::ChoicePack__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "ChoicePack__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.OnActivated
// (Event, Public, BlueprintEvent)

void AStoreCamera_Blueprint_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.OnDeactivated
// (Event, Public, BlueprintEvent)

void AStoreCamera_Blueprint_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.OpeningCameraTransition
// (BlueprintCallable, BlueprintEvent)

void AStoreCamera_Blueprint_C::OpeningCameraTransition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "OpeningCameraTransition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ResetCamera
// (BlueprintCallable, BlueprintEvent)

void AStoreCamera_Blueprint_C::ResetCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "ResetCamera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AStoreCamera_Blueprint_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AStoreCamera_Blueprint_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStoreCamera_Blueprint_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
