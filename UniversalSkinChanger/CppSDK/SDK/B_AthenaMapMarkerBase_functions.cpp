#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_AthenaMapMarkerBase

#include "Basic.hpp"

#include "B_AthenaMapMarkerBase_classes.hpp"
#include "B_AthenaMapMarkerBase_parameters.hpp"


namespace SDK
{

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.ExecuteUbergraph_B_AthenaMapMarkerBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_AthenaMapMarkerBase_C::ExecuteUbergraph_B_AthenaMapMarkerBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "ExecuteUbergraph_B_AthenaMapMarkerBase");

	Params::B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnMarkerPlaced
// (Event, Protected, BlueprintEvent)

void AB_AthenaMapMarkerBase_C::OnMarkerPlaced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "OnMarkerPlaced");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnSetupMarker
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPlayerMarkerData                MarkerData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AB_AthenaMapMarkerBase_C::OnSetupMarker(const struct FPlayerMarkerData& MarkerData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "OnSetupMarker");

	Params::B_AthenaMapMarkerBase_C_OnSetupMarker Parms{};

	Parms.MarkerData = std::move(MarkerData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_AthenaMapMarkerBase_C::BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::B_AthenaMapMarkerBase_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.SpawnMarkerAnim__FinishedFunc
// (BlueprintEvent)

void AB_AthenaMapMarkerBase_C::SpawnMarkerAnim__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "SpawnMarkerAnim__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.SpawnMarkerAnim__UpdateFunc
// (BlueprintEvent)

void AB_AthenaMapMarkerBase_C::SpawnMarkerAnim__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "SpawnMarkerAnim__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_AthenaMapMarkerBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
