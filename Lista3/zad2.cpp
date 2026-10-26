#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N = 100'000'000;
    double s = 0;
    cout << "Wynik: " << endl;

    for(int i = 0; i < N; i++)
    {
        s += pow(i/(double)N, 2);
    }
    s *= (1/(double)N);

    cout << s;

    return 0;
}