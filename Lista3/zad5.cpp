#include <iostream>

using namespace std;

int main()
{

    int c_1;
    int c_n;
    cout << "Podaj c1: ";
    cin >> c_1;

    c_n = c_1;
    cout << "c1 = " << c_1 << endl;

    for(int i = 2; i <= 21; i++)
    {
        if (c_n % 2 == 0)
            c_n = 0.5 * c_n;
        else
            c_n = 3 * c_n + 1;
        cout << "c" << i << " = " << c_n << endl;
    }

    return 0;
}