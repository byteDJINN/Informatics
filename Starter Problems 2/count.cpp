#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream inFile;
    inFile.open("countin.txt");
    int n;
    inFile >> n;
    inFile.close();
    ofstream outFile;
    outFile.open("countout.txt");
    for (int i =1;i<=n;i++) {
        outFile << i << "\n";
    }
    outFile.close();
}
