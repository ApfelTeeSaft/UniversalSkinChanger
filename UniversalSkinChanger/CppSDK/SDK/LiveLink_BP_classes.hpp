#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveLink_BP

#include "Basic.hpp"

#include "LiveLink_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LiveLink_BP.LiveLink_BP_C
// 0x0000 (0x00D0 - 0x00D0)
class ULiveLink_BP_C final : public ULiveLinkRemapAsset
{
public:
	class FName GetRemappedBoneName(class FName BoneName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LiveLink_BP_C">();
	}
	static class ULiveLink_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLink_BP_C>();
	}
};
static_assert(alignof(ULiveLink_BP_C) == 0x000008, "Wrong alignment on ULiveLink_BP_C");
static_assert(sizeof(ULiveLink_BP_C) == 0x0000D0, "Wrong size on ULiveLink_BP_C");

}
