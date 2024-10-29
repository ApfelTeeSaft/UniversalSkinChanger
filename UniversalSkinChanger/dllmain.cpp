// dllmain.cpp : Definiert den Einstiegspunkt für die DLL-Anwendung.
#include "addresses.h"
#include "globals.h"

void Initialize()
{
    SDK::ULevel* Level = World->PersistentLevel;
    SDK::TArray<SDK::AActor*>& Actors = Level->Actors;
    // SDK::AFortPlayerPawn* TargetPawn = static_cast<SDK::AFortPlayerPawn*>(AFortPlayerController->K2_GetPawn());
    SDK::AFortPlayerPawnAthena* TargetPawn = static_cast<SDK::AFortPlayerPawnAthena*>(AFortPlayerController->Pawn);

    SDK::UCustomCharacterPart* BackpackPart = SDK::UObject::FindObjectFast<SDK::UCustomCharacterPart>("CP_Backpack_TennisFemale");
    if (!BackpackPart)
    {
        LOGFN("UCustomCharacterPart: CP_Backpack_TennisFemale Not Found!", LogLevel::Error);
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

//void TempInit()
//{
//    for (int i = 0; i < SDK::UObject::GObjects->Num(); i++)
//    {
//        SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);
//
//        if (!Obj)
//            continue;
//
//        if (Obj->IsDefaultObject())
//            continue;
//
//        if (Obj->IsA(SDK::UCustomCharacterPart::StaticClass()))
//        {
//            std::string ObjFullName = Obj->GetFullName();
//            LOGFN(ObjFullName, LogLevel::Info);
//        }
//    }
//}

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
    Initialize();
    LOGFN("UniversalSkinChanger initialized.", LogLevel::Info);
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

