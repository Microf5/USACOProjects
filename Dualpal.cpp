/*
ID: thomasw6
TASK: dualpal
LANG: C++
*/
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;



char* fromDeci(char res[], int base, int x)
{
    
    int index = 0;
    while (x > 0)
    {
        if (x % base >= 0 && x % base <= 9)
            res[(index)++] = (x % base + '0');
        else
            res[(index)++] = (x % base - 10 + 'A');
        x /= base;
    }
    res[index] = '\0';

    for (int i = 0; i < index / 2; i++)
    {
        char temp = res[i];
        res[i] = res[index - i - 1];

        res[index - i - 1] = temp;
    }

    return res;
}

bool isPal(string s2) {
    int counter = 0;
    for (int j = 0; j < s2.length() / 2; j++) {
        if (s2[j] != s2[s2.length() - 1 - j]) {
            return false;
        }

    }
    return true;

}


int main()
{
    ofstream fout("dualpal.out");
    ifstream fin("dualpal.in");
    char res[17];
    int number, least;
    int counter3 = 0;
    fin >> number >> least;
    int i = least + 1;
    while(counter3 < number){
        int counter2 = 0;
        for (int j = 2; j <= 10; j++) {
            int counter2 = 0;
            if (isPal(fromDeci(res, j, i)) == true) {
                counter2++;
                if (counter2 == 2) {
                    fout << i << endl;
                    counter3++;
                    counter2 = 0;
                    break;
                }
            }

        }
        i++;
    }




}
