// teamTicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;
char all[3][3];
bool checkcow(char car) {
    if (all[0][0] == car && all[1][1] == car && all[2][2] == car) {
        return true;
    }
    if (all[0][2] == car && all[1][1] == car && all[2][0] == car) {
        return true;
    }
    for (int i = 0; i < 3; i++) {
        if (all[i][0] == car && all[i][1] == car && all[i][2] == car) {
            return true;
        }
        if (all[0][i] == car && all[1][i] == car && all[2][i] == car) {
            return true;
        }
    }
    return false;
}
bool checkteam(char car1, char car2, char a, char b, char c) {
    if (car1 != a && car1 != b && car1 != c) {
        return false;
    }
    if (car2 != a && car2 != b && car2 != c) {
        return false;
    }
    if (car1 != a && car2 != a) {
        return false;
    }
    if (car1 != b && car2 != b) {
        return false;
    }
    if (car1 != c && car2 != c) {
        return false;
    }
    return true;
}
bool teamwins(char i, char j) {
    if (checkteam(i, j, all[0][0], all[1][1], all[2][2])) {
        return true;
    }
    if (checkteam(i, j, all[0][2], all[1][1], all[2][0])) {
        return true;
    }
    for (int l = 0; l < 3; l++) {
        if (checkteam(i, j, all[l][0], all[l][1], all[l][2])) {
            return true;
        }
        if (checkteam(i, j, all[0][l], all[1][l], all[2][l])) {
            return true;
        }
    }
}
int main()
{
    int total = 0, total2 = 0;
    ofstream fout("tttt.out");
    ifstream fin("tttt.in");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            fin >> all[i][j];
        }
    }
    for (char i = 'A'; i <= 'Z'; i++) {
        total += checkcow(i);
    }
    for (char i = 'A'; i <= 'Z'; i++) {
        for (char j = i+1; j <= 'Z'; j++) {
            if(teamwins(i,j) == true)total2 += 1;
        }
    }
    fout << total << endl << total2 << endl;
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
