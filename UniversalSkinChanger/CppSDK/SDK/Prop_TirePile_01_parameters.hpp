#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_TirePile_01

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Prop_TirePile_01.Prop_TirePile_01_C.ExecuteUbergraph_Prop_TirePile_01
// 0x0148 (0x0148 - 0x0000)
struct Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x00E4(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue1;         // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable1;                // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FD[0x3];                                       // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue1;                  // 0x0100(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LaunchHoverboard_Success;                 // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10D[0x3];                                      // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue1;   // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x0130(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0142(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable1;                      // 0x0143(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CeilingCheck_Success;                     // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CeilingCheck_Success1;                    // 0x0145(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01) == 0x000008, "Wrong alignment on Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01");
static_assert(sizeof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01) == 0x000148, "Wrong size on Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, EntryPoint) == 0x000000, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000B0, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0000C0, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, CallFunc_MakeVector_ReturnValue) == 0x0000CC, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x0000D8, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, CallFunc_IsValid_ReturnValue) == 0x0000E0, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x0000E4, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, Temp_bool_Has_Been_Initd_Variable) == 0x0000EC, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, CallFunc_K2_GetActorLocation_ReturnValue1) == 0x0000F0, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::CallFunc_K2_GetActorLocation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, Temp_bool_Has_Been_Initd_Variable1) == 0x0000FC, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::Temp_bool_Has_Been_Initd_Variable1' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, CallFunc_MakeVector_ReturnValue1) == 0x000100, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::CallFunc_MakeVector_ReturnValue1' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, CallFunc_LaunchHoverboard_Success) == 0x00010C, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::CallFunc_LaunchHoverboard_Success' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, CallFunc_GetController_ReturnValue) == 0x000110, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000118, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, K2Node_DynamicCast_bSuccess1) == 0x000120, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, CallFunc_GetAbilitySystemComponent_ReturnValue1) == 0x000128, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::CallFunc_GetAbilitySystemComponent_ReturnValue1' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000130, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000140, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, CallFunc_BooleanOR_ReturnValue) == 0x000141, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, Temp_bool_IsClosed_Variable) == 0x000142, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, Temp_bool_IsClosed_Variable1) == 0x000143, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::Temp_bool_IsClosed_Variable1' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, CallFunc_CeilingCheck_Success) == 0x000144, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::CallFunc_CeilingCheck_Success' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01, CallFunc_CeilingCheck_Success1) == 0x000145, "Member 'Prop_TirePile_01_C_ExecuteUbergraph_Prop_TirePile_01::CallFunc_CeilingCheck_Success1' has a wrong offset!");

// Function Prop_TirePile_01.Prop_TirePile_01_C.BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct Prop_TirePile_01_C_BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Prop_TirePile_01_C_BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Prop_TirePile_01_C_BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(Prop_TirePile_01_C_BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on Prop_TirePile_01_C_BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(Prop_TirePile_01_C_BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Prop_TirePile_01_C_BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Prop_TirePile_01_C_BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Prop_TirePile_01_C_BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Prop_TirePile_01_C_BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'Prop_TirePile_01_C_BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'Prop_TirePile_01_C_BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function Prop_TirePile_01.Prop_TirePile_01_C.CeilingCheck
// 0x00E8 (0x00E8 - 0x0000)
struct Prop_TirePile_01_C_CeilingCheck final
{
public:
	bool                                          Success;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue1;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue1;                  // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_CapsuleTraceSingle_OutHit;                // 0x0058(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_CapsuleTraceSingle_ReturnValue;           // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_TirePile_01_C_CeilingCheck) == 0x000008, "Wrong alignment on Prop_TirePile_01_C_CeilingCheck");
static_assert(sizeof(Prop_TirePile_01_C_CeilingCheck) == 0x0000E8, "Wrong size on Prop_TirePile_01_C_CeilingCheck");
static_assert(offsetof(Prop_TirePile_01_C_CeilingCheck, Success) == 0x000000, "Member 'Prop_TirePile_01_C_CeilingCheck::Success' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_CeilingCheck, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000008, "Member 'Prop_TirePile_01_C_CeilingCheck::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_CeilingCheck, K2Node_MakeArray_Array) == 0x000010, "Member 'Prop_TirePile_01_C_CeilingCheck::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_CeilingCheck, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000020, "Member 'Prop_TirePile_01_C_CeilingCheck::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_CeilingCheck, CallFunc_BreakVector_X) == 0x00002C, "Member 'Prop_TirePile_01_C_CeilingCheck::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_CeilingCheck, CallFunc_BreakVector_Y) == 0x000030, "Member 'Prop_TirePile_01_C_CeilingCheck::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_CeilingCheck, CallFunc_BreakVector_Z) == 0x000034, "Member 'Prop_TirePile_01_C_CeilingCheck::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_CeilingCheck, CallFunc_Add_FloatFloat_ReturnValue) == 0x000038, "Member 'Prop_TirePile_01_C_CeilingCheck::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_CeilingCheck, CallFunc_Add_FloatFloat_ReturnValue1) == 0x00003C, "Member 'Prop_TirePile_01_C_CeilingCheck::CallFunc_Add_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_CeilingCheck, CallFunc_MakeVector_ReturnValue) == 0x000040, "Member 'Prop_TirePile_01_C_CeilingCheck::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_CeilingCheck, CallFunc_MakeVector_ReturnValue1) == 0x00004C, "Member 'Prop_TirePile_01_C_CeilingCheck::CallFunc_MakeVector_ReturnValue1' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_CeilingCheck, CallFunc_CapsuleTraceSingle_OutHit) == 0x000058, "Member 'Prop_TirePile_01_C_CeilingCheck::CallFunc_CapsuleTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(Prop_TirePile_01_C_CeilingCheck, CallFunc_CapsuleTraceSingle_ReturnValue) == 0x0000E0, "Member 'Prop_TirePile_01_C_CeilingCheck::CallFunc_CapsuleTraceSingle_ReturnValue' has a wrong offset!");

}
