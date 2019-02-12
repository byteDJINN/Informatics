#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream inFile;
    ofstream outFile;
    inFile.open("streetin.txt");
    outFile.open("streetout.txt");
    int n; int k;
    inFile >> n;
    inFile >> k;
    int answer;
    answer = n/(k+1); 
    
    outFile << answer;
    inFile.close();
    outFile.close();
    cout << answer << endl;
    return 0;
}
