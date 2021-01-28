#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    vector<int> l, z, a;
    ofstream fout("shuffle.out");
    ifstream fin("shuffle.in");
    int x;
    fin >> x;
    for (int i = 0; i < x; i++) {
        int y;
        fin >> y;
        l.push_back(y);
    }
    for (int i = 0; i < x; i++) {
        int y;
        fin >> y;
        z.push_back(y);
    }
    for (int i = 0; i < x; i++) {
        a.push_back(z[l[i] - 1]);
    }
    for (int i = 0; i < x; i++) {
        z[i] = a[l[i] - 1];
    }
    for (int i = 0; i < x; i++) {
        fout << z[l[i] - 1] << endl;
    }
}

