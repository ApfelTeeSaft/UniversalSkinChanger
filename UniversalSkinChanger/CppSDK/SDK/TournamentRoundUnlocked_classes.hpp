#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TournamentRoundUnlocked

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TournamentRoundUnlocked.TournamentRoundUnlocked_C
// 0x0020 (0x0380 - 0x0360)
class UTournamentRoundUnlocked_C final : public UFortMessageReceivedScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x0368(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEventRewardToken_C*                    EventRewardToken;                                  // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ShowNextButton;                                    // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TournamentRoundUnlocked(int32 EntryPoint);
	void BndEvt__ShowNextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TournamentRoundUnlocked_C">();
	}
	static class UTournamentRoundUnlocked_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTournamentRoundUnlocked_C>();
	}
};
static_assert(alignof(UTournamentRoundUnlocked_C) == 0x000008, "Wrong alignment on UTournamentRoundUnlocked_C");
static_assert(sizeof(UTournamentRoundUnlocked_C) == 0x000380, "Wrong size on UTournamentRoundUnlocked_C");
static_assert(offsetof(UTournamentRoundUnlocked_C, UberGraphFrame) == 0x000360, "Member 'UTournamentRoundUnlocked_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTournamentRoundUnlocked_C, Intro) == 0x000368, "Member 'UTournamentRoundUnlocked_C::Intro' has a wrong offset!");
static_assert(offsetof(UTournamentRoundUnlocked_C, EventRewardToken) == 0x000370, "Member 'UTournamentRoundUnlocked_C::EventRewardToken' has a wrong offset!");
static_assert(offsetof(UTournamentRoundUnlocked_C, ShowNextButton) == 0x000378, "Member 'UTournamentRoundUnlocked_C::ShowNextButton' has a wrong offset!");

}
