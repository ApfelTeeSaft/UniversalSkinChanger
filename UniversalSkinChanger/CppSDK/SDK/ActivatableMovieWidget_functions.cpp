#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActivatableMovieWidget

#include "Basic.hpp"

#include "ActivatableMovieWidget_classes.hpp"
#include "ActivatableMovieWidget_parameters.hpp"


namespace SDK
{

// Function ActivatableMovieWidget.ActivatableMovieWidget_C.ExecuteUbergraph_ActivatableMovieWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivatableMovieWidget_C::ExecuteUbergraph_ActivatableMovieWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivatableMovieWidget_C", "ExecuteUbergraph_ActivatableMovieWidget");

	Params::ActivatableMovieWidget_C_ExecuteUbergraph_ActivatableMovieWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UActivatableMovieWidget_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivatableMovieWidget_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UActivatableMovieWidget_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivatableMovieWidget_C", "OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}

}
