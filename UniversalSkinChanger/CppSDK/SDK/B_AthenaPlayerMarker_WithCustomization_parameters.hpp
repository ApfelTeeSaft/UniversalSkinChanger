#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_AthenaPlayerMarker_WithCustomization

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization
// 0x00B0 (0x00B0 - 0x0000)
struct B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerMarkerData                      K2Node_Event_MarkerData;                           // 0x0018(0x0020)(ConstParm, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsFort_Map_Marker_Topper_Actor; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsFort_Map_Marker_Topper_Actor1; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess1;                 // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B[0x5];                                       // 0x006B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue1;       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_CustomEvent_Loaded;                         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortMapMarkerTopperActor*              CallFunc_FinishSpawningActor_ReturnValue;          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue3;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate;              // 0x009C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization) == 0x000008, "Wrong alignment on B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization");
static_assert(sizeof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization) == 0x0000B0, "Wrong size on B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, EntryPoint) == 0x000000, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000010, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, K2Node_Event_MarkerData) == 0x000018, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::K2Node_Event_MarkerData' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, Temp_class_Variable) == 0x000040, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, K2Node_ClassDynamicCast_AsFort_Map_Marker_Topper_Actor) == 0x000048, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::K2Node_ClassDynamicCast_AsFort_Map_Marker_Topper_Actor' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, K2Node_ClassDynamicCast_bSuccess) == 0x000050, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_IsValid_ReturnValue1) == 0x000051, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_Conv_SoftClassReferenceToClass_ReturnValue) == 0x000058, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_Conv_SoftClassReferenceToClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, K2Node_ClassDynamicCast_AsFort_Map_Marker_Topper_Actor1) == 0x000060, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::K2Node_ClassDynamicCast_AsFort_Map_Marker_Topper_Actor1' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, K2Node_ClassDynamicCast_bSuccess1) == 0x000068, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::K2Node_ClassDynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000069, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_IsValid_ReturnValue2) == 0x00006A, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_GetObjectClass_ReturnValue) == 0x000070, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_EqualEqual_ClassClass_ReturnValue1) == 0x000078, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_EqualEqual_ClassClass_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_NotEqual_ClassClass_ReturnValue) == 0x000079, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_NotEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, K2Node_CustomEvent_Loaded) == 0x000080, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000088, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_FinishSpawningActor_ReturnValue) == 0x000090, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_IsValid_ReturnValue3) == 0x000098, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_IsValid_ReturnValue3' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, K2Node_CreateDelegate_OutputDelegate) == 0x00009C, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnSetupMarker
// 0x0020 (0x0020 - 0x0000)
struct B_AthenaPlayerMarker_WithCustomization_C_OnSetupMarker final
{
public:
	struct FPlayerMarkerData                      MarkerData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(B_AthenaPlayerMarker_WithCustomization_C_OnSetupMarker) == 0x000008, "Wrong alignment on B_AthenaPlayerMarker_WithCustomization_C_OnSetupMarker");
static_assert(sizeof(B_AthenaPlayerMarker_WithCustomization_C_OnSetupMarker) == 0x000020, "Wrong size on B_AthenaPlayerMarker_WithCustomization_C_OnSetupMarker");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_OnSetupMarker, MarkerData) == 0x000000, "Member 'B_AthenaPlayerMarker_WithCustomization_C_OnSetupMarker::MarkerData' has a wrong offset!");

// Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37
// 0x0008 (0x0008 - 0x0000)
struct B_AthenaPlayerMarker_WithCustomization_C_OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37 final
{
public:
	class UClass*                                 Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_AthenaPlayerMarker_WithCustomization_C_OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37) == 0x000008, "Wrong alignment on B_AthenaPlayerMarker_WithCustomization_C_OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37");
static_assert(sizeof(B_AthenaPlayerMarker_WithCustomization_C_OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37) == 0x000008, "Wrong size on B_AthenaPlayerMarker_WithCustomization_C_OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37, Loaded) == 0x000000, "Member 'B_AthenaPlayerMarker_WithCustomization_C_OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37::Loaded' has a wrong offset!");

}
