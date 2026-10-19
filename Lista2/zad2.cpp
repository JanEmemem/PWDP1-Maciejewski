#include <iostream>
#include <windows.h>

using namespace std;

void zad()
{
    SetConsoleOutputCP(65001);

    string str1 = "string";

    cout << "a" << " | " << sizeof("a") << endl;        // 1bit + 1bit / znak
    cout << "ab" << " | " << sizeof("ab") << endl;      // 1bit + 1bit / znak
    cout << "abc" << " | " << sizeof("abc") << endl;    // 1bit + ...
    cout << "123" << " | " << sizeof("123") << endl;
    cout << "ą" << " | " << sizeof("ą") << endl;        // 1bit + 2bit / znak
    cout << "ąę" << " | " << sizeof("ąę") << endl;      // ...
    cout << str1 << " | " << sizeof(str1) << endl;      // 32 bity
}

int main()
{
    zad();

    return 0;
}