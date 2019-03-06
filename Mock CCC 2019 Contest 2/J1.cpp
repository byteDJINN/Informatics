#include <bits/stdc++.h>
using namespace std;

int main() {
    int p = 0;
    char c;
    for (int i = 0; i < 5; i++) {
        scanf(" %c",&c);
        if (c == 'P') {
            p++;
        }
    }
    printf("%d\n",p);
}
