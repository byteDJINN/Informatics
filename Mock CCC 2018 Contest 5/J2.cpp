#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    map<int,int> occurrences;
    int temp;
    bool isin;
    map<int,int>::iterator p;
    for (int i = 0; i < n; i++) {
        scanf("%d",&temp);
        isin = false;
        for (p = occurrences.begin(); p != occurrences.end(); p++) {
            if (p->first == temp) {
                isin = true;
                break;
            }
        }
        if (isin) {
            occurrences[temp] ++;
        }
        else {
            occurrences.insert(pair<int,int>(temp,1));
        }
        
    }
    int answer = occurrences.begin()->first;
    for (p = occurrences.begin(); p != occurrences.end(); p++) {
        if (p->second > occurrences[answer]) {
            answer = p->first;
        }
        else if (p->second == occurrences[answer] && p->first < answer) {
            answer = p->first;
        }
    }
    printf("%d\n",answer);
}
