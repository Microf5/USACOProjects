/*
ID: thomasw6
TASK: transform
LANG: C++
*/
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<vector<char>> nine(vector<vector<char>>ninety){
    vector<vector<char>> ninety2;
    ninety2 = ninety;
    for (int i = 0; i < ninety.size(); i++) {
        for (int j = 0; j < ninety.size(); j++) {
            ninety2[i][j] = ninety[(ninety.size()-1)-j][i];
        }
    }
    return ninety2;

}
vector<vector<char>> eighty(vector<vector<char>>ninety) {
    vector<vector<char>> ninety2;
    ninety2 = ninety;
    ninety2 = nine(ninety);
    ninety2 = nine(ninety2);
    return ninety2;

}
vector<vector<char>> seventy(vector<vector<char>>ninety) {
    vector<vector<char>> ninety2;
    ninety2 = ninety;
    ninety2 = nine(ninety);
    ninety2 = nine(ninety2);
    ninety2 = nine(ninety2);
    return ninety2;

}

vector<vector<char>> reflect(vector<vector<char>>ninety) {
    vector<vector<char>> ninety2;
    ninety2 = ninety;
    for (int i = 0; i < ninety.size(); i++) {
        for (int j = 0; j < ninety.size(); j++) {
            ninety2[i][j] = ninety[i][(ninety.size() - 1) - j];
        }
    }
    return ninety2;

}
vector<vector<char>> rninety(vector<vector<char>>ninety) {
    vector<vector<char>> ninety2;
    ninety2 = reflect(ninety);
    ninety2 = nine(ninety2);
    return ninety2;
}
 
vector<vector<char>> reighty(vector<vector<char>>ninety) {
    vector<vector<char>> ninety2;
    ninety2 = reflect(ninety);
    ninety2 = eighty(ninety2);
    return ninety2;
}
vector<vector<char>> rseventy(vector<vector<char>>ninety) {
    vector<vector<char>> ninety2;
    ninety2 = reflect(ninety);
    ninety2 = seventy(ninety2);
    return ninety2;
}


int main()
{
    ofstream fout("transform.out");
    ifstream fin("transform.in");
    int n;
    fin >> n;
    vector<vector<char>> row;

    for (int i = 0; i < n; i++) {
        vector<char> column = {};
        for (int i = 0; i < n; i++) {
            char c;
            fin >> c;
            column.push_back(c);
        }
        row.push_back(column);

    }
    vector<vector<char>> row2;
    for (int i = 0; i < n; i++) {
        vector<char> column2 = {};
        for (int i = 0; i < n; i++) {
            char c2;
            fin >> c2;
            column2.push_back(c2);
        }
        row2.push_back(column2);
    }
    if (nine(row) == row2) {
        fout << '1' << endl;
    }
    else if (eighty(row) == row2) {
        fout << '2' << endl;
    }
    else if (seventy(row) == row2) {
        fout << '3' << endl;
    }
    else if (reflect(row) == row2) {
        fout << '4' << endl;
    }
    else if (rninety(row) == row2) {
        fout << '5' << endl;
    }
    else if (reighty(row) == row2) {
        fout << '5' << endl;
    }
    else if (rseventy(row) == row2) {
        fout << '5' << endl;
    }
    else if (row == row2) {
        fout << '6' << endl;
    }
    else {
        fout << '7' << endl;
    }

}
 
