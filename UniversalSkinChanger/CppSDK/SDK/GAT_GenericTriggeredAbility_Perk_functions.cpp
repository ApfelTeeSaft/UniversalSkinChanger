#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_GenericTriggeredAbility_Perk

#include "Basic.hpp"

#include "GAT_GenericTriggeredAbility_Perk_classes.hpp"
#include "GAT_GenericTriggeredAbility_Perk_parameters.hpp"


namespace SDK
{

// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_GenericTriggeredAbility_Perk_C::ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_GenericTriggeredAbility_Perk_C", "ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk");

	Params::GAT_GenericTriggeredAbility_Perk_C_ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData_0                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAT_GenericTriggeredAbility_Perk_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_GenericTriggeredAbility_Perk_C", "K2_ActivateAbilityFromEvent");

	Params::GAT_GenericTriggeredAbility_Perk_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData_0 = std::move(EventData_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.CheckStreak
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CountPerTrigger                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxStreak                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   StreakCount_0                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    StreakMaxed                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAT_GenericTriggeredAbility_Perk_C::CheckStreak(int32 CountPerTrigger, int32 MaxStreak, int32* StreakCount_0, bool* StreakMaxed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_GenericTriggeredAbility_Perk_C", "CheckStreak");

	Params::GAT_GenericTriggeredAbility_Perk_C_CheckStreak Parms{};

	Parms.CountPerTrigger = CountPerTrigger;
	Parms.MaxStreak = MaxStreak;

	UObject::ProcessEvent(Func, &Parms);

	if (StreakCount_0 != nullptr)
		*StreakCount_0 = Parms.StreakCount_0;

	if (StreakMaxed != nullptr)
		*StreakMaxed = Parms.StreakMaxed;
}


// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.GrantFragmentCharge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Grant_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_GenericTriggeredAbility_Perk_C::GrantFragmentCharge(int32 Grant_Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_GenericTriggeredAbility_Perk_C", "GrantFragmentCharge");

	Params::GAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge Parms{};

	Parms.Grant_Amount = Grant_Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.GetCorrectBalanceValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScalableFloat                   Lookup_Base                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FScalableFloat                   Lookup_Commander                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTag                     Commander_Tag                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                                   Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_GenericTriggeredAbility_Perk_C::GetCorrectBalanceValue(const struct FScalableFloat& Lookup_Base, const struct FScalableFloat& Lookup_Commander, const struct FGameplayTag& Commander_Tag, float* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_GenericTriggeredAbility_Perk_C", "GetCorrectBalanceValue");

	Params::GAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue Parms{};

	Parms.Lookup_Base = std::move(Lookup_Base);
	Parms.Lookup_Commander = std::move(Lookup_Commander);
	Parms.Commander_Tag = std::move(Commander_Tag);

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.SetDamageElement
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer            InstegatorTags                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass*                           DefaultEffect                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           ElementEffectOut                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    EffectWasChanged                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAT_GenericTriggeredAbility_Perk_C::SetDamageElement(const struct FGameplayTagContainer& InstegatorTags, class UClass* DefaultEffect, class UClass** ElementEffectOut, bool* EffectWasChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_GenericTriggeredAbility_Perk_C", "SetDamageElement");

	Params::GAT_GenericTriggeredAbility_Perk_C_SetDamageElement Parms{};

	Parms.InstegatorTags = std::move(InstegatorTags);
	Parms.DefaultEffect = DefaultEffect;

	UObject::ProcessEvent(Func, &Parms);

	if (ElementEffectOut != nullptr)
		*ElementEffectOut = Parms.ElementEffectOut;

	if (EffectWasChanged != nullptr)
		*EffectWasChanged = Parms.EffectWasChanged;
}


// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.GrantRegenItemToOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  FortPlayerPawn_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItemDefinition*         ItemToGive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumberToGive                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NotifyPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAT_GenericTriggeredAbility_Perk_C::GrantRegenItemToOwner(class AFortPlayerPawn* FortPlayerPawn_0, class UFortWorldItemDefinition* ItemToGive, int32 NumberToGive, bool NotifyPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_GenericTriggeredAbility_Perk_C", "GrantRegenItemToOwner");

	Params::GAT_GenericTriggeredAbility_Perk_C_GrantRegenItemToOwner Parms{};

	Parms.FortPlayerPawn_0 = FortPlayerPawn_0;
	Parms.ItemToGive = ItemToGive;
	Parms.NumberToGive = NumberToGive;
	Parms.NotifyPlayer = NotifyPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.CalcStreakBreakerThreshold
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   PROC_Chance__0Minus1_                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Streak_Breaker_Threshold                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_GenericTriggeredAbility_Perk_C::CalcStreakBreakerThreshold(float PROC_Chance__0Minus1_, int32* Streak_Breaker_Threshold)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_GenericTriggeredAbility_Perk_C", "CalcStreakBreakerThreshold");

	Params::GAT_GenericTriggeredAbility_Perk_C_CalcStreakBreakerThreshold Parms{};

	Parms.PROC_Chance__0Minus1_ = PROC_Chance__0Minus1_;

	UObject::ProcessEvent(Func, &Parms);

	if (Streak_Breaker_Threshold != nullptr)
		*Streak_Breaker_Threshold = Parms.Streak_Breaker_Threshold;
}

}
