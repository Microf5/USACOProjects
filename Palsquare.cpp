/*
ID: thomasw6
TASK: palsquare
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


int main()
{
    ofstream fout("palsquare.out");
    ifstream fin("palsquare.in");
    int base;
    fin >> base;
    char res[17];
    int index = 0;
    int counter;
   for (int i = 1; i <= 300; i++) {
        fromDeci(res, base, i);
        string s = res;
        fromDeci(res, base, i * i);
        string s2 = res;
        counter = 0;
        for (int j = 0; j < s2.length() / 2; j++) {
            if(s2[j] != s2[s2.length() - 1 - j]){
                break;
                counter++;
            }

        }
        if (counter == s2.length() / 2) {
            fout << s << " " << s2 << endl;
        }
    }
    

}
