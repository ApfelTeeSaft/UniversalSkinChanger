#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBWA_S1_StairW

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PBWA_S1_StairW.PBWA_S1_StairW_C
// 0x0000 (0x0BF0 - 0x0BF0)
class APBWA_S1_StairW_C final : public ABuildingStairs
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_S1_StairW_C">();
	}
	static class APBWA_S1_StairW_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_S1_StairW_C>();
	}
};
static_assert(alignof(APBWA_S1_StairW_C) == 0x000008, "Wrong alignment on APBWA_S1_StairW_C");
static_assert(sizeof(APBWA_S1_StairW_C) == 0x000BF0, "Wrong size on APBWA_S1_StairW_C");

}
