#include <iostream>
#include <format>
#include <windows.h>

using namespace std;

void zad()
{
    SetConsoleOutputCP(65001);

    // cout << format('\n');
    // sprawdzic czemu nie dziala
    cout << "var: " << format("{:X}", '\n') << endl;
    // format jest obsługiwany w C++ 20+

    // {:x}
    // {:X}
    // {:02X}

    // format("{0:X} {1} {0}", imie, nazwisko)
    //                         0     1
}

int main()
{
    zad();

    return 0;
}