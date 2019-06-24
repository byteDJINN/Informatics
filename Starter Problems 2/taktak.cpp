#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream inFile;
    inFile.open("taktakin.txt");
    int fruits;
    inFile >> fruits;
    int months = 0;
    while (fruits % 11 != 1) {
        months ++;
        fruits *= 2;
    }
    inFile.close();
    ofstream outFile;
    outFile.open("taktakout.txt");
    outFile << months << " " << fruits;
    outFile.close();
}
