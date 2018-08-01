#include <cstdio>
#include <iostream>

int team[100005]; // 2 is blue, 1 is red

int main() {
    freopen("tagin.txt","r",stdin);
    freopen("tagout.txt","w",stdout);
    int n;int m;
    scanf("%d %d",&n,&m);
    team[2] = 2;
    team[1] = 1;
    int a;int b;
    int bc = 1;int rc = 1;
    for (int i=0;i<m;i++) {
        scanf("%d %d",&a,&b);
        if (team[a] == 2) {
            if (team[b] == 1) {
                rc -= 1;
            }
            team[b] = 2;
            bc += 1;
        } else {
            if (team[b] == 2) {
                bc -= 1;
            }
            team[b] = 1;
            rc += 1;

        }
    }
    printf("%d %d",rc,bc);
}
