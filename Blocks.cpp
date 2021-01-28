// Block Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ofstream fout("blocks.out");
    ifstream fin("blocks.in");
    int x;
    fin >> x;
    int allalphabet[26] = { 0 };
    for (int i = 0; i < x; i++) {
        string s1, s2;
        int allalphabet1[26] = { 0 };
        int allalphabet2[26] = { 0 };
        fin >> s1 >> s2;
        for (int j = 0; j < s1.length(); j++) {
            allalphabet1[s1[j] - 'a']++;
        }
        for (int j = 0; j < s2.length(); j++) {
            allalphabet2[s2[j] - 'a']++;
        }
        for (int j = 0; j < 26; j++) {
            allalphabet[j] += max(allalphabet1[j], allalphabet2[j]);
        }
    }
    for (int i = 0; i < 26; i++) {
        fout << allalphabet[i] << endl;
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
