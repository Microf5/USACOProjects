/*
ID: thomasw6
TASK: promote
LANG: C++
*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream fout("promote.out");
	ifstream fin("promote.in");
	int cows[4][2];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			fin >> cows[i][j];
		}
	}
	int bronze = cows[3][1] - cows[3][0] + cows[2][1] - cows[2][0] + cows[1][1] - cows[1][0];
	int silver = cows[2][1] - cows[2][0] + cows[3][1] - cows[3][0];
	int gold = cows[3][1] - cows[3][0];
	fout << bronze << endl << silver << endl << gold << endl;
}


