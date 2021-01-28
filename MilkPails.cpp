// MilkPails.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout("pails.out");
    ifstream fin("pails.in");
    int x, y, m, counter = 0;
    fin >> x >> y >> m;
    for (int i = 0; i <= m / x; i++) {
        for (int j = 0; j <= m / y; j++) {
            if (i * x + j * y <= m) {
                if (i * x + j * y > counter) {
                    counter = i * x + j * y;
                }
            }
        }
    }
    fout << counter << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
