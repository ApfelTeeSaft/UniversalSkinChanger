#pragma once
#include "CppSDK/SDK.hpp"
#include <iostream>
#include <string>
#include <windows.h>

extern SDK::UEngine* Engine;
extern SDK::UWorld* World;
extern SDK::APlayerController* AFortPlayerController;

enum class LogLevel {
    Info,
    Warning,
    Error
};

void LOGFN(const std::string& message, LogLevel level);

extern inline int Engine_Version = 0; // For example, 420, 421, etc. // Prevent using this when possible.
extern inline double Fortnite_Version = 0; // For example, 4.1, 6.21, etc. // Prevent using this when possible.
extern inline int Fortnite_CL = 0;