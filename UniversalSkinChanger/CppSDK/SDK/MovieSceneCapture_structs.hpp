#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovieSceneCapture

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum MovieSceneCapture.EHDRCaptureGamut
// NumValues: 0x0007
enum class EHDRCaptureGamut : uint8
{
	HCGM_Rec709                              = 0,
	HCGM_P3DCI                               = 1,
	HCGM_Rec2020                             = 2,
	HCGM_ACES                                = 3,
	HCGM_ACEScg                              = 4,
	HCGM_Linear                              = 5,
	HCGM_MAX                                 = 6,
};

// Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
// NumValues: 0x0005
enum class EMovieSceneCaptureProtocolState : uint8
{
	Idle                                     = 0,
	Initialized                              = 1,
	Capturing                                = 2,
	Finalizing                               = 3,
	EMovieSceneCaptureProtocolState_MAX      = 4,
};

// ScriptStruct MovieSceneCapture.FrameMetrics
// 0x0010 (0x0010 - 0x0000)
struct FFrameMetrics final
{
public:
	float                                         TotalElapsedTime;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrameDelta;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FrameNumber;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumDroppedFrames;                                  // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFrameMetrics) == 0x000004, "Wrong alignment on FFrameMetrics");
static_assert(sizeof(FFrameMetrics) == 0x000010, "Wrong size on FFrameMetrics");
static_assert(offsetof(FFrameMetrics, TotalElapsedTime) == 0x000000, "Member 'FFrameMetrics::TotalElapsedTime' has a wrong offset!");
static_assert(offsetof(FFrameMetrics, FrameDelta) == 0x000004, "Member 'FFrameMetrics::FrameDelta' has a wrong offset!");
static_assert(offsetof(FFrameMetrics, FrameNumber) == 0x000008, "Member 'FFrameMetrics::FrameNumber' has a wrong offset!");
static_assert(offsetof(FFrameMetrics, NumDroppedFrames) == 0x00000C, "Member 'FFrameMetrics::NumDroppedFrames' has a wrong offset!");

// ScriptStruct MovieSceneCapture.CapturedPixels
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FCapturedPixels final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCapturedPixels) == 0x000008, "Wrong alignment on FCapturedPixels");
static_assert(sizeof(FCapturedPixels) == 0x000010, "Wrong size on FCapturedPixels");

// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
// 0x0010 (0x0010 - 0x0000)
struct FCompositionGraphCapturePasses final
{
public:
	TArray<class FString>                         Value;                                             // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCompositionGraphCapturePasses) == 0x000008, "Wrong alignment on FCompositionGraphCapturePasses");
static_assert(sizeof(FCompositionGraphCapturePasses) == 0x000010, "Wrong size on FCompositionGraphCapturePasses");
static_assert(offsetof(FCompositionGraphCapturePasses, Value) == 0x000000, "Member 'FCompositionGraphCapturePasses::Value' has a wrong offset!");

// ScriptStruct MovieSceneCapture.CaptureResolution
// 0x0008 (0x0008 - 0x0000)
struct FCaptureResolution final
{
public:
	int32                                         ResX;                                              // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ResY;                                              // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCaptureResolution) == 0x000004, "Wrong alignment on FCaptureResolution");
static_assert(sizeof(FCaptureResolution) == 0x000008, "Wrong size on FCaptureResolution");
static_assert(offsetof(FCaptureResolution, ResX) == 0x000000, "Member 'FCaptureResolution::ResX' has a wrong offset!");
static_assert(offsetof(FCaptureResolution, ResY) == 0x000004, "Member 'FCaptureResolution::ResY' has a wrong offset!");

// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// 0x0050 (0x0050 - 0x0000)
struct FMovieSceneCaptureSettings final
{
public:
	struct FDirectoryPath                         OutputDirectory;                                   // 0x0000(0x0010)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	TSubclassOf<class AGameModeBase>              GameModeOverride;                                  // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 OutputFormat;                                      // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverwriteExisting;                                // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseRelativeFrameNumbers;                          // 0x0029(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         HandleFrames;                                      // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         ZeroPadFrameNumbers;                               // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFrameRate                             FrameRate;                                         // 0x0034(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCaptureResolution                     Resolution;                                        // 0x003C(0x0008)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bEnableTextureStreaming;                           // 0x0044(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCinematicEngineScalability;                       // 0x0045(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCinematicMode;                                    // 0x0046(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowMovement;                                    // 0x0047(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowTurning;                                     // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowPlayer;                                       // 0x0049(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowHUD;                                          // 0x004A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4B[0x5];                                       // 0x004B(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieSceneCaptureSettings) == 0x000008, "Wrong alignment on FMovieSceneCaptureSettings");
static_assert(sizeof(FMovieSceneCaptureSettings) == 0x000050, "Wrong size on FMovieSceneCaptureSettings");
static_assert(offsetof(FMovieSceneCaptureSettings, OutputDirectory) == 0x000000, "Member 'FMovieSceneCaptureSettings::OutputDirectory' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, GameModeOverride) == 0x000010, "Member 'FMovieSceneCaptureSettings::GameModeOverride' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, OutputFormat) == 0x000018, "Member 'FMovieSceneCaptureSettings::OutputFormat' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bOverwriteExisting) == 0x000028, "Member 'FMovieSceneCaptureSettings::bOverwriteExisting' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bUseRelativeFrameNumbers) == 0x000029, "Member 'FMovieSceneCaptureSettings::bUseRelativeFrameNumbers' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, HandleFrames) == 0x00002C, "Member 'FMovieSceneCaptureSettings::HandleFrames' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, ZeroPadFrameNumbers) == 0x000030, "Member 'FMovieSceneCaptureSettings::ZeroPadFrameNumbers' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, FrameRate) == 0x000034, "Member 'FMovieSceneCaptureSettings::FrameRate' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, Resolution) == 0x00003C, "Member 'FMovieSceneCaptureSettings::Resolution' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bEnableTextureStreaming) == 0x000044, "Member 'FMovieSceneCaptureSettings::bEnableTextureStreaming' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bCinematicEngineScalability) == 0x000045, "Member 'FMovieSceneCaptureSettings::bCinematicEngineScalability' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bCinematicMode) == 0x000046, "Member 'FMovieSceneCaptureSettings::bCinematicMode' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bAllowMovement) == 0x000047, "Member 'FMovieSceneCaptureSettings::bAllowMovement' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bAllowTurning) == 0x000048, "Member 'FMovieSceneCaptureSettings::bAllowTurning' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bShowPlayer) == 0x000049, "Member 'FMovieSceneCaptureSettings::bShowPlayer' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bShowHUD) == 0x00004A, "Member 'FMovieSceneCaptureSettings::bShowHUD' has a wrong offset!");

}
