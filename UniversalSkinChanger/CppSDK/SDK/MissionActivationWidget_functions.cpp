#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionActivationWidget

#include "Basic.hpp"

#include "MissionActivationWidget_classes.hpp"
#include "MissionActivationWidget_parameters.hpp"


namespace SDK
{

// Function MissionActivationWidget.MissionActivationWidget_C.ExecuteUbergraph_MissionActivationWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::ExecuteUbergraph_MissionActivationWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "ExecuteUbergraph_MissionActivationWidget");

	Params::MissionActivationWidget_C_ExecuteUbergraph_MissionActivationWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionActivationWidget.MissionActivationWidget_C.InitFromObject
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InitObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::InitFromObject(class UObject* InitObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "InitFromObject");

	Params::MissionActivationWidget_C_InitFromObject Parms{};

	Parms.InitObject = InitObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionActivationWidget.MissionActivationWidget_C.HandleMissionActivatedNoVote
// (BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::HandleMissionActivatedNoVote()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "HandleMissionActivatedNoVote");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionActivationWidget.MissionActivationWidget_C.HandleSomeoneStartedOtherVote
// (BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::HandleSomeoneStartedOtherVote()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "HandleSomeoneStartedOtherVote");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionActivationWidget.MissionActivationWidget_C.OnActiveVoteChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// EFortVoteType                           VoteType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsVoteActive                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   VoteResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::OnActiveVoteChangedBP(EFortVoteType VoteType, bool bIsVoteActive, int32 VoteResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "OnActiveVoteChangedBP");

	Params::MissionActivationWidget_C_OnActiveVoteChangedBP Parms{};

	Parms.VoteType = VoteType;
	Parms.bIsVoteActive = bIsVoteActive;
	Parms.VoteResult = VoteResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionActivationWidget.MissionActivationWidget_C.OnBeginOutro
// (Event, Public, BlueprintEvent)

void UMissionActivationWidget_C::OnBeginOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "OnBeginOutro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionActivationWidget.MissionActivationWidget_C.OnBeginIntro
// (Event, Public, BlueprintEvent)

void UMissionActivationWidget_C::OnBeginIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "OnBeginIntro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionActivationWidget.MissionActivationWidget_C.HandleVoteResultFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortVoteType                           VoteType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionActivationWidget_C::HandleVoteResultFinished(EFortVoteType VoteType, bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "HandleVoteResultFinished");

	Params::MissionActivationWidget_C_HandleVoteResultFinished Parms{};

	Parms.VoteType = VoteType;
	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionActivationWidget.MissionActivationWidget_C.HandleOnRecepientVoted
// (BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::HandleOnRecepientVoted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "HandleOnRecepientVoted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionActivationWidget.MissionActivationWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionActivationWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "PreConstruct");

	Params::MissionActivationWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature");

	Params::MissionActivationWidget_C_BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_52_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_52_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_52_CommonButtonClicked__DelegateSignature");

	Params::MissionActivationWidget_C_BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_52_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionActivationWidget.MissionActivationWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UMissionActivationWidget_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionActivationWidget.MissionActivationWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionActivationWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_246_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_246_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_246_CommonButtonClicked__DelegateSignature");

	Params::MissionActivationWidget_C_BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_246_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_233_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_233_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_233_CommonButtonClicked__DelegateSignature");

	Params::MissionActivationWidget_C_BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_233_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature");

	Params::MissionActivationWidget_C_BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature");

	Params::MissionActivationWidget_C_BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::MissionActivationWidget_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionActivationWidget.MissionActivationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionActivationWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionActivationWidget.MissionActivationWidget_C.OnVoteLockoutChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// EFortVoteType                           VoteType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsLocked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionActivationWidget_C::OnVoteLockoutChangedBP(EFortVoteType VoteType, bool bIsLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "OnVoteLockoutChangedBP");

	Params::MissionActivationWidget_C_OnVoteLockoutChangedBP Parms{};

	Parms.VoteType = VoteType;
	Parms.bIsLocked = bIsLocked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionActivationWidget.MissionActivationWidget_C.OnStateUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// EFortMissionActivationWidgetState       ActiveState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortMissionActivationWidgetState       PreviousState_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::OnStateUpdated(EFortMissionActivationWidgetState ActiveState, EFortMissionActivationWidgetState PreviousState_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "OnStateUpdated");

	Params::MissionActivationWidget_C_OnStateUpdated Parms{};

	Parms.ActiveState = ActiveState;
	Parms.PreviousState_0 = PreviousState_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionActivationWidget.MissionActivationWidget_C.UpdatePanelButtonInteractability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ButtonsEnabled                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    UpdateLockoutDisplay                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ForceUpdateFocus                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    TryFocusIncreaseDifficulty                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionActivationWidget_C::UpdatePanelButtonInteractability(bool ButtonsEnabled, bool UpdateLockoutDisplay, bool ForceUpdateFocus, bool TryFocusIncreaseDifficulty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "UpdatePanelButtonInteractability");

	Params::MissionActivationWidget_C_UpdatePanelButtonInteractability Parms{};

	Parms.ButtonsEnabled = ButtonsEnabled;
	Parms.UpdateLockoutDisplay = UpdateLockoutDisplay;
	Parms.ForceUpdateFocus = ForceUpdateFocus;
	Parms.TryFocusIncreaseDifficulty = TryFocusIncreaseDifficulty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionActivationWidget.MissionActivationWidget_C.SetBluGloRequirementHint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BlugloRequirement_0                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::SetBluGloRequirementHint(int32 BlugloRequirement_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "SetBluGloRequirementHint");

	Params::MissionActivationWidget_C_SetBluGloRequirementHint Parms{};

	Parms.BlugloRequirement_0 = BlugloRequirement_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionActivationWidget.MissionActivationWidget_C.UpdateObjectiveReadyTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::UpdateObjectiveReadyTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "UpdateObjectiveReadyTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionActivationWidget.MissionActivationWidget_C.BindEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::BindEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "BindEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionActivationWidget.MissionActivationWidget_C.UnbindEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::UnbindEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "UnbindEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionActivationWidget.MissionActivationWidget_C.StartNextState
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::StartNextState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "StartNextState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionActivationWidget.MissionActivationWidget_C.UpdateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bLockedOut                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionActivationWidget_C::UpdateButton(class UCommonButton* Button, bool bEnabled, bool bLockedOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "UpdateButton");

	Params::MissionActivationWidget_C_UpdateButton Parms{};

	Parms.Button = Button;
	Parms.bEnabled = bEnabled;
	Parms.bLockedOut = bLockedOut;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionActivationWidget.MissionActivationWidget_C.GetMissionObjectiveRemainingTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UMissionActivationWidget_C::GetMissionObjectiveRemainingTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "GetMissionObjectiveRemainingTime");

	Params::MissionActivationWidget_C_GetMissionObjectiveRemainingTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MissionActivationWidget.MissionActivationWidget_C.HandleCloseDetailsPanelAnimFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::HandleCloseDetailsPanelAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionActivationWidget_C", "HandleCloseDetailsPanelAnimFinished");

	UObject::ProcessEvent(Func, nullptr);
}

}
