#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspectScreen

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemInspectScreen.ItemInspectScreen_C
// 0x0140 (0x0650 - 0x0510)
class UItemInspectScreen_C final : public UFortItemInspectionScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USpacer*                                CameraFrameSpacer;                                 // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalTabList_C*                   ExtraDetailsPanelTabList;                          // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  ExtraDetailsTabContentSwitcher;                    // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           HeroBonusesTabContentBox;                          // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHeroLoadoutActiveAbilitiesDetailWidget_C* HeroLoadoutActiveAbilitiesDetailWidget;            // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHeroLoadoutPerksDetailWidget_C*        HeroLoadoutPerksDetailWidget;                      // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ItemActionSwitcher;                                // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemAlterationsListDetailWidget_C*     ItemAlterationsListDetailWidget;                   // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemCraftingIngredientsDetailWidget_C* ItemCraftingIngredientsDetailWidget;               // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDescriptionDetailWidget_C*         ItemDescriptionDetailWidget;                       // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectEvolutionConfirmation_C*    ItemInspectEvolutionConfirmation;                  // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectEvolveRarityConfirmation_C* ItemInspectEvolveRarityConfirmation;               // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectUpgradeCallout_C*           ItemInspectUpgradeCallout;                         // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectUpgradeConfirmation_C*      ItemInspectUpgradeConfirmation;                    // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemPerksListDetailWidget_C*           ItemPerksListDetailWidget;                         // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectionMainItemDetailsHostPanel_C* MainDetailsPanel;                                  // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           PerksAndAlterationsBox;                            // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBoxDetails;                                  // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Upgrades;                                  // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USupportHeroSquadBonusesDetailWidget_C* SupportHeroSquadBonusesDetailWidget;               // 0x05B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USurvivorTraitsDetailWidget_C*          SurvivorTraitsDetailWidget;                        // 0x05B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectionItemExtraDetailsHostPanel_C* TabbedExtraDetailsPanel;                           // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_PreviewLabel;                                 // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWindowTitleBarArea*                    WindowTitleBar;                                    // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                              SelectedEvolutionItem;                             // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInspectUpgradePopupMenu_C*         UpgradePopupMenu;                                  // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemInspectAlterationModScreen_C*      AlterationModScreen;                               // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGameplayTag, struct FGameplayTag> RequiredTags;                                      // 0x05F0(0x0050)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	bool                                          DoOnceFlagUpgradeHint;                             // 0x0640(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HasShownUpgradeTutorialCallout;                    // 0x0641(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_642[0x6];                                      // 0x0642(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemInspectRefundPopupMenu_C*          RefundPopupMenu;                                   // 0x0648(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemInspectScreen(int32 EntryPoint);
	void OnRefundItemConfirmed(class UFortAccountItem* ItemToRefund);
	void HandleRefundItem();
	void ShowRefundHelp();
	void OnRemovedFromActivationStack();
	void Construct();
	void BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature();
	void BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature();
	void HandleItemToInspectDestroyedBP();
	void HandleItemToInspectChangedBP();
	void HandleDifferentInspectionModeSetBP();
	void HandleDifferentItemToInspectSetBP();
	void HandleIsPreviewingChanged();
	void BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Item, int32 RecipeIndex);
	void BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature(class UFortItem* ItemToEvolve, int32 EvolutionIndex);
	void BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_34_OnEvolutionConfirm__DelegateSignature();
	void OnInputModeChanged(bool bUsingGamepad);
	void BndEvt__DetailPanelTabListMinusPC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void OnDeactivated();
	void Destruct();
	void OnActivated();
	void BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature();
	void BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Item, int32 RecipeIndex);
	void DialogResult_3D444D7245BFED3F760CE49A5698A308(EFortDialogResult Result, class FName ResultName);
	void DialogResult_7EB32ED049ED082854D5738A81CFCAA2(EFortDialogResult Result, class FName ResultName);
	void OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203();
	void HandleBack(bool* PassThrough);
	void HandleFavorite(bool* PassThrough);
	void HandleView(bool* PassThrough);
	void HandleEvolution();
	void HandleUpgrade();
	void HandleEvolutionChoiceHovered(class UFortItem* Item);
	void HandleEvolutionChoiceUnhovered(class UFortItem* Item);
	void HandleEvolutionChoiceSelected(class UFortItem* Item, int32 RecipeIndex);
	void GetFirstEvolutionOption(class UFortItem** EvolutionItem);
	void SetupActionHandlers();
	void ResetDetailsPanel();
	void HandleCursorModeChanging(bool IsEnabled);
	void RefreshOnUpgrade();
	void HandleEvolutionComplete(TArray<struct FFortItemInstanceQuantityPair>& ResultingItems);
	void RefreshActionHandlers();
	void RefreshCallout();
	void ShowPreviewHeader(bool ShowPreviewLabel);
	void SetTabButtonStyle(class UObject* Object);
	void SetInspectModeForChildPanels(EFortItemInspectionMode NewInspectMode);
	void OnItemCycleChangedItem(class UFortItem* NewItemToRepresent);
	void RefreshExtraDetailsTabs();
	void HandleUpgradeItemRarity();
	void SetAllInputActionStates(EInputActionState InputActionState);
	EInputActionState GetViewInputState();
	ESlateVisibility GetEvolutionVisibility();
	EInputActionState GetFavoriteInputState();
	ESlateVisibility GetUpgradeRarityVisibility();
	void Setup_Evolution_Selection_for_Comparisons(class UFortItem* Item, int32 RecipeIndex);
	void RefreshItemViewHandlerStates();
	class UWidget* GetWidgetForFramingViewedItem();
	void BindDelegates();
	void UnbindDelegates();
	ESlateVisibility GetWindowTitleBarVisibility();
	void UpdateInspectionMode();
	void HandleSchematicUpgradeOptions(bool* bPassThrough);
	void GetLevelUpVisibility(ESlateVisibility* Return_Value);
	void SetOverviewActionsInputState(EInputActionState State);
	void GetAlterationModifyVisibility(ESlateVisibility* Return_Value);
	void GetUpgradeItemInputActionState(EInputActionState* Return_Value);
	void GetItemActionSwitcherVisibility(ESlateVisibility* Return_Value);
	void HandleAlterationModify();
	void CreateUpgradePopupMenu();
	bool IsAlterableItem();
	bool MeetsQuestRequirements();
	bool SchematicRequirementsMet();
	void GetRequiredTagContainer(class UFortItemDefinition* ItemDef, bool* HasRequiredTag, struct FGameplayTagContainer* RequiredTagContainer);
	void SetupScrollWidget();
	void SetupUpgrades();
	void UpgradeQuestComplete(bool* QuestIsComplete);
	void AlterationQuestComplete(bool* QuestComplete);
	void CheckForSideTutorialQuests(bool* RelevantSideQuestFound);
	void HandleShowUpgradeTutorial();
	void HandleRefundPopup(bool* bPassThrough);
	void CreateRefundPopupMenu();
	void ShowRefundHelpIfNecessary();
	void GetRefundPopupInputActionState(EInputActionState* State);
	void ShowRefundConfirmationModalWidget();
	void ShouldShowRefundMessage(bool* ShouldShowRefundMessage_0, class FText* RefundDescriptionText);
	void GetRefundHelpActions(TArray<struct FConfirmationDialogAction>* ConfirmActions, class FName* DeclineAction);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemInspectScreen_C">();
	}
	static class UItemInspectScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemInspectScreen_C>();
	}
};
static_assert(alignof(UItemInspectScreen_C) == 0x000008, "Wrong alignment on UItemInspectScreen_C");
static_assert(sizeof(UItemInspectScreen_C) == 0x000650, "Wrong size on UItemInspectScreen_C");
static_assert(offsetof(UItemInspectScreen_C, UberGraphFrame) == 0x000510, "Member 'UItemInspectScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, CameraFrameSpacer) == 0x000518, "Member 'UItemInspectScreen_C::CameraFrameSpacer' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, ExtraDetailsPanelTabList) == 0x000520, "Member 'UItemInspectScreen_C::ExtraDetailsPanelTabList' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, ExtraDetailsTabContentSwitcher) == 0x000528, "Member 'UItemInspectScreen_C::ExtraDetailsTabContentSwitcher' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, HeroBonusesTabContentBox) == 0x000530, "Member 'UItemInspectScreen_C::HeroBonusesTabContentBox' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, HeroLoadoutActiveAbilitiesDetailWidget) == 0x000538, "Member 'UItemInspectScreen_C::HeroLoadoutActiveAbilitiesDetailWidget' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, HeroLoadoutPerksDetailWidget) == 0x000540, "Member 'UItemInspectScreen_C::HeroLoadoutPerksDetailWidget' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, ItemActionSwitcher) == 0x000548, "Member 'UItemInspectScreen_C::ItemActionSwitcher' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, ItemAlterationsListDetailWidget) == 0x000550, "Member 'UItemInspectScreen_C::ItemAlterationsListDetailWidget' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, ItemCraftingIngredientsDetailWidget) == 0x000558, "Member 'UItemInspectScreen_C::ItemCraftingIngredientsDetailWidget' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, ItemDescriptionDetailWidget) == 0x000560, "Member 'UItemInspectScreen_C::ItemDescriptionDetailWidget' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, ItemInspectEvolutionConfirmation) == 0x000568, "Member 'UItemInspectScreen_C::ItemInspectEvolutionConfirmation' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, ItemInspectEvolveRarityConfirmation) == 0x000570, "Member 'UItemInspectScreen_C::ItemInspectEvolveRarityConfirmation' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, ItemInspectUpgradeCallout) == 0x000578, "Member 'UItemInspectScreen_C::ItemInspectUpgradeCallout' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, ItemInspectUpgradeConfirmation) == 0x000580, "Member 'UItemInspectScreen_C::ItemInspectUpgradeConfirmation' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, ItemPerksListDetailWidget) == 0x000588, "Member 'UItemInspectScreen_C::ItemPerksListDetailWidget' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, MainDetailsPanel) == 0x000590, "Member 'UItemInspectScreen_C::MainDetailsPanel' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, PerksAndAlterationsBox) == 0x000598, "Member 'UItemInspectScreen_C::PerksAndAlterationsBox' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, ScrollBoxDetails) == 0x0005A0, "Member 'UItemInspectScreen_C::ScrollBoxDetails' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, SizeBox_Upgrades) == 0x0005A8, "Member 'UItemInspectScreen_C::SizeBox_Upgrades' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, SupportHeroSquadBonusesDetailWidget) == 0x0005B0, "Member 'UItemInspectScreen_C::SupportHeroSquadBonusesDetailWidget' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, SurvivorTraitsDetailWidget) == 0x0005B8, "Member 'UItemInspectScreen_C::SurvivorTraitsDetailWidget' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, TabbedExtraDetailsPanel) == 0x0005C0, "Member 'UItemInspectScreen_C::TabbedExtraDetailsPanel' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, Text_PreviewLabel) == 0x0005C8, "Member 'UItemInspectScreen_C::Text_PreviewLabel' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, WindowTitleBar) == 0x0005D0, "Member 'UItemInspectScreen_C::WindowTitleBar' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, SelectedEvolutionItem) == 0x0005D8, "Member 'UItemInspectScreen_C::SelectedEvolutionItem' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, UpgradePopupMenu) == 0x0005E0, "Member 'UItemInspectScreen_C::UpgradePopupMenu' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, AlterationModScreen) == 0x0005E8, "Member 'UItemInspectScreen_C::AlterationModScreen' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, RequiredTags) == 0x0005F0, "Member 'UItemInspectScreen_C::RequiredTags' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, DoOnceFlagUpgradeHint) == 0x000640, "Member 'UItemInspectScreen_C::DoOnceFlagUpgradeHint' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, HasShownUpgradeTutorialCallout) == 0x000641, "Member 'UItemInspectScreen_C::HasShownUpgradeTutorialCallout' has a wrong offset!");
static_assert(offsetof(UItemInspectScreen_C, RefundPopupMenu) == 0x000648, "Member 'UItemInspectScreen_C::RefundPopupMenu' has a wrong offset!");

}
