#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAcquisitionOfferWidget

#include "Basic.hpp"

#include "AthenaDirectAcquisitionOfferWidget_classes.hpp"
#include "AthenaDirectAcquisitionOfferWidget_parameters.hpp"


namespace SDK
{

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferWidget_C::ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget");

	Params::AthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "Tick");

	Params::AthenaDirectAcquisitionOfferWidget_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.PlayAnim_CarouselTransition
// (BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::PlayAnim_CarouselTransition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "PlayAnim_CarouselTransition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferWidget_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "BP_OnItemExpansionChanged");

	Params::AthenaDirectAcquisitionOfferWidget_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.AnimEvent_Carousel_ImageSwap
// (BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::AnimEvent_Carousel_ImageSwap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "AnimEvent_Carousel_ImageSwap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnOfferAdded
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::OnOfferAdded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "OnOfferAdded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferWidget_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "OnListItemObjectSet");

	Params::AthenaDirectAcquisitionOfferWidget_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnUpdateStatus
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::OnUpdateStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "OnUpdateStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.HandleOfferPurchaseComplete
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FPurchasedItemInfo>       PurchasedItems                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaDirectAcquisitionOfferWidget_C::HandleOfferPurchaseComplete(bool bSuccess, const TArray<struct FPurchasedItemInfo>& PurchasedItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "HandleOfferPurchaseComplete");

	Params::AthenaDirectAcquisitionOfferWidget_C_HandleOfferPurchaseComplete Parms{};

	Parms.bSuccess = bSuccess;
	Parms.PurchasedItems = std::move(PurchasedItems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnOfferSet
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::OnOfferSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "OnOfferSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferWidget_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "BP_OnItemSelectionChanged");

	Params::AthenaDirectAcquisitionOfferWidget_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OfferSet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::OfferSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "OfferSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateAvailability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateAvailability()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "UpdateAvailability");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "UpdateStyle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.SetupPrice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PriceIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemCount_C*                     PriceWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferWidget_C::SetupPrice(int32 PriceIndex, class UItemCount_C* PriceWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "SetupPrice");

	Params::AthenaDirectAcquisitionOfferWidget_C_SetupPrice Parms{};

	Parms.PriceIndex = PriceIndex;
	Parms.PriceWidget = PriceWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.LargeImageLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          LoadedObject                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferWidget_C::LargeImageLoaded(class UObject* LoadedObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "LargeImageLoaded");

	Params::AthenaDirectAcquisitionOfferWidget_C_LargeImageLoaded Parms{};

	Parms.LoadedObject = LoadedObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "UpdateName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateShortDescription
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateShortDescription()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "UpdateShortDescription");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.Setup Price
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::Setup_Price()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "Setup Price");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateSaleStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateSaleStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "UpdateSaleStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.SetupSaleInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             SaleText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             NormalPrice                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           BannerOverrideTag                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bHasSale                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bHasBattlePassStars                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   INumOfBattlePassStars                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferWidget_C::SetupSaleInfo(const class FText& SaleText, const class FText& NormalPrice, const class FString& BannerOverrideTag, bool bHasSale, bool bHasBattlePassStars, int32 INumOfBattlePassStars)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "SetupSaleInfo");

	Params::AthenaDirectAcquisitionOfferWidget_C_SetupSaleInfo Parms{};

	Parms.SaleText = std::move(SaleText);
	Parms.NormalPrice = std::move(NormalPrice);
	Parms.BannerOverrideTag = std::move(BannerOverrideTag);
	Parms.bHasSale = bHasSale;
	Parms.bHasBattlePassStars = bHasBattlePassStars;
	Parms.INumOfBattlePassStars = INumOfBattlePassStars;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle_MainText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateStyle_MainText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "UpdateStyle_MainText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle_Border
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateStyle_Border()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "UpdateStyle_Border");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle_Sizing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateStyle_Sizing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "UpdateStyle_Sizing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateBadge
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateBadge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "UpdateBadge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.GetOfferIndexAndCountText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OfferIndex                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             OfferDisplayCount                                      (Parm, OutParm)
// int32                                   NextOfferIndex                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             NextOfferDisplayCount                                  (Parm, OutParm)

void UAthenaDirectAcquisitionOfferWidget_C::GetOfferIndexAndCountText(int32* OfferIndex, class FText* OfferDisplayCount, int32* NextOfferIndex, class FText* NextOfferDisplayCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "GetOfferIndexAndCountText");

	Params::AthenaDirectAcquisitionOfferWidget_C_GetOfferIndexAndCountText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OfferIndex != nullptr)
		*OfferIndex = Parms.OfferIndex;

	if (OfferDisplayCount != nullptr)
		*OfferDisplayCount = std::move(Parms.OfferDisplayCount);

	if (NextOfferIndex != nullptr)
		*NextOfferIndex = Parms.NextOfferIndex;

	if (NextOfferDisplayCount != nullptr)
		*NextOfferDisplayCount = std::move(Parms.NextOfferDisplayCount);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.HasGroupedOffers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAthenaDirectAcquisitionOfferWidget_C::HasGroupedOffers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "HasGroupedOffers");

	Params::AthenaDirectAcquisitionOfferWidget_C_HasGroupedOffers Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.TryToResetCarouselTimer
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferWidget_C::TryToResetCarouselTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "TryToResetCarouselTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.Bundle Short Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Text                                                   (Parm, OutParm)

void UAthenaDirectAcquisitionOfferWidget_C::Bundle_Short_Text(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "Bundle Short Text");

	Params::AthenaDirectAcquisitionOfferWidget_C_Bundle_Short_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.GetListItemObject
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UAthenaDirectAcquisitionOfferWidget_C::GetListItemObject() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "GetListItemObject");

	Params::AthenaDirectAcquisitionOfferWidget_C_GetListItemObject Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
