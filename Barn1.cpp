/*
ID: thomasw6
TASK: barn1
LANG: C++
*/
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;
bool greaterthan(int a, int b)
{
	return a > b;
}
int main()
{
	ofstream fout("barn1.out");
	ifstream fin("barn1.in");
	int m, s, c;
	fin >> m >> s >> c;
	int number[200];
	for (int i = 0; i < c; i++) {
		int x;
		fin >> x;
		number[i] = x;
	}
	sort(number, number + c);
	int holes[100];
	int n = 0;
	for (int j = 1; j < c; j++) {
		if ((number[j] - number[j - 1]) > 1) {
			holes[n] = number[j] - number[j - 1] - 1;
			n++;
		}
	}
	sort(holes, holes + n, greaterthan);
	int total = 0;

	for (int j = 0; j < n; j++) {
		if (j + 1 <= m - 1) {
			continue;
		}
		total += holes[j];

	}
	

	fout << c + total<< endl;
}