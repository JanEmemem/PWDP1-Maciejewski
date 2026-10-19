#include <iostream>
#include <windows.h>

using namespace std;

void zad()
{
    SetConsoleOutputCP(65001);

    char a = 0xC4;
    char b = 0x84;
    char c = 0x0a;
    cout << a << b << c;
}

int main()
{
    zad();

    return 0;
}