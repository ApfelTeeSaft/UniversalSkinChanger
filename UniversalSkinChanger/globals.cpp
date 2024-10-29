#include "globals.h"
#include <iostream>
#include <windows.h>

SDK::UEngine* Engine = SDK::UEngine::GetEngine();
SDK::UWorld* World = SDK::UWorld::GetWorld();
SDK::APlayerController* AFortPlayerController = World->OwningGameInstance->LocalPlayers[0]->PlayerController;

void LOGFN(const std::string& message, LogLevel level) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    std::string levelText;
    switch (level) {
    case LogLevel::Info:
        levelText = "USC::Info";
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        break;
    case LogLevel::Warning:
        levelText = "USC::Warning";
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        break;
    case LogLevel::Error:
        levelText = "USC::Error";
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
        break;
    }

    std::cout << "[" << levelText << "] " << message << std::endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}