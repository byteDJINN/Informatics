#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream inFile;
    inFile.open("addin.txt");
    int a = 0;
    int x;
    while (inFile >> x) {
        a += x;
    }
    inFile.close();
    ofstream outFile;
    outFile.open("addout.txt");
    outFile << a;
    outFile.close();
}
