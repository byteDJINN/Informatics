#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int k;
    scanf("%d %d",&n,&k);
    int total = 0;
    for (int i=0;i<k+1;i++) {
        total += n*pow(10,i);
    }
    printf("%d",total);
}
