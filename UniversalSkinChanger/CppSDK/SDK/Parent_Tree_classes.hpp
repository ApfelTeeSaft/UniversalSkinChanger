#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Parent_Tree

#include "Basic.hpp"

#include "En_LeafTypes_01_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Parent_Tree.Parent_Tree_C
// 0x0180 (0x0DB0 - 0x0C30)
class AParent_Tree_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       LeafPlacement;                                     // 0x0C38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Wind_Direction;                                    // 0x0C40(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          EmitLeaves_;                                       // 0x0C4C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          DebugMode_;                                        // 0x0C4D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          DebugStorms_;                                      // 0x0C4E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	En_LeafTypes_01                               LeafTypes;                                         // 0x0C4F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class FName>                           LeafEmitterNamesSpherical;                         // 0x0C50(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FName>                           LeafEmitterNamesCylindrical;                       // 0x0C60(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>       LeafEmitterComponents;                             // 0x0C70(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                EmitterSize;                                       // 0x0C80(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Lifetime_Idle_;                                    // 0x0C8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Lifetime_Storm_;                                   // 0x0C90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SpawnRate_Idle_;                                   // 0x0C94(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SpawnRate_Storm_;                                  // 0x0C98(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         WindIntensity_Idle_;                               // 0x0C9C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         WindIntensity_Storm_;                              // 0x0CA0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_CA4[0x4];                                      // 0x0CA4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     MediumLeafMaterialMasked;                          // 0x0CA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     SmallLeafMaterialMasked;                           // 0x0CB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     LargeLeafMaterialMasked;                           // 0x0CB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     PineLeafMaterialMasked;                            // 0x0CC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               LeafEmitterSetup;                                  // 0x0CC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EmitterMaxDrawDistance;                            // 0x0CD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxEmitterCount;                                   // 0x0CD4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentEmitterCount;                               // 0x0CD8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StormActive_;                                      // 0x0CDC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CDD[0x3];                                      // 0x0CDD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     MediumLeafMaterialTranslucent;                     // 0x0CE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     SmallLeafMaterialTranslucent;                      // 0x0CE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DistanceFieldsEnabled_;                            // 0x0CF0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CF1[0x7];                                      // 0x0CF1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     LargeLeafMaterialTranslucent;                      // 0x0CF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     PineLeafMaterialTranslucent;                       // 0x0D00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Leaf_Emitter_Setup_Template;                       // 0x0D08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Leaf_Material_Setup;                               // 0x0D10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortWindImpulseHandle                 WindHandle;                                        // 0x0D18(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          DebugWind;                                         // 0x0D1C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1D[0x3];                                      // 0x0D1D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Debug_Wind_Intensity;                              // 0x0D20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D24[0x4];                                      // 0x0D24(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Debug_TempMaterial;                                // 0x0D28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugWindYaw;                                      // 0x0D30(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D34[0x4];                                      // 0x0D34(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   Wind_Intensity_Debug_Mesh;                         // 0x0D38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SpawnWindFX_;                                      // 0x0D40(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D41[0xF];                                      // 0x0D41(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             WindFX_Transform;                                  // 0x0D50(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         WindFX_MaxDrawDistance;                            // 0x0D80(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D84[0x4];                                      // 0x0D84(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               WindFX;                                            // 0x0D88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SpawnFX;                                           // 0x0D90(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D91[0x3];                                      // 0x0D91(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LeafRadius;                                        // 0x0D94(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LeafCenter_Offset;                                 // 0x0D98(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseCylinder;                                       // 0x0DA4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DA5[0x3];                                      // 0x0DA5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NewVar_0;                                          // 0x0DA8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Parent_Tree(int32 EntryPoint);
	void ChangeWindIntensity(float Intensity, float Time_It_Takes_To_Reach_New_Intensity);
	void ReceiveDestroyed();
	void UserConstructionScript();
	void FX_UpdateEmitterStates();
	void FX_UpdateEmitterParameters();
	void RemoveTestWind(float BlendTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Parent_Tree_C">();
	}
	static class AParent_Tree_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AParent_Tree_C>();
	}
};
static_assert(alignof(AParent_Tree_C) == 0x000010, "Wrong alignment on AParent_Tree_C");
static_assert(sizeof(AParent_Tree_C) == 0x000DB0, "Wrong size on AParent_Tree_C");
static_assert(offsetof(AParent_Tree_C, UberGraphFrame) == 0x000C30, "Member 'AParent_Tree_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, LeafPlacement) == 0x000C38, "Member 'AParent_Tree_C::LeafPlacement' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, Wind_Direction) == 0x000C40, "Member 'AParent_Tree_C::Wind_Direction' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, EmitLeaves_) == 0x000C4C, "Member 'AParent_Tree_C::EmitLeaves_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, DebugMode_) == 0x000C4D, "Member 'AParent_Tree_C::DebugMode_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, DebugStorms_) == 0x000C4E, "Member 'AParent_Tree_C::DebugStorms_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, LeafTypes) == 0x000C4F, "Member 'AParent_Tree_C::LeafTypes' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, LeafEmitterNamesSpherical) == 0x000C50, "Member 'AParent_Tree_C::LeafEmitterNamesSpherical' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, LeafEmitterNamesCylindrical) == 0x000C60, "Member 'AParent_Tree_C::LeafEmitterNamesCylindrical' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, LeafEmitterComponents) == 0x000C70, "Member 'AParent_Tree_C::LeafEmitterComponents' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, EmitterSize) == 0x000C80, "Member 'AParent_Tree_C::EmitterSize' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, Lifetime_Idle_) == 0x000C8C, "Member 'AParent_Tree_C::Lifetime_Idle_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, Lifetime_Storm_) == 0x000C90, "Member 'AParent_Tree_C::Lifetime_Storm_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, SpawnRate_Idle_) == 0x000C94, "Member 'AParent_Tree_C::SpawnRate_Idle_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, SpawnRate_Storm_) == 0x000C98, "Member 'AParent_Tree_C::SpawnRate_Storm_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, WindIntensity_Idle_) == 0x000C9C, "Member 'AParent_Tree_C::WindIntensity_Idle_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, WindIntensity_Storm_) == 0x000CA0, "Member 'AParent_Tree_C::WindIntensity_Storm_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, MediumLeafMaterialMasked) == 0x000CA8, "Member 'AParent_Tree_C::MediumLeafMaterialMasked' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, SmallLeafMaterialMasked) == 0x000CB0, "Member 'AParent_Tree_C::SmallLeafMaterialMasked' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, LargeLeafMaterialMasked) == 0x000CB8, "Member 'AParent_Tree_C::LargeLeafMaterialMasked' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, PineLeafMaterialMasked) == 0x000CC0, "Member 'AParent_Tree_C::PineLeafMaterialMasked' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, LeafEmitterSetup) == 0x000CC8, "Member 'AParent_Tree_C::LeafEmitterSetup' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, EmitterMaxDrawDistance) == 0x000CD0, "Member 'AParent_Tree_C::EmitterMaxDrawDistance' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, MaxEmitterCount) == 0x000CD4, "Member 'AParent_Tree_C::MaxEmitterCount' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, CurrentEmitterCount) == 0x000CD8, "Member 'AParent_Tree_C::CurrentEmitterCount' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, StormActive_) == 0x000CDC, "Member 'AParent_Tree_C::StormActive_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, MediumLeafMaterialTranslucent) == 0x000CE0, "Member 'AParent_Tree_C::MediumLeafMaterialTranslucent' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, SmallLeafMaterialTranslucent) == 0x000CE8, "Member 'AParent_Tree_C::SmallLeafMaterialTranslucent' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, DistanceFieldsEnabled_) == 0x000CF0, "Member 'AParent_Tree_C::DistanceFieldsEnabled_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, LargeLeafMaterialTranslucent) == 0x000CF8, "Member 'AParent_Tree_C::LargeLeafMaterialTranslucent' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, PineLeafMaterialTranslucent) == 0x000D00, "Member 'AParent_Tree_C::PineLeafMaterialTranslucent' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, Leaf_Emitter_Setup_Template) == 0x000D08, "Member 'AParent_Tree_C::Leaf_Emitter_Setup_Template' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, Leaf_Material_Setup) == 0x000D10, "Member 'AParent_Tree_C::Leaf_Material_Setup' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, WindHandle) == 0x000D18, "Member 'AParent_Tree_C::WindHandle' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, DebugWind) == 0x000D1C, "Member 'AParent_Tree_C::DebugWind' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, Debug_Wind_Intensity) == 0x000D20, "Member 'AParent_Tree_C::Debug_Wind_Intensity' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, Debug_TempMaterial) == 0x000D28, "Member 'AParent_Tree_C::Debug_TempMaterial' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, DebugWindYaw) == 0x000D30, "Member 'AParent_Tree_C::DebugWindYaw' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, Wind_Intensity_Debug_Mesh) == 0x000D38, "Member 'AParent_Tree_C::Wind_Intensity_Debug_Mesh' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, SpawnWindFX_) == 0x000D40, "Member 'AParent_Tree_C::SpawnWindFX_' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, WindFX_Transform) == 0x000D50, "Member 'AParent_Tree_C::WindFX_Transform' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, WindFX_MaxDrawDistance) == 0x000D80, "Member 'AParent_Tree_C::WindFX_MaxDrawDistance' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, WindFX) == 0x000D88, "Member 'AParent_Tree_C::WindFX' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, SpawnFX) == 0x000D90, "Member 'AParent_Tree_C::SpawnFX' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, LeafRadius) == 0x000D94, "Member 'AParent_Tree_C::LeafRadius' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, LeafCenter_Offset) == 0x000D98, "Member 'AParent_Tree_C::LeafCenter_Offset' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, UseCylinder) == 0x000DA4, "Member 'AParent_Tree_C::UseCylinder' has a wrong offset!");
static_assert(offsetof(AParent_Tree_C, NewVar_0) == 0x000DA8, "Member 'AParent_Tree_C::NewVar_0' has a wrong offset!");

}
