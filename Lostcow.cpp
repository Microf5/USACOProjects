// Lostcow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    ofstream fout("lostcow.out");
    ifstream fin("lostcow.in");
    int x, y, counter = 0, mult = 1;
    fin >> x >> y;
    if (y - x > 0) {
        while (1) {
            if (mult == 1) {
                counter += 1;
            }
            else {
                counter += abs(mult - mult / -2);
            }
            if ((x + mult * -2) > y) {
                break;
            }
            mult *= -2;
        }
        counter += y - (x + mult);
    }
    else {
        while (1) {
            if (mult == 1) {
                counter += 1;
            }
            else {
                counter += abs(mult - mult / -2);
            }
            if ((x + mult * -2) < y) {
                break;
            }
            mult *= -2;
        }
        counter += (x + mult)- y;
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
