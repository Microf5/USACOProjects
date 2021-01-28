// Square.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    ofstream fout("square.out");
    ifstream fin("square.in");
    int x1a, y1a, x2a, y2a, x1b, y1b, x2b, y2b, xlow, xhigh, ylow, yhigh;
    fin >> x1a >> y1a >> x2a >> y2a >> x1b >> y1b >> x2b >> y2b;
    if (x1a < x1b) {
        xlow = x1a;
    }
    else {
        xlow = x1b;
    }
    if (x2a < x2b) {
        xhigh = x2b;
    }
    else {
        xhigh = x2a;
    }
    if (y1a < y1b) {
        ylow = y1a;
    }
    else {
        ylow = y1b;
    }
    if (y2a < y2b) {
        yhigh = y2b;
    }
    else {
        yhigh = y2a;
    }
    if (yhigh - ylow > xhigh - xlow) {
        fout << (yhigh - ylow) * (yhigh - ylow) << endl;
    }
    else {
        fout << (xhigh - xlow) * (xhigh - xlow) << endl;
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
