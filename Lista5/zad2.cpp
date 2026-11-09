#include <iostream>
#include <format>

using namespace std;

unsigned collatz(unsigned n)
{
    if (n % 2 == 0)
        return n/2;
    else
        return 3*n + 1;
}

void collatzTable()
{
    for (unsigned n = 1; n <= 1000; n++) {

        unsigned c = n;
        unsigned i = 1;
        unsigned max = n;

        while (c != 1) {
            c = collatz(c);
            i++;

            if (c > max)
                max = c;
        }

        cout << format("{0:4} {1:4} {2:4}", n, i, max) << endl;
    }
}


int main()
{
    // cout << collatz(11) << endl; // 34
    // cout << collatz(34) << endl; // 17

    collatzTable();

    return 0;
}
