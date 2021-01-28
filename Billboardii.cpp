// Billboardii.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout("billboard.out");
    ifstream fin("billboard.in");
    int x1, y1, x2, y2, x3, y3, x4, y4, counter = 0;
    fin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    int area1 = (y2 - y1) * (x2 - x1);
    if (x1 >= x3 && x1 <= x4 && y1 >= y3 && y1 <= y4) {
        counter++;
    }
    if (x2 >= x3 && x2 <= x4 && y1 >= y3 && y1 <= y4) {
        counter++;
    }
    if (x1 >= x3 && x1 <= x4 && y2 >= y3 && y2 <= y4) {
        counter++;
    }
    if (x2 >= x3 && x2 <= x4 && y2 >= y3 && y2 <= y4) {
        counter++;
    }
    if (counter == 4) {
        fout << 0 << endl;
    }
    else if (counter < 2) {
        fout << area1 << endl;
    }
    else {
        int xoverlap = max(0, min(x2, x4) - max(x1, x3));
        int yoverlap = max(0, min(y2, y4) - max(y1, y3));
        int overlap = xoverlap * yoverlap;
        fout << area1 - overlap << endl;
    }
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
