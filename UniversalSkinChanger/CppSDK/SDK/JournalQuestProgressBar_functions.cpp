#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JournalQuestProgressBar

#include "Basic.hpp"

#include "JournalQuestProgressBar_classes.hpp"
#include "JournalQuestProgressBar_parameters.hpp"


namespace SDK
{

// Function JournalQuestProgressBar.JournalQuestProgressBar_C.ExecuteUbergraph_JournalQuestProgressBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJournalQuestProgressBar_C::ExecuteUbergraph_JournalQuestProgressBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestProgressBar_C", "ExecuteUbergraph_JournalQuestProgressBar");

	Params::JournalQuestProgressBar_C_ExecuteUbergraph_JournalQuestProgressBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JournalQuestProgressBar.JournalQuestProgressBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJournalQuestProgressBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestProgressBar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JournalQuestProgressBar.JournalQuestProgressBar_C.Handle Quests Updated
// (BlueprintCallable, BlueprintEvent)

void UJournalQuestProgressBar_C::Handle_Quests_Updated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestProgressBar_C", "Handle Quests Updated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JournalQuestProgressBar.JournalQuestProgressBar_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJournalQuestProgressBar_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestProgressBar_C", "OnListItemObjectSet");

	Params::JournalQuestProgressBar_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JournalQuestProgressBar.JournalQuestProgressBar_C.SetStylesToDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UJournalQuestProgressBar_C::SetStylesToDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestProgressBar_C", "SetStylesToDefault");

	UObject::ProcessEvent(Func, nullptr);
}

}
