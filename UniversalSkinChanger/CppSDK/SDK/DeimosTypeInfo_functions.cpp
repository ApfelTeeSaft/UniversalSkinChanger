#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DeimosTypeInfo

#include "Basic.hpp"

#include "DeimosTypeInfo_classes.hpp"
#include "DeimosTypeInfo_parameters.hpp"


namespace SDK
{

// Function DeimosTypeInfo.DeimosTypeInfo_C.GetEnemyColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FLinearColor                     Color                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IDeimosTypeInfo_C::GetEnemyColor(struct FLinearColor* Color) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeimosTypeInfo_C", "GetEnemyColor");

	Params::DeimosTypeInfo_C_GetEnemyColor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}

}
