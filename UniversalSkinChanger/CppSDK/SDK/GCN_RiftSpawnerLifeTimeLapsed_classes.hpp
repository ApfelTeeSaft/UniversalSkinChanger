#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_RiftSpawnerLifeTimeLapsed

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_RiftSpawnerLifeTimeLapsed.GCN_RiftSpawnerLifeTimeLapsed_C
// 0x0000 (0x01A0 - 0x01A0)
class UGCN_RiftSpawnerLifeTimeLapsed_C final : public UFortGameplayCueNotify_Burst
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_RiftSpawnerLifeTimeLapsed_C">();
	}
	static class UGCN_RiftSpawnerLifeTimeLapsed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_RiftSpawnerLifeTimeLapsed_C>();
	}
};
static_assert(alignof(UGCN_RiftSpawnerLifeTimeLapsed_C) == 0x000008, "Wrong alignment on UGCN_RiftSpawnerLifeTimeLapsed_C");
static_assert(sizeof(UGCN_RiftSpawnerLifeTimeLapsed_C) == 0x0001A0, "Wrong size on UGCN_RiftSpawnerLifeTimeLapsed_C");

}
