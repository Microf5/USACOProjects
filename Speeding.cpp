// Speeding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    ofstream fout("speeding.out");
    ifstream fin("speeding.in");
    int n, m, max = 0, counter = 0, counter2 = 0, counter3 = 0;
    fin >> n >> m;
    vector<pair<int, int> > vn, vm;
    for (int i = 0; i < n; i++) {
        int x, y;
        fin >> x >> y;
        vn.push_back(make_pair(x,y));
    }
    for (int i = 0; i < m; i++) {
        int x, y;
        fin >> x >> y;
        vm.push_back(make_pair(x, y));
    }
    
    while (counter3 != 100) {
        if (vn[counter].first < vm[counter2].first) {
            if (vm[counter2].second > vn[counter].second) {
                max = vm[counter2].second - vn[counter].second;
            }
            vm[counter2].first -= vn[counter].first;
            counter3 += vn[counter].first;
            counter++;
        }
        else {
            if (vm[counter2].second > vn[counter].second) {
                max = vm[counter2].second - vn[counter].second;
            }
            vn[counter].first -= vm[counter2].first;
            counter3 += vm[counter2].first;
            counter2++;
        }
    }
    fout << max << endl;

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
