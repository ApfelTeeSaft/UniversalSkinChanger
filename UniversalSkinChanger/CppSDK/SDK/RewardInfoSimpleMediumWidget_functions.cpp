#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RewardInfoSimpleMediumWidget

#include "Basic.hpp"

#include "RewardInfoSimpleMediumWidget_classes.hpp"
#include "RewardInfoSimpleMediumWidget_parameters.hpp"


namespace SDK
{

// Function RewardInfoSimpleMediumWidget.RewardInfoSimpleMediumWidget_C.ExecuteUbergraph_RewardInfoSimpleMediumWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardInfoSimpleMediumWidget_C::ExecuteUbergraph_RewardInfoSimpleMediumWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardInfoSimpleMediumWidget_C", "ExecuteUbergraph_RewardInfoSimpleMediumWidget");

	Params::RewardInfoSimpleMediumWidget_C_ExecuteUbergraph_RewardInfoSimpleMediumWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardInfoSimpleMediumWidget.RewardInfoSimpleMediumWidget_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)

void URewardInfoSimpleMediumWidget_C::HandleDifferentItemOrQuantitySetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardInfoSimpleMediumWidget_C", "HandleDifferentItemOrQuantitySetBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardInfoSimpleMediumWidget.RewardInfoSimpleMediumWidget_C.GetDisplayName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             DisplayName                                            (Parm, OutParm)

void URewardInfoSimpleMediumWidget_C::GetDisplayName(class FText* DisplayName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardInfoSimpleMediumWidget_C", "GetDisplayName");

	Params::RewardInfoSimpleMediumWidget_C_GetDisplayName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DisplayName != nullptr)
		*DisplayName = std::move(Parms.DisplayName);
}

}
