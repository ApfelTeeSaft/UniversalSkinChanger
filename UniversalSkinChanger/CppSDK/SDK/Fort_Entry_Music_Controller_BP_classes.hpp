#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fort_Entry_Music_Controller_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
// 0x0048 (0x0378 - 0x0330)
class AFort_Entry_Music_Controller_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Enter_Menu_Loop;                                   // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        MenuMusic_B;                                       // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        MenuMusic_A;                                       // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        LoginMusic;                                        // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         FadeOutTime;                                       // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35C[0x4];                                      // 0x035C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             CurrentMusic;                                      // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Music_Activate_Override;                        // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_369[0x7];                                      // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaMusicPackItemDefinition*         MusicPackToPlayLater;                              // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32 EntryPoint);
	void ClearDelayedPlayMusicPack();
	void DelayedPlayMusicPack(class UAthenaMusicPackItemDefinition* MusicPackToPlayLater_0);
	void MakeNextMusicPackStartFromBeginning();
	void Lobby_Music_Override(bool Lobby_Music_Activate, class USoundBase* New_Music);
	void Change_Music(class USoundBase* New_Music);
	void ListenToMusicPacks();
	void OnMusicPackChanged(const class UAthenaMusicPackItemDefinition* NewMusicPack);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fort_Entry_Music_Controller_BP_C">();
	}
	static class AFort_Entry_Music_Controller_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFort_Entry_Music_Controller_BP_C>();
	}
};
static_assert(alignof(AFort_Entry_Music_Controller_BP_C) == 0x000008, "Wrong alignment on AFort_Entry_Music_Controller_BP_C");
static_assert(sizeof(AFort_Entry_Music_Controller_BP_C) == 0x000378, "Wrong size on AFort_Entry_Music_Controller_BP_C");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, UberGraphFrame) == 0x000330, "Member 'AFort_Entry_Music_Controller_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, Enter_Menu_Loop) == 0x000338, "Member 'AFort_Entry_Music_Controller_BP_C::Enter_Menu_Loop' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, MenuMusic_B) == 0x000340, "Member 'AFort_Entry_Music_Controller_BP_C::MenuMusic_B' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, MenuMusic_A) == 0x000348, "Member 'AFort_Entry_Music_Controller_BP_C::MenuMusic_A' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, LoginMusic) == 0x000350, "Member 'AFort_Entry_Music_Controller_BP_C::LoginMusic' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, FadeOutTime) == 0x000358, "Member 'AFort_Entry_Music_Controller_BP_C::FadeOutTime' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, CurrentMusic) == 0x000360, "Member 'AFort_Entry_Music_Controller_BP_C::CurrentMusic' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, Is_Music_Activate_Override) == 0x000368, "Member 'AFort_Entry_Music_Controller_BP_C::Is_Music_Activate_Override' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, MusicPackToPlayLater) == 0x000370, "Member 'AFort_Entry_Music_Controller_BP_C::MusicPackToPlayLater' has a wrong offset!");

}
