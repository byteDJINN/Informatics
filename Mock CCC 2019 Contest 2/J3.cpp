#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,k;
    scanf("%lld %lld",&n,&k);
    long long bought = n-(n/(k+1));
    printf("%lld\n",bought);
}
