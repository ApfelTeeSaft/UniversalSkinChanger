#include <Windows.h>
#include "addresses.h"
#include "globals.h"
#include <sstream>
#include "iostream"

void Initialize(const std::string& backpackName)
{
    LOGFN("Changing Skin...", LogLevel::Info);
    // SDK::ULevel* Level = World->PersistentLevel;
    SDK::AFortPlayerPawnAthena* TargetPawn = static_cast<SDK::AFortPlayerPawnAthena*>(AFortPlayerController->K2_GetPawn());

    std::string TargetPawnName = TargetPawn->Name.GetRawString();
    if (TargetPawnName.empty())
    {
		LOGFN("TargetPawn Name not Found!", LogLevel::Warning);
    }
    else
    {
        std::cout << "Changing Skin of " << TargetPawnName.c_str() << std::endl;
    }

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

void ProcessActors(std::stringstream& outputStream)
{
    SDK::ULevel* Level = World->PersistentLevel;
    SDK::TArray<SDK::AActor*>& Actors = Level->Actors;
    for (int i = 0; i < SDK::UObject::GObjects->Num(); i++)
    {
        SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);

        if (!Obj)
            continue;

        if (Obj->IsDefaultObject())
            continue;

        if (Obj->IsA(SDK::UCustomCharacterPart::StaticClass()))
        {
            std::string ObjFullName = Obj->GetFullName();
            LOGFN(ObjFullName, LogLevel::Info);
			outputStream << "Found CustomCharacterPart: " << ObjFullName << std::endl;
        }
    }
}

DWORD WINAPI PipeServer(LPVOID)
{
    const char* pipeName = "\\\\.\\pipe\\UniversalSkinChanger";
    HANDLE pipe = CreateNamedPipeA(pipeName, PIPE_ACCESS_DUPLEX, PIPE_TYPE_MESSAGE | PIPE_READMODE_MESSAGE | PIPE_WAIT, 1, 512, 512, 0, NULL);

    if (pipe == INVALID_HANDLE_VALUE)
    {
        LOGFN("Failed to create named pipe!", LogLevel::Error);
        return 1;
    }

    LOGFN("Named pipe server initialized. Waiting for connections...", LogLevel::Info);

    while (true)
    {
        if (ConnectNamedPipe(pipe, NULL) || GetLastError() == ERROR_PIPE_CONNECTED)
        {
            char buffer[512];
            DWORD bytesRead;
            if (ReadFile(pipe, buffer, sizeof(buffer) - 1, &bytesRead, NULL))
            {
                buffer[bytesRead] = '\0';
                std::string backpackName(buffer);
                LOGFN(("Received backpack name: " + backpackName).c_str(), LogLevel::Info);

                Initialize(backpackName);
            }
            DisconnectNamedPipe(pipe);
        }
    }
    CloseHandle(pipe);
    return 0;
}

DWORD WINAPI PipeServer2(LPVOID)
{
    const char* pipeName = "\\\\.\\pipe\\UniversalSkinChanger_Actors";
    HANDLE pipe = CreateNamedPipeA(pipeName, PIPE_ACCESS_DUPLEX, PIPE_TYPE_MESSAGE | PIPE_READMODE_MESSAGE | PIPE_WAIT, 1, 512, 512, 0, NULL);

    if (pipe == INVALID_HANDLE_VALUE)
    {
        LOGFN("Failed to create named pipe for actor processing!", LogLevel::Error);
        return 1;
    }

    LOGFN("Named pipe server for actor processing initialized. Waiting for connections...", LogLevel::Info);

    while (true)
    {
        if (ConnectNamedPipe(pipe, NULL) || GetLastError() == ERROR_PIPE_CONNECTED)
        {
            char buffer[512];
            DWORD bytesRead;

            if (ReadFile(pipe, buffer, sizeof(buffer) - 1, &bytesRead, NULL))
            {
                buffer[bytesRead] = '\0'; // Null-terminate the received string
                std::string command(buffer);

                if (command == "process_actors")
                {
                    std::stringstream outputStream;
                    ProcessActors(outputStream);

                    std::string result = outputStream.str();
                    DWORD bytesWritten;
                    WriteFile(pipe, result.c_str(), result.size(), &bytesWritten, NULL);
                }
            }
            DisconnectNamedPipe(pipe);
        }
    }
    CloseHandle(pipe);
    return 0;
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
            // Initialize();
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
        CreateThread(0, 0, PipeServer, 0, 0, 0);
        CreateThread(0, 0, PipeServer2, 0, 0, 0);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}