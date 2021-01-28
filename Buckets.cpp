// Buckets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;
int main()
{
	ofstream fout("buckets.out");
	ifstream fin("buckets.in");
	int bx, by, rx, ry, lx, ly, distance;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			char x;
			fin >> x;
			if (x == 'B') {
				bx = j;
				by = i;
			}
			if (x == 'L') {
				lx = j;
				ly = i;
			}
			if (x == 'R') {
				rx = j;
				ry = i;
			}
		}
	}
	int bl = abs(by - ly) + abs(bx - lx);
	int br = abs(by - ry) + abs(bx - rx);
	int rl = abs(ry - ly) + abs(rx - lx);
	if ((bx == lx || by == ly) && bl == rl + br) {
		distance = abs(by - ly) + abs(bx - lx) + 1;
	}
	else {
		distance = abs(by - ly) + abs(bx - lx) - 1;
	}
	fout << distance;
}
