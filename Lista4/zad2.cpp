#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;


int main()
{
    ifstream filename;
    string symbols = " ..,:;!=oxO#%@";

    filename.open("file.pgm", ios::in);

    string header;
    int size[2];
    int maxValue;

    string _;
    for (int i = 1; i <= 3; i++)
    {
        getline(filename, _);
        switch(i) {
            // naglowek formatu
            case 1:
                header = _;
                break;
            // wymiary x y
            case 2:
                size[0] = std::stoi(_.);
                break;
            // max value
            case 3:
                break;
        }
    }
}