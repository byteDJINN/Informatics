#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,c;
    ifstream inFile;
    inFile.open("rainin.txt");
    inFile >> n;
    inFile >> c;
    int nums[n];
    for (int i = 0;i<n;i++) {
        inFile >> nums[i];
    }
    int days = 1;
    int total = 0;
    for (int i=0;i<n;i++) {
        total += nums[i];
        //printf("%d %d %d\n",total,nums[i],days);
        if (total < c) {
            days += 1;
        }
    }

    inFile.close();
    ofstream outFile;
    outFile.open("rainout.txt");
    outFile << days;
    outFile.close();
}
