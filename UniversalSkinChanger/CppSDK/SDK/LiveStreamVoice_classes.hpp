#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveStreamVoice

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class LiveStreamVoice.LiveStreamVoiceChannel
// 0x0000 (0x0080 - 0x0080)
class ULiveStreamVoiceChannel final : public UVoiceChannel
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveStreamVoiceChannel">();
	}
	static class ULiveStreamVoiceChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveStreamVoiceChannel>();
	}
};
static_assert(alignof(ULiveStreamVoiceChannel) == 0x000008, "Wrong alignment on ULiveStreamVoiceChannel");
static_assert(sizeof(ULiveStreamVoiceChannel) == 0x000080, "Wrong size on ULiveStreamVoiceChannel");

// Class LiveStreamVoice.LiveStreamVoiceSubsystem
// 0x0018 (0x0040 - 0x0028)
class ULiveStreamVoiceSubsystem final : public UGameInstanceSubsystem
{
public:
	struct FVoiceSettings                         PlaybackSettings;                                  // 0x0028(0x0018)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

public:
	void ClearVoiceSettings();
	void EnableLocalVoiceProcessing(uint8 LocalUserNum, bool bEnable);
	void SetVoiceSettings(const struct FVoiceSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveStreamVoiceSubsystem">();
	}
	static class ULiveStreamVoiceSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveStreamVoiceSubsystem>();
	}
};
static_assert(alignof(ULiveStreamVoiceSubsystem) == 0x000008, "Wrong alignment on ULiveStreamVoiceSubsystem");
static_assert(sizeof(ULiveStreamVoiceSubsystem) == 0x000040, "Wrong size on ULiveStreamVoiceSubsystem");
static_assert(offsetof(ULiveStreamVoiceSubsystem, PlaybackSettings) == 0x000028, "Member 'ULiveStreamVoiceSubsystem::PlaybackSettings' has a wrong offset!");

}
