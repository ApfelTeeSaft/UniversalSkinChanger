#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReportablePlayerEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ReportablePlayerEntry.ReportablePlayerEntry_C
// 0x0018 (0x0B80 - 0x0B68)
class UReportablePlayerEntry_C final : public UFeedbackReportablePlayerBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B68(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_0;                                           // 0x0B70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_0;                                     // 0x0B78(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ReportablePlayerEntry(int32 EntryPoint);
	void SetSelectionState(bool bIsSelected, bool bAnimateOnSelect);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ReportablePlayerEntry_C">();
	}
	static class UReportablePlayerEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReportablePlayerEntry_C>();
	}
};
static_assert(alignof(UReportablePlayerEntry_C) == 0x000008, "Wrong alignment on UReportablePlayerEntry_C");
static_assert(sizeof(UReportablePlayerEntry_C) == 0x000B80, "Wrong size on UReportablePlayerEntry_C");
static_assert(offsetof(UReportablePlayerEntry_C, UberGraphFrame) == 0x000B68, "Member 'UReportablePlayerEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UReportablePlayerEntry_C, Image_0) == 0x000B70, "Member 'UReportablePlayerEntry_C::Image_0' has a wrong offset!");
static_assert(offsetof(UReportablePlayerEntry_C, VerticalBox_0) == 0x000B78, "Member 'UReportablePlayerEntry_C::VerticalBox_0' has a wrong offset!");

}
