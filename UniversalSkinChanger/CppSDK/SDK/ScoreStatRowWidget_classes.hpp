#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScoreStatRowWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ScoreStatRowWidget.ScoreStatRowWidget_C
// 0x0018 (0x0260 - 0x0248)
class UScoreStatRowWidget_C final : public UAthenaProfileStatWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       StatName;                                          // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                StatValue;                                         // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ScoreStatRowWidget(int32 EntryPoint);
	void OnStatChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ScoreStatRowWidget_C">();
	}
	static class UScoreStatRowWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScoreStatRowWidget_C>();
	}
};
static_assert(alignof(UScoreStatRowWidget_C) == 0x000008, "Wrong alignment on UScoreStatRowWidget_C");
static_assert(sizeof(UScoreStatRowWidget_C) == 0x000260, "Wrong size on UScoreStatRowWidget_C");
static_assert(offsetof(UScoreStatRowWidget_C, UberGraphFrame) == 0x000248, "Member 'UScoreStatRowWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UScoreStatRowWidget_C, StatName) == 0x000250, "Member 'UScoreStatRowWidget_C::StatName' has a wrong offset!");
static_assert(offsetof(UScoreStatRowWidget_C, StatValue) == 0x000258, "Member 'UScoreStatRowWidget_C::StatValue' has a wrong offset!");

}
