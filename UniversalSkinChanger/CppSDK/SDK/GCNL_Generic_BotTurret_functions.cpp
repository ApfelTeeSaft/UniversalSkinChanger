#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Generic_BotTurret

#include "Basic.hpp"

#include "GCNL_Generic_BotTurret_classes.hpp"
#include "GCNL_Generic_BotTurret_parameters.hpp"


namespace SDK
{

// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.ExecuteUbergraph_GCNL_Generic_BotTurret
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Generic_BotTurret_C::ExecuteUbergraph_GCNL_Generic_BotTurret(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "ExecuteUbergraph_GCNL_Generic_BotTurret");

	Params::GCNL_Generic_BotTurret_C_ExecuteUbergraph_GCNL_Generic_BotTurret Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BotExplosionWarning
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Generic_BotTurret_C::BotExplosionWarning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "BotExplosionWarning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BindBotExplosionWarning
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Generic_BotTurret_C::BindBotExplosionWarning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "BindBotExplosionWarning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BindBotFired
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Generic_BotTurret_C::BindBotFired()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "BindBotFired");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.Activated
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Generic_BotTurret_C::Activated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "Activated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BotFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Left                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Generic_BotTurret_C::BotFired(int32 Left)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "BotFired");

	Params::GCNL_Generic_BotTurret_C_BotFired Parms{};

	Parms.Left = Left;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCNL_Generic_BotTurret_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCNL_Generic_BotTurret_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "OnRemove");

	Params::GCNL_Generic_BotTurret_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCNL_Generic_BotTurret_C::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "OnActive");

	Params::GCNL_Generic_BotTurret_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
