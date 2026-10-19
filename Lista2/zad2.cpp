#include <iostream>
#include <windows.h>

using namespace std;

void zad()
{
    SetConsoleOutputCP(65001);

    string str1 = "string";

    cout << "a" << " | " << sizeof("a") << endl;        // 1bajt + 1bajt / znak
    cout << "ab" << " | " << sizeof("ab") << endl;      // 1bajt + 1bajt / znak
    cout << "abc" << " | " << sizeof("abc") << endl;    // 1bajt + ...
    cout << "123" << " | " << sizeof("123") << endl;
    cout << "ą" << " | " << sizeof("ą") << endl;        // 1bajt + 2bajty / znak
    cout << "ąę" << " | " << sizeof("ąę") << endl;      // ...
    cout << str1 << " | " << sizeof(str1) << endl;      // 32 bajty

    // "a" char[a] tablica znaków, 0 oznacza koniec
    // 'a' char
    // string s = "..."  - stała długość + operacje po .
}

int main()
{
    zad();

    return 0;
}