#include <bits/stdc++.h>
using namespace std;
int main() {
    int input;
    scanf("%d",&input);
    int cur = 1;
    while (input != 0) {
        cur += input;
        if (cur > 100) {
            cur -= input;
        }
        if (cur == 54) {
            cur = 19;
        }
        if (cur==90){cur=48;}
        if (cur == 99){cur=77;}
        if (cur==9){cur=34;}
        if (cur==40){cur=64;}
        if (cur==67){cur=86;}
        printf("You are now on square %d\n",cur);
        if (cur==100){printf("You Win!");input=0;}
        else {
            scanf("%d",&input);
            if (input == 0) {
                printf("You Quit!\n");
            }
        }
    }
}
