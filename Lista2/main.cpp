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
    string str5 = "ą";
    string str6 = "ąę";

    cout << str1 << " | " << sizeof(str1) << endl;
    cout << str2 << " | " << sizeof(str2) << endl;
    cout << str3 << " | " << sizeof(str3) << endl;
    cout << str4 << " | " << sizeof(str4) << endl;
    cout << str5 << " | " << sizeof(str5) << endl;
    cout << str6 << " | " << sizeof(str6) << endl;

    // ilosc zajmowanego miejsca nie jest zalezna od ilosci znakow
}

void zad3()
{
    cout << "\033[1;32mJan\033[0m \033[1;31mMaciejewski\033[0m" << endl;
}

int main()
{
    //zad1();
    //zad2();
    zad3();
    return 0;
}
