#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Athena_Water

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Athena_Water.BP_Athena_Water_C
// 0x0078 (0x03A8 - 0x0330)
class ABP_Athena_Water_C final : public AFortAthenaWater
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                  WaterPost;                                         // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Water_Base;                                        // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Water_Plane;                                       // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      WaterMaterial;                                     // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HideGroundPlane;                                   // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_361[0x7];                                      // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     GroundPlaneMaterialOverride;                       // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CorruptWaterMat;                                   // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsBouncy;                                          // 0x0371(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_372[0x6];                                      // 0x0372(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortAthenaVehicle*                     VehicleToBounce;                                   // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortAthenaVehicle*>             RecentlyBouncedVehicles;                           // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          IsLootLake;                                        // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_391[0x3];                                      // 0x0391(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HitLocation;                                       // 0x0394(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BounceLake;                                        // 0x03A0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Athena_Water(int32 EntryPoint);
	void BouncePawn(class APlayerPawn_Athena_C* Pawn);
	void ReplicateGCVehicles(class AActor* Actor);
	void SetDefaultMaterial();
	void ClearRecentlyBounced();
	void BounceVehicle();
	void PlayBounceGC(class AActor* Target);
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Bouncy();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void SetBouncy(bool Bouncy);
	void SetTurnedOnMaterial();
	void SetSpreadMaterial();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void OnRep_IsBouncy();
	void OnRep_BounceLake();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Athena_Water_C">();
	}
	static class ABP_Athena_Water_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Athena_Water_C>();
	}
};
static_assert(alignof(ABP_Athena_Water_C) == 0x000008, "Wrong alignment on ABP_Athena_Water_C");
static_assert(sizeof(ABP_Athena_Water_C) == 0x0003A8, "Wrong size on ABP_Athena_Water_C");
static_assert(offsetof(ABP_Athena_Water_C, UberGraphFrame) == 0x000330, "Member 'ABP_Athena_Water_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Water_C, WaterPost) == 0x000338, "Member 'ABP_Athena_Water_C::WaterPost' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Water_C, Box) == 0x000340, "Member 'ABP_Athena_Water_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Water_C, Water_Base) == 0x000348, "Member 'ABP_Athena_Water_C::Water_Base' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Water_C, Water_Plane) == 0x000350, "Member 'ABP_Athena_Water_C::Water_Plane' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Water_C, WaterMaterial) == 0x000358, "Member 'ABP_Athena_Water_C::WaterMaterial' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Water_C, HideGroundPlane) == 0x000360, "Member 'ABP_Athena_Water_C::HideGroundPlane' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Water_C, GroundPlaneMaterialOverride) == 0x000368, "Member 'ABP_Athena_Water_C::GroundPlaneMaterialOverride' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Water_C, CorruptWaterMat) == 0x000370, "Member 'ABP_Athena_Water_C::CorruptWaterMat' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Water_C, IsBouncy) == 0x000371, "Member 'ABP_Athena_Water_C::IsBouncy' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Water_C, VehicleToBounce) == 0x000378, "Member 'ABP_Athena_Water_C::VehicleToBounce' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Water_C, RecentlyBouncedVehicles) == 0x000380, "Member 'ABP_Athena_Water_C::RecentlyBouncedVehicles' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Water_C, IsLootLake) == 0x000390, "Member 'ABP_Athena_Water_C::IsLootLake' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Water_C, HitLocation) == 0x000394, "Member 'ABP_Athena_Water_C::HitLocation' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Water_C, BounceLake) == 0x0003A0, "Member 'ABP_Athena_Water_C::BounceLake' has a wrong offset!");

}
