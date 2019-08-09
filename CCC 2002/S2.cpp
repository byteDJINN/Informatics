#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if (a%b==0){printf("%d\n",int(a/b));}
    else {
        int p,q;
        p = a%b;
        q = int(b);
        for (int i=2;i<=p;i++) {
            if (p%i==0&&q%i==0){
                p = int(p/i);
                q = int(q/i);
            }
        }
        if (int(a/b) != 0) {
            printf("%d %d/%d\n",int(a/b),p,q);
        } else {
            printf("%d/%d\n",p,q);
        }
    }

}
