#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BladePullCameraShake

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BladePullCameraShake.BladePullCameraShake_C
// 0x0000 (0x0160 - 0x0160)
class UBladePullCameraShake_C final : public UCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BladePullCameraShake_C">();
	}
	static class UBladePullCameraShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBladePullCameraShake_C>();
	}
};
static_assert(alignof(UBladePullCameraShake_C) == 0x000008, "Wrong alignment on UBladePullCameraShake_C");
static_assert(sizeof(UBladePullCameraShake_C) == 0x000160, "Wrong size on UBladePullCameraShake_C");

}
