#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerEmblemAndXp

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.ExecuteUbergraph_PlayerEmblemAndXp
// 0x0038 (0x0038 - 0x0000)
struct PlayerEmblemAndXp_C_ExecuteUbergraph_PlayerEmblemAndXp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPublicAccountInfo                 K2Node_Event_Result;                               // 0x0004(0x0034)(ConstParm, NoDestructor)
};
static_assert(alignof(PlayerEmblemAndXp_C_ExecuteUbergraph_PlayerEmblemAndXp) == 0x000004, "Wrong alignment on PlayerEmblemAndXp_C_ExecuteUbergraph_PlayerEmblemAndXp");
static_assert(sizeof(PlayerEmblemAndXp_C_ExecuteUbergraph_PlayerEmblemAndXp) == 0x000038, "Wrong size on PlayerEmblemAndXp_C_ExecuteUbergraph_PlayerEmblemAndXp");
static_assert(offsetof(PlayerEmblemAndXp_C_ExecuteUbergraph_PlayerEmblemAndXp, EntryPoint) == 0x000000, "Member 'PlayerEmblemAndXp_C_ExecuteUbergraph_PlayerEmblemAndXp::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_ExecuteUbergraph_PlayerEmblemAndXp, K2Node_Event_Result) == 0x000004, "Member 'PlayerEmblemAndXp_C_ExecuteUbergraph_PlayerEmblemAndXp::K2Node_Event_Result' has a wrong offset!");

// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.OnAccountInfoChanged
// 0x0034 (0x0034 - 0x0000)
struct PlayerEmblemAndXp_C_OnAccountInfoChanged final
{
public:
	struct FFortPublicAccountInfo                 Result;                                            // 0x0000(0x0034)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(PlayerEmblemAndXp_C_OnAccountInfoChanged) == 0x000004, "Wrong alignment on PlayerEmblemAndXp_C_OnAccountInfoChanged");
static_assert(sizeof(PlayerEmblemAndXp_C_OnAccountInfoChanged) == 0x000034, "Wrong size on PlayerEmblemAndXp_C_OnAccountInfoChanged");
static_assert(offsetof(PlayerEmblemAndXp_C_OnAccountInfoChanged, Result) == 0x000000, "Member 'PlayerEmblemAndXp_C_OnAccountInfoChanged::Result' has a wrong offset!");

// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.Refresh
// 0x0128 (0x0128 - 0x0000)
struct PlayerEmblemAndXp_C_Refresh final
{
public:
	struct FFortPublicAccountInfo                 FortPublicAccountInfo;                             // 0x0000(0x0034)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaAccountContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaAccountContext*                  CallFunc_GetContext_ReturnValue1;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentSeasonNumber_ReturnValue;       // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetCurrentSeasonName_ReturnValue;         // 0x0050(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0070(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortItemQuantityPair                  CallFunc_GetNextSeasonReward_Reward;               // 0x0090(0x0040)()
	int32                                         CallFunc_GetNextSeasonReward_RewardLevel;          // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNextSeasonReward_ReturnValue;          // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D6[0x2];                                       // 0x00D6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortItemQuantityPair                  CallFunc_GetNextSeasonChaseReward_Reward;          // 0x00E0(0x0040)()
	int32                                         CallFunc_GetNextSeasonChaseReward_RewardLevel;     // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNextSeasonChaseReward_ReturnValue;     // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerEmblemAndXp_C_Refresh) == 0x000008, "Wrong alignment on PlayerEmblemAndXp_C_Refresh");
static_assert(sizeof(PlayerEmblemAndXp_C_Refresh) == 0x000128, "Wrong size on PlayerEmblemAndXp_C_Refresh");
static_assert(offsetof(PlayerEmblemAndXp_C_Refresh, FortPublicAccountInfo) == 0x000000, "Member 'PlayerEmblemAndXp_C_Refresh::FortPublicAccountInfo' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_Refresh, Temp_byte_Variable) == 0x000034, "Member 'PlayerEmblemAndXp_C_Refresh::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_Refresh, Temp_byte_Variable1) == 0x000035, "Member 'PlayerEmblemAndXp_C_Refresh::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_Refresh, CallFunc_GetContext_ReturnValue) == 0x000038, "Member 'PlayerEmblemAndXp_C_Refresh::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_Refresh, CallFunc_GetContext_ReturnValue1) == 0x000040, "Member 'PlayerEmblemAndXp_C_Refresh::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_Refresh, CallFunc_GetCurrentSeasonNumber_ReturnValue) == 0x000048, "Member 'PlayerEmblemAndXp_C_Refresh::CallFunc_GetCurrentSeasonNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_Refresh, CallFunc_GetCurrentSeasonName_ReturnValue) == 0x000050, "Member 'PlayerEmblemAndXp_C_Refresh::CallFunc_GetCurrentSeasonName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_Refresh, CallFunc_Greater_IntInt_ReturnValue) == 0x000068, "Member 'PlayerEmblemAndXp_C_Refresh::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_Refresh, CallFunc_TextToUpper_ReturnValue) == 0x000070, "Member 'PlayerEmblemAndXp_C_Refresh::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_Refresh, Temp_bool_Variable) == 0x000088, "Member 'PlayerEmblemAndXp_C_Refresh::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_Refresh, CallFunc_GetNextSeasonReward_Reward) == 0x000090, "Member 'PlayerEmblemAndXp_C_Refresh::CallFunc_GetNextSeasonReward_Reward' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_Refresh, CallFunc_GetNextSeasonReward_RewardLevel) == 0x0000D0, "Member 'PlayerEmblemAndXp_C_Refresh::CallFunc_GetNextSeasonReward_RewardLevel' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_Refresh, CallFunc_GetNextSeasonReward_ReturnValue) == 0x0000D4, "Member 'PlayerEmblemAndXp_C_Refresh::CallFunc_GetNextSeasonReward_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_Refresh, K2Node_Select_Default) == 0x0000D5, "Member 'PlayerEmblemAndXp_C_Refresh::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_Refresh, CallFunc_Add_IntInt_ReturnValue) == 0x0000D8, "Member 'PlayerEmblemAndXp_C_Refresh::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_Refresh, CallFunc_GetNextSeasonChaseReward_Reward) == 0x0000E0, "Member 'PlayerEmblemAndXp_C_Refresh::CallFunc_GetNextSeasonChaseReward_Reward' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_Refresh, CallFunc_GetNextSeasonChaseReward_RewardLevel) == 0x000120, "Member 'PlayerEmblemAndXp_C_Refresh::CallFunc_GetNextSeasonChaseReward_RewardLevel' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_Refresh, CallFunc_GetNextSeasonChaseReward_ReturnValue) == 0x000124, "Member 'PlayerEmblemAndXp_C_Refresh::CallFunc_GetNextSeasonChaseReward_ReturnValue' has a wrong offset!");

// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.SetupReward
// 0x0088 (0x0088 - 0x0000)
struct PlayerEmblemAndXp_C_SetupReward final
{
public:
	class UWidget*                                Container;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             RewardText;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDailyQuestRewardInfo_C*                RewardInfoWidget;                                  // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasReward;                                         // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortItemQuantityPair                  RewardItem;                                        // 0x0020(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         LevelRewarded;                                     // 0x0060(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0068(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerEmblemAndXp_C_SetupReward) == 0x000008, "Wrong alignment on PlayerEmblemAndXp_C_SetupReward");
static_assert(sizeof(PlayerEmblemAndXp_C_SetupReward) == 0x000088, "Wrong size on PlayerEmblemAndXp_C_SetupReward");
static_assert(offsetof(PlayerEmblemAndXp_C_SetupReward, Container) == 0x000000, "Member 'PlayerEmblemAndXp_C_SetupReward::Container' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_SetupReward, RewardText) == 0x000008, "Member 'PlayerEmblemAndXp_C_SetupReward::RewardText' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_SetupReward, RewardInfoWidget) == 0x000010, "Member 'PlayerEmblemAndXp_C_SetupReward::RewardInfoWidget' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_SetupReward, HasReward) == 0x000018, "Member 'PlayerEmblemAndXp_C_SetupReward::HasReward' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_SetupReward, RewardItem) == 0x000020, "Member 'PlayerEmblemAndXp_C_SetupReward::RewardItem' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_SetupReward, LevelRewarded) == 0x000060, "Member 'PlayerEmblemAndXp_C_SetupReward::LevelRewarded' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_SetupReward, Temp_byte_Variable) == 0x000064, "Member 'PlayerEmblemAndXp_C_SetupReward::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_SetupReward, CallFunc_Conv_IntToText_ReturnValue) == 0x000068, "Member 'PlayerEmblemAndXp_C_SetupReward::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_SetupReward, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'PlayerEmblemAndXp_C_SetupReward::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_SetupReward, Temp_byte_Variable1) == 0x000081, "Member 'PlayerEmblemAndXp_C_SetupReward::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_SetupReward, Temp_bool_Variable) == 0x000082, "Member 'PlayerEmblemAndXp_C_SetupReward::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerEmblemAndXp_C_SetupReward, K2Node_Select_Default) == 0x000083, "Member 'PlayerEmblemAndXp_C_SetupReward::K2Node_Select_Default' has a wrong offset!");

}
