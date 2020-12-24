/*
ID: thomasw6
TASK: milk
LANG: C++
*/
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>

using namespace std;



int main()
{
    ofstream fout("milk.out");
    ifstream fin("milk.in");
	pair<int, int> a[5000];

    int dailyamount, number, price, amount;

    fin >> dailyamount >> number;
    for (int i = 0; i < number; i++) {
        fin >> price >> amount;
        a[i] = make_pair(price, amount);
    }
	
	for (int start = 0; start < number; start++)
	{
		int smallest = start;
		for (int current = start + 1 ; current < number; current++)
		{
			if (a[current] < a[smallest])
				smallest = current;
		}
		swap(a[start], a[smallest]);
	}
	int j = 0;
	int dailyprice = 0;
	while (1) {
		if (dailyamount >= a[j].second) {
			dailyamount -= a[j].second;
			dailyprice += a[j].second * a[j].first;
			j++;
		}
		else {
			dailyprice += a[j].first * dailyamount;
			break;
		}
	}
	fout << dailyprice << endl;

    }




