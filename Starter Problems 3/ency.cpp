#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream inFile;
    inFile.open("encyin.txt");
    int n,q;
    inFile >> n;
    inFile >> q;
    int nums[n];
    for (int i=0;i<n;i++) {
        inFile >> nums[i];
    }
    ofstream outFile;
    outFile.open("encyout.txt");
    int temp;
    for (int i=0;i<q;i++) {
        inFile >> temp;
        outFile << nums[temp-1] << "\n";
    }
    inFile.close();
    outFile.close();
}
