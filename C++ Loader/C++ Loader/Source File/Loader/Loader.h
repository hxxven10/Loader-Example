#pragma once
#include <iostream>

#include <Windows.h>

#include "Ascii_Art.h"

namespace Loader
{
    inline void SetConsoleSize()
    {
        HANDLE ConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
        SMALL_RECT ConsoleWindow = { 0, 0, 55, 22 }; // Set Window Size

        SetConsoleWindowInfo(ConsoleOutput, true, &ConsoleWindow);
    }

    inline void LoadDriver()
    {
        system("Cls");
        printf("[+] Start Load Driver \n");
        Sleep(1000);

        system("Cls");
        Ascii_Art::Ascii_Art2();

        //Add a load of Driver here
        Sleep(5000);

        system("Cls");
        printf("[+] SuccessFully Loaded Driver \n");
        Sleep(2000);
    }

    inline void LoadSpoofer()
    {
        system("Cls");
        printf("[+] Start Load Spoofer \n");
        Sleep(1000);

        system("Cls");
        system("wmic diskdrive get serialnumber");
        Sleep(2000);

        system("Cls");
        Ascii_Art::Ascii_Art3();

        //Add a load of spoofer here
        Sleep(5000);

        system("Cls");
        printf("[+] SuccessFully Loaded Spoofer \n");
        Sleep(2000);

        system("Cls");
        system("wmic diskdrive get serialnumber");
        Sleep(2000);
    }
}
