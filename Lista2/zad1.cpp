#include <iostream>
#include <windows.h>

using namespace std;

void zad()
{
    SetConsoleOutputCP(65001);

    string imie;
    string nazwisko;

    cout << "Podaj imie " << endl;
    cin >> imie;
    cout << "Podaj nazwisko " << endl;
    cin >> nazwisko;
    cout << imie + " " + nazwisko;
}

int main()
{
    zad();

    return 0;
}