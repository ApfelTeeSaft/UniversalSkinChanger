#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HexmapLevelSettings_Temperate01

#include "Basic.hpp"

#include "HexmapLevelSettings_Temperate01_classes.hpp"
#include "HexmapLevelSettings_Temperate01_parameters.hpp"


namespace SDK
{

// Function HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C.ExecuteUbergraph_HexmapLevelSettings_Temperate01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHexmapLevelSettings_Temperate01_C::ExecuteUbergraph_HexmapLevelSettings_Temperate01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HexmapLevelSettings_Temperate01_C", "ExecuteUbergraph_HexmapLevelSettings_Temperate01");

	Params::HexmapLevelSettings_Temperate01_C_ExecuteUbergraph_HexmapLevelSettings_Temperate01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C.CustomSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHexmapLevelSettings_Temperate01_C::CustomSettings(bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HexmapLevelSettings_Temperate01_C", "CustomSettings");

	Params::HexmapLevelSettings_Temperate01_C_CustomSettings Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHexmapLevelSettings_Temperate01_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HexmapLevelSettings_Temperate01_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
