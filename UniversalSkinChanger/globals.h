#pragma once
#include "CppSDK/SDK.hpp"
#include <iostream>
#include <string>
#include <windows.h>

SDK::UEngine* Engine = SDK::UEngine::GetEngine();
SDK::UWorld* World = SDK::UWorld::GetWorld();
SDK::APlayerController* AFortPlayerController = World->OwningGameInstance->LocalPlayers[0]->PlayerController;

enum class LogLevel {
    Info,
    Warning,
    Error
};

void LOGFN(const std::string& message, LogLevel level);

extern inline int Engine_Version = 0; // For example, 420, 421, etc. // Prevent using this when possible.
extern inline double Fortnite_Version = 0; // For example, 4.1, 6.21, etc. // Prevent using this when possible.
extern inline int Fortnite_CL = 0;