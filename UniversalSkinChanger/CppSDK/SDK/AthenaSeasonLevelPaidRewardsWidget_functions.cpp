#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSeasonLevelPaidRewardsWidget

#include "Basic.hpp"

#include "AthenaSeasonLevelPaidRewardsWidget_classes.hpp"
#include "AthenaSeasonLevelPaidRewardsWidget_parameters.hpp"


namespace SDK
{

// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonLevelPaidRewardsWidget_C::ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonLevelPaidRewardsWidget_C", "ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget");

	Params::AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.PlayIntro
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonLevelPaidRewardsWidget_C::PlayIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonLevelPaidRewardsWidget_C", "PlayIntro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.OnNavigateTo
// (Event, Public, BlueprintEvent)

void UAthenaSeasonLevelPaidRewardsWidget_C::OnNavigateTo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonLevelPaidRewardsWidget_C", "OnNavigateTo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.OnLockedStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    FreeUnlocked                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    PaidUnlocked                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonLevelPaidRewardsWidget_C::OnLockedStatusChanged(bool FreeUnlocked, bool PaidUnlocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonLevelPaidRewardsWidget_C", "OnLockedStatusChanged");

	Params::AthenaSeasonLevelPaidRewardsWidget_C_OnLockedStatusChanged Parms{};

	Parms.FreeUnlocked = FreeUnlocked;
	Parms.PaidUnlocked = PaidUnlocked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.OnSetup
// (Event, Public, BlueprintEvent)

void UAthenaSeasonLevelPaidRewardsWidget_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonLevelPaidRewardsWidget_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.UpdateStyling
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonLevelPaidRewardsWidget_C::UpdateStyling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonLevelPaidRewardsWidget_C", "UpdateStyling");

	UObject::ProcessEvent(Func, nullptr);
}

}
