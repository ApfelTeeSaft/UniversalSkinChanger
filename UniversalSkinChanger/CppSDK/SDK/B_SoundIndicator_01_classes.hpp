#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SoundIndicator_01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SoundIndicator_01.B_SoundIndicator_01_C
// 0x03E0 (0x0830 - 0x0450)
class AB_SoundIndicator_01_C final : public AFortSoundCameraLensEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Chest;                                             // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FootstepsOrGlider;                                 // 0x0459(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Gunshot;                                           // 0x045A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Plane;                                             // 0x045B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Generic;                                           // 0x045C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45D[0x3];                                      // 0x045D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRuntimeFloatCurve                     Gunshot_Falloff_Long_Range;                        // 0x0460(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                     Chest_Falloff;                                     // 0x04E8(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                     Footsteps_Falloff;                                 // 0x0570(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                     Gunshot_Falloff_Mid_Range;                         // 0x05F8(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                     Gunshot_Falloff_Melee;                             // 0x0680(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         OppositeFacingGunshotStrength;                     // 0x0708(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FacingGunshotExponentNear;                         // 0x070C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ForwardFacingGunshotStrength;                      // 0x0710(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FacingGunshotExponentFar;                          // 0x0714(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DistanceDivisor;                                   // 0x0718(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71C[0x4];                                      // 0x071C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRuntimeFloatCurve                     Glider_Falloff;                                    // 0x0720(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                     Plane_Falloff;                                     // 0x07A8(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_B_SoundIndicator_01(int32 EntryPoint);
	void OnEffectActivated();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void UpdateEmitterStates();
	struct FRuntimeFloatCurve GetWeaponCurve();
	void CalculateFiringAngle(float* DotResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SoundIndicator_01_C">();
	}
	static class AB_SoundIndicator_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_SoundIndicator_01_C>();
	}
};
static_assert(alignof(AB_SoundIndicator_01_C) == 0x000010, "Wrong alignment on AB_SoundIndicator_01_C");
static_assert(sizeof(AB_SoundIndicator_01_C) == 0x000830, "Wrong size on AB_SoundIndicator_01_C");
static_assert(offsetof(AB_SoundIndicator_01_C, UberGraphFrame) == 0x000450, "Member 'AB_SoundIndicator_01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Chest) == 0x000458, "Member 'AB_SoundIndicator_01_C::Chest' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, FootstepsOrGlider) == 0x000459, "Member 'AB_SoundIndicator_01_C::FootstepsOrGlider' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Gunshot) == 0x00045A, "Member 'AB_SoundIndicator_01_C::Gunshot' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Plane) == 0x00045B, "Member 'AB_SoundIndicator_01_C::Plane' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Generic) == 0x00045C, "Member 'AB_SoundIndicator_01_C::Generic' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Gunshot_Falloff_Long_Range) == 0x000460, "Member 'AB_SoundIndicator_01_C::Gunshot_Falloff_Long_Range' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Chest_Falloff) == 0x0004E8, "Member 'AB_SoundIndicator_01_C::Chest_Falloff' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Footsteps_Falloff) == 0x000570, "Member 'AB_SoundIndicator_01_C::Footsteps_Falloff' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Gunshot_Falloff_Mid_Range) == 0x0005F8, "Member 'AB_SoundIndicator_01_C::Gunshot_Falloff_Mid_Range' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Gunshot_Falloff_Melee) == 0x000680, "Member 'AB_SoundIndicator_01_C::Gunshot_Falloff_Melee' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, OppositeFacingGunshotStrength) == 0x000708, "Member 'AB_SoundIndicator_01_C::OppositeFacingGunshotStrength' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, FacingGunshotExponentNear) == 0x00070C, "Member 'AB_SoundIndicator_01_C::FacingGunshotExponentNear' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, ForwardFacingGunshotStrength) == 0x000710, "Member 'AB_SoundIndicator_01_C::ForwardFacingGunshotStrength' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, FacingGunshotExponentFar) == 0x000714, "Member 'AB_SoundIndicator_01_C::FacingGunshotExponentFar' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, DistanceDivisor) == 0x000718, "Member 'AB_SoundIndicator_01_C::DistanceDivisor' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Glider_Falloff) == 0x000720, "Member 'AB_SoundIndicator_01_C::Glider_Falloff' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Plane_Falloff) == 0x0007A8, "Member 'AB_SoundIndicator_01_C::Plane_Falloff' has a wrong offset!");

}
