#include <iostream>
#include <windows.h>

using namespace std;

void zad()
{
    SetConsoleOutputCP(65001);

    string input;
    cout << "Podaj string: " << endl;
    cin >> input;
    for (auto char_: input)
    {
        cout << hex << (int) char_;
    }
}

int main()
{
    zad();

    return 0;
}