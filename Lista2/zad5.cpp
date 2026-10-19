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
}

int main()
{
    zad();

    return 0;
}