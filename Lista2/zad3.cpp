#include <iostream>
#include <windows.h>

using namespace std;

void zad()
{
    SetConsoleOutputCP(65001);

    cout << "\033[1;32mJan\033[0m \033[1;31mMaciejewski\033[0m" << endl;
}

int main()
{
    zad();

    return 0;
}