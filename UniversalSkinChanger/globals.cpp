#include "globals.h"
#include <iostream>
#include <windows.h>

void LOGFN(const std::string& message, LogLevel level) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Determine log level as text
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

    // Print the log message with log level prefix
    std::cout << "[" << levelText << "] " << message << std::endl;

    // Reset color to white
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}