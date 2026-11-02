#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    // B

    ifstream filename;
    filename.open("file3.txt", ios::in);

    int lines = 0;
    int words = 0;
    int symbols = 0;

    string line;
    string word;
    while (getline(filename, line)) {
        lines++;

        stringstream ss(line);
        while (ss >> word) {
            words++;
        }
        symbols += line.length();
    }
    symbols += (lines - 1); // \n

    cout << "linie: " << lines << endl;
    cout << "slowa: " << words << endl;
    cout << "znaki: " << symbols << endl;
}