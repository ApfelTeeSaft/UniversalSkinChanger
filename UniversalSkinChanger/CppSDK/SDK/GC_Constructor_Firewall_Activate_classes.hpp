#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Constructor_Firewall_Activate

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Constructor_Firewall_Activate.GC_Constructor_Firewall_Activate_C
// 0x0000 (0x0080 - 0x0080)
class UGC_Constructor_Firewall_Activate_C final : public UFortGameplayCueNotify_Simple
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Constructor_Firewall_Activate_C">();
	}
	static class UGC_Constructor_Firewall_Activate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Constructor_Firewall_Activate_C>();
	}
};
static_assert(alignof(UGC_Constructor_Firewall_Activate_C) == 0x000008, "Wrong alignment on UGC_Constructor_Firewall_Activate_C");
static_assert(sizeof(UGC_Constructor_Firewall_Activate_C) == 0x000080, "Wrong size on UGC_Constructor_Firewall_Activate_C");

}
