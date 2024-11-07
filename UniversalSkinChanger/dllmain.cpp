#include <Windows.h>
#include "addresses.h"
#include "globals.h"

void Initialize()
{
    LOGFN("Changing Skin...", LogLevel::Info);
    // SDK::ULevel* Level = World->PersistentLevel;
    SDK::AFortPlayerPawnAthena* TargetPawn = static_cast<SDK::AFortPlayerPawnAthena*>(AFortPlayerController->K2_GetPawn());

    std::string TargetPawnName = TargetPawn->Name.GetRawString();
	std::cout << "Changing Skin of " << TargetPawnName.c_str() << std::endl;

    SDK::UCustomCharacterPart* BackpackPart = SDK::UObject::FindObjectFast<SDK::UCustomCharacterPart>("CP_Backpack_LoveLlama");
    if (!BackpackPart)
    {
        LOGFN("UCustomCharacterPart: CP_Backpack_LoveLlama Not Found!", LogLevel::Error);
        return;
    }

    if (TargetPawn)
    {
        TargetPawn->ServerChoosePart(SDK::EFortCustomPartType::Backpack, BackpackPart);
    }
    else
    {
        LOGFN("No valid AFortPlayerPawn found!", LogLevel::Error);
    }
}

DWORD WINAPI Main(LPVOID)
{
    AllocConsole();
    FILE* File;
    SetStdHandle(STD_OUTPUT_HANDLE, NULL);
    SetStdHandle(STD_ERROR_HANDLE, NULL);
    freopen_s(&File, "CONOUT$", "w", stdout);
    freopen_s(&File, "CONOUT$", "w", stderr);
    SetConsoleTitleA("UniversalSkinChanger - Dev-v0.0.0.1");
    Addresses::SetupVersion();
    LOGFN("UniversalSkinChanger initialized.", LogLevel::Info);
    LOGFN("UniversalSkinChanger made with <3 by ApfelTeeSaft", LogLevel::Info);

    while (true)
    {
        if (GetAsyncKeyState(VK_F3) & 0x8000)
        {
            Initialize();
            Sleep(200);
        }
        Sleep(10);
    }

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved)
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