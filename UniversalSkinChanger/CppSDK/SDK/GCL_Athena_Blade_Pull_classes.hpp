#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCL_Athena_Blade_Pull

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCL_Athena_Blade_Pull.GCL_Athena_Blade_Pull_C
// 0x0000 (0x0880 - 0x0880)
class AGCL_Athena_Blade_Pull_C final : public AFortGameplayCueNotify_Loop
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCL_Athena_Blade_Pull_C">();
	}
	static class AGCL_Athena_Blade_Pull_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCL_Athena_Blade_Pull_C>();
	}
};
static_assert(alignof(AGCL_Athena_Blade_Pull_C) == 0x000008, "Wrong alignment on AGCL_Athena_Blade_Pull_C");
static_assert(sizeof(AGCL_Athena_Blade_Pull_C) == 0x000880, "Wrong size on AGCL_Athena_Blade_Pull_C");

}
