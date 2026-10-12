#include <iostream>

using namespace std;

void zad1()
{
    string imie;
    string nazwisko;

    cout << "Podaj imie " << endl;
    cin >> imie;
    cout << "Podaj nazwisko " << endl;
    cin >> nazwisko;
    cout << imie + " " + nazwisko;
}

void zad2()
{
    string str1 = "a";
    string str2 = "ab";
    string str3 = "abc";
    string str4 = "123";

    cout << sizeof(str1) << endl;
    cout << sizeof(str2) << endl;
    cout << sizeof(str3) << endl;
    cout << sizeof(str4) << endl;
}

int main()
{
    //zad1();
    zad2();
    return 0;
}
