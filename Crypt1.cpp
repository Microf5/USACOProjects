/*
ID: thomasw6
TASK: crypt1
LANG: C++
*/
#include <cmath>
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;


bool check(int* allowed, int x, int f) {
	int counter2 = 0;
	int counter3 = 0;
	int f2 = f;
	int y = 0;
	while (f2 > 0) {
		y++;
		f2 /= 10;
	}
	for (int i = 0; i < y; i++) {
		int foo = (f  / ((int)pow(10, i))) % 10;
		for (int j = 0; j < x; j++) {
			if (foo == allowed[j]) {
				counter2++;
				break;
			}
		}
	}
	if (counter2 == y) {

		return true;
	}

	else {
		return false;
	}
}

int main()
{
	ofstream fout("crypt1.out");
	ifstream fin("crypt1.in");
	int allowed[9];
	int x;

	fin >> x;
	for (int p = 0; p < x; p++) {
		int y;
		fin >> y;
		allowed[p] = y;
	}



	int counter = 0;

	



	for (int d = 0; d < x; d++) {
		for (int e = 0; e < x; e++) {
			for (int a = 0; a < x; a++) {
				for (int b = 0; b < x; b++) {
					for (int c = 0; c < x; c++) {
						int f = allowed[a] * 100 + allowed[b] * 10 + allowed[c];
						if ((f * allowed[d]) < 1000) {
							if ((f * allowed[e]) < 1000) {
								if (((f * allowed[d] * 10) + (f * allowed[e])) < 10000) {
									if (check(allowed, x, f * allowed[d]) == true) {
										if ((check(allowed, x, f * allowed[e]) == true)) {
											if (check(allowed, x, (f * allowed[d] * 10) + (f * allowed[e])) == true) {
												counter++;
												
											}
										}
									}
									}
								}
							}
						}
					}
				}
			}
	} 
	fout << counter << endl;
	
}




