#include <bits/stdc++.h>
using namespace std;

int main() {
    FILE * inFile = fopen("cavalryin.txt","r");
    FILE * outFile = fopen("cavalryout.txt","w");
    int n;
    fscanf(inFile,"%d",&n);
    map<int,int> knights;
    int temp;
    for (int i = 0; i < n; i++) {
        fscanf(inFile,"%d",&temp);
        if (knights.count(temp)==0) {
            knights[temp] = 1;
        } 
        else {
            knights[temp] += 1;
        }
    }
    bool answer = 1;
    map<int,int>::iterator it;
    for (it = knights.begin(); it != knights.end(); it++) {
        if (it->second % it->first != 0) {
            answer = 0;
            break;
        }
    }
    if (answer) {
        fprintf(outFile,"YES");
    }
    else {
        fprintf(outFile,"NO");
    }
    fclose(inFile);
    fclose(outFile);
    return 0;
    

    
}
