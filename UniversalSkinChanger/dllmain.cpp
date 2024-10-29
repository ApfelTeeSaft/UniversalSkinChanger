// dllmain.cpp : Definiert den Einstiegspunkt für die DLL-Anwendung.
#include "addresses.h"
#include "globals.h"

void Initialize()
{
    SDK::ULevel* Level = World->PersistentLevel;
    SDK::TArray<SDK::AActor*>& Actors = Level->Actors;
    for (SDK::AActor* Actor : Actors)
    {
        if (!Actor || !Actor->IsA(SDK::EClassCastFlags::Pawn) || !Actor->IsA(SDK::AFortPlayerPawn::StaticClass()))
            continue;

        SDK::AFortPlayerPawn* Pawn = static_cast<SDK::AFortPlayerPawn*>(Actor);
        Pawn->ServerChoosePart();
    }
}

DWORD WINAPI Main(LPVOID)
{
    AllocConsole();
    FILE* File;
    freopen_s(&File, "CONOUT$", "w+", stdout);
    SetConsoleTitleA("UniversalSkinChanger - Dev-v0.0.0.1");
    Addresses::SetupVersion();
    return 0;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, Main, 0, 0, 0);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

