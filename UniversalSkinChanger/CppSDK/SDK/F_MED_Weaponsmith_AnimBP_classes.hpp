#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MED_Weaponsmith_AnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass F_MED_Weaponsmith_AnimBP.F_MED_Weaponsmith_AnimBP_C
// 0x1E80 (0x2250 - 0x03D0)
class UF_MED_Weaponsmith_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_14BF90864FBD80E965BB7788A1AF09C7; // 0x03D8(0x0020)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_3D9FF6D54CD2B225E53AFC8882C3D6E8; // 0x03F8(0x0138)(ContainsInstancedReference)
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_F0040B4B46F19203691A7AA9F956DB68; // 0x0530(0x0310)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2ECA994D4B450C87B856848923ACE343; // 0x0840(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_13DA76F24234D3BEDD38A6815A816E19; // 0x0860(0x0020)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_5A6F101144E08CF3AD9D05B651820F59; // 0x0880(0x0310)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_3F2A0581448788405863109DA2F21FF7; // 0x0B90(0x0310)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_D2EBBAB845D230CA94B24681586E0D42; // 0x0EA0(0x0310)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_29D98F394C4D2BD8F7DFE598E4217A08; // 0x11B0(0x0550)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_6416AB9C4748F27759882FBDEA9FF7F0; // 0x1700(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2B60A7CF4B17CA867CBE97AA2E9A0522; // 0x1808(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_10205F824E6E1387A82208A317A59982; // 0x1910(0x0108)()
	struct FFortAnimNode_Flap                     FortAnimGraphNode_Flap_670BF2A347FC9EF1B90177A8197ECDD9; // 0x1A18(0x00F8)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_5D13A0974A8B275CDC755FA16233B806; // 0x1B10(0x0310)()
	struct FAnimNode_Constraint                   AnimGraphNode_Constraint_184B91834FBB4AD317008589E985C56D; // 0x1E20(0x0108)()
	uint8                                         Pad_1F28[0x8];                                     // 0x1F28(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_AB5AFCB24DD6F4A804EFDDA3832A559A; // 0x1F30(0x0310)()
	float                                         Crouch_float;                                      // 0x2240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Dyn_alpha;                                         // 0x2244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_F_MED_Weaponsmith_AnimBP(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_MED_Weaponsmith_AnimBP_C">();
	}
	static class UF_MED_Weaponsmith_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_MED_Weaponsmith_AnimBP_C>();
	}
};
static_assert(alignof(UF_MED_Weaponsmith_AnimBP_C) == 0x000010, "Wrong alignment on UF_MED_Weaponsmith_AnimBP_C");
static_assert(sizeof(UF_MED_Weaponsmith_AnimBP_C) == 0x002250, "Wrong size on UF_MED_Weaponsmith_AnimBP_C");
static_assert(offsetof(UF_MED_Weaponsmith_AnimBP_C, UberGraphFrame) == 0x0003D0, "Member 'UF_MED_Weaponsmith_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_AnimBP_C, AnimGraphNode_Root_14BF90864FBD80E965BB7788A1AF09C7) == 0x0003D8, "Member 'UF_MED_Weaponsmith_AnimBP_C::AnimGraphNode_Root_14BF90864FBD80E965BB7788A1AF09C7' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_3D9FF6D54CD2B225E53AFC8882C3D6E8) == 0x0003F8, "Member 'UF_MED_Weaponsmith_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_3D9FF6D54CD2B225E53AFC8882C3D6E8' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_AnimBP_C, AnimGraphNode_AnimDynamics_F0040B4B46F19203691A7AA9F956DB68) == 0x000530, "Member 'UF_MED_Weaponsmith_AnimBP_C::AnimGraphNode_AnimDynamics_F0040B4B46F19203691A7AA9F956DB68' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_AnimBP_C, AnimGraphNode_LocalToComponentSpace_2ECA994D4B450C87B856848923ACE343) == 0x000840, "Member 'UF_MED_Weaponsmith_AnimBP_C::AnimGraphNode_LocalToComponentSpace_2ECA994D4B450C87B856848923ACE343' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_AnimBP_C, AnimGraphNode_ComponentToLocalSpace_13DA76F24234D3BEDD38A6815A816E19) == 0x000860, "Member 'UF_MED_Weaponsmith_AnimBP_C::AnimGraphNode_ComponentToLocalSpace_13DA76F24234D3BEDD38A6815A816E19' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_AnimBP_C, AnimGraphNode_AnimDynamics_5A6F101144E08CF3AD9D05B651820F59) == 0x000880, "Member 'UF_MED_Weaponsmith_AnimBP_C::AnimGraphNode_AnimDynamics_5A6F101144E08CF3AD9D05B651820F59' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_AnimBP_C, AnimGraphNode_AnimDynamics_3F2A0581448788405863109DA2F21FF7) == 0x000B90, "Member 'UF_MED_Weaponsmith_AnimBP_C::AnimGraphNode_AnimDynamics_3F2A0581448788405863109DA2F21FF7' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_AnimBP_C, AnimGraphNode_AnimDynamics_D2EBBAB845D230CA94B24681586E0D42) == 0x000EA0, "Member 'UF_MED_Weaponsmith_AnimBP_C::AnimGraphNode_AnimDynamics_D2EBBAB845D230CA94B24681586E0D42' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_AnimBP_C, AnimGraphNode_RigidBody_29D98F394C4D2BD8F7DFE598E4217A08) == 0x0011B0, "Member 'UF_MED_Weaponsmith_AnimBP_C::AnimGraphNode_RigidBody_29D98F394C4D2BD8F7DFE598E4217A08' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_AnimBP_C, AnimGraphNode_Constraint_6416AB9C4748F27759882FBDEA9FF7F0) == 0x001700, "Member 'UF_MED_Weaponsmith_AnimBP_C::AnimGraphNode_Constraint_6416AB9C4748F27759882FBDEA9FF7F0' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_AnimBP_C, AnimGraphNode_ModifyBone_2B60A7CF4B17CA867CBE97AA2E9A0522) == 0x001808, "Member 'UF_MED_Weaponsmith_AnimBP_C::AnimGraphNode_ModifyBone_2B60A7CF4B17CA867CBE97AA2E9A0522' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_AnimBP_C, AnimGraphNode_ModifyBone_10205F824E6E1387A82208A317A59982) == 0x001910, "Member 'UF_MED_Weaponsmith_AnimBP_C::AnimGraphNode_ModifyBone_10205F824E6E1387A82208A317A59982' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_AnimBP_C, FortAnimGraphNode_Flap_670BF2A347FC9EF1B90177A8197ECDD9) == 0x001A18, "Member 'UF_MED_Weaponsmith_AnimBP_C::FortAnimGraphNode_Flap_670BF2A347FC9EF1B90177A8197ECDD9' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_AnimBP_C, AnimGraphNode_AnimDynamics_5D13A0974A8B275CDC755FA16233B806) == 0x001B10, "Member 'UF_MED_Weaponsmith_AnimBP_C::AnimGraphNode_AnimDynamics_5D13A0974A8B275CDC755FA16233B806' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_AnimBP_C, AnimGraphNode_Constraint_184B91834FBB4AD317008589E985C56D) == 0x001E20, "Member 'UF_MED_Weaponsmith_AnimBP_C::AnimGraphNode_Constraint_184B91834FBB4AD317008589E985C56D' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_AnimBP_C, AnimGraphNode_AnimDynamics_AB5AFCB24DD6F4A804EFDDA3832A559A) == 0x001F30, "Member 'UF_MED_Weaponsmith_AnimBP_C::AnimGraphNode_AnimDynamics_AB5AFCB24DD6F4A804EFDDA3832A559A' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_AnimBP_C, Crouch_float) == 0x002240, "Member 'UF_MED_Weaponsmith_AnimBP_C::Crouch_float' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_AnimBP_C, Dyn_alpha) == 0x002244, "Member 'UF_MED_Weaponsmith_AnimBP_C::Dyn_alpha' has a wrong offset!");

}
