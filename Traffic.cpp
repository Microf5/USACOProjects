// Traffic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    ofstream fout("traffic.out");
    ifstream fin("traffic.in");
    int l[100];
    int w[100];
    string s[100];
    int n;
    fin >> n;
    for (int i = 0; i < n; i++) {
        fin >> s[i] >> l[i] >> w[i];
    }
    int a = -9999, b = 9999;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == "none") {
            a = max(a, l[i]);
            b = min(b, w[i]);
        }
        if (s[i] == "on") {
            a -= w[i];
            a = max(a, 0);
            b -= l[i];
            b = max(b, 0);
        }
        if (s[i] == "off") {
            a += l[i];
            b += w[i];
        }
    }
    fout << a << " " << b << endl;
    a = -9999;
    b = 9999;
    for (int i = 0; i < n; i++) {
        if (s[i] == "none") {
            a = max(a, l[i]);
            b = min(b, w[i]);
        }
        if (s[i] == "off") {
            a -= w[i];
            a = max(a, 0);
            b -= l[i];
            b = max(b, 0);
        }
        if (s[i] == "on") {
            a += l[i];
            b += w[i];
        }
    }
    fout << a << " " << b << endl;
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
