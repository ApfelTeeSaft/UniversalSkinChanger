#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StreamingInstallProgressBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StreamingInstallProgressBar.StreamingInstallProgressBar_C
// 0x0020 (0x0258 - 0x0238)
class UStreamingInstallProgressBar_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                           StreamingInstallProgressBar;                       // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           RefreshTimer;                                      // 0x0248(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         RefreshTime;                                       // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StreamingInstallProgressBar(int32 EntryPoint);
	void Destruct();
	void Construct();
	void ToggleTimer(bool Enable);
	void RefreshTick();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StreamingInstallProgressBar_C">();
	}
	static class UStreamingInstallProgressBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStreamingInstallProgressBar_C>();
	}
};
static_assert(alignof(UStreamingInstallProgressBar_C) == 0x000008, "Wrong alignment on UStreamingInstallProgressBar_C");
static_assert(sizeof(UStreamingInstallProgressBar_C) == 0x000258, "Wrong size on UStreamingInstallProgressBar_C");
static_assert(offsetof(UStreamingInstallProgressBar_C, UberGraphFrame) == 0x000238, "Member 'UStreamingInstallProgressBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStreamingInstallProgressBar_C, StreamingInstallProgressBar) == 0x000240, "Member 'UStreamingInstallProgressBar_C::StreamingInstallProgressBar' has a wrong offset!");
static_assert(offsetof(UStreamingInstallProgressBar_C, RefreshTimer) == 0x000248, "Member 'UStreamingInstallProgressBar_C::RefreshTimer' has a wrong offset!");
static_assert(offsetof(UStreamingInstallProgressBar_C, RefreshTime) == 0x000250, "Member 'UStreamingInstallProgressBar_C::RefreshTime' has a wrong offset!");

}
