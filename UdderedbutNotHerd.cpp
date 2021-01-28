#include <iostream>
#include<string>
using namespace std;
int main()
{
    int alphabet[26], counter = 1;
    for (int i = 0; i < 26; i++) {
        char x;
        cin >> x;
        alphabet[x - 97] = i;
    }
    string mood;
    cin >> mood;
    for (int i = 1; i < mood.length(); i++) {
        if (alphabet[mood[i] - 97] <= alphabet[mood[i - 1] - 97]) {
            counter++;
        }
    }
    cout << counter << endl;
}