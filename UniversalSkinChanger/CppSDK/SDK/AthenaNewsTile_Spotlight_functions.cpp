#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaNewsTile_Spotlight

#include "Basic.hpp"

#include "AthenaNewsTile_Spotlight_classes.hpp"
#include "AthenaNewsTile_Spotlight_parameters.hpp"


namespace SDK
{

// Function AthenaNewsTile_Spotlight.AthenaNewsTile_Spotlight_C.ExecuteUbergraph_AthenaNewsTile_Spotlight
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaNewsTile_Spotlight_C::ExecuteUbergraph_AthenaNewsTile_Spotlight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaNewsTile_Spotlight_C", "ExecuteUbergraph_AthenaNewsTile_Spotlight");

	Params::AthenaNewsTile_Spotlight_C_ExecuteUbergraph_AthenaNewsTile_Spotlight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaNewsTile_Spotlight.AthenaNewsTile_Spotlight_C.PlayIntroAnim
// (Event, Public, BlueprintEvent)

void UAthenaNewsTile_Spotlight_C::PlayIntroAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaNewsTile_Spotlight_C", "PlayIntroAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaNewsTile_Spotlight.AthenaNewsTile_Spotlight_C.SetDefaultImage
// (Event, Public, BlueprintEvent)

void UAthenaNewsTile_Spotlight_C::SetDefaultImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaNewsTile_Spotlight_C", "SetDefaultImage");

	UObject::ProcessEvent(Func, nullptr);
}

}
