/*
ID: thomasw6
TASK: milk2
LANG: C++
*/
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct startend {
    int start;
    int end;
};

bool compare(startend time1, startend time2) { return time1.start < time2.start; }
int main()
{
    ofstream fout("milk2.out");
    ifstream fin("milk2.in");
    int n;
    fin >> n;
    vector<startend> times;
    for (int i = 0; i < n; i++) {
        int b;
        int c;
        fin >> b;
        fin >> c;
        times.push_back({ b,c });
    }
    
    sort(times.begin(), times.end(), compare);
    for (int i = 0; i < times.size()-1; i++) {
        if (times[i].end >= times[i + 1].start){
            if (times[i].end <= times[i + 1].end) {
                times[i].end = times[i + 1].end;
            }
            for (int j = i; j < times.size() - 2; j++) {
                times[j + 1] = times[j + 2];
            }
            times.pop_back();
            i--;
        }
        
    }
    int max = 0;
    int max1 = 0;
    if (times.size() == 1) {
        max = times[0].end - times[0].start;
        max1 = 0;
    }
    else {
        for (int i = 0; i < times.size() - 1; i++) {
            int total = times[i].end - times[i].start;
            if (total > max) {
                max = total;
            }
            int difference = times[i + 1].start - times[i].end;
            if (difference > max1) {
                max1 = difference;
            }
        }
    }
    fout << max << " " << max1 << endl;
}
