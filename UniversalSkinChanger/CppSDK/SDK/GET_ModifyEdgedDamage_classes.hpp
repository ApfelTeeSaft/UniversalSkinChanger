#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GET_ModifyEdgedDamage

#include "Basic.hpp"

#include "GET_ModifyPhysicalDamage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GET_ModifyEdgedDamage.GET_ModifyEdgedDamage_C
// 0x0000 (0x05F0 - 0x05F0)
class UGET_ModifyEdgedDamage_C : public UGET_ModifyPhysicalDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_ModifyEdgedDamage_C">();
	}
	static class UGET_ModifyEdgedDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_ModifyEdgedDamage_C>();
	}
};
static_assert(alignof(UGET_ModifyEdgedDamage_C) == 0x000008, "Wrong alignment on UGET_ModifyEdgedDamage_C");
static_assert(sizeof(UGET_ModifyEdgedDamage_C) == 0x0005F0, "Wrong size on UGET_ModifyEdgedDamage_C");

}
