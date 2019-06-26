#include <bits/stdc++.h>
using namespace std;

int main() {
    FILE * inp = fopen("cavalryin.txt","r");
    FILE * out = fopen("cavalryout.txt","w");
    int n;
    fscanf(inp,"%d",&n);
    vector<int> knights(n+1,0);
    int temp;
    for (int i=0;i<n;i++) {
        fscanf(inp,"%d",&temp);
        knights[temp] ++;
        //printf("%d %d\n",temp,knights[temp]);
    }
    int c = 0;
    int answer = 1;
    for (vector<int>::iterator it=knights.begin();it!=knights.end();it++) {
        //printf("%d\n",*it);
        if (*it != 0 && *it % c != 0) {
            answer = 0;
            break;
        }

        c++;
    }
    if (answer==1) {
        fprintf(out,"YES");
    }
    else {
        fprintf(out,"NO");
    }
}
