#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Athena_FestivusFireworks

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCNL_Athena_FestivusFireworks.GCNL_Athena_FestivusFireworks_C.ExecuteUbergraph_GCNL_Athena_FestivusFireworks
// 0x0378 (0x0378 - 0x0000)
struct GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue1;      // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0044(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CF[0x1];                                       // 0x00CF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x00FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x013C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x014C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue2;      // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_MyTarget1;                            // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters1;                          // 0x0170(0x00B8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents1;                  // 0x0228(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents1;                     // 0x0238(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalPlayerController_ReturnValue;      // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0260(0x00B8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;                   // 0x0318(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;                      // 0x0328(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           K2Node_Event_BurstCameraShakeInstance;             // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;                   // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0349(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue3;                     // 0x034A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue4;                     // 0x034B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue5;                     // 0x034C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34D[0x3];                                      // 0x034D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;                 // 0x0350(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue6;                     // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue7;                     // 0x0359(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35A[0x6];                                      // 0x035A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue1;                // 0x0360(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue2;                // 0x0368(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue8;                     // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue9;                     // 0x0371(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks) == 0x000008, "Wrong alignment on GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks");
static_assert(sizeof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks) == 0x000378, "Wrong size on GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, EntryPoint) == 0x000000, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, K2Node_MakeArray_Array) == 0x000008, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000028, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_SpawnEmitterAtLocation_ReturnValue1) == 0x000030, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_SpawnEmitterAtLocation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_BreakVector_X) == 0x000038, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_BreakVector_Y) == 0x00003C, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_BreakVector_Z) == 0x000040, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_LineTraceSingle_OutHit) == 0x000044, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_LineTraceSingle_ReturnValue) == 0x0000CC, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_BreakHitResult_bBlockingHit) == 0x0000CD, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000CE, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_BreakHitResult_Time) == 0x0000D0, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_BreakHitResult_Distance) == 0x0000D4, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_BreakHitResult_Location) == 0x0000D8, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_BreakHitResult_ImpactPoint) == 0x0000E4, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_BreakHitResult_Normal) == 0x0000F0, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_BreakHitResult_ImpactNormal) == 0x0000FC, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_BreakHitResult_PhysMat) == 0x000108, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_BreakHitResult_HitActor) == 0x000110, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_BreakHitResult_HitComponent) == 0x000118, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_BreakHitResult_HitBoneName) == 0x000120, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_BreakHitResult_HitItem) == 0x000128, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_BreakHitResult_FaceIndex) == 0x00012C, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_BreakHitResult_TraceStart) == 0x000130, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_BreakHitResult_TraceEnd) == 0x00013C, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000148, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_MakeVector_ReturnValue) == 0x00014C, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_IsValid_ReturnValue) == 0x000158, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_SpawnEmitterAtLocation_ReturnValue2) == 0x000160, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_SpawnEmitterAtLocation_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, K2Node_Event_MyTarget1) == 0x000168, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::K2Node_Event_MyTarget1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, K2Node_Event_Parameters1) == 0x000170, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::K2Node_Event_Parameters1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, K2Node_Event_ParticleComponents1) == 0x000228, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::K2Node_Event_ParticleComponents1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, K2Node_Event_AudioComponents1) == 0x000238, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::K2Node_Event_AudioComponents1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000248, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_IsLocalPlayerController_ReturnValue) == 0x000250, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_IsLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, K2Node_Event_MyTarget) == 0x000258, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, K2Node_Event_Parameters) == 0x000260, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, K2Node_Event_ParticleComponents) == 0x000318, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, K2Node_Event_AudioComponents) == 0x000328, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, K2Node_Event_BurstCameraShakeInstance) == 0x000338, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, K2Node_Event_BurstDecalInstance) == 0x000340, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_IsValid_ReturnValue1) == 0x000348, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_IsValid_ReturnValue2) == 0x000349, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_IsValid_ReturnValue3) == 0x00034A, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_IsValid_ReturnValue3' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_IsValid_ReturnValue4) == 0x00034B, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_IsValid_ReturnValue4' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_IsValid_ReturnValue5) == 0x00034C, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_IsValid_ReturnValue5' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_SpawnSound2D_ReturnValue) == 0x000350, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_IsValid_ReturnValue6) == 0x000358, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_IsValid_ReturnValue6' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_IsValid_ReturnValue7) == 0x000359, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_IsValid_ReturnValue7' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_SpawnSound2D_ReturnValue1) == 0x000360, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_SpawnSound2D_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_SpawnSound2D_ReturnValue2) == 0x000368, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_SpawnSound2D_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_IsValid_ReturnValue8) == 0x000370, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_IsValid_ReturnValue8' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks, CallFunc_IsValid_ReturnValue9) == 0x000371, "Member 'GCNL_Athena_FestivusFireworks_C_ExecuteUbergraph_GCNL_Athena_FestivusFireworks::CallFunc_IsValid_ReturnValue9' has a wrong offset!");

// Function GCNL_Athena_FestivusFireworks.GCNL_Athena_FestivusFireworks_C.OnRemoval
// 0x00F0 (0x00F0 - 0x0000)
struct GCNL_Athena_FestivusFireworks_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           BurstCameraShakeInstance;                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNL_Athena_FestivusFireworks_C_OnRemoval) == 0x000008, "Wrong alignment on GCNL_Athena_FestivusFireworks_C_OnRemoval");
static_assert(sizeof(GCNL_Athena_FestivusFireworks_C_OnRemoval) == 0x0000F0, "Wrong size on GCNL_Athena_FestivusFireworks_C_OnRemoval");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCNL_Athena_FestivusFireworks_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_OnRemoval, Parameters) == 0x000008, "Member 'GCNL_Athena_FestivusFireworks_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_OnRemoval, ParticleComponents) == 0x0000C0, "Member 'GCNL_Athena_FestivusFireworks_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_OnRemoval, AudioComponents) == 0x0000D0, "Member 'GCNL_Athena_FestivusFireworks_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_OnRemoval, BurstCameraShakeInstance) == 0x0000E0, "Member 'GCNL_Athena_FestivusFireworks_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_OnRemoval, BurstDecalInstance) == 0x0000E8, "Member 'GCNL_Athena_FestivusFireworks_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

// Function GCNL_Athena_FestivusFireworks.GCNL_Athena_FestivusFireworks_C.OnLoopingStart
// 0x00E0 (0x00E0 - 0x0000)
struct GCNL_Athena_FestivusFireworks_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(GCNL_Athena_FestivusFireworks_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCNL_Athena_FestivusFireworks_C_OnLoopingStart");
static_assert(sizeof(GCNL_Athena_FestivusFireworks_C_OnLoopingStart) == 0x0000E0, "Wrong size on GCNL_Athena_FestivusFireworks_C_OnLoopingStart");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCNL_Athena_FestivusFireworks_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCNL_Athena_FestivusFireworks_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_OnLoopingStart, ParticleComponents) == 0x0000C0, "Member 'GCNL_Athena_FestivusFireworks_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_FestivusFireworks_C_OnLoopingStart, AudioComponents) == 0x0000D0, "Member 'GCNL_Athena_FestivusFireworks_C_OnLoopingStart::AudioComponents' has a wrong offset!");

}
