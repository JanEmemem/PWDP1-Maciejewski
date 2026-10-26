#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // ten kod to smietnik
    // prosze nie kopiowac

    int size = 800;

    ofstream filename;
    filename.open("file.pgm", ios::out);

    filename << "P2\n"; // naglowek formatu
    filename << size << " " << size << "\n";
    filename << "1\n"; // max kolor

    string pixels = "";
    string row = "";
    string row_ = "";

    for(int i = 1; i <= 16; i++)
    {
        // tworzy 100x1 czarne
        if ((i % 2) == 0) {
            for (int x = 1; x <= 100; x++) {
                row += "0 ";
            }
        }
        // tworzy 100x1 biale
        else {
            for (int x = 1; x <= 100; x++) {
                row += "1 ";
            }
        }

        // tworzy 800x100
        if (i % 8 == 0) {
            if (i % 16 == 0)
            {
                for (int z = row.length() - 1; z >= 0; z--) {
                    row_ += row[z];
                }
                row = row_;
            }
            for (int y = 1; y <= 100; y++) {
                pixels += row;
            }
            row = "";
        }
    }

    //tworzy 800x800
    for (int z = 0; z <= 3; z++) {
        pixels += pixels;
    }

    filename << pixels;

    filename.close();
    cout << "Zapisano plik" << endl;
}