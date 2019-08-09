#include <bits/stdc++.h>
using namespace std;
int main() {
    int q,n;
    scanf("%d\n%d",&q,&n);
    vector<int> dmojistan;
    vector<int> pegland;
    int temp;
    for (int i=0;i<n;i++) {
        scanf("%d",&temp);
        dmojistan.push_back(temp);
    }
    for (int i=0;i<n;i++) {
        scanf("%d",&temp);
        pegland.push_back(temp);
    }
    sort(pegland.begin(),pegland.end());
    sort(dmojistan.begin(),dmojistan.end());
    int total = 0;
    if (q==1) {
        // minimum total speed
        for (int i=0;i<n;i++) {
            total += max(pegland[i],dmojistan[i]);
        }
    }
    else {
        // maximum total speed
        for (int i=0;i<n;i++) {
            total += max(pegland[i],dmojistan[n-i-1]);
        }
    }
    printf("%d\n",total);
}


