#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimplePipButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonUI_classes.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SimplePipButton.SimplePipButton_C
// 0x0048 (0x0B78 - 0x0B30)
class USimplePipButton_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                             ContentSlot;                                       // 0x0B38(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 ControllerInputStyle;                              // 0x0B40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                 MouseKeyboardStyle;                                // 0x0B48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    ButtonClickAction;                                 // 0x0B50(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	EHorizontalAlignment                          InputActionHorizontalAlignment;                    // 0x0B60(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EVerticalAlignment                            InputActionVerticalAlignment;                      // 0x0B61(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B62[0x2];                                      // 0x0B62(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              InputActionRenderTranslation;                      // 0x0B64(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InputActionUseRimBrush;                            // 0x0B6C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B6D[0x3];                                      // 0x0B6D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              InputActionRimBrushSize;                           // 0x0B70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SimplePipButton(int32 EntryPoint);
	void BP_OnUnhovered();
	void BP_OnHovered();
	void Construct();
	void OnActionComplete();
	void OnActionProgress(float HeldPercent);
	void OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction);
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void PreConstruct(bool IsDesignTime);
	void UpdateTextAndStyle();
	void InitializeButton();
	void UpdateStyle(bool bUsingGamepad);
	void UpdateInputActionLayout();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SimplePipButton_C">();
	}
	static class USimplePipButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimplePipButton_C>();
	}
};
static_assert(alignof(USimplePipButton_C) == 0x000008, "Wrong alignment on USimplePipButton_C");
static_assert(sizeof(USimplePipButton_C) == 0x000B78, "Wrong size on USimplePipButton_C");
static_assert(offsetof(USimplePipButton_C, UberGraphFrame) == 0x000B30, "Member 'USimplePipButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USimplePipButton_C, ContentSlot) == 0x000B38, "Member 'USimplePipButton_C::ContentSlot' has a wrong offset!");
static_assert(offsetof(USimplePipButton_C, ControllerInputStyle) == 0x000B40, "Member 'USimplePipButton_C::ControllerInputStyle' has a wrong offset!");
static_assert(offsetof(USimplePipButton_C, MouseKeyboardStyle) == 0x000B48, "Member 'USimplePipButton_C::MouseKeyboardStyle' has a wrong offset!");
static_assert(offsetof(USimplePipButton_C, ButtonClickAction) == 0x000B50, "Member 'USimplePipButton_C::ButtonClickAction' has a wrong offset!");
static_assert(offsetof(USimplePipButton_C, InputActionHorizontalAlignment) == 0x000B60, "Member 'USimplePipButton_C::InputActionHorizontalAlignment' has a wrong offset!");
static_assert(offsetof(USimplePipButton_C, InputActionVerticalAlignment) == 0x000B61, "Member 'USimplePipButton_C::InputActionVerticalAlignment' has a wrong offset!");
static_assert(offsetof(USimplePipButton_C, InputActionRenderTranslation) == 0x000B64, "Member 'USimplePipButton_C::InputActionRenderTranslation' has a wrong offset!");
static_assert(offsetof(USimplePipButton_C, InputActionUseRimBrush) == 0x000B6C, "Member 'USimplePipButton_C::InputActionUseRimBrush' has a wrong offset!");
static_assert(offsetof(USimplePipButton_C, InputActionRimBrushSize) == 0x000B70, "Member 'USimplePipButton_C::InputActionRimBrushSize' has a wrong offset!");

}
