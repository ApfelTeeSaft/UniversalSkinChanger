#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TextStyleMinusBaseParent

#include "Basic.hpp"

#include "TextStyleMinusBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TextStyle-BaseParent.TextStyle-BaseParent_C
// 0x0000 (0x0148 - 0x0148)
class UTextStyleMinusBaseParent_C : public UTextStyleMinusBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle-BaseParent_C">();
	}
	static class UTextStyleMinusBaseParent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyleMinusBaseParent_C>();
	}
};
static_assert(alignof(UTextStyleMinusBaseParent_C) == 0x000008, "Wrong alignment on UTextStyleMinusBaseParent_C");
static_assert(sizeof(UTextStyleMinusBaseParent_C) == 0x000148, "Wrong size on UTextStyleMinusBaseParent_C");

}
