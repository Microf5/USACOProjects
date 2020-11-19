/*
ID: thomasw6
TASK: beads
LANG: C++
*/
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>


using namespace std;
int main()
{
    ofstream fout("beads.out");
    ifstream fin("beads.in");
    int x, result, state;
    string y;
    fin >> x >> y;
    int max = 0;
    y = y + y;
    for(int i = 0; i < x; i++ ) {
        char c = y[i];
        int value = 0;
        if (c == 'w') {
            state = 0;
        }
        else {
            state = 1;
        }
        int j = i;
        while (state <= 2) {
            while (j < x + i && (y[j] == c || y[j] == 'w')) {
                value++;
                j++;
            }
            state++;
            c = y[j];
        }
        if (value > max) {
            max = value;
        }
    }
    fout << max << endl;

}
