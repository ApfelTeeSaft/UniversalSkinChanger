#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_FerretWeapon

#include "Basic.hpp"

#include "B_FerretWeapon_classes.hpp"
#include "B_FerretWeapon_parameters.hpp"


namespace SDK
{

// Function B_FerretWeapon.B_FerretWeapon_C.ExecuteUbergraph_B_FerretWeapon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_FerretWeapon_C::ExecuteUbergraph_B_FerretWeapon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_FerretWeapon_C", "ExecuteUbergraph_B_FerretWeapon");

	Params::B_FerretWeapon_C_ExecuteUbergraph_B_FerretWeapon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_FerretWeapon.B_FerretWeapon_C.FerretSnowmanCheck
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AB_FerretWeapon_C::FerretSnowmanCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_FerretWeapon_C", "FerretSnowmanCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_FerretWeapon.B_FerretWeapon_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)

void AB_FerretWeapon_C::K2_OnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_FerretWeapon_C", "K2_OnUnEquip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_FerretWeapon.B_FerretWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_FerretWeapon_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_FerretWeapon_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
