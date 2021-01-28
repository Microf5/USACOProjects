/*
ID: thomasw6
TASK: promote
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
	ofstream fout("teleport.out");
	ifstream fin("teleport.in");
	int a, b, x, y, t, l;
	fin >> a >> b >> x >> y;
	t = abs(a - y) + abs(b - x);
	l = abs(a - x) + abs(b - y);
	if (t < l) {
		if (abs(b - a) < t) {
			fout << abs(b - a) << endl;
		}
		else {
			fout << t << endl;
		}
	}
	else {
		if (abs(b - a) < l) {
			fout << abs(b - a) << endl;
		}
		else {
			fout << l << endl;
		}
	}

}


