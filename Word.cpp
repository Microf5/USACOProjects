/*
ID: thomasw6
TASK: word
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
int main()
{
	ofstream fout("word.out");
	ifstream fin("word.in");
	int n, k, counter = 0;
	fin >> n >> k;
	for (int i = 0; i < n; i++) {
		string s;
		fin >> s;
		if ((counter + s.length()) > k) {
			fout << endl << s;
			counter = s.length();
		}
		else {
			if (counter > 0) {
				fout << " ";
			}
			counter += s.length();
			fout << s;
		}
	}
	fout << endl;



}


