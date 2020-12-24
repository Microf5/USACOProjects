// ABCs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int numbers[7];
    for (int i = 0; i < 7; i++) {
        int x;
        cin >> x;
        numbers[i] = x;
    }
    sort(numbers, numbers + 7);

    int abc = numbers[6];
    int bc = numbers[5];
    int ac = numbers[4];
    int ab = numbers[3];
    int a = abc - bc;
    int b = abc - ac;
    int c = abc - a - b;
    cout << a << " " << b << " " << c << endl;
    
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
