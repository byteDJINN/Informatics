#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream inFile;
    inFile.open("sitin.txt");
    int r,s,t;
    inFile >> r;
    inFile >> s;
    inFile >> t;
    inFile.close();
    int seats = r*s;
    int standing = 0;
    int sitting = (int)t;
    if (t > seats) {
        standing = t - seats;
        sitting = (int) seats;
    }
    ofstream outFile;
    outFile.open("sitout.txt");
    outFile << sitting << " " << standing;
}
