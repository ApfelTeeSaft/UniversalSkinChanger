#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_IcePuck_Death

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_IcePuck_Death.GCN_IcePuck_Death_C
// 0x0000 (0x0080 - 0x0080)
class UGCN_IcePuck_Death_C final : public UFortGameplayCueNotify_Simple
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_IcePuck_Death_C">();
	}
	static class UGCN_IcePuck_Death_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_IcePuck_Death_C>();
	}
};
static_assert(alignof(UGCN_IcePuck_Death_C) == 0x000008, "Wrong alignment on UGCN_IcePuck_Death_C");
static_assert(sizeof(UGCN_IcePuck_Death_C) == 0x000080, "Wrong size on UGCN_IcePuck_Death_C");

}
