#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_PlayFX_WeapType

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_PlayFX_WeapType.AnimNotify_PlayFX_WeapType_C
// 0x0030 (0x0068 - 0x0038)
class UAnimNotify_PlayFX_WeapType_C final : public UAnimNotify
{
public:
	class FString                                 Socket;                                            // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Attach;                                            // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Rotation;                                          // 0x004C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                Location;                                          // 0x0058(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_PlayFX_WeapType_C">();
	}
	static class UAnimNotify_PlayFX_WeapType_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_PlayFX_WeapType_C>();
	}
};
static_assert(alignof(UAnimNotify_PlayFX_WeapType_C) == 0x000008, "Wrong alignment on UAnimNotify_PlayFX_WeapType_C");
static_assert(sizeof(UAnimNotify_PlayFX_WeapType_C) == 0x000068, "Wrong size on UAnimNotify_PlayFX_WeapType_C");
static_assert(offsetof(UAnimNotify_PlayFX_WeapType_C, Socket) == 0x000038, "Member 'UAnimNotify_PlayFX_WeapType_C::Socket' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayFX_WeapType_C, Attach) == 0x000048, "Member 'UAnimNotify_PlayFX_WeapType_C::Attach' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayFX_WeapType_C, Rotation) == 0x00004C, "Member 'UAnimNotify_PlayFX_WeapType_C::Rotation' has a wrong offset!");
static_assert(offsetof(UAnimNotify_PlayFX_WeapType_C, Location) == 0x000058, "Member 'UAnimNotify_PlayFX_WeapType_C::Location' has a wrong offset!");

}
