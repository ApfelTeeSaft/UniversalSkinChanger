#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WM_Camera

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WM_Camera.WM_Camera_C
// 0x00B0 (0x0930 - 0x0880)
class AWM_Camera_C final : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         TL_CameraDeactivateAnim_OutCurve_73E7DC7546C4C2FD98109BAD51037AF1; // 0x0888(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_CameraDeactivateAnim__Direction_73E7DC7546C4C2FD98109BAD51037AF1; // 0x088C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88D[0x3];                                      // 0x088D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_CameraDeactivateAnim;                           // 0x0890(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TL_CameraActivateAnim_NewTrack_4_ED6153E9442CF8BBFC62D28E1B56763B; // 0x0898(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_CameraActivateAnim__Direction_ED6153E9442CF8BBFC62D28E1B56763B; // 0x089C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89D[0x3];                                      // 0x089D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_CameraActivateAnim;                             // 0x08A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CameraNoise_Noise3_CAC0C7484A50FFB26B3B348FCDF148B0; // 0x08A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CameraNoise_Noise2_CAC0C7484A50FFB26B3B348FCDF148B0; // 0x08AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CameraNoise_Noise1_CAC0C7484A50FFB26B3B348FCDF148B0; // 0x08B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            CameraNoise__Direction_CAC0C7484A50FFB26B3B348FCDF148B0; // 0x08B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B5[0x3];                                      // 0x08B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     CameraNoise;                                       // 0x08B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             InitialPosition;                                   // 0x08C0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             ZoomPosition;                                      // 0x08F0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class AWorldMapPin*>                   AllPinsArray;                                      // 0x0920(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WM_Camera(int32 EntryPoint);
	void CameraActivateAnim();
	void CameraDeactivateAnim();
	void CameraNoise__FinishedFunc();
	void CameraNoise__UpdateFunc();
	void CameraWiggle();
	void OnActivated();
	void OnDeactivated();
	void StopWiggle();
	void TL_CameraActivateAnim__FinishedFunc();
	void TL_CameraActivateAnim__UpdateFunc();
	void TL_CameraDeactivateAnim__FinishedFunc();
	void TL_CameraDeactivateAnim__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WM_Camera_C">();
	}
	static class AWM_Camera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWM_Camera_C>();
	}
};
static_assert(alignof(AWM_Camera_C) == 0x000010, "Wrong alignment on AWM_Camera_C");
static_assert(sizeof(AWM_Camera_C) == 0x000930, "Wrong size on AWM_Camera_C");
static_assert(offsetof(AWM_Camera_C, UberGraphFrame) == 0x000880, "Member 'AWM_Camera_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWM_Camera_C, TL_CameraDeactivateAnim_OutCurve_73E7DC7546C4C2FD98109BAD51037AF1) == 0x000888, "Member 'AWM_Camera_C::TL_CameraDeactivateAnim_OutCurve_73E7DC7546C4C2FD98109BAD51037AF1' has a wrong offset!");
static_assert(offsetof(AWM_Camera_C, TL_CameraDeactivateAnim__Direction_73E7DC7546C4C2FD98109BAD51037AF1) == 0x00088C, "Member 'AWM_Camera_C::TL_CameraDeactivateAnim__Direction_73E7DC7546C4C2FD98109BAD51037AF1' has a wrong offset!");
static_assert(offsetof(AWM_Camera_C, TL_CameraDeactivateAnim) == 0x000890, "Member 'AWM_Camera_C::TL_CameraDeactivateAnim' has a wrong offset!");
static_assert(offsetof(AWM_Camera_C, TL_CameraActivateAnim_NewTrack_4_ED6153E9442CF8BBFC62D28E1B56763B) == 0x000898, "Member 'AWM_Camera_C::TL_CameraActivateAnim_NewTrack_4_ED6153E9442CF8BBFC62D28E1B56763B' has a wrong offset!");
static_assert(offsetof(AWM_Camera_C, TL_CameraActivateAnim__Direction_ED6153E9442CF8BBFC62D28E1B56763B) == 0x00089C, "Member 'AWM_Camera_C::TL_CameraActivateAnim__Direction_ED6153E9442CF8BBFC62D28E1B56763B' has a wrong offset!");
static_assert(offsetof(AWM_Camera_C, TL_CameraActivateAnim) == 0x0008A0, "Member 'AWM_Camera_C::TL_CameraActivateAnim' has a wrong offset!");
static_assert(offsetof(AWM_Camera_C, CameraNoise_Noise3_CAC0C7484A50FFB26B3B348FCDF148B0) == 0x0008A8, "Member 'AWM_Camera_C::CameraNoise_Noise3_CAC0C7484A50FFB26B3B348FCDF148B0' has a wrong offset!");
static_assert(offsetof(AWM_Camera_C, CameraNoise_Noise2_CAC0C7484A50FFB26B3B348FCDF148B0) == 0x0008AC, "Member 'AWM_Camera_C::CameraNoise_Noise2_CAC0C7484A50FFB26B3B348FCDF148B0' has a wrong offset!");
static_assert(offsetof(AWM_Camera_C, CameraNoise_Noise1_CAC0C7484A50FFB26B3B348FCDF148B0) == 0x0008B0, "Member 'AWM_Camera_C::CameraNoise_Noise1_CAC0C7484A50FFB26B3B348FCDF148B0' has a wrong offset!");
static_assert(offsetof(AWM_Camera_C, CameraNoise__Direction_CAC0C7484A50FFB26B3B348FCDF148B0) == 0x0008B4, "Member 'AWM_Camera_C::CameraNoise__Direction_CAC0C7484A50FFB26B3B348FCDF148B0' has a wrong offset!");
static_assert(offsetof(AWM_Camera_C, CameraNoise) == 0x0008B8, "Member 'AWM_Camera_C::CameraNoise' has a wrong offset!");
static_assert(offsetof(AWM_Camera_C, InitialPosition) == 0x0008C0, "Member 'AWM_Camera_C::InitialPosition' has a wrong offset!");
static_assert(offsetof(AWM_Camera_C, ZoomPosition) == 0x0008F0, "Member 'AWM_Camera_C::ZoomPosition' has a wrong offset!");
static_assert(offsetof(AWM_Camera_C, AllPinsArray) == 0x000920, "Member 'AWM_Camera_C::AllPinsArray' has a wrong offset!");

}
