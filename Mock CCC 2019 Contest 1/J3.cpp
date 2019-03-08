#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    int a,b,c,x;
    bool possible;
    for (int i = 0;i<t;i++) {
        possible = false;
        scanf("%d %d %d",&a,&b,&c);
        x = 0;
        while (x*a <= c) {
            if ((c - x*a) % b == 0) {
                possible = true;
                break;
            }
            x++;
        }
        if (possible) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
}
