#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DeimosTypeInfo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function DeimosTypeInfo.DeimosTypeInfo_C.GetEnemyColor
// 0x0010 (0x0010 - 0x0000)
struct DeimosTypeInfo_C_GetEnemyColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DeimosTypeInfo_C_GetEnemyColor) == 0x000004, "Wrong alignment on DeimosTypeInfo_C_GetEnemyColor");
static_assert(sizeof(DeimosTypeInfo_C_GetEnemyColor) == 0x000010, "Wrong size on DeimosTypeInfo_C_GetEnemyColor");
static_assert(offsetof(DeimosTypeInfo_C_GetEnemyColor, Color) == 0x000000, "Member 'DeimosTypeInfo_C_GetEnemyColor::Color' has a wrong offset!");

}
