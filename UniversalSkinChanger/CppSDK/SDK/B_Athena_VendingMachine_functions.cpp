#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Athena_VendingMachine

#include "Basic.hpp"

#include "B_Athena_VendingMachine_classes.hpp"
#include "B_Athena_VendingMachine_parameters.hpp"


namespace SDK
{

// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.ExecuteUbergraph_B_Athena_VendingMachine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Athena_VendingMachine_C::ExecuteUbergraph_B_Athena_VendingMachine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "ExecuteUbergraph_B_Athena_VendingMachine");

	Params::B_Athena_VendingMachine_C_ExecuteUbergraph_B_Athena_VendingMachine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Athena_VendingMachine_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.OnForcedCycle
// (Event, Public, BlueprintEvent)

void AB_Athena_VendingMachine_C::OnForcedCycle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "OnForcedCycle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.PlayVendFailFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Athena_VendingMachine_C::PlayVendFailFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "PlayVendFailFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.UpdateCollectorsActiveItem
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   StartingSeedValue                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItemDefinition*         InputItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                         InputTexture                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CurrentGoal                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CurrentCollectedAmount                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CurrentCaptureCount_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                         OutputTexture                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Athena_VendingMachine_C::UpdateCollectorsActiveItem(int32 StartingSeedValue, class UFortWorldItemDefinition* InputItem, class UTexture* InputTexture, int32 CurrentGoal, int32 CurrentCollectedAmount, int32 CurrentCaptureCount_0, class UTexture* OutputTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "UpdateCollectorsActiveItem");

	Params::B_Athena_VendingMachine_C_UpdateCollectorsActiveItem Parms{};

	Parms.StartingSeedValue = StartingSeedValue;
	Parms.InputItem = InputItem;
	Parms.InputTexture = InputTexture;
	Parms.CurrentGoal = CurrentGoal;
	Parms.CurrentCollectedAmount = CurrentCollectedAmount;
	Parms.CurrentCaptureCount_0 = CurrentCaptureCount_0;
	Parms.OutputTexture = OutputTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.PlayVendFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Athena_VendingMachine_C::PlayVendFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "PlayVendFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.BlueprintOnBeginInteract
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AB_Athena_VendingMachine_C::BlueprintOnBeginInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "BlueprintOnBeginInteract");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Athena_VendingMachine_C::BlueprintOnInteract(const class AFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "BlueprintOnInteract");

	Params::B_Athena_VendingMachine_C_BlueprintOnInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.VendWobble__Start FF Time__EventFunc
// (BlueprintEvent)

void AB_Athena_VendingMachine_C::VendWobble__Start_FF_Time__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "VendWobble__Start FF Time__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.VendWobble__UpdateFunc
// (BlueprintEvent)

void AB_Athena_VendingMachine_C::VendWobble__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "VendWobble__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.VendWobble__FinishedFunc
// (BlueprintEvent)

void AB_Athena_VendingMachine_C::VendWobble__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "VendWobble__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.SwitchHitch__UpdateFunc
// (BlueprintEvent)

void AB_Athena_VendingMachine_C::SwitchHitch__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "SwitchHitch__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.SwitchHitch__FinishedFunc
// (BlueprintEvent)

void AB_Athena_VendingMachine_C::SwitchHitch__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "SwitchHitch__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Athena_VendingMachine_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.SetRarityColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Athena_VendingMachine_C::SetRarityColors(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "SetRarityColors");

	Params::B_Athena_VendingMachine_C_SetRarityColors Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText AB_Athena_VendingMachine_C::BlueprintGetInteractionString(const class AFortPawn* InteractingPawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "BlueprintGetInteractionString");

	Params::B_Athena_VendingMachine_C_BlueprintGetInteractionString Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.GetOverrideRarity
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EFortRarity                             Rarity                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AB_Athena_VendingMachine_C::GetOverrideRarity(EFortRarity* Rarity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_VendingMachine_C", "GetOverrideRarity");

	Params::B_Athena_VendingMachine_C_GetOverrideRarity Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Rarity != nullptr)
		*Rarity = Parms.Rarity;

	return Parms.ReturnValue;
}

}
