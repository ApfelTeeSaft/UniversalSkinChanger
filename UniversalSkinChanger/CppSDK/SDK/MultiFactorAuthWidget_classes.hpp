#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MultiFactorAuthWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MultiFactorAuthWidget.MultiFactorAuthWidget_C
// 0x0010 (0x0388 - 0x0378)
class UMultiFactorAuthWidget_C final : public UFortMultiFactorAuthWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       CommonTextPromptText;                              // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MultiFactorAuthWidget(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MultiFactorAuthWidget_C">();
	}
	static class UMultiFactorAuthWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMultiFactorAuthWidget_C>();
	}
};
static_assert(alignof(UMultiFactorAuthWidget_C) == 0x000008, "Wrong alignment on UMultiFactorAuthWidget_C");
static_assert(sizeof(UMultiFactorAuthWidget_C) == 0x000388, "Wrong size on UMultiFactorAuthWidget_C");
static_assert(offsetof(UMultiFactorAuthWidget_C, UberGraphFrame) == 0x000378, "Member 'UMultiFactorAuthWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMultiFactorAuthWidget_C, CommonTextPromptText) == 0x000380, "Member 'UMultiFactorAuthWidget_C::CommonTextPromptText' has a wrong offset!");

}
