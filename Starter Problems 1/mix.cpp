#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream inFile;
    inFile.open("mixin.txt");
    int a,b;
    inFile >> a;
    inFile >> b;
    inFile.close();
    ofstream outFile;
    outFile.open("mixout.txt");
    if (a % b == 0) {
        outFile << a/b;
    }
    else {
        int remainder = a - int(a/b)*b;
        outFile << int(a/b) << " " << remainder << "/" << b;
    }
    outFile.close();
}
