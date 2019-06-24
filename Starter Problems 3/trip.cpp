#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    ifstream inFile;
    inFile.open("tripin.txt");
    inFile >> n;
    vector<int> positions;
    int temp;
    for (int i=0;i<n;i++) {
        inFile >> temp;
        if (temp % 3 == 0) {
            positions.push_back(i+1);
        }
    }
    sort(positions.begin(),positions.end());
    inFile.close();
    ofstream outFile;
    outFile.open("tripout.txt");
    if (positions.size() != 0) {
        outFile << positions.size() << "\n";
        for (vector<int>::iterator it = positions.begin();it != positions.end(); it++) {
            outFile << *it << " ";
        }
    }
    else {
        outFile << "Nothing here!";
    }
    outFile.close();
}
