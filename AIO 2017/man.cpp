#include <bits/stdc++.h>
using namespace std;

int main() {
    FILE * inp = fopen("manin.txt","r");
    FILE * out = fopen("manout.txt","w");
    int a,b,c,d;
    fscanf(inp, "%d %d %d %d",&a,&b,&c,&d);
    int pos1 = a-c;
    int pos2 = a+c;
    if (b - d == pos1 || b+d==pos1) {
        fprintf(out,"%d",pos1);
    }
    else if (b - d == pos2 || b+d == pos2) {
        fprintf(out,"%d",pos2);
    }
    
}
