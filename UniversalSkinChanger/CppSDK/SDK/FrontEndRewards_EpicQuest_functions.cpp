#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontEndRewards_EpicQuest

#include "Basic.hpp"

#include "FrontEndRewards_EpicQuest_classes.hpp"
#include "FrontEndRewards_EpicQuest_parameters.hpp"


namespace SDK
{

// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.ExecuteUbergraph_FrontEndRewards_EpicQuest
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_EpicQuest_C::ExecuteUbergraph_FrontEndRewards_EpicQuest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_EpicQuest_C", "ExecuteUbergraph_FrontEndRewards_EpicQuest");

	Params::FrontEndRewards_EpicQuest_C_ExecuteUbergraph_FrontEndRewards_EpicQuest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.OnPrimaryAction
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_EpicQuest_C::OnPrimaryAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_EpicQuest_C", "OnPrimaryAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFrontEndRewards_EpicQuest_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_EpicQuest_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.TransitionOutBegin
// (Event, Protected, BlueprintEvent)

void UFrontEndRewards_EpicQuest_C::TransitionOutBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_EpicQuest_C", "TransitionOutBegin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.TransitionInBegin
// (Event, Protected, BlueprintEvent)

void UFrontEndRewards_EpicQuest_C::TransitionInBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_EpicQuest_C", "TransitionInBegin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.PopulateFromQuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*                   InQuest                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_EpicQuest_C::PopulateFromQuest(class UFortQuestItem* InQuest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_EpicQuest_C", "PopulateFromQuest");

	Params::FrontEndRewards_EpicQuest_C_PopulateFromQuest Parms{};

	Parms.InQuest = InQuest;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.HandleContinueAction
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Committed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_EpicQuest_C::HandleContinueAction(bool* Committed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_EpicQuest_C", "HandleContinueAction");

	Params::FrontEndRewards_EpicQuest_C_HandleContinueAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Committed != nullptr)
		*Committed = Parms.Committed;
}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.HandleTransitionInComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_EpicQuest_C::HandleTransitionInComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_EpicQuest_C", "HandleTransitionInComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.MarkQuestAsSeen
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_EpicQuest_C::MarkQuestAsSeen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_EpicQuest_C", "MarkQuestAsSeen");

	UObject::ProcessEvent(Func, nullptr);
}

}
