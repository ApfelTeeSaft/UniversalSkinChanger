#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoginCredentialSelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoginCredentialSelect.LoginCredentialSelect_C
// 0x0068 (0x0408 - 0x03A0)
class ULoginCredentialSelect_C final : public UFortLoginCredentialSelect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_InviteDetails;                              // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_0;                            // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Erebus_Title;                                      // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ErebusType;                                        // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_48;                                          // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInviteEventTitle_C*                    InviteEventTitle;                                  // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LoginCredentialSelect(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoginCredentialSelect_C">();
	}
	static class ULoginCredentialSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoginCredentialSelect_C>();
	}
};
static_assert(alignof(ULoginCredentialSelect_C) == 0x000008, "Wrong alignment on ULoginCredentialSelect_C");
static_assert(sizeof(ULoginCredentialSelect_C) == 0x000408, "Wrong size on ULoginCredentialSelect_C");
static_assert(offsetof(ULoginCredentialSelect_C, UberGraphFrame) == 0x0003A0, "Member 'ULoginCredentialSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Border_InviteDetails) == 0x0003A8, "Member 'ULoginCredentialSelect_C::Border_InviteDetails' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, CommonWidgetSwitcher_0) == 0x0003B0, "Member 'ULoginCredentialSelect_C::CommonWidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Erebus_Title) == 0x0003B8, "Member 'ULoginCredentialSelect_C::Erebus_Title' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, ErebusType) == 0x0003C0, "Member 'ULoginCredentialSelect_C::ErebusType' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Image_0) == 0x0003C8, "Member 'ULoginCredentialSelect_C::Image_0' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Image_1) == 0x0003D0, "Member 'ULoginCredentialSelect_C::Image_1' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Image_2) == 0x0003D8, "Member 'ULoginCredentialSelect_C::Image_2' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Image_3) == 0x0003E0, "Member 'ULoginCredentialSelect_C::Image_3' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Image_4) == 0x0003E8, "Member 'ULoginCredentialSelect_C::Image_4' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Image_5) == 0x0003F0, "Member 'ULoginCredentialSelect_C::Image_5' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Image_48) == 0x0003F8, "Member 'ULoginCredentialSelect_C::Image_48' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, InviteEventTitle) == 0x000400, "Member 'ULoginCredentialSelect_C::InviteEventTitle' has a wrong offset!");

}
