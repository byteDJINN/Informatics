#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream inFile;
    inFile.open("dictin.txt");
    int d,w;
    inFile >> d >> w;
    map<int,int> translations;
    int tempa,tempb;
    for (int i=0;i<d;i++) {
        inFile >> tempa >> tempb;
        translations[tempa] = tempb;
    }
    ofstream outFile;
    outFile.open("dictout.txt");
    int temp;
    for (int i=0;i<w;i++) {
        inFile >> temp;
        //printf("%d\n",temp);
        map<int,int>::iterator it = translations.find(temp);
        if (it != translations.end()) {
            //printf("%d %d\n",it->second,temp);
            outFile << it->second;
        }
        else {
            outFile << "C?";
        }
        outFile << "\n";
    }
    inFile.close();
    outFile.close();
}
