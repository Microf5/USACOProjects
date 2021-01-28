/*
ID: thomasw6
TASK: combo
LANG: C++
*/
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

bool check(int dial, int combo1, int combo2, int combo3, int num1, int num2, int num3) {
	int counter2 = 0;
	if (combo1 - num1 >= -2 && combo1 - num1 <= 2) {
		counter2++;
	}
	else if (( dial + num1 - combo1) <= 2) {
		counter2++;
	}
	else if ((dial  + combo1 - num1) <= 2) {
		counter2++;
	}

	else {
		return 0;
	}
	if (combo2 - num2 >= -2 && combo2 - num2 <= 2) {
		counter2++;
	}
	else if ((dial + num2 - combo2) <= 2) {
		counter2++;
	}
	else if ((dial + combo2 - num2) <= 2) {
		counter2++;
	}
	else {
		return 0;
	}
	if (combo3 - num3 >= -2 && combo3 - num3 <= 2) {
		counter2++;
	}
	else if ((dial + num3 - combo3) <= 2) {
		counter2++;
	}
	else if ((dial + combo3 - num3) <= 2) {
		counter2++;
	}
	else {
		return 0;
	}
	return 1;

}

int main1(){
	cout << check(50, 1, 2, 3, 50, 2, 3);
	return 0;
}

int main()
{
	ofstream fout("combo.out");
	ifstream fin("combo.in");
	int dial, combo1, combo2, combo3, mascombo1, mascombo2, mascombo3;
	int counter = 0;
	fin >> dial >> combo1 >> combo2 >> combo3 >> mascombo1 >> mascombo2 >> mascombo3;
	for (int i = 1; i <= dial; i++) {
		for (int ii = 1; ii <= dial; ii++) {
			for (int iii = 1; iii <= dial; iii++) {
				if (check(dial, combo1, combo2, combo3, i, ii, iii)) {
					counter++;
					cout << i << ii << iii << endl;
				}
				else if (check(dial, mascombo1, mascombo2, mascombo3, i, ii, iii)) {
					counter++;
					cout << i << ii << iii << endl;
				}
			}
		}
	}
	fout << counter << endl;

	return 0;

}




