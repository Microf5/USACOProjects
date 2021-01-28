#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int hasodd = 0, haseven = 0, counter1 = 0, counter2 = 0;
	for (int i = 0; i < x; i++) {
		int y;
		cin >> y;
		if (y % 2 == 1) {
			hasodd++;
		}
		else {
			haseven++;
		}
	}
	while (1) {
		if (haseven == 0 && hasodd == 0) {
			break;
		}
		if (counter2 == 0) {
			if (haseven == 0) {
				if (hasodd == 7) {
					hasodd -= 2;
				}
				hasodd -= 2;
				counter1++;
			}
			else {
				haseven--;
				counter1++;
			}
			counter2 = 1;
		}
		else {
			if (haseven == 0) {
				if (hasodd == 5) {
					hasodd -= 2;
				}
			}
			hasodd--;
			counter1++;
			counter2 = 0;
		}
	}
	cout << counter1;
}