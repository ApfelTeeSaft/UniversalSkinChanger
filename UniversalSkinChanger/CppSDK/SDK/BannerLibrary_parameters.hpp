#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BannerLibrary

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BannerLibrary.BannerLibrary_C.GenericUpdateMaterial
// 0x0040 (0x0040 - 0x0000)
struct BannerLibrary_C_GenericUpdateMaterial final
{
public:
	class UMaterialInstanceDynamic*               Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               BannerIcon;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BG_PrimaryColor;                                   // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BG_SecondaryColor;                                 // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               ShapeIcon;                                         // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BannerLibrary_C_GenericUpdateMaterial) == 0x000008, "Wrong alignment on BannerLibrary_C_GenericUpdateMaterial");
static_assert(sizeof(BannerLibrary_C_GenericUpdateMaterial) == 0x000040, "Wrong size on BannerLibrary_C_GenericUpdateMaterial");
static_assert(offsetof(BannerLibrary_C_GenericUpdateMaterial, Target) == 0x000000, "Member 'BannerLibrary_C_GenericUpdateMaterial::Target' has a wrong offset!");
static_assert(offsetof(BannerLibrary_C_GenericUpdateMaterial, BannerIcon) == 0x000008, "Member 'BannerLibrary_C_GenericUpdateMaterial::BannerIcon' has a wrong offset!");
static_assert(offsetof(BannerLibrary_C_GenericUpdateMaterial, BG_PrimaryColor) == 0x000010, "Member 'BannerLibrary_C_GenericUpdateMaterial::BG_PrimaryColor' has a wrong offset!");
static_assert(offsetof(BannerLibrary_C_GenericUpdateMaterial, BG_SecondaryColor) == 0x000020, "Member 'BannerLibrary_C_GenericUpdateMaterial::BG_SecondaryColor' has a wrong offset!");
static_assert(offsetof(BannerLibrary_C_GenericUpdateMaterial, ShapeIcon) == 0x000030, "Member 'BannerLibrary_C_GenericUpdateMaterial::ShapeIcon' has a wrong offset!");
static_assert(offsetof(BannerLibrary_C_GenericUpdateMaterial, __WorldContext) == 0x000038, "Member 'BannerLibrary_C_GenericUpdateMaterial::__WorldContext' has a wrong offset!");

// Function BannerLibrary.BannerLibrary_C.UpdateBannerColorOnMaterial
// 0x0030 (0x0030 - 0x0000)
struct BannerLibrary_C_UpdateBannerColorOnMaterial final
{
public:
	class UMaterialInstanceDynamic*               Material;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           PrimaryBGColor;                                    // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SecondaryBGColor;                                  // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BannerLibrary_C_UpdateBannerColorOnMaterial) == 0x000008, "Wrong alignment on BannerLibrary_C_UpdateBannerColorOnMaterial");
static_assert(sizeof(BannerLibrary_C_UpdateBannerColorOnMaterial) == 0x000030, "Wrong size on BannerLibrary_C_UpdateBannerColorOnMaterial");
static_assert(offsetof(BannerLibrary_C_UpdateBannerColorOnMaterial, Material) == 0x000000, "Member 'BannerLibrary_C_UpdateBannerColorOnMaterial::Material' has a wrong offset!");
static_assert(offsetof(BannerLibrary_C_UpdateBannerColorOnMaterial, PrimaryBGColor) == 0x000008, "Member 'BannerLibrary_C_UpdateBannerColorOnMaterial::PrimaryBGColor' has a wrong offset!");
static_assert(offsetof(BannerLibrary_C_UpdateBannerColorOnMaterial, SecondaryBGColor) == 0x000018, "Member 'BannerLibrary_C_UpdateBannerColorOnMaterial::SecondaryBGColor' has a wrong offset!");
static_assert(offsetof(BannerLibrary_C_UpdateBannerColorOnMaterial, __WorldContext) == 0x000028, "Member 'BannerLibrary_C_UpdateBannerColorOnMaterial::__WorldContext' has a wrong offset!");

// Function BannerLibrary.BannerLibrary_C.UpdateBannerIconOnMaterial
// 0x0018 (0x0018 - 0x0000)
struct BannerLibrary_C_UpdateBannerIconOnMaterial final
{
public:
	class UMaterialInstanceDynamic*               Material;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               Icon;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BannerLibrary_C_UpdateBannerIconOnMaterial) == 0x000008, "Wrong alignment on BannerLibrary_C_UpdateBannerIconOnMaterial");
static_assert(sizeof(BannerLibrary_C_UpdateBannerIconOnMaterial) == 0x000018, "Wrong size on BannerLibrary_C_UpdateBannerIconOnMaterial");
static_assert(offsetof(BannerLibrary_C_UpdateBannerIconOnMaterial, Material) == 0x000000, "Member 'BannerLibrary_C_UpdateBannerIconOnMaterial::Material' has a wrong offset!");
static_assert(offsetof(BannerLibrary_C_UpdateBannerIconOnMaterial, Icon) == 0x000008, "Member 'BannerLibrary_C_UpdateBannerIconOnMaterial::Icon' has a wrong offset!");
static_assert(offsetof(BannerLibrary_C_UpdateBannerIconOnMaterial, __WorldContext) == 0x000010, "Member 'BannerLibrary_C_UpdateBannerIconOnMaterial::__WorldContext' has a wrong offset!");

}
