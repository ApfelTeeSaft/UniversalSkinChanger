#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInfoHeaderWidget

#include "Basic.hpp"

#include "ItemInfoHeaderWidget_classes.hpp"
#include "ItemInfoHeaderWidget_parameters.hpp"


namespace SDK
{

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.ExecuteUbergraph_ItemInfoHeaderWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInfoHeaderWidget_C::ExecuteUbergraph_ItemInfoHeaderWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "ExecuteUbergraph_ItemInfoHeaderWidget");

	Params::ItemInfoHeaderWidget_C_ExecuteUbergraph_ItemInfoHeaderWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.OnItemDefinitionChanged
// (Event, Protected, BlueprintEvent)

void UItemInfoHeaderWidget_C::OnItemDefinitionChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "OnItemDefinitionChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.Update
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*              ItemDefinition_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Quantity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInfoHeaderWidget_C::Update(class UFortItemDefinition* ItemDefinition_0, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "Update");

	Params::ItemInfoHeaderWidget_C_Update Parms{};

	Parms.ItemDefinition_0 = ItemDefinition_0;
	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateNameText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*              ItemDefinition_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Quantity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInfoHeaderWidget_C::UpdateNameText(class UFortItemDefinition* ItemDefinition_0, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "UpdateNameText");

	Params::ItemInfoHeaderWidget_C_UpdateNameText Parms{};

	Parms.ItemDefinition_0 = ItemDefinition_0;
	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldShowCard                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EFortItemCardSize                       CardSize_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldShowDetails                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ShouldShowDescription                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInfoHeaderWidget_C::Setup(bool ShouldShowCard, EFortItemCardSize CardSize_0, bool ShouldShowDetails, bool ShouldShowDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "Setup");

	Params::ItemInfoHeaderWidget_C_Setup Parms{};

	Parms.ShouldShowCard = ShouldShowCard;
	Parms.CardSize_0 = CardSize_0;
	Parms.ShouldShowDetails = ShouldShowDetails;
	Parms.ShouldShowDescription = ShouldShowDescription;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateCard
// (Private, BlueprintCallable, BlueprintEvent)

void UItemInfoHeaderWidget_C::UpdateCard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "UpdateCard");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateRemainingQuantity
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemInfoHeaderWidget_C::UpdateRemainingQuantity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "UpdateRemainingQuantity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetRemainingQuantity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldShowRemainingQuantity                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   NewRemainingQuantity                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInfoHeaderWidget_C::SetRemainingQuantity(bool ShouldShowRemainingQuantity, int32 NewRemainingQuantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "SetRemainingQuantity");

	Params::ItemInfoHeaderWidget_C_SetRemainingQuantity Parms{};

	Parms.ShouldShowRemainingQuantity = ShouldShowRemainingQuantity;
	Parms.NewRemainingQuantity = NewRemainingQuantity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldShowLocked                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             LockReason                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemInfoHeaderWidget_C::SetLocked(bool ShouldShowLocked, const class FText& LockReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "SetLocked");

	Params::ItemInfoHeaderWidget_C_SetLocked Parms{};

	Parms.ShouldShowLocked = ShouldShowLocked;
	Parms.LockReason = std::move(LockReason);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateLocked
// (Private, BlueprintCallable, BlueprintEvent)

void UItemInfoHeaderWidget_C::UpdateLocked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "UpdateLocked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetScrollWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInfoHeaderWidget_C::SetScrollWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "SetScrollWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateDetailVisibility
// (Private, BlueprintCallable, BlueprintEvent)

void UItemInfoHeaderWidget_C::UpdateDetailVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "UpdateDetailVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.OverrideHeaderAndDiscription
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Hearder                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Desciption                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             ItemType                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bUseAlternateHeaderBG                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInfoHeaderWidget_C::OverrideHeaderAndDiscription(const class FText& Hearder, const class FText& Desciption, const class FText& ItemType, bool bUseAlternateHeaderBG)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "OverrideHeaderAndDiscription");

	Params::ItemInfoHeaderWidget_C_OverrideHeaderAndDiscription Parms{};

	Parms.Hearder = std::move(Hearder);
	Parms.Desciption = std::move(Desciption);
	Parms.ItemType = std::move(ItemType);
	Parms.bUseAlternateHeaderBG = bUseAlternateHeaderBG;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateColorRarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortRarityItemData              NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemInfoHeaderWidget_C::UpdateColorRarity(const struct FFortRarityItemData& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "UpdateColorRarity");

	Params::ItemInfoHeaderWidget_C_UpdateColorRarity Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.HasValidItemDefinition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    HasValidDescription                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInfoHeaderWidget_C::HasValidItemDefinition(bool* HasValidDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "HasValidItemDefinition");

	Params::ItemInfoHeaderWidget_C_HasValidItemDefinition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HasValidDescription != nullptr)
		*HasValidDescription = Parms.HasValidDescription;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.GetAlternateNameForItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItemDefinition*              ItemDef                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UItemInfoHeaderWidget_C::GetAlternateNameForItem(class UFortItemDefinition* ItemDef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoHeaderWidget_C", "GetAlternateNameForItem");

	Params::ItemInfoHeaderWidget_C_GetAlternateNameForItem Parms{};

	Parms.ItemDef = ItemDef;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
