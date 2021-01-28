// Cowsignal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    ofstream fout("cowsignal.out");
    ifstream fin("cowsignal.in");
    int m, n, k;
    fin >> m >> n >> k;
    for (int i = 0; i < m; i++) {
        string s;
        fin >> s;
        for (int k1 = 0; k1 < k; k1++) {
            for (int n1 = 0; n1 < n; n1++) {
                for (int k2 = 0; k2 < k; k2++) {
                    fout << s[n1];
                }
            }
            fout << endl;
        }
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
