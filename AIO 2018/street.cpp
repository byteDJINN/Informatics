#include <bits/stdc++.h>
using namespace std;

int main() {
    FILE * inp = fopen("streetin.txt","r");
    FILE * out = fopen("streetout.txt","w");
    int n,k;
    fscanf(inp,"%d %d",&n,&k);
    int answer = (int)n/(k+1);
    fprintf(out,"%d",answer);
    fclose(out);
    fclose(inp);
}
