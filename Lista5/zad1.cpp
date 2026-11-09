#include <iostream>

using namespace std;

int suma(int tab[], int size)
{
    int sum = 0;
    for(int i = 1; i <= size; i++) {
        sum += tab[i - 1];
    }

    return sum;
}

void inverse(int tab[], int size) {
    int tab_[size];
    for (int i = 0; i < size; i ++)
    {
        tab_[i] = tab[size - (i + 1)];
    }

    for (int i = 0; i < size; i++)
    {
        tab[i] = tab_[i];
    }
}

void seq (int tab[], int size, int a0, int r)
{
    for(int i = 0; i < size; i++) {
        tab[i] = a0 + (i*r);
    }
}

int main()
{
    int a[4] = {1, 2, 3, -5};
    cout << suma(a, 4) << "\n";   // 1
    cout << suma(a, 2) << "\n";   // 3
    cout << suma(a, 0) << "\n";   // 0

    int b[] = {1, 2, 3}; // {3, 2, 1}
    inverse(b, 3);

    for(int x: b)
        cout << x << " ";
    cout << endl;

    int c[10];
    seq(c, 10, 1, 2);
    for(int x: c)
        cout << x << " ";

    return 0;
}
