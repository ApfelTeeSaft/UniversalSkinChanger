#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattlePassDirectAcquisitionScreen

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C
// 0x00A0 (0x0460 - 0x03C0)
class UBattlePassDirectAcquisitionScreen_C final : public UFortDirectAcquisitionWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Entrance_Tiles_0;                                  // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Entrance_OR;                                       // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Entrance_Tiles;                                    // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Entrance_Header;                                   // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorderTouchToClose;                          // 0x03E8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow;                                              // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         LeftTileHB;                                        // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          NoOffersBox;                                       // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayProgressSpinner;                            // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressSpinner;                                   // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         RightTileHB;                                       // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonDateTimeTextBlock*               SeasonCountdown;                                   // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SeasonEndsLabel;                                   // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  SwitcherItemsProgress;                             // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBOffers;                                          // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            FirstOfferGenerated;                               // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                TilePadding;                                       // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         ItemCount;                                         // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BattlePassDirectAcquisitionScreen(int32 EntryPoint);
	void OnBeginIntro();
	void BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void OnActivated();
	void OnOffersGenerated();
	void OnStartReadingOffers();
	void NoOffersAvailable();
	void GenerateOfferWidget(class UFortStoreFrontOfferInfo* OfferData);
	void Focus();
	void HandleBack(bool* bPassThrough);
	struct FEventReply On_CommonBorderTouchToClose_MouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Intro_Anim__Header_();
	void Intro_Anim__OR_();
	void Intro_Anim__Tiles_();
	void Intro_Anim_Reset();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattlePassDirectAcquisitionScreen_C">();
	}
	static class UBattlePassDirectAcquisitionScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassDirectAcquisitionScreen_C>();
	}
};
static_assert(alignof(UBattlePassDirectAcquisitionScreen_C) == 0x000008, "Wrong alignment on UBattlePassDirectAcquisitionScreen_C");
static_assert(sizeof(UBattlePassDirectAcquisitionScreen_C) == 0x000460, "Wrong size on UBattlePassDirectAcquisitionScreen_C");
static_assert(offsetof(UBattlePassDirectAcquisitionScreen_C, UberGraphFrame) == 0x0003C0, "Member 'UBattlePassDirectAcquisitionScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattlePassDirectAcquisitionScreen_C, Entrance_Tiles_0) == 0x0003C8, "Member 'UBattlePassDirectAcquisitionScreen_C::Entrance_Tiles_0' has a wrong offset!");
static_assert(offsetof(UBattlePassDirectAcquisitionScreen_C, Entrance_OR) == 0x0003D0, "Member 'UBattlePassDirectAcquisitionScreen_C::Entrance_OR' has a wrong offset!");
static_assert(offsetof(UBattlePassDirectAcquisitionScreen_C, Entrance_Tiles) == 0x0003D8, "Member 'UBattlePassDirectAcquisitionScreen_C::Entrance_Tiles' has a wrong offset!");
static_assert(offsetof(UBattlePassDirectAcquisitionScreen_C, Entrance_Header) == 0x0003E0, "Member 'UBattlePassDirectAcquisitionScreen_C::Entrance_Header' has a wrong offset!");
static_assert(offsetof(UBattlePassDirectAcquisitionScreen_C, CommonBorderTouchToClose) == 0x0003E8, "Member 'UBattlePassDirectAcquisitionScreen_C::CommonBorderTouchToClose' has a wrong offset!");
static_assert(offsetof(UBattlePassDirectAcquisitionScreen_C, Glow) == 0x0003F0, "Member 'UBattlePassDirectAcquisitionScreen_C::Glow' has a wrong offset!");
static_assert(offsetof(UBattlePassDirectAcquisitionScreen_C, LeftTileHB) == 0x0003F8, "Member 'UBattlePassDirectAcquisitionScreen_C::LeftTileHB' has a wrong offset!");
static_assert(offsetof(UBattlePassDirectAcquisitionScreen_C, NoOffersBox) == 0x000400, "Member 'UBattlePassDirectAcquisitionScreen_C::NoOffersBox' has a wrong offset!");
static_assert(offsetof(UBattlePassDirectAcquisitionScreen_C, OverlayProgressSpinner) == 0x000408, "Member 'UBattlePassDirectAcquisitionScreen_C::OverlayProgressSpinner' has a wrong offset!");
static_assert(offsetof(UBattlePassDirectAcquisitionScreen_C, ProgressSpinner) == 0x000410, "Member 'UBattlePassDirectAcquisitionScreen_C::ProgressSpinner' has a wrong offset!");
static_assert(offsetof(UBattlePassDirectAcquisitionScreen_C, RightTileHB) == 0x000418, "Member 'UBattlePassDirectAcquisitionScreen_C::RightTileHB' has a wrong offset!");
static_assert(offsetof(UBattlePassDirectAcquisitionScreen_C, SeasonCountdown) == 0x000420, "Member 'UBattlePassDirectAcquisitionScreen_C::SeasonCountdown' has a wrong offset!");
static_assert(offsetof(UBattlePassDirectAcquisitionScreen_C, SeasonEndsLabel) == 0x000428, "Member 'UBattlePassDirectAcquisitionScreen_C::SeasonEndsLabel' has a wrong offset!");
static_assert(offsetof(UBattlePassDirectAcquisitionScreen_C, SwitcherItemsProgress) == 0x000430, "Member 'UBattlePassDirectAcquisitionScreen_C::SwitcherItemsProgress' has a wrong offset!");
static_assert(offsetof(UBattlePassDirectAcquisitionScreen_C, VBOffers) == 0x000438, "Member 'UBattlePassDirectAcquisitionScreen_C::VBOffers' has a wrong offset!");
static_assert(offsetof(UBattlePassDirectAcquisitionScreen_C, FirstOfferGenerated) == 0x000440, "Member 'UBattlePassDirectAcquisitionScreen_C::FirstOfferGenerated' has a wrong offset!");
static_assert(offsetof(UBattlePassDirectAcquisitionScreen_C, TilePadding) == 0x000448, "Member 'UBattlePassDirectAcquisitionScreen_C::TilePadding' has a wrong offset!");
static_assert(offsetof(UBattlePassDirectAcquisitionScreen_C, ItemCount) == 0x000458, "Member 'UBattlePassDirectAcquisitionScreen_C::ItemCount' has a wrong offset!");

}
