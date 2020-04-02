#include <bits/stdc++.h> // get all of the libraries you will need.
using namespace std;
int main() {
    // Open files
    freopen("vasesin.txt","r",stdin);
    freopen("vasesout.txt","w",stdout);
    // Read from input file
    int n;
    scanf("%d",&n);
    // Code
    int v1,v2,v3;
    if (n<6) {
        v1 = 0;
        v2 = 0;
        v3 = 0;
    }
    else {
        v1 = 1;
        v2 = 2;
        v3 = n-3;
    }
    // Write to output file
    printf("%d %d %d",v1,v2,v3);
}

