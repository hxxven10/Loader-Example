#include <iostream>
#include <Windows.h>	

#include "Loader/Loader.h"

int main()
{
    Loader::SetConsoleSize();
    SetConsoleTitleA("Loader");

    DashBoard:
    {
        system("Cls");
        Ascii_Art::Ascii_Art1();
        printf("\n");
        printf("\n");
        printf("[1] Load Driver \n");
        printf("[2] Load Spoofer \n");
        printf("[3] Load Cheat \n");
        printf("Choose Your Option:");
    }

    int Option;
    std::cin >> Option;
    switch (Option)
    {
    case 1:
        Loader::LoadDriver();
        goto DashBoard;
        break;

    case 2:
        Loader::LoadSpoofer();
        goto DashBoard;
        break;

    case 3:
        system("Cls");
        printf("[+] Start Load Cheat \n");
        Sleep(1000);
        break;
    }
}