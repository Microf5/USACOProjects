// JustStalling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int counter = 0;
int recurs(int* n, int* l, int* y, int x, int counter2) {
    for (int i = 0; i < x; i++) {
        if (l[i] < n[counter2]) {
            continue;
        }
        if (y[i] == 0) {
            y[i] = 1;
            recurs(n, l, y, x,counter2 + 1);
            y[i] = 0;
        }
        else {
            continue;
        }
        
    }
    if (counter2 == x) {
        counter++;
        return 0;
    }
}
int main()
{
    int n[20], l[20], y[20] = { 0 };
    int x, counter2 = 0;
    cin >> x;
    for (int i = 0; i < x; i++) {
        cin >> n[i];
    }
    for (int i = 0; i < x; i++) {
        cin >> l[i];
    }
    recurs(n, l, y, x, counter2);

    std::cout << counter;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
