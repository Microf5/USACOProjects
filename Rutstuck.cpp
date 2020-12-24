// daisychains.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <tuple>
using namespace std;
int main()
{
	tuple <char, int, int> cow;
	int results[50] = { 1000000001,1000000001,1000000001,
		1000000001,1000000001,1000000001,1000000001,1000000001,
		1000000001,1000000001,1000000001,1000000001,1000000001,
		1000000001,1000000001,1000000001,1000000001,1000000001,
		1000000001,1000000001,1000000001,1000000001,1000000001,
		1000000001,1000000001,1000000001,1000000001,1000000001,
		1000000001,1000000001,1000000001,1000000001,1000000001,
		1000000001,1000000001,1000000001,1000000001,1000000001,
		1000000001,1000000001,1000000001,1000000001,1000000001,
		1000000001,1000000001,1000000001,1000000001,1000000001,
		1000000001,1000000001 };
	int n;
	cin >> n;
	tuple<char, int, int> cows[50];

	for (int i = 0; i < n; i++) {
		char d;
		int	x, y;
		cin >> d >> x >> y;
		cows[i] = make_tuple(d, x, y);
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (get<0>(cows[i]) == get<0>(cows[j])) {
				if (get<0>(cows[i]) == 'N') {
					if (get<1>(cows[i]) == get<1>(cows[j])) {
						if ((get<1>(cows[j]) - get<1>(cows[i])) < results[i]) {
							if ((get<1>(cows[j]) - get<1>(cows[i]) != 0)) {
								results[i] = get<1>(cows[j]) - get<1>(cows[i]);
								cout << i << " " << j << endl;
							}
						}
					}
				}
				else {
					if (get<2>(cows[j]) == get<2>(cows[i])) {
						if ((get<2>(cows[j]) - get<2>(cows[i])) < results[i]) {
							if ((get<2>(cows[j]) - get<2>(cows[i])) != 0) {
								results[i] = get<1>(cows[j]) - get<1>(cows[i]);
								cout << i << " " << j << endl;
							}
						}
					}
				}
			}
			else {
				if (((get<2>(cows[j]) - get<1>(cows[i])) == (get<1>(cows[j]) - get<2>(cows[i]))) == false) {
					if (get<0>(cows[i]) == 'N') {
						if ((get<1>(cows[i]) - get<1>(cows[j])) < (get<2>(cows[j]) - get<2>(cows[i]))) {
							if ((get<2>(cows[j]) - get<2>(cows[i])) < results[i]) {
								if ((get<2>(cows[j]) - get<2>(cows[i])) != 0) {
									results[i] = get<2>(cows[j]) - get<2>(cows[i]);
									cout << i << " " << j << endl;
								}
							}
							
						}
					}
					else {
						if ((get<2>(cows[i]) - get<2>(cows[j])) < (get<1>(cows[j]) - get<1>(cows[i]))) {
							if ((get<2>(cows[j]) - get<2>(cows[i])) < results[i]) {
								if ((get<2>(cows[j]) - get<2>(cows[i])) != 0) {
									results[i] = get<1>(cows[j]) - get<1>(cows[i]);
									cout << i << " " << j << endl;
								}
							}

						}
					}
				}
			}
		}

	}
	for (int k = 0; k < n; k++) {
		if (results[k] == 1000000001) {
			cout << "Infinity" << endl;
		}
		else {
			cout << results[k] << endl;
		}
	}
}
