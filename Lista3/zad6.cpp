#include <iostream>

using namespace std;

int main()
{
    string text;
    string red = "\033[1;31m";
    string green = "\033[1;32m";

    cout << "Podaj tekst: ";
    cin >> text;

    for (int i = 0; i < text.length(); i++)
    {
        if (i % 2 == 0)
            cout << red;
        else
            cout << green;

        cout << text[i];
    }

    return 0;
}