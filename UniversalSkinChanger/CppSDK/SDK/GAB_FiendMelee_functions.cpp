#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_FiendMelee

#include "Basic.hpp"

#include "GAB_FiendMelee_classes.hpp"
#include "GAB_FiendMelee_parameters.hpp"


namespace SDK
{

// Function GAB_FiendMelee.GAB_FiendMelee_C.ExecuteUbergraph_GAB_FiendMelee
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_FiendMelee_C::ExecuteUbergraph_GAB_FiendMelee(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FiendMelee_C", "ExecuteUbergraph_GAB_FiendMelee");

	Params::GAB_FiendMelee_C_ExecuteUbergraph_GAB_FiendMelee Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.GameplayEffectContainerApplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Target_Data                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_FiendMelee_C::GameplayEffectContainerApplied(const struct FGameplayAbilityTargetDataHandle& Target_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FiendMelee_C", "GameplayEffectContainerApplied");

	Params::GAB_FiendMelee_C_GameplayEffectContainerApplied Parms{};

	Parms.Target_Data = std::move(Target_Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.ContinuousMoveTowardsTarget
// (BlueprintCallable, BlueprintEvent)

void UGAB_FiendMelee_C::ContinuousMoveTowardsTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FiendMelee_C", "ContinuousMoveTowardsTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_FiendMelee_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FiendMelee_C", "K2_OnEndAbility");

	Params::GAB_FiendMelee_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_FiendMelee_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FiendMelee_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.Triggered_7FA319D24D6A2844B0CE37B57B709AE5
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_FiendMelee_C::Triggered_7FA319D24D6A2844B0CE37B57B709AE5(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FiendMelee_C", "Triggered_7FA319D24D6A2844B0CE37B57B709AE5");

	Params::GAB_FiendMelee_C_Triggered_7FA319D24D6A2844B0CE37B57B709AE5 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.Cancelled_7FA319D24D6A2844B0CE37B57B709AE5
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_FiendMelee_C::Cancelled_7FA319D24D6A2844B0CE37B57B709AE5(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FiendMelee_C", "Cancelled_7FA319D24D6A2844B0CE37B57B709AE5");

	Params::GAB_FiendMelee_C_Cancelled_7FA319D24D6A2844B0CE37B57B709AE5 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.Completed_7FA319D24D6A2844B0CE37B57B709AE5
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_FiendMelee_C::Completed_7FA319D24D6A2844B0CE37B57B709AE5(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FiendMelee_C", "Completed_7FA319D24D6A2844B0CE37B57B709AE5");

	Params::GAB_FiendMelee_C_Completed_7FA319D24D6A2844B0CE37B57B709AE5 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.OnComplete_445BEF534036169059384B82E2963353
// (BlueprintCallable, BlueprintEvent)

void UGAB_FiendMelee_C::OnComplete_445BEF534036169059384B82E2963353()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FiendMelee_C", "OnComplete_445BEF534036169059384B82E2963353");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.OnInterrupted_445BEF534036169059384B82E2963353
// (BlueprintCallable, BlueprintEvent)

void UGAB_FiendMelee_C::OnInterrupted_445BEF534036169059384B82E2963353()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FiendMelee_C", "OnInterrupted_445BEF534036169059384B82E2963353");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.OnCancelled_445BEF534036169059384B82E2963353
// (BlueprintCallable, BlueprintEvent)

void UGAB_FiendMelee_C::OnCancelled_445BEF534036169059384B82E2963353()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FiendMelee_C", "OnCancelled_445BEF534036169059384B82E2963353");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.OnRequestFailed_445BEF534036169059384B82E2963353
// (BlueprintCallable, BlueprintEvent)

void UGAB_FiendMelee_C::OnRequestFailed_445BEF534036169059384B82E2963353()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FiendMelee_C", "OnRequestFailed_445BEF534036169059384B82E2963353");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.OnMoveFinished_445BEF534036169059384B82E2963353
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*                    AIController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_FiendMelee_C::OnMoveFinished_445BEF534036169059384B82E2963353(EPathFollowingResult Result, class AAIController* AIController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FiendMelee_C", "OnMoveFinished_445BEF534036169059384B82E2963353");

	Params::GAB_FiendMelee_C_OnMoveFinished_445BEF534036169059384B82E2963353 Parms{};

	Parms.Result = Result;
	Parms.AIController = AIController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.Cancelled_35D25988427E4CF4800223AD6BCDA350
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_FiendMelee_C::Cancelled_35D25988427E4CF4800223AD6BCDA350(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FiendMelee_C", "Cancelled_35D25988427E4CF4800223AD6BCDA350");

	Params::GAB_FiendMelee_C_Cancelled_35D25988427E4CF4800223AD6BCDA350 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.Completed_35D25988427E4CF4800223AD6BCDA350
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_FiendMelee_C::Completed_35D25988427E4CF4800223AD6BCDA350(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FiendMelee_C", "Completed_35D25988427E4CF4800223AD6BCDA350");

	Params::GAB_FiendMelee_C_Completed_35D25988427E4CF4800223AD6BCDA350 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.Triggered_35D25988427E4CF4800223AD6BCDA350
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_FiendMelee_C::Triggered_35D25988427E4CF4800223AD6BCDA350(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_FiendMelee_C", "Triggered_35D25988427E4CF4800223AD6BCDA350");

	Params::GAB_FiendMelee_C_Triggered_35D25988427E4CF4800223AD6BCDA350 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

}
