#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSeasonPageWidget

#include "Basic.hpp"

#include "AthenaSeasonPageWidget_classes.hpp"
#include "AthenaSeasonPageWidget_parameters.hpp"


namespace SDK
{

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.PageLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonPageWidget_C::PageLeft__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonPageWidget_C", "PageLeft__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.PageRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonPageWidget_C::PageRight__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonPageWidget_C", "PageRight__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.ExecuteUbergraph_AthenaSeasonPageWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonPageWidget_C::ExecuteUbergraph_AthenaSeasonPageWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonPageWidget_C", "ExecuteUbergraph_AthenaSeasonPageWidget");

	Params::AthenaSeasonPageWidget_C_ExecuteUbergraph_AthenaSeasonPageWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.ScreenShown
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonPageWidget_C::ScreenShown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonPageWidget_C", "ScreenShown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.OnBattlePassChanged
// (Event, Protected, BlueprintEvent)

void UAthenaSeasonPageWidget_C::OnBattlePassChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonPageWidget_C", "OnBattlePassChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.NavigatePageLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonPageWidget_C::NavigatePageLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonPageWidget_C", "NavigatePageLeft");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.NavigatePageRight
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonPageWidget_C::NavigatePageRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonPageWidget_C", "NavigatePageRight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaSeasonPageWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonPageWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaSeasonPageWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonPageWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.AddLevelWidgets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSeasonPassLevelInfo*         LevelInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USeasonPassLevelWidget*>   LevelWidgets                                           (Parm, OutParm, ZeroConstructor)

void UAthenaSeasonPageWidget_C::AddLevelWidgets(class UFortSeasonPassLevelInfo* LevelInfo, TArray<class USeasonPassLevelWidget*>* LevelWidgets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonPageWidget_C", "AddLevelWidgets");

	Params::AthenaSeasonPageWidget_C_AddLevelWidgets Parms{};

	Parms.LevelInfo = LevelInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (LevelWidgets != nullptr)
		*LevelWidgets = std::move(Parms.LevelWidgets);
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.IsFull
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Full_0                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonPageWidget_C::IsFull(bool* Full_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonPageWidget_C", "IsFull");

	Params::AthenaSeasonPageWidget_C_IsFull Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Full_0 != nullptr)
		*Full_0 = Parms.Full_0;
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.ContainsLevel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAthenaSeasonPageWidget_C::ContainsLevel(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonPageWidget_C", "ContainsLevel");

	Params::AthenaSeasonPageWidget_C_ContainsLevel Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.PagePopulationComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonPageWidget_C::PagePopulationComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonPageWidget_C", "PagePopulationComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.AddPaidRewards
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InColumn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSeasonPassLevelInfo*         LevelInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSeasonLevelPaidRewardsWidget_C*OutputPin                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonPageWidget_C::AddPaidRewards(int32 InColumn, class UFortSeasonPassLevelInfo* LevelInfo, class UAthenaSeasonLevelPaidRewardsWidget_C** OutputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonPageWidget_C", "AddPaidRewards");

	Params::AthenaSeasonPageWidget_C_AddPaidRewards Parms{};

	Parms.InColumn = InColumn;
	Parms.LevelInfo = LevelInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = Parms.OutputPin;
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.AddFreeRewards
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InColumn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSeasonPassLevelInfo*         LevelInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSeasonLevelFreeRewardsWidget_C*ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UAthenaSeasonLevelFreeRewardsWidget_C* UAthenaSeasonPageWidget_C::AddFreeRewards(int32 InColumn, class UFortSeasonPassLevelInfo* LevelInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonPageWidget_C", "AddFreeRewards");

	Params::AthenaSeasonPageWidget_C_AddFreeRewards Parms{};

	Parms.InColumn = InColumn;
	Parms.LevelInfo = LevelInfo;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.GetFirstLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   FirstLevel                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonPageWidget_C::GetFirstLevel(int32* FirstLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonPageWidget_C", "GetFirstLevel");

	Params::AthenaSeasonPageWidget_C_GetFirstLevel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FirstLevel != nullptr)
		*FirstLevel = Parms.FirstLevel;
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.UpdateDynamicData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonPageWidget_C::UpdateDynamicData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonPageWidget_C", "UpdateDynamicData");

	UObject::ProcessEvent(Func, nullptr);
}

}
