#include <iostream>
#include <format>

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
    string str1 = "string";

    cout << "a" << " | " << sizeof("a") << endl;        // 1bit + 1bit / znak
    cout << "ab" << " | " << sizeof("ab") << endl;      // 1bit + 1bit / znak
    cout << "abc" << " | " << sizeof("abc") << endl;    // 1bit + ...
    cout << "123" << " | " << sizeof("123") << endl;
    cout << "ą" << " | " << sizeof("ą") << endl;        // 1bit + 2bit / znak
    cout << "ąę" << " | " << sizeof("ąę") << endl;      // ...
    cout << str1 << " | " << sizeof(str1) << endl;      // 32 bity
}

void zad3()
{
    cout << "\033[1;32mJan\033[0m \033[1;31mMaciejewski\033[0m" << endl;
}

void zad4()
{
    char a = 0xC4;
    char b = 0x84;
    char c = 0x0a;
    cout << a << b << c;
}

void zad5()
{
    // cout << format('\n');
    // sprawdzic czemu nie dziala
}

// dokonczyc
void zad6()
{
    string input;
    cout << "Podaj string " << endl;
    cin >> input;
    // for (auto char_: input)
    // {
    //     cout << hex << (int) char_;
    // }
}

int main()
{
    //zad1();
    //zad2();
    //zad3();
    //zad4();
    //zad5();
    //zad6();
    return 0;
}
