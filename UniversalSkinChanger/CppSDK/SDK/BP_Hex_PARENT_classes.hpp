#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Hex_PARENT

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Hex_PARENT.BP_Hex_PARENT_C
// 0x0120 (0x06E8 - 0x05C8)
class ABP_Hex_PARENT_C final : public AFortTheaterMapTile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SpinnerIconMesh;                                   // 0x05D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_StrongStormAffected;                             // 0x05D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       StormZoneIndicator;                                // 0x05E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_StormAffected;                                   // 0x05E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_CloudTwister_RandomLightning_01;                 // 0x05F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PinnedQuestIcon;                                   // 0x05F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MissionIconMesh;                                   // 0x0600(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MouseoverMesh;                                     // 0x0608(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SelectedIndicatorMesh;                             // 0x0610(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        HexTileSound;                                      // 0x0618(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_12_NewTrack_2_9A9B376A4CE242AE90C66285F93293B7; // 0x0620(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_12__Direction_9A9B376A4CE242AE90C66285F93293B7; // 0x0624(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_625[0x3];                                      // 0x0625(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_12;                                       // 0x0628(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_11_NewTrack_0_ABB0E704455E70C66E9A21979F9D10BE; // 0x0630(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_11__Direction_ABB0E704455E70C66E9A21979F9D10BE; // 0x0634(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_635[0x3];                                      // 0x0635(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_11;                                       // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        HexAudioComponent;                                 // 0x0640(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             HexMapSound;                                       // 0x0648(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StormChance;                                       // 0x0650(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseHexNeighborTextureBlending;                     // 0x0654(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DoesTileHaveRoads;                                 // 0x0655(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsFirstOutpost;                                    // 0x0656(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsOutpost;                                         // 0x0657(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsQuickplayMission;                                // 0x0658(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_659[0x3];                                      // 0x0659(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RandomIndex;                                       // 0x065C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   HexDecoMesh;                                       // 0x0660(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Mouseover;                                         // 0x0668(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MissionSelected;                                   // 0x0669(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TileIsPlayable;                                    // 0x066A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TileIsLocked;                                      // 0x066B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TileIsHidden;                                      // 0x066C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TileIsVaildMission;                                // 0x066D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66E[0x2];                                      // 0x066E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MIDMissionIcon;                                    // 0x0670(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MIDMinusSelected;                                  // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                    Hex_Deco_Meshes;                                   // 0x0680(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	class UMaterialInstanceDynamic*               MIDMinusMouseover;                                 // 0x0690(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RenderHexWithClouds;                               // 0x0698(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_699[0x7];                                      // 0x0699(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MIDMissionPinnedIcon;                              // 0x06A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DifficultyColor;                                   // 0x06A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PinnedQuest;                                       // 0x06B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B9[0x7];                                      // 0x06B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATheaterCamera_Blueprint_C*             TheaterCamera;                                     // 0x06C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CameraIsMissionControl;                            // 0x06C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsTutorial;                                        // 0x06C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CA[0x2];                                      // 0x06CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TimesUpdated;                                      // 0x06CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TileIsBeingInitialized;                            // 0x06D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PauseUpdates;                                      // 0x06D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PinnedMissionExists;                               // 0x06D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          OppositePinnedQuest;                               // 0x06D3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         OppositePinnedQuestOpacity;                        // 0x06D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseLightning;                                      // 0x06D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsMainMission;                                     // 0x06D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsBlockParty;                                      // 0x06DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DB[0x1];                                      // 0x06DB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TileTypeNumber;                                    // 0x06DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StormModLightningStrength;                         // 0x06E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Hex_PARENT(int32 EntryPoint);
	void RefreshTile();
	void AsyncUpdateBanner(class UMaterialInstanceDynamic* Material_Instance_Dynamic, const struct FUniqueNetIdRepl& Unique_Net_Id);
	void Unpause_Updates();
	void MissionLightningOff(class FName EventName, float EmitterTime, int32 ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction);
	void MissionLightning(class FName EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void ReceiveBeginPlay();
	void SetMissionPowerLevelDependencies();
	void RetryTileInitialized();
	void CheckForPinnedInLevel();
	void CheckIfQuestShouldBePinned();
	void OnMarkedQuestChanged();
	void HandleFrontendCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void OnInitializeTile();
	void HandleTeamPowerChanged(int32 TeamPower, int32 PersonalPower);
	void OnClientSelect();
	void OnClientDeselect();
	void OnHostSelect();
	void OnHostDeselect();
	void OnFocus();
	void OnDefocus();
	void OnMissionDataUpdated();
	void ForceDefocus();
	void FireLightningA();
	void CheckFocus();
	void OnLoaded_192496DB41CC2100CC1C729DB594CEF8(class UObject* Loaded);
	void Timeline_12__UpdateFunc();
	void Timeline_12__FinishedFunc();
	void Timeline_11__UpdateFunc();
	void Timeline_11__FinishedFunc();
	void UserConstructionScript();
	void GroundSliceSettings(class UMaterialInstanceDynamic* SourceMaterial, class UTexture2D* TileTypeA, class UTexture2D* TileTypeB, float TileIsSameRegionA, float TileIsSameRegionB, float TileIsHiddenA, float TileIsHiddenB, float TileExistsA, float TileExistsB);
	void HandleMissionAlert();
	void HandleUpdatingBannerMesh(class USceneComponent* Target, class UFortQuestItemDefinition* CompletedQuest, class UMaterialInstanceDynamic* Material_Instance_Dynamic);
	void HasPinnedQuest(bool* Pinned);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Hex_PARENT_C">();
	}
	static class ABP_Hex_PARENT_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Hex_PARENT_C>();
	}
};
static_assert(alignof(ABP_Hex_PARENT_C) == 0x000008, "Wrong alignment on ABP_Hex_PARENT_C");
static_assert(sizeof(ABP_Hex_PARENT_C) == 0x0006E8, "Wrong size on ABP_Hex_PARENT_C");
static_assert(offsetof(ABP_Hex_PARENT_C, UberGraphFrame) == 0x0005C8, "Member 'ABP_Hex_PARENT_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, SpinnerIconMesh) == 0x0005D0, "Member 'ABP_Hex_PARENT_C::SpinnerIconMesh' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, P_StrongStormAffected) == 0x0005D8, "Member 'ABP_Hex_PARENT_C::P_StrongStormAffected' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, StormZoneIndicator) == 0x0005E0, "Member 'ABP_Hex_PARENT_C::StormZoneIndicator' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, P_StormAffected) == 0x0005E8, "Member 'ABP_Hex_PARENT_C::P_StormAffected' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, P_CloudTwister_RandomLightning_01) == 0x0005F0, "Member 'ABP_Hex_PARENT_C::P_CloudTwister_RandomLightning_01' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, PinnedQuestIcon) == 0x0005F8, "Member 'ABP_Hex_PARENT_C::PinnedQuestIcon' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, MissionIconMesh) == 0x000600, "Member 'ABP_Hex_PARENT_C::MissionIconMesh' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, MouseoverMesh) == 0x000608, "Member 'ABP_Hex_PARENT_C::MouseoverMesh' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, SelectedIndicatorMesh) == 0x000610, "Member 'ABP_Hex_PARENT_C::SelectedIndicatorMesh' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, HexTileSound) == 0x000618, "Member 'ABP_Hex_PARENT_C::HexTileSound' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, Timeline_12_NewTrack_2_9A9B376A4CE242AE90C66285F93293B7) == 0x000620, "Member 'ABP_Hex_PARENT_C::Timeline_12_NewTrack_2_9A9B376A4CE242AE90C66285F93293B7' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, Timeline_12__Direction_9A9B376A4CE242AE90C66285F93293B7) == 0x000624, "Member 'ABP_Hex_PARENT_C::Timeline_12__Direction_9A9B376A4CE242AE90C66285F93293B7' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, Timeline_12) == 0x000628, "Member 'ABP_Hex_PARENT_C::Timeline_12' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, Timeline_11_NewTrack_0_ABB0E704455E70C66E9A21979F9D10BE) == 0x000630, "Member 'ABP_Hex_PARENT_C::Timeline_11_NewTrack_0_ABB0E704455E70C66E9A21979F9D10BE' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, Timeline_11__Direction_ABB0E704455E70C66E9A21979F9D10BE) == 0x000634, "Member 'ABP_Hex_PARENT_C::Timeline_11__Direction_ABB0E704455E70C66E9A21979F9D10BE' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, Timeline_11) == 0x000638, "Member 'ABP_Hex_PARENT_C::Timeline_11' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, HexAudioComponent) == 0x000640, "Member 'ABP_Hex_PARENT_C::HexAudioComponent' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, HexMapSound) == 0x000648, "Member 'ABP_Hex_PARENT_C::HexMapSound' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, StormChance) == 0x000650, "Member 'ABP_Hex_PARENT_C::StormChance' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, UseHexNeighborTextureBlending) == 0x000654, "Member 'ABP_Hex_PARENT_C::UseHexNeighborTextureBlending' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, DoesTileHaveRoads) == 0x000655, "Member 'ABP_Hex_PARENT_C::DoesTileHaveRoads' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, IsFirstOutpost) == 0x000656, "Member 'ABP_Hex_PARENT_C::IsFirstOutpost' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, IsOutpost) == 0x000657, "Member 'ABP_Hex_PARENT_C::IsOutpost' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, IsQuickplayMission) == 0x000658, "Member 'ABP_Hex_PARENT_C::IsQuickplayMission' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, RandomIndex) == 0x00065C, "Member 'ABP_Hex_PARENT_C::RandomIndex' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, HexDecoMesh) == 0x000660, "Member 'ABP_Hex_PARENT_C::HexDecoMesh' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, Mouseover) == 0x000668, "Member 'ABP_Hex_PARENT_C::Mouseover' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, MissionSelected) == 0x000669, "Member 'ABP_Hex_PARENT_C::MissionSelected' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, TileIsPlayable) == 0x00066A, "Member 'ABP_Hex_PARENT_C::TileIsPlayable' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, TileIsLocked) == 0x00066B, "Member 'ABP_Hex_PARENT_C::TileIsLocked' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, TileIsHidden) == 0x00066C, "Member 'ABP_Hex_PARENT_C::TileIsHidden' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, TileIsVaildMission) == 0x00066D, "Member 'ABP_Hex_PARENT_C::TileIsVaildMission' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, MIDMissionIcon) == 0x000670, "Member 'ABP_Hex_PARENT_C::MIDMissionIcon' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, MIDMinusSelected) == 0x000678, "Member 'ABP_Hex_PARENT_C::MIDMinusSelected' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, Hex_Deco_Meshes) == 0x000680, "Member 'ABP_Hex_PARENT_C::Hex_Deco_Meshes' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, MIDMinusMouseover) == 0x000690, "Member 'ABP_Hex_PARENT_C::MIDMinusMouseover' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, RenderHexWithClouds) == 0x000698, "Member 'ABP_Hex_PARENT_C::RenderHexWithClouds' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, MIDMissionPinnedIcon) == 0x0006A0, "Member 'ABP_Hex_PARENT_C::MIDMissionPinnedIcon' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, DifficultyColor) == 0x0006A8, "Member 'ABP_Hex_PARENT_C::DifficultyColor' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, PinnedQuest) == 0x0006B8, "Member 'ABP_Hex_PARENT_C::PinnedQuest' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, TheaterCamera) == 0x0006C0, "Member 'ABP_Hex_PARENT_C::TheaterCamera' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, CameraIsMissionControl) == 0x0006C8, "Member 'ABP_Hex_PARENT_C::CameraIsMissionControl' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, IsTutorial) == 0x0006C9, "Member 'ABP_Hex_PARENT_C::IsTutorial' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, TimesUpdated) == 0x0006CC, "Member 'ABP_Hex_PARENT_C::TimesUpdated' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, TileIsBeingInitialized) == 0x0006D0, "Member 'ABP_Hex_PARENT_C::TileIsBeingInitialized' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, PauseUpdates) == 0x0006D1, "Member 'ABP_Hex_PARENT_C::PauseUpdates' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, PinnedMissionExists) == 0x0006D2, "Member 'ABP_Hex_PARENT_C::PinnedMissionExists' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, OppositePinnedQuest) == 0x0006D3, "Member 'ABP_Hex_PARENT_C::OppositePinnedQuest' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, OppositePinnedQuestOpacity) == 0x0006D4, "Member 'ABP_Hex_PARENT_C::OppositePinnedQuestOpacity' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, UseLightning) == 0x0006D8, "Member 'ABP_Hex_PARENT_C::UseLightning' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, IsMainMission) == 0x0006D9, "Member 'ABP_Hex_PARENT_C::IsMainMission' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, IsBlockParty) == 0x0006DA, "Member 'ABP_Hex_PARENT_C::IsBlockParty' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, TileTypeNumber) == 0x0006DC, "Member 'ABP_Hex_PARENT_C::TileTypeNumber' has a wrong offset!");
static_assert(offsetof(ABP_Hex_PARENT_C, StormModLightningStrength) == 0x0006E0, "Member 'ABP_Hex_PARENT_C::StormModLightningStrength' has a wrong offset!");

}
