#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspectRefundDetailsPanel

#include "Basic.hpp"

#include "ItemInspectRefundDetailsPanel_classes.hpp"
#include "ItemInspectRefundDetailsPanel_parameters.hpp"


namespace SDK
{

// Function ItemInspectRefundDetailsPanel.ItemInspectRefundDetailsPanel_C.SetItemToRefund
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*                 ItemToRefund                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectRefundDetailsPanel_C::SetItemToRefund(class UFortAccountItem* ItemToRefund)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectRefundDetailsPanel_C", "SetItemToRefund");

	Params::ItemInspectRefundDetailsPanel_C_SetItemToRefund Parms{};

	Parms.ItemToRefund = ItemToRefund;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectRefundDetailsPanel.ItemInspectRefundDetailsPanel_C.SetScrollWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectRefundDetailsPanel_C::SetScrollWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectRefundDetailsPanel_C", "SetScrollWidget");

	UObject::ProcessEvent(Func, nullptr);
}

}
