#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabVideoOptions

#include "Basic.hpp"

#include "TabVideoOptions_classes.hpp"
#include "TabVideoOptions_parameters.hpp"


namespace SDK
{

// Function TabVideoOptions.TabVideoOptions_C.Enable Overlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Accept_Input                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabVideoOptions_C::Enable_Overlay__DelegateSignature(bool Accept_Input)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "Enable Overlay__DelegateSignature");

	Params::TabVideoOptions_C_Enable_Overlay__DelegateSignature Parms{};

	Parms.Accept_Input = Accept_Input;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.Disable Overlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTabVideoOptions_C::Disable_Overlay__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "Disable Overlay__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabVideoOptions.TabVideoOptions_C.ExecuteUbergraph_TabVideoOptions
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::ExecuteUbergraph_TabVideoOptions(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "ExecuteUbergraph_TabVideoOptions");

	Params::TabVideoOptions_C_ExecuteUbergraph_TabVideoOptions Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.Setting Value Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Setting_Value_Changed(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "Setting Value Changed");

	Params::TabVideoOptions_C_Setting_Value_Changed Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.Quality Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Quality_Changed(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "Quality Changed");

	Params::TabVideoOptions_C_Quality_Changed Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.Window Mode Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsWindowedFullscreen                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabVideoOptions_C::Window_Mode_Changed(bool IsWindowedFullscreen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "Window Mode Changed");

	Params::TabVideoOptions_C_Window_Mode_Changed Parms{};

	Parms.IsWindowedFullscreen = IsWindowedFullscreen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature");

	Params::TabVideoOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature");

	Params::TabVideoOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabVideoOptions.TabVideoOptions_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabVideoOptions_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabVideoOptions.TabVideoOptions_C.OnGameUserSettingsUINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UTabVideoOptions_C::OnGameUserSettingsUINeedsUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "OnGameUserSettingsUINeedsUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabVideoOptions.TabVideoOptions_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabVideoOptions_C::CenterOnTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "CenterOnTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabVideoOptions.TabVideoOptions_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabVideoOptions_C::UpdateOptionsTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "UpdateOptionsTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabVideoOptions.TabVideoOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabVideoOptions_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabVideoOptions.TabVideoOptions_C.Update Qualities
// (Public, BlueprintCallable, BlueprintEvent)

void UTabVideoOptions_C::Update_Qualities()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabVideoOptions_C", "Update Qualities");

	UObject::ProcessEvent(Func, nullptr);
}

}
