#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Parent_BuildingWall

#include "Basic.hpp"

#include "Parent_BuildingWall_classes.hpp"


namespace SDK
{

// Function Parent_BuildingWall.Parent_BuildingWall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AParent_BuildingWall_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Parent_BuildingWall_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
