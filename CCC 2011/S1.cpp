#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    scanf("%d\n",&n);
    int t = 0;
    int s = 0;
    int newline = 0;
    char c;
    while (newline < n) {
        scanf("%c",&c);
        if (c=='t'||c=='T') {
            t++;
        } else if (c=='s'||c=='S') {
            s++;
        } else if (c=='\n') {
            newline++;
        }
    }
    if (t>s) {
        printf("English\n");
    } else {
        printf("French\n");
    }
}
