#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	ofstream fout("paint.out");
	ifstream fin("paint.in");
	int a, b, c, d;
	fin >> a >> b >> c >> d;
	int outp = 0;
	outp += b - a;
	outp += d - c;
	outp -= max(min(b, d) - max(a, c), 0);
	fout << outp << endl;


}