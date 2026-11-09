// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <string>
// #include <cmath>

// using namespace std;

// char GetSymbol(int currentValue, int maxValue)
// {
//     string symbols = " ..,:;!=oxO#%@";
//     int charId = round((double)currentValue/maxValue * (symbols.length() - 1));

//     return symbols[charId];
// }

// int main()
// {
//     ifstream filename;
//     filename.open("cat_p2.pgm", ios::in);

//     string header;
//     int size[2];
//     int maxValue;

//     string _;
//     for (int i = 1; i <= 3; i++)
//     {
//         getline(filename, _);
//         switch(i) {
//             // naglowek formatu
//             case 1:
//                 header = _;
//                 break;
//             // wymiary x y
//             case 3:
//                 maxValue = stoi(_);
//                 break;
//             case 2:
//                 stringstream ss(_);
//                 ss >> size[0] >> size[1];
//                 break;
//             // max value
//         }
//     }

//     cout << header << " " << size[0] << " " << size[1] << " " << maxValue << endl;
//     if (header != "P2")
//         return 0;

//     ofstream filename_;
//     filename_.open("asciiart.txt", ios::out);
//     int value;
//     int i = 0;
//     while(filename >> value)
//     {
//         filename_ << GetSymbol(value, maxValue);
//         i++;

//         if (i % size[0] == 0)
//             filename_ << endl;
//     }
//     filename.close();
//     filename_.close();

//     cout << "Done!" << endl;
// }

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

char GetSymbol(int currentValue, int maxValue)
{
    string symbols = " ..,:;!=oxO#%@";
    int charId = round((double)currentValue / maxValue * (symbols.length() - 1));

    return symbols[charId];
}

int main()
{
    ifstream filename("cat_p2.pgm");

    string header;
    int width, height, maxValue;

    filename >> header >> width >> height >> maxValue;

    if (header != "P2")
        return -1;

    ofstream filename_("file2.txt");

    int value;

    for (int i = 0; i < width * height; i++)
    {
        filename >> value;
        filename_ << GetSymbol(value, maxValue);

        if ((i + 1) % width == 0)
        {
            filename_ << endl;
        }
    }

    filename.close();
    filename_.close();

    cout << "Done" << endl;

    return 0;
}