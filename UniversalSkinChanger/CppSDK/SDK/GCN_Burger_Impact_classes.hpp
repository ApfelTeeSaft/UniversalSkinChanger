#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Burger_Impact

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Burger_Impact.GCN_Burger_Impact_C
// 0x0000 (0x0080 - 0x0080)
class UGCN_Burger_Impact_C final : public UFortGameplayCueNotify_Simple
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Burger_Impact_C">();
	}
	static class UGCN_Burger_Impact_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Burger_Impact_C>();
	}
};
static_assert(alignof(UGCN_Burger_Impact_C) == 0x000008, "Wrong alignment on UGCN_Burger_Impact_C");
static_assert(sizeof(UGCN_Burger_Impact_C) == 0x000080, "Wrong size on UGCN_Burger_Impact_C");

}
