#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CheckExpeditionRewardsAction

#include "Basic.hpp"

#include "FrontEndRewards_Definition_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C
// 0x0080 (0x0410 - 0x0390)
class ACheckExpeditionRewardsAction_C final : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FFrontEndRewards_Definition            RewardsDefinition;                                 // 0x03A0(0x0060)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          ShowRewardsWidget;                                 // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_401[0x7];                                      // 0x0401(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFrontEndRewards_Widget_C*              Claimed_Reward_Widget;                             // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CheckExpeditionRewardsAction(int32 EntryPoint);
	void Handle_Rewards_Running();
	void Execute(const struct FFortScriptedActionParams& Params_0);
	void UserConstructionScript();
	void CompleteRewardsAction();
	void GetCompletedQuests(TArray<class UFortQuestItem*>* Completed_Quests);
	void PopulateCompletedQuests();
	void OpenFrontEndRewards();
	void PopulateRewards();
	void PopulateExpeditionRewards();
	void HandleRewardsClaimed(class UFrontEndRewards_Widget_C* RewardsWidget);
	void Clear();
	void HandleRewardsClaimError(class UFrontEndRewards_Widget_C* RewardsWidget);
	void Is_FrontEndRewards_Running(bool* bRunning);
	void Find_First_Valid_Player_Controller(class AFortPlayerController** FoundPC1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CheckExpeditionRewardsAction_C">();
	}
	static class ACheckExpeditionRewardsAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACheckExpeditionRewardsAction_C>();
	}
};
static_assert(alignof(ACheckExpeditionRewardsAction_C) == 0x000008, "Wrong alignment on ACheckExpeditionRewardsAction_C");
static_assert(sizeof(ACheckExpeditionRewardsAction_C) == 0x000410, "Wrong size on ACheckExpeditionRewardsAction_C");
static_assert(offsetof(ACheckExpeditionRewardsAction_C, UberGraphFrame) == 0x000390, "Member 'ACheckExpeditionRewardsAction_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACheckExpeditionRewardsAction_C, DefaultSceneRoot) == 0x000398, "Member 'ACheckExpeditionRewardsAction_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ACheckExpeditionRewardsAction_C, RewardsDefinition) == 0x0003A0, "Member 'ACheckExpeditionRewardsAction_C::RewardsDefinition' has a wrong offset!");
static_assert(offsetof(ACheckExpeditionRewardsAction_C, ShowRewardsWidget) == 0x000400, "Member 'ACheckExpeditionRewardsAction_C::ShowRewardsWidget' has a wrong offset!");
static_assert(offsetof(ACheckExpeditionRewardsAction_C, Claimed_Reward_Widget) == 0x000408, "Member 'ACheckExpeditionRewardsAction_C::Claimed_Reward_Widget' has a wrong offset!");

}
