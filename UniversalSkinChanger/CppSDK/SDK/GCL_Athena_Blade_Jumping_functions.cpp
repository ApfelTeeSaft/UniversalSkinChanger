#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCL_Athena_Blade_Jumping

#include "Basic.hpp"

#include "GCL_Athena_Blade_Jumping_classes.hpp"
#include "GCL_Athena_Blade_Jumping_parameters.hpp"


namespace SDK
{

// Function GCL_Athena_Blade_Jumping.GCL_Athena_Blade_Jumping_C.ExecuteUbergraph_GCL_Athena_Blade_Jumping
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCL_Athena_Blade_Jumping_C::ExecuteUbergraph_GCL_Athena_Blade_Jumping(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_Athena_Blade_Jumping_C", "ExecuteUbergraph_GCL_Athena_Blade_Jumping");

	Params::GCL_Athena_Blade_Jumping_C_ExecuteUbergraph_GCL_Athena_Blade_Jumping Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCL_Athena_Blade_Jumping.GCL_Athena_Blade_Jumping_C.OnLoopingStart
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*> ParticleComponents                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>          AudioComponents                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCL_Athena_Blade_Jumping_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_Athena_Blade_Jumping_C", "OnLoopingStart");

	Params::GCL_Athena_Blade_Jumping_C_OnLoopingStart Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCL_Athena_Blade_Jumping.GCL_Athena_Blade_Jumping_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCL_Athena_Blade_Jumping_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_Athena_Blade_Jumping_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
