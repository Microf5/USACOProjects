/*
ID: thomasw6
TASK: friday
LANG: C++
*/
#include <string>
#include <fstream>
#include <iostream>


using namespace std;
int main()
{
    ofstream fout("friday.out");
    ifstream fin("friday.in");
    int number[7] = { 0, 0, 0, 0, 0, 0, 0 };
    int x;
    fin >> x;
    int day = 0;
    int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    for (int i = 1900; i < 1900 + x; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
            month[1]=29;
        }
        else {
            month[1]=28;
        }
        for (int y = 0; y < 12; y++) {
            number[day]++;
            day = (day + month[y]) % 7;
        }

    }
    for (int z = 0; z < 6; z++) {
        fout << number[z] << " ";
    }
    fout << number[6] << endl;
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
