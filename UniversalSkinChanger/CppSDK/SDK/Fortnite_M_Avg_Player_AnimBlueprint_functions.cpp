#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fortnite_M_Avg_Player_AnimBlueprint

#include "Basic.hpp"

#include "Fortnite_M_Avg_Player_AnimBlueprint_classes.hpp"
#include "Fortnite_M_Avg_Player_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.MenuScreenDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerAnimInstance*          CharPart                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortnite_M_Avg_Player_AnimBlueprint_C::MenuScreenDispatcher__DelegateSignature(class UFortPlayerAnimInstance* CharPart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "MenuScreenDispatcher__DelegateSignature");

	Params::Fortnite_M_Avg_Player_AnimBlueprint_C_MenuScreenDispatcher__DelegateSignature Parms{};

	Parms.CharPart = CharPart;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortnite_M_Avg_Player_AnimBlueprint_C::ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint");

	Params::Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_L()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_Melee_Swing_L");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_Melee_Swing_R()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_Melee_Swing_R");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_playFacialAnim
// (BlueprintCallable, BlueprintEvent)

void UFortnite_M_Avg_Player_AnimBlueprint_C::AnimNotify_playFacialAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "AnimNotify_playFacialAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CharPartEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerAnimInstance*          CharPart                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortnite_M_Avg_Player_AnimBlueprint_C::CharPartEvent(class UFortPlayerAnimInstance* CharPart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fortnite_M_Avg_Player_AnimBlueprint_C", "CharPartEvent");

	Params::Fortnite_M_Avg_Player_AnimBlueprint_C_CharPartEvent Parms{};

	Parms.CharPart = CharPart;

	UObject::ProcessEvent(Func, &Parms);
}

}
