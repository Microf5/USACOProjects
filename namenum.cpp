/*
ID: thomasw6
TASK: namenum
LANG: C++
*/
#include <string>
#include <fstream>
#include <iostream>


using namespace std;
int main()
{
    ofstream fout("namenum.out");
    ifstream rdict("dict.txt");
    ifstream fin("namenum.in");
    string y;
    fin >> y;
    string x;
    bool counter = false;
    for (int i = 0; i < 4617; i++) {
       getline(rdict, x);
       if(x.size() == y.size()){
           for (int j = 0; j < y.size(); j++) {
               if (int(x[j]) < 81) {
                   if ((((int(x[j]) - 62) / 3) + 1) != y[j] - 48) {
                       break;
                   }
               }
               else {
                   if ((((int(x[j]) - 63) / 3) + 1) != y[j] - 48) {
                       break;
                   }
               }
               if (j == y.size() - 1) {
                   fout << x << endl;
                   counter = true;
               }
           }

            }
      } 


    if (counter == false) {
       fout << "NONE" << endl;
    }



    

}