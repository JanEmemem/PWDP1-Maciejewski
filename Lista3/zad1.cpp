#include <iostream>

using namespace std;

int main()
{
    string text;
    cout << "Podaj tekst " << endl;
    cin >> text;

    for(int i = text.length() - 1; i >= 0; i--)
    {
        cout << text[i];
    }

    return 0;
}