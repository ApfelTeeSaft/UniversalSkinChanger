#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PartyFinder

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PartyFinder.PartyFinder_C
// 0x0000 (0x0348 - 0x0348)
class UPartyFinder_C final : public UFortActivatablePanel
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PartyFinder_C">();
	}
	static class UPartyFinder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPartyFinder_C>();
	}
};
static_assert(alignof(UPartyFinder_C) == 0x000008, "Wrong alignment on UPartyFinder_C");
static_assert(sizeof(UPartyFinder_C) == 0x000348, "Wrong size on UPartyFinder_C");

}
