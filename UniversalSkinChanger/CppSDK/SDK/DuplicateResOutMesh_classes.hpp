#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DuplicateResOutMesh

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DuplicateResOutMesh.DuplicateResOutMesh_C
// 0x0160 (0x0490 - 0x0330)
class ADuplicateResOutMesh_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         CharacterSpawnInTimeline_FirstPassComplete_2AB89084476E64255664E9B2D45E14C1; // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CharacterSpawnInTimeline_LightIntensity_2AB89084476E64255664E9B2D45E14C1; // 0x0344(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CharacterSpawnInTimeline_zHieght_2AB89084476E64255664E9B2D45E14C1; // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            CharacterSpawnInTimeline__Direction_2AB89084476E64255664E9B2D45E14C1; // 0x034C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34D[0x3];                                      // 0x034D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     CharacterSpawnInTimeline;                          // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Skeletal_Mesh_Duplicate;                           // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Gun_True;                                          // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_361[0x3];                                      // 0x0361(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BoundsRadius;                                      // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NewVar_0;                                          // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36C[0x4];                                      // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceDynamic*>       MIDArray;                                          // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                World_location_for_the_dissolve_location;          // 0x0380(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C[0x4];                                      // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Current_MID;                                       // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Head_Space;                                        // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Leg_Space;                                         // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   Spawn_Light;                                       // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Light_intensity;                                   // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Number_of_Base_skeletal_mesh_materials;            // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FirstPassComplete;                                 // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B4[0x4];                                      // 0x03B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USkeletalMeshComponent*>         ExternalSkeletalMeshComponent;                     // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	uint8                                         Pad_3C8[0x8];                                      // 0x03C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Box_Local_Transform;                               // 0x03D0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Timeline_Play_Length;                              // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          TeleportOut_;                                      // 0x0404(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_405[0x3];                                      // 0x0405(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 ExternalActor;                                     // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>         InternalSkeletalMeshComponents;                    // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         CurrentMeshMidIndex;                               // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_424[0x4];                                      // 0x0424(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 External_Base_Mesh_Component;                      // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       ExternalMidArray;                                  // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	class USkeletalMeshComponent*                 ExternalRootMeshComponent;                         // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             ListOfMaterialsExemptFromReparenting;              // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          MaterialParentIsValid;                             // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_459[0x7];                                      // 0x0459(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CurrentParentMaterial;                             // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CurrentMaterial;                                   // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       Original_MIDs;                                     // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         Increment_End;                                     // 0x0480(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DuplicateResOutMesh(int32 EntryPoint);
	void UpdateExternalParameters(const TArray<class UMaterialInstanceDynamic*>& MID_Array, const TArray<class USkeletalMeshComponent*>& External_Mesh_Component_Array);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void CharacterSpawnInTimeline__UpdateFunc();
	void CharacterSpawnInTimeline__FinishedFunc();
	void UserConstructionScript();
	void InitializeExternalSkeletalMeshArray();
	void Find_Bounds();
	void Spawn__Light();
	void Make_and_slave_internal_meshes();
	void Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array();
	void ProcessSpawnInTimeline(float ZHeight, float LightIntensity);
	void External_Mesh_Masked_Setup(TArray<class USkeletalMeshComponent*>& External_Mesh_Component_Array, TArray<class UMaterialInstanceDynamic*>* Corrected_Mid_Array);
	void Store_Original_Material_for_Teleport_In();
	void RestoreInProgressRes();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DuplicateResOutMesh_C">();
	}
	static class ADuplicateResOutMesh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADuplicateResOutMesh_C>();
	}
};
static_assert(alignof(ADuplicateResOutMesh_C) == 0x000010, "Wrong alignment on ADuplicateResOutMesh_C");
static_assert(sizeof(ADuplicateResOutMesh_C) == 0x000490, "Wrong size on ADuplicateResOutMesh_C");
static_assert(offsetof(ADuplicateResOutMesh_C, UberGraphFrame) == 0x000330, "Member 'ADuplicateResOutMesh_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, DefaultSceneRoot) == 0x000338, "Member 'ADuplicateResOutMesh_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CharacterSpawnInTimeline_FirstPassComplete_2AB89084476E64255664E9B2D45E14C1) == 0x000340, "Member 'ADuplicateResOutMesh_C::CharacterSpawnInTimeline_FirstPassComplete_2AB89084476E64255664E9B2D45E14C1' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CharacterSpawnInTimeline_LightIntensity_2AB89084476E64255664E9B2D45E14C1) == 0x000344, "Member 'ADuplicateResOutMesh_C::CharacterSpawnInTimeline_LightIntensity_2AB89084476E64255664E9B2D45E14C1' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CharacterSpawnInTimeline_zHieght_2AB89084476E64255664E9B2D45E14C1) == 0x000348, "Member 'ADuplicateResOutMesh_C::CharacterSpawnInTimeline_zHieght_2AB89084476E64255664E9B2D45E14C1' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CharacterSpawnInTimeline__Direction_2AB89084476E64255664E9B2D45E14C1) == 0x00034C, "Member 'ADuplicateResOutMesh_C::CharacterSpawnInTimeline__Direction_2AB89084476E64255664E9B2D45E14C1' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CharacterSpawnInTimeline) == 0x000350, "Member 'ADuplicateResOutMesh_C::CharacterSpawnInTimeline' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Skeletal_Mesh_Duplicate) == 0x000358, "Member 'ADuplicateResOutMesh_C::Skeletal_Mesh_Duplicate' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Gun_True) == 0x000360, "Member 'ADuplicateResOutMesh_C::Gun_True' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, BoundsRadius) == 0x000364, "Member 'ADuplicateResOutMesh_C::BoundsRadius' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, NewVar_0) == 0x000368, "Member 'ADuplicateResOutMesh_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, MIDArray) == 0x000370, "Member 'ADuplicateResOutMesh_C::MIDArray' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, World_location_for_the_dissolve_location) == 0x000380, "Member 'ADuplicateResOutMesh_C::World_location_for_the_dissolve_location' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Current_MID) == 0x000390, "Member 'ADuplicateResOutMesh_C::Current_MID' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Head_Space) == 0x000398, "Member 'ADuplicateResOutMesh_C::Head_Space' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Leg_Space) == 0x00039C, "Member 'ADuplicateResOutMesh_C::Leg_Space' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Spawn_Light) == 0x0003A0, "Member 'ADuplicateResOutMesh_C::Spawn_Light' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Light_intensity) == 0x0003A8, "Member 'ADuplicateResOutMesh_C::Light_intensity' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Number_of_Base_skeletal_mesh_materials) == 0x0003AC, "Member 'ADuplicateResOutMesh_C::Number_of_Base_skeletal_mesh_materials' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, FirstPassComplete) == 0x0003B0, "Member 'ADuplicateResOutMesh_C::FirstPassComplete' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, ExternalSkeletalMeshComponent) == 0x0003B8, "Member 'ADuplicateResOutMesh_C::ExternalSkeletalMeshComponent' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Box_Local_Transform) == 0x0003D0, "Member 'ADuplicateResOutMesh_C::Box_Local_Transform' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Timeline_Play_Length) == 0x000400, "Member 'ADuplicateResOutMesh_C::Timeline_Play_Length' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, TeleportOut_) == 0x000404, "Member 'ADuplicateResOutMesh_C::TeleportOut_' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, ExternalActor) == 0x000408, "Member 'ADuplicateResOutMesh_C::ExternalActor' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, InternalSkeletalMeshComponents) == 0x000410, "Member 'ADuplicateResOutMesh_C::InternalSkeletalMeshComponents' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CurrentMeshMidIndex) == 0x000420, "Member 'ADuplicateResOutMesh_C::CurrentMeshMidIndex' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, External_Base_Mesh_Component) == 0x000428, "Member 'ADuplicateResOutMesh_C::External_Base_Mesh_Component' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, ExternalMidArray) == 0x000430, "Member 'ADuplicateResOutMesh_C::ExternalMidArray' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, ExternalRootMeshComponent) == 0x000440, "Member 'ADuplicateResOutMesh_C::ExternalRootMeshComponent' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, ListOfMaterialsExemptFromReparenting) == 0x000448, "Member 'ADuplicateResOutMesh_C::ListOfMaterialsExemptFromReparenting' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, MaterialParentIsValid) == 0x000458, "Member 'ADuplicateResOutMesh_C::MaterialParentIsValid' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CurrentParentMaterial) == 0x000460, "Member 'ADuplicateResOutMesh_C::CurrentParentMaterial' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CurrentMaterial) == 0x000468, "Member 'ADuplicateResOutMesh_C::CurrentMaterial' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Original_MIDs) == 0x000470, "Member 'ADuplicateResOutMesh_C::Original_MIDs' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Increment_End) == 0x000480, "Member 'ADuplicateResOutMesh_C::Increment_End' has a wrong offset!");

}
