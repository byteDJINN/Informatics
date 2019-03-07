#include <bits/stdc++.h>
using namespace std;

int main () {
    char s[8];
    char word[] = "pusheen";
    scanf("%s",s);
    int errors = 0;
    for (int i=0;i<7;i++) {
        if (word[i] != s[i]) {
            errors += 1;
        }
    }
    printf("%d\n",errors);
}
