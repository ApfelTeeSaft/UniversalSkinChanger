#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MountedTurret

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MountedTurret.MountedTurret_C
// 0x0140 (0x0F60 - 0x0E20)
class AMountedTurret_C final : public AFortMountedTurret
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0E20(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      PawnCollision;                                     // 0x0E28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortVehicleAudioVoice*                 ServoAudio;                                        // 0x0E30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               OverHeatScreen_R;                                  // 0x0E38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               OverHeatScreen_L;                                  // 0x0E40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        AudioOnOverheat;                                   // 0x0E48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        AudioOverheat;                                     // 0x0E50(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               OverheatSmoke;                                     // 0x0E58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               MagazineGlowR;                                     // 0x0E60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               MagazineGlowL;                                     // 0x0E68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               BarrelGlowL;                                       // 0x0E70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               BarrelGlowR;                                       // 0x0E78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          OverlapVolume;                                     // 0x0E80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             OnDeathSound;                                      // 0x0E88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_BlockWeaponFire;                                // 0x0E90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_GrantWeapon;                                    // 0x0E98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        DriverPawn;                                        // 0x0EA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DoorMesh;                                          // 0x0EA8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               InWaterFX;                                         // 0x0EB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        InWaterLoop;                                       // 0x0EB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        HonkAudioComp;                                     // 0x0EC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            GE_EnterTurret;                                    // 0x0EC8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           PlayerEnterAnimation;                              // 0x0ED0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           TurretEnterAnimation;                              // 0x0ED8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           TurretFireAnimation;                               // 0x0EE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           PlayerFireAnimation;                               // 0x0EE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                            PlayerWeapon;                                      // 0x0EF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_MountedTurretAthena_C*               TurretWeapon;                                      // 0x0EF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           GetWeaponTimer;                                    // 0x0F00(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           OverheatCostmeticTimer;                            // 0x0F08(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           TurretFireLeftAnimation;                           // 0x0F10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           TurretFireRightAnimation;                          // 0x0F18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            OverheatAudioCurve;                                // 0x0F20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               TurretRotation;                                    // 0x0F28(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F34[0x4];                                      // 0x0F34(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           TurretStartAnimation;                              // 0x0F38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           TurretExitAnimation;                               // 0x0F40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ZeroIfOverheating;                                 // 0x0F48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanInteract;                                      // 0x0F4C(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F4D[0x3];                                      // 0x0F4D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FInteractionDelay;                                 // 0x0F50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FInteractionDelayOffset;                           // 0x0F54(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MountedTurret(int32 EntryPoint);
	void Start_FX_And_Audio_Timer();
	void Handle_Rotation_Audio();
	void Clear_FX_And_AudioTimer();
	void UpdateOverheatCosmetics();
	void HideQuickBarForAbility(bool Hide);
	void Event_On_Weapon_Fired(EDualWeaponHand Hand, bool bPersistantFire);
	void Get_Turret_Weapon();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OnPawnExitVehicle(class AFortPlayerPawn* PlayerPawn, class FName ExitSocketName);
	void OnPawnEnterVehicle(class AFortPlayerPawn* PlayerPawn, int32 SeatIdx);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnCompleted_DC5D83234D74654A536804AC35F92FE4(class FName NotifyName);
	void OnBlendOut_DC5D83234D74654A536804AC35F92FE4(class FName NotifyName);
	void OnInterrupted_DC5D83234D74654A536804AC35F92FE4(class FName NotifyName);
	void OnNotifyBegin_DC5D83234D74654A536804AC35F92FE4(class FName NotifyName);
	void OnNotifyEnd_DC5D83234D74654A536804AC35F92FE4(class FName NotifyName);
	void OnCompleted_1E67D99B41450F4F37BDBF8C6F8AAE0B(class FName NotifyName);
	void OnBlendOut_1E67D99B41450F4F37BDBF8C6F8AAE0B(class FName NotifyName);
	void OnInterrupted_1E67D99B41450F4F37BDBF8C6F8AAE0B(class FName NotifyName);
	void OnNotifyBegin_1E67D99B41450F4F37BDBF8C6F8AAE0B(class FName NotifyName);
	void OnNotifyEnd_1E67D99B41450F4F37BDBF8C6F8AAE0B(class FName NotifyName);
	void OnCompleted_C545F8F445E4AE78043EFD8678F12483(class FName NotifyName);
	void OnBlendOut_C545F8F445E4AE78043EFD8678F12483(class FName NotifyName);
	void OnInterrupted_C545F8F445E4AE78043EFD8678F12483(class FName NotifyName);
	void OnNotifyBegin_C545F8F445E4AE78043EFD8678F12483(class FName NotifyName);
	void OnNotifyEnd_C545F8F445E4AE78043EFD8678F12483(class FName NotifyName);
	void OnCompleted_BE998F90462B0AB8D888EB90F677D680(class FName NotifyName);
	void OnBlendOut_BE998F90462B0AB8D888EB90F677D680(class FName NotifyName);
	void OnInterrupted_BE998F90462B0AB8D888EB90F677D680(class FName NotifyName);
	void OnNotifyBegin_BE998F90462B0AB8D888EB90F677D680(class FName NotifyName);
	void OnNotifyEnd_BE998F90462B0AB8D888EB90F677D680(class FName NotifyName);
	void OnCompleted_43B2536B49D71F6DB759A49367555C0D(class FName NotifyName);
	void OnBlendOut_43B2536B49D71F6DB759A49367555C0D(class FName NotifyName);
	void OnInterrupted_43B2536B49D71F6DB759A49367555C0D(class FName NotifyName);
	void OnNotifyBegin_43B2536B49D71F6DB759A49367555C0D(class FName NotifyName);
	void OnNotifyEnd_43B2536B49D71F6DB759A49367555C0D(class FName NotifyName);
	void OnCompleted_761292E24A89E794B70E9C9206892380(class FName NotifyName);
	void OnBlendOut_761292E24A89E794B70E9C9206892380(class FName NotifyName);
	void OnInterrupted_761292E24A89E794B70E9C9206892380(class FName NotifyName);
	void OnNotifyBegin_761292E24A89E794B70E9C9206892380(class FName NotifyName);
	void OnNotifyEnd_761292E24A89E794B70E9C9206892380(class FName NotifyName);
	void UserConstructionScript();
	TArray<class FName> GetVehicleSeatActionNames(class AFortPlayerPawn* PlayerPawn, const ECommonInputType OverrideInputType);
	TArray<class FText> GetVehicleSeatLabels(class AFortPlayerPawn* PlayerPawn, const ECommonInputType OverrideInputType);
	TArray<class FText> GetVehicleSeatActionLabels(class AFortPlayerPawn* PlayerPawn, const ECommonInputType OverrideInputType);
	float CurrentOverheatScalar();
	bool BP_CanInteract(class AFortPlayerController* FortPC);
	void OnGetExitSocketTransform(const class FName ExitSocket, const int32 SocketIndex, const struct FTransform& InTransform, bool* bOutOverriderExitSocket, struct FTransform* OutOverrideTransform);

	void GetIconPlacement(class AActor* SelfActor, struct FVector* OutLocation, struct FVector* OutExtents) const;
	class FName GetVehicleSeatPrimaryAction(class AFortPlayerPawn* FortPlayerPawn) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MountedTurret_C">();
	}
	static class AMountedTurret_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMountedTurret_C>();
	}
};
static_assert(alignof(AMountedTurret_C) == 0x000010, "Wrong alignment on AMountedTurret_C");
static_assert(sizeof(AMountedTurret_C) == 0x000F60, "Wrong size on AMountedTurret_C");
static_assert(offsetof(AMountedTurret_C, UberGraphFrame) == 0x000E20, "Member 'AMountedTurret_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, PawnCollision) == 0x000E28, "Member 'AMountedTurret_C::PawnCollision' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, ServoAudio) == 0x000E30, "Member 'AMountedTurret_C::ServoAudio' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, OverHeatScreen_R) == 0x000E38, "Member 'AMountedTurret_C::OverHeatScreen_R' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, OverHeatScreen_L) == 0x000E40, "Member 'AMountedTurret_C::OverHeatScreen_L' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, AudioOnOverheat) == 0x000E48, "Member 'AMountedTurret_C::AudioOnOverheat' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, AudioOverheat) == 0x000E50, "Member 'AMountedTurret_C::AudioOverheat' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, OverheatSmoke) == 0x000E58, "Member 'AMountedTurret_C::OverheatSmoke' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, MagazineGlowR) == 0x000E60, "Member 'AMountedTurret_C::MagazineGlowR' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, MagazineGlowL) == 0x000E68, "Member 'AMountedTurret_C::MagazineGlowL' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, BarrelGlowL) == 0x000E70, "Member 'AMountedTurret_C::BarrelGlowL' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, BarrelGlowR) == 0x000E78, "Member 'AMountedTurret_C::BarrelGlowR' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, OverlapVolume) == 0x000E80, "Member 'AMountedTurret_C::OverlapVolume' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, OnDeathSound) == 0x000E88, "Member 'AMountedTurret_C::OnDeathSound' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, GE_BlockWeaponFire) == 0x000E90, "Member 'AMountedTurret_C::GE_BlockWeaponFire' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, GE_GrantWeapon) == 0x000E98, "Member 'AMountedTurret_C::GE_GrantWeapon' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, DriverPawn) == 0x000EA0, "Member 'AMountedTurret_C::DriverPawn' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, DoorMesh) == 0x000EA8, "Member 'AMountedTurret_C::DoorMesh' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, InWaterFX) == 0x000EB0, "Member 'AMountedTurret_C::InWaterFX' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, InWaterLoop) == 0x000EB8, "Member 'AMountedTurret_C::InWaterLoop' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, HonkAudioComp) == 0x000EC0, "Member 'AMountedTurret_C::HonkAudioComp' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, GE_EnterTurret) == 0x000EC8, "Member 'AMountedTurret_C::GE_EnterTurret' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, PlayerEnterAnimation) == 0x000ED0, "Member 'AMountedTurret_C::PlayerEnterAnimation' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, TurretEnterAnimation) == 0x000ED8, "Member 'AMountedTurret_C::TurretEnterAnimation' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, TurretFireAnimation) == 0x000EE0, "Member 'AMountedTurret_C::TurretFireAnimation' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, PlayerFireAnimation) == 0x000EE8, "Member 'AMountedTurret_C::PlayerFireAnimation' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, PlayerWeapon) == 0x000EF0, "Member 'AMountedTurret_C::PlayerWeapon' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, TurretWeapon) == 0x000EF8, "Member 'AMountedTurret_C::TurretWeapon' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, GetWeaponTimer) == 0x000F00, "Member 'AMountedTurret_C::GetWeaponTimer' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, OverheatCostmeticTimer) == 0x000F08, "Member 'AMountedTurret_C::OverheatCostmeticTimer' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, TurretFireLeftAnimation) == 0x000F10, "Member 'AMountedTurret_C::TurretFireLeftAnimation' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, TurretFireRightAnimation) == 0x000F18, "Member 'AMountedTurret_C::TurretFireRightAnimation' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, OverheatAudioCurve) == 0x000F20, "Member 'AMountedTurret_C::OverheatAudioCurve' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, TurretRotation) == 0x000F28, "Member 'AMountedTurret_C::TurretRotation' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, TurretStartAnimation) == 0x000F38, "Member 'AMountedTurret_C::TurretStartAnimation' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, TurretExitAnimation) == 0x000F40, "Member 'AMountedTurret_C::TurretExitAnimation' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, ZeroIfOverheating) == 0x000F48, "Member 'AMountedTurret_C::ZeroIfOverheating' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, bCanInteract) == 0x000F4C, "Member 'AMountedTurret_C::bCanInteract' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, FInteractionDelay) == 0x000F50, "Member 'AMountedTurret_C::FInteractionDelay' has a wrong offset!");
static_assert(offsetof(AMountedTurret_C, FInteractionDelayOffset) == 0x000F54, "Member 'AMountedTurret_C::FInteractionDelayOffset' has a wrong offset!");

}
