#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C
// 0x11A0 (0x1570 - 0x03D0)
class UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_966722F040605A529996238D427F43D4; // 0x03D8(0x0020)()
	struct FAnimNode_SubInput                     AnimGraphNode_SubInput_706F137147C60FF00343D1942C15960B; // 0x03F8(0x0048)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_18FA112E46ABA0D05274AA95C741D095; // 0x0440(0x0310)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6B89CDA04ED040E5B4E7049182772646; // 0x0750(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2F8266E641D30F638E18F9AD63452CB2; // 0x0770(0x0020)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_20B56F374DE380A7E12409AE93F8D7F9; // 0x0790(0x0310)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_8B2A53064649ECCBE2C488A1BFAA1ABC; // 0x0AA0(0x0310)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_912B846445FBAD349FA22EBCF5DB5505; // 0x0DB0(0x0310)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_A51E3A934B8D907BC2DA37A7CE8355D3; // 0x10C0(0x00B8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_E6FD1209434285325183BFB8C8B047D7; // 0x1178(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_90E87AEB4216ABCCD1A7C288696B4405; // 0x11A0(0x00A0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_890553D14E92A2709A57D6913EA2991E; // 0x1240(0x0028)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_67B8CD8B4C9B959DED2F5E89ACE6FB1C; // 0x1268(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4881F0674D460CEDDEC22E99FDCBD724; // 0x1370(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1A528F7A47B3D4714707ED96B298D1D0; // 0x1390(0x0020)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3077CAF64E1F65744AFBB18F63376A75; // 0x13B0(0x00A0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4DCAC5274BDE487C996AF2AFD9A6ABD9; // 0x1450(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_90029CC74EF407C0DD580FA80F444EA3; // 0x1478(0x00B8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_8B1399FF43838183D1B4EAA73C086674; // 0x1530(0x0028)()
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x1558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GetPlayerListUsesCustomCharacterParts;             // 0x1560(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP(int32 EntryPoint);
	void BlueprintInitializeAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C">();
	}
	static class UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C>();
	}
};
static_assert(alignof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C) == 0x000010, "Wrong alignment on UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C");
static_assert(sizeof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C) == 0x001570, "Wrong size on UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, UberGraphFrame) == 0x0003D0, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, AnimGraphNode_Root_966722F040605A529996238D427F43D4) == 0x0003D8, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::AnimGraphNode_Root_966722F040605A529996238D427F43D4' has a wrong offset!");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, AnimGraphNode_SubInput_706F137147C60FF00343D1942C15960B) == 0x0003F8, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::AnimGraphNode_SubInput_706F137147C60FF00343D1942C15960B' has a wrong offset!");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, AnimGraphNode_AnimDynamics_18FA112E46ABA0D05274AA95C741D095) == 0x000440, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::AnimGraphNode_AnimDynamics_18FA112E46ABA0D05274AA95C741D095' has a wrong offset!");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, AnimGraphNode_LocalToComponentSpace_6B89CDA04ED040E5B4E7049182772646) == 0x000750, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::AnimGraphNode_LocalToComponentSpace_6B89CDA04ED040E5B4E7049182772646' has a wrong offset!");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, AnimGraphNode_ComponentToLocalSpace_2F8266E641D30F638E18F9AD63452CB2) == 0x000770, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::AnimGraphNode_ComponentToLocalSpace_2F8266E641D30F638E18F9AD63452CB2' has a wrong offset!");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, AnimGraphNode_AnimDynamics_20B56F374DE380A7E12409AE93F8D7F9) == 0x000790, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::AnimGraphNode_AnimDynamics_20B56F374DE380A7E12409AE93F8D7F9' has a wrong offset!");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, AnimGraphNode_AnimDynamics_8B2A53064649ECCBE2C488A1BFAA1ABC) == 0x000AA0, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::AnimGraphNode_AnimDynamics_8B2A53064649ECCBE2C488A1BFAA1ABC' has a wrong offset!");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, AnimGraphNode_AnimDynamics_912B846445FBAD349FA22EBCF5DB5505) == 0x000DB0, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::AnimGraphNode_AnimDynamics_912B846445FBAD349FA22EBCF5DB5505' has a wrong offset!");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, AnimGraphNode_SaveCachedPose_A51E3A934B8D907BC2DA37A7CE8355D3) == 0x0010C0, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::AnimGraphNode_SaveCachedPose_A51E3A934B8D907BC2DA37A7CE8355D3' has a wrong offset!");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, AnimGraphNode_UseCachedPose_E6FD1209434285325183BFB8C8B047D7) == 0x001178, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::AnimGraphNode_UseCachedPose_E6FD1209434285325183BFB8C8B047D7' has a wrong offset!");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, AnimGraphNode_BlendListByBool_90E87AEB4216ABCCD1A7C288696B4405) == 0x0011A0, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::AnimGraphNode_BlendListByBool_90E87AEB4216ABCCD1A7C288696B4405' has a wrong offset!");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, AnimGraphNode_UseCachedPose_890553D14E92A2709A57D6913EA2991E) == 0x001240, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::AnimGraphNode_UseCachedPose_890553D14E92A2709A57D6913EA2991E' has a wrong offset!");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, AnimGraphNode_ModifyBone_67B8CD8B4C9B959DED2F5E89ACE6FB1C) == 0x001268, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::AnimGraphNode_ModifyBone_67B8CD8B4C9B959DED2F5E89ACE6FB1C' has a wrong offset!");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, AnimGraphNode_LocalToComponentSpace_4881F0674D460CEDDEC22E99FDCBD724) == 0x001370, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::AnimGraphNode_LocalToComponentSpace_4881F0674D460CEDDEC22E99FDCBD724' has a wrong offset!");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, AnimGraphNode_ComponentToLocalSpace_1A528F7A47B3D4714707ED96B298D1D0) == 0x001390, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::AnimGraphNode_ComponentToLocalSpace_1A528F7A47B3D4714707ED96B298D1D0' has a wrong offset!");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, AnimGraphNode_BlendListByBool_3077CAF64E1F65744AFBB18F63376A75) == 0x0013B0, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::AnimGraphNode_BlendListByBool_3077CAF64E1F65744AFBB18F63376A75' has a wrong offset!");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, AnimGraphNode_UseCachedPose_4DCAC5274BDE487C996AF2AFD9A6ABD9) == 0x001450, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::AnimGraphNode_UseCachedPose_4DCAC5274BDE487C996AF2AFD9A6ABD9' has a wrong offset!");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, AnimGraphNode_SaveCachedPose_90029CC74EF407C0DD580FA80F444EA3) == 0x001478, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::AnimGraphNode_SaveCachedPose_90029CC74EF407C0DD580FA80F444EA3' has a wrong offset!");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, AnimGraphNode_UseCachedPose_8B1399FF43838183D1B4EAA73C086674) == 0x001530, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::AnimGraphNode_UseCachedPose_8B1399FF43838183D1B4EAA73C086674' has a wrong offset!");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, MeshToCopy) == 0x001558, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::MeshToCopy' has a wrong offset!");
static_assert(offsetof(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C, GetPlayerListUsesCustomCharacterParts) == 0x001560, "Member 'UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::GetPlayerListUsesCustomCharacterParts' has a wrong offset!");

}
